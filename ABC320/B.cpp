#include <iostream>
#include <string>
#include <vector>

std::string preprocessString(const std::string &s)
{
    std::string result = "#";
    for (char c : s)
    {
        result += c;
        result += "#";
    }
    return result;
}

int findLongestPalindromeSubstring(const std::string &s)
{
    std::string processedStr = preprocessString(s);
    int n = processedStr.length();
    std::vector<int> palindromeLengths(n, 0);

    int center = 0; // 現在の中心位置
    int right = 0;  // 現在の最も右端の位置
    int maxLen = 0; // 最長回文部分文字列の長さ

    for (int i = 0; i < n; i++)
    {
        int mirror = 2 * center - i; // 中心を反映する位置
        if (i < right)
        {
            palindromeLengths[i] = std::min(right - i, palindromeLengths[mirror]);
        }

        // 現在の位置を中心として回文を拡張
        int leftBoundary = i - (palindromeLengths[i] + 1);
        int rightBoundary = i + (palindromeLengths[i] + 1);

        while (leftBoundary >= 0 && rightBoundary < n && processedStr[leftBoundary] == processedStr[rightBoundary])
        {
            palindromeLengths[i]++;
            leftBoundary--;
            rightBoundary++;
        }

        // 中心と右端を更新
        if (i + palindromeLengths[i] > right)
        {
            center = i;
            right = i + palindromeLengths[i];
        }

        // 最長回文部分文字列の長さを更新
        maxLen = std::max(maxLen, palindromeLengths[i]);
    }
    return maxLen;
}

int main()
{
    std::string s;
    std::cin >> s;
    int maxLen = findLongestPalindromeSubstring(s);
    std::cout << maxLen << std::endl;
    return 0;
}
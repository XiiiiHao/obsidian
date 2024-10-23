<%*
// 定义选中的文本内容
let content = tp.file.selection();

// 定义 callout 选项列表
/*let list = {
  "ℹ️ Info": "info,提示",
  "✏️ Note": "note,笔记",
  "📒 Summary": "summary,概述",
  "🔥 Tip": "tip,技巧",
  "☑️ Check": "check,查核",
  "❔ Help": "help,说明",
  "⚠️ Warning": "warning,警告",
  "❌ Fail": "fail,失败",
  "⚡ Danger": "danger,危险",
  "🪲 Bug": "bug,bug",
  "📋 Example": "example,范例",
  "✍️ Quote": "quote,引用",
  "✅ Success": "success,答案",
  "📕 Reference": "ref,参考"
};*/
let list = {
  "📘 定理": "theorem,定理",
  "📐 公式": "formula,公式",
  "🔍 定义": "definition,定义",
  "💡 解法": "solution,解法",
  "❗ 易错点": "mistake,易错",
  "📝 例题": "example,例题",
  "🔥 重点": "key,重点",
  "🧠 记忆技巧": "memory,记忆",
  "📊 图解": "graph,图解",
  "🔁 练习": "practice,练习",
  "⚖️ 对比": "compare,对比",
  "🎯 考点": "exam,考点",
  "📚 扩展": "extension,扩展",
  "✏️ 笔记": "note,笔记",
  "📒 总结": "summary,总结",
  "❔ 疑问": "question,疑问",
  "⚠️ 注意": "warning,注意",
  "✅ 证明": "proof,证明"
};

// 生成提示模式并返回用户的输入
let keys = Object.keys(list);
let key = await tp.system.suggester(keys, keys);

// 根据用户的选择获取对象属性值
let value = list[key];

// 截取字符串
let index = value.indexOf(",");

// 获取预设的标题
let text = value.substring(index + 1);

// 获取 callout 样式名称
value = value.substring(0, index);

// 判断选中内容是否为空
if (content.trim().length > 0) {
  const prefix = ">";
  let processedLines = content.split("\n").map(line => prefix + " " + line);
  let result = processedLines.join("\n");

  if (key) return "> [!" + value + "]+ " + text + "\n" + result;
} else {
  if (key) return "> [!" + value + "]+ " + text + "\n>";
}
%>

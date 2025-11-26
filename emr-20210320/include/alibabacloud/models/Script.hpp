// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCRIPT_HPP_
#define ALIBABACLOUD_MODELS_SCRIPT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NodeSelector.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class Script : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Script& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionFailStrategy, executionFailStrategy_);
      DARABONBA_PTR_TO_JSON(ExecutionMoment, executionMoment_);
      DARABONBA_PTR_TO_JSON(NodeSelector, nodeSelector_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ScriptArgs, scriptArgs_);
      DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(ScriptPath, scriptPath_);
    };
    friend void from_json(const Darabonba::Json& j, Script& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionFailStrategy, executionFailStrategy_);
      DARABONBA_PTR_FROM_JSON(ExecutionMoment, executionMoment_);
      DARABONBA_PTR_FROM_JSON(NodeSelector, nodeSelector_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ScriptArgs, scriptArgs_);
      DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(ScriptPath, scriptPath_);
    };
    Script() = default ;
    Script(const Script &) = default ;
    Script(Script &&) = default ;
    Script(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Script() = default ;
    Script& operator=(const Script &) = default ;
    Script& operator=(Script &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executionFailStrategy_ == nullptr
        && return this->executionMoment_ == nullptr && return this->nodeSelector_ == nullptr && return this->priority_ == nullptr && return this->scriptArgs_ == nullptr && return this->scriptName_ == nullptr
        && return this->scriptPath_ == nullptr; };
    // executionFailStrategy Field Functions 
    bool hasExecutionFailStrategy() const { return this->executionFailStrategy_ != nullptr;};
    void deleteExecutionFailStrategy() { this->executionFailStrategy_ = nullptr;};
    inline string executionFailStrategy() const { DARABONBA_PTR_GET_DEFAULT(executionFailStrategy_, "") };
    inline Script& setExecutionFailStrategy(string executionFailStrategy) { DARABONBA_PTR_SET_VALUE(executionFailStrategy_, executionFailStrategy) };


    // executionMoment Field Functions 
    bool hasExecutionMoment() const { return this->executionMoment_ != nullptr;};
    void deleteExecutionMoment() { this->executionMoment_ = nullptr;};
    inline string executionMoment() const { DARABONBA_PTR_GET_DEFAULT(executionMoment_, "") };
    inline Script& setExecutionMoment(string executionMoment) { DARABONBA_PTR_SET_VALUE(executionMoment_, executionMoment) };


    // nodeSelector Field Functions 
    bool hasNodeSelector() const { return this->nodeSelector_ != nullptr;};
    void deleteNodeSelector() { this->nodeSelector_ = nullptr;};
    inline const NodeSelector & nodeSelector() const { DARABONBA_PTR_GET_CONST(nodeSelector_, NodeSelector) };
    inline NodeSelector nodeSelector() { DARABONBA_PTR_GET(nodeSelector_, NodeSelector) };
    inline Script& setNodeSelector(const NodeSelector & nodeSelector) { DARABONBA_PTR_SET_VALUE(nodeSelector_, nodeSelector) };
    inline Script& setNodeSelector(NodeSelector && nodeSelector) { DARABONBA_PTR_SET_RVALUE(nodeSelector_, nodeSelector) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline Script& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // scriptArgs Field Functions 
    bool hasScriptArgs() const { return this->scriptArgs_ != nullptr;};
    void deleteScriptArgs() { this->scriptArgs_ = nullptr;};
    inline string scriptArgs() const { DARABONBA_PTR_GET_DEFAULT(scriptArgs_, "") };
    inline Script& setScriptArgs(string scriptArgs) { DARABONBA_PTR_SET_VALUE(scriptArgs_, scriptArgs) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string scriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline Script& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // scriptPath Field Functions 
    bool hasScriptPath() const { return this->scriptPath_ != nullptr;};
    void deleteScriptPath() { this->scriptPath_ = nullptr;};
    inline string scriptPath() const { DARABONBA_PTR_GET_DEFAULT(scriptPath_, "") };
    inline Script& setScriptPath(string scriptPath) { DARABONBA_PTR_SET_VALUE(scriptPath_, scriptPath) };


  protected:
    // 执行失败策略。
    std::shared_ptr<string> executionFailStrategy_ = nullptr;
    // 脚本的执行时机。
    std::shared_ptr<string> executionMoment_ = nullptr;
    // 节点选择器。
    // 
    // This parameter is required.
    std::shared_ptr<NodeSelector> nodeSelector_ = nullptr;
    // 脚本执行优先级。取值范围：1~100。
    std::shared_ptr<int32_t> priority_ = nullptr;
    // 脚本执行参数。
    std::shared_ptr<string> scriptArgs_ = nullptr;
    // 脚本名称。长度为1~64个字符，必须以大小字母或中文开头，不能以http://和https://开头。可以包含中文、英文、数字、下划线（_）、或者短划线（-）
    // 
    // This parameter is required.
    std::shared_ptr<string> scriptName_ = nullptr;
    // 脚本所在OSS路径。
    // 
    // This parameter is required.
    std::shared_ptr<string> scriptPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif

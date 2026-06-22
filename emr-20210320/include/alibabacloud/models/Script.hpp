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
        && this->executionMoment_ == nullptr && this->nodeSelector_ == nullptr && this->priority_ == nullptr && this->scriptArgs_ == nullptr && this->scriptName_ == nullptr
        && this->scriptPath_ == nullptr; };
    // executionFailStrategy Field Functions 
    bool hasExecutionFailStrategy() const { return this->executionFailStrategy_ != nullptr;};
    void deleteExecutionFailStrategy() { this->executionFailStrategy_ = nullptr;};
    inline string getExecutionFailStrategy() const { DARABONBA_PTR_GET_DEFAULT(executionFailStrategy_, "") };
    inline Script& setExecutionFailStrategy(string executionFailStrategy) { DARABONBA_PTR_SET_VALUE(executionFailStrategy_, executionFailStrategy) };


    // executionMoment Field Functions 
    bool hasExecutionMoment() const { return this->executionMoment_ != nullptr;};
    void deleteExecutionMoment() { this->executionMoment_ = nullptr;};
    inline string getExecutionMoment() const { DARABONBA_PTR_GET_DEFAULT(executionMoment_, "") };
    inline Script& setExecutionMoment(string executionMoment) { DARABONBA_PTR_SET_VALUE(executionMoment_, executionMoment) };


    // nodeSelector Field Functions 
    bool hasNodeSelector() const { return this->nodeSelector_ != nullptr;};
    void deleteNodeSelector() { this->nodeSelector_ = nullptr;};
    inline const NodeSelector & getNodeSelector() const { DARABONBA_PTR_GET_CONST(nodeSelector_, NodeSelector) };
    inline NodeSelector getNodeSelector() { DARABONBA_PTR_GET(nodeSelector_, NodeSelector) };
    inline Script& setNodeSelector(const NodeSelector & nodeSelector) { DARABONBA_PTR_SET_VALUE(nodeSelector_, nodeSelector) };
    inline Script& setNodeSelector(NodeSelector && nodeSelector) { DARABONBA_PTR_SET_RVALUE(nodeSelector_, nodeSelector) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline Script& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // scriptArgs Field Functions 
    bool hasScriptArgs() const { return this->scriptArgs_ != nullptr;};
    void deleteScriptArgs() { this->scriptArgs_ = nullptr;};
    inline string getScriptArgs() const { DARABONBA_PTR_GET_DEFAULT(scriptArgs_, "") };
    inline Script& setScriptArgs(string scriptArgs) { DARABONBA_PTR_SET_VALUE(scriptArgs_, scriptArgs) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline Script& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // scriptPath Field Functions 
    bool hasScriptPath() const { return this->scriptPath_ != nullptr;};
    void deleteScriptPath() { this->scriptPath_ = nullptr;};
    inline string getScriptPath() const { DARABONBA_PTR_GET_DEFAULT(scriptPath_, "") };
    inline Script& setScriptPath(string scriptPath) { DARABONBA_PTR_SET_VALUE(scriptPath_, scriptPath) };


  protected:
    // The execution failure strategy. Valid values:
    // 
    // - `FAILED_CONTINUE`: If the script fails, cluster creation or scaling continues.
    // 
    // - `FAILED_BLOCK`: If the script fails, cluster creation or scaling is blocked.
    shared_ptr<string> executionFailStrategy_ {};
    // The execution timing for the script. Valid values:
    // 
    // - `BEFORE_INSTALL`: The script runs before applications are installed.
    // 
    // - `AFTER_STARTED`: The script runs after applications start.
    shared_ptr<string> executionMoment_ {};
    // Specifies the nodes on which the script runs.
    // 
    // This parameter is required.
    shared_ptr<NodeSelector> nodeSelector_ {};
    // > This parameter is deprecated. Scripts run in the order they are defined.
    shared_ptr<int32_t> priority_ {};
    // The optional script execution arguments.
    shared_ptr<string> scriptArgs_ {};
    // The required script name. The name must be 1 to 64 characters long and start with a letter or a Chinese character. It cannot start with `http://` or `https://`. It can contain Chinese characters, letters, numbers, underscores (`_`), or hyphens (`-`).
    // 
    // This parameter is required.
    shared_ptr<string> scriptName_ {};
    // The required path to the script in Object Storage Service (OSS). The path must start with `oss://`.
    // 
    // This parameter is required.
    shared_ptr<string> scriptPath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif

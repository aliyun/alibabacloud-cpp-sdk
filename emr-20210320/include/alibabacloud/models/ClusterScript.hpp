// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLUSTERSCRIPT_HPP_
#define ALIBABACLOUD_MODELS_CLUSTERSCRIPT_HPP_
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
  class ClusterScript : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClusterScript& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionFailStrategy, executionFailStrategy_);
      DARABONBA_PTR_TO_JSON(ExecutionMoment, executionMoment_);
      DARABONBA_PTR_TO_JSON(NodeSelect, nodeSelect_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ScriptArgs, scriptArgs_);
      DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(ScriptPath, scriptPath_);
    };
    friend void from_json(const Darabonba::Json& j, ClusterScript& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionFailStrategy, executionFailStrategy_);
      DARABONBA_PTR_FROM_JSON(ExecutionMoment, executionMoment_);
      DARABONBA_PTR_FROM_JSON(NodeSelect, nodeSelect_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ScriptArgs, scriptArgs_);
      DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(ScriptPath, scriptPath_);
    };
    ClusterScript() = default ;
    ClusterScript(const ClusterScript &) = default ;
    ClusterScript(ClusterScript &&) = default ;
    ClusterScript(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClusterScript() = default ;
    ClusterScript& operator=(const ClusterScript &) = default ;
    ClusterScript& operator=(ClusterScript &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executionFailStrategy_ != nullptr
        && this->executionMoment_ != nullptr && this->nodeSelect_ != nullptr && this->priority_ != nullptr && this->scriptArgs_ != nullptr && this->scriptName_ != nullptr
        && this->scriptPath_ != nullptr; };
    // executionFailStrategy Field Functions 
    bool hasExecutionFailStrategy() const { return this->executionFailStrategy_ != nullptr;};
    void deleteExecutionFailStrategy() { this->executionFailStrategy_ = nullptr;};
    inline string executionFailStrategy() const { DARABONBA_PTR_GET_DEFAULT(executionFailStrategy_, "") };
    inline ClusterScript& setExecutionFailStrategy(string executionFailStrategy) { DARABONBA_PTR_SET_VALUE(executionFailStrategy_, executionFailStrategy) };


    // executionMoment Field Functions 
    bool hasExecutionMoment() const { return this->executionMoment_ != nullptr;};
    void deleteExecutionMoment() { this->executionMoment_ = nullptr;};
    inline string executionMoment() const { DARABONBA_PTR_GET_DEFAULT(executionMoment_, "") };
    inline ClusterScript& setExecutionMoment(string executionMoment) { DARABONBA_PTR_SET_VALUE(executionMoment_, executionMoment) };


    // nodeSelect Field Functions 
    bool hasNodeSelect() const { return this->nodeSelect_ != nullptr;};
    void deleteNodeSelect() { this->nodeSelect_ = nullptr;};
    inline const NodeSelector & nodeSelect() const { DARABONBA_PTR_GET_CONST(nodeSelect_, NodeSelector) };
    inline NodeSelector nodeSelect() { DARABONBA_PTR_GET(nodeSelect_, NodeSelector) };
    inline ClusterScript& setNodeSelect(const NodeSelector & nodeSelect) { DARABONBA_PTR_SET_VALUE(nodeSelect_, nodeSelect) };
    inline ClusterScript& setNodeSelect(NodeSelector && nodeSelect) { DARABONBA_PTR_SET_RVALUE(nodeSelect_, nodeSelect) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ClusterScript& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // scriptArgs Field Functions 
    bool hasScriptArgs() const { return this->scriptArgs_ != nullptr;};
    void deleteScriptArgs() { this->scriptArgs_ = nullptr;};
    inline string scriptArgs() const { DARABONBA_PTR_GET_DEFAULT(scriptArgs_, "") };
    inline ClusterScript& setScriptArgs(string scriptArgs) { DARABONBA_PTR_SET_VALUE(scriptArgs_, scriptArgs) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string scriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline ClusterScript& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // scriptPath Field Functions 
    bool hasScriptPath() const { return this->scriptPath_ != nullptr;};
    void deleteScriptPath() { this->scriptPath_ = nullptr;};
    inline string scriptPath() const { DARABONBA_PTR_GET_DEFAULT(scriptPath_, "") };
    inline ClusterScript& setScriptPath(string scriptPath) { DARABONBA_PTR_SET_VALUE(scriptPath_, scriptPath) };


  protected:
    std::shared_ptr<string> executionFailStrategy_ = nullptr;
    std::shared_ptr<string> executionMoment_ = nullptr;
    std::shared_ptr<NodeSelector> nodeSelect_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> scriptArgs_ = nullptr;
    std::shared_ptr<string> scriptName_ = nullptr;
    std::shared_ptr<string> scriptPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif

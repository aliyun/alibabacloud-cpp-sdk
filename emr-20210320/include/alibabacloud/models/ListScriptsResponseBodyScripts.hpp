// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCRIPTSRESPONSEBODYSCRIPTS_HPP_
#define ALIBABACLOUD_MODELS_LISTSCRIPTSRESPONSEBODYSCRIPTS_HPP_
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
  class ListScriptsResponseBodyScripts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScriptsResponseBodyScripts& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExecutionFailStrategy, executionFailStrategy_);
      DARABONBA_PTR_TO_JSON(ExecutionMoment, executionMoment_);
      DARABONBA_PTR_TO_JSON(ExecutionState, executionState_);
      DARABONBA_PTR_TO_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_TO_JSON(NodeSelector, nodeSelector_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScriptArgs, scriptArgs_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(ScriptPath, scriptPath_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListScriptsResponseBodyScripts& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExecutionFailStrategy, executionFailStrategy_);
      DARABONBA_PTR_FROM_JSON(ExecutionMoment, executionMoment_);
      DARABONBA_PTR_FROM_JSON(ExecutionState, executionState_);
      DARABONBA_PTR_FROM_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_FROM_JSON(NodeSelector, nodeSelector_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScriptArgs, scriptArgs_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(ScriptPath, scriptPath_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListScriptsResponseBodyScripts() = default ;
    ListScriptsResponseBodyScripts(const ListScriptsResponseBodyScripts &) = default ;
    ListScriptsResponseBodyScripts(ListScriptsResponseBodyScripts &&) = default ;
    ListScriptsResponseBodyScripts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScriptsResponseBodyScripts() = default ;
    ListScriptsResponseBodyScripts& operator=(const ListScriptsResponseBodyScripts &) = default ;
    ListScriptsResponseBodyScripts& operator=(ListScriptsResponseBodyScripts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->endTime_ == nullptr && return this->executionFailStrategy_ == nullptr && return this->executionMoment_ == nullptr && return this->executionState_ == nullptr && return this->lastUpdateTime_ == nullptr
        && return this->nodeSelector_ == nullptr && return this->regionId_ == nullptr && return this->scriptArgs_ == nullptr && return this->scriptId_ == nullptr && return this->scriptName_ == nullptr
        && return this->scriptPath_ == nullptr && return this->startTime_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ListScriptsResponseBodyScripts& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListScriptsResponseBodyScripts& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executionFailStrategy Field Functions 
    bool hasExecutionFailStrategy() const { return this->executionFailStrategy_ != nullptr;};
    void deleteExecutionFailStrategy() { this->executionFailStrategy_ = nullptr;};
    inline string executionFailStrategy() const { DARABONBA_PTR_GET_DEFAULT(executionFailStrategy_, "") };
    inline ListScriptsResponseBodyScripts& setExecutionFailStrategy(string executionFailStrategy) { DARABONBA_PTR_SET_VALUE(executionFailStrategy_, executionFailStrategy) };


    // executionMoment Field Functions 
    bool hasExecutionMoment() const { return this->executionMoment_ != nullptr;};
    void deleteExecutionMoment() { this->executionMoment_ = nullptr;};
    inline string executionMoment() const { DARABONBA_PTR_GET_DEFAULT(executionMoment_, "") };
    inline ListScriptsResponseBodyScripts& setExecutionMoment(string executionMoment) { DARABONBA_PTR_SET_VALUE(executionMoment_, executionMoment) };


    // executionState Field Functions 
    bool hasExecutionState() const { return this->executionState_ != nullptr;};
    void deleteExecutionState() { this->executionState_ = nullptr;};
    inline string executionState() const { DARABONBA_PTR_GET_DEFAULT(executionState_, "") };
    inline ListScriptsResponseBodyScripts& setExecutionState(string executionState) { DARABONBA_PTR_SET_VALUE(executionState_, executionState) };


    // lastUpdateTime Field Functions 
    bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
    void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
    inline int64_t lastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, 0L) };
    inline ListScriptsResponseBodyScripts& setLastUpdateTime(int64_t lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


    // nodeSelector Field Functions 
    bool hasNodeSelector() const { return this->nodeSelector_ != nullptr;};
    void deleteNodeSelector() { this->nodeSelector_ = nullptr;};
    inline const Models::NodeSelector & nodeSelector() const { DARABONBA_PTR_GET_CONST(nodeSelector_, Models::NodeSelector) };
    inline Models::NodeSelector nodeSelector() { DARABONBA_PTR_GET(nodeSelector_, Models::NodeSelector) };
    inline ListScriptsResponseBodyScripts& setNodeSelector(const Models::NodeSelector & nodeSelector) { DARABONBA_PTR_SET_VALUE(nodeSelector_, nodeSelector) };
    inline ListScriptsResponseBodyScripts& setNodeSelector(Models::NodeSelector && nodeSelector) { DARABONBA_PTR_SET_RVALUE(nodeSelector_, nodeSelector) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListScriptsResponseBodyScripts& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scriptArgs Field Functions 
    bool hasScriptArgs() const { return this->scriptArgs_ != nullptr;};
    void deleteScriptArgs() { this->scriptArgs_ = nullptr;};
    inline string scriptArgs() const { DARABONBA_PTR_GET_DEFAULT(scriptArgs_, "") };
    inline ListScriptsResponseBodyScripts& setScriptArgs(string scriptArgs) { DARABONBA_PTR_SET_VALUE(scriptArgs_, scriptArgs) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListScriptsResponseBodyScripts& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string scriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline ListScriptsResponseBodyScripts& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // scriptPath Field Functions 
    bool hasScriptPath() const { return this->scriptPath_ != nullptr;};
    void deleteScriptPath() { this->scriptPath_ = nullptr;};
    inline string scriptPath() const { DARABONBA_PTR_GET_DEFAULT(scriptPath_, "") };
    inline ListScriptsResponseBodyScripts& setScriptPath(string scriptPath) { DARABONBA_PTR_SET_VALUE(scriptPath_, scriptPath) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListScriptsResponseBodyScripts& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // API name.
    std::shared_ptr<string> action_ = nullptr;
    // End execution time. This value is returned only when `ScriptType` is `NORMAL`.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // Execution failure strategy. Possible values:
    // 
    // - FAILED_CONTINUE: Continue after failure.
    // - FAILED_BLOCK: Block after failure.
    std::shared_ptr<string> executionFailStrategy_ = nullptr;
    // Execution timing. Possible values:
    // 
    // - BEFORE_INSTALL: Before application installation.
    // - AFTER_STARTED: After application startup.
    std::shared_ptr<string> executionMoment_ = nullptr;
    // Script execution state. This value is returned only when `ScriptType` is `NORMAL`. Possible values:
    // 
    // - SCRIPT_COMPLETED: Script executed successfully.
    // - SCRIPT_SUBMISSION_FAILED: Script execution failed.
    // - SCRIPT_RUNNING: Script is running.
    std::shared_ptr<string> executionState_ = nullptr;
    // Time of the last update.
    std::shared_ptr<int64_t> lastUpdateTime_ = nullptr;
    // The node selector.
    std::shared_ptr<Models::NodeSelector> nodeSelector_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Script execution parameters.
    std::shared_ptr<string> scriptArgs_ = nullptr;
    // Script ID.
    std::shared_ptr<string> scriptId_ = nullptr;
    // Script name.
    std::shared_ptr<string> scriptName_ = nullptr;
    // Script path.
    std::shared_ptr<string> scriptPath_ = nullptr;
    // Start execution time. This value is returned only when `ScriptType` is `NORMAL`.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif

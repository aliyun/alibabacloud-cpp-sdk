// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCRIPTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCRIPTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NodeSelector.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListScriptsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScriptsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Scripts, scripts_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListScriptsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Scripts, scripts_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListScriptsResponseBody() = default ;
    ListScriptsResponseBody(const ListScriptsResponseBody &) = default ;
    ListScriptsResponseBody(ListScriptsResponseBody &&) = default ;
    ListScriptsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScriptsResponseBody() = default ;
    ListScriptsResponseBody& operator=(const ListScriptsResponseBody &) = default ;
    ListScriptsResponseBody& operator=(ListScriptsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Scripts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Scripts& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Scripts& obj) { 
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
      Scripts() = default ;
      Scripts(const Scripts &) = default ;
      Scripts(Scripts &&) = default ;
      Scripts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Scripts() = default ;
      Scripts& operator=(const Scripts &) = default ;
      Scripts& operator=(Scripts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->endTime_ == nullptr && this->executionFailStrategy_ == nullptr && this->executionMoment_ == nullptr && this->executionState_ == nullptr && this->lastUpdateTime_ == nullptr
        && this->nodeSelector_ == nullptr && this->regionId_ == nullptr && this->scriptArgs_ == nullptr && this->scriptId_ == nullptr && this->scriptName_ == nullptr
        && this->scriptPath_ == nullptr && this->startTime_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Scripts& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Scripts& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // executionFailStrategy Field Functions 
      bool hasExecutionFailStrategy() const { return this->executionFailStrategy_ != nullptr;};
      void deleteExecutionFailStrategy() { this->executionFailStrategy_ = nullptr;};
      inline string getExecutionFailStrategy() const { DARABONBA_PTR_GET_DEFAULT(executionFailStrategy_, "") };
      inline Scripts& setExecutionFailStrategy(string executionFailStrategy) { DARABONBA_PTR_SET_VALUE(executionFailStrategy_, executionFailStrategy) };


      // executionMoment Field Functions 
      bool hasExecutionMoment() const { return this->executionMoment_ != nullptr;};
      void deleteExecutionMoment() { this->executionMoment_ = nullptr;};
      inline string getExecutionMoment() const { DARABONBA_PTR_GET_DEFAULT(executionMoment_, "") };
      inline Scripts& setExecutionMoment(string executionMoment) { DARABONBA_PTR_SET_VALUE(executionMoment_, executionMoment) };


      // executionState Field Functions 
      bool hasExecutionState() const { return this->executionState_ != nullptr;};
      void deleteExecutionState() { this->executionState_ = nullptr;};
      inline string getExecutionState() const { DARABONBA_PTR_GET_DEFAULT(executionState_, "") };
      inline Scripts& setExecutionState(string executionState) { DARABONBA_PTR_SET_VALUE(executionState_, executionState) };


      // lastUpdateTime Field Functions 
      bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
      void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
      inline int64_t getLastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, 0L) };
      inline Scripts& setLastUpdateTime(int64_t lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


      // nodeSelector Field Functions 
      bool hasNodeSelector() const { return this->nodeSelector_ != nullptr;};
      void deleteNodeSelector() { this->nodeSelector_ = nullptr;};
      inline const NodeSelector & getNodeSelector() const { DARABONBA_PTR_GET_CONST(nodeSelector_, NodeSelector) };
      inline NodeSelector getNodeSelector() { DARABONBA_PTR_GET(nodeSelector_, NodeSelector) };
      inline Scripts& setNodeSelector(const NodeSelector & nodeSelector) { DARABONBA_PTR_SET_VALUE(nodeSelector_, nodeSelector) };
      inline Scripts& setNodeSelector(NodeSelector && nodeSelector) { DARABONBA_PTR_SET_RVALUE(nodeSelector_, nodeSelector) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Scripts& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // scriptArgs Field Functions 
      bool hasScriptArgs() const { return this->scriptArgs_ != nullptr;};
      void deleteScriptArgs() { this->scriptArgs_ = nullptr;};
      inline string getScriptArgs() const { DARABONBA_PTR_GET_DEFAULT(scriptArgs_, "") };
      inline Scripts& setScriptArgs(string scriptArgs) { DARABONBA_PTR_SET_VALUE(scriptArgs_, scriptArgs) };


      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
      inline Scripts& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // scriptName Field Functions 
      bool hasScriptName() const { return this->scriptName_ != nullptr;};
      void deleteScriptName() { this->scriptName_ = nullptr;};
      inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
      inline Scripts& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


      // scriptPath Field Functions 
      bool hasScriptPath() const { return this->scriptPath_ != nullptr;};
      void deleteScriptPath() { this->scriptPath_ = nullptr;};
      inline string getScriptPath() const { DARABONBA_PTR_GET_DEFAULT(scriptPath_, "") };
      inline Scripts& setScriptPath(string scriptPath) { DARABONBA_PTR_SET_VALUE(scriptPath_, scriptPath) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Scripts& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The name of the API.
      shared_ptr<string> action_ {};
      // The time when the execution ended. This parameter is returned only when ScriptType is set to NORMAL.
      shared_ptr<int64_t> endTime_ {};
      // The policy used to handle an execution failure. Valid values:
      // 
      // - FAILED_CONTINUE: Continue the execution.
      // 
      // - FAILED_BLOCK: Block the execution.
      shared_ptr<string> executionFailStrategy_ {};
      // The time to execute the script. Valid values:
      // 
      // - BEFORE_INSTALL: before application installation.
      // 
      // - AFTER_STARTED: after application startup.
      shared_ptr<string> executionMoment_ {};
      // The execution status of the script. This parameter is returned only when `ScriptType` is set to `NORMAL`. Valid values:
      // 
      // - SCRIPT_COMPLETED: The script is successfully executed.
      // 
      // - SCRIPT_SUBMISSION_FAILED: The script fails to be executed.
      // 
      // - SCRIPT_RUNNING: The script is being executed.
      shared_ptr<string> executionState_ {};
      // The time when the script was last updated.
      shared_ptr<int64_t> lastUpdateTime_ {};
      // The node selector.
      shared_ptr<NodeSelector> nodeSelector_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The runtime parameters of the script.
      shared_ptr<string> scriptArgs_ {};
      // The script ID.
      shared_ptr<string> scriptId_ {};
      // The script name.
      shared_ptr<string> scriptName_ {};
      // The script path.
      shared_ptr<string> scriptPath_ {};
      // The time when the execution started. This parameter is returned only when ScriptType is set to NORMAL.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->scripts_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListScriptsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListScriptsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScriptsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scripts Field Functions 
    bool hasScripts() const { return this->scripts_ != nullptr;};
    void deleteScripts() { this->scripts_ = nullptr;};
    inline const vector<ListScriptsResponseBody::Scripts> & getScripts() const { DARABONBA_PTR_GET_CONST(scripts_, vector<ListScriptsResponseBody::Scripts>) };
    inline vector<ListScriptsResponseBody::Scripts> getScripts() { DARABONBA_PTR_GET(scripts_, vector<ListScriptsResponseBody::Scripts>) };
    inline ListScriptsResponseBody& setScripts(const vector<ListScriptsResponseBody::Scripts> & scripts) { DARABONBA_PTR_SET_VALUE(scripts_, scripts) };
    inline ListScriptsResponseBody& setScripts(vector<ListScriptsResponseBody::Scripts> && scripts) { DARABONBA_PTR_SET_RVALUE(scripts_, scripts) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListScriptsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned in the request.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of scripts.
    shared_ptr<vector<ListScriptsResponseBody::Scripts>> scripts_ {};
    // The total number of entries that meet the request conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif

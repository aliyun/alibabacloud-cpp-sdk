// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIDBClusterTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClusterTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RelativeDBClusterId, relativeDBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClusterTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RelativeDBClusterId, relativeDBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeAIDBClusterTasksResponseBody() = default ;
    DescribeAIDBClusterTasksResponseBody(const DescribeAIDBClusterTasksResponseBody &) = default ;
    DescribeAIDBClusterTasksResponseBody(DescribeAIDBClusterTasksResponseBody &&) = default ;
    DescribeAIDBClusterTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClusterTasksResponseBody() = default ;
    DescribeAIDBClusterTasksResponseBody& operator=(const DescribeAIDBClusterTasksResponseBody &) = default ;
    DescribeAIDBClusterTasksResponseBody& operator=(DescribeAIDBClusterTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CompletedTime, completedTime_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DBNodeDescription, DBNodeDescription_);
        DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
        DARABONBA_PTR_TO_JSON(DBNodeStatus, DBNodeStatus_);
        DARABONBA_PTR_TO_JSON(DBNodeStatusDesc, DBNodeStatusDesc_);
        DARABONBA_PTR_TO_JSON(DataZoneId, dataZoneId_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_TO_JSON(ModelName, modelName_);
        DARABONBA_PTR_TO_JSON(ModelPath, modelPath_);
        DARABONBA_PTR_TO_JSON(ModelSource, modelSource_);
        DARABONBA_PTR_TO_JSON(RunningTimes, runningTimes_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TrainMode, trainMode_);
        DARABONBA_PTR_TO_JSON(TrainType, trainType_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CompletedTime, completedTime_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DBNodeDescription, DBNodeDescription_);
        DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
        DARABONBA_PTR_FROM_JSON(DBNodeStatus, DBNodeStatus_);
        DARABONBA_PTR_FROM_JSON(DBNodeStatusDesc, DBNodeStatusDesc_);
        DARABONBA_PTR_FROM_JSON(DataZoneId, dataZoneId_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
        DARABONBA_PTR_FROM_JSON(ModelPath, modelPath_);
        DARABONBA_PTR_FROM_JSON(ModelSource, modelSource_);
        DARABONBA_PTR_FROM_JSON(RunningTimes, runningTimes_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TrainMode, trainMode_);
        DARABONBA_PTR_FROM_JSON(TrainType, trainType_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->completedTime_ == nullptr
        && this->creationTime_ == nullptr && this->DBNodeDescription_ == nullptr && this->DBNodeId_ == nullptr && this->DBNodeStatus_ == nullptr && this->DBNodeStatusDesc_ == nullptr
        && this->dataZoneId_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->modelName_ == nullptr && this->modelPath_ == nullptr
        && this->modelSource_ == nullptr && this->runningTimes_ == nullptr && this->startTime_ == nullptr && this->trainMode_ == nullptr && this->trainType_ == nullptr; };
      // completedTime Field Functions 
      bool hasCompletedTime() const { return this->completedTime_ != nullptr;};
      void deleteCompletedTime() { this->completedTime_ = nullptr;};
      inline string getCompletedTime() const { DARABONBA_PTR_GET_DEFAULT(completedTime_, "") };
      inline Items& setCompletedTime(string completedTime) { DARABONBA_PTR_SET_VALUE(completedTime_, completedTime) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Items& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // DBNodeDescription Field Functions 
      bool hasDBNodeDescription() const { return this->DBNodeDescription_ != nullptr;};
      void deleteDBNodeDescription() { this->DBNodeDescription_ = nullptr;};
      inline string getDBNodeDescription() const { DARABONBA_PTR_GET_DEFAULT(DBNodeDescription_, "") };
      inline Items& setDBNodeDescription(string DBNodeDescription) { DARABONBA_PTR_SET_VALUE(DBNodeDescription_, DBNodeDescription) };


      // DBNodeId Field Functions 
      bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
      void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
      inline string getDBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
      inline Items& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


      // DBNodeStatus Field Functions 
      bool hasDBNodeStatus() const { return this->DBNodeStatus_ != nullptr;};
      void deleteDBNodeStatus() { this->DBNodeStatus_ = nullptr;};
      inline string getDBNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStatus_, "") };
      inline Items& setDBNodeStatus(string DBNodeStatus) { DARABONBA_PTR_SET_VALUE(DBNodeStatus_, DBNodeStatus) };


      // DBNodeStatusDesc Field Functions 
      bool hasDBNodeStatusDesc() const { return this->DBNodeStatusDesc_ != nullptr;};
      void deleteDBNodeStatusDesc() { this->DBNodeStatusDesc_ = nullptr;};
      inline string getDBNodeStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStatusDesc_, "") };
      inline Items& setDBNodeStatusDesc(string DBNodeStatusDesc) { DARABONBA_PTR_SET_VALUE(DBNodeStatusDesc_, DBNodeStatusDesc) };


      // dataZoneId Field Functions 
      bool hasDataZoneId() const { return this->dataZoneId_ != nullptr;};
      void deleteDataZoneId() { this->dataZoneId_ = nullptr;};
      inline string getDataZoneId() const { DARABONBA_PTR_GET_DEFAULT(dataZoneId_, "") };
      inline Items& setDataZoneId(string dataZoneId) { DARABONBA_PTR_SET_VALUE(dataZoneId_, dataZoneId) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline Items& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline Items& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline Items& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // modelPath Field Functions 
      bool hasModelPath() const { return this->modelPath_ != nullptr;};
      void deleteModelPath() { this->modelPath_ = nullptr;};
      inline string getModelPath() const { DARABONBA_PTR_GET_DEFAULT(modelPath_, "") };
      inline Items& setModelPath(string modelPath) { DARABONBA_PTR_SET_VALUE(modelPath_, modelPath) };


      // modelSource Field Functions 
      bool hasModelSource() const { return this->modelSource_ != nullptr;};
      void deleteModelSource() { this->modelSource_ = nullptr;};
      inline string getModelSource() const { DARABONBA_PTR_GET_DEFAULT(modelSource_, "") };
      inline Items& setModelSource(string modelSource) { DARABONBA_PTR_SET_VALUE(modelSource_, modelSource) };


      // runningTimes Field Functions 
      bool hasRunningTimes() const { return this->runningTimes_ != nullptr;};
      void deleteRunningTimes() { this->runningTimes_ = nullptr;};
      inline string getRunningTimes() const { DARABONBA_PTR_GET_DEFAULT(runningTimes_, "") };
      inline Items& setRunningTimes(string runningTimes) { DARABONBA_PTR_SET_VALUE(runningTimes_, runningTimes) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Items& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // trainMode Field Functions 
      bool hasTrainMode() const { return this->trainMode_ != nullptr;};
      void deleteTrainMode() { this->trainMode_ = nullptr;};
      inline string getTrainMode() const { DARABONBA_PTR_GET_DEFAULT(trainMode_, "") };
      inline Items& setTrainMode(string trainMode) { DARABONBA_PTR_SET_VALUE(trainMode_, trainMode) };


      // trainType Field Functions 
      bool hasTrainType() const { return this->trainType_ != nullptr;};
      void deleteTrainType() { this->trainType_ = nullptr;};
      inline string getTrainType() const { DARABONBA_PTR_GET_DEFAULT(trainType_, "") };
      inline Items& setTrainType(string trainType) { DARABONBA_PTR_SET_VALUE(trainType_, trainType) };


    protected:
      shared_ptr<string> completedTime_ {};
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> DBNodeDescription_ {};
      shared_ptr<string> DBNodeId_ {};
      shared_ptr<string> DBNodeStatus_ {};
      shared_ptr<string> DBNodeStatusDesc_ {};
      shared_ptr<string> dataZoneId_ {};
      shared_ptr<string> engine_ {};
      shared_ptr<string> engineVersion_ {};
      shared_ptr<string> modelName_ {};
      shared_ptr<string> modelPath_ {};
      shared_ptr<string> modelSource_ {};
      shared_ptr<string> runningTimes_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> trainMode_ {};
      shared_ptr<string> trainType_ {};
    };

    virtual bool empty() const override { return this->engine_ == nullptr
        && this->engineVersion_ == nullptr && this->items_ == nullptr && this->relativeDBClusterId_ == nullptr && this->requestId_ == nullptr && this->taskType_ == nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeAIDBClusterTasksResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeAIDBClusterTasksResponseBody& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeAIDBClusterTasksResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeAIDBClusterTasksResponseBody::Items>) };
    inline vector<DescribeAIDBClusterTasksResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeAIDBClusterTasksResponseBody::Items>) };
    inline DescribeAIDBClusterTasksResponseBody& setItems(const vector<DescribeAIDBClusterTasksResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAIDBClusterTasksResponseBody& setItems(vector<DescribeAIDBClusterTasksResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // relativeDBClusterId Field Functions 
    bool hasRelativeDBClusterId() const { return this->relativeDBClusterId_ != nullptr;};
    void deleteRelativeDBClusterId() { this->relativeDBClusterId_ = nullptr;};
    inline string getRelativeDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(relativeDBClusterId_, "") };
    inline DescribeAIDBClusterTasksResponseBody& setRelativeDBClusterId(string relativeDBClusterId) { DARABONBA_PTR_SET_VALUE(relativeDBClusterId_, relativeDBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAIDBClusterTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeAIDBClusterTasksResponseBody& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    shared_ptr<string> engine_ {};
    shared_ptr<string> engineVersion_ {};
    shared_ptr<vector<DescribeAIDBClusterTasksResponseBody::Items>> items_ {};
    shared_ptr<string> relativeDBClusterId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

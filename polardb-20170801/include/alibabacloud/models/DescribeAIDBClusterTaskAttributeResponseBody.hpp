// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERTASKATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERTASKATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeAIDBClusterTaskAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClusterTaskAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessInfo, accessInfo_);
      DARABONBA_PTR_TO_JSON(ClusterNetworkType, clusterNetworkType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_TO_JSON(DBClusterStatusDesc, DBClusterStatusDesc_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(DataSets, dataSets_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(KindCode, kindCode_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_TO_JSON(ModelPath, modelPath_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClusterTaskAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessInfo, accessInfo_);
      DARABONBA_PTR_FROM_JSON(ClusterNetworkType, clusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_FROM_JSON(DBClusterStatusDesc, DBClusterStatusDesc_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(DataSets, dataSets_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(KindCode, kindCode_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_FROM_JSON(ModelPath, modelPath_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeAIDBClusterTaskAttributeResponseBody() = default ;
    DescribeAIDBClusterTaskAttributeResponseBody(const DescribeAIDBClusterTaskAttributeResponseBody &) = default ;
    DescribeAIDBClusterTaskAttributeResponseBody(DescribeAIDBClusterTaskAttributeResponseBody &&) = default ;
    DescribeAIDBClusterTaskAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClusterTaskAttributeResponseBody() = default ;
    DescribeAIDBClusterTaskAttributeResponseBody& operator=(const DescribeAIDBClusterTaskAttributeResponseBody &) = default ;
    DescribeAIDBClusterTaskAttributeResponseBody& operator=(DescribeAIDBClusterTaskAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CompletedTime, completedTime_);
        DARABONBA_PTR_TO_JSON(ModelName, modelName_);
        DARABONBA_PTR_TO_JSON(ModelPath, modelPath_);
        DARABONBA_PTR_TO_JSON(ModelSource, modelSource_);
        DARABONBA_PTR_TO_JSON(RunningTimes, runningTimes_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TrainMode, trainMode_);
        DARABONBA_PTR_TO_JSON(TrainType, trainType_);
      };
      friend void from_json(const Darabonba::Json& j, TaskInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CompletedTime, completedTime_);
        DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
        DARABONBA_PTR_FROM_JSON(ModelPath, modelPath_);
        DARABONBA_PTR_FROM_JSON(ModelSource, modelSource_);
        DARABONBA_PTR_FROM_JSON(RunningTimes, runningTimes_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TrainMode, trainMode_);
        DARABONBA_PTR_FROM_JSON(TrainType, trainType_);
      };
      TaskInfo() = default ;
      TaskInfo(const TaskInfo &) = default ;
      TaskInfo(TaskInfo &&) = default ;
      TaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskInfo() = default ;
      TaskInfo& operator=(const TaskInfo &) = default ;
      TaskInfo& operator=(TaskInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->completedTime_ == nullptr
        && this->modelName_ == nullptr && this->modelPath_ == nullptr && this->modelSource_ == nullptr && this->runningTimes_ == nullptr && this->startTime_ == nullptr
        && this->trainMode_ == nullptr && this->trainType_ == nullptr; };
      // completedTime Field Functions 
      bool hasCompletedTime() const { return this->completedTime_ != nullptr;};
      void deleteCompletedTime() { this->completedTime_ = nullptr;};
      inline string getCompletedTime() const { DARABONBA_PTR_GET_DEFAULT(completedTime_, "") };
      inline TaskInfo& setCompletedTime(string completedTime) { DARABONBA_PTR_SET_VALUE(completedTime_, completedTime) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline TaskInfo& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // modelPath Field Functions 
      bool hasModelPath() const { return this->modelPath_ != nullptr;};
      void deleteModelPath() { this->modelPath_ = nullptr;};
      inline string getModelPath() const { DARABONBA_PTR_GET_DEFAULT(modelPath_, "") };
      inline TaskInfo& setModelPath(string modelPath) { DARABONBA_PTR_SET_VALUE(modelPath_, modelPath) };


      // modelSource Field Functions 
      bool hasModelSource() const { return this->modelSource_ != nullptr;};
      void deleteModelSource() { this->modelSource_ = nullptr;};
      inline string getModelSource() const { DARABONBA_PTR_GET_DEFAULT(modelSource_, "") };
      inline TaskInfo& setModelSource(string modelSource) { DARABONBA_PTR_SET_VALUE(modelSource_, modelSource) };


      // runningTimes Field Functions 
      bool hasRunningTimes() const { return this->runningTimes_ != nullptr;};
      void deleteRunningTimes() { this->runningTimes_ = nullptr;};
      inline string getRunningTimes() const { DARABONBA_PTR_GET_DEFAULT(runningTimes_, "") };
      inline TaskInfo& setRunningTimes(string runningTimes) { DARABONBA_PTR_SET_VALUE(runningTimes_, runningTimes) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline TaskInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // trainMode Field Functions 
      bool hasTrainMode() const { return this->trainMode_ != nullptr;};
      void deleteTrainMode() { this->trainMode_ = nullptr;};
      inline string getTrainMode() const { DARABONBA_PTR_GET_DEFAULT(trainMode_, "") };
      inline TaskInfo& setTrainMode(string trainMode) { DARABONBA_PTR_SET_VALUE(trainMode_, trainMode) };


      // trainType Field Functions 
      bool hasTrainType() const { return this->trainType_ != nullptr;};
      void deleteTrainType() { this->trainType_ = nullptr;};
      inline string getTrainType() const { DARABONBA_PTR_GET_DEFAULT(trainType_, "") };
      inline TaskInfo& setTrainType(string trainType) { DARABONBA_PTR_SET_VALUE(trainType_, trainType) };


    protected:
      shared_ptr<string> completedTime_ {};
      shared_ptr<string> modelName_ {};
      shared_ptr<string> modelPath_ {};
      shared_ptr<string> modelSource_ {};
      shared_ptr<string> runningTimes_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> trainMode_ {};
      shared_ptr<string> trainType_ {};
    };

    class DataSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSets& obj) { 
        DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(SplitDatasetRatio, splitDatasetRatio_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, DataSets& obj) { 
        DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(SplitDatasetRatio, splitDatasetRatio_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      DataSets() = default ;
      DataSets(const DataSets &) = default ;
      DataSets(DataSets &&) = default ;
      DataSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSets() = default ;
      DataSets& operator=(const DataSets &) = default ;
      DataSets& operator=(DataSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->datasetName_ == nullptr
        && this->path_ == nullptr && this->splitDatasetRatio_ == nullptr && this->type_ == nullptr; };
      // datasetName Field Functions 
      bool hasDatasetName() const { return this->datasetName_ != nullptr;};
      void deleteDatasetName() { this->datasetName_ = nullptr;};
      inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
      inline DataSets& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline DataSets& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // splitDatasetRatio Field Functions 
      bool hasSplitDatasetRatio() const { return this->splitDatasetRatio_ != nullptr;};
      void deleteSplitDatasetRatio() { this->splitDatasetRatio_ = nullptr;};
      inline string getSplitDatasetRatio() const { DARABONBA_PTR_GET_DEFAULT(splitDatasetRatio_, "") };
      inline DataSets& setSplitDatasetRatio(string splitDatasetRatio) { DARABONBA_PTR_SET_VALUE(splitDatasetRatio_, splitDatasetRatio) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DataSets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> datasetName_ {};
      shared_ptr<string> path_ {};
      shared_ptr<string> splitDatasetRatio_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->accessInfo_ == nullptr
        && this->clusterNetworkType_ == nullptr && this->createTime_ == nullptr && this->DBClusterDescription_ == nullptr && this->DBClusterId_ == nullptr && this->DBClusterStatus_ == nullptr
        && this->DBClusterStatusDesc_ == nullptr && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->dataSets_ == nullptr && this->extraInfo_ == nullptr
        && this->kindCode_ == nullptr && this->lockMode_ == nullptr && this->maintainEndTime_ == nullptr && this->maintainStartTime_ == nullptr && this->modelPath_ == nullptr
        && this->requestId_ == nullptr && this->taskInfo_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr; };
    // accessInfo Field Functions 
    bool hasAccessInfo() const { return this->accessInfo_ != nullptr;};
    void deleteAccessInfo() { this->accessInfo_ = nullptr;};
    inline string getAccessInfo() const { DARABONBA_PTR_GET_DEFAULT(accessInfo_, "") };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setAccessInfo(string accessInfo) { DARABONBA_PTR_SET_VALUE(accessInfo_, accessInfo) };


    // clusterNetworkType Field Functions 
    bool hasClusterNetworkType() const { return this->clusterNetworkType_ != nullptr;};
    void deleteClusterNetworkType() { this->clusterNetworkType_ = nullptr;};
    inline string getClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(clusterNetworkType_, "") };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setClusterNetworkType(string clusterNetworkType) { DARABONBA_PTR_SET_VALUE(clusterNetworkType_, clusterNetworkType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string getDBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterStatus Field Functions 
    bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
    void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
    inline string getDBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


    // DBClusterStatusDesc Field Functions 
    bool hasDBClusterStatusDesc() const { return this->DBClusterStatusDesc_ != nullptr;};
    void deleteDBClusterStatusDesc() { this->DBClusterStatusDesc_ = nullptr;};
    inline string getDBClusterStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatusDesc_, "") };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setDBClusterStatusDesc(string DBClusterStatusDesc) { DARABONBA_PTR_SET_VALUE(DBClusterStatusDesc_, DBClusterStatusDesc) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // dataSets Field Functions 
    bool hasDataSets() const { return this->dataSets_ != nullptr;};
    void deleteDataSets() { this->dataSets_ = nullptr;};
    inline const vector<DescribeAIDBClusterTaskAttributeResponseBody::DataSets> & getDataSets() const { DARABONBA_PTR_GET_CONST(dataSets_, vector<DescribeAIDBClusterTaskAttributeResponseBody::DataSets>) };
    inline vector<DescribeAIDBClusterTaskAttributeResponseBody::DataSets> getDataSets() { DARABONBA_PTR_GET(dataSets_, vector<DescribeAIDBClusterTaskAttributeResponseBody::DataSets>) };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setDataSets(const vector<DescribeAIDBClusterTaskAttributeResponseBody::DataSets> & dataSets) { DARABONBA_PTR_SET_VALUE(dataSets_, dataSets) };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setDataSets(vector<DescribeAIDBClusterTaskAttributeResponseBody::DataSets> && dataSets) { DARABONBA_PTR_SET_RVALUE(dataSets_, dataSets) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline const vector<Darabonba::Json> & getExtraInfo() const { DARABONBA_PTR_GET_CONST(extraInfo_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getExtraInfo() { DARABONBA_PTR_GET(extraInfo_, vector<Darabonba::Json>) };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setExtraInfo(const vector<Darabonba::Json> & extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setExtraInfo(vector<Darabonba::Json> && extraInfo) { DARABONBA_PTR_SET_RVALUE(extraInfo_, extraInfo) };


    // kindCode Field Functions 
    bool hasKindCode() const { return this->kindCode_ != nullptr;};
    void deleteKindCode() { this->kindCode_ = nullptr;};
    inline int64_t getKindCode() const { DARABONBA_PTR_GET_DEFAULT(kindCode_, 0L) };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setKindCode(int64_t kindCode) { DARABONBA_PTR_SET_VALUE(kindCode_, kindCode) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // modelPath Field Functions 
    bool hasModelPath() const { return this->modelPath_ != nullptr;};
    void deleteModelPath() { this->modelPath_ = nullptr;};
    inline string getModelPath() const { DARABONBA_PTR_GET_DEFAULT(modelPath_, "") };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setModelPath(string modelPath) { DARABONBA_PTR_SET_VALUE(modelPath_, modelPath) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const vector<DescribeAIDBClusterTaskAttributeResponseBody::TaskInfo> & getTaskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, vector<DescribeAIDBClusterTaskAttributeResponseBody::TaskInfo>) };
    inline vector<DescribeAIDBClusterTaskAttributeResponseBody::TaskInfo> getTaskInfo() { DARABONBA_PTR_GET(taskInfo_, vector<DescribeAIDBClusterTaskAttributeResponseBody::TaskInfo>) };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setTaskInfo(const vector<DescribeAIDBClusterTaskAttributeResponseBody::TaskInfo> & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setTaskInfo(vector<DescribeAIDBClusterTaskAttributeResponseBody::TaskInfo> && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeAIDBClusterTaskAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    shared_ptr<string> accessInfo_ {};
    shared_ptr<string> clusterNetworkType_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> DBClusterDescription_ {};
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> DBClusterStatus_ {};
    shared_ptr<string> DBClusterStatusDesc_ {};
    shared_ptr<string> DBType_ {};
    shared_ptr<string> DBVersion_ {};
    shared_ptr<vector<DescribeAIDBClusterTaskAttributeResponseBody::DataSets>> dataSets_ {};
    shared_ptr<vector<Darabonba::Json>> extraInfo_ {};
    shared_ptr<int64_t> kindCode_ {};
    shared_ptr<string> lockMode_ {};
    shared_ptr<string> maintainEndTime_ {};
    shared_ptr<string> maintainStartTime_ {};
    shared_ptr<string> modelPath_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeAIDBClusterTaskAttributeResponseBody::TaskInfo>> taskInfo_ {};
    shared_ptr<string> VPCId_ {};
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

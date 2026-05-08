// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDBResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(GroupsInfo, groupsInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(GroupsInfo, groupsInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBResourceGroupResponseBody() = default ;
    DescribeDBResourceGroupResponseBody(const DescribeDBResourceGroupResponseBody &) = default ;
    DescribeDBResourceGroupResponseBody(DescribeDBResourceGroupResponseBody &&) = default ;
    DescribeDBResourceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBResourceGroupResponseBody() = default ;
    DescribeDBResourceGroupResponseBody& operator=(const DescribeDBResourceGroupResponseBody &) = default ;
    DescribeDBResourceGroupResponseBody& operator=(DescribeDBResourceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupsInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupsInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
        DARABONBA_PTR_TO_JSON(ClusterSizeResource, clusterSizeResource_);
        DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ElasticMinComputeResource, elasticMinComputeResource_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_ANY_TO_JSON(EngineParams, engineParams_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(GroupType, groupType_);
        DARABONBA_PTR_TO_JSON(GroupUserList, groupUserList_);
        DARABONBA_PTR_TO_JSON(GroupUsers, groupUsers_);
        DARABONBA_PTR_TO_JSON(MaxClusterCount, maxClusterCount_);
        DARABONBA_PTR_TO_JSON(MaxComputeResource, maxComputeResource_);
        DARABONBA_PTR_TO_JSON(MinClusterCount, minClusterCount_);
        DARABONBA_PTR_TO_JSON(MinComputeResource, minComputeResource_);
        DARABONBA_PTR_TO_JSON(NodeNum, nodeNum_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(RunningClusterCount, runningClusterCount_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, GroupsInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
        DARABONBA_PTR_FROM_JSON(ClusterSizeResource, clusterSizeResource_);
        DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ElasticMinComputeResource, elasticMinComputeResource_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_ANY_FROM_JSON(EngineParams, engineParams_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
        DARABONBA_PTR_FROM_JSON(GroupUserList, groupUserList_);
        DARABONBA_PTR_FROM_JSON(GroupUsers, groupUsers_);
        DARABONBA_PTR_FROM_JSON(MaxClusterCount, maxClusterCount_);
        DARABONBA_PTR_FROM_JSON(MaxComputeResource, maxComputeResource_);
        DARABONBA_PTR_FROM_JSON(MinClusterCount, minClusterCount_);
        DARABONBA_PTR_FROM_JSON(MinComputeResource, minComputeResource_);
        DARABONBA_PTR_FROM_JSON(NodeNum, nodeNum_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(RunningClusterCount, runningClusterCount_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      GroupsInfo() = default ;
      GroupsInfo(const GroupsInfo &) = default ;
      GroupsInfo(GroupsInfo &&) = default ;
      GroupsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupsInfo() = default ;
      GroupsInfo& operator=(const GroupsInfo &) = default ;
      GroupsInfo& operator=(GroupsInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterMode_ == nullptr
        && this->clusterSizeResource_ == nullptr && this->connectionString_ == nullptr && this->createTime_ == nullptr && this->elasticMinComputeResource_ == nullptr && this->engine_ == nullptr
        && this->engineParams_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr && this->groupUserList_ == nullptr && this->groupUsers_ == nullptr
        && this->maxClusterCount_ == nullptr && this->maxComputeResource_ == nullptr && this->minClusterCount_ == nullptr && this->minComputeResource_ == nullptr && this->nodeNum_ == nullptr
        && this->port_ == nullptr && this->runningClusterCount_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // clusterMode Field Functions 
      bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
      void deleteClusterMode() { this->clusterMode_ = nullptr;};
      inline string getClusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
      inline GroupsInfo& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


      // clusterSizeResource Field Functions 
      bool hasClusterSizeResource() const { return this->clusterSizeResource_ != nullptr;};
      void deleteClusterSizeResource() { this->clusterSizeResource_ = nullptr;};
      inline string getClusterSizeResource() const { DARABONBA_PTR_GET_DEFAULT(clusterSizeResource_, "") };
      inline GroupsInfo& setClusterSizeResource(string clusterSizeResource) { DARABONBA_PTR_SET_VALUE(clusterSizeResource_, clusterSizeResource) };


      // connectionString Field Functions 
      bool hasConnectionString() const { return this->connectionString_ != nullptr;};
      void deleteConnectionString() { this->connectionString_ = nullptr;};
      inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
      inline GroupsInfo& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline GroupsInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // elasticMinComputeResource Field Functions 
      bool hasElasticMinComputeResource() const { return this->elasticMinComputeResource_ != nullptr;};
      void deleteElasticMinComputeResource() { this->elasticMinComputeResource_ = nullptr;};
      inline string getElasticMinComputeResource() const { DARABONBA_PTR_GET_DEFAULT(elasticMinComputeResource_, "") };
      inline GroupsInfo& setElasticMinComputeResource(string elasticMinComputeResource) { DARABONBA_PTR_SET_VALUE(elasticMinComputeResource_, elasticMinComputeResource) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline GroupsInfo& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineParams Field Functions 
      bool hasEngineParams() const { return this->engineParams_ != nullptr;};
      void deleteEngineParams() { this->engineParams_ = nullptr;};
      inline       const Darabonba::Json & getEngineParams() const { DARABONBA_GET(engineParams_) };
      Darabonba::Json & getEngineParams() { DARABONBA_GET(engineParams_) };
      inline GroupsInfo& setEngineParams(const Darabonba::Json & engineParams) { DARABONBA_SET_VALUE(engineParams_, engineParams) };
      inline GroupsInfo& setEngineParams(Darabonba::Json && engineParams) { DARABONBA_SET_RVALUE(engineParams_, engineParams) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline GroupsInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // groupType Field Functions 
      bool hasGroupType() const { return this->groupType_ != nullptr;};
      void deleteGroupType() { this->groupType_ = nullptr;};
      inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
      inline GroupsInfo& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


      // groupUserList Field Functions 
      bool hasGroupUserList() const { return this->groupUserList_ != nullptr;};
      void deleteGroupUserList() { this->groupUserList_ = nullptr;};
      inline const vector<string> & getGroupUserList() const { DARABONBA_PTR_GET_CONST(groupUserList_, vector<string>) };
      inline vector<string> getGroupUserList() { DARABONBA_PTR_GET(groupUserList_, vector<string>) };
      inline GroupsInfo& setGroupUserList(const vector<string> & groupUserList) { DARABONBA_PTR_SET_VALUE(groupUserList_, groupUserList) };
      inline GroupsInfo& setGroupUserList(vector<string> && groupUserList) { DARABONBA_PTR_SET_RVALUE(groupUserList_, groupUserList) };


      // groupUsers Field Functions 
      bool hasGroupUsers() const { return this->groupUsers_ != nullptr;};
      void deleteGroupUsers() { this->groupUsers_ = nullptr;};
      inline string getGroupUsers() const { DARABONBA_PTR_GET_DEFAULT(groupUsers_, "") };
      inline GroupsInfo& setGroupUsers(string groupUsers) { DARABONBA_PTR_SET_VALUE(groupUsers_, groupUsers) };


      // maxClusterCount Field Functions 
      bool hasMaxClusterCount() const { return this->maxClusterCount_ != nullptr;};
      void deleteMaxClusterCount() { this->maxClusterCount_ = nullptr;};
      inline int32_t getMaxClusterCount() const { DARABONBA_PTR_GET_DEFAULT(maxClusterCount_, 0) };
      inline GroupsInfo& setMaxClusterCount(int32_t maxClusterCount) { DARABONBA_PTR_SET_VALUE(maxClusterCount_, maxClusterCount) };


      // maxComputeResource Field Functions 
      bool hasMaxComputeResource() const { return this->maxComputeResource_ != nullptr;};
      void deleteMaxComputeResource() { this->maxComputeResource_ = nullptr;};
      inline string getMaxComputeResource() const { DARABONBA_PTR_GET_DEFAULT(maxComputeResource_, "") };
      inline GroupsInfo& setMaxComputeResource(string maxComputeResource) { DARABONBA_PTR_SET_VALUE(maxComputeResource_, maxComputeResource) };


      // minClusterCount Field Functions 
      bool hasMinClusterCount() const { return this->minClusterCount_ != nullptr;};
      void deleteMinClusterCount() { this->minClusterCount_ = nullptr;};
      inline int32_t getMinClusterCount() const { DARABONBA_PTR_GET_DEFAULT(minClusterCount_, 0) };
      inline GroupsInfo& setMinClusterCount(int32_t minClusterCount) { DARABONBA_PTR_SET_VALUE(minClusterCount_, minClusterCount) };


      // minComputeResource Field Functions 
      bool hasMinComputeResource() const { return this->minComputeResource_ != nullptr;};
      void deleteMinComputeResource() { this->minComputeResource_ = nullptr;};
      inline string getMinComputeResource() const { DARABONBA_PTR_GET_DEFAULT(minComputeResource_, "") };
      inline GroupsInfo& setMinComputeResource(string minComputeResource) { DARABONBA_PTR_SET_VALUE(minComputeResource_, minComputeResource) };


      // nodeNum Field Functions 
      bool hasNodeNum() const { return this->nodeNum_ != nullptr;};
      void deleteNodeNum() { this->nodeNum_ = nullptr;};
      inline int32_t getNodeNum() const { DARABONBA_PTR_GET_DEFAULT(nodeNum_, 0) };
      inline GroupsInfo& setNodeNum(int32_t nodeNum) { DARABONBA_PTR_SET_VALUE(nodeNum_, nodeNum) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline GroupsInfo& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // runningClusterCount Field Functions 
      bool hasRunningClusterCount() const { return this->runningClusterCount_ != nullptr;};
      void deleteRunningClusterCount() { this->runningClusterCount_ = nullptr;};
      inline int32_t getRunningClusterCount() const { DARABONBA_PTR_GET_DEFAULT(runningClusterCount_, 0) };
      inline GroupsInfo& setRunningClusterCount(int32_t runningClusterCount) { DARABONBA_PTR_SET_VALUE(runningClusterCount_, runningClusterCount) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline GroupsInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline GroupsInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The working mode of the resource group. Valid values:
      // 
      // *   **Disable** (default)
      // *   **AutoScale**
      shared_ptr<string> clusterMode_ {};
      // The resource specifications of a single compute cluster. Unit: ACU.
      shared_ptr<string> clusterSizeResource_ {};
      // The endpoint of the resource group.
      // 
      // >  This parameter is returned only when the value of Engine is SparkWarehouse.
      shared_ptr<string> connectionString_ {};
      // The time when the resource group was created.
      shared_ptr<string> createTime_ {};
      // The minimum amount of elastic computing resources. Unit: ACU.
      shared_ptr<string> elasticMinComputeResource_ {};
      // The engine of the resource group. Valid values:
      // 
      // *   **AnalyticDB** (default)
      // *   **SparkWarehouse**
      shared_ptr<string> engine_ {};
      // The Spark application configuration parameters that can be applied to all Spark jobs executed in the resource group. If you want to configure parameters for a specific Spark job, you can specify values for the parameters in the code editor when you submit the job.
      Darabonba::Json engineParams_ {};
      // The name of the resource group.
      shared_ptr<string> groupName_ {};
      // The query execution mode. Valid values:
      // 
      // *   **interactive** (default)
      // *   **batch**
      // *   **job**
      shared_ptr<string> groupType_ {};
      // The database accounts that are associated with the resource group.
      shared_ptr<vector<string>> groupUserList_ {};
      // The database accounts that are associated with the resource group. Multiple database accounts are separated by commas (,).
      shared_ptr<string> groupUsers_ {};
      // The maximum number of compute clusters that are allowed in the resource group. Maximum value: 10.
      shared_ptr<int32_t> maxClusterCount_ {};
      // The maximum amount of reserved computing resources, which refers to the amount of resources that are not allocated in the cluster. Unit: ACU.
      // 
      // *   If the value of GroupType is **interactive**, the amount of reserved computing resources that are not allocated in the cluster is returned in increments of 16ACU.
      // *   If the value of GroupType is **job**, the amount of reserved computing resources that are not allocated in the cluster is returned in increments of 8ACU.
      shared_ptr<string> maxComputeResource_ {};
      // The minimum number of compute clusters that are required in the resource group. Minimum value: 1.
      shared_ptr<int32_t> minClusterCount_ {};
      // The minimum amount of reserved computing resources. Unit: AnalyticDB compute unit (ACU).
      // 
      // *   If the value of GroupType is **interactive**, 16ACU is returned.
      // *   If the value of GroupType is **job**, 0ACU is returned.
      shared_ptr<string> minComputeResource_ {};
      // The number of nodes. Each node provides 16 cores and 64 GB memory.
      shared_ptr<int32_t> nodeNum_ {};
      // The port number of the resource group.
      // 
      // >  This parameter is returned only when the value of Engine is SparkWarehouse.
      shared_ptr<string> port_ {};
      // The number of compute clusters running in the resource group.
      shared_ptr<int32_t> runningClusterCount_ {};
      // The status of the resource group. Valid values:
      // 
      // *   **Pending**
      // *   **Running**
      // *   **Scaling**
      // *   **Deleting**
      // *   **Deleted**
      shared_ptr<string> status_ {};
      // The time when the resource group was updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->groupsInfo_ == nullptr && this->requestId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBResourceGroupResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // groupsInfo Field Functions 
    bool hasGroupsInfo() const { return this->groupsInfo_ != nullptr;};
    void deleteGroupsInfo() { this->groupsInfo_ = nullptr;};
    inline const vector<DescribeDBResourceGroupResponseBody::GroupsInfo> & getGroupsInfo() const { DARABONBA_PTR_GET_CONST(groupsInfo_, vector<DescribeDBResourceGroupResponseBody::GroupsInfo>) };
    inline vector<DescribeDBResourceGroupResponseBody::GroupsInfo> getGroupsInfo() { DARABONBA_PTR_GET(groupsInfo_, vector<DescribeDBResourceGroupResponseBody::GroupsInfo>) };
    inline DescribeDBResourceGroupResponseBody& setGroupsInfo(const vector<DescribeDBResourceGroupResponseBody::GroupsInfo> & groupsInfo) { DARABONBA_PTR_SET_VALUE(groupsInfo_, groupsInfo) };
    inline DescribeDBResourceGroupResponseBody& setGroupsInfo(vector<DescribeDBResourceGroupResponseBody::GroupsInfo> && groupsInfo) { DARABONBA_PTR_SET_RVALUE(groupsInfo_, groupsInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The queried resource group.
    shared_ptr<vector<DescribeDBResourceGroupResponseBody::GroupsInfo>> groupsInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif

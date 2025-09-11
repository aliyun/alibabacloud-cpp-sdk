// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODYGROUPSINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODYGROUPSINFO_HPP_
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
  class DescribeDBResourceGroupResponseBodyGroupsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBResourceGroupResponseBodyGroupsInfo& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDBResourceGroupResponseBodyGroupsInfo& obj) { 
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
    DescribeDBResourceGroupResponseBodyGroupsInfo() = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfo(const DescribeDBResourceGroupResponseBodyGroupsInfo &) = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfo(DescribeDBResourceGroupResponseBodyGroupsInfo &&) = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBResourceGroupResponseBodyGroupsInfo() = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfo& operator=(const DescribeDBResourceGroupResponseBodyGroupsInfo &) = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfo& operator=(DescribeDBResourceGroupResponseBodyGroupsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterMode_ != nullptr
        && this->clusterSizeResource_ != nullptr && this->connectionString_ != nullptr && this->createTime_ != nullptr && this->elasticMinComputeResource_ != nullptr && this->engine_ != nullptr
        && this->engineParams_ != nullptr && this->groupName_ != nullptr && this->groupType_ != nullptr && this->groupUserList_ != nullptr && this->groupUsers_ != nullptr
        && this->maxClusterCount_ != nullptr && this->maxComputeResource_ != nullptr && this->minClusterCount_ != nullptr && this->minComputeResource_ != nullptr && this->nodeNum_ != nullptr
        && this->port_ != nullptr && this->runningClusterCount_ != nullptr && this->status_ != nullptr && this->updateTime_ != nullptr; };
    // clusterMode Field Functions 
    bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
    void deleteClusterMode() { this->clusterMode_ = nullptr;};
    inline string clusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


    // clusterSizeResource Field Functions 
    bool hasClusterSizeResource() const { return this->clusterSizeResource_ != nullptr;};
    void deleteClusterSizeResource() { this->clusterSizeResource_ = nullptr;};
    inline string clusterSizeResource() const { DARABONBA_PTR_GET_DEFAULT(clusterSizeResource_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setClusterSizeResource(string clusterSizeResource) { DARABONBA_PTR_SET_VALUE(clusterSizeResource_, clusterSizeResource) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // elasticMinComputeResource Field Functions 
    bool hasElasticMinComputeResource() const { return this->elasticMinComputeResource_ != nullptr;};
    void deleteElasticMinComputeResource() { this->elasticMinComputeResource_ = nullptr;};
    inline string elasticMinComputeResource() const { DARABONBA_PTR_GET_DEFAULT(elasticMinComputeResource_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setElasticMinComputeResource(string elasticMinComputeResource) { DARABONBA_PTR_SET_VALUE(elasticMinComputeResource_, elasticMinComputeResource) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineParams Field Functions 
    bool hasEngineParams() const { return this->engineParams_ != nullptr;};
    void deleteEngineParams() { this->engineParams_ = nullptr;};
    inline     const Darabonba::Json & engineParams() const { DARABONBA_GET(engineParams_) };
    Darabonba::Json & engineParams() { DARABONBA_GET(engineParams_) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setEngineParams(const Darabonba::Json & engineParams) { DARABONBA_SET_VALUE(engineParams_, engineParams) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setEngineParams(Darabonba::Json & engineParams) { DARABONBA_SET_RVALUE(engineParams_, engineParams) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // groupUserList Field Functions 
    bool hasGroupUserList() const { return this->groupUserList_ != nullptr;};
    void deleteGroupUserList() { this->groupUserList_ = nullptr;};
    inline const vector<string> & groupUserList() const { DARABONBA_PTR_GET_CONST(groupUserList_, vector<string>) };
    inline vector<string> groupUserList() { DARABONBA_PTR_GET(groupUserList_, vector<string>) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setGroupUserList(const vector<string> & groupUserList) { DARABONBA_PTR_SET_VALUE(groupUserList_, groupUserList) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setGroupUserList(vector<string> && groupUserList) { DARABONBA_PTR_SET_RVALUE(groupUserList_, groupUserList) };


    // groupUsers Field Functions 
    bool hasGroupUsers() const { return this->groupUsers_ != nullptr;};
    void deleteGroupUsers() { this->groupUsers_ = nullptr;};
    inline string groupUsers() const { DARABONBA_PTR_GET_DEFAULT(groupUsers_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setGroupUsers(string groupUsers) { DARABONBA_PTR_SET_VALUE(groupUsers_, groupUsers) };


    // maxClusterCount Field Functions 
    bool hasMaxClusterCount() const { return this->maxClusterCount_ != nullptr;};
    void deleteMaxClusterCount() { this->maxClusterCount_ = nullptr;};
    inline int32_t maxClusterCount() const { DARABONBA_PTR_GET_DEFAULT(maxClusterCount_, 0) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setMaxClusterCount(int32_t maxClusterCount) { DARABONBA_PTR_SET_VALUE(maxClusterCount_, maxClusterCount) };


    // maxComputeResource Field Functions 
    bool hasMaxComputeResource() const { return this->maxComputeResource_ != nullptr;};
    void deleteMaxComputeResource() { this->maxComputeResource_ = nullptr;};
    inline string maxComputeResource() const { DARABONBA_PTR_GET_DEFAULT(maxComputeResource_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setMaxComputeResource(string maxComputeResource) { DARABONBA_PTR_SET_VALUE(maxComputeResource_, maxComputeResource) };


    // minClusterCount Field Functions 
    bool hasMinClusterCount() const { return this->minClusterCount_ != nullptr;};
    void deleteMinClusterCount() { this->minClusterCount_ = nullptr;};
    inline int32_t minClusterCount() const { DARABONBA_PTR_GET_DEFAULT(minClusterCount_, 0) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setMinClusterCount(int32_t minClusterCount) { DARABONBA_PTR_SET_VALUE(minClusterCount_, minClusterCount) };


    // minComputeResource Field Functions 
    bool hasMinComputeResource() const { return this->minComputeResource_ != nullptr;};
    void deleteMinComputeResource() { this->minComputeResource_ = nullptr;};
    inline string minComputeResource() const { DARABONBA_PTR_GET_DEFAULT(minComputeResource_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setMinComputeResource(string minComputeResource) { DARABONBA_PTR_SET_VALUE(minComputeResource_, minComputeResource) };


    // nodeNum Field Functions 
    bool hasNodeNum() const { return this->nodeNum_ != nullptr;};
    void deleteNodeNum() { this->nodeNum_ = nullptr;};
    inline int32_t nodeNum() const { DARABONBA_PTR_GET_DEFAULT(nodeNum_, 0) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setNodeNum(int32_t nodeNum) { DARABONBA_PTR_SET_VALUE(nodeNum_, nodeNum) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // runningClusterCount Field Functions 
    bool hasRunningClusterCount() const { return this->runningClusterCount_ != nullptr;};
    void deleteRunningClusterCount() { this->runningClusterCount_ = nullptr;};
    inline int32_t runningClusterCount() const { DARABONBA_PTR_GET_DEFAULT(runningClusterCount_, 0) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setRunningClusterCount(int32_t runningClusterCount) { DARABONBA_PTR_SET_VALUE(runningClusterCount_, runningClusterCount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The working mode of the resource group. Valid values:
    // 
    // *   **Disable** (default)
    // *   **AutoScale**
    std::shared_ptr<string> clusterMode_ = nullptr;
    // The resource specifications of a single compute cluster. Unit: ACU.
    std::shared_ptr<string> clusterSizeResource_ = nullptr;
    // The endpoint of the resource group.
    // 
    // >  This parameter is returned only when the value of Engine is SparkWarehouse.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The time when the resource group was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The minimum amount of elastic computing resources. Unit: ACU.
    std::shared_ptr<string> elasticMinComputeResource_ = nullptr;
    // The engine of the resource group. Valid values:
    // 
    // *   **AnalyticDB** (default)
    // *   **SparkWarehouse**
    std::shared_ptr<string> engine_ = nullptr;
    // The Spark application configuration parameters that can be applied to all Spark jobs executed in the resource group. If you want to configure parameters for a specific Spark job, you can specify values for the parameters in the code editor when you submit the job.
    Darabonba::Json engineParams_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The query execution mode. Valid values:
    // 
    // *   **interactive** (default)
    // *   **batch**
    // *   **job**
    std::shared_ptr<string> groupType_ = nullptr;
    // The database accounts that are associated with the resource group.
    std::shared_ptr<vector<string>> groupUserList_ = nullptr;
    // The database accounts that are associated with the resource group. Multiple database accounts are separated by commas (,).
    std::shared_ptr<string> groupUsers_ = nullptr;
    // The maximum number of compute clusters that are allowed in the resource group. Maximum value: 10.
    std::shared_ptr<int32_t> maxClusterCount_ = nullptr;
    // The maximum amount of reserved computing resources, which refers to the amount of resources that are not allocated in the cluster. Unit: ACU.
    // 
    // *   If the value of GroupType is **interactive**, the amount of reserved computing resources that are not allocated in the cluster is returned in increments of 16ACU.
    // *   If the value of GroupType is **job**, the amount of reserved computing resources that are not allocated in the cluster is returned in increments of 8ACU.
    std::shared_ptr<string> maxComputeResource_ = nullptr;
    // The minimum number of compute clusters that are required in the resource group. Minimum value: 1.
    std::shared_ptr<int32_t> minClusterCount_ = nullptr;
    // The minimum amount of reserved computing resources. Unit: AnalyticDB compute unit (ACU).
    // 
    // *   If the value of GroupType is **interactive**, 16ACU is returned.
    // *   If the value of GroupType is **job**, 0ACU is returned.
    std::shared_ptr<string> minComputeResource_ = nullptr;
    // The number of nodes. Each node provides 16 cores and 64 GB memory.
    std::shared_ptr<int32_t> nodeNum_ = nullptr;
    // The port number of the resource group.
    // 
    // >  This parameter is returned only when the value of Engine is SparkWarehouse.
    std::shared_ptr<string> port_ = nullptr;
    // The number of compute clusters running in the resource group.
    std::shared_ptr<int32_t> runningClusterCount_ = nullptr;
    // The status of the resource group. Valid values:
    // 
    // *   **Pending**
    // *   **Running**
    // *   **Scaling**
    // *   **Deleting**
    // *   **Deleted**
    std::shared_ptr<string> status_ = nullptr;
    // The time when the resource group was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif

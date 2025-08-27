// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYCLUSTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClustersResponseBodyClustersTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListClustersResponseBodyClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersResponseBodyClusters& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_ANY_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(ComputingIpVersion, computingIpVersion_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(NodeGroupCount, nodeGroupCount_);
      DARABONBA_PTR_TO_JSON(OperatingState, operatingState_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersResponseBodyClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_ANY_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(ComputingIpVersion, computingIpVersion_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeGroupCount, nodeGroupCount_);
      DARABONBA_PTR_FROM_JSON(OperatingState, operatingState_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListClustersResponseBodyClusters() = default ;
    ListClustersResponseBodyClusters(const ListClustersResponseBodyClusters &) = default ;
    ListClustersResponseBodyClusters(ListClustersResponseBodyClusters &&) = default ;
    ListClustersResponseBodyClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersResponseBodyClusters() = default ;
    ListClustersResponseBodyClusters& operator=(const ListClustersResponseBodyClusters &) = default ;
    ListClustersResponseBodyClusters& operator=(ListClustersResponseBodyClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterDescription_ != nullptr
        && this->clusterId_ != nullptr && this->clusterName_ != nullptr && this->clusterType_ != nullptr && this->components_ != nullptr && this->computingIpVersion_ != nullptr
        && this->createTime_ != nullptr && this->hpnZone_ != nullptr && this->nodeCount_ != nullptr && this->nodeGroupCount_ != nullptr && this->operatingState_ != nullptr
        && this->resourceGroupId_ != nullptr && this->tags_ != nullptr && this->taskId_ != nullptr && this->updateTime_ != nullptr && this->vpcId_ != nullptr; };
    // clusterDescription Field Functions 
    bool hasClusterDescription() const { return this->clusterDescription_ != nullptr;};
    void deleteClusterDescription() { this->clusterDescription_ = nullptr;};
    inline string clusterDescription() const { DARABONBA_PTR_GET_DEFAULT(clusterDescription_, "") };
    inline ListClustersResponseBodyClusters& setClusterDescription(string clusterDescription) { DARABONBA_PTR_SET_VALUE(clusterDescription_, clusterDescription) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListClustersResponseBodyClusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListClustersResponseBodyClusters& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ListClustersResponseBodyClusters& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline     const Darabonba::Json & components() const { DARABONBA_GET(components_) };
    Darabonba::Json & components() { DARABONBA_GET(components_) };
    inline ListClustersResponseBodyClusters& setComponents(const Darabonba::Json & components) { DARABONBA_SET_VALUE(components_, components) };
    inline ListClustersResponseBodyClusters& setComponents(Darabonba::Json & components) { DARABONBA_SET_RVALUE(components_, components) };


    // computingIpVersion Field Functions 
    bool hasComputingIpVersion() const { return this->computingIpVersion_ != nullptr;};
    void deleteComputingIpVersion() { this->computingIpVersion_ = nullptr;};
    inline string computingIpVersion() const { DARABONBA_PTR_GET_DEFAULT(computingIpVersion_, "") };
    inline ListClustersResponseBodyClusters& setComputingIpVersion(string computingIpVersion) { DARABONBA_PTR_SET_VALUE(computingIpVersion_, computingIpVersion) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListClustersResponseBodyClusters& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // hpnZone Field Functions 
    bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
    void deleteHpnZone() { this->hpnZone_ = nullptr;};
    inline string hpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
    inline ListClustersResponseBodyClusters& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int64_t nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0L) };
    inline ListClustersResponseBodyClusters& setNodeCount(int64_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeGroupCount Field Functions 
    bool hasNodeGroupCount() const { return this->nodeGroupCount_ != nullptr;};
    void deleteNodeGroupCount() { this->nodeGroupCount_ = nullptr;};
    inline int64_t nodeGroupCount() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupCount_, 0L) };
    inline ListClustersResponseBodyClusters& setNodeGroupCount(int64_t nodeGroupCount) { DARABONBA_PTR_SET_VALUE(nodeGroupCount_, nodeGroupCount) };


    // operatingState Field Functions 
    bool hasOperatingState() const { return this->operatingState_ != nullptr;};
    void deleteOperatingState() { this->operatingState_ = nullptr;};
    inline string operatingState() const { DARABONBA_PTR_GET_DEFAULT(operatingState_, "") };
    inline ListClustersResponseBodyClusters& setOperatingState(string operatingState) { DARABONBA_PTR_SET_VALUE(operatingState_, operatingState) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListClustersResponseBodyClusters& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListClustersResponseBodyClustersTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListClustersResponseBodyClustersTags>) };
    inline vector<Models::ListClustersResponseBodyClustersTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListClustersResponseBodyClustersTags>) };
    inline ListClustersResponseBodyClusters& setTags(const vector<Models::ListClustersResponseBodyClustersTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListClustersResponseBodyClusters& setTags(vector<Models::ListClustersResponseBodyClustersTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListClustersResponseBodyClusters& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListClustersResponseBodyClusters& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListClustersResponseBodyClusters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The cluster description.
    std::shared_ptr<string> clusterDescription_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The cluster type.
    // 
    // Valid values:
    // 
    // *   AckEdgePro
    // *   ExclusiveBareCluster
    // *   Lite
    std::shared_ptr<string> clusterType_ = nullptr;
    // The component information.
    Darabonba::Json components_ = nullptr;
    // The IP type of the computing network.
    std::shared_ptr<string> computingIpVersion_ = nullptr;
    // The creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // The cluster number.
    std::shared_ptr<string> hpnZone_ = nullptr;
    // The number of nodes.
    std::shared_ptr<int64_t> nodeCount_ = nullptr;
    // The number of node groups.
    std::shared_ptr<int64_t> nodeGroupCount_ = nullptr;
    // The cluster status.
    // 
    // Valid values:
    // 
    // *   running
    // *   expanding
    // *   shrinking
    // *   initializing
    std::shared_ptr<string> operatingState_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListClustersResponseBodyClustersTags>> tags_ = nullptr;
    // The job ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The update time.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The virtual private cloud (VPC) ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif

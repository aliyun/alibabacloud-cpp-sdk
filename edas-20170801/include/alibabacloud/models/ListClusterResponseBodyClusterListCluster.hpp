// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERRESPONSEBODYCLUSTERLISTCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERRESPONSEBODYCLUSTERLISTCLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListClusterResponseBodyClusterListCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterResponseBodyClusterListCluster& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CpuUsed, cpuUsed_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CsClusterId, csClusterId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IaasProvider, iaasProvider_);
      DARABONBA_PTR_TO_JSON(Mem, mem_);
      DARABONBA_PTR_TO_JSON(MemUsed, memUsed_);
      DARABONBA_PTR_TO_JSON(NetworkMode, networkMode_);
      DARABONBA_PTR_TO_JSON(NodeNum, nodeNum_);
      DARABONBA_PTR_TO_JSON(OversoldFactor, oversoldFactor_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterResponseBodyClusterListCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CpuUsed, cpuUsed_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CsClusterId, csClusterId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IaasProvider, iaasProvider_);
      DARABONBA_PTR_FROM_JSON(Mem, mem_);
      DARABONBA_PTR_FROM_JSON(MemUsed, memUsed_);
      DARABONBA_PTR_FROM_JSON(NetworkMode, networkMode_);
      DARABONBA_PTR_FROM_JSON(NodeNum, nodeNum_);
      DARABONBA_PTR_FROM_JSON(OversoldFactor, oversoldFactor_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListClusterResponseBodyClusterListCluster() = default ;
    ListClusterResponseBodyClusterListCluster(const ListClusterResponseBodyClusterListCluster &) = default ;
    ListClusterResponseBodyClusterListCluster(ListClusterResponseBodyClusterListCluster &&) = default ;
    ListClusterResponseBodyClusterListCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterResponseBodyClusterListCluster() = default ;
    ListClusterResponseBodyClusterListCluster& operator=(const ListClusterResponseBodyClusterListCluster &) = default ;
    ListClusterResponseBodyClusterListCluster& operator=(ListClusterResponseBodyClusterListCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterName_ == nullptr && return this->clusterType_ == nullptr && return this->cpu_ == nullptr && return this->cpuUsed_ == nullptr && return this->createTime_ == nullptr
        && return this->csClusterId_ == nullptr && return this->description_ == nullptr && return this->iaasProvider_ == nullptr && return this->mem_ == nullptr && return this->memUsed_ == nullptr
        && return this->networkMode_ == nullptr && return this->nodeNum_ == nullptr && return this->oversoldFactor_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->updateTime_ == nullptr && return this->vpcId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListClusterResponseBodyClusterListCluster& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListClusterResponseBodyClusterListCluster& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline int32_t clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, 0) };
    inline ListClusterResponseBodyClusterListCluster& setClusterType(int32_t clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline ListClusterResponseBodyClusterListCluster& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // cpuUsed Field Functions 
    bool hasCpuUsed() const { return this->cpuUsed_ != nullptr;};
    void deleteCpuUsed() { this->cpuUsed_ = nullptr;};
    inline int32_t cpuUsed() const { DARABONBA_PTR_GET_DEFAULT(cpuUsed_, 0) };
    inline ListClusterResponseBodyClusterListCluster& setCpuUsed(int32_t cpuUsed) { DARABONBA_PTR_SET_VALUE(cpuUsed_, cpuUsed) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListClusterResponseBodyClusterListCluster& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // csClusterId Field Functions 
    bool hasCsClusterId() const { return this->csClusterId_ != nullptr;};
    void deleteCsClusterId() { this->csClusterId_ = nullptr;};
    inline string csClusterId() const { DARABONBA_PTR_GET_DEFAULT(csClusterId_, "") };
    inline ListClusterResponseBodyClusterListCluster& setCsClusterId(string csClusterId) { DARABONBA_PTR_SET_VALUE(csClusterId_, csClusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListClusterResponseBodyClusterListCluster& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // iaasProvider Field Functions 
    bool hasIaasProvider() const { return this->iaasProvider_ != nullptr;};
    void deleteIaasProvider() { this->iaasProvider_ = nullptr;};
    inline string iaasProvider() const { DARABONBA_PTR_GET_DEFAULT(iaasProvider_, "") };
    inline ListClusterResponseBodyClusterListCluster& setIaasProvider(string iaasProvider) { DARABONBA_PTR_SET_VALUE(iaasProvider_, iaasProvider) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline int32_t mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
    inline ListClusterResponseBodyClusterListCluster& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


    // memUsed Field Functions 
    bool hasMemUsed() const { return this->memUsed_ != nullptr;};
    void deleteMemUsed() { this->memUsed_ = nullptr;};
    inline int32_t memUsed() const { DARABONBA_PTR_GET_DEFAULT(memUsed_, 0) };
    inline ListClusterResponseBodyClusterListCluster& setMemUsed(int32_t memUsed) { DARABONBA_PTR_SET_VALUE(memUsed_, memUsed) };


    // networkMode Field Functions 
    bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
    void deleteNetworkMode() { this->networkMode_ = nullptr;};
    inline int32_t networkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, 0) };
    inline ListClusterResponseBodyClusterListCluster& setNetworkMode(int32_t networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


    // nodeNum Field Functions 
    bool hasNodeNum() const { return this->nodeNum_ != nullptr;};
    void deleteNodeNum() { this->nodeNum_ = nullptr;};
    inline int32_t nodeNum() const { DARABONBA_PTR_GET_DEFAULT(nodeNum_, 0) };
    inline ListClusterResponseBodyClusterListCluster& setNodeNum(int32_t nodeNum) { DARABONBA_PTR_SET_VALUE(nodeNum_, nodeNum) };


    // oversoldFactor Field Functions 
    bool hasOversoldFactor() const { return this->oversoldFactor_ != nullptr;};
    void deleteOversoldFactor() { this->oversoldFactor_ = nullptr;};
    inline int32_t oversoldFactor() const { DARABONBA_PTR_GET_DEFAULT(oversoldFactor_, 0) };
    inline ListClusterResponseBodyClusterListCluster& setOversoldFactor(int32_t oversoldFactor) { DARABONBA_PTR_SET_VALUE(oversoldFactor_, oversoldFactor) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListClusterResponseBodyClusterListCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListClusterResponseBodyClusterListCluster& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListClusterResponseBodyClusterListCluster& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListClusterResponseBodyClusterListCluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the cluster in EDAS.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The type of the cluster. Valid values:
    // 
    // *   0: regular Docker cluster
    // *   1: Swarm cluster
    // *   2: Elastic Compute Service (ECS) cluster
    // *   3: self-managed Kubernetes cluster in Enterprise Distributed Application Service (EDAS)
    // *   4: cluster in which Pandora automatically registers applications
    // *   5: ACK cluster
    std::shared_ptr<int32_t> clusterType_ = nullptr;
    // The total number of CPU cores.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The number of used CPU cores.
    std::shared_ptr<int32_t> cpuUsed_ = nullptr;
    // The timestamp when the cluster was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the cluster in Container Service for Kubernetes (ACK).
    std::shared_ptr<string> csClusterId_ = nullptr;
    // The description of the cluster.
    std::shared_ptr<string> description_ = nullptr;
    // The provider of the cluster.
    std::shared_ptr<string> iaasProvider_ = nullptr;
    // The total size of memory. Unit: MB.
    std::shared_ptr<int32_t> mem_ = nullptr;
    // The size of used memory. Unit: MB.
    std::shared_ptr<int32_t> memUsed_ = nullptr;
    // The network type of the cluster. Valid values:
    // 
    // *   1: classic network
    // *   2: virtual private cloud (VPC)
    std::shared_ptr<int32_t> networkMode_ = nullptr;
    // The number of instances.
    std::shared_ptr<int32_t> nodeNum_ = nullptr;
    // The CPU overcommit ratio that is supported by a Docker cluster. Valid values:
    // 
    // *   1: 1:1, which means that CPU resources are not overcommitted.
    // *   2: 1:2, which means that CPU resources are overcommitted by 1:2.
    // *   4: 1:4, which means that CPU resources are overcommitted by 1:4.
    // *   8: 1:8, which means that CPU resources are overcommitted by 1:8.
    std::shared_ptr<int32_t> oversoldFactor_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The timestamp when the cluster was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // VPC ID
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif

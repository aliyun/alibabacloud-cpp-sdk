// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SCLUSTERRESPONSEBODYCLUSTERPAGECLUSTERLISTCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_GETK8SCLUSTERRESPONSEBODYCLUSTERPAGECLUSTERLISTCLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sClusterResponseBodyClusterPageClusterListCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sClusterResponseBodyClusterPageClusterListCluster& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterImportStatus, clusterImportStatus_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CsClusterId, csClusterId_);
      DARABONBA_PTR_TO_JSON(CsClusterStatus, csClusterStatus_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Mem, mem_);
      DARABONBA_PTR_TO_JSON(NetworkMode, networkMode_);
      DARABONBA_PTR_TO_JSON(NodeNum, nodeNum_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SubClusterType, subClusterType_);
      DARABONBA_PTR_TO_JSON(SubNetCidr, subNetCidr_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sClusterResponseBodyClusterPageClusterListCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterImportStatus, clusterImportStatus_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CsClusterId, csClusterId_);
      DARABONBA_PTR_FROM_JSON(CsClusterStatus, csClusterStatus_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Mem, mem_);
      DARABONBA_PTR_FROM_JSON(NetworkMode, networkMode_);
      DARABONBA_PTR_FROM_JSON(NodeNum, nodeNum_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SubClusterType, subClusterType_);
      DARABONBA_PTR_FROM_JSON(SubNetCidr, subNetCidr_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    GetK8sClusterResponseBodyClusterPageClusterListCluster() = default ;
    GetK8sClusterResponseBodyClusterPageClusterListCluster(const GetK8sClusterResponseBodyClusterPageClusterListCluster &) = default ;
    GetK8sClusterResponseBodyClusterPageClusterListCluster(GetK8sClusterResponseBodyClusterPageClusterListCluster &&) = default ;
    GetK8sClusterResponseBodyClusterPageClusterListCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sClusterResponseBodyClusterPageClusterListCluster() = default ;
    GetK8sClusterResponseBodyClusterPageClusterListCluster& operator=(const GetK8sClusterResponseBodyClusterPageClusterListCluster &) = default ;
    GetK8sClusterResponseBodyClusterPageClusterListCluster& operator=(GetK8sClusterResponseBodyClusterPageClusterListCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterImportStatus_ == nullptr && return this->clusterName_ == nullptr && return this->clusterStatus_ == nullptr && return this->clusterType_ == nullptr && return this->cpu_ == nullptr
        && return this->csClusterId_ == nullptr && return this->csClusterStatus_ == nullptr && return this->description_ == nullptr && return this->mem_ == nullptr && return this->networkMode_ == nullptr
        && return this->nodeNum_ == nullptr && return this->regionId_ == nullptr && return this->subClusterType_ == nullptr && return this->subNetCidr_ == nullptr && return this->vpcId_ == nullptr
        && return this->vswitchId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetK8sClusterResponseBodyClusterPageClusterListCluster& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterImportStatus Field Functions 
    bool hasClusterImportStatus() const { return this->clusterImportStatus_ != nullptr;};
    void deleteClusterImportStatus() { this->clusterImportStatus_ = nullptr;};
    inline int32_t clusterImportStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterImportStatus_, 0) };
    inline GetK8sClusterResponseBodyClusterPageClusterListCluster& setClusterImportStatus(int32_t clusterImportStatus) { DARABONBA_PTR_SET_VALUE(clusterImportStatus_, clusterImportStatus) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline GetK8sClusterResponseBodyClusterPageClusterListCluster& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterStatus Field Functions 
    bool hasClusterStatus() const { return this->clusterStatus_ != nullptr;};
    void deleteClusterStatus() { this->clusterStatus_ = nullptr;};
    inline int32_t clusterStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterStatus_, 0) };
    inline GetK8sClusterResponseBodyClusterPageClusterListCluster& setClusterStatus(int32_t clusterStatus) { DARABONBA_PTR_SET_VALUE(clusterStatus_, clusterStatus) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline int32_t clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, 0) };
    inline GetK8sClusterResponseBodyClusterPageClusterListCluster& setClusterType(int32_t clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline GetK8sClusterResponseBodyClusterPageClusterListCluster& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // csClusterId Field Functions 
    bool hasCsClusterId() const { return this->csClusterId_ != nullptr;};
    void deleteCsClusterId() { this->csClusterId_ = nullptr;};
    inline string csClusterId() const { DARABONBA_PTR_GET_DEFAULT(csClusterId_, "") };
    inline GetK8sClusterResponseBodyClusterPageClusterListCluster& setCsClusterId(string csClusterId) { DARABONBA_PTR_SET_VALUE(csClusterId_, csClusterId) };


    // csClusterStatus Field Functions 
    bool hasCsClusterStatus() const { return this->csClusterStatus_ != nullptr;};
    void deleteCsClusterStatus() { this->csClusterStatus_ = nullptr;};
    inline string csClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(csClusterStatus_, "") };
    inline GetK8sClusterResponseBodyClusterPageClusterListCluster& setCsClusterStatus(string csClusterStatus) { DARABONBA_PTR_SET_VALUE(csClusterStatus_, csClusterStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetK8sClusterResponseBodyClusterPageClusterListCluster& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline int32_t mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
    inline GetK8sClusterResponseBodyClusterPageClusterListCluster& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


    // networkMode Field Functions 
    bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
    void deleteNetworkMode() { this->networkMode_ = nullptr;};
    inline int32_t networkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, 0) };
    inline GetK8sClusterResponseBodyClusterPageClusterListCluster& setNetworkMode(int32_t networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


    // nodeNum Field Functions 
    bool hasNodeNum() const { return this->nodeNum_ != nullptr;};
    void deleteNodeNum() { this->nodeNum_ = nullptr;};
    inline int32_t nodeNum() const { DARABONBA_PTR_GET_DEFAULT(nodeNum_, 0) };
    inline GetK8sClusterResponseBodyClusterPageClusterListCluster& setNodeNum(int32_t nodeNum) { DARABONBA_PTR_SET_VALUE(nodeNum_, nodeNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetK8sClusterResponseBodyClusterPageClusterListCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // subClusterType Field Functions 
    bool hasSubClusterType() const { return this->subClusterType_ != nullptr;};
    void deleteSubClusterType() { this->subClusterType_ = nullptr;};
    inline string subClusterType() const { DARABONBA_PTR_GET_DEFAULT(subClusterType_, "") };
    inline GetK8sClusterResponseBodyClusterPageClusterListCluster& setSubClusterType(string subClusterType) { DARABONBA_PTR_SET_VALUE(subClusterType_, subClusterType) };


    // subNetCidr Field Functions 
    bool hasSubNetCidr() const { return this->subNetCidr_ != nullptr;};
    void deleteSubNetCidr() { this->subNetCidr_ = nullptr;};
    inline string subNetCidr() const { DARABONBA_PTR_GET_DEFAULT(subNetCidr_, "") };
    inline GetK8sClusterResponseBodyClusterPageClusterListCluster& setSubNetCidr(string subNetCidr) { DARABONBA_PTR_SET_VALUE(subNetCidr_, subNetCidr) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetK8sClusterResponseBodyClusterPageClusterListCluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline GetK8sClusterResponseBodyClusterPageClusterListCluster& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The import state of the cluster. Valid values:
    // 
    // *   0: The cluster is not imported.
    // *   1: The cluster is imported.
    // *   2: The cluster fails to be imported.
    // *   3: The cluster is being imported.
    // *   4: The cluster is deleted.
    std::shared_ptr<int32_t> clusterImportStatus_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   1: The cluster runs as expected.
    // *   2: The cluster does not run as expected.
    // *   3: The cluster is offline.
    std::shared_ptr<int32_t> clusterStatus_ = nullptr;
    // The type of the cluster. Valid values:
    // 
    // *   2: Elastic Compute Service (ECS) cluster
    // *   5: ACK cluster or Serverless Kubernetes cluster
    std::shared_ptr<int32_t> clusterType_ = nullptr;
    // The total number of CPU cores.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The ID of the ACK cluster.
    std::shared_ptr<string> csClusterId_ = nullptr;
    // The state of the ACK cluster. Valid values:
    // 
    // *   initial: The cluster is being initialized.
    // *   failed: The cluster fails to be created.
    // *   running: The cluster is running.
    // *   updating: The cluster is being updated.
    // *   scaling: The cluster is being scaled out.
    // *   removing: Nodes are being removed from the cluster.
    // *   upgrading: The cluster is being upgraded.
    // *   deleting: The cluster is being deleted.
    // *   delete_failed: The cluster fails to be deleted.
    // *   deleted: The cluster is deleted. The deleted cluster is invisible to users.
    std::shared_ptr<string> csClusterStatus_ = nullptr;
    // The description of the cluster.
    std::shared_ptr<string> description_ = nullptr;
    // The total size of memory. Unit: MB.
    std::shared_ptr<int32_t> mem_ = nullptr;
    // The network type of the cluster. Valid values:
    // 
    // *   1: classic network
    // *   2: VPC
    std::shared_ptr<int32_t> networkMode_ = nullptr;
    // The number of nodes.
    std::shared_ptr<int32_t> nodeNum_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> regionId_ = nullptr;
    // The subtype of the cluster. Valid values:
    // 
    // *   Ask: Serverless Kubernetes cluster
    // *   ManagedKubernetes: ACK cluster
    std::shared_ptr<string> subClusterType_ = nullptr;
    // The CIDR block of the subnet.
    std::shared_ptr<string> subNetCidr_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif

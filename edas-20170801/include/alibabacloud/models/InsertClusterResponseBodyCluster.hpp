// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTCLUSTERRESPONSEBODYCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_INSERTCLUSTERRESPONSEBODYCLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertClusterResponseBodyCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertClusterResponseBodyCluster& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(IaasProvider, iaasProvider_);
      DARABONBA_PTR_TO_JSON(NetworkMode, networkMode_);
      DARABONBA_PTR_TO_JSON(OversoldFactor, oversoldFactor_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertClusterResponseBodyCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(IaasProvider, iaasProvider_);
      DARABONBA_PTR_FROM_JSON(NetworkMode, networkMode_);
      DARABONBA_PTR_FROM_JSON(OversoldFactor, oversoldFactor_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    InsertClusterResponseBodyCluster() = default ;
    InsertClusterResponseBodyCluster(const InsertClusterResponseBodyCluster &) = default ;
    InsertClusterResponseBodyCluster(InsertClusterResponseBodyCluster &&) = default ;
    InsertClusterResponseBodyCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertClusterResponseBodyCluster() = default ;
    InsertClusterResponseBodyCluster& operator=(const InsertClusterResponseBodyCluster &) = default ;
    InsertClusterResponseBodyCluster& operator=(InsertClusterResponseBodyCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterName_ == nullptr && return this->clusterType_ == nullptr && return this->iaasProvider_ == nullptr && return this->networkMode_ == nullptr && return this->oversoldFactor_ == nullptr
        && return this->regionId_ == nullptr && return this->vpcId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline InsertClusterResponseBodyCluster& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline InsertClusterResponseBodyCluster& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline int32_t clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, 0) };
    inline InsertClusterResponseBodyCluster& setClusterType(int32_t clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // iaasProvider Field Functions 
    bool hasIaasProvider() const { return this->iaasProvider_ != nullptr;};
    void deleteIaasProvider() { this->iaasProvider_ = nullptr;};
    inline string iaasProvider() const { DARABONBA_PTR_GET_DEFAULT(iaasProvider_, "") };
    inline InsertClusterResponseBodyCluster& setIaasProvider(string iaasProvider) { DARABONBA_PTR_SET_VALUE(iaasProvider_, iaasProvider) };


    // networkMode Field Functions 
    bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
    void deleteNetworkMode() { this->networkMode_ = nullptr;};
    inline int32_t networkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, 0) };
    inline InsertClusterResponseBodyCluster& setNetworkMode(int32_t networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


    // oversoldFactor Field Functions 
    bool hasOversoldFactor() const { return this->oversoldFactor_ != nullptr;};
    void deleteOversoldFactor() { this->oversoldFactor_ = nullptr;};
    inline int32_t oversoldFactor() const { DARABONBA_PTR_GET_DEFAULT(oversoldFactor_, 0) };
    inline InsertClusterResponseBodyCluster& setOversoldFactor(int32_t oversoldFactor) { DARABONBA_PTR_SET_VALUE(oversoldFactor_, oversoldFactor) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline InsertClusterResponseBodyCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline InsertClusterResponseBodyCluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The type of the cluster. Valid values:
    // 
    // *   2: ECS cluster
    // *   3: self-managed Kubernetes cluster in EDAS
    // *   5: Kubernetes cluster
    std::shared_ptr<int32_t> clusterType_ = nullptr;
    // The provider of the IaaS resources that are used in the cluster.
    std::shared_ptr<string> iaasProvider_ = nullptr;
    // The network type of the cluster. Valid values:
    // 
    // *   1: classic network
    // *   2\\. VPC
    std::shared_ptr<int32_t> networkMode_ = nullptr;
    // **This parameter is deprecated.** The CPU overcommit ratio supported by the Docker cluster. Valid values:
    // 
    // *   2: 1:2, which means that resources are overcommitted by 1:2.
    // *   4: 1:4, which means that resources are overcommitted by 1:4.
    // *   8: 1:8, which means that resources are overcommitted by 1:8.
    std::shared_ptr<int32_t> oversoldFactor_ = nullptr;
    // The ID of the region in which the cluster resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif

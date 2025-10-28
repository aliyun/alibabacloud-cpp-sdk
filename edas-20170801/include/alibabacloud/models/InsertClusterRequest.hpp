// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(IaasProvider, iaasProvider_);
      DARABONBA_PTR_TO_JSON(LogicalRegionId, logicalRegionId_);
      DARABONBA_PTR_TO_JSON(NetworkMode, networkMode_);
      DARABONBA_PTR_TO_JSON(OversoldFactor, oversoldFactor_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(IaasProvider, iaasProvider_);
      DARABONBA_PTR_FROM_JSON(LogicalRegionId, logicalRegionId_);
      DARABONBA_PTR_FROM_JSON(NetworkMode, networkMode_);
      DARABONBA_PTR_FROM_JSON(OversoldFactor, oversoldFactor_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    InsertClusterRequest() = default ;
    InsertClusterRequest(const InsertClusterRequest &) = default ;
    InsertClusterRequest(InsertClusterRequest &&) = default ;
    InsertClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertClusterRequest() = default ;
    InsertClusterRequest& operator=(const InsertClusterRequest &) = default ;
    InsertClusterRequest& operator=(InsertClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterName_ == nullptr
        && return this->clusterType_ == nullptr && return this->iaasProvider_ == nullptr && return this->logicalRegionId_ == nullptr && return this->networkMode_ == nullptr && return this->oversoldFactor_ == nullptr
        && return this->vpcId_ == nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline InsertClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline int32_t clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, 0) };
    inline InsertClusterRequest& setClusterType(int32_t clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // iaasProvider Field Functions 
    bool hasIaasProvider() const { return this->iaasProvider_ != nullptr;};
    void deleteIaasProvider() { this->iaasProvider_ = nullptr;};
    inline string iaasProvider() const { DARABONBA_PTR_GET_DEFAULT(iaasProvider_, "") };
    inline InsertClusterRequest& setIaasProvider(string iaasProvider) { DARABONBA_PTR_SET_VALUE(iaasProvider_, iaasProvider) };


    // logicalRegionId Field Functions 
    bool hasLogicalRegionId() const { return this->logicalRegionId_ != nullptr;};
    void deleteLogicalRegionId() { this->logicalRegionId_ = nullptr;};
    inline string logicalRegionId() const { DARABONBA_PTR_GET_DEFAULT(logicalRegionId_, "") };
    inline InsertClusterRequest& setLogicalRegionId(string logicalRegionId) { DARABONBA_PTR_SET_VALUE(logicalRegionId_, logicalRegionId) };


    // networkMode Field Functions 
    bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
    void deleteNetworkMode() { this->networkMode_ = nullptr;};
    inline int32_t networkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, 0) };
    inline InsertClusterRequest& setNetworkMode(int32_t networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


    // oversoldFactor Field Functions 
    bool hasOversoldFactor() const { return this->oversoldFactor_ != nullptr;};
    void deleteOversoldFactor() { this->oversoldFactor_ = nullptr;};
    inline int32_t oversoldFactor() const { DARABONBA_PTR_GET_DEFAULT(oversoldFactor_, 0) };
    inline InsertClusterRequest& setOversoldFactor(int32_t oversoldFactor) { DARABONBA_PTR_SET_VALUE(oversoldFactor_, oversoldFactor) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline InsertClusterRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The name of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The type of the cluster. Valid values:
    // 
    // *   2: Elastic Compute Service (ECS) cluster
    // *   3: self-managed Kubernetes cluster in Enterprise Distributed Application Service (EDAS)
    // *   5: Kubernetes cluster
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> clusterType_ = nullptr;
    // The provider of Infrastructure as a Service (IaaS) resources that are used in the cluster.
    // 
    // When you use Alibaba Cloud, set the value to `ALIYUN`. The value is case-sensitive.
    std::shared_ptr<string> iaasProvider_ = nullptr;
    // The ID of the custom namespace. The ID is in the `physical region ID:custom namespace identifier` format. Example: `cn-hangzhou:test`.
    std::shared_ptr<string> logicalRegionId_ = nullptr;
    // The network type of the cluster. Valid values:
    // 
    // *   1: classic network
    // *   2: virtual private cloud (VPC)
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> networkMode_ = nullptr;
    // **This parameter is deprecated.** The CPU overcommit ratio supported by a Docker cluster. Valid values:
    // 
    // *   2: 1:2, which means that resources are overcommitted by 1:2.
    // *   4: 1:4, which means that resources are overcommitted by 1:4.
    // *   8: 1:8, which means that resources are overcommitted by 1:8.
    std::shared_ptr<int32_t> oversoldFactor_ = nullptr;
    // The ID of the VPC. This parameter is required if you set the NetworkMode parameter to 2.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif

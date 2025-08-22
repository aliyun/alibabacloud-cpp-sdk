// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANAGEDPROMETHEUSSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMANAGEDPROMETHEUSSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetManagedPrometheusStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManagedPrometheusStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetManagedPrometheusStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetManagedPrometheusStatusRequest() = default ;
    GetManagedPrometheusStatusRequest(const GetManagedPrometheusStatusRequest &) = default ;
    GetManagedPrometheusStatusRequest(GetManagedPrometheusStatusRequest &&) = default ;
    GetManagedPrometheusStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManagedPrometheusStatusRequest() = default ;
    GetManagedPrometheusStatusRequest& operator=(const GetManagedPrometheusStatusRequest &) = default ;
    GetManagedPrometheusStatusRequest& operator=(GetManagedPrometheusStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->clusterType_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->vpcId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetManagedPrometheusStatusRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline GetManagedPrometheusStatusRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetManagedPrometheusStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetManagedPrometheusStatusRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetManagedPrometheusStatusRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The cluster ID. This parameter is required if the ClusterType parameter is set to ask.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The type of the cluster. Valid values: ask and ecs.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group id of the Prometheus instance.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the virtual private cloud (VPC). This parameter is required if the ClusterType parameter is set to ecs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif

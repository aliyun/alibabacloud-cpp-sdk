// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLMANAGEDPROMETHEUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLMANAGEDPROMETHEUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class InstallManagedPrometheusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallManagedPrometheusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(GrafanaInstanceId, grafanaInstanceId_);
      DARABONBA_PTR_TO_JSON(KubeConfig, kubeConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VcExtraInfo, vcExtraInfo_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, InstallManagedPrometheusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(GrafanaInstanceId, grafanaInstanceId_);
      DARABONBA_PTR_FROM_JSON(KubeConfig, kubeConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VcExtraInfo, vcExtraInfo_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    InstallManagedPrometheusRequest() = default ;
    InstallManagedPrometheusRequest(const InstallManagedPrometheusRequest &) = default ;
    InstallManagedPrometheusRequest(InstallManagedPrometheusRequest &&) = default ;
    InstallManagedPrometheusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallManagedPrometheusRequest() = default ;
    InstallManagedPrometheusRequest& operator=(const InstallManagedPrometheusRequest &) = default ;
    InstallManagedPrometheusRequest& operator=(InstallManagedPrometheusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->clusterName_ != nullptr && this->clusterType_ != nullptr && this->grafanaInstanceId_ != nullptr && this->kubeConfig_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->securityGroupId_ != nullptr && this->vSwitchId_ != nullptr && this->vcExtraInfo_ != nullptr && this->vpcId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline InstallManagedPrometheusRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline InstallManagedPrometheusRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline InstallManagedPrometheusRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // grafanaInstanceId Field Functions 
    bool hasGrafanaInstanceId() const { return this->grafanaInstanceId_ != nullptr;};
    void deleteGrafanaInstanceId() { this->grafanaInstanceId_ = nullptr;};
    inline string grafanaInstanceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaInstanceId_, "") };
    inline InstallManagedPrometheusRequest& setGrafanaInstanceId(string grafanaInstanceId) { DARABONBA_PTR_SET_VALUE(grafanaInstanceId_, grafanaInstanceId) };


    // kubeConfig Field Functions 
    bool hasKubeConfig() const { return this->kubeConfig_ != nullptr;};
    void deleteKubeConfig() { this->kubeConfig_ = nullptr;};
    inline string kubeConfig() const { DARABONBA_PTR_GET_DEFAULT(kubeConfig_, "") };
    inline InstallManagedPrometheusRequest& setKubeConfig(string kubeConfig) { DARABONBA_PTR_SET_VALUE(kubeConfig_, kubeConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline InstallManagedPrometheusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline InstallManagedPrometheusRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline InstallManagedPrometheusRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline InstallManagedPrometheusRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vcExtraInfo Field Functions 
    bool hasVcExtraInfo() const { return this->vcExtraInfo_ != nullptr;};
    void deleteVcExtraInfo() { this->vcExtraInfo_ = nullptr;};
    inline string vcExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(vcExtraInfo_, "") };
    inline InstallManagedPrometheusRequest& setVcExtraInfo(string vcExtraInfo) { DARABONBA_PTR_SET_VALUE(vcExtraInfo_, vcExtraInfo) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline InstallManagedPrometheusRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the ASK cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster. This parameter is required if the ClusterType parameter is set to ecs.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The cluster type.
    // 
    // Valid values:
    // 
    // *   ecs: ECS
    // *   one: ACK One
    // *   ask: ASK
    // *   pro: Container Monitoring Pro
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The ID of the managed Grafana workspace that is associated with the cluster. If you set this parameter to free or leave this parameter empty, the cluster is associated with a shared Grafana workspace.
    std::shared_ptr<string> grafanaInstanceId_ = nullptr;
    // This parameter is not supported.
    std::shared_ptr<string> kubeConfig_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the security group to which the cluster belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The ID of the vSwitch that is used by the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vcExtraInfo_ = nullptr;
    // The virtual private cloud (VPC) where the cluster resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif

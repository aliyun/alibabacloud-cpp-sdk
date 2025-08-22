// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENVIRONMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENVIRONMENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnvironmentResponseBodyDataTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeEnvironmentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnvironmentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BindResourceId, bindResourceId_);
      DARABONBA_PTR_TO_JSON(BindResourceProfile, bindResourceProfile_);
      DARABONBA_PTR_TO_JSON(BindResourceStatus, bindResourceStatus_);
      DARABONBA_PTR_TO_JSON(BindResourceStoreDuration, bindResourceStoreDuration_);
      DARABONBA_PTR_TO_JSON(BindResourceType, bindResourceType_);
      DARABONBA_PTR_TO_JSON(BindVpcCidr, bindVpcCidr_);
      DARABONBA_PTR_TO_JSON(DbInstanceStatus, dbInstanceStatus_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(EnvironmentName, environmentName_);
      DARABONBA_PTR_TO_JSON(EnvironmentSubType, environmentSubType_);
      DARABONBA_PTR_TO_JSON(EnvironmentType, environmentType_);
      DARABONBA_PTR_TO_JSON(FeePackage, feePackage_);
      DARABONBA_PTR_TO_JSON(GrafaDataSourceName, grafaDataSourceName_);
      DARABONBA_PTR_TO_JSON(GrafanaDatasourceUid, grafanaDatasourceUid_);
      DARABONBA_PTR_TO_JSON(GrafanaFolderTitle, grafanaFolderTitle_);
      DARABONBA_PTR_TO_JSON(GrafanaFolderUid, grafanaFolderUid_);
      DARABONBA_PTR_TO_JSON(GrafanaFolderUrl, grafanaFolderUrl_);
      DARABONBA_PTR_TO_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_TO_JSON(ManagedType, managedType_);
      DARABONBA_PTR_TO_JSON(PrometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_TO_JSON(PrometheusInstanceName, prometheusInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnvironmentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BindResourceId, bindResourceId_);
      DARABONBA_PTR_FROM_JSON(BindResourceProfile, bindResourceProfile_);
      DARABONBA_PTR_FROM_JSON(BindResourceStatus, bindResourceStatus_);
      DARABONBA_PTR_FROM_JSON(BindResourceStoreDuration, bindResourceStoreDuration_);
      DARABONBA_PTR_FROM_JSON(BindResourceType, bindResourceType_);
      DARABONBA_PTR_FROM_JSON(BindVpcCidr, bindVpcCidr_);
      DARABONBA_PTR_FROM_JSON(DbInstanceStatus, dbInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(EnvironmentName, environmentName_);
      DARABONBA_PTR_FROM_JSON(EnvironmentSubType, environmentSubType_);
      DARABONBA_PTR_FROM_JSON(EnvironmentType, environmentType_);
      DARABONBA_PTR_FROM_JSON(FeePackage, feePackage_);
      DARABONBA_PTR_FROM_JSON(GrafaDataSourceName, grafaDataSourceName_);
      DARABONBA_PTR_FROM_JSON(GrafanaDatasourceUid, grafanaDatasourceUid_);
      DARABONBA_PTR_FROM_JSON(GrafanaFolderTitle, grafanaFolderTitle_);
      DARABONBA_PTR_FROM_JSON(GrafanaFolderUid, grafanaFolderUid_);
      DARABONBA_PTR_FROM_JSON(GrafanaFolderUrl, grafanaFolderUrl_);
      DARABONBA_PTR_FROM_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(ManagedType, managedType_);
      DARABONBA_PTR_FROM_JSON(PrometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_FROM_JSON(PrometheusInstanceName, prometheusInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    DescribeEnvironmentResponseBodyData() = default ;
    DescribeEnvironmentResponseBodyData(const DescribeEnvironmentResponseBodyData &) = default ;
    DescribeEnvironmentResponseBodyData(DescribeEnvironmentResponseBodyData &&) = default ;
    DescribeEnvironmentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnvironmentResponseBodyData() = default ;
    DescribeEnvironmentResponseBodyData& operator=(const DescribeEnvironmentResponseBodyData &) = default ;
    DescribeEnvironmentResponseBodyData& operator=(DescribeEnvironmentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindResourceId_ != nullptr
        && this->bindResourceProfile_ != nullptr && this->bindResourceStatus_ != nullptr && this->bindResourceStoreDuration_ != nullptr && this->bindResourceType_ != nullptr && this->bindVpcCidr_ != nullptr
        && this->dbInstanceStatus_ != nullptr && this->environmentId_ != nullptr && this->environmentName_ != nullptr && this->environmentSubType_ != nullptr && this->environmentType_ != nullptr
        && this->feePackage_ != nullptr && this->grafaDataSourceName_ != nullptr && this->grafanaDatasourceUid_ != nullptr && this->grafanaFolderTitle_ != nullptr && this->grafanaFolderUid_ != nullptr
        && this->grafanaFolderUrl_ != nullptr && this->grafanaWorkspaceId_ != nullptr && this->managedType_ != nullptr && this->prometheusInstanceId_ != nullptr && this->prometheusInstanceName_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->securityGroupId_ != nullptr && this->tags_ != nullptr && this->userId_ != nullptr
        && this->vpcId_ != nullptr && this->vswitchId_ != nullptr; };
    // bindResourceId Field Functions 
    bool hasBindResourceId() const { return this->bindResourceId_ != nullptr;};
    void deleteBindResourceId() { this->bindResourceId_ = nullptr;};
    inline string bindResourceId() const { DARABONBA_PTR_GET_DEFAULT(bindResourceId_, "") };
    inline DescribeEnvironmentResponseBodyData& setBindResourceId(string bindResourceId) { DARABONBA_PTR_SET_VALUE(bindResourceId_, bindResourceId) };


    // bindResourceProfile Field Functions 
    bool hasBindResourceProfile() const { return this->bindResourceProfile_ != nullptr;};
    void deleteBindResourceProfile() { this->bindResourceProfile_ = nullptr;};
    inline string bindResourceProfile() const { DARABONBA_PTR_GET_DEFAULT(bindResourceProfile_, "") };
    inline DescribeEnvironmentResponseBodyData& setBindResourceProfile(string bindResourceProfile) { DARABONBA_PTR_SET_VALUE(bindResourceProfile_, bindResourceProfile) };


    // bindResourceStatus Field Functions 
    bool hasBindResourceStatus() const { return this->bindResourceStatus_ != nullptr;};
    void deleteBindResourceStatus() { this->bindResourceStatus_ = nullptr;};
    inline string bindResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(bindResourceStatus_, "") };
    inline DescribeEnvironmentResponseBodyData& setBindResourceStatus(string bindResourceStatus) { DARABONBA_PTR_SET_VALUE(bindResourceStatus_, bindResourceStatus) };


    // bindResourceStoreDuration Field Functions 
    bool hasBindResourceStoreDuration() const { return this->bindResourceStoreDuration_ != nullptr;};
    void deleteBindResourceStoreDuration() { this->bindResourceStoreDuration_ = nullptr;};
    inline string bindResourceStoreDuration() const { DARABONBA_PTR_GET_DEFAULT(bindResourceStoreDuration_, "") };
    inline DescribeEnvironmentResponseBodyData& setBindResourceStoreDuration(string bindResourceStoreDuration) { DARABONBA_PTR_SET_VALUE(bindResourceStoreDuration_, bindResourceStoreDuration) };


    // bindResourceType Field Functions 
    bool hasBindResourceType() const { return this->bindResourceType_ != nullptr;};
    void deleteBindResourceType() { this->bindResourceType_ = nullptr;};
    inline string bindResourceType() const { DARABONBA_PTR_GET_DEFAULT(bindResourceType_, "") };
    inline DescribeEnvironmentResponseBodyData& setBindResourceType(string bindResourceType) { DARABONBA_PTR_SET_VALUE(bindResourceType_, bindResourceType) };


    // bindVpcCidr Field Functions 
    bool hasBindVpcCidr() const { return this->bindVpcCidr_ != nullptr;};
    void deleteBindVpcCidr() { this->bindVpcCidr_ = nullptr;};
    inline string bindVpcCidr() const { DARABONBA_PTR_GET_DEFAULT(bindVpcCidr_, "") };
    inline DescribeEnvironmentResponseBodyData& setBindVpcCidr(string bindVpcCidr) { DARABONBA_PTR_SET_VALUE(bindVpcCidr_, bindVpcCidr) };


    // dbInstanceStatus Field Functions 
    bool hasDbInstanceStatus() const { return this->dbInstanceStatus_ != nullptr;};
    void deleteDbInstanceStatus() { this->dbInstanceStatus_ = nullptr;};
    inline string dbInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceStatus_, "") };
    inline DescribeEnvironmentResponseBodyData& setDbInstanceStatus(string dbInstanceStatus) { DARABONBA_PTR_SET_VALUE(dbInstanceStatus_, dbInstanceStatus) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline DescribeEnvironmentResponseBodyData& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // environmentName Field Functions 
    bool hasEnvironmentName() const { return this->environmentName_ != nullptr;};
    void deleteEnvironmentName() { this->environmentName_ = nullptr;};
    inline string environmentName() const { DARABONBA_PTR_GET_DEFAULT(environmentName_, "") };
    inline DescribeEnvironmentResponseBodyData& setEnvironmentName(string environmentName) { DARABONBA_PTR_SET_VALUE(environmentName_, environmentName) };


    // environmentSubType Field Functions 
    bool hasEnvironmentSubType() const { return this->environmentSubType_ != nullptr;};
    void deleteEnvironmentSubType() { this->environmentSubType_ = nullptr;};
    inline string environmentSubType() const { DARABONBA_PTR_GET_DEFAULT(environmentSubType_, "") };
    inline DescribeEnvironmentResponseBodyData& setEnvironmentSubType(string environmentSubType) { DARABONBA_PTR_SET_VALUE(environmentSubType_, environmentSubType) };


    // environmentType Field Functions 
    bool hasEnvironmentType() const { return this->environmentType_ != nullptr;};
    void deleteEnvironmentType() { this->environmentType_ = nullptr;};
    inline string environmentType() const { DARABONBA_PTR_GET_DEFAULT(environmentType_, "") };
    inline DescribeEnvironmentResponseBodyData& setEnvironmentType(string environmentType) { DARABONBA_PTR_SET_VALUE(environmentType_, environmentType) };


    // feePackage Field Functions 
    bool hasFeePackage() const { return this->feePackage_ != nullptr;};
    void deleteFeePackage() { this->feePackage_ = nullptr;};
    inline string feePackage() const { DARABONBA_PTR_GET_DEFAULT(feePackage_, "") };
    inline DescribeEnvironmentResponseBodyData& setFeePackage(string feePackage) { DARABONBA_PTR_SET_VALUE(feePackage_, feePackage) };


    // grafaDataSourceName Field Functions 
    bool hasGrafaDataSourceName() const { return this->grafaDataSourceName_ != nullptr;};
    void deleteGrafaDataSourceName() { this->grafaDataSourceName_ = nullptr;};
    inline string grafaDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(grafaDataSourceName_, "") };
    inline DescribeEnvironmentResponseBodyData& setGrafaDataSourceName(string grafaDataSourceName) { DARABONBA_PTR_SET_VALUE(grafaDataSourceName_, grafaDataSourceName) };


    // grafanaDatasourceUid Field Functions 
    bool hasGrafanaDatasourceUid() const { return this->grafanaDatasourceUid_ != nullptr;};
    void deleteGrafanaDatasourceUid() { this->grafanaDatasourceUid_ = nullptr;};
    inline string grafanaDatasourceUid() const { DARABONBA_PTR_GET_DEFAULT(grafanaDatasourceUid_, "") };
    inline DescribeEnvironmentResponseBodyData& setGrafanaDatasourceUid(string grafanaDatasourceUid) { DARABONBA_PTR_SET_VALUE(grafanaDatasourceUid_, grafanaDatasourceUid) };


    // grafanaFolderTitle Field Functions 
    bool hasGrafanaFolderTitle() const { return this->grafanaFolderTitle_ != nullptr;};
    void deleteGrafanaFolderTitle() { this->grafanaFolderTitle_ = nullptr;};
    inline string grafanaFolderTitle() const { DARABONBA_PTR_GET_DEFAULT(grafanaFolderTitle_, "") };
    inline DescribeEnvironmentResponseBodyData& setGrafanaFolderTitle(string grafanaFolderTitle) { DARABONBA_PTR_SET_VALUE(grafanaFolderTitle_, grafanaFolderTitle) };


    // grafanaFolderUid Field Functions 
    bool hasGrafanaFolderUid() const { return this->grafanaFolderUid_ != nullptr;};
    void deleteGrafanaFolderUid() { this->grafanaFolderUid_ = nullptr;};
    inline string grafanaFolderUid() const { DARABONBA_PTR_GET_DEFAULT(grafanaFolderUid_, "") };
    inline DescribeEnvironmentResponseBodyData& setGrafanaFolderUid(string grafanaFolderUid) { DARABONBA_PTR_SET_VALUE(grafanaFolderUid_, grafanaFolderUid) };


    // grafanaFolderUrl Field Functions 
    bool hasGrafanaFolderUrl() const { return this->grafanaFolderUrl_ != nullptr;};
    void deleteGrafanaFolderUrl() { this->grafanaFolderUrl_ = nullptr;};
    inline string grafanaFolderUrl() const { DARABONBA_PTR_GET_DEFAULT(grafanaFolderUrl_, "") };
    inline DescribeEnvironmentResponseBodyData& setGrafanaFolderUrl(string grafanaFolderUrl) { DARABONBA_PTR_SET_VALUE(grafanaFolderUrl_, grafanaFolderUrl) };


    // grafanaWorkspaceId Field Functions 
    bool hasGrafanaWorkspaceId() const { return this->grafanaWorkspaceId_ != nullptr;};
    void deleteGrafanaWorkspaceId() { this->grafanaWorkspaceId_ = nullptr;};
    inline string grafanaWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceId_, "") };
    inline DescribeEnvironmentResponseBodyData& setGrafanaWorkspaceId(string grafanaWorkspaceId) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceId_, grafanaWorkspaceId) };


    // managedType Field Functions 
    bool hasManagedType() const { return this->managedType_ != nullptr;};
    void deleteManagedType() { this->managedType_ = nullptr;};
    inline string managedType() const { DARABONBA_PTR_GET_DEFAULT(managedType_, "") };
    inline DescribeEnvironmentResponseBodyData& setManagedType(string managedType) { DARABONBA_PTR_SET_VALUE(managedType_, managedType) };


    // prometheusInstanceId Field Functions 
    bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
    void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
    inline string prometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
    inline DescribeEnvironmentResponseBodyData& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


    // prometheusInstanceName Field Functions 
    bool hasPrometheusInstanceName() const { return this->prometheusInstanceName_ != nullptr;};
    void deletePrometheusInstanceName() { this->prometheusInstanceName_ = nullptr;};
    inline string prometheusInstanceName() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceName_, "") };
    inline DescribeEnvironmentResponseBodyData& setPrometheusInstanceName(string prometheusInstanceName) { DARABONBA_PTR_SET_VALUE(prometheusInstanceName_, prometheusInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEnvironmentResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeEnvironmentResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeEnvironmentResponseBodyData& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeEnvironmentResponseBodyDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeEnvironmentResponseBodyDataTags>) };
    inline vector<Models::DescribeEnvironmentResponseBodyDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeEnvironmentResponseBodyDataTags>) };
    inline DescribeEnvironmentResponseBodyData& setTags(const vector<Models::DescribeEnvironmentResponseBodyDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeEnvironmentResponseBodyData& setTags(vector<Models::DescribeEnvironmentResponseBodyDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeEnvironmentResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeEnvironmentResponseBodyData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeEnvironmentResponseBodyData& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // The ID of the resource associated with the environment, such as the ACK cluster ID or VPC ID.
    std::shared_ptr<string> bindResourceId_ = nullptr;
    // The profile of the resource.
    std::shared_ptr<string> bindResourceProfile_ = nullptr;
    // The status of the resource.
    std::shared_ptr<string> bindResourceStatus_ = nullptr;
    // The retention period of the resource. Unit: days.
    std::shared_ptr<string> bindResourceStoreDuration_ = nullptr;
    // The resource type.
    std::shared_ptr<string> bindResourceType_ = nullptr;
    // The VPC CIDR block.
    std::shared_ptr<string> bindVpcCidr_ = nullptr;
    // The status of the database that is bound to the Prometheus instance.
    // 
    // Valid values:
    // 
    // *   UNINSTALLING
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   INSTALLING
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   UNINSTALLED
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   RUNNING
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   MODIFYING
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> dbInstanceStatus_ = nullptr;
    // The ID of the environment instance.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The environment name.
    std::shared_ptr<string> environmentName_ = nullptr;
    // Environment subtypes:
    // - CS: Currently supports ACK.
    // - ECS: ECS is currently supported.
    // - Cloud: Currently supports Cloud.
    std::shared_ptr<string> environmentSubType_ = nullptr;
    // The type of the environment. Valid values:
    // 
    // *   CS: Container Service for Kubernetes (ACK)
    // *   ECS: Elastic Compute Service
    // *   Cloud: cloud service
    std::shared_ptr<string> environmentType_ = nullptr;
    // The payable resource plan. Valid values:
    // 
    // *   If the EnvironmentType parameter is set to CS, set the value to CS_Basic or CS_Pro.
    // *   Otherwise, leave the parameter empty.
    std::shared_ptr<string> feePackage_ = nullptr;
    // The name of the Grafana data source.
    std::shared_ptr<string> grafaDataSourceName_ = nullptr;
    // The unique ID of the Grafana data source.
    std::shared_ptr<string> grafanaDatasourceUid_ = nullptr;
    // The name of the Grafana directory.
    std::shared_ptr<string> grafanaFolderTitle_ = nullptr;
    // The unique ID of the Grafana directory.
    std::shared_ptr<string> grafanaFolderUid_ = nullptr;
    // The URL of the Grafana directory.
    std::shared_ptr<string> grafanaFolderUrl_ = nullptr;
    // The ID of the Grafana workspace.
    std::shared_ptr<string> grafanaWorkspaceId_ = nullptr;
    // managed type:
    // - none: unmanaged. The default value for ACK clusters.
    // - agent: managed agent (including KSM). The default values for ASK, ACS, and AckOne clusters.
    // - agent-exporter: managed agent and exporters. The default value for the cloud service type.
    std::shared_ptr<string> managedType_ = nullptr;
    // The ID of the Prometheus instance.
    std::shared_ptr<string> prometheusInstanceId_ = nullptr;
    // The name of the Prometheus instance.
    std::shared_ptr<string> prometheusInstanceName_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the security group associated with the environment.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::DescribeEnvironmentResponseBodyDataTags>> tags_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the vSwitch associated with the environment.
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif

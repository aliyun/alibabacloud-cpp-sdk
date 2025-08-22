// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSINSTANCEBYTAGANDRESOURCEGROUPIDRESPONSEBODYDATAPROMETHEUSINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSINSTANCEBYTAGANDRESOURCEGROUPIDRESPONSEBODYDATAPROMETHEUSINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstancesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& obj) { 
      DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(GrafanaInstanceId, grafanaInstanceId_);
      DARABONBA_PTR_TO_JSON(HttpApiInterUrl, httpApiInterUrl_);
      DARABONBA_PTR_TO_JSON(HttpApiIntraUrl, httpApiIntraUrl_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(PushGatewayInterUrl, pushGatewayInterUrl_);
      DARABONBA_PTR_TO_JSON(PushGatewayIntraUrl, pushGatewayIntraUrl_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoteReadInterUrl, remoteReadInterUrl_);
      DARABONBA_PTR_TO_JSON(RemoteReadIntraUrl, remoteReadIntraUrl_);
      DARABONBA_PTR_TO_JSON(RemoteWriteInterUrl, remoteWriteInterUrl_);
      DARABONBA_PTR_TO_JSON(RemoteWriteIntraUrl, remoteWriteIntraUrl_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SubClustersJson, subClustersJson_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(GrafanaInstanceId, grafanaInstanceId_);
      DARABONBA_PTR_FROM_JSON(HttpApiInterUrl, httpApiInterUrl_);
      DARABONBA_PTR_FROM_JSON(HttpApiIntraUrl, httpApiIntraUrl_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(PushGatewayInterUrl, pushGatewayInterUrl_);
      DARABONBA_PTR_FROM_JSON(PushGatewayIntraUrl, pushGatewayIntraUrl_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoteReadInterUrl, remoteReadInterUrl_);
      DARABONBA_PTR_FROM_JSON(RemoteReadIntraUrl, remoteReadIntraUrl_);
      DARABONBA_PTR_FROM_JSON(RemoteWriteInterUrl, remoteWriteInterUrl_);
      DARABONBA_PTR_FROM_JSON(RemoteWriteIntraUrl, remoteWriteIntraUrl_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SubClustersJson, subClustersJson_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances() = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances(const ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances &) = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances(ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances &&) = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances() = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& operator=(const ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances &) = default ;
    ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& operator=(ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authToken_ != nullptr
        && this->clusterId_ != nullptr && this->clusterName_ != nullptr && this->clusterType_ != nullptr && this->grafanaInstanceId_ != nullptr && this->httpApiInterUrl_ != nullptr
        && this->httpApiIntraUrl_ != nullptr && this->paymentType_ != nullptr && this->pushGatewayInterUrl_ != nullptr && this->pushGatewayIntraUrl_ != nullptr && this->regionId_ != nullptr
        && this->remoteReadInterUrl_ != nullptr && this->remoteReadIntraUrl_ != nullptr && this->remoteWriteInterUrl_ != nullptr && this->remoteWriteIntraUrl_ != nullptr && this->resourceGroupId_ != nullptr
        && this->resourceType_ != nullptr && this->securityGroupId_ != nullptr && this->subClustersJson_ != nullptr && this->tags_ != nullptr && this->userId_ != nullptr
        && this->vSwitchId_ != nullptr && this->vpcId_ != nullptr; };
    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string authToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // grafanaInstanceId Field Functions 
    bool hasGrafanaInstanceId() const { return this->grafanaInstanceId_ != nullptr;};
    void deleteGrafanaInstanceId() { this->grafanaInstanceId_ = nullptr;};
    inline string grafanaInstanceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaInstanceId_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setGrafanaInstanceId(string grafanaInstanceId) { DARABONBA_PTR_SET_VALUE(grafanaInstanceId_, grafanaInstanceId) };


    // httpApiInterUrl Field Functions 
    bool hasHttpApiInterUrl() const { return this->httpApiInterUrl_ != nullptr;};
    void deleteHttpApiInterUrl() { this->httpApiInterUrl_ = nullptr;};
    inline string httpApiInterUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiInterUrl_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setHttpApiInterUrl(string httpApiInterUrl) { DARABONBA_PTR_SET_VALUE(httpApiInterUrl_, httpApiInterUrl) };


    // httpApiIntraUrl Field Functions 
    bool hasHttpApiIntraUrl() const { return this->httpApiIntraUrl_ != nullptr;};
    void deleteHttpApiIntraUrl() { this->httpApiIntraUrl_ = nullptr;};
    inline string httpApiIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiIntraUrl_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setHttpApiIntraUrl(string httpApiIntraUrl) { DARABONBA_PTR_SET_VALUE(httpApiIntraUrl_, httpApiIntraUrl) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // pushGatewayInterUrl Field Functions 
    bool hasPushGatewayInterUrl() const { return this->pushGatewayInterUrl_ != nullptr;};
    void deletePushGatewayInterUrl() { this->pushGatewayInterUrl_ = nullptr;};
    inline string pushGatewayInterUrl() const { DARABONBA_PTR_GET_DEFAULT(pushGatewayInterUrl_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setPushGatewayInterUrl(string pushGatewayInterUrl) { DARABONBA_PTR_SET_VALUE(pushGatewayInterUrl_, pushGatewayInterUrl) };


    // pushGatewayIntraUrl Field Functions 
    bool hasPushGatewayIntraUrl() const { return this->pushGatewayIntraUrl_ != nullptr;};
    void deletePushGatewayIntraUrl() { this->pushGatewayIntraUrl_ = nullptr;};
    inline string pushGatewayIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(pushGatewayIntraUrl_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setPushGatewayIntraUrl(string pushGatewayIntraUrl) { DARABONBA_PTR_SET_VALUE(pushGatewayIntraUrl_, pushGatewayIntraUrl) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remoteReadInterUrl Field Functions 
    bool hasRemoteReadInterUrl() const { return this->remoteReadInterUrl_ != nullptr;};
    void deleteRemoteReadInterUrl() { this->remoteReadInterUrl_ = nullptr;};
    inline string remoteReadInterUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteReadInterUrl_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setRemoteReadInterUrl(string remoteReadInterUrl) { DARABONBA_PTR_SET_VALUE(remoteReadInterUrl_, remoteReadInterUrl) };


    // remoteReadIntraUrl Field Functions 
    bool hasRemoteReadIntraUrl() const { return this->remoteReadIntraUrl_ != nullptr;};
    void deleteRemoteReadIntraUrl() { this->remoteReadIntraUrl_ = nullptr;};
    inline string remoteReadIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteReadIntraUrl_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setRemoteReadIntraUrl(string remoteReadIntraUrl) { DARABONBA_PTR_SET_VALUE(remoteReadIntraUrl_, remoteReadIntraUrl) };


    // remoteWriteInterUrl Field Functions 
    bool hasRemoteWriteInterUrl() const { return this->remoteWriteInterUrl_ != nullptr;};
    void deleteRemoteWriteInterUrl() { this->remoteWriteInterUrl_ = nullptr;};
    inline string remoteWriteInterUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteWriteInterUrl_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setRemoteWriteInterUrl(string remoteWriteInterUrl) { DARABONBA_PTR_SET_VALUE(remoteWriteInterUrl_, remoteWriteInterUrl) };


    // remoteWriteIntraUrl Field Functions 
    bool hasRemoteWriteIntraUrl() const { return this->remoteWriteIntraUrl_ != nullptr;};
    void deleteRemoteWriteIntraUrl() { this->remoteWriteIntraUrl_ = nullptr;};
    inline string remoteWriteIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteWriteIntraUrl_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setRemoteWriteIntraUrl(string remoteWriteIntraUrl) { DARABONBA_PTR_SET_VALUE(remoteWriteIntraUrl_, remoteWriteIntraUrl) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // subClustersJson Field Functions 
    bool hasSubClustersJson() const { return this->subClustersJson_ != nullptr;};
    void deleteSubClustersJson() { this->subClustersJson_ = nullptr;};
    inline string subClustersJson() const { DARABONBA_PTR_GET_DEFAULT(subClustersJson_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setSubClustersJson(string subClustersJson) { DARABONBA_PTR_SET_VALUE(subClustersJson_, subClustersJson) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstancesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstancesTags>) };
    inline vector<Models::ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstancesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstancesTags>) };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setTags(const vector<Models::ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstancesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setTags(vector<Models::ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstancesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstances& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The authorization token.
    std::shared_ptr<string> authToken_ = nullptr;
    // The ID of the Prometheus instance.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the Prometheus instance.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The instance type. Valid values:
    // 
    // *   remote-write: Prometheus instance for Remote Write
    // *   ecs: Prometheus instances for ECS
    // *   cloud-monitor: Prometheus instance for Alibaba Cloud services in the Chinese mainland
    // *   cloud-product: Prometheus instance for Alibaba Cloud services outside the Chinese mainland
    // *   global-view: global aggregation instance
    // *   aliyun-cs: Prometheus instance for Container Service
    std::shared_ptr<string> clusterType_ = nullptr;
    // The ID of the Grafana workspace.
    std::shared_ptr<string> grafanaInstanceId_ = nullptr;
    // The public URL for the HTTP API.
    std::shared_ptr<string> httpApiInterUrl_ = nullptr;
    // The internal URL for the HTTP API.
    std::shared_ptr<string> httpApiIntraUrl_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   PREPAY: subscription
    // *   POSTPAY: pay-as-you-go
    std::shared_ptr<string> paymentType_ = nullptr;
    // The public URL for Pushgateway.
    std::shared_ptr<string> pushGatewayInterUrl_ = nullptr;
    // The internal URL for Pushgateway.
    std::shared_ptr<string> pushGatewayIntraUrl_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The public URL for remote read.
    std::shared_ptr<string> remoteReadInterUrl_ = nullptr;
    // The internal URL for remote read.
    std::shared_ptr<string> remoteReadIntraUrl_ = nullptr;
    // The public URL for remote write.
    std::shared_ptr<string> remoteWriteInterUrl_ = nullptr;
    // The internal URL for remote write.
    std::shared_ptr<string> remoteWriteIntraUrl_ = nullptr;
    // The ID of the resource group to which the Prometheus instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The child instances of the global aggregation instance. The value is a JSON string.
    std::shared_ptr<string> subClustersJson_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<Models::ListPrometheusInstanceByTagAndResourceGroupIdResponseBodyDataPrometheusInstancesTags>> tags_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif

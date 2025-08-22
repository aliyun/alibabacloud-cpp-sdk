// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROMETHEUSINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPROMETHEUSINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/GetPrometheusInstanceResponseBodyDataTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetPrometheusInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrometheusInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(ArchiveDuration, archiveDuration_);
      DARABONBA_PTR_TO_JSON(AuthFreeReadPolicy, authFreeReadPolicy_);
      DARABONBA_PTR_TO_JSON(AuthFreeWritePolicy, authFreeWritePolicy_);
      DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(DbInstanceStatus, dbInstanceStatus_);
      DARABONBA_PTR_TO_JSON(EnableAuthFreeRead, enableAuthFreeRead_);
      DARABONBA_PTR_TO_JSON(EnableAuthFreeWrite, enableAuthFreeWrite_);
      DARABONBA_PTR_TO_JSON(EnableAuthToken, enableAuthToken_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(GrafanaInstanceId, grafanaInstanceId_);
      DARABONBA_PTR_TO_JSON(HttpApiInterUrl, httpApiInterUrl_);
      DARABONBA_PTR_TO_JSON(HttpApiIntraUrl, httpApiIntraUrl_);
      DARABONBA_PTR_TO_JSON(OpenTelemetryInterUrl, openTelemetryInterUrl_);
      DARABONBA_PTR_TO_JSON(OpenTelemetryIntraUrl, openTelemetryIntraUrl_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(PaymentTypeUpdateTime, paymentTypeUpdateTime_);
      DARABONBA_PTR_TO_JSON(Product, product_);
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
      DARABONBA_PTR_TO_JSON(StorageDuration, storageDuration_);
      DARABONBA_PTR_TO_JSON(SubClustersJson, subClustersJson_);
      DARABONBA_PTR_TO_JSON(SupportAuthTypes, supportAuthTypes_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrometheusInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(ArchiveDuration, archiveDuration_);
      DARABONBA_PTR_FROM_JSON(AuthFreeReadPolicy, authFreeReadPolicy_);
      DARABONBA_PTR_FROM_JSON(AuthFreeWritePolicy, authFreeWritePolicy_);
      DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(DbInstanceStatus, dbInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(EnableAuthFreeRead, enableAuthFreeRead_);
      DARABONBA_PTR_FROM_JSON(EnableAuthFreeWrite, enableAuthFreeWrite_);
      DARABONBA_PTR_FROM_JSON(EnableAuthToken, enableAuthToken_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(GrafanaInstanceId, grafanaInstanceId_);
      DARABONBA_PTR_FROM_JSON(HttpApiInterUrl, httpApiInterUrl_);
      DARABONBA_PTR_FROM_JSON(HttpApiIntraUrl, httpApiIntraUrl_);
      DARABONBA_PTR_FROM_JSON(OpenTelemetryInterUrl, openTelemetryInterUrl_);
      DARABONBA_PTR_FROM_JSON(OpenTelemetryIntraUrl, openTelemetryIntraUrl_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(PaymentTypeUpdateTime, paymentTypeUpdateTime_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
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
      DARABONBA_PTR_FROM_JSON(StorageDuration, storageDuration_);
      DARABONBA_PTR_FROM_JSON(SubClustersJson, subClustersJson_);
      DARABONBA_PTR_FROM_JSON(SupportAuthTypes, supportAuthTypes_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetPrometheusInstanceResponseBodyData() = default ;
    GetPrometheusInstanceResponseBodyData(const GetPrometheusInstanceResponseBodyData &) = default ;
    GetPrometheusInstanceResponseBodyData(GetPrometheusInstanceResponseBodyData &&) = default ;
    GetPrometheusInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrometheusInstanceResponseBodyData() = default ;
    GetPrometheusInstanceResponseBodyData& operator=(const GetPrometheusInstanceResponseBodyData &) = default ;
    GetPrometheusInstanceResponseBodyData& operator=(GetPrometheusInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessType_ != nullptr
        && this->archiveDuration_ != nullptr && this->authFreeReadPolicy_ != nullptr && this->authFreeWritePolicy_ != nullptr && this->authToken_ != nullptr && this->clusterId_ != nullptr
        && this->clusterName_ != nullptr && this->clusterType_ != nullptr && this->dbInstanceStatus_ != nullptr && this->enableAuthFreeRead_ != nullptr && this->enableAuthFreeWrite_ != nullptr
        && this->enableAuthToken_ != nullptr && this->extraInfo_ != nullptr && this->grafanaInstanceId_ != nullptr && this->httpApiInterUrl_ != nullptr && this->httpApiIntraUrl_ != nullptr
        && this->openTelemetryInterUrl_ != nullptr && this->openTelemetryIntraUrl_ != nullptr && this->paymentType_ != nullptr && this->paymentTypeUpdateTime_ != nullptr && this->product_ != nullptr
        && this->pushGatewayInterUrl_ != nullptr && this->pushGatewayIntraUrl_ != nullptr && this->regionId_ != nullptr && this->remoteReadInterUrl_ != nullptr && this->remoteReadIntraUrl_ != nullptr
        && this->remoteWriteInterUrl_ != nullptr && this->remoteWriteIntraUrl_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceType_ != nullptr && this->securityGroupId_ != nullptr
        && this->storageDuration_ != nullptr && this->subClustersJson_ != nullptr && this->supportAuthTypes_ != nullptr && this->tags_ != nullptr && this->userId_ != nullptr
        && this->vSwitchId_ != nullptr && this->version_ != nullptr && this->vpcId_ != nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline GetPrometheusInstanceResponseBodyData& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // archiveDuration Field Functions 
    bool hasArchiveDuration() const { return this->archiveDuration_ != nullptr;};
    void deleteArchiveDuration() { this->archiveDuration_ = nullptr;};
    inline int32_t archiveDuration() const { DARABONBA_PTR_GET_DEFAULT(archiveDuration_, 0) };
    inline GetPrometheusInstanceResponseBodyData& setArchiveDuration(int32_t archiveDuration) { DARABONBA_PTR_SET_VALUE(archiveDuration_, archiveDuration) };


    // authFreeReadPolicy Field Functions 
    bool hasAuthFreeReadPolicy() const { return this->authFreeReadPolicy_ != nullptr;};
    void deleteAuthFreeReadPolicy() { this->authFreeReadPolicy_ = nullptr;};
    inline string authFreeReadPolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeReadPolicy_, "") };
    inline GetPrometheusInstanceResponseBodyData& setAuthFreeReadPolicy(string authFreeReadPolicy) { DARABONBA_PTR_SET_VALUE(authFreeReadPolicy_, authFreeReadPolicy) };


    // authFreeWritePolicy Field Functions 
    bool hasAuthFreeWritePolicy() const { return this->authFreeWritePolicy_ != nullptr;};
    void deleteAuthFreeWritePolicy() { this->authFreeWritePolicy_ = nullptr;};
    inline string authFreeWritePolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeWritePolicy_, "") };
    inline GetPrometheusInstanceResponseBodyData& setAuthFreeWritePolicy(string authFreeWritePolicy) { DARABONBA_PTR_SET_VALUE(authFreeWritePolicy_, authFreeWritePolicy) };


    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string authToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline GetPrometheusInstanceResponseBodyData& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetPrometheusInstanceResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline GetPrometheusInstanceResponseBodyData& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline GetPrometheusInstanceResponseBodyData& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // dbInstanceStatus Field Functions 
    bool hasDbInstanceStatus() const { return this->dbInstanceStatus_ != nullptr;};
    void deleteDbInstanceStatus() { this->dbInstanceStatus_ = nullptr;};
    inline string dbInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceStatus_, "") };
    inline GetPrometheusInstanceResponseBodyData& setDbInstanceStatus(string dbInstanceStatus) { DARABONBA_PTR_SET_VALUE(dbInstanceStatus_, dbInstanceStatus) };


    // enableAuthFreeRead Field Functions 
    bool hasEnableAuthFreeRead() const { return this->enableAuthFreeRead_ != nullptr;};
    void deleteEnableAuthFreeRead() { this->enableAuthFreeRead_ = nullptr;};
    inline bool enableAuthFreeRead() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeRead_, false) };
    inline GetPrometheusInstanceResponseBodyData& setEnableAuthFreeRead(bool enableAuthFreeRead) { DARABONBA_PTR_SET_VALUE(enableAuthFreeRead_, enableAuthFreeRead) };


    // enableAuthFreeWrite Field Functions 
    bool hasEnableAuthFreeWrite() const { return this->enableAuthFreeWrite_ != nullptr;};
    void deleteEnableAuthFreeWrite() { this->enableAuthFreeWrite_ = nullptr;};
    inline bool enableAuthFreeWrite() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeWrite_, false) };
    inline GetPrometheusInstanceResponseBodyData& setEnableAuthFreeWrite(bool enableAuthFreeWrite) { DARABONBA_PTR_SET_VALUE(enableAuthFreeWrite_, enableAuthFreeWrite) };


    // enableAuthToken Field Functions 
    bool hasEnableAuthToken() const { return this->enableAuthToken_ != nullptr;};
    void deleteEnableAuthToken() { this->enableAuthToken_ = nullptr;};
    inline string enableAuthToken() const { DARABONBA_PTR_GET_DEFAULT(enableAuthToken_, "") };
    inline GetPrometheusInstanceResponseBodyData& setEnableAuthToken(string enableAuthToken) { DARABONBA_PTR_SET_VALUE(enableAuthToken_, enableAuthToken) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline const map<string, string> & extraInfo() const { DARABONBA_PTR_GET_CONST(extraInfo_, map<string, string>) };
    inline map<string, string> extraInfo() { DARABONBA_PTR_GET(extraInfo_, map<string, string>) };
    inline GetPrometheusInstanceResponseBodyData& setExtraInfo(const map<string, string> & extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };
    inline GetPrometheusInstanceResponseBodyData& setExtraInfo(map<string, string> && extraInfo) { DARABONBA_PTR_SET_RVALUE(extraInfo_, extraInfo) };


    // grafanaInstanceId Field Functions 
    bool hasGrafanaInstanceId() const { return this->grafanaInstanceId_ != nullptr;};
    void deleteGrafanaInstanceId() { this->grafanaInstanceId_ = nullptr;};
    inline string grafanaInstanceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaInstanceId_, "") };
    inline GetPrometheusInstanceResponseBodyData& setGrafanaInstanceId(string grafanaInstanceId) { DARABONBA_PTR_SET_VALUE(grafanaInstanceId_, grafanaInstanceId) };


    // httpApiInterUrl Field Functions 
    bool hasHttpApiInterUrl() const { return this->httpApiInterUrl_ != nullptr;};
    void deleteHttpApiInterUrl() { this->httpApiInterUrl_ = nullptr;};
    inline string httpApiInterUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiInterUrl_, "") };
    inline GetPrometheusInstanceResponseBodyData& setHttpApiInterUrl(string httpApiInterUrl) { DARABONBA_PTR_SET_VALUE(httpApiInterUrl_, httpApiInterUrl) };


    // httpApiIntraUrl Field Functions 
    bool hasHttpApiIntraUrl() const { return this->httpApiIntraUrl_ != nullptr;};
    void deleteHttpApiIntraUrl() { this->httpApiIntraUrl_ = nullptr;};
    inline string httpApiIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiIntraUrl_, "") };
    inline GetPrometheusInstanceResponseBodyData& setHttpApiIntraUrl(string httpApiIntraUrl) { DARABONBA_PTR_SET_VALUE(httpApiIntraUrl_, httpApiIntraUrl) };


    // openTelemetryInterUrl Field Functions 
    bool hasOpenTelemetryInterUrl() const { return this->openTelemetryInterUrl_ != nullptr;};
    void deleteOpenTelemetryInterUrl() { this->openTelemetryInterUrl_ = nullptr;};
    inline string openTelemetryInterUrl() const { DARABONBA_PTR_GET_DEFAULT(openTelemetryInterUrl_, "") };
    inline GetPrometheusInstanceResponseBodyData& setOpenTelemetryInterUrl(string openTelemetryInterUrl) { DARABONBA_PTR_SET_VALUE(openTelemetryInterUrl_, openTelemetryInterUrl) };


    // openTelemetryIntraUrl Field Functions 
    bool hasOpenTelemetryIntraUrl() const { return this->openTelemetryIntraUrl_ != nullptr;};
    void deleteOpenTelemetryIntraUrl() { this->openTelemetryIntraUrl_ = nullptr;};
    inline string openTelemetryIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(openTelemetryIntraUrl_, "") };
    inline GetPrometheusInstanceResponseBodyData& setOpenTelemetryIntraUrl(string openTelemetryIntraUrl) { DARABONBA_PTR_SET_VALUE(openTelemetryIntraUrl_, openTelemetryIntraUrl) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline GetPrometheusInstanceResponseBodyData& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // paymentTypeUpdateTime Field Functions 
    bool hasPaymentTypeUpdateTime() const { return this->paymentTypeUpdateTime_ != nullptr;};
    void deletePaymentTypeUpdateTime() { this->paymentTypeUpdateTime_ = nullptr;};
    inline string paymentTypeUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(paymentTypeUpdateTime_, "") };
    inline GetPrometheusInstanceResponseBodyData& setPaymentTypeUpdateTime(string paymentTypeUpdateTime) { DARABONBA_PTR_SET_VALUE(paymentTypeUpdateTime_, paymentTypeUpdateTime) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetPrometheusInstanceResponseBodyData& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // pushGatewayInterUrl Field Functions 
    bool hasPushGatewayInterUrl() const { return this->pushGatewayInterUrl_ != nullptr;};
    void deletePushGatewayInterUrl() { this->pushGatewayInterUrl_ = nullptr;};
    inline string pushGatewayInterUrl() const { DARABONBA_PTR_GET_DEFAULT(pushGatewayInterUrl_, "") };
    inline GetPrometheusInstanceResponseBodyData& setPushGatewayInterUrl(string pushGatewayInterUrl) { DARABONBA_PTR_SET_VALUE(pushGatewayInterUrl_, pushGatewayInterUrl) };


    // pushGatewayIntraUrl Field Functions 
    bool hasPushGatewayIntraUrl() const { return this->pushGatewayIntraUrl_ != nullptr;};
    void deletePushGatewayIntraUrl() { this->pushGatewayIntraUrl_ = nullptr;};
    inline string pushGatewayIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(pushGatewayIntraUrl_, "") };
    inline GetPrometheusInstanceResponseBodyData& setPushGatewayIntraUrl(string pushGatewayIntraUrl) { DARABONBA_PTR_SET_VALUE(pushGatewayIntraUrl_, pushGatewayIntraUrl) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetPrometheusInstanceResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remoteReadInterUrl Field Functions 
    bool hasRemoteReadInterUrl() const { return this->remoteReadInterUrl_ != nullptr;};
    void deleteRemoteReadInterUrl() { this->remoteReadInterUrl_ = nullptr;};
    inline string remoteReadInterUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteReadInterUrl_, "") };
    inline GetPrometheusInstanceResponseBodyData& setRemoteReadInterUrl(string remoteReadInterUrl) { DARABONBA_PTR_SET_VALUE(remoteReadInterUrl_, remoteReadInterUrl) };


    // remoteReadIntraUrl Field Functions 
    bool hasRemoteReadIntraUrl() const { return this->remoteReadIntraUrl_ != nullptr;};
    void deleteRemoteReadIntraUrl() { this->remoteReadIntraUrl_ = nullptr;};
    inline string remoteReadIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteReadIntraUrl_, "") };
    inline GetPrometheusInstanceResponseBodyData& setRemoteReadIntraUrl(string remoteReadIntraUrl) { DARABONBA_PTR_SET_VALUE(remoteReadIntraUrl_, remoteReadIntraUrl) };


    // remoteWriteInterUrl Field Functions 
    bool hasRemoteWriteInterUrl() const { return this->remoteWriteInterUrl_ != nullptr;};
    void deleteRemoteWriteInterUrl() { this->remoteWriteInterUrl_ = nullptr;};
    inline string remoteWriteInterUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteWriteInterUrl_, "") };
    inline GetPrometheusInstanceResponseBodyData& setRemoteWriteInterUrl(string remoteWriteInterUrl) { DARABONBA_PTR_SET_VALUE(remoteWriteInterUrl_, remoteWriteInterUrl) };


    // remoteWriteIntraUrl Field Functions 
    bool hasRemoteWriteIntraUrl() const { return this->remoteWriteIntraUrl_ != nullptr;};
    void deleteRemoteWriteIntraUrl() { this->remoteWriteIntraUrl_ = nullptr;};
    inline string remoteWriteIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteWriteIntraUrl_, "") };
    inline GetPrometheusInstanceResponseBodyData& setRemoteWriteIntraUrl(string remoteWriteIntraUrl) { DARABONBA_PTR_SET_VALUE(remoteWriteIntraUrl_, remoteWriteIntraUrl) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetPrometheusInstanceResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetPrometheusInstanceResponseBodyData& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GetPrometheusInstanceResponseBodyData& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // storageDuration Field Functions 
    bool hasStorageDuration() const { return this->storageDuration_ != nullptr;};
    void deleteStorageDuration() { this->storageDuration_ = nullptr;};
    inline int32_t storageDuration() const { DARABONBA_PTR_GET_DEFAULT(storageDuration_, 0) };
    inline GetPrometheusInstanceResponseBodyData& setStorageDuration(int32_t storageDuration) { DARABONBA_PTR_SET_VALUE(storageDuration_, storageDuration) };


    // subClustersJson Field Functions 
    bool hasSubClustersJson() const { return this->subClustersJson_ != nullptr;};
    void deleteSubClustersJson() { this->subClustersJson_ = nullptr;};
    inline string subClustersJson() const { DARABONBA_PTR_GET_DEFAULT(subClustersJson_, "") };
    inline GetPrometheusInstanceResponseBodyData& setSubClustersJson(string subClustersJson) { DARABONBA_PTR_SET_VALUE(subClustersJson_, subClustersJson) };


    // supportAuthTypes Field Functions 
    bool hasSupportAuthTypes() const { return this->supportAuthTypes_ != nullptr;};
    void deleteSupportAuthTypes() { this->supportAuthTypes_ = nullptr;};
    inline const vector<string> & supportAuthTypes() const { DARABONBA_PTR_GET_CONST(supportAuthTypes_, vector<string>) };
    inline vector<string> supportAuthTypes() { DARABONBA_PTR_GET(supportAuthTypes_, vector<string>) };
    inline GetPrometheusInstanceResponseBodyData& setSupportAuthTypes(const vector<string> & supportAuthTypes) { DARABONBA_PTR_SET_VALUE(supportAuthTypes_, supportAuthTypes) };
    inline GetPrometheusInstanceResponseBodyData& setSupportAuthTypes(vector<string> && supportAuthTypes) { DARABONBA_PTR_SET_RVALUE(supportAuthTypes_, supportAuthTypes) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetPrometheusInstanceResponseBodyDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetPrometheusInstanceResponseBodyDataTags>) };
    inline vector<Models::GetPrometheusInstanceResponseBodyDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetPrometheusInstanceResponseBodyDataTags>) };
    inline GetPrometheusInstanceResponseBodyData& setTags(const vector<Models::GetPrometheusInstanceResponseBodyDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetPrometheusInstanceResponseBodyData& setTags(vector<Models::GetPrometheusInstanceResponseBodyDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetPrometheusInstanceResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GetPrometheusInstanceResponseBodyData& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetPrometheusInstanceResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetPrometheusInstanceResponseBodyData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The permission type. Valid values: readWrite, readOnly, and httpReadOnly
    std::shared_ptr<string> accessType_ = nullptr;
    // The number of days for which data is automatically archived after the storage duration expires. Valid values: 60, 90, 180, and 365. 0 indicates that the data is not archived.
    std::shared_ptr<int32_t> archiveDuration_ = nullptr;
    // The whitelist of IP addresses for which password-free read is enabled.
    std::shared_ptr<string> authFreeReadPolicy_ = nullptr;
    // The whitelist of IP addresses for which password-free write is enabled.
    std::shared_ptr<string> authFreeWritePolicy_ = nullptr;
    // The authorization token.
    std::shared_ptr<string> authToken_ = nullptr;
    // The ID of the Prometheus instance.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the monitoring object.
    std::shared_ptr<string> clusterName_ = nullptr;
    // *   remote-write: general-purpose Prometheus instance
    // *   ecs: Prometheus instances for ECS
    // *   cloud-monitor: Prometheus instance for Alibaba Cloud services in the Chinese mainland
    // *   cloud-product: Prometheus instance for Alibaba Cloud services outside the Chinese mainland
    // *   global-view: global aggregation instance
    // *   aliyun-cs: Prometheus instance for Container Service
    std::shared_ptr<string> clusterType_ = nullptr;
    // The data storage status at the backend.
    std::shared_ptr<string> dbInstanceStatus_ = nullptr;
    // Indicates whether password-free read is enabled.
    std::shared_ptr<bool> enableAuthFreeRead_ = nullptr;
    // Indicates whether password-free write is enabled.
    std::shared_ptr<bool> enableAuthFreeWrite_ = nullptr;
    // Indicates whether access token authentication is enabled.
    std::shared_ptr<string> enableAuthToken_ = nullptr;
    // The extra information. This parameter is returned only for console requests.
    std::shared_ptr<map<string, string>> extraInfo_ = nullptr;
    // The ID of the Grafana workspace.
    std::shared_ptr<string> grafanaInstanceId_ = nullptr;
    // The public URL for the HTTP API.
    std::shared_ptr<string> httpApiInterUrl_ = nullptr;
    // The internal URL for the HTTP API.
    std::shared_ptr<string> httpApiIntraUrl_ = nullptr;
    std::shared_ptr<string> openTelemetryInterUrl_ = nullptr;
    std::shared_ptr<string> openTelemetryIntraUrl_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   PREPAY: subscription
    // *   POSTPAY: pay-as-you-go
    std::shared_ptr<string> paymentType_ = nullptr;
    // The time when the billing method was modified.
    std::shared_ptr<string> paymentTypeUpdateTime_ = nullptr;
    // The product to which the Prometheus instance belongs. Valid values: arms and cms.
    std::shared_ptr<string> product_ = nullptr;
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
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The type of the resource. Set the value to PROMETHEUS.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The ID of the security group. This parameter is returned only for Prometheus instances for ECS.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The data storage duration. Unit: days.
    std::shared_ptr<int32_t> storageDuration_ = nullptr;
    // The child instances of the global aggregation instance. The value is a JSON string.
    std::shared_ptr<string> subClustersJson_ = nullptr;
    // The supported authentication types.
    std::shared_ptr<vector<string>> supportAuthTypes_ = nullptr;
    // The tags of the instance.
    std::shared_ptr<vector<Models::GetPrometheusInstanceResponseBodyDataTags>> tags_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The vSwitch ID. This parameter is returned only for Prometheus instances for ECS.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // Version
    std::shared_ptr<string> version_ = nullptr;
    // The VPC ID. This parameter is returned only for Prometheus instances for ECS.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROMETHEUSINSTANCERESPONSEBODYPROMETHEUSINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_GETPROMETHEUSINSTANCERESPONSEBODYPROMETHEUSINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/GetPrometheusInstanceResponseBodyPrometheusInstanceTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetPrometheusInstanceResponseBodyPrometheusInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrometheusInstanceResponseBodyPrometheusInstance& obj) { 
      DARABONBA_PTR_TO_JSON(accessType, accessType_);
      DARABONBA_PTR_TO_JSON(archiveDuration, archiveDuration_);
      DARABONBA_PTR_TO_JSON(authFreeReadPolicy, authFreeReadPolicy_);
      DARABONBA_PTR_TO_JSON(authFreeWritePolicy, authFreeWritePolicy_);
      DARABONBA_PTR_TO_JSON(authToken, authToken_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(enableAuthFreeRead, enableAuthFreeRead_);
      DARABONBA_PTR_TO_JSON(enableAuthFreeWrite, enableAuthFreeWrite_);
      DARABONBA_PTR_TO_JSON(enableAuthToken, enableAuthToken_);
      DARABONBA_PTR_TO_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(folderUrl, folderUrl_);
      DARABONBA_PTR_TO_JSON(grafanaInstanceId, grafanaInstanceId_);
      DARABONBA_PTR_TO_JSON(grafanaInstanceName, grafanaInstanceName_);
      DARABONBA_PTR_TO_JSON(httpApiInterUrl, httpApiInterUrl_);
      DARABONBA_PTR_TO_JSON(httpApiIntraUrl, httpApiIntraUrl_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(paymentTypeUpdateTime, paymentTypeUpdateTime_);
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_PTR_TO_JSON(prometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_TO_JSON(prometheusInstanceName, prometheusInstanceName_);
      DARABONBA_PTR_TO_JSON(pushGatewayInterUrl, pushGatewayInterUrl_);
      DARABONBA_PTR_TO_JSON(pushGatewayIntraUrl, pushGatewayIntraUrl_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(remoteReadInterUrl, remoteReadInterUrl_);
      DARABONBA_PTR_TO_JSON(remoteReadIntraUrl, remoteReadIntraUrl_);
      DARABONBA_PTR_TO_JSON(remoteWriteInterUrl, remoteWriteInterUrl_);
      DARABONBA_PTR_TO_JSON(remoteWriteIntraUrl, remoteWriteIntraUrl_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(storageDuration, storageDuration_);
      DARABONBA_PTR_TO_JSON(supportAuthTypes, supportAuthTypes_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrometheusInstanceResponseBodyPrometheusInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(accessType, accessType_);
      DARABONBA_PTR_FROM_JSON(archiveDuration, archiveDuration_);
      DARABONBA_PTR_FROM_JSON(authFreeReadPolicy, authFreeReadPolicy_);
      DARABONBA_PTR_FROM_JSON(authFreeWritePolicy, authFreeWritePolicy_);
      DARABONBA_PTR_FROM_JSON(authToken, authToken_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(enableAuthFreeRead, enableAuthFreeRead_);
      DARABONBA_PTR_FROM_JSON(enableAuthFreeWrite, enableAuthFreeWrite_);
      DARABONBA_PTR_FROM_JSON(enableAuthToken, enableAuthToken_);
      DARABONBA_PTR_FROM_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(folderUrl, folderUrl_);
      DARABONBA_PTR_FROM_JSON(grafanaInstanceId, grafanaInstanceId_);
      DARABONBA_PTR_FROM_JSON(grafanaInstanceName, grafanaInstanceName_);
      DARABONBA_PTR_FROM_JSON(httpApiInterUrl, httpApiInterUrl_);
      DARABONBA_PTR_FROM_JSON(httpApiIntraUrl, httpApiIntraUrl_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(paymentTypeUpdateTime, paymentTypeUpdateTime_);
      DARABONBA_PTR_FROM_JSON(product, product_);
      DARABONBA_PTR_FROM_JSON(prometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_FROM_JSON(prometheusInstanceName, prometheusInstanceName_);
      DARABONBA_PTR_FROM_JSON(pushGatewayInterUrl, pushGatewayInterUrl_);
      DARABONBA_PTR_FROM_JSON(pushGatewayIntraUrl, pushGatewayIntraUrl_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(remoteReadInterUrl, remoteReadInterUrl_);
      DARABONBA_PTR_FROM_JSON(remoteReadIntraUrl, remoteReadIntraUrl_);
      DARABONBA_PTR_FROM_JSON(remoteWriteInterUrl, remoteWriteInterUrl_);
      DARABONBA_PTR_FROM_JSON(remoteWriteIntraUrl, remoteWriteIntraUrl_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(storageDuration, storageDuration_);
      DARABONBA_PTR_FROM_JSON(supportAuthTypes, supportAuthTypes_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    GetPrometheusInstanceResponseBodyPrometheusInstance() = default ;
    GetPrometheusInstanceResponseBodyPrometheusInstance(const GetPrometheusInstanceResponseBodyPrometheusInstance &) = default ;
    GetPrometheusInstanceResponseBodyPrometheusInstance(GetPrometheusInstanceResponseBodyPrometheusInstance &&) = default ;
    GetPrometheusInstanceResponseBodyPrometheusInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrometheusInstanceResponseBodyPrometheusInstance() = default ;
    GetPrometheusInstanceResponseBodyPrometheusInstance& operator=(const GetPrometheusInstanceResponseBodyPrometheusInstance &) = default ;
    GetPrometheusInstanceResponseBodyPrometheusInstance& operator=(GetPrometheusInstanceResponseBodyPrometheusInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessType_ == nullptr
        && return this->archiveDuration_ == nullptr && return this->authFreeReadPolicy_ == nullptr && return this->authFreeWritePolicy_ == nullptr && return this->authToken_ == nullptr && return this->createTime_ == nullptr
        && return this->enableAuthFreeRead_ == nullptr && return this->enableAuthFreeWrite_ == nullptr && return this->enableAuthToken_ == nullptr && return this->extraInfo_ == nullptr && return this->folderUrl_ == nullptr
        && return this->grafanaInstanceId_ == nullptr && return this->grafanaInstanceName_ == nullptr && return this->httpApiInterUrl_ == nullptr && return this->httpApiIntraUrl_ == nullptr && return this->instanceType_ == nullptr
        && return this->paymentType_ == nullptr && return this->paymentTypeUpdateTime_ == nullptr && return this->product_ == nullptr && return this->prometheusInstanceId_ == nullptr && return this->prometheusInstanceName_ == nullptr
        && return this->pushGatewayInterUrl_ == nullptr && return this->pushGatewayIntraUrl_ == nullptr && return this->regionId_ == nullptr && return this->remoteReadInterUrl_ == nullptr && return this->remoteReadIntraUrl_ == nullptr
        && return this->remoteWriteInterUrl_ == nullptr && return this->remoteWriteIntraUrl_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceType_ == nullptr && return this->status_ == nullptr
        && return this->storageDuration_ == nullptr && return this->supportAuthTypes_ == nullptr && return this->tags_ == nullptr && return this->userId_ == nullptr && return this->version_ == nullptr
        && return this->workspace_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // archiveDuration Field Functions 
    bool hasArchiveDuration() const { return this->archiveDuration_ != nullptr;};
    void deleteArchiveDuration() { this->archiveDuration_ = nullptr;};
    inline int32_t archiveDuration() const { DARABONBA_PTR_GET_DEFAULT(archiveDuration_, 0) };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setArchiveDuration(int32_t archiveDuration) { DARABONBA_PTR_SET_VALUE(archiveDuration_, archiveDuration) };


    // authFreeReadPolicy Field Functions 
    bool hasAuthFreeReadPolicy() const { return this->authFreeReadPolicy_ != nullptr;};
    void deleteAuthFreeReadPolicy() { this->authFreeReadPolicy_ = nullptr;};
    inline string authFreeReadPolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeReadPolicy_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setAuthFreeReadPolicy(string authFreeReadPolicy) { DARABONBA_PTR_SET_VALUE(authFreeReadPolicy_, authFreeReadPolicy) };


    // authFreeWritePolicy Field Functions 
    bool hasAuthFreeWritePolicy() const { return this->authFreeWritePolicy_ != nullptr;};
    void deleteAuthFreeWritePolicy() { this->authFreeWritePolicy_ = nullptr;};
    inline string authFreeWritePolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeWritePolicy_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setAuthFreeWritePolicy(string authFreeWritePolicy) { DARABONBA_PTR_SET_VALUE(authFreeWritePolicy_, authFreeWritePolicy) };


    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string authToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // enableAuthFreeRead Field Functions 
    bool hasEnableAuthFreeRead() const { return this->enableAuthFreeRead_ != nullptr;};
    void deleteEnableAuthFreeRead() { this->enableAuthFreeRead_ = nullptr;};
    inline bool enableAuthFreeRead() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeRead_, false) };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setEnableAuthFreeRead(bool enableAuthFreeRead) { DARABONBA_PTR_SET_VALUE(enableAuthFreeRead_, enableAuthFreeRead) };


    // enableAuthFreeWrite Field Functions 
    bool hasEnableAuthFreeWrite() const { return this->enableAuthFreeWrite_ != nullptr;};
    void deleteEnableAuthFreeWrite() { this->enableAuthFreeWrite_ = nullptr;};
    inline bool enableAuthFreeWrite() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeWrite_, false) };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setEnableAuthFreeWrite(bool enableAuthFreeWrite) { DARABONBA_PTR_SET_VALUE(enableAuthFreeWrite_, enableAuthFreeWrite) };


    // enableAuthToken Field Functions 
    bool hasEnableAuthToken() const { return this->enableAuthToken_ != nullptr;};
    void deleteEnableAuthToken() { this->enableAuthToken_ = nullptr;};
    inline bool enableAuthToken() const { DARABONBA_PTR_GET_DEFAULT(enableAuthToken_, false) };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setEnableAuthToken(bool enableAuthToken) { DARABONBA_PTR_SET_VALUE(enableAuthToken_, enableAuthToken) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline const map<string, string> & extraInfo() const { DARABONBA_PTR_GET_CONST(extraInfo_, map<string, string>) };
    inline map<string, string> extraInfo() { DARABONBA_PTR_GET(extraInfo_, map<string, string>) };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setExtraInfo(const map<string, string> & extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setExtraInfo(map<string, string> && extraInfo) { DARABONBA_PTR_SET_RVALUE(extraInfo_, extraInfo) };


    // folderUrl Field Functions 
    bool hasFolderUrl() const { return this->folderUrl_ != nullptr;};
    void deleteFolderUrl() { this->folderUrl_ = nullptr;};
    inline string folderUrl() const { DARABONBA_PTR_GET_DEFAULT(folderUrl_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setFolderUrl(string folderUrl) { DARABONBA_PTR_SET_VALUE(folderUrl_, folderUrl) };


    // grafanaInstanceId Field Functions 
    bool hasGrafanaInstanceId() const { return this->grafanaInstanceId_ != nullptr;};
    void deleteGrafanaInstanceId() { this->grafanaInstanceId_ = nullptr;};
    inline string grafanaInstanceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaInstanceId_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setGrafanaInstanceId(string grafanaInstanceId) { DARABONBA_PTR_SET_VALUE(grafanaInstanceId_, grafanaInstanceId) };


    // grafanaInstanceName Field Functions 
    bool hasGrafanaInstanceName() const { return this->grafanaInstanceName_ != nullptr;};
    void deleteGrafanaInstanceName() { this->grafanaInstanceName_ = nullptr;};
    inline string grafanaInstanceName() const { DARABONBA_PTR_GET_DEFAULT(grafanaInstanceName_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setGrafanaInstanceName(string grafanaInstanceName) { DARABONBA_PTR_SET_VALUE(grafanaInstanceName_, grafanaInstanceName) };


    // httpApiInterUrl Field Functions 
    bool hasHttpApiInterUrl() const { return this->httpApiInterUrl_ != nullptr;};
    void deleteHttpApiInterUrl() { this->httpApiInterUrl_ = nullptr;};
    inline string httpApiInterUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiInterUrl_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setHttpApiInterUrl(string httpApiInterUrl) { DARABONBA_PTR_SET_VALUE(httpApiInterUrl_, httpApiInterUrl) };


    // httpApiIntraUrl Field Functions 
    bool hasHttpApiIntraUrl() const { return this->httpApiIntraUrl_ != nullptr;};
    void deleteHttpApiIntraUrl() { this->httpApiIntraUrl_ = nullptr;};
    inline string httpApiIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiIntraUrl_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setHttpApiIntraUrl(string httpApiIntraUrl) { DARABONBA_PTR_SET_VALUE(httpApiIntraUrl_, httpApiIntraUrl) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // paymentTypeUpdateTime Field Functions 
    bool hasPaymentTypeUpdateTime() const { return this->paymentTypeUpdateTime_ != nullptr;};
    void deletePaymentTypeUpdateTime() { this->paymentTypeUpdateTime_ = nullptr;};
    inline string paymentTypeUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(paymentTypeUpdateTime_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setPaymentTypeUpdateTime(string paymentTypeUpdateTime) { DARABONBA_PTR_SET_VALUE(paymentTypeUpdateTime_, paymentTypeUpdateTime) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // prometheusInstanceId Field Functions 
    bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
    void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
    inline string prometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


    // prometheusInstanceName Field Functions 
    bool hasPrometheusInstanceName() const { return this->prometheusInstanceName_ != nullptr;};
    void deletePrometheusInstanceName() { this->prometheusInstanceName_ = nullptr;};
    inline string prometheusInstanceName() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceName_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setPrometheusInstanceName(string prometheusInstanceName) { DARABONBA_PTR_SET_VALUE(prometheusInstanceName_, prometheusInstanceName) };


    // pushGatewayInterUrl Field Functions 
    bool hasPushGatewayInterUrl() const { return this->pushGatewayInterUrl_ != nullptr;};
    void deletePushGatewayInterUrl() { this->pushGatewayInterUrl_ = nullptr;};
    inline string pushGatewayInterUrl() const { DARABONBA_PTR_GET_DEFAULT(pushGatewayInterUrl_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setPushGatewayInterUrl(string pushGatewayInterUrl) { DARABONBA_PTR_SET_VALUE(pushGatewayInterUrl_, pushGatewayInterUrl) };


    // pushGatewayIntraUrl Field Functions 
    bool hasPushGatewayIntraUrl() const { return this->pushGatewayIntraUrl_ != nullptr;};
    void deletePushGatewayIntraUrl() { this->pushGatewayIntraUrl_ = nullptr;};
    inline string pushGatewayIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(pushGatewayIntraUrl_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setPushGatewayIntraUrl(string pushGatewayIntraUrl) { DARABONBA_PTR_SET_VALUE(pushGatewayIntraUrl_, pushGatewayIntraUrl) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remoteReadInterUrl Field Functions 
    bool hasRemoteReadInterUrl() const { return this->remoteReadInterUrl_ != nullptr;};
    void deleteRemoteReadInterUrl() { this->remoteReadInterUrl_ = nullptr;};
    inline string remoteReadInterUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteReadInterUrl_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setRemoteReadInterUrl(string remoteReadInterUrl) { DARABONBA_PTR_SET_VALUE(remoteReadInterUrl_, remoteReadInterUrl) };


    // remoteReadIntraUrl Field Functions 
    bool hasRemoteReadIntraUrl() const { return this->remoteReadIntraUrl_ != nullptr;};
    void deleteRemoteReadIntraUrl() { this->remoteReadIntraUrl_ = nullptr;};
    inline string remoteReadIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteReadIntraUrl_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setRemoteReadIntraUrl(string remoteReadIntraUrl) { DARABONBA_PTR_SET_VALUE(remoteReadIntraUrl_, remoteReadIntraUrl) };


    // remoteWriteInterUrl Field Functions 
    bool hasRemoteWriteInterUrl() const { return this->remoteWriteInterUrl_ != nullptr;};
    void deleteRemoteWriteInterUrl() { this->remoteWriteInterUrl_ = nullptr;};
    inline string remoteWriteInterUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteWriteInterUrl_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setRemoteWriteInterUrl(string remoteWriteInterUrl) { DARABONBA_PTR_SET_VALUE(remoteWriteInterUrl_, remoteWriteInterUrl) };


    // remoteWriteIntraUrl Field Functions 
    bool hasRemoteWriteIntraUrl() const { return this->remoteWriteIntraUrl_ != nullptr;};
    void deleteRemoteWriteIntraUrl() { this->remoteWriteIntraUrl_ = nullptr;};
    inline string remoteWriteIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteWriteIntraUrl_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setRemoteWriteIntraUrl(string remoteWriteIntraUrl) { DARABONBA_PTR_SET_VALUE(remoteWriteIntraUrl_, remoteWriteIntraUrl) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageDuration Field Functions 
    bool hasStorageDuration() const { return this->storageDuration_ != nullptr;};
    void deleteStorageDuration() { this->storageDuration_ = nullptr;};
    inline int32_t storageDuration() const { DARABONBA_PTR_GET_DEFAULT(storageDuration_, 0) };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setStorageDuration(int32_t storageDuration) { DARABONBA_PTR_SET_VALUE(storageDuration_, storageDuration) };


    // supportAuthTypes Field Functions 
    bool hasSupportAuthTypes() const { return this->supportAuthTypes_ != nullptr;};
    void deleteSupportAuthTypes() { this->supportAuthTypes_ = nullptr;};
    inline const vector<string> & supportAuthTypes() const { DARABONBA_PTR_GET_CONST(supportAuthTypes_, vector<string>) };
    inline vector<string> supportAuthTypes() { DARABONBA_PTR_GET(supportAuthTypes_, vector<string>) };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setSupportAuthTypes(const vector<string> & supportAuthTypes) { DARABONBA_PTR_SET_VALUE(supportAuthTypes_, supportAuthTypes) };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setSupportAuthTypes(vector<string> && supportAuthTypes) { DARABONBA_PTR_SET_RVALUE(supportAuthTypes_, supportAuthTypes) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetPrometheusInstanceResponseBodyPrometheusInstanceTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetPrometheusInstanceResponseBodyPrometheusInstanceTags>) };
    inline vector<Models::GetPrometheusInstanceResponseBodyPrometheusInstanceTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetPrometheusInstanceResponseBodyPrometheusInstanceTags>) };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setTags(const vector<Models::GetPrometheusInstanceResponseBodyPrometheusInstanceTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setTags(vector<Models::GetPrometheusInstanceResponseBodyPrometheusInstanceTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline GetPrometheusInstanceResponseBodyPrometheusInstance& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // Access type:
    // readWrite, readOnly, httpReadOnly
    std::shared_ptr<string> accessType_ = nullptr;
    // Number of days to automatically archive and save after storage expiration. 0 means no archiving, 3650 means permanent saving.
    std::shared_ptr<int32_t> archiveDuration_ = nullptr;
    // Password-free read policy (supports IP segments and VpcId).
    std::shared_ptr<string> authFreeReadPolicy_ = nullptr;
    // Password-free write policy (supports IP segments and VpcId).
    std::shared_ptr<string> authFreeWritePolicy_ = nullptr;
    // authToken string.
    std::shared_ptr<string> authToken_ = nullptr;
    // Instance creation time, using UTC+0, formatted as yyyy-MM-ddTHH:mmZ.
    std::shared_ptr<string> createTime_ = nullptr;
    // Whether to enable password-free reading.
    std::shared_ptr<bool> enableAuthFreeRead_ = nullptr;
    // Whether to enable password-free writing.
    std::shared_ptr<bool> enableAuthFreeWrite_ = nullptr;
    // Whether to enable authentication token.
    std::shared_ptr<bool> enableAuthToken_ = nullptr;
    // Additional information.
    std::shared_ptr<map<string, string>> extraInfo_ = nullptr;
    // URL of the visualization dashboard directory.
    std::shared_ptr<string> folderUrl_ = nullptr;
    // ID of the managed Grafana instance that is bound.
    std::shared_ptr<string> grafanaInstanceId_ = nullptr;
    // Name of the managed Grafana instance that is bound.
    std::shared_ptr<string> grafanaInstanceName_ = nullptr;
    // HTTP public network address.
    std::shared_ptr<string> httpApiInterUrl_ = nullptr;
    // HTTP intranet address.
    std::shared_ptr<string> httpApiIntraUrl_ = nullptr;
    // Prometheus instance type.
    std::shared_ptr<string> instanceType_ = nullptr;
    // Billing method:
    // POSTPAY: Pay-as-you-go based on metric reporting volume.
    // POSTPAY_GB: Pay-as-you-go based on metric write volume.
    std::shared_ptr<string> paymentType_ = nullptr;
    // Time when the billing method of the instance was updated.
    std::shared_ptr<string> paymentTypeUpdateTime_ = nullptr;
    // The product to which the Prometheus instance belongs (arms or cms).
    std::shared_ptr<string> product_ = nullptr;
    // Instance ID.
    std::shared_ptr<string> prometheusInstanceId_ = nullptr;
    // Instance name.
    std::shared_ptr<string> prometheusInstanceName_ = nullptr;
    // Public network address of PushGateway.
    std::shared_ptr<string> pushGatewayInterUrl_ = nullptr;
    // Intranet address of PushGateway.
    std::shared_ptr<string> pushGatewayIntraUrl_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Public network read address.
    std::shared_ptr<string> remoteReadInterUrl_ = nullptr;
    // Intranet read address.
    std::shared_ptr<string> remoteReadIntraUrl_ = nullptr;
    // Public network write address.
    std::shared_ptr<string> remoteWriteInterUrl_ = nullptr;
    // Intranet write address.
    std::shared_ptr<string> remoteWriteIntraUrl_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Fixed value: PrometheusInstance.
    std::shared_ptr<string> resourceType_ = nullptr;
    // Instance status.
    std::shared_ptr<string> status_ = nullptr;
    // Storage duration (in days).
    std::shared_ptr<int32_t> storageDuration_ = nullptr;
    // Supported authentication types.
    std::shared_ptr<vector<string>> supportAuthTypes_ = nullptr;
    // List of tags.
    std::shared_ptr<vector<Models::GetPrometheusInstanceResponseBodyPrometheusInstanceTags>> tags_ = nullptr;
    // User ID.
    std::shared_ptr<string> userId_ = nullptr;
    // Version.
    std::shared_ptr<string> version_ = nullptr;
    // The workspace to which the Prometheus instance belongs.
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

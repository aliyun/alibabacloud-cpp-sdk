// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROMETHEUSVIEWRESPONSEBODYPROMETHEUSVIEW_HPP_
#define ALIBABACLOUD_MODELS_GETPROMETHEUSVIEWRESPONSEBODYPROMETHEUSVIEW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPrometheusViewResponseBodyPrometheusViewPrometheusInstances.hpp>
#include <alibabacloud/models/GetPrometheusViewResponseBodyPrometheusViewTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetPrometheusViewResponseBodyPrometheusView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrometheusViewResponseBodyPrometheusView& obj) { 
      DARABONBA_PTR_TO_JSON(authFreeReadPolicy, authFreeReadPolicy_);
      DARABONBA_PTR_TO_JSON(authToken, authToken_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(enableAuthFreeRead, enableAuthFreeRead_);
      DARABONBA_PTR_TO_JSON(enableAuthToken, enableAuthToken_);
      DARABONBA_PTR_TO_JSON(folderUrl, folderUrl_);
      DARABONBA_PTR_TO_JSON(grafanaInstanceId, grafanaInstanceId_);
      DARABONBA_PTR_TO_JSON(grafanaInstanceName, grafanaInstanceName_);
      DARABONBA_PTR_TO_JSON(httpApiInterUrl, httpApiInterUrl_);
      DARABONBA_PTR_TO_JSON(httpApiIntraUrl, httpApiIntraUrl_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_PTR_TO_JSON(prometheusInstances, prometheusInstances_);
      DARABONBA_PTR_TO_JSON(prometheusViewId, prometheusViewId_);
      DARABONBA_PTR_TO_JSON(prometheusViewName, prometheusViewName_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(remoteReadInterUrl, remoteReadInterUrl_);
      DARABONBA_PTR_TO_JSON(remoteReadIntraUrl, remoteReadIntraUrl_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(supportAuthTypes, supportAuthTypes_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrometheusViewResponseBodyPrometheusView& obj) { 
      DARABONBA_PTR_FROM_JSON(authFreeReadPolicy, authFreeReadPolicy_);
      DARABONBA_PTR_FROM_JSON(authToken, authToken_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(enableAuthFreeRead, enableAuthFreeRead_);
      DARABONBA_PTR_FROM_JSON(enableAuthToken, enableAuthToken_);
      DARABONBA_PTR_FROM_JSON(folderUrl, folderUrl_);
      DARABONBA_PTR_FROM_JSON(grafanaInstanceId, grafanaInstanceId_);
      DARABONBA_PTR_FROM_JSON(grafanaInstanceName, grafanaInstanceName_);
      DARABONBA_PTR_FROM_JSON(httpApiInterUrl, httpApiInterUrl_);
      DARABONBA_PTR_FROM_JSON(httpApiIntraUrl, httpApiIntraUrl_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(product, product_);
      DARABONBA_PTR_FROM_JSON(prometheusInstances, prometheusInstances_);
      DARABONBA_PTR_FROM_JSON(prometheusViewId, prometheusViewId_);
      DARABONBA_PTR_FROM_JSON(prometheusViewName, prometheusViewName_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(remoteReadInterUrl, remoteReadInterUrl_);
      DARABONBA_PTR_FROM_JSON(remoteReadIntraUrl, remoteReadIntraUrl_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(supportAuthTypes, supportAuthTypes_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    GetPrometheusViewResponseBodyPrometheusView() = default ;
    GetPrometheusViewResponseBodyPrometheusView(const GetPrometheusViewResponseBodyPrometheusView &) = default ;
    GetPrometheusViewResponseBodyPrometheusView(GetPrometheusViewResponseBodyPrometheusView &&) = default ;
    GetPrometheusViewResponseBodyPrometheusView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrometheusViewResponseBodyPrometheusView() = default ;
    GetPrometheusViewResponseBodyPrometheusView& operator=(const GetPrometheusViewResponseBodyPrometheusView &) = default ;
    GetPrometheusViewResponseBodyPrometheusView& operator=(GetPrometheusViewResponseBodyPrometheusView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authFreeReadPolicy_ == nullptr
        && return this->authToken_ == nullptr && return this->createTime_ == nullptr && return this->enableAuthFreeRead_ == nullptr && return this->enableAuthToken_ == nullptr && return this->folderUrl_ == nullptr
        && return this->grafanaInstanceId_ == nullptr && return this->grafanaInstanceName_ == nullptr && return this->httpApiInterUrl_ == nullptr && return this->httpApiIntraUrl_ == nullptr && return this->instanceType_ == nullptr
        && return this->paymentType_ == nullptr && return this->product_ == nullptr && return this->prometheusInstances_ == nullptr && return this->prometheusViewId_ == nullptr && return this->prometheusViewName_ == nullptr
        && return this->regionId_ == nullptr && return this->remoteReadInterUrl_ == nullptr && return this->remoteReadIntraUrl_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceType_ == nullptr
        && return this->status_ == nullptr && return this->supportAuthTypes_ == nullptr && return this->tags_ == nullptr && return this->userId_ == nullptr && return this->version_ == nullptr
        && return this->workspace_ == nullptr; };
    // authFreeReadPolicy Field Functions 
    bool hasAuthFreeReadPolicy() const { return this->authFreeReadPolicy_ != nullptr;};
    void deleteAuthFreeReadPolicy() { this->authFreeReadPolicy_ = nullptr;};
    inline string authFreeReadPolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeReadPolicy_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setAuthFreeReadPolicy(string authFreeReadPolicy) { DARABONBA_PTR_SET_VALUE(authFreeReadPolicy_, authFreeReadPolicy) };


    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string authToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // enableAuthFreeRead Field Functions 
    bool hasEnableAuthFreeRead() const { return this->enableAuthFreeRead_ != nullptr;};
    void deleteEnableAuthFreeRead() { this->enableAuthFreeRead_ = nullptr;};
    inline bool enableAuthFreeRead() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeRead_, false) };
    inline GetPrometheusViewResponseBodyPrometheusView& setEnableAuthFreeRead(bool enableAuthFreeRead) { DARABONBA_PTR_SET_VALUE(enableAuthFreeRead_, enableAuthFreeRead) };


    // enableAuthToken Field Functions 
    bool hasEnableAuthToken() const { return this->enableAuthToken_ != nullptr;};
    void deleteEnableAuthToken() { this->enableAuthToken_ = nullptr;};
    inline bool enableAuthToken() const { DARABONBA_PTR_GET_DEFAULT(enableAuthToken_, false) };
    inline GetPrometheusViewResponseBodyPrometheusView& setEnableAuthToken(bool enableAuthToken) { DARABONBA_PTR_SET_VALUE(enableAuthToken_, enableAuthToken) };


    // folderUrl Field Functions 
    bool hasFolderUrl() const { return this->folderUrl_ != nullptr;};
    void deleteFolderUrl() { this->folderUrl_ = nullptr;};
    inline string folderUrl() const { DARABONBA_PTR_GET_DEFAULT(folderUrl_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setFolderUrl(string folderUrl) { DARABONBA_PTR_SET_VALUE(folderUrl_, folderUrl) };


    // grafanaInstanceId Field Functions 
    bool hasGrafanaInstanceId() const { return this->grafanaInstanceId_ != nullptr;};
    void deleteGrafanaInstanceId() { this->grafanaInstanceId_ = nullptr;};
    inline string grafanaInstanceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaInstanceId_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setGrafanaInstanceId(string grafanaInstanceId) { DARABONBA_PTR_SET_VALUE(grafanaInstanceId_, grafanaInstanceId) };


    // grafanaInstanceName Field Functions 
    bool hasGrafanaInstanceName() const { return this->grafanaInstanceName_ != nullptr;};
    void deleteGrafanaInstanceName() { this->grafanaInstanceName_ = nullptr;};
    inline string grafanaInstanceName() const { DARABONBA_PTR_GET_DEFAULT(grafanaInstanceName_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setGrafanaInstanceName(string grafanaInstanceName) { DARABONBA_PTR_SET_VALUE(grafanaInstanceName_, grafanaInstanceName) };


    // httpApiInterUrl Field Functions 
    bool hasHttpApiInterUrl() const { return this->httpApiInterUrl_ != nullptr;};
    void deleteHttpApiInterUrl() { this->httpApiInterUrl_ = nullptr;};
    inline string httpApiInterUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiInterUrl_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setHttpApiInterUrl(string httpApiInterUrl) { DARABONBA_PTR_SET_VALUE(httpApiInterUrl_, httpApiInterUrl) };


    // httpApiIntraUrl Field Functions 
    bool hasHttpApiIntraUrl() const { return this->httpApiIntraUrl_ != nullptr;};
    void deleteHttpApiIntraUrl() { this->httpApiIntraUrl_ = nullptr;};
    inline string httpApiIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiIntraUrl_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setHttpApiIntraUrl(string httpApiIntraUrl) { DARABONBA_PTR_SET_VALUE(httpApiIntraUrl_, httpApiIntraUrl) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // prometheusInstances Field Functions 
    bool hasPrometheusInstances() const { return this->prometheusInstances_ != nullptr;};
    void deletePrometheusInstances() { this->prometheusInstances_ = nullptr;};
    inline const vector<Models::GetPrometheusViewResponseBodyPrometheusViewPrometheusInstances> & prometheusInstances() const { DARABONBA_PTR_GET_CONST(prometheusInstances_, vector<Models::GetPrometheusViewResponseBodyPrometheusViewPrometheusInstances>) };
    inline vector<Models::GetPrometheusViewResponseBodyPrometheusViewPrometheusInstances> prometheusInstances() { DARABONBA_PTR_GET(prometheusInstances_, vector<Models::GetPrometheusViewResponseBodyPrometheusViewPrometheusInstances>) };
    inline GetPrometheusViewResponseBodyPrometheusView& setPrometheusInstances(const vector<Models::GetPrometheusViewResponseBodyPrometheusViewPrometheusInstances> & prometheusInstances) { DARABONBA_PTR_SET_VALUE(prometheusInstances_, prometheusInstances) };
    inline GetPrometheusViewResponseBodyPrometheusView& setPrometheusInstances(vector<Models::GetPrometheusViewResponseBodyPrometheusViewPrometheusInstances> && prometheusInstances) { DARABONBA_PTR_SET_RVALUE(prometheusInstances_, prometheusInstances) };


    // prometheusViewId Field Functions 
    bool hasPrometheusViewId() const { return this->prometheusViewId_ != nullptr;};
    void deletePrometheusViewId() { this->prometheusViewId_ = nullptr;};
    inline string prometheusViewId() const { DARABONBA_PTR_GET_DEFAULT(prometheusViewId_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setPrometheusViewId(string prometheusViewId) { DARABONBA_PTR_SET_VALUE(prometheusViewId_, prometheusViewId) };


    // prometheusViewName Field Functions 
    bool hasPrometheusViewName() const { return this->prometheusViewName_ != nullptr;};
    void deletePrometheusViewName() { this->prometheusViewName_ = nullptr;};
    inline string prometheusViewName() const { DARABONBA_PTR_GET_DEFAULT(prometheusViewName_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setPrometheusViewName(string prometheusViewName) { DARABONBA_PTR_SET_VALUE(prometheusViewName_, prometheusViewName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remoteReadInterUrl Field Functions 
    bool hasRemoteReadInterUrl() const { return this->remoteReadInterUrl_ != nullptr;};
    void deleteRemoteReadInterUrl() { this->remoteReadInterUrl_ = nullptr;};
    inline string remoteReadInterUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteReadInterUrl_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setRemoteReadInterUrl(string remoteReadInterUrl) { DARABONBA_PTR_SET_VALUE(remoteReadInterUrl_, remoteReadInterUrl) };


    // remoteReadIntraUrl Field Functions 
    bool hasRemoteReadIntraUrl() const { return this->remoteReadIntraUrl_ != nullptr;};
    void deleteRemoteReadIntraUrl() { this->remoteReadIntraUrl_ = nullptr;};
    inline string remoteReadIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteReadIntraUrl_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setRemoteReadIntraUrl(string remoteReadIntraUrl) { DARABONBA_PTR_SET_VALUE(remoteReadIntraUrl_, remoteReadIntraUrl) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportAuthTypes Field Functions 
    bool hasSupportAuthTypes() const { return this->supportAuthTypes_ != nullptr;};
    void deleteSupportAuthTypes() { this->supportAuthTypes_ = nullptr;};
    inline const vector<string> & supportAuthTypes() const { DARABONBA_PTR_GET_CONST(supportAuthTypes_, vector<string>) };
    inline vector<string> supportAuthTypes() { DARABONBA_PTR_GET(supportAuthTypes_, vector<string>) };
    inline GetPrometheusViewResponseBodyPrometheusView& setSupportAuthTypes(const vector<string> & supportAuthTypes) { DARABONBA_PTR_SET_VALUE(supportAuthTypes_, supportAuthTypes) };
    inline GetPrometheusViewResponseBodyPrometheusView& setSupportAuthTypes(vector<string> && supportAuthTypes) { DARABONBA_PTR_SET_RVALUE(supportAuthTypes_, supportAuthTypes) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetPrometheusViewResponseBodyPrometheusViewTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetPrometheusViewResponseBodyPrometheusViewTags>) };
    inline vector<Models::GetPrometheusViewResponseBodyPrometheusViewTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetPrometheusViewResponseBodyPrometheusViewTags>) };
    inline GetPrometheusViewResponseBodyPrometheusView& setTags(const vector<Models::GetPrometheusViewResponseBodyPrometheusViewTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetPrometheusViewResponseBodyPrometheusView& setTags(vector<Models::GetPrometheusViewResponseBodyPrometheusViewTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline GetPrometheusViewResponseBodyPrometheusView& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> authFreeReadPolicy_ = nullptr;
    std::shared_ptr<string> authToken_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<bool> enableAuthFreeRead_ = nullptr;
    std::shared_ptr<bool> enableAuthToken_ = nullptr;
    std::shared_ptr<string> folderUrl_ = nullptr;
    std::shared_ptr<string> grafanaInstanceId_ = nullptr;
    std::shared_ptr<string> grafanaInstanceName_ = nullptr;
    std::shared_ptr<string> httpApiInterUrl_ = nullptr;
    std::shared_ptr<string> httpApiIntraUrl_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<vector<Models::GetPrometheusViewResponseBodyPrometheusViewPrometheusInstances>> prometheusInstances_ = nullptr;
    std::shared_ptr<string> prometheusViewId_ = nullptr;
    std::shared_ptr<string> prometheusViewName_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> remoteReadInterUrl_ = nullptr;
    std::shared_ptr<string> remoteReadIntraUrl_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<string>> supportAuthTypes_ = nullptr;
    std::shared_ptr<vector<Models::GetPrometheusViewResponseBodyPrometheusViewTags>> tags_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

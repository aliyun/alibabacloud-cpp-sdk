// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROMETHEUSVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROMETHEUSVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetPrometheusViewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrometheusViewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(prometheusView, prometheusView_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrometheusViewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(prometheusView, prometheusView_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetPrometheusViewResponseBody() = default ;
    GetPrometheusViewResponseBody(const GetPrometheusViewResponseBody &) = default ;
    GetPrometheusViewResponseBody(GetPrometheusViewResponseBody &&) = default ;
    GetPrometheusViewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrometheusViewResponseBody() = default ;
    GetPrometheusViewResponseBody& operator=(const GetPrometheusViewResponseBody &) = default ;
    GetPrometheusViewResponseBody& operator=(GetPrometheusViewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrometheusView : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrometheusView& obj) { 
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
      friend void from_json(const Darabonba::Json& j, PrometheusView& obj) { 
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
      PrometheusView() = default ;
      PrometheusView(const PrometheusView &) = default ;
      PrometheusView(PrometheusView &&) = default ;
      PrometheusView(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrometheusView() = default ;
      PrometheusView& operator=(const PrometheusView &) = default ;
      PrometheusView& operator=(PrometheusView &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // PagerDuty integration key.
        shared_ptr<string> key_ {};
        // Tag value.
        shared_ptr<string> value_ {};
      };

      class PrometheusInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrometheusInstances& obj) { 
          DARABONBA_PTR_TO_JSON(prometheusInstanceId, prometheusInstanceId_);
          DARABONBA_PTR_TO_JSON(regionId, regionId_);
          DARABONBA_PTR_TO_JSON(userId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, PrometheusInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(prometheusInstanceId, prometheusInstanceId_);
          DARABONBA_PTR_FROM_JSON(regionId, regionId_);
          DARABONBA_PTR_FROM_JSON(userId, userId_);
        };
        PrometheusInstances() = default ;
        PrometheusInstances(const PrometheusInstances &) = default ;
        PrometheusInstances(PrometheusInstances &&) = default ;
        PrometheusInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrometheusInstances() = default ;
        PrometheusInstances& operator=(const PrometheusInstances &) = default ;
        PrometheusInstances& operator=(PrometheusInstances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->prometheusInstanceId_ == nullptr
        && this->regionId_ == nullptr && this->userId_ == nullptr; };
        // prometheusInstanceId Field Functions 
        bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
        void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
        inline string getPrometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
        inline PrometheusInstances& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline PrometheusInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline PrometheusInstances& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // Instance ID.
        shared_ptr<string> prometheusInstanceId_ {};
        // Region ID
        shared_ptr<string> regionId_ {};
        // User ID.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->authFreeReadPolicy_ == nullptr
        && this->authToken_ == nullptr && this->createTime_ == nullptr && this->enableAuthFreeRead_ == nullptr && this->enableAuthToken_ == nullptr && this->folderUrl_ == nullptr
        && this->grafanaInstanceId_ == nullptr && this->grafanaInstanceName_ == nullptr && this->httpApiInterUrl_ == nullptr && this->httpApiIntraUrl_ == nullptr && this->instanceType_ == nullptr
        && this->paymentType_ == nullptr && this->product_ == nullptr && this->prometheusInstances_ == nullptr && this->prometheusViewId_ == nullptr && this->prometheusViewName_ == nullptr
        && this->regionId_ == nullptr && this->remoteReadInterUrl_ == nullptr && this->remoteReadIntraUrl_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceType_ == nullptr
        && this->status_ == nullptr && this->supportAuthTypes_ == nullptr && this->tags_ == nullptr && this->userId_ == nullptr && this->version_ == nullptr
        && this->workspace_ == nullptr; };
      // authFreeReadPolicy Field Functions 
      bool hasAuthFreeReadPolicy() const { return this->authFreeReadPolicy_ != nullptr;};
      void deleteAuthFreeReadPolicy() { this->authFreeReadPolicy_ = nullptr;};
      inline string getAuthFreeReadPolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeReadPolicy_, "") };
      inline PrometheusView& setAuthFreeReadPolicy(string authFreeReadPolicy) { DARABONBA_PTR_SET_VALUE(authFreeReadPolicy_, authFreeReadPolicy) };


      // authToken Field Functions 
      bool hasAuthToken() const { return this->authToken_ != nullptr;};
      void deleteAuthToken() { this->authToken_ = nullptr;};
      inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
      inline PrometheusView& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline PrometheusView& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // enableAuthFreeRead Field Functions 
      bool hasEnableAuthFreeRead() const { return this->enableAuthFreeRead_ != nullptr;};
      void deleteEnableAuthFreeRead() { this->enableAuthFreeRead_ = nullptr;};
      inline bool getEnableAuthFreeRead() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeRead_, false) };
      inline PrometheusView& setEnableAuthFreeRead(bool enableAuthFreeRead) { DARABONBA_PTR_SET_VALUE(enableAuthFreeRead_, enableAuthFreeRead) };


      // enableAuthToken Field Functions 
      bool hasEnableAuthToken() const { return this->enableAuthToken_ != nullptr;};
      void deleteEnableAuthToken() { this->enableAuthToken_ = nullptr;};
      inline bool getEnableAuthToken() const { DARABONBA_PTR_GET_DEFAULT(enableAuthToken_, false) };
      inline PrometheusView& setEnableAuthToken(bool enableAuthToken) { DARABONBA_PTR_SET_VALUE(enableAuthToken_, enableAuthToken) };


      // folderUrl Field Functions 
      bool hasFolderUrl() const { return this->folderUrl_ != nullptr;};
      void deleteFolderUrl() { this->folderUrl_ = nullptr;};
      inline string getFolderUrl() const { DARABONBA_PTR_GET_DEFAULT(folderUrl_, "") };
      inline PrometheusView& setFolderUrl(string folderUrl) { DARABONBA_PTR_SET_VALUE(folderUrl_, folderUrl) };


      // grafanaInstanceId Field Functions 
      bool hasGrafanaInstanceId() const { return this->grafanaInstanceId_ != nullptr;};
      void deleteGrafanaInstanceId() { this->grafanaInstanceId_ = nullptr;};
      inline string getGrafanaInstanceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaInstanceId_, "") };
      inline PrometheusView& setGrafanaInstanceId(string grafanaInstanceId) { DARABONBA_PTR_SET_VALUE(grafanaInstanceId_, grafanaInstanceId) };


      // grafanaInstanceName Field Functions 
      bool hasGrafanaInstanceName() const { return this->grafanaInstanceName_ != nullptr;};
      void deleteGrafanaInstanceName() { this->grafanaInstanceName_ = nullptr;};
      inline string getGrafanaInstanceName() const { DARABONBA_PTR_GET_DEFAULT(grafanaInstanceName_, "") };
      inline PrometheusView& setGrafanaInstanceName(string grafanaInstanceName) { DARABONBA_PTR_SET_VALUE(grafanaInstanceName_, grafanaInstanceName) };


      // httpApiInterUrl Field Functions 
      bool hasHttpApiInterUrl() const { return this->httpApiInterUrl_ != nullptr;};
      void deleteHttpApiInterUrl() { this->httpApiInterUrl_ = nullptr;};
      inline string getHttpApiInterUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiInterUrl_, "") };
      inline PrometheusView& setHttpApiInterUrl(string httpApiInterUrl) { DARABONBA_PTR_SET_VALUE(httpApiInterUrl_, httpApiInterUrl) };


      // httpApiIntraUrl Field Functions 
      bool hasHttpApiIntraUrl() const { return this->httpApiIntraUrl_ != nullptr;};
      void deleteHttpApiIntraUrl() { this->httpApiIntraUrl_ = nullptr;};
      inline string getHttpApiIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiIntraUrl_, "") };
      inline PrometheusView& setHttpApiIntraUrl(string httpApiIntraUrl) { DARABONBA_PTR_SET_VALUE(httpApiIntraUrl_, httpApiIntraUrl) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline PrometheusView& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // paymentType Field Functions 
      bool hasPaymentType() const { return this->paymentType_ != nullptr;};
      void deletePaymentType() { this->paymentType_ = nullptr;};
      inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
      inline PrometheusView& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline PrometheusView& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // prometheusInstances Field Functions 
      bool hasPrometheusInstances() const { return this->prometheusInstances_ != nullptr;};
      void deletePrometheusInstances() { this->prometheusInstances_ = nullptr;};
      inline const vector<PrometheusView::PrometheusInstances> & getPrometheusInstances() const { DARABONBA_PTR_GET_CONST(prometheusInstances_, vector<PrometheusView::PrometheusInstances>) };
      inline vector<PrometheusView::PrometheusInstances> getPrometheusInstances() { DARABONBA_PTR_GET(prometheusInstances_, vector<PrometheusView::PrometheusInstances>) };
      inline PrometheusView& setPrometheusInstances(const vector<PrometheusView::PrometheusInstances> & prometheusInstances) { DARABONBA_PTR_SET_VALUE(prometheusInstances_, prometheusInstances) };
      inline PrometheusView& setPrometheusInstances(vector<PrometheusView::PrometheusInstances> && prometheusInstances) { DARABONBA_PTR_SET_RVALUE(prometheusInstances_, prometheusInstances) };


      // prometheusViewId Field Functions 
      bool hasPrometheusViewId() const { return this->prometheusViewId_ != nullptr;};
      void deletePrometheusViewId() { this->prometheusViewId_ = nullptr;};
      inline string getPrometheusViewId() const { DARABONBA_PTR_GET_DEFAULT(prometheusViewId_, "") };
      inline PrometheusView& setPrometheusViewId(string prometheusViewId) { DARABONBA_PTR_SET_VALUE(prometheusViewId_, prometheusViewId) };


      // prometheusViewName Field Functions 
      bool hasPrometheusViewName() const { return this->prometheusViewName_ != nullptr;};
      void deletePrometheusViewName() { this->prometheusViewName_ = nullptr;};
      inline string getPrometheusViewName() const { DARABONBA_PTR_GET_DEFAULT(prometheusViewName_, "") };
      inline PrometheusView& setPrometheusViewName(string prometheusViewName) { DARABONBA_PTR_SET_VALUE(prometheusViewName_, prometheusViewName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline PrometheusView& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // remoteReadInterUrl Field Functions 
      bool hasRemoteReadInterUrl() const { return this->remoteReadInterUrl_ != nullptr;};
      void deleteRemoteReadInterUrl() { this->remoteReadInterUrl_ = nullptr;};
      inline string getRemoteReadInterUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteReadInterUrl_, "") };
      inline PrometheusView& setRemoteReadInterUrl(string remoteReadInterUrl) { DARABONBA_PTR_SET_VALUE(remoteReadInterUrl_, remoteReadInterUrl) };


      // remoteReadIntraUrl Field Functions 
      bool hasRemoteReadIntraUrl() const { return this->remoteReadIntraUrl_ != nullptr;};
      void deleteRemoteReadIntraUrl() { this->remoteReadIntraUrl_ = nullptr;};
      inline string getRemoteReadIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteReadIntraUrl_, "") };
      inline PrometheusView& setRemoteReadIntraUrl(string remoteReadIntraUrl) { DARABONBA_PTR_SET_VALUE(remoteReadIntraUrl_, remoteReadIntraUrl) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline PrometheusView& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline PrometheusView& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PrometheusView& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supportAuthTypes Field Functions 
      bool hasSupportAuthTypes() const { return this->supportAuthTypes_ != nullptr;};
      void deleteSupportAuthTypes() { this->supportAuthTypes_ = nullptr;};
      inline const vector<string> & getSupportAuthTypes() const { DARABONBA_PTR_GET_CONST(supportAuthTypes_, vector<string>) };
      inline vector<string> getSupportAuthTypes() { DARABONBA_PTR_GET(supportAuthTypes_, vector<string>) };
      inline PrometheusView& setSupportAuthTypes(const vector<string> & supportAuthTypes) { DARABONBA_PTR_SET_VALUE(supportAuthTypes_, supportAuthTypes) };
      inline PrometheusView& setSupportAuthTypes(vector<string> && supportAuthTypes) { DARABONBA_PTR_SET_RVALUE(supportAuthTypes_, supportAuthTypes) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<PrometheusView::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<PrometheusView::Tags>) };
      inline vector<PrometheusView::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<PrometheusView::Tags>) };
      inline PrometheusView& setTags(const vector<PrometheusView::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline PrometheusView& setTags(vector<PrometheusView::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline PrometheusView& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline PrometheusView& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline PrometheusView& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // Password-free read policy (supports IP segments and VpcId).
      shared_ptr<string> authFreeReadPolicy_ {};
      // authToken string.
      shared_ptr<string> authToken_ {};
      // Instance creation time, using UTC+0 time, format is yyyy-MM-ddTHH:mmZ.
      shared_ptr<string> createTime_ {};
      // Whether to enable password-free read.
      shared_ptr<bool> enableAuthFreeRead_ {};
      // Whether to enable authToken.
      shared_ptr<bool> enableAuthToken_ {};
      // Observability dashboard URL.
      shared_ptr<string> folderUrl_ {};
      // Bound managed Grafana instance ID.
      shared_ptr<string> grafanaInstanceId_ {};
      // Bound managed Grafana instance name.
      shared_ptr<string> grafanaInstanceName_ {};
      // Public HTTP address.
      shared_ptr<string> httpApiInterUrl_ {};
      // Private HTTP address.
      shared_ptr<string> httpApiIntraUrl_ {};
      // Instance type, fixed value prom-view.
      shared_ptr<string> instanceType_ {};
      // Payment type. Currently, the fixed value is FREE (free).
      shared_ptr<string> paymentType_ {};
      // Product that the prom instance belongs to.
      shared_ptr<string> product_ {};
      // Prometheus instance list.
      shared_ptr<vector<PrometheusView::PrometheusInstances>> prometheusInstances_ {};
      // Prometheus view ID.
      shared_ptr<string> prometheusViewId_ {};
      // Prometheus view name.
      shared_ptr<string> prometheusViewName_ {};
      // Region ID
      shared_ptr<string> regionId_ {};
      // Remote read public URL.
      shared_ptr<string> remoteReadInterUrl_ {};
      // Remote read intranet URL.
      shared_ptr<string> remoteReadIntraUrl_ {};
      // Resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // Fixed value: PrometheusView
      shared_ptr<string> resourceType_ {};
      // Backend data storage status
      shared_ptr<string> status_ {};
      // Supported authentication types.
      shared_ptr<vector<string>> supportAuthTypes_ {};
      // Instance tag keys.
      shared_ptr<vector<PrometheusView::Tags>> tags_ {};
      // User ID.
      shared_ptr<string> userId_ {};
      // Version.
      shared_ptr<string> version_ {};
      // Workspace to which the environment belongs
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->prometheusView_ == nullptr
        && this->requestId_ == nullptr; };
    // prometheusView Field Functions 
    bool hasPrometheusView() const { return this->prometheusView_ != nullptr;};
    void deletePrometheusView() { this->prometheusView_ = nullptr;};
    inline const GetPrometheusViewResponseBody::PrometheusView & getPrometheusView() const { DARABONBA_PTR_GET_CONST(prometheusView_, GetPrometheusViewResponseBody::PrometheusView) };
    inline GetPrometheusViewResponseBody::PrometheusView getPrometheusView() { DARABONBA_PTR_GET(prometheusView_, GetPrometheusViewResponseBody::PrometheusView) };
    inline GetPrometheusViewResponseBody& setPrometheusView(const GetPrometheusViewResponseBody::PrometheusView & prometheusView) { DARABONBA_PTR_SET_VALUE(prometheusView_, prometheusView) };
    inline GetPrometheusViewResponseBody& setPrometheusView(GetPrometheusViewResponseBody::PrometheusView && prometheusView) { DARABONBA_PTR_SET_RVALUE(prometheusView_, prometheusView) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPrometheusViewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // View instance.
    shared_ptr<GetPrometheusViewResponseBody::PrometheusView> prometheusView_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROMETHEUSINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROMETHEUSINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetPrometheusInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrometheusInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(prometheusInstance, prometheusInstance_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrometheusInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(prometheusInstance, prometheusInstance_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetPrometheusInstanceResponseBody() = default ;
    GetPrometheusInstanceResponseBody(const GetPrometheusInstanceResponseBody &) = default ;
    GetPrometheusInstanceResponseBody(GetPrometheusInstanceResponseBody &&) = default ;
    GetPrometheusInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrometheusInstanceResponseBody() = default ;
    GetPrometheusInstanceResponseBody& operator=(const GetPrometheusInstanceResponseBody &) = default ;
    GetPrometheusInstanceResponseBody& operator=(GetPrometheusInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrometheusInstance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrometheusInstance& obj) { 
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
      friend void from_json(const Darabonba::Json& j, PrometheusInstance& obj) { 
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
      PrometheusInstance() = default ;
      PrometheusInstance(const PrometheusInstance &) = default ;
      PrometheusInstance(PrometheusInstance &&) = default ;
      PrometheusInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrometheusInstance() = default ;
      PrometheusInstance& operator=(const PrometheusInstance &) = default ;
      PrometheusInstance& operator=(PrometheusInstance &&) = default ;
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
        // Tag key.
        shared_ptr<string> key_ {};
        // Matched value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->accessType_ == nullptr
        && this->archiveDuration_ == nullptr && this->authFreeReadPolicy_ == nullptr && this->authFreeWritePolicy_ == nullptr && this->authToken_ == nullptr && this->createTime_ == nullptr
        && this->enableAuthFreeRead_ == nullptr && this->enableAuthFreeWrite_ == nullptr && this->enableAuthToken_ == nullptr && this->extraInfo_ == nullptr && this->folderUrl_ == nullptr
        && this->grafanaInstanceId_ == nullptr && this->grafanaInstanceName_ == nullptr && this->httpApiInterUrl_ == nullptr && this->httpApiIntraUrl_ == nullptr && this->instanceType_ == nullptr
        && this->paymentType_ == nullptr && this->paymentTypeUpdateTime_ == nullptr && this->product_ == nullptr && this->prometheusInstanceId_ == nullptr && this->prometheusInstanceName_ == nullptr
        && this->pushGatewayInterUrl_ == nullptr && this->pushGatewayIntraUrl_ == nullptr && this->regionId_ == nullptr && this->remoteReadInterUrl_ == nullptr && this->remoteReadIntraUrl_ == nullptr
        && this->remoteWriteInterUrl_ == nullptr && this->remoteWriteIntraUrl_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceType_ == nullptr && this->status_ == nullptr
        && this->storageDuration_ == nullptr && this->supportAuthTypes_ == nullptr && this->tags_ == nullptr && this->userId_ == nullptr && this->version_ == nullptr
        && this->workspace_ == nullptr; };
      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
      inline PrometheusInstance& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // archiveDuration Field Functions 
      bool hasArchiveDuration() const { return this->archiveDuration_ != nullptr;};
      void deleteArchiveDuration() { this->archiveDuration_ = nullptr;};
      inline int32_t getArchiveDuration() const { DARABONBA_PTR_GET_DEFAULT(archiveDuration_, 0) };
      inline PrometheusInstance& setArchiveDuration(int32_t archiveDuration) { DARABONBA_PTR_SET_VALUE(archiveDuration_, archiveDuration) };


      // authFreeReadPolicy Field Functions 
      bool hasAuthFreeReadPolicy() const { return this->authFreeReadPolicy_ != nullptr;};
      void deleteAuthFreeReadPolicy() { this->authFreeReadPolicy_ = nullptr;};
      inline string getAuthFreeReadPolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeReadPolicy_, "") };
      inline PrometheusInstance& setAuthFreeReadPolicy(string authFreeReadPolicy) { DARABONBA_PTR_SET_VALUE(authFreeReadPolicy_, authFreeReadPolicy) };


      // authFreeWritePolicy Field Functions 
      bool hasAuthFreeWritePolicy() const { return this->authFreeWritePolicy_ != nullptr;};
      void deleteAuthFreeWritePolicy() { this->authFreeWritePolicy_ = nullptr;};
      inline string getAuthFreeWritePolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeWritePolicy_, "") };
      inline PrometheusInstance& setAuthFreeWritePolicy(string authFreeWritePolicy) { DARABONBA_PTR_SET_VALUE(authFreeWritePolicy_, authFreeWritePolicy) };


      // authToken Field Functions 
      bool hasAuthToken() const { return this->authToken_ != nullptr;};
      void deleteAuthToken() { this->authToken_ = nullptr;};
      inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
      inline PrometheusInstance& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline PrometheusInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // enableAuthFreeRead Field Functions 
      bool hasEnableAuthFreeRead() const { return this->enableAuthFreeRead_ != nullptr;};
      void deleteEnableAuthFreeRead() { this->enableAuthFreeRead_ = nullptr;};
      inline bool getEnableAuthFreeRead() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeRead_, false) };
      inline PrometheusInstance& setEnableAuthFreeRead(bool enableAuthFreeRead) { DARABONBA_PTR_SET_VALUE(enableAuthFreeRead_, enableAuthFreeRead) };


      // enableAuthFreeWrite Field Functions 
      bool hasEnableAuthFreeWrite() const { return this->enableAuthFreeWrite_ != nullptr;};
      void deleteEnableAuthFreeWrite() { this->enableAuthFreeWrite_ = nullptr;};
      inline bool getEnableAuthFreeWrite() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeWrite_, false) };
      inline PrometheusInstance& setEnableAuthFreeWrite(bool enableAuthFreeWrite) { DARABONBA_PTR_SET_VALUE(enableAuthFreeWrite_, enableAuthFreeWrite) };


      // enableAuthToken Field Functions 
      bool hasEnableAuthToken() const { return this->enableAuthToken_ != nullptr;};
      void deleteEnableAuthToken() { this->enableAuthToken_ = nullptr;};
      inline bool getEnableAuthToken() const { DARABONBA_PTR_GET_DEFAULT(enableAuthToken_, false) };
      inline PrometheusInstance& setEnableAuthToken(bool enableAuthToken) { DARABONBA_PTR_SET_VALUE(enableAuthToken_, enableAuthToken) };


      // extraInfo Field Functions 
      bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
      void deleteExtraInfo() { this->extraInfo_ = nullptr;};
      inline const map<string, string> & getExtraInfo() const { DARABONBA_PTR_GET_CONST(extraInfo_, map<string, string>) };
      inline map<string, string> getExtraInfo() { DARABONBA_PTR_GET(extraInfo_, map<string, string>) };
      inline PrometheusInstance& setExtraInfo(const map<string, string> & extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };
      inline PrometheusInstance& setExtraInfo(map<string, string> && extraInfo) { DARABONBA_PTR_SET_RVALUE(extraInfo_, extraInfo) };


      // folderUrl Field Functions 
      bool hasFolderUrl() const { return this->folderUrl_ != nullptr;};
      void deleteFolderUrl() { this->folderUrl_ = nullptr;};
      inline string getFolderUrl() const { DARABONBA_PTR_GET_DEFAULT(folderUrl_, "") };
      inline PrometheusInstance& setFolderUrl(string folderUrl) { DARABONBA_PTR_SET_VALUE(folderUrl_, folderUrl) };


      // grafanaInstanceId Field Functions 
      bool hasGrafanaInstanceId() const { return this->grafanaInstanceId_ != nullptr;};
      void deleteGrafanaInstanceId() { this->grafanaInstanceId_ = nullptr;};
      inline string getGrafanaInstanceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaInstanceId_, "") };
      inline PrometheusInstance& setGrafanaInstanceId(string grafanaInstanceId) { DARABONBA_PTR_SET_VALUE(grafanaInstanceId_, grafanaInstanceId) };


      // grafanaInstanceName Field Functions 
      bool hasGrafanaInstanceName() const { return this->grafanaInstanceName_ != nullptr;};
      void deleteGrafanaInstanceName() { this->grafanaInstanceName_ = nullptr;};
      inline string getGrafanaInstanceName() const { DARABONBA_PTR_GET_DEFAULT(grafanaInstanceName_, "") };
      inline PrometheusInstance& setGrafanaInstanceName(string grafanaInstanceName) { DARABONBA_PTR_SET_VALUE(grafanaInstanceName_, grafanaInstanceName) };


      // httpApiInterUrl Field Functions 
      bool hasHttpApiInterUrl() const { return this->httpApiInterUrl_ != nullptr;};
      void deleteHttpApiInterUrl() { this->httpApiInterUrl_ = nullptr;};
      inline string getHttpApiInterUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiInterUrl_, "") };
      inline PrometheusInstance& setHttpApiInterUrl(string httpApiInterUrl) { DARABONBA_PTR_SET_VALUE(httpApiInterUrl_, httpApiInterUrl) };


      // httpApiIntraUrl Field Functions 
      bool hasHttpApiIntraUrl() const { return this->httpApiIntraUrl_ != nullptr;};
      void deleteHttpApiIntraUrl() { this->httpApiIntraUrl_ = nullptr;};
      inline string getHttpApiIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiIntraUrl_, "") };
      inline PrometheusInstance& setHttpApiIntraUrl(string httpApiIntraUrl) { DARABONBA_PTR_SET_VALUE(httpApiIntraUrl_, httpApiIntraUrl) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline PrometheusInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // paymentType Field Functions 
      bool hasPaymentType() const { return this->paymentType_ != nullptr;};
      void deletePaymentType() { this->paymentType_ = nullptr;};
      inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
      inline PrometheusInstance& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


      // paymentTypeUpdateTime Field Functions 
      bool hasPaymentTypeUpdateTime() const { return this->paymentTypeUpdateTime_ != nullptr;};
      void deletePaymentTypeUpdateTime() { this->paymentTypeUpdateTime_ = nullptr;};
      inline string getPaymentTypeUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(paymentTypeUpdateTime_, "") };
      inline PrometheusInstance& setPaymentTypeUpdateTime(string paymentTypeUpdateTime) { DARABONBA_PTR_SET_VALUE(paymentTypeUpdateTime_, paymentTypeUpdateTime) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline PrometheusInstance& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // prometheusInstanceId Field Functions 
      bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
      void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
      inline string getPrometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
      inline PrometheusInstance& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


      // prometheusInstanceName Field Functions 
      bool hasPrometheusInstanceName() const { return this->prometheusInstanceName_ != nullptr;};
      void deletePrometheusInstanceName() { this->prometheusInstanceName_ = nullptr;};
      inline string getPrometheusInstanceName() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceName_, "") };
      inline PrometheusInstance& setPrometheusInstanceName(string prometheusInstanceName) { DARABONBA_PTR_SET_VALUE(prometheusInstanceName_, prometheusInstanceName) };


      // pushGatewayInterUrl Field Functions 
      bool hasPushGatewayInterUrl() const { return this->pushGatewayInterUrl_ != nullptr;};
      void deletePushGatewayInterUrl() { this->pushGatewayInterUrl_ = nullptr;};
      inline string getPushGatewayInterUrl() const { DARABONBA_PTR_GET_DEFAULT(pushGatewayInterUrl_, "") };
      inline PrometheusInstance& setPushGatewayInterUrl(string pushGatewayInterUrl) { DARABONBA_PTR_SET_VALUE(pushGatewayInterUrl_, pushGatewayInterUrl) };


      // pushGatewayIntraUrl Field Functions 
      bool hasPushGatewayIntraUrl() const { return this->pushGatewayIntraUrl_ != nullptr;};
      void deletePushGatewayIntraUrl() { this->pushGatewayIntraUrl_ = nullptr;};
      inline string getPushGatewayIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(pushGatewayIntraUrl_, "") };
      inline PrometheusInstance& setPushGatewayIntraUrl(string pushGatewayIntraUrl) { DARABONBA_PTR_SET_VALUE(pushGatewayIntraUrl_, pushGatewayIntraUrl) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline PrometheusInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // remoteReadInterUrl Field Functions 
      bool hasRemoteReadInterUrl() const { return this->remoteReadInterUrl_ != nullptr;};
      void deleteRemoteReadInterUrl() { this->remoteReadInterUrl_ = nullptr;};
      inline string getRemoteReadInterUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteReadInterUrl_, "") };
      inline PrometheusInstance& setRemoteReadInterUrl(string remoteReadInterUrl) { DARABONBA_PTR_SET_VALUE(remoteReadInterUrl_, remoteReadInterUrl) };


      // remoteReadIntraUrl Field Functions 
      bool hasRemoteReadIntraUrl() const { return this->remoteReadIntraUrl_ != nullptr;};
      void deleteRemoteReadIntraUrl() { this->remoteReadIntraUrl_ = nullptr;};
      inline string getRemoteReadIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteReadIntraUrl_, "") };
      inline PrometheusInstance& setRemoteReadIntraUrl(string remoteReadIntraUrl) { DARABONBA_PTR_SET_VALUE(remoteReadIntraUrl_, remoteReadIntraUrl) };


      // remoteWriteInterUrl Field Functions 
      bool hasRemoteWriteInterUrl() const { return this->remoteWriteInterUrl_ != nullptr;};
      void deleteRemoteWriteInterUrl() { this->remoteWriteInterUrl_ = nullptr;};
      inline string getRemoteWriteInterUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteWriteInterUrl_, "") };
      inline PrometheusInstance& setRemoteWriteInterUrl(string remoteWriteInterUrl) { DARABONBA_PTR_SET_VALUE(remoteWriteInterUrl_, remoteWriteInterUrl) };


      // remoteWriteIntraUrl Field Functions 
      bool hasRemoteWriteIntraUrl() const { return this->remoteWriteIntraUrl_ != nullptr;};
      void deleteRemoteWriteIntraUrl() { this->remoteWriteIntraUrl_ = nullptr;};
      inline string getRemoteWriteIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteWriteIntraUrl_, "") };
      inline PrometheusInstance& setRemoteWriteIntraUrl(string remoteWriteIntraUrl) { DARABONBA_PTR_SET_VALUE(remoteWriteIntraUrl_, remoteWriteIntraUrl) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline PrometheusInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline PrometheusInstance& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PrometheusInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageDuration Field Functions 
      bool hasStorageDuration() const { return this->storageDuration_ != nullptr;};
      void deleteStorageDuration() { this->storageDuration_ = nullptr;};
      inline int32_t getStorageDuration() const { DARABONBA_PTR_GET_DEFAULT(storageDuration_, 0) };
      inline PrometheusInstance& setStorageDuration(int32_t storageDuration) { DARABONBA_PTR_SET_VALUE(storageDuration_, storageDuration) };


      // supportAuthTypes Field Functions 
      bool hasSupportAuthTypes() const { return this->supportAuthTypes_ != nullptr;};
      void deleteSupportAuthTypes() { this->supportAuthTypes_ = nullptr;};
      inline const vector<string> & getSupportAuthTypes() const { DARABONBA_PTR_GET_CONST(supportAuthTypes_, vector<string>) };
      inline vector<string> getSupportAuthTypes() { DARABONBA_PTR_GET(supportAuthTypes_, vector<string>) };
      inline PrometheusInstance& setSupportAuthTypes(const vector<string> & supportAuthTypes) { DARABONBA_PTR_SET_VALUE(supportAuthTypes_, supportAuthTypes) };
      inline PrometheusInstance& setSupportAuthTypes(vector<string> && supportAuthTypes) { DARABONBA_PTR_SET_RVALUE(supportAuthTypes_, supportAuthTypes) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<PrometheusInstance::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<PrometheusInstance::Tags>) };
      inline vector<PrometheusInstance::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<PrometheusInstance::Tags>) };
      inline PrometheusInstance& setTags(const vector<PrometheusInstance::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline PrometheusInstance& setTags(vector<PrometheusInstance::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline PrometheusInstance& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline PrometheusInstance& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline PrometheusInstance& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // Access type:
      // readWrite, readOnly, httpReadOnly
      shared_ptr<string> accessType_ {};
      // Number of days to automatically archive and save after storage expiration. 0 means no archiving, 3650 means permanent saving.
      shared_ptr<int32_t> archiveDuration_ {};
      // Password-free read policy (supports IP segments and VpcId).
      shared_ptr<string> authFreeReadPolicy_ {};
      // Password-free write policy (supports IP segments and VpcId).
      shared_ptr<string> authFreeWritePolicy_ {};
      // authToken string.
      shared_ptr<string> authToken_ {};
      // Instance creation time, using UTC+0, formatted as yyyy-MM-ddTHH:mmZ.
      shared_ptr<string> createTime_ {};
      // Whether to enable password-free reading.
      shared_ptr<bool> enableAuthFreeRead_ {};
      // Whether to enable password-free writing.
      shared_ptr<bool> enableAuthFreeWrite_ {};
      // Whether to enable authentication token.
      shared_ptr<bool> enableAuthToken_ {};
      // Additional information.
      shared_ptr<map<string, string>> extraInfo_ {};
      // URL of the visualization dashboard directory.
      shared_ptr<string> folderUrl_ {};
      // ID of the managed Grafana instance that is bound.
      shared_ptr<string> grafanaInstanceId_ {};
      // Name of the managed Grafana instance that is bound.
      shared_ptr<string> grafanaInstanceName_ {};
      // HTTP public network address.
      shared_ptr<string> httpApiInterUrl_ {};
      // HTTP intranet address.
      shared_ptr<string> httpApiIntraUrl_ {};
      // Prometheus instance type.
      shared_ptr<string> instanceType_ {};
      // Billing method:
      // POSTPAY: Pay-as-you-go based on metric reporting volume.
      // POSTPAY_GB: Pay-as-you-go based on metric write volume.
      shared_ptr<string> paymentType_ {};
      // Time when the billing method of the instance was updated.
      shared_ptr<string> paymentTypeUpdateTime_ {};
      // The product to which the Prometheus instance belongs (arms or cms).
      shared_ptr<string> product_ {};
      // Instance ID.
      shared_ptr<string> prometheusInstanceId_ {};
      // Instance name.
      shared_ptr<string> prometheusInstanceName_ {};
      // Public network address of PushGateway.
      shared_ptr<string> pushGatewayInterUrl_ {};
      // Intranet address of PushGateway.
      shared_ptr<string> pushGatewayIntraUrl_ {};
      // Region ID.
      shared_ptr<string> regionId_ {};
      // Public network read address.
      shared_ptr<string> remoteReadInterUrl_ {};
      // Intranet read address.
      shared_ptr<string> remoteReadIntraUrl_ {};
      // Public network write address.
      shared_ptr<string> remoteWriteInterUrl_ {};
      // Intranet write address.
      shared_ptr<string> remoteWriteIntraUrl_ {};
      // Resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // Fixed value: PrometheusInstance.
      shared_ptr<string> resourceType_ {};
      // Instance status.
      shared_ptr<string> status_ {};
      // Storage duration (in days).
      shared_ptr<int32_t> storageDuration_ {};
      // Supported authentication types.
      shared_ptr<vector<string>> supportAuthTypes_ {};
      // List of tags.
      shared_ptr<vector<PrometheusInstance::Tags>> tags_ {};
      // User ID.
      shared_ptr<string> userId_ {};
      // Version.
      shared_ptr<string> version_ {};
      // The workspace to which the Prometheus instance belongs.
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->prometheusInstance_ == nullptr
        && this->requestId_ == nullptr; };
    // prometheusInstance Field Functions 
    bool hasPrometheusInstance() const { return this->prometheusInstance_ != nullptr;};
    void deletePrometheusInstance() { this->prometheusInstance_ = nullptr;};
    inline const GetPrometheusInstanceResponseBody::PrometheusInstance & getPrometheusInstance() const { DARABONBA_PTR_GET_CONST(prometheusInstance_, GetPrometheusInstanceResponseBody::PrometheusInstance) };
    inline GetPrometheusInstanceResponseBody::PrometheusInstance getPrometheusInstance() { DARABONBA_PTR_GET(prometheusInstance_, GetPrometheusInstanceResponseBody::PrometheusInstance) };
    inline GetPrometheusInstanceResponseBody& setPrometheusInstance(const GetPrometheusInstanceResponseBody::PrometheusInstance & prometheusInstance) { DARABONBA_PTR_SET_VALUE(prometheusInstance_, prometheusInstance) };
    inline GetPrometheusInstanceResponseBody& setPrometheusInstance(GetPrometheusInstanceResponseBody::PrometheusInstance && prometheusInstance) { DARABONBA_PTR_SET_RVALUE(prometheusInstance_, prometheusInstance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPrometheusInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the Prometheus instance.
    shared_ptr<GetPrometheusInstanceResponseBody::PrometheusInstance> prometheusInstance_ {};
    // Unique identifier for the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

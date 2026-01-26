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
namespace ARMS20190808
{
namespace Models
{
  class GetPrometheusInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrometheusInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrometheusInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The tag key.
        shared_ptr<string> tagKey_ {};
        // The tag value.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->accessType_ == nullptr
        && this->archiveDuration_ == nullptr && this->authFreeReadPolicy_ == nullptr && this->authFreeWritePolicy_ == nullptr && this->authToken_ == nullptr && this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->clusterType_ == nullptr && this->dbInstanceStatus_ == nullptr && this->enableAuthFreeRead_ == nullptr && this->enableAuthFreeWrite_ == nullptr
        && this->enableAuthToken_ == nullptr && this->extraInfo_ == nullptr && this->grafanaInstanceId_ == nullptr && this->httpApiInterUrl_ == nullptr && this->httpApiIntraUrl_ == nullptr
        && this->openTelemetryInterUrl_ == nullptr && this->openTelemetryIntraUrl_ == nullptr && this->paymentType_ == nullptr && this->paymentTypeUpdateTime_ == nullptr && this->product_ == nullptr
        && this->pushGatewayInterUrl_ == nullptr && this->pushGatewayIntraUrl_ == nullptr && this->regionId_ == nullptr && this->remoteReadInterUrl_ == nullptr && this->remoteReadIntraUrl_ == nullptr
        && this->remoteWriteInterUrl_ == nullptr && this->remoteWriteIntraUrl_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceType_ == nullptr && this->securityGroupId_ == nullptr
        && this->storageDuration_ == nullptr && this->subClustersJson_ == nullptr && this->supportAuthTypes_ == nullptr && this->tags_ == nullptr && this->userId_ == nullptr
        && this->vSwitchId_ == nullptr && this->version_ == nullptr && this->vpcId_ == nullptr; };
      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
      inline Data& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // archiveDuration Field Functions 
      bool hasArchiveDuration() const { return this->archiveDuration_ != nullptr;};
      void deleteArchiveDuration() { this->archiveDuration_ = nullptr;};
      inline int32_t getArchiveDuration() const { DARABONBA_PTR_GET_DEFAULT(archiveDuration_, 0) };
      inline Data& setArchiveDuration(int32_t archiveDuration) { DARABONBA_PTR_SET_VALUE(archiveDuration_, archiveDuration) };


      // authFreeReadPolicy Field Functions 
      bool hasAuthFreeReadPolicy() const { return this->authFreeReadPolicy_ != nullptr;};
      void deleteAuthFreeReadPolicy() { this->authFreeReadPolicy_ = nullptr;};
      inline string getAuthFreeReadPolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeReadPolicy_, "") };
      inline Data& setAuthFreeReadPolicy(string authFreeReadPolicy) { DARABONBA_PTR_SET_VALUE(authFreeReadPolicy_, authFreeReadPolicy) };


      // authFreeWritePolicy Field Functions 
      bool hasAuthFreeWritePolicy() const { return this->authFreeWritePolicy_ != nullptr;};
      void deleteAuthFreeWritePolicy() { this->authFreeWritePolicy_ = nullptr;};
      inline string getAuthFreeWritePolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeWritePolicy_, "") };
      inline Data& setAuthFreeWritePolicy(string authFreeWritePolicy) { DARABONBA_PTR_SET_VALUE(authFreeWritePolicy_, authFreeWritePolicy) };


      // authToken Field Functions 
      bool hasAuthToken() const { return this->authToken_ != nullptr;};
      void deleteAuthToken() { this->authToken_ = nullptr;};
      inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
      inline Data& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Data& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
      inline Data& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // dbInstanceStatus Field Functions 
      bool hasDbInstanceStatus() const { return this->dbInstanceStatus_ != nullptr;};
      void deleteDbInstanceStatus() { this->dbInstanceStatus_ = nullptr;};
      inline string getDbInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceStatus_, "") };
      inline Data& setDbInstanceStatus(string dbInstanceStatus) { DARABONBA_PTR_SET_VALUE(dbInstanceStatus_, dbInstanceStatus) };


      // enableAuthFreeRead Field Functions 
      bool hasEnableAuthFreeRead() const { return this->enableAuthFreeRead_ != nullptr;};
      void deleteEnableAuthFreeRead() { this->enableAuthFreeRead_ = nullptr;};
      inline bool getEnableAuthFreeRead() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeRead_, false) };
      inline Data& setEnableAuthFreeRead(bool enableAuthFreeRead) { DARABONBA_PTR_SET_VALUE(enableAuthFreeRead_, enableAuthFreeRead) };


      // enableAuthFreeWrite Field Functions 
      bool hasEnableAuthFreeWrite() const { return this->enableAuthFreeWrite_ != nullptr;};
      void deleteEnableAuthFreeWrite() { this->enableAuthFreeWrite_ = nullptr;};
      inline bool getEnableAuthFreeWrite() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeWrite_, false) };
      inline Data& setEnableAuthFreeWrite(bool enableAuthFreeWrite) { DARABONBA_PTR_SET_VALUE(enableAuthFreeWrite_, enableAuthFreeWrite) };


      // enableAuthToken Field Functions 
      bool hasEnableAuthToken() const { return this->enableAuthToken_ != nullptr;};
      void deleteEnableAuthToken() { this->enableAuthToken_ = nullptr;};
      inline string getEnableAuthToken() const { DARABONBA_PTR_GET_DEFAULT(enableAuthToken_, "") };
      inline Data& setEnableAuthToken(string enableAuthToken) { DARABONBA_PTR_SET_VALUE(enableAuthToken_, enableAuthToken) };


      // extraInfo Field Functions 
      bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
      void deleteExtraInfo() { this->extraInfo_ = nullptr;};
      inline const map<string, string> & getExtraInfo() const { DARABONBA_PTR_GET_CONST(extraInfo_, map<string, string>) };
      inline map<string, string> getExtraInfo() { DARABONBA_PTR_GET(extraInfo_, map<string, string>) };
      inline Data& setExtraInfo(const map<string, string> & extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };
      inline Data& setExtraInfo(map<string, string> && extraInfo) { DARABONBA_PTR_SET_RVALUE(extraInfo_, extraInfo) };


      // grafanaInstanceId Field Functions 
      bool hasGrafanaInstanceId() const { return this->grafanaInstanceId_ != nullptr;};
      void deleteGrafanaInstanceId() { this->grafanaInstanceId_ = nullptr;};
      inline string getGrafanaInstanceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaInstanceId_, "") };
      inline Data& setGrafanaInstanceId(string grafanaInstanceId) { DARABONBA_PTR_SET_VALUE(grafanaInstanceId_, grafanaInstanceId) };


      // httpApiInterUrl Field Functions 
      bool hasHttpApiInterUrl() const { return this->httpApiInterUrl_ != nullptr;};
      void deleteHttpApiInterUrl() { this->httpApiInterUrl_ = nullptr;};
      inline string getHttpApiInterUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiInterUrl_, "") };
      inline Data& setHttpApiInterUrl(string httpApiInterUrl) { DARABONBA_PTR_SET_VALUE(httpApiInterUrl_, httpApiInterUrl) };


      // httpApiIntraUrl Field Functions 
      bool hasHttpApiIntraUrl() const { return this->httpApiIntraUrl_ != nullptr;};
      void deleteHttpApiIntraUrl() { this->httpApiIntraUrl_ = nullptr;};
      inline string getHttpApiIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(httpApiIntraUrl_, "") };
      inline Data& setHttpApiIntraUrl(string httpApiIntraUrl) { DARABONBA_PTR_SET_VALUE(httpApiIntraUrl_, httpApiIntraUrl) };


      // openTelemetryInterUrl Field Functions 
      bool hasOpenTelemetryInterUrl() const { return this->openTelemetryInterUrl_ != nullptr;};
      void deleteOpenTelemetryInterUrl() { this->openTelemetryInterUrl_ = nullptr;};
      inline string getOpenTelemetryInterUrl() const { DARABONBA_PTR_GET_DEFAULT(openTelemetryInterUrl_, "") };
      inline Data& setOpenTelemetryInterUrl(string openTelemetryInterUrl) { DARABONBA_PTR_SET_VALUE(openTelemetryInterUrl_, openTelemetryInterUrl) };


      // openTelemetryIntraUrl Field Functions 
      bool hasOpenTelemetryIntraUrl() const { return this->openTelemetryIntraUrl_ != nullptr;};
      void deleteOpenTelemetryIntraUrl() { this->openTelemetryIntraUrl_ = nullptr;};
      inline string getOpenTelemetryIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(openTelemetryIntraUrl_, "") };
      inline Data& setOpenTelemetryIntraUrl(string openTelemetryIntraUrl) { DARABONBA_PTR_SET_VALUE(openTelemetryIntraUrl_, openTelemetryIntraUrl) };


      // paymentType Field Functions 
      bool hasPaymentType() const { return this->paymentType_ != nullptr;};
      void deletePaymentType() { this->paymentType_ = nullptr;};
      inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
      inline Data& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


      // paymentTypeUpdateTime Field Functions 
      bool hasPaymentTypeUpdateTime() const { return this->paymentTypeUpdateTime_ != nullptr;};
      void deletePaymentTypeUpdateTime() { this->paymentTypeUpdateTime_ = nullptr;};
      inline string getPaymentTypeUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(paymentTypeUpdateTime_, "") };
      inline Data& setPaymentTypeUpdateTime(string paymentTypeUpdateTime) { DARABONBA_PTR_SET_VALUE(paymentTypeUpdateTime_, paymentTypeUpdateTime) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline Data& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // pushGatewayInterUrl Field Functions 
      bool hasPushGatewayInterUrl() const { return this->pushGatewayInterUrl_ != nullptr;};
      void deletePushGatewayInterUrl() { this->pushGatewayInterUrl_ = nullptr;};
      inline string getPushGatewayInterUrl() const { DARABONBA_PTR_GET_DEFAULT(pushGatewayInterUrl_, "") };
      inline Data& setPushGatewayInterUrl(string pushGatewayInterUrl) { DARABONBA_PTR_SET_VALUE(pushGatewayInterUrl_, pushGatewayInterUrl) };


      // pushGatewayIntraUrl Field Functions 
      bool hasPushGatewayIntraUrl() const { return this->pushGatewayIntraUrl_ != nullptr;};
      void deletePushGatewayIntraUrl() { this->pushGatewayIntraUrl_ = nullptr;};
      inline string getPushGatewayIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(pushGatewayIntraUrl_, "") };
      inline Data& setPushGatewayIntraUrl(string pushGatewayIntraUrl) { DARABONBA_PTR_SET_VALUE(pushGatewayIntraUrl_, pushGatewayIntraUrl) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // remoteReadInterUrl Field Functions 
      bool hasRemoteReadInterUrl() const { return this->remoteReadInterUrl_ != nullptr;};
      void deleteRemoteReadInterUrl() { this->remoteReadInterUrl_ = nullptr;};
      inline string getRemoteReadInterUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteReadInterUrl_, "") };
      inline Data& setRemoteReadInterUrl(string remoteReadInterUrl) { DARABONBA_PTR_SET_VALUE(remoteReadInterUrl_, remoteReadInterUrl) };


      // remoteReadIntraUrl Field Functions 
      bool hasRemoteReadIntraUrl() const { return this->remoteReadIntraUrl_ != nullptr;};
      void deleteRemoteReadIntraUrl() { this->remoteReadIntraUrl_ = nullptr;};
      inline string getRemoteReadIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteReadIntraUrl_, "") };
      inline Data& setRemoteReadIntraUrl(string remoteReadIntraUrl) { DARABONBA_PTR_SET_VALUE(remoteReadIntraUrl_, remoteReadIntraUrl) };


      // remoteWriteInterUrl Field Functions 
      bool hasRemoteWriteInterUrl() const { return this->remoteWriteInterUrl_ != nullptr;};
      void deleteRemoteWriteInterUrl() { this->remoteWriteInterUrl_ = nullptr;};
      inline string getRemoteWriteInterUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteWriteInterUrl_, "") };
      inline Data& setRemoteWriteInterUrl(string remoteWriteInterUrl) { DARABONBA_PTR_SET_VALUE(remoteWriteInterUrl_, remoteWriteInterUrl) };


      // remoteWriteIntraUrl Field Functions 
      bool hasRemoteWriteIntraUrl() const { return this->remoteWriteIntraUrl_ != nullptr;};
      void deleteRemoteWriteIntraUrl() { this->remoteWriteIntraUrl_ = nullptr;};
      inline string getRemoteWriteIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteWriteIntraUrl_, "") };
      inline Data& setRemoteWriteIntraUrl(string remoteWriteIntraUrl) { DARABONBA_PTR_SET_VALUE(remoteWriteIntraUrl_, remoteWriteIntraUrl) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Data& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Data& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // storageDuration Field Functions 
      bool hasStorageDuration() const { return this->storageDuration_ != nullptr;};
      void deleteStorageDuration() { this->storageDuration_ = nullptr;};
      inline int32_t getStorageDuration() const { DARABONBA_PTR_GET_DEFAULT(storageDuration_, 0) };
      inline Data& setStorageDuration(int32_t storageDuration) { DARABONBA_PTR_SET_VALUE(storageDuration_, storageDuration) };


      // subClustersJson Field Functions 
      bool hasSubClustersJson() const { return this->subClustersJson_ != nullptr;};
      void deleteSubClustersJson() { this->subClustersJson_ = nullptr;};
      inline string getSubClustersJson() const { DARABONBA_PTR_GET_DEFAULT(subClustersJson_, "") };
      inline Data& setSubClustersJson(string subClustersJson) { DARABONBA_PTR_SET_VALUE(subClustersJson_, subClustersJson) };


      // supportAuthTypes Field Functions 
      bool hasSupportAuthTypes() const { return this->supportAuthTypes_ != nullptr;};
      void deleteSupportAuthTypes() { this->supportAuthTypes_ = nullptr;};
      inline const vector<string> & getSupportAuthTypes() const { DARABONBA_PTR_GET_CONST(supportAuthTypes_, vector<string>) };
      inline vector<string> getSupportAuthTypes() { DARABONBA_PTR_GET(supportAuthTypes_, vector<string>) };
      inline Data& setSupportAuthTypes(const vector<string> & supportAuthTypes) { DARABONBA_PTR_SET_VALUE(supportAuthTypes_, supportAuthTypes) };
      inline Data& setSupportAuthTypes(vector<string> && supportAuthTypes) { DARABONBA_PTR_SET_RVALUE(supportAuthTypes_, supportAuthTypes) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
      inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
      inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Data& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The permission type. Valid values: readWrite, readOnly, and httpReadOnly
      shared_ptr<string> accessType_ {};
      // The number of days for which data is automatically archived after the storage duration expires. Valid values: 60, 90, 180, and 365. 0 indicates that the data is not archived.
      shared_ptr<int32_t> archiveDuration_ {};
      // The whitelist of IP addresses for which password-free read is enabled.
      shared_ptr<string> authFreeReadPolicy_ {};
      // The whitelist of IP addresses for which password-free write is enabled.
      shared_ptr<string> authFreeWritePolicy_ {};
      // The authorization token.
      shared_ptr<string> authToken_ {};
      // The ID of the Prometheus instance.
      shared_ptr<string> clusterId_ {};
      // The name of the monitoring object.
      shared_ptr<string> clusterName_ {};
      // *   remote-write: general-purpose Prometheus instance
      // *   ecs: Prometheus instances for ECS
      // *   cloud-monitor: Prometheus instance for Alibaba Cloud services in the Chinese mainland
      // *   cloud-product: Prometheus instance for Alibaba Cloud services outside the Chinese mainland
      // *   global-view: global aggregation instance
      // *   aliyun-cs: Prometheus instance for Container Service
      shared_ptr<string> clusterType_ {};
      // The data storage status at the backend.
      shared_ptr<string> dbInstanceStatus_ {};
      // Indicates whether password-free read is enabled.
      shared_ptr<bool> enableAuthFreeRead_ {};
      // Indicates whether password-free write is enabled.
      shared_ptr<bool> enableAuthFreeWrite_ {};
      // Indicates whether access token authentication is enabled.
      shared_ptr<string> enableAuthToken_ {};
      // The extra information. This parameter is returned only for console requests.
      shared_ptr<map<string, string>> extraInfo_ {};
      // The ID of the Grafana workspace.
      shared_ptr<string> grafanaInstanceId_ {};
      // The public URL for the HTTP API.
      shared_ptr<string> httpApiInterUrl_ {};
      // The internal URL for the HTTP API.
      shared_ptr<string> httpApiIntraUrl_ {};
      shared_ptr<string> openTelemetryInterUrl_ {};
      shared_ptr<string> openTelemetryIntraUrl_ {};
      // The billing method. Valid values:
      // 
      // *   PREPAY: subscription
      // *   POSTPAY: pay-as-you-go
      shared_ptr<string> paymentType_ {};
      // The time when the billing method was modified.
      shared_ptr<string> paymentTypeUpdateTime_ {};
      // The product to which the Prometheus instance belongs. Valid values: arms and cms.
      shared_ptr<string> product_ {};
      // The public URL for Pushgateway.
      shared_ptr<string> pushGatewayInterUrl_ {};
      // The internal URL for Pushgateway.
      shared_ptr<string> pushGatewayIntraUrl_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The public URL for remote read.
      shared_ptr<string> remoteReadInterUrl_ {};
      // The internal URL for remote read.
      shared_ptr<string> remoteReadIntraUrl_ {};
      // The public URL for remote write.
      shared_ptr<string> remoteWriteInterUrl_ {};
      // The internal URL for remote write.
      shared_ptr<string> remoteWriteIntraUrl_ {};
      // The ID of the resource group to which the instance belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The type of the resource. Set the value to PROMETHEUS.
      shared_ptr<string> resourceType_ {};
      // The ID of the security group. This parameter is returned only for Prometheus instances for ECS.
      shared_ptr<string> securityGroupId_ {};
      // The data storage duration. Unit: days.
      shared_ptr<int32_t> storageDuration_ {};
      // The child instances of the global aggregation instance. The value is a JSON string.
      shared_ptr<string> subClustersJson_ {};
      // The supported authentication types.
      shared_ptr<vector<string>> supportAuthTypes_ {};
      // The tags of the instance.
      shared_ptr<vector<Data::Tags>> tags_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
      // The vSwitch ID. This parameter is returned only for Prometheus instances for ECS.
      shared_ptr<string> vSwitchId_ {};
      // Version
      shared_ptr<string> version_ {};
      // The VPC ID. This parameter is returned only for Prometheus instances for ECS.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetPrometheusInstanceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPrometheusInstanceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPrometheusInstanceResponseBody::Data) };
    inline GetPrometheusInstanceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPrometheusInstanceResponseBody::Data) };
    inline GetPrometheusInstanceResponseBody& setData(const GetPrometheusInstanceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPrometheusInstanceResponseBody& setData(GetPrometheusInstanceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPrometheusInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPrometheusInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code. The status code 200 indicates that the request was successful. If another status code is returned, the request failed.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<GetPrometheusInstanceResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif

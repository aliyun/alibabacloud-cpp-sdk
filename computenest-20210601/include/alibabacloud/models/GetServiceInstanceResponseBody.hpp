// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BizStatus, bizStatus_);
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EnableInstanceOps, enableInstanceOps_);
      DARABONBA_PTR_TO_JSON(EnableUserPrometheus, enableUserPrometheus_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GrafanaDashBoardUrl, grafanaDashBoardUrl_);
      DARABONBA_PTR_TO_JSON(GrantedPermission, grantedPermission_);
      DARABONBA_PTR_TO_JSON(IsOperated, isOperated_);
      DARABONBA_PTR_TO_JSON(LicenseEndTime, licenseEndTime_);
      DARABONBA_PTR_TO_JSON(MarketInstanceId, marketInstanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetworkConfig, networkConfig_);
      DARABONBA_PTR_TO_JSON(OperatedServiceInstanceId, operatedServiceInstanceId_);
      DARABONBA_PTR_TO_JSON(OperationEndTime, operationEndTime_);
      DARABONBA_PTR_TO_JSON(OperationStartTime, operationStartTime_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PolicyNames, policyNames_);
      DARABONBA_PTR_TO_JSON(PredefinedParameterName, predefinedParameterName_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDetail, statusDetail_);
      DARABONBA_PTR_TO_JSON(SupplierUid, supplierUid_);
      DARABONBA_PTR_TO_JSON(SupportTrialToPrivate, supportTrialToPrivate_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BizStatus, bizStatus_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EnableInstanceOps, enableInstanceOps_);
      DARABONBA_PTR_FROM_JSON(EnableUserPrometheus, enableUserPrometheus_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GrafanaDashBoardUrl, grafanaDashBoardUrl_);
      DARABONBA_PTR_FROM_JSON(GrantedPermission, grantedPermission_);
      DARABONBA_PTR_FROM_JSON(IsOperated, isOperated_);
      DARABONBA_PTR_FROM_JSON(LicenseEndTime, licenseEndTime_);
      DARABONBA_PTR_FROM_JSON(MarketInstanceId, marketInstanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetworkConfig, networkConfig_);
      DARABONBA_PTR_FROM_JSON(OperatedServiceInstanceId, operatedServiceInstanceId_);
      DARABONBA_PTR_FROM_JSON(OperationEndTime, operationEndTime_);
      DARABONBA_PTR_FROM_JSON(OperationStartTime, operationStartTime_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PolicyNames, policyNames_);
      DARABONBA_PTR_FROM_JSON(PredefinedParameterName, predefinedParameterName_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDetail, statusDetail_);
      DARABONBA_PTR_FROM_JSON(SupplierUid, supplierUid_);
      DARABONBA_PTR_FROM_JSON(SupportTrialToPrivate, supportTrialToPrivate_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetServiceInstanceResponseBody() = default ;
    GetServiceInstanceResponseBody(const GetServiceInstanceResponseBody &) = default ;
    GetServiceInstanceResponseBody(GetServiceInstanceResponseBody &&) = default ;
    GetServiceInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceInstanceResponseBody() = default ;
    GetServiceInstanceResponseBody& operator=(const GetServiceInstanceResponseBody &) = default ;
    GetServiceInstanceResponseBody& operator=(GetServiceInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class Service : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Service& obj) { 
        DARABONBA_PTR_TO_JSON(DeployMetadata, deployMetadata_);
        DARABONBA_PTR_TO_JSON(DeployType, deployType_);
        DARABONBA_PTR_TO_JSON(OperationMetadata, operationMetadata_);
        DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
        DARABONBA_PTR_TO_JSON(ServiceDocUrl, serviceDocUrl_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceInfos, serviceInfos_);
        DARABONBA_PTR_TO_JSON(ServiceProductUrl, serviceProductUrl_);
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
        DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
        DARABONBA_PTR_TO_JSON(UpgradableServiceInfos, upgradableServiceInfos_);
        DARABONBA_PTR_TO_JSON(UpgradableServiceVersions, upgradableServiceVersions_);
        DARABONBA_PTR_TO_JSON(UpgradeMetadata, upgradeMetadata_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VersionName, versionName_);
      };
      friend void from_json(const Darabonba::Json& j, Service& obj) { 
        DARABONBA_PTR_FROM_JSON(DeployMetadata, deployMetadata_);
        DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
        DARABONBA_PTR_FROM_JSON(OperationMetadata, operationMetadata_);
        DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
        DARABONBA_PTR_FROM_JSON(ServiceDocUrl, serviceDocUrl_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceInfos, serviceInfos_);
        DARABONBA_PTR_FROM_JSON(ServiceProductUrl, serviceProductUrl_);
        DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
        DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
        DARABONBA_PTR_FROM_JSON(UpgradableServiceInfos, upgradableServiceInfos_);
        DARABONBA_PTR_FROM_JSON(UpgradableServiceVersions, upgradableServiceVersions_);
        DARABONBA_PTR_FROM_JSON(UpgradeMetadata, upgradeMetadata_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
      };
      Service() = default ;
      Service(const Service &) = default ;
      Service(Service &&) = default ;
      Service(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Service() = default ;
      Service& operator=(const Service &) = default ;
      Service& operator=(Service &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UpgradableServiceInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UpgradableServiceInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Version, version_);
          DARABONBA_PTR_TO_JSON(VersionName, versionName_);
        };
        friend void from_json(const Darabonba::Json& j, UpgradableServiceInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Version, version_);
          DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
        };
        UpgradableServiceInfos() = default ;
        UpgradableServiceInfos(const UpgradableServiceInfos &) = default ;
        UpgradableServiceInfos(UpgradableServiceInfos &&) = default ;
        UpgradableServiceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UpgradableServiceInfos() = default ;
        UpgradableServiceInfos& operator=(const UpgradableServiceInfos &) = default ;
        UpgradableServiceInfos& operator=(UpgradableServiceInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->version_ == nullptr
        && this->versionName_ == nullptr; };
        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline UpgradableServiceInfos& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // versionName Field Functions 
        bool hasVersionName() const { return this->versionName_ != nullptr;};
        void deleteVersionName() { this->versionName_ = nullptr;};
        inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
        inline UpgradableServiceInfos& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


      protected:
        // The service version.
        shared_ptr<string> version_ {};
        // The version name.
        shared_ptr<string> versionName_ {};
      };

      class ServiceInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServiceInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Image, image_);
          DARABONBA_PTR_TO_JSON(Locale, locale_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ShortDescription, shortDescription_);
        };
        friend void from_json(const Darabonba::Json& j, ServiceInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Image, image_);
          DARABONBA_PTR_FROM_JSON(Locale, locale_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ShortDescription, shortDescription_);
        };
        ServiceInfos() = default ;
        ServiceInfos(const ServiceInfos &) = default ;
        ServiceInfos(ServiceInfos &&) = default ;
        ServiceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServiceInfos() = default ;
        ServiceInfos& operator=(const ServiceInfos &) = default ;
        ServiceInfos& operator=(ServiceInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->image_ == nullptr
        && this->locale_ == nullptr && this->name_ == nullptr && this->shortDescription_ == nullptr; };
        // image Field Functions 
        bool hasImage() const { return this->image_ != nullptr;};
        void deleteImage() { this->image_ = nullptr;};
        inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
        inline ServiceInfos& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


        // locale Field Functions 
        bool hasLocale() const { return this->locale_ != nullptr;};
        void deleteLocale() { this->locale_ = nullptr;};
        inline string getLocale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
        inline ServiceInfos& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ServiceInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // shortDescription Field Functions 
        bool hasShortDescription() const { return this->shortDescription_ != nullptr;};
        void deleteShortDescription() { this->shortDescription_ = nullptr;};
        inline string getShortDescription() const { DARABONBA_PTR_GET_DEFAULT(shortDescription_, "") };
        inline ServiceInfos& setShortDescription(string shortDescription) { DARABONBA_PTR_SET_VALUE(shortDescription_, shortDescription) };


      protected:
        // The URL of the service icon.
        shared_ptr<string> image_ {};
        // The language of the service instance.
        shared_ptr<string> locale_ {};
        // The name of the service.
        shared_ptr<string> name_ {};
        // The description of the service.
        shared_ptr<string> shortDescription_ {};
      };

      virtual bool empty() const override { return this->deployMetadata_ == nullptr
        && this->deployType_ == nullptr && this->operationMetadata_ == nullptr && this->publishTime_ == nullptr && this->serviceDocUrl_ == nullptr && this->serviceId_ == nullptr
        && this->serviceInfos_ == nullptr && this->serviceProductUrl_ == nullptr && this->serviceType_ == nullptr && this->status_ == nullptr && this->supplierName_ == nullptr
        && this->supplierUrl_ == nullptr && this->upgradableServiceInfos_ == nullptr && this->upgradableServiceVersions_ == nullptr && this->upgradeMetadata_ == nullptr && this->version_ == nullptr
        && this->versionName_ == nullptr; };
      // deployMetadata Field Functions 
      bool hasDeployMetadata() const { return this->deployMetadata_ != nullptr;};
      void deleteDeployMetadata() { this->deployMetadata_ = nullptr;};
      inline string getDeployMetadata() const { DARABONBA_PTR_GET_DEFAULT(deployMetadata_, "") };
      inline Service& setDeployMetadata(string deployMetadata) { DARABONBA_PTR_SET_VALUE(deployMetadata_, deployMetadata) };


      // deployType Field Functions 
      bool hasDeployType() const { return this->deployType_ != nullptr;};
      void deleteDeployType() { this->deployType_ = nullptr;};
      inline string getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
      inline Service& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


      // operationMetadata Field Functions 
      bool hasOperationMetadata() const { return this->operationMetadata_ != nullptr;};
      void deleteOperationMetadata() { this->operationMetadata_ = nullptr;};
      inline string getOperationMetadata() const { DARABONBA_PTR_GET_DEFAULT(operationMetadata_, "") };
      inline Service& setOperationMetadata(string operationMetadata) { DARABONBA_PTR_SET_VALUE(operationMetadata_, operationMetadata) };


      // publishTime Field Functions 
      bool hasPublishTime() const { return this->publishTime_ != nullptr;};
      void deletePublishTime() { this->publishTime_ = nullptr;};
      inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
      inline Service& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


      // serviceDocUrl Field Functions 
      bool hasServiceDocUrl() const { return this->serviceDocUrl_ != nullptr;};
      void deleteServiceDocUrl() { this->serviceDocUrl_ = nullptr;};
      inline string getServiceDocUrl() const { DARABONBA_PTR_GET_DEFAULT(serviceDocUrl_, "") };
      inline Service& setServiceDocUrl(string serviceDocUrl) { DARABONBA_PTR_SET_VALUE(serviceDocUrl_, serviceDocUrl) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Service& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceInfos Field Functions 
      bool hasServiceInfos() const { return this->serviceInfos_ != nullptr;};
      void deleteServiceInfos() { this->serviceInfos_ = nullptr;};
      inline const vector<Service::ServiceInfos> & getServiceInfos() const { DARABONBA_PTR_GET_CONST(serviceInfos_, vector<Service::ServiceInfos>) };
      inline vector<Service::ServiceInfos> getServiceInfos() { DARABONBA_PTR_GET(serviceInfos_, vector<Service::ServiceInfos>) };
      inline Service& setServiceInfos(const vector<Service::ServiceInfos> & serviceInfos) { DARABONBA_PTR_SET_VALUE(serviceInfos_, serviceInfos) };
      inline Service& setServiceInfos(vector<Service::ServiceInfos> && serviceInfos) { DARABONBA_PTR_SET_RVALUE(serviceInfos_, serviceInfos) };


      // serviceProductUrl Field Functions 
      bool hasServiceProductUrl() const { return this->serviceProductUrl_ != nullptr;};
      void deleteServiceProductUrl() { this->serviceProductUrl_ = nullptr;};
      inline string getServiceProductUrl() const { DARABONBA_PTR_GET_DEFAULT(serviceProductUrl_, "") };
      inline Service& setServiceProductUrl(string serviceProductUrl) { DARABONBA_PTR_SET_VALUE(serviceProductUrl_, serviceProductUrl) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline Service& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Service& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supplierName Field Functions 
      bool hasSupplierName() const { return this->supplierName_ != nullptr;};
      void deleteSupplierName() { this->supplierName_ = nullptr;};
      inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
      inline Service& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


      // supplierUrl Field Functions 
      bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
      void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
      inline string getSupplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
      inline Service& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


      // upgradableServiceInfos Field Functions 
      bool hasUpgradableServiceInfos() const { return this->upgradableServiceInfos_ != nullptr;};
      void deleteUpgradableServiceInfos() { this->upgradableServiceInfos_ = nullptr;};
      inline const vector<Service::UpgradableServiceInfos> & getUpgradableServiceInfos() const { DARABONBA_PTR_GET_CONST(upgradableServiceInfos_, vector<Service::UpgradableServiceInfos>) };
      inline vector<Service::UpgradableServiceInfos> getUpgradableServiceInfos() { DARABONBA_PTR_GET(upgradableServiceInfos_, vector<Service::UpgradableServiceInfos>) };
      inline Service& setUpgradableServiceInfos(const vector<Service::UpgradableServiceInfos> & upgradableServiceInfos) { DARABONBA_PTR_SET_VALUE(upgradableServiceInfos_, upgradableServiceInfos) };
      inline Service& setUpgradableServiceInfos(vector<Service::UpgradableServiceInfos> && upgradableServiceInfos) { DARABONBA_PTR_SET_RVALUE(upgradableServiceInfos_, upgradableServiceInfos) };


      // upgradableServiceVersions Field Functions 
      bool hasUpgradableServiceVersions() const { return this->upgradableServiceVersions_ != nullptr;};
      void deleteUpgradableServiceVersions() { this->upgradableServiceVersions_ = nullptr;};
      inline const vector<string> & getUpgradableServiceVersions() const { DARABONBA_PTR_GET_CONST(upgradableServiceVersions_, vector<string>) };
      inline vector<string> getUpgradableServiceVersions() { DARABONBA_PTR_GET(upgradableServiceVersions_, vector<string>) };
      inline Service& setUpgradableServiceVersions(const vector<string> & upgradableServiceVersions) { DARABONBA_PTR_SET_VALUE(upgradableServiceVersions_, upgradableServiceVersions) };
      inline Service& setUpgradableServiceVersions(vector<string> && upgradableServiceVersions) { DARABONBA_PTR_SET_RVALUE(upgradableServiceVersions_, upgradableServiceVersions) };


      // upgradeMetadata Field Functions 
      bool hasUpgradeMetadata() const { return this->upgradeMetadata_ != nullptr;};
      void deleteUpgradeMetadata() { this->upgradeMetadata_ = nullptr;};
      inline string getUpgradeMetadata() const { DARABONBA_PTR_GET_DEFAULT(upgradeMetadata_, "") };
      inline Service& setUpgradeMetadata(string upgradeMetadata) { DARABONBA_PTR_SET_VALUE(upgradeMetadata_, upgradeMetadata) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Service& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // versionName Field Functions 
      bool hasVersionName() const { return this->versionName_ != nullptr;};
      void deleteVersionName() { this->versionName_ = nullptr;};
      inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
      inline Service& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


    protected:
      // The storage configurations of the service. The format in which the deployment information of a service is stored varies based on the deployment type of the service. In this case, the deployment information is stored in the JSON string format.
      shared_ptr<string> deployMetadata_ {};
      // The deployment type of the service. Valid values:
      // 
      // *   ros: The service is deployed by using Resource Orchestration Service (ROS).
      // *   terraform: The service is deployed by using Terraform.
      // *   ack: The service is deployed by using Container Service for Kubernetes (ACK).
      // *   spi: The service is deployed by calling a service provider interface (SPI).
      // *   operation: The service is deployed by using a hosted O\\&M service.
      shared_ptr<string> deployType_ {};
      // Parameters related to O\\&M operations, including configuration change, prometheus, and log configurations.
      shared_ptr<string> operationMetadata_ {};
      // The time when the service version was published.
      shared_ptr<string> publishTime_ {};
      // The URL of the service documentation.
      shared_ptr<string> serviceDocUrl_ {};
      // The service ID.
      shared_ptr<string> serviceId_ {};
      // The information about the service.
      shared_ptr<vector<Service::ServiceInfos>> serviceInfos_ {};
      // The URL of the service page.
      shared_ptr<string> serviceProductUrl_ {};
      // The type of the service. Valid values:
      // 
      // *   private: The service is a private service and is deployed within the account of a customer.
      // *   managed: The service is a fully managed service and is deployed within the account of a service provider.
      // *   operation: The service is a hosted O\\&M service.
      shared_ptr<string> serviceType_ {};
      // The status of the service. Valid values:
      // 
      // *   Draft
      // *   Submited
      // *   Approved
      // *   Online
      // *   Offline
      // *   Deleted
      // *   Launching
      // *   Beta
      shared_ptr<string> status_ {};
      // The name of the service provider.
      shared_ptr<string> supplierName_ {};
      // The URL of the service provider.
      shared_ptr<string> supplierUrl_ {};
      // The service versions that can be updated.
      shared_ptr<vector<Service::UpgradableServiceInfos>> upgradableServiceInfos_ {};
      // The service version that can be updated.
      shared_ptr<vector<string>> upgradableServiceVersions_ {};
      // The metadata about the upgrade.
      shared_ptr<string> upgradeMetadata_ {};
      // The service version.
      shared_ptr<string> version_ {};
      // The custom version name defined by the service provider.
      shared_ptr<string> versionName_ {};
    };

    class NetworkConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_TO_JSON(PrivateVpcConnections, privateVpcConnections_);
        DARABONBA_PTR_TO_JSON(PrivateZoneId, privateZoneId_);
        DARABONBA_PTR_TO_JSON(ReversePrivateVpcConnections, reversePrivateVpcConnections_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_FROM_JSON(PrivateVpcConnections, privateVpcConnections_);
        DARABONBA_PTR_FROM_JSON(PrivateZoneId, privateZoneId_);
        DARABONBA_PTR_FROM_JSON(ReversePrivateVpcConnections, reversePrivateVpcConnections_);
      };
      NetworkConfig() = default ;
      NetworkConfig(const NetworkConfig &) = default ;
      NetworkConfig(NetworkConfig &&) = default ;
      NetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkConfig() = default ;
      NetworkConfig& operator=(const NetworkConfig &) = default ;
      NetworkConfig& operator=(NetworkConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ReversePrivateVpcConnections : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReversePrivateVpcConnections& obj) { 
          DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
        };
        friend void from_json(const Darabonba::Json& j, ReversePrivateVpcConnections& obj) { 
          DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
        };
        ReversePrivateVpcConnections() = default ;
        ReversePrivateVpcConnections(const ReversePrivateVpcConnections &) = default ;
        ReversePrivateVpcConnections(ReversePrivateVpcConnections &&) = default ;
        ReversePrivateVpcConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReversePrivateVpcConnections() = default ;
        ReversePrivateVpcConnections& operator=(const ReversePrivateVpcConnections &) = default ;
        ReversePrivateVpcConnections& operator=(ReversePrivateVpcConnections &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endpointId_ == nullptr; };
        // endpointId Field Functions 
        bool hasEndpointId() const { return this->endpointId_ != nullptr;};
        void deleteEndpointId() { this->endpointId_ = nullptr;};
        inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
        inline ReversePrivateVpcConnections& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


      protected:
        // The endpoint ID of the reverse private connection.
        shared_ptr<string> endpointId_ {};
      };

      class PrivateVpcConnections : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrivateVpcConnections& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionConfigs, connectionConfigs_);
          DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
          DARABONBA_PTR_TO_JSON(PrivateZoneId, privateZoneId_);
          DARABONBA_PTR_TO_JSON(PrivateZoneName, privateZoneName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, PrivateVpcConnections& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionConfigs, connectionConfigs_);
          DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
          DARABONBA_PTR_FROM_JSON(PrivateZoneId, privateZoneId_);
          DARABONBA_PTR_FROM_JSON(PrivateZoneName, privateZoneName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        PrivateVpcConnections() = default ;
        PrivateVpcConnections(const PrivateVpcConnections &) = default ;
        PrivateVpcConnections(PrivateVpcConnections &&) = default ;
        PrivateVpcConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrivateVpcConnections() = default ;
        PrivateVpcConnections& operator=(const PrivateVpcConnections &) = default ;
        PrivateVpcConnections& operator=(PrivateVpcConnections &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ConnectionConfigs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConnectionConfigs& obj) { 
            DARABONBA_PTR_TO_JSON(ConnectBandwidth, connectBandwidth_);
            DARABONBA_PTR_TO_JSON(DomainName, domainName_);
            DARABONBA_PTR_TO_JSON(EndpointIps, endpointIps_);
            DARABONBA_PTR_TO_JSON(IngressEndpointStatus, ingressEndpointStatus_);
            DARABONBA_PTR_TO_JSON(NetworkServiceStatus, networkServiceStatus_);
            DARABONBA_PTR_TO_JSON(RegionId, regionId_);
            DARABONBA_PTR_TO_JSON(SecurityGroups, securityGroups_);
            DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
            DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          };
          friend void from_json(const Darabonba::Json& j, ConnectionConfigs& obj) { 
            DARABONBA_PTR_FROM_JSON(ConnectBandwidth, connectBandwidth_);
            DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
            DARABONBA_PTR_FROM_JSON(EndpointIps, endpointIps_);
            DARABONBA_PTR_FROM_JSON(IngressEndpointStatus, ingressEndpointStatus_);
            DARABONBA_PTR_FROM_JSON(NetworkServiceStatus, networkServiceStatus_);
            DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
            DARABONBA_PTR_FROM_JSON(SecurityGroups, securityGroups_);
            DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
            DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          };
          ConnectionConfigs() = default ;
          ConnectionConfigs(const ConnectionConfigs &) = default ;
          ConnectionConfigs(ConnectionConfigs &&) = default ;
          ConnectionConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConnectionConfigs() = default ;
          ConnectionConfigs& operator=(const ConnectionConfigs &) = default ;
          ConnectionConfigs& operator=(ConnectionConfigs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->connectBandwidth_ == nullptr
        && this->domainName_ == nullptr && this->endpointIps_ == nullptr && this->ingressEndpointStatus_ == nullptr && this->networkServiceStatus_ == nullptr && this->regionId_ == nullptr
        && this->securityGroups_ == nullptr && this->vSwitches_ == nullptr && this->vpcId_ == nullptr; };
          // connectBandwidth Field Functions 
          bool hasConnectBandwidth() const { return this->connectBandwidth_ != nullptr;};
          void deleteConnectBandwidth() { this->connectBandwidth_ = nullptr;};
          inline int32_t getConnectBandwidth() const { DARABONBA_PTR_GET_DEFAULT(connectBandwidth_, 0) };
          inline ConnectionConfigs& setConnectBandwidth(int32_t connectBandwidth) { DARABONBA_PTR_SET_VALUE(connectBandwidth_, connectBandwidth) };


          // domainName Field Functions 
          bool hasDomainName() const { return this->domainName_ != nullptr;};
          void deleteDomainName() { this->domainName_ = nullptr;};
          inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
          inline ConnectionConfigs& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


          // endpointIps Field Functions 
          bool hasEndpointIps() const { return this->endpointIps_ != nullptr;};
          void deleteEndpointIps() { this->endpointIps_ = nullptr;};
          inline const vector<string> & getEndpointIps() const { DARABONBA_PTR_GET_CONST(endpointIps_, vector<string>) };
          inline vector<string> getEndpointIps() { DARABONBA_PTR_GET(endpointIps_, vector<string>) };
          inline ConnectionConfigs& setEndpointIps(const vector<string> & endpointIps) { DARABONBA_PTR_SET_VALUE(endpointIps_, endpointIps) };
          inline ConnectionConfigs& setEndpointIps(vector<string> && endpointIps) { DARABONBA_PTR_SET_RVALUE(endpointIps_, endpointIps) };


          // ingressEndpointStatus Field Functions 
          bool hasIngressEndpointStatus() const { return this->ingressEndpointStatus_ != nullptr;};
          void deleteIngressEndpointStatus() { this->ingressEndpointStatus_ = nullptr;};
          inline string getIngressEndpointStatus() const { DARABONBA_PTR_GET_DEFAULT(ingressEndpointStatus_, "") };
          inline ConnectionConfigs& setIngressEndpointStatus(string ingressEndpointStatus) { DARABONBA_PTR_SET_VALUE(ingressEndpointStatus_, ingressEndpointStatus) };


          // networkServiceStatus Field Functions 
          bool hasNetworkServiceStatus() const { return this->networkServiceStatus_ != nullptr;};
          void deleteNetworkServiceStatus() { this->networkServiceStatus_ = nullptr;};
          inline string getNetworkServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(networkServiceStatus_, "") };
          inline ConnectionConfigs& setNetworkServiceStatus(string networkServiceStatus) { DARABONBA_PTR_SET_VALUE(networkServiceStatus_, networkServiceStatus) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline ConnectionConfigs& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // securityGroups Field Functions 
          bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
          void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
          inline const vector<string> & getSecurityGroups() const { DARABONBA_PTR_GET_CONST(securityGroups_, vector<string>) };
          inline vector<string> getSecurityGroups() { DARABONBA_PTR_GET(securityGroups_, vector<string>) };
          inline ConnectionConfigs& setSecurityGroups(const vector<string> & securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };
          inline ConnectionConfigs& setSecurityGroups(vector<string> && securityGroups) { DARABONBA_PTR_SET_RVALUE(securityGroups_, securityGroups) };


          // vSwitches Field Functions 
          bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
          void deleteVSwitches() { this->vSwitches_ = nullptr;};
          inline const vector<string> & getVSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<string>) };
          inline vector<string> getVSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<string>) };
          inline ConnectionConfigs& setVSwitches(const vector<string> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
          inline ConnectionConfigs& setVSwitches(vector<string> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline ConnectionConfigs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        protected:
          // The bandwidth limit for the private connection established based on the private network interconnection mode of Compute Nest.
          shared_ptr<int32_t> connectBandwidth_ {};
          // The domain name.
          shared_ptr<string> domainName_ {};
          // The IP addresses of the endpoints of the private connections.
          shared_ptr<vector<string>> endpointIps_ {};
          // The state of the ingress endpoint. Valid values:
          // 
          // *   Ready: The ingress endpoint is connected.
          // *   Pending: The ingress endpoint is being connected.
          // *   Failed: The ingress endpoint fails to be connected.
          // *   Deleted: The ingress endpoint is deleted.
          // *   Deleting: The ingress endpoint is being deleted.
          shared_ptr<string> ingressEndpointStatus_ {};
          // The state of the network service. Valid values:
          // 
          // *   Ready: The network service is connected.
          // *   Pending: The network service is being connected.
          // *   Failed: The network service fails to be connected.
          // *   Deleted: The network service is deleted.
          // *   Deleting: The network service is being deleted.
          shared_ptr<string> networkServiceStatus_ {};
          // The region ID of the VPC to which the endpoint of the private connection established based on the private network interconnection mode of Compute Nest belongs.
          shared_ptr<string> regionId_ {};
          // The names of the security groups.
          shared_ptr<vector<string>> securityGroups_ {};
          // The names of the vSwitches.
          shared_ptr<vector<string>> vSwitches_ {};
          // The ID of the virtual private cloud (VPC).
          shared_ptr<string> vpcId_ {};
        };

        virtual bool empty() const override { return this->connectionConfigs_ == nullptr
        && this->endpointId_ == nullptr && this->privateZoneId_ == nullptr && this->privateZoneName_ == nullptr && this->regionId_ == nullptr; };
        // connectionConfigs Field Functions 
        bool hasConnectionConfigs() const { return this->connectionConfigs_ != nullptr;};
        void deleteConnectionConfigs() { this->connectionConfigs_ = nullptr;};
        inline const vector<PrivateVpcConnections::ConnectionConfigs> & getConnectionConfigs() const { DARABONBA_PTR_GET_CONST(connectionConfigs_, vector<PrivateVpcConnections::ConnectionConfigs>) };
        inline vector<PrivateVpcConnections::ConnectionConfigs> getConnectionConfigs() { DARABONBA_PTR_GET(connectionConfigs_, vector<PrivateVpcConnections::ConnectionConfigs>) };
        inline PrivateVpcConnections& setConnectionConfigs(const vector<PrivateVpcConnections::ConnectionConfigs> & connectionConfigs) { DARABONBA_PTR_SET_VALUE(connectionConfigs_, connectionConfigs) };
        inline PrivateVpcConnections& setConnectionConfigs(vector<PrivateVpcConnections::ConnectionConfigs> && connectionConfigs) { DARABONBA_PTR_SET_RVALUE(connectionConfigs_, connectionConfigs) };


        // endpointId Field Functions 
        bool hasEndpointId() const { return this->endpointId_ != nullptr;};
        void deleteEndpointId() { this->endpointId_ = nullptr;};
        inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
        inline PrivateVpcConnections& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


        // privateZoneId Field Functions 
        bool hasPrivateZoneId() const { return this->privateZoneId_ != nullptr;};
        void deletePrivateZoneId() { this->privateZoneId_ = nullptr;};
        inline string getPrivateZoneId() const { DARABONBA_PTR_GET_DEFAULT(privateZoneId_, "") };
        inline PrivateVpcConnections& setPrivateZoneId(string privateZoneId) { DARABONBA_PTR_SET_VALUE(privateZoneId_, privateZoneId) };


        // privateZoneName Field Functions 
        bool hasPrivateZoneName() const { return this->privateZoneName_ != nullptr;};
        void deletePrivateZoneName() { this->privateZoneName_ = nullptr;};
        inline string getPrivateZoneName() const { DARABONBA_PTR_GET_DEFAULT(privateZoneName_, "") };
        inline PrivateVpcConnections& setPrivateZoneName(string privateZoneName) { DARABONBA_PTR_SET_VALUE(privateZoneName_, privateZoneName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline PrivateVpcConnections& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The network configurations, which are mainly used for private connections.
        shared_ptr<vector<PrivateVpcConnections::ConnectionConfigs>> connectionConfigs_ {};
        // The endpoint ID of the private connection.
        shared_ptr<string> endpointId_ {};
        // The ID of the private zone of the custom private domain name.
        shared_ptr<string> privateZoneId_ {};
        // The custom domain name.
        shared_ptr<string> privateZoneName_ {};
        // The region ID of the endpoint of the PrivateLink connection.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->endpointId_ == nullptr
        && this->privateVpcConnections_ == nullptr && this->privateZoneId_ == nullptr && this->reversePrivateVpcConnections_ == nullptr; };
      // endpointId Field Functions 
      bool hasEndpointId() const { return this->endpointId_ != nullptr;};
      void deleteEndpointId() { this->endpointId_ = nullptr;};
      inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
      inline NetworkConfig& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


      // privateVpcConnections Field Functions 
      bool hasPrivateVpcConnections() const { return this->privateVpcConnections_ != nullptr;};
      void deletePrivateVpcConnections() { this->privateVpcConnections_ = nullptr;};
      inline const vector<NetworkConfig::PrivateVpcConnections> & getPrivateVpcConnections() const { DARABONBA_PTR_GET_CONST(privateVpcConnections_, vector<NetworkConfig::PrivateVpcConnections>) };
      inline vector<NetworkConfig::PrivateVpcConnections> getPrivateVpcConnections() { DARABONBA_PTR_GET(privateVpcConnections_, vector<NetworkConfig::PrivateVpcConnections>) };
      inline NetworkConfig& setPrivateVpcConnections(const vector<NetworkConfig::PrivateVpcConnections> & privateVpcConnections) { DARABONBA_PTR_SET_VALUE(privateVpcConnections_, privateVpcConnections) };
      inline NetworkConfig& setPrivateVpcConnections(vector<NetworkConfig::PrivateVpcConnections> && privateVpcConnections) { DARABONBA_PTR_SET_RVALUE(privateVpcConnections_, privateVpcConnections) };


      // privateZoneId Field Functions 
      bool hasPrivateZoneId() const { return this->privateZoneId_ != nullptr;};
      void deletePrivateZoneId() { this->privateZoneId_ = nullptr;};
      inline string getPrivateZoneId() const { DARABONBA_PTR_GET_DEFAULT(privateZoneId_, "") };
      inline NetworkConfig& setPrivateZoneId(string privateZoneId) { DARABONBA_PTR_SET_VALUE(privateZoneId_, privateZoneId) };


      // reversePrivateVpcConnections Field Functions 
      bool hasReversePrivateVpcConnections() const { return this->reversePrivateVpcConnections_ != nullptr;};
      void deleteReversePrivateVpcConnections() { this->reversePrivateVpcConnections_ = nullptr;};
      inline const vector<NetworkConfig::ReversePrivateVpcConnections> & getReversePrivateVpcConnections() const { DARABONBA_PTR_GET_CONST(reversePrivateVpcConnections_, vector<NetworkConfig::ReversePrivateVpcConnections>) };
      inline vector<NetworkConfig::ReversePrivateVpcConnections> getReversePrivateVpcConnections() { DARABONBA_PTR_GET(reversePrivateVpcConnections_, vector<NetworkConfig::ReversePrivateVpcConnections>) };
      inline NetworkConfig& setReversePrivateVpcConnections(const vector<NetworkConfig::ReversePrivateVpcConnections> & reversePrivateVpcConnections) { DARABONBA_PTR_SET_VALUE(reversePrivateVpcConnections_, reversePrivateVpcConnections) };
      inline NetworkConfig& setReversePrivateVpcConnections(vector<NetworkConfig::ReversePrivateVpcConnections> && reversePrivateVpcConnections) { DARABONBA_PTR_SET_RVALUE(reversePrivateVpcConnections_, reversePrivateVpcConnections) };


    protected:
      // The ID of the endpoint for the private connection.
      // 
      // >  This parameter is discontinued.
      shared_ptr<string> endpointId_ {};
      // The information about private connections.
      shared_ptr<vector<NetworkConfig::PrivateVpcConnections>> privateVpcConnections_ {};
      // The PrivateZone ID.
      shared_ptr<string> privateZoneId_ {};
      // The information about the reverse private connection.
      shared_ptr<vector<NetworkConfig::ReversePrivateVpcConnections>> reversePrivateVpcConnections_ {};
    };

    class GrantedPermission : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GrantedPermission& obj) { 
        DARABONBA_PTR_TO_JSON(OperationEndTime, operationEndTime_);
        DARABONBA_PTR_TO_JSON(PolicyNames, policyNames_);
      };
      friend void from_json(const Darabonba::Json& j, GrantedPermission& obj) { 
        DARABONBA_PTR_FROM_JSON(OperationEndTime, operationEndTime_);
        DARABONBA_PTR_FROM_JSON(PolicyNames, policyNames_);
      };
      GrantedPermission() = default ;
      GrantedPermission(const GrantedPermission &) = default ;
      GrantedPermission(GrantedPermission &&) = default ;
      GrantedPermission(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GrantedPermission() = default ;
      GrantedPermission& operator=(const GrantedPermission &) = default ;
      GrantedPermission& operator=(GrantedPermission &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->operationEndTime_ == nullptr
        && this->policyNames_ == nullptr; };
      // operationEndTime Field Functions 
      bool hasOperationEndTime() const { return this->operationEndTime_ != nullptr;};
      void deleteOperationEndTime() { this->operationEndTime_ = nullptr;};
      inline string getOperationEndTime() const { DARABONBA_PTR_GET_DEFAULT(operationEndTime_, "") };
      inline GrantedPermission& setOperationEndTime(string operationEndTime) { DARABONBA_PTR_SET_VALUE(operationEndTime_, operationEndTime) };


      // policyNames Field Functions 
      bool hasPolicyNames() const { return this->policyNames_ != nullptr;};
      void deletePolicyNames() { this->policyNames_ = nullptr;};
      inline string getPolicyNames() const { DARABONBA_PTR_GET_DEFAULT(policyNames_, "") };
      inline GrantedPermission& setPolicyNames(string policyNames) { DARABONBA_PTR_SET_VALUE(policyNames_, policyNames) };


    protected:
      shared_ptr<string> operationEndTime_ {};
      shared_ptr<string> policyNames_ {};
    };

    virtual bool empty() const override { return this->bizStatus_ == nullptr
        && this->components_ == nullptr && this->createTime_ == nullptr && this->enableInstanceOps_ == nullptr && this->enableUserPrometheus_ == nullptr && this->endTime_ == nullptr
        && this->grafanaDashBoardUrl_ == nullptr && this->grantedPermission_ == nullptr && this->isOperated_ == nullptr && this->licenseEndTime_ == nullptr && this->marketInstanceId_ == nullptr
        && this->name_ == nullptr && this->networkConfig_ == nullptr && this->operatedServiceInstanceId_ == nullptr && this->operationEndTime_ == nullptr && this->operationStartTime_ == nullptr
        && this->outputs_ == nullptr && this->parameters_ == nullptr && this->payType_ == nullptr && this->policyNames_ == nullptr && this->predefinedParameterName_ == nullptr
        && this->progress_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->resources_ == nullptr && this->service_ == nullptr
        && this->serviceInstanceId_ == nullptr && this->serviceType_ == nullptr && this->source_ == nullptr && this->status_ == nullptr && this->statusDetail_ == nullptr
        && this->supplierUid_ == nullptr && this->supportTrialToPrivate_ == nullptr && this->tags_ == nullptr && this->templateName_ == nullptr && this->updateTime_ == nullptr
        && this->userId_ == nullptr; };
    // bizStatus Field Functions 
    bool hasBizStatus() const { return this->bizStatus_ != nullptr;};
    void deleteBizStatus() { this->bizStatus_ = nullptr;};
    inline string getBizStatus() const { DARABONBA_PTR_GET_DEFAULT(bizStatus_, "") };
    inline GetServiceInstanceResponseBody& setBizStatus(string bizStatus) { DARABONBA_PTR_SET_VALUE(bizStatus_, bizStatus) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline string getComponents() const { DARABONBA_PTR_GET_DEFAULT(components_, "") };
    inline GetServiceInstanceResponseBody& setComponents(string components) { DARABONBA_PTR_SET_VALUE(components_, components) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetServiceInstanceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // enableInstanceOps Field Functions 
    bool hasEnableInstanceOps() const { return this->enableInstanceOps_ != nullptr;};
    void deleteEnableInstanceOps() { this->enableInstanceOps_ = nullptr;};
    inline bool getEnableInstanceOps() const { DARABONBA_PTR_GET_DEFAULT(enableInstanceOps_, false) };
    inline GetServiceInstanceResponseBody& setEnableInstanceOps(bool enableInstanceOps) { DARABONBA_PTR_SET_VALUE(enableInstanceOps_, enableInstanceOps) };


    // enableUserPrometheus Field Functions 
    bool hasEnableUserPrometheus() const { return this->enableUserPrometheus_ != nullptr;};
    void deleteEnableUserPrometheus() { this->enableUserPrometheus_ = nullptr;};
    inline bool getEnableUserPrometheus() const { DARABONBA_PTR_GET_DEFAULT(enableUserPrometheus_, false) };
    inline GetServiceInstanceResponseBody& setEnableUserPrometheus(bool enableUserPrometheus) { DARABONBA_PTR_SET_VALUE(enableUserPrometheus_, enableUserPrometheus) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetServiceInstanceResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // grafanaDashBoardUrl Field Functions 
    bool hasGrafanaDashBoardUrl() const { return this->grafanaDashBoardUrl_ != nullptr;};
    void deleteGrafanaDashBoardUrl() { this->grafanaDashBoardUrl_ = nullptr;};
    inline string getGrafanaDashBoardUrl() const { DARABONBA_PTR_GET_DEFAULT(grafanaDashBoardUrl_, "") };
    inline GetServiceInstanceResponseBody& setGrafanaDashBoardUrl(string grafanaDashBoardUrl) { DARABONBA_PTR_SET_VALUE(grafanaDashBoardUrl_, grafanaDashBoardUrl) };


    // grantedPermission Field Functions 
    bool hasGrantedPermission() const { return this->grantedPermission_ != nullptr;};
    void deleteGrantedPermission() { this->grantedPermission_ = nullptr;};
    inline const GetServiceInstanceResponseBody::GrantedPermission & getGrantedPermission() const { DARABONBA_PTR_GET_CONST(grantedPermission_, GetServiceInstanceResponseBody::GrantedPermission) };
    inline GetServiceInstanceResponseBody::GrantedPermission getGrantedPermission() { DARABONBA_PTR_GET(grantedPermission_, GetServiceInstanceResponseBody::GrantedPermission) };
    inline GetServiceInstanceResponseBody& setGrantedPermission(const GetServiceInstanceResponseBody::GrantedPermission & grantedPermission) { DARABONBA_PTR_SET_VALUE(grantedPermission_, grantedPermission) };
    inline GetServiceInstanceResponseBody& setGrantedPermission(GetServiceInstanceResponseBody::GrantedPermission && grantedPermission) { DARABONBA_PTR_SET_RVALUE(grantedPermission_, grantedPermission) };


    // isOperated Field Functions 
    bool hasIsOperated() const { return this->isOperated_ != nullptr;};
    void deleteIsOperated() { this->isOperated_ = nullptr;};
    inline bool getIsOperated() const { DARABONBA_PTR_GET_DEFAULT(isOperated_, false) };
    inline GetServiceInstanceResponseBody& setIsOperated(bool isOperated) { DARABONBA_PTR_SET_VALUE(isOperated_, isOperated) };


    // licenseEndTime Field Functions 
    bool hasLicenseEndTime() const { return this->licenseEndTime_ != nullptr;};
    void deleteLicenseEndTime() { this->licenseEndTime_ = nullptr;};
    inline string getLicenseEndTime() const { DARABONBA_PTR_GET_DEFAULT(licenseEndTime_, "") };
    inline GetServiceInstanceResponseBody& setLicenseEndTime(string licenseEndTime) { DARABONBA_PTR_SET_VALUE(licenseEndTime_, licenseEndTime) };


    // marketInstanceId Field Functions 
    bool hasMarketInstanceId() const { return this->marketInstanceId_ != nullptr;};
    void deleteMarketInstanceId() { this->marketInstanceId_ = nullptr;};
    inline string getMarketInstanceId() const { DARABONBA_PTR_GET_DEFAULT(marketInstanceId_, "") };
    inline GetServiceInstanceResponseBody& setMarketInstanceId(string marketInstanceId) { DARABONBA_PTR_SET_VALUE(marketInstanceId_, marketInstanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetServiceInstanceResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const GetServiceInstanceResponseBody::NetworkConfig & getNetworkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, GetServiceInstanceResponseBody::NetworkConfig) };
    inline GetServiceInstanceResponseBody::NetworkConfig getNetworkConfig() { DARABONBA_PTR_GET(networkConfig_, GetServiceInstanceResponseBody::NetworkConfig) };
    inline GetServiceInstanceResponseBody& setNetworkConfig(const GetServiceInstanceResponseBody::NetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline GetServiceInstanceResponseBody& setNetworkConfig(GetServiceInstanceResponseBody::NetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    // operatedServiceInstanceId Field Functions 
    bool hasOperatedServiceInstanceId() const { return this->operatedServiceInstanceId_ != nullptr;};
    void deleteOperatedServiceInstanceId() { this->operatedServiceInstanceId_ = nullptr;};
    inline string getOperatedServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(operatedServiceInstanceId_, "") };
    inline GetServiceInstanceResponseBody& setOperatedServiceInstanceId(string operatedServiceInstanceId) { DARABONBA_PTR_SET_VALUE(operatedServiceInstanceId_, operatedServiceInstanceId) };


    // operationEndTime Field Functions 
    bool hasOperationEndTime() const { return this->operationEndTime_ != nullptr;};
    void deleteOperationEndTime() { this->operationEndTime_ = nullptr;};
    inline string getOperationEndTime() const { DARABONBA_PTR_GET_DEFAULT(operationEndTime_, "") };
    inline GetServiceInstanceResponseBody& setOperationEndTime(string operationEndTime) { DARABONBA_PTR_SET_VALUE(operationEndTime_, operationEndTime) };


    // operationStartTime Field Functions 
    bool hasOperationStartTime() const { return this->operationStartTime_ != nullptr;};
    void deleteOperationStartTime() { this->operationStartTime_ = nullptr;};
    inline string getOperationStartTime() const { DARABONBA_PTR_GET_DEFAULT(operationStartTime_, "") };
    inline GetServiceInstanceResponseBody& setOperationStartTime(string operationStartTime) { DARABONBA_PTR_SET_VALUE(operationStartTime_, operationStartTime) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline GetServiceInstanceResponseBody& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline GetServiceInstanceResponseBody& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline GetServiceInstanceResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // policyNames Field Functions 
    bool hasPolicyNames() const { return this->policyNames_ != nullptr;};
    void deletePolicyNames() { this->policyNames_ = nullptr;};
    inline string getPolicyNames() const { DARABONBA_PTR_GET_DEFAULT(policyNames_, "") };
    inline GetServiceInstanceResponseBody& setPolicyNames(string policyNames) { DARABONBA_PTR_SET_VALUE(policyNames_, policyNames) };


    // predefinedParameterName Field Functions 
    bool hasPredefinedParameterName() const { return this->predefinedParameterName_ != nullptr;};
    void deletePredefinedParameterName() { this->predefinedParameterName_ = nullptr;};
    inline string getPredefinedParameterName() const { DARABONBA_PTR_GET_DEFAULT(predefinedParameterName_, "") };
    inline GetServiceInstanceResponseBody& setPredefinedParameterName(string predefinedParameterName) { DARABONBA_PTR_SET_VALUE(predefinedParameterName_, predefinedParameterName) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int64_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
    inline GetServiceInstanceResponseBody& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetServiceInstanceResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string getResources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline GetServiceInstanceResponseBody& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline const GetServiceInstanceResponseBody::Service & getService() const { DARABONBA_PTR_GET_CONST(service_, GetServiceInstanceResponseBody::Service) };
    inline GetServiceInstanceResponseBody::Service getService() { DARABONBA_PTR_GET(service_, GetServiceInstanceResponseBody::Service) };
    inline GetServiceInstanceResponseBody& setService(const GetServiceInstanceResponseBody::Service & service) { DARABONBA_PTR_SET_VALUE(service_, service) };
    inline GetServiceInstanceResponseBody& setService(GetServiceInstanceResponseBody::Service && service) { DARABONBA_PTR_SET_RVALUE(service_, service) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline GetServiceInstanceResponseBody& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetServiceInstanceResponseBody& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetServiceInstanceResponseBody& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetServiceInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDetail Field Functions 
    bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
    void deleteStatusDetail() { this->statusDetail_ = nullptr;};
    inline string getStatusDetail() const { DARABONBA_PTR_GET_DEFAULT(statusDetail_, "") };
    inline GetServiceInstanceResponseBody& setStatusDetail(string statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };


    // supplierUid Field Functions 
    bool hasSupplierUid() const { return this->supplierUid_ != nullptr;};
    void deleteSupplierUid() { this->supplierUid_ = nullptr;};
    inline int64_t getSupplierUid() const { DARABONBA_PTR_GET_DEFAULT(supplierUid_, 0L) };
    inline GetServiceInstanceResponseBody& setSupplierUid(int64_t supplierUid) { DARABONBA_PTR_SET_VALUE(supplierUid_, supplierUid) };


    // supportTrialToPrivate Field Functions 
    bool hasSupportTrialToPrivate() const { return this->supportTrialToPrivate_ != nullptr;};
    void deleteSupportTrialToPrivate() { this->supportTrialToPrivate_ = nullptr;};
    inline bool getSupportTrialToPrivate() const { DARABONBA_PTR_GET_DEFAULT(supportTrialToPrivate_, false) };
    inline GetServiceInstanceResponseBody& setSupportTrialToPrivate(bool supportTrialToPrivate) { DARABONBA_PTR_SET_VALUE(supportTrialToPrivate_, supportTrialToPrivate) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetServiceInstanceResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetServiceInstanceResponseBody::Tags>) };
    inline vector<GetServiceInstanceResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetServiceInstanceResponseBody::Tags>) };
    inline GetServiceInstanceResponseBody& setTags(const vector<GetServiceInstanceResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetServiceInstanceResponseBody& setTags(vector<GetServiceInstanceResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetServiceInstanceResponseBody& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetServiceInstanceResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline GetServiceInstanceResponseBody& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The business state of the service instance. Valid values:
    // 
    // *   Normal
    // *   Renewing
    // *   RenewFailed
    // *   Expired
    shared_ptr<string> bizStatus_ {};
    // Cloud Marketplace additional billing items.
    shared_ptr<string> components_ {};
    // The time when the serviceInstance was created.
    shared_ptr<string> createTime_ {};
    // Indicates whether the service instance supports the operation feature. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> enableInstanceOps_ {};
    // Whether to enable Prometheus monitoring.
    shared_ptr<bool> enableUserPrometheus_ {};
    // The expiration time of service instance.
    shared_ptr<string> endTime_ {};
    // The URL of the Grafana dashboard.
    shared_ptr<string> grafanaDashBoardUrl_ {};
    shared_ptr<GetServiceInstanceResponseBody::GrantedPermission> grantedPermission_ {};
    // Indicates whether the hosted O\\&M feature is enabled for the service instance. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> isOperated_ {};
    // The expiration time of licence.
    shared_ptr<string> licenseEndTime_ {};
    // The market Instance ID.
    shared_ptr<string> marketInstanceId_ {};
    // The name of the service instance.
    shared_ptr<string> name_ {};
    // The network configurations.
    // 
    // >  This parameter is discontinued.
    shared_ptr<GetServiceInstanceResponseBody::NetworkConfig> networkConfig_ {};
    // The serviceInstance  to be operated.
    shared_ptr<string> operatedServiceInstanceId_ {};
    // The operation end time.
    shared_ptr<string> operationEndTime_ {};
    // The operation start time.
    shared_ptr<string> operationStartTime_ {};
    // The outputs returned from creating the service instance.
    // 
    // *   If the service is deployed by using a ROS template, all output fields of the template are returned.
    // *   If the service is deployed by calling an SPI operation, the output fields of the service provider and for the Compute Nest additional features are returned.
    shared_ptr<string> outputs_ {};
    // The parameters configured for the service instance.
    shared_ptr<string> parameters_ {};
    // The billing method of the instance for market. Valid values:
    // 
    // *   Permanent: Permanent purchase
    // *   Subscription: Subscription.
    // *   PayAsYouGo: Pay-as-you-go.
    // *   CustomFixTime: Merchant custom fixed duration.
    shared_ptr<string> payType_ {};
    shared_ptr<string> policyNames_ {};
    // The package name.
    shared_ptr<string> predefinedParameterName_ {};
    // The deployment progress of the service instance. Unit: percentage.
    shared_ptr<int64_t> progress_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The resources.
    shared_ptr<string> resources_ {};
    // The service details.
    shared_ptr<GetServiceInstanceResponseBody::Service> service_ {};
    // The ID of the service instance.
    shared_ptr<string> serviceInstanceId_ {};
    // The type of the service. Valid values:
    // 
    // - private: The service is a private service and is deployed within the account of a customer.
    // - managed: The service is a fully managed service and is deployed within the account of a service provider.
    // - operation: The service is a hosted O&M service.
    shared_ptr<string> serviceType_ {};
    // The source of the serviceInstance. Valid values:
    // - User
    // - Market
    // - Supplier
    shared_ptr<string> source_ {};
    // The deploy status of the serviceInstance. Valid values:
    // - Created
    // - Deploying
    // - DeployedFailed
    // - Deployed
    // - Upgrading
    // - Deleting
    // - Deleted
    // - DeletedFailed
    shared_ptr<string> status_ {};
    // The description of the deployment state of the service instance.
    shared_ptr<string> statusDetail_ {};
    // The Alibaba Cloud account ID of the service provider.
    shared_ptr<int64_t> supplierUid_ {};
    // Is it supported to convert from trial to private
    shared_ptr<bool> supportTrialToPrivate_ {};
    // The tags.
    shared_ptr<vector<GetServiceInstanceResponseBody::Tags>> tags_ {};
    // The template name.
    shared_ptr<string> templateName_ {};
    // The time when the serviceInstance  was last updated.
    shared_ptr<string> updateTime_ {};
    // The AliUid of the user.
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif

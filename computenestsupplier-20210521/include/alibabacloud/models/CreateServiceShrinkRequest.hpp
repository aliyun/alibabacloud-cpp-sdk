// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class CreateServiceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmMetadata, alarmMetadata_);
      DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_TO_JSON(BuildParameters, buildParameters_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ComplianceMetadata, complianceMetadataShrink_);
      DARABONBA_PTR_TO_JSON(DeployMetadata, deployMetadata_);
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(IsSupportOperated, isSupportOperated_);
      DARABONBA_PTR_TO_JSON(LicenseMetadata, licenseMetadata_);
      DARABONBA_PTR_TO_JSON(LogMetadata, logMetadata_);
      DARABONBA_PTR_TO_JSON(OperationMetadata, operationMetadata_);
      DARABONBA_PTR_TO_JSON(PolicyNames, policyNames_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resellable, resellable_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInfo, serviceInfo_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(SourceServiceId, sourceServiceId_);
      DARABONBA_PTR_TO_JSON(SourceServiceVersion, sourceServiceVersion_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TenantType, tenantType_);
      DARABONBA_PTR_TO_JSON(TrialDuration, trialDuration_);
      DARABONBA_PTR_TO_JSON(UpgradeMetadata, upgradeMetadata_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmMetadata, alarmMetadata_);
      DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_FROM_JSON(BuildParameters, buildParameters_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ComplianceMetadata, complianceMetadataShrink_);
      DARABONBA_PTR_FROM_JSON(DeployMetadata, deployMetadata_);
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(IsSupportOperated, isSupportOperated_);
      DARABONBA_PTR_FROM_JSON(LicenseMetadata, licenseMetadata_);
      DARABONBA_PTR_FROM_JSON(LogMetadata, logMetadata_);
      DARABONBA_PTR_FROM_JSON(OperationMetadata, operationMetadata_);
      DARABONBA_PTR_FROM_JSON(PolicyNames, policyNames_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resellable, resellable_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInfo, serviceInfo_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(SourceServiceId, sourceServiceId_);
      DARABONBA_PTR_FROM_JSON(SourceServiceVersion, sourceServiceVersion_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TenantType, tenantType_);
      DARABONBA_PTR_FROM_JSON(TrialDuration, trialDuration_);
      DARABONBA_PTR_FROM_JSON(UpgradeMetadata, upgradeMetadata_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    CreateServiceShrinkRequest() = default ;
    CreateServiceShrinkRequest(const CreateServiceShrinkRequest &) = default ;
    CreateServiceShrinkRequest(CreateServiceShrinkRequest &&) = default ;
    CreateServiceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceShrinkRequest() = default ;
    CreateServiceShrinkRequest& operator=(const CreateServiceShrinkRequest &) = default ;
    CreateServiceShrinkRequest& operator=(CreateServiceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class ServiceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Agreements, agreements_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(Locale, locale_);
        DARABONBA_PTR_TO_JSON(LongDescriptionUrl, longDescriptionUrl_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ShortDescription, shortDescription_);
        DARABONBA_PTR_TO_JSON(Softwares, softwares_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Agreements, agreements_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
        DARABONBA_PTR_FROM_JSON(Locale, locale_);
        DARABONBA_PTR_FROM_JSON(LongDescriptionUrl, longDescriptionUrl_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ShortDescription, shortDescription_);
        DARABONBA_PTR_FROM_JSON(Softwares, softwares_);
      };
      ServiceInfo() = default ;
      ServiceInfo(const ServiceInfo &) = default ;
      ServiceInfo(ServiceInfo &&) = default ;
      ServiceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceInfo() = default ;
      ServiceInfo& operator=(const ServiceInfo &) = default ;
      ServiceInfo& operator=(ServiceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Softwares : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Softwares& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Softwares& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        Softwares() = default ;
        Softwares(const Softwares &) = default ;
        Softwares(Softwares &&) = default ;
        Softwares(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Softwares() = default ;
        Softwares& operator=(const Softwares &) = default ;
        Softwares& operator=(Softwares &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->version_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Softwares& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Softwares& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The name of the software.
        shared_ptr<string> name_ {};
        // The version of the software.
        shared_ptr<string> version_ {};
      };

      class Agreements : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Agreements& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Agreements& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        Agreements() = default ;
        Agreements(const Agreements &) = default ;
        Agreements(Agreements &&) = default ;
        Agreements(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Agreements() = default ;
        Agreements& operator=(const Agreements &) = default ;
        Agreements& operator=(Agreements &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->url_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Agreements& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Agreements& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // Protocol name.
        shared_ptr<string> name_ {};
        // Protocol url.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->agreements_ == nullptr
        && this->image_ == nullptr && this->locale_ == nullptr && this->longDescriptionUrl_ == nullptr && this->name_ == nullptr && this->shortDescription_ == nullptr
        && this->softwares_ == nullptr; };
      // agreements Field Functions 
      bool hasAgreements() const { return this->agreements_ != nullptr;};
      void deleteAgreements() { this->agreements_ = nullptr;};
      inline const vector<ServiceInfo::Agreements> & getAgreements() const { DARABONBA_PTR_GET_CONST(agreements_, vector<ServiceInfo::Agreements>) };
      inline vector<ServiceInfo::Agreements> getAgreements() { DARABONBA_PTR_GET(agreements_, vector<ServiceInfo::Agreements>) };
      inline ServiceInfo& setAgreements(const vector<ServiceInfo::Agreements> & agreements) { DARABONBA_PTR_SET_VALUE(agreements_, agreements) };
      inline ServiceInfo& setAgreements(vector<ServiceInfo::Agreements> && agreements) { DARABONBA_PTR_SET_RVALUE(agreements_, agreements) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
      inline ServiceInfo& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


      // locale Field Functions 
      bool hasLocale() const { return this->locale_ != nullptr;};
      void deleteLocale() { this->locale_ = nullptr;};
      inline string getLocale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
      inline ServiceInfo& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


      // longDescriptionUrl Field Functions 
      bool hasLongDescriptionUrl() const { return this->longDescriptionUrl_ != nullptr;};
      void deleteLongDescriptionUrl() { this->longDescriptionUrl_ = nullptr;};
      inline string getLongDescriptionUrl() const { DARABONBA_PTR_GET_DEFAULT(longDescriptionUrl_, "") };
      inline ServiceInfo& setLongDescriptionUrl(string longDescriptionUrl) { DARABONBA_PTR_SET_VALUE(longDescriptionUrl_, longDescriptionUrl) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ServiceInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // shortDescription Field Functions 
      bool hasShortDescription() const { return this->shortDescription_ != nullptr;};
      void deleteShortDescription() { this->shortDescription_ = nullptr;};
      inline string getShortDescription() const { DARABONBA_PTR_GET_DEFAULT(shortDescription_, "") };
      inline ServiceInfo& setShortDescription(string shortDescription) { DARABONBA_PTR_SET_VALUE(shortDescription_, shortDescription) };


      // softwares Field Functions 
      bool hasSoftwares() const { return this->softwares_ != nullptr;};
      void deleteSoftwares() { this->softwares_ = nullptr;};
      inline const vector<ServiceInfo::Softwares> & getSoftwares() const { DARABONBA_PTR_GET_CONST(softwares_, vector<ServiceInfo::Softwares>) };
      inline vector<ServiceInfo::Softwares> getSoftwares() { DARABONBA_PTR_GET(softwares_, vector<ServiceInfo::Softwares>) };
      inline ServiceInfo& setSoftwares(const vector<ServiceInfo::Softwares> & softwares) { DARABONBA_PTR_SET_VALUE(softwares_, softwares) };
      inline ServiceInfo& setSoftwares(vector<ServiceInfo::Softwares> && softwares) { DARABONBA_PTR_SET_RVALUE(softwares_, softwares) };


    protected:
      // Protocol document information about the service.
      shared_ptr<vector<ServiceInfo::Agreements>> agreements_ {};
      // The URL of the service icon.
      shared_ptr<string> image_ {};
      // The language of the service. Valid values:
      // 
      // *   zh-CN: Chinese
      // *   en-US: English
      // 
      // This parameter is required.
      shared_ptr<string> locale_ {};
      // The URL of the detailed description of the service.
      shared_ptr<string> longDescriptionUrl_ {};
      // The service name.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The description of the service.
      shared_ptr<string> shortDescription_ {};
      // The list of the software in the service.
      shared_ptr<vector<ServiceInfo::Softwares>> softwares_ {};
    };

    virtual bool empty() const override { return this->alarmMetadata_ == nullptr
        && this->approvalType_ == nullptr && this->buildParameters_ == nullptr && this->clientToken_ == nullptr && this->complianceMetadataShrink_ == nullptr && this->deployMetadata_ == nullptr
        && this->deployType_ == nullptr && this->dryRun_ == nullptr && this->duration_ == nullptr && this->isSupportOperated_ == nullptr && this->licenseMetadata_ == nullptr
        && this->logMetadata_ == nullptr && this->operationMetadata_ == nullptr && this->policyNames_ == nullptr && this->regionId_ == nullptr && this->resellable_ == nullptr
        && this->resourceGroupId_ == nullptr && this->serviceId_ == nullptr && this->serviceInfo_ == nullptr && this->serviceType_ == nullptr && this->shareType_ == nullptr
        && this->sourceServiceId_ == nullptr && this->sourceServiceVersion_ == nullptr && this->tag_ == nullptr && this->tenantType_ == nullptr && this->trialDuration_ == nullptr
        && this->upgradeMetadata_ == nullptr && this->versionName_ == nullptr; };
    // alarmMetadata Field Functions 
    bool hasAlarmMetadata() const { return this->alarmMetadata_ != nullptr;};
    void deleteAlarmMetadata() { this->alarmMetadata_ = nullptr;};
    inline string getAlarmMetadata() const { DARABONBA_PTR_GET_DEFAULT(alarmMetadata_, "") };
    inline CreateServiceShrinkRequest& setAlarmMetadata(string alarmMetadata) { DARABONBA_PTR_SET_VALUE(alarmMetadata_, alarmMetadata) };


    // approvalType Field Functions 
    bool hasApprovalType() const { return this->approvalType_ != nullptr;};
    void deleteApprovalType() { this->approvalType_ = nullptr;};
    inline string getApprovalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, "") };
    inline CreateServiceShrinkRequest& setApprovalType(string approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


    // buildParameters Field Functions 
    bool hasBuildParameters() const { return this->buildParameters_ != nullptr;};
    void deleteBuildParameters() { this->buildParameters_ = nullptr;};
    inline string getBuildParameters() const { DARABONBA_PTR_GET_DEFAULT(buildParameters_, "") };
    inline CreateServiceShrinkRequest& setBuildParameters(string buildParameters) { DARABONBA_PTR_SET_VALUE(buildParameters_, buildParameters) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateServiceShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // complianceMetadataShrink Field Functions 
    bool hasComplianceMetadataShrink() const { return this->complianceMetadataShrink_ != nullptr;};
    void deleteComplianceMetadataShrink() { this->complianceMetadataShrink_ = nullptr;};
    inline string getComplianceMetadataShrink() const { DARABONBA_PTR_GET_DEFAULT(complianceMetadataShrink_, "") };
    inline CreateServiceShrinkRequest& setComplianceMetadataShrink(string complianceMetadataShrink) { DARABONBA_PTR_SET_VALUE(complianceMetadataShrink_, complianceMetadataShrink) };


    // deployMetadata Field Functions 
    bool hasDeployMetadata() const { return this->deployMetadata_ != nullptr;};
    void deleteDeployMetadata() { this->deployMetadata_ = nullptr;};
    inline string getDeployMetadata() const { DARABONBA_PTR_GET_DEFAULT(deployMetadata_, "") };
    inline CreateServiceShrinkRequest& setDeployMetadata(string deployMetadata) { DARABONBA_PTR_SET_VALUE(deployMetadata_, deployMetadata) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline string getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
    inline CreateServiceShrinkRequest& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateServiceShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline CreateServiceShrinkRequest& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // isSupportOperated Field Functions 
    bool hasIsSupportOperated() const { return this->isSupportOperated_ != nullptr;};
    void deleteIsSupportOperated() { this->isSupportOperated_ = nullptr;};
    inline bool getIsSupportOperated() const { DARABONBA_PTR_GET_DEFAULT(isSupportOperated_, false) };
    inline CreateServiceShrinkRequest& setIsSupportOperated(bool isSupportOperated) { DARABONBA_PTR_SET_VALUE(isSupportOperated_, isSupportOperated) };


    // licenseMetadata Field Functions 
    bool hasLicenseMetadata() const { return this->licenseMetadata_ != nullptr;};
    void deleteLicenseMetadata() { this->licenseMetadata_ = nullptr;};
    inline string getLicenseMetadata() const { DARABONBA_PTR_GET_DEFAULT(licenseMetadata_, "") };
    inline CreateServiceShrinkRequest& setLicenseMetadata(string licenseMetadata) { DARABONBA_PTR_SET_VALUE(licenseMetadata_, licenseMetadata) };


    // logMetadata Field Functions 
    bool hasLogMetadata() const { return this->logMetadata_ != nullptr;};
    void deleteLogMetadata() { this->logMetadata_ = nullptr;};
    inline string getLogMetadata() const { DARABONBA_PTR_GET_DEFAULT(logMetadata_, "") };
    inline CreateServiceShrinkRequest& setLogMetadata(string logMetadata) { DARABONBA_PTR_SET_VALUE(logMetadata_, logMetadata) };


    // operationMetadata Field Functions 
    bool hasOperationMetadata() const { return this->operationMetadata_ != nullptr;};
    void deleteOperationMetadata() { this->operationMetadata_ = nullptr;};
    inline string getOperationMetadata() const { DARABONBA_PTR_GET_DEFAULT(operationMetadata_, "") };
    inline CreateServiceShrinkRequest& setOperationMetadata(string operationMetadata) { DARABONBA_PTR_SET_VALUE(operationMetadata_, operationMetadata) };


    // policyNames Field Functions 
    bool hasPolicyNames() const { return this->policyNames_ != nullptr;};
    void deletePolicyNames() { this->policyNames_ = nullptr;};
    inline string getPolicyNames() const { DARABONBA_PTR_GET_DEFAULT(policyNames_, "") };
    inline CreateServiceShrinkRequest& setPolicyNames(string policyNames) { DARABONBA_PTR_SET_VALUE(policyNames_, policyNames) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateServiceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellable Field Functions 
    bool hasResellable() const { return this->resellable_ != nullptr;};
    void deleteResellable() { this->resellable_ = nullptr;};
    inline bool getResellable() const { DARABONBA_PTR_GET_DEFAULT(resellable_, false) };
    inline CreateServiceShrinkRequest& setResellable(bool resellable) { DARABONBA_PTR_SET_VALUE(resellable_, resellable) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateServiceShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateServiceShrinkRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInfo Field Functions 
    bool hasServiceInfo() const { return this->serviceInfo_ != nullptr;};
    void deleteServiceInfo() { this->serviceInfo_ = nullptr;};
    inline const vector<CreateServiceShrinkRequest::ServiceInfo> & getServiceInfo() const { DARABONBA_PTR_GET_CONST(serviceInfo_, vector<CreateServiceShrinkRequest::ServiceInfo>) };
    inline vector<CreateServiceShrinkRequest::ServiceInfo> getServiceInfo() { DARABONBA_PTR_GET(serviceInfo_, vector<CreateServiceShrinkRequest::ServiceInfo>) };
    inline CreateServiceShrinkRequest& setServiceInfo(const vector<CreateServiceShrinkRequest::ServiceInfo> & serviceInfo) { DARABONBA_PTR_SET_VALUE(serviceInfo_, serviceInfo) };
    inline CreateServiceShrinkRequest& setServiceInfo(vector<CreateServiceShrinkRequest::ServiceInfo> && serviceInfo) { DARABONBA_PTR_SET_RVALUE(serviceInfo_, serviceInfo) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline CreateServiceShrinkRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline CreateServiceShrinkRequest& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // sourceServiceId Field Functions 
    bool hasSourceServiceId() const { return this->sourceServiceId_ != nullptr;};
    void deleteSourceServiceId() { this->sourceServiceId_ = nullptr;};
    inline string getSourceServiceId() const { DARABONBA_PTR_GET_DEFAULT(sourceServiceId_, "") };
    inline CreateServiceShrinkRequest& setSourceServiceId(string sourceServiceId) { DARABONBA_PTR_SET_VALUE(sourceServiceId_, sourceServiceId) };


    // sourceServiceVersion Field Functions 
    bool hasSourceServiceVersion() const { return this->sourceServiceVersion_ != nullptr;};
    void deleteSourceServiceVersion() { this->sourceServiceVersion_ = nullptr;};
    inline string getSourceServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceServiceVersion_, "") };
    inline CreateServiceShrinkRequest& setSourceServiceVersion(string sourceServiceVersion) { DARABONBA_PTR_SET_VALUE(sourceServiceVersion_, sourceServiceVersion) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateServiceShrinkRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateServiceShrinkRequest::Tag>) };
    inline vector<CreateServiceShrinkRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateServiceShrinkRequest::Tag>) };
    inline CreateServiceShrinkRequest& setTag(const vector<CreateServiceShrinkRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateServiceShrinkRequest& setTag(vector<CreateServiceShrinkRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tenantType Field Functions 
    bool hasTenantType() const { return this->tenantType_ != nullptr;};
    void deleteTenantType() { this->tenantType_ = nullptr;};
    inline string getTenantType() const { DARABONBA_PTR_GET_DEFAULT(tenantType_, "") };
    inline CreateServiceShrinkRequest& setTenantType(string tenantType) { DARABONBA_PTR_SET_VALUE(tenantType_, tenantType) };


    // trialDuration Field Functions 
    bool hasTrialDuration() const { return this->trialDuration_ != nullptr;};
    void deleteTrialDuration() { this->trialDuration_ = nullptr;};
    inline int64_t getTrialDuration() const { DARABONBA_PTR_GET_DEFAULT(trialDuration_, 0L) };
    inline CreateServiceShrinkRequest& setTrialDuration(int64_t trialDuration) { DARABONBA_PTR_SET_VALUE(trialDuration_, trialDuration) };


    // upgradeMetadata Field Functions 
    bool hasUpgradeMetadata() const { return this->upgradeMetadata_ != nullptr;};
    void deleteUpgradeMetadata() { this->upgradeMetadata_ = nullptr;};
    inline string getUpgradeMetadata() const { DARABONBA_PTR_GET_DEFAULT(upgradeMetadata_, "") };
    inline CreateServiceShrinkRequest& setUpgradeMetadata(string upgradeMetadata) { DARABONBA_PTR_SET_VALUE(upgradeMetadata_, upgradeMetadata) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline CreateServiceShrinkRequest& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The alert configurations of the service.
    // 
    // >  This parameter takes effect only when you specify an alert policy for **PolicyNames**.
    shared_ptr<string> alarmMetadata_ {};
    // The approval type of the service usage application. Valid values:
    // 
    // *   Manual: The application is manually approved.
    // *   AutoPass: The application is automatically approved.
    shared_ptr<string> approvalType_ {};
    // The parameters for building the service
    shared_ptr<string> buildParameters_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    shared_ptr<string> clientToken_ {};
    // Compliance check metadata.
    shared_ptr<string> complianceMetadataShrink_ {};
    // The storage configurations of the service. The format in which the deployment information of a service is stored varies based on the deployment type of the service. In this case, the deployment information is stored in the JSON string format.
    shared_ptr<string> deployMetadata_ {};
    // The deployment type of the service. Valid values:
    // 
    // *   ros: The service is deployed by using Resource Orchestration Service (ROS).
    // *   terraform: The service is deployed by using Terraform.
    // *   ack: The service is deployed by using Container Service for Kubernetes (ACK).
    // *   spi: The service is deployed by calling a service provider interface (SPI).
    // *   operation: The service is deployed by using a hosted O\\&M service.
    // 
    // This parameter is required.
    shared_ptr<string> deployType_ {};
    // Specifies whether to perform only a dry run for the request to check information. Valid values:
    // 
    // *   true: performs a dry run for the request, but does not create a service.
    // *   false: performs a dry run for the request, and create a service if the request passes the dry run.
    shared_ptr<bool> dryRun_ {};
    // The duration for which hosted O\\&M is implemented. Unit: seconds.
    shared_ptr<int64_t> duration_ {};
    // Specifies whether to enable the hosted O\\&M feature for the service. Default value: false. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  This parameter is required if you set **ServiceType** to **private**.
    shared_ptr<bool> isSupportOperated_ {};
    // The license metadata.
    shared_ptr<string> licenseMetadata_ {};
    // The logging configurations.
    shared_ptr<string> logMetadata_ {};
    // The hosted O\\&M configurations.
    shared_ptr<string> operationMetadata_ {};
    // The policy name. The name can be up to 128 characters in length. Separate multiple names with commas (,). Only hosted O\\&M policies are supported.
    shared_ptr<string> policyNames_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Whether resell is supported.
    shared_ptr<bool> resellable_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The service ID.
    shared_ptr<string> serviceId_ {};
    // The service details.
    shared_ptr<vector<CreateServiceShrinkRequest::ServiceInfo>> serviceInfo_ {};
    // The service type. Valid values:
    // 
    // *   private: The service is a private service and is deployed within the account of a customer.
    // *   managed: The service is a fully managed service and is deployed within the account of a service provider.
    // *   operation: The service is a hosted O\\&M service.
    // *   poc: The service is a trial service.
    shared_ptr<string> serviceType_ {};
    // The permission type of the deployment URL. Valid values:
    // 
    // *   Public: All users can go to the URL to create a service instance or a trial service instance.
    // *   Restricted: Only users in the whitelist can go to the URL to create a service instance or a trial service instance.
    // *   OnlyFormalRestricted: Only users in the whitelist can go to the URL to create a service instance.
    // *   OnlyTrailRestricted: Only users in the whitelist can go to the URL to create a trial service instance.
    // *   Hidden: Users not in the whitelist cannot see the service details page when they go to the URL and cannot request deployment permissions.
    shared_ptr<string> shareType_ {};
    // The source service ID for resell。
    shared_ptr<string> sourceServiceId_ {};
    // The source service version for resell。
    shared_ptr<string> sourceServiceVersion_ {};
    // The custom tags.
    shared_ptr<vector<CreateServiceShrinkRequest::Tag>> tag_ {};
    // The type of the tenant. Valid values:
    // 
    // *   SingleTenant
    // *   MultiTenant
    shared_ptr<string> tenantType_ {};
    // The trial duration. Unit: day. The maximum trial duration cannot exceed 30 days.
    shared_ptr<int64_t> trialDuration_ {};
    // The metadata about the upgrade.
    shared_ptr<string> upgradeMetadata_ {};
    // The version name.
    shared_ptr<string> versionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif

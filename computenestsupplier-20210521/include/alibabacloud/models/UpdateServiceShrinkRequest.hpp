// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICESHRINKREQUEST_HPP_
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
  class UpdateServiceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmMetadata, alarmMetadata_);
      DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_TO_JSON(BuildParameters, buildParameters_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Commodity, commodityShrink_);
      DARABONBA_PTR_TO_JSON(ComplianceMetadata, complianceMetadataShrink_);
      DARABONBA_PTR_TO_JSON(DeployMetadata, deployMetadata_);
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(IsSupportOperated, isSupportOperated_);
      DARABONBA_PTR_TO_JSON(LicenseMetadata, licenseMetadata_);
      DARABONBA_PTR_TO_JSON(LogMetadata, logMetadata_);
      DARABONBA_PTR_TO_JSON(OperationMetadata, operationMetadata_);
      DARABONBA_PTR_TO_JSON(PolicyNames, policyNames_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resellable, resellable_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInfo, serviceInfo_);
      DARABONBA_PTR_TO_JSON(ServiceLocaleConfigs, serviceLocaleConfigs_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(TenantType, tenantType_);
      DARABONBA_PTR_TO_JSON(TrialDuration, trialDuration_);
      DARABONBA_PTR_TO_JSON(UpdateOption, updateOptionShrink_);
      DARABONBA_PTR_TO_JSON(UpgradeMetadata, upgradeMetadata_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmMetadata, alarmMetadata_);
      DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_FROM_JSON(BuildParameters, buildParameters_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Commodity, commodityShrink_);
      DARABONBA_PTR_FROM_JSON(ComplianceMetadata, complianceMetadataShrink_);
      DARABONBA_PTR_FROM_JSON(DeployMetadata, deployMetadata_);
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(IsSupportOperated, isSupportOperated_);
      DARABONBA_PTR_FROM_JSON(LicenseMetadata, licenseMetadata_);
      DARABONBA_PTR_FROM_JSON(LogMetadata, logMetadata_);
      DARABONBA_PTR_FROM_JSON(OperationMetadata, operationMetadata_);
      DARABONBA_PTR_FROM_JSON(PolicyNames, policyNames_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resellable, resellable_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInfo, serviceInfo_);
      DARABONBA_PTR_FROM_JSON(ServiceLocaleConfigs, serviceLocaleConfigs_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(TenantType, tenantType_);
      DARABONBA_PTR_FROM_JSON(TrialDuration, trialDuration_);
      DARABONBA_PTR_FROM_JSON(UpdateOption, updateOptionShrink_);
      DARABONBA_PTR_FROM_JSON(UpgradeMetadata, upgradeMetadata_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    UpdateServiceShrinkRequest() = default ;
    UpdateServiceShrinkRequest(const UpdateServiceShrinkRequest &) = default ;
    UpdateServiceShrinkRequest(UpdateServiceShrinkRequest &&) = default ;
    UpdateServiceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceShrinkRequest() = default ;
    UpdateServiceShrinkRequest& operator=(const UpdateServiceShrinkRequest &) = default ;
    UpdateServiceShrinkRequest& operator=(UpdateServiceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceLocaleConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceLocaleConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(EnValue, enValue_);
        DARABONBA_PTR_TO_JSON(OriginalValue, originalValue_);
        DARABONBA_PTR_TO_JSON(ZhValue, zhValue_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceLocaleConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(EnValue, enValue_);
        DARABONBA_PTR_FROM_JSON(OriginalValue, originalValue_);
        DARABONBA_PTR_FROM_JSON(ZhValue, zhValue_);
      };
      ServiceLocaleConfigs() = default ;
      ServiceLocaleConfigs(const ServiceLocaleConfigs &) = default ;
      ServiceLocaleConfigs(ServiceLocaleConfigs &&) = default ;
      ServiceLocaleConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceLocaleConfigs() = default ;
      ServiceLocaleConfigs& operator=(const ServiceLocaleConfigs &) = default ;
      ServiceLocaleConfigs& operator=(ServiceLocaleConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enValue_ == nullptr
        && this->originalValue_ == nullptr && this->zhValue_ == nullptr; };
      // enValue Field Functions 
      bool hasEnValue() const { return this->enValue_ != nullptr;};
      void deleteEnValue() { this->enValue_ = nullptr;};
      inline string getEnValue() const { DARABONBA_PTR_GET_DEFAULT(enValue_, "") };
      inline ServiceLocaleConfigs& setEnValue(string enValue) { DARABONBA_PTR_SET_VALUE(enValue_, enValue) };


      // originalValue Field Functions 
      bool hasOriginalValue() const { return this->originalValue_ != nullptr;};
      void deleteOriginalValue() { this->originalValue_ = nullptr;};
      inline string getOriginalValue() const { DARABONBA_PTR_GET_DEFAULT(originalValue_, "") };
      inline ServiceLocaleConfigs& setOriginalValue(string originalValue) { DARABONBA_PTR_SET_VALUE(originalValue_, originalValue) };


      // zhValue Field Functions 
      bool hasZhValue() const { return this->zhValue_ != nullptr;};
      void deleteZhValue() { this->zhValue_ = nullptr;};
      inline string getZhValue() const { DARABONBA_PTR_GET_DEFAULT(zhValue_, "") };
      inline ServiceLocaleConfigs& setZhValue(string zhValue) { DARABONBA_PTR_SET_VALUE(zhValue_, zhValue) };


    protected:
      // The English value of the business information.
      shared_ptr<string> enValue_ {};
      // The raw data value of the business information.
      shared_ptr<string> originalValue_ {};
      // The Chinese value of the business information.
      shared_ptr<string> zhValue_ {};
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
        // The software name.
        shared_ptr<string> name_ {};
        // The software version.
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
        // The name of the agreement document.
        shared_ptr<string> name_ {};
        // The URL of the agreement.
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
      // The information about the service agreements.
      shared_ptr<vector<ServiceInfo::Agreements>> agreements_ {};
      // The URL of the service icon.
      shared_ptr<string> image_ {};
      // The language of the service. Valid values:
      // 
      // - zh-CN: Chinese.
      // 
      // - en-US: English.
      shared_ptr<string> locale_ {};
      // The URL of the detailed description of the service.
      shared_ptr<string> longDescriptionUrl_ {};
      // The service name.
      shared_ptr<string> name_ {};
      // The description of the service.
      shared_ptr<string> shortDescription_ {};
      // The information about the software used in the service.
      shared_ptr<vector<ServiceInfo::Softwares>> softwares_ {};
    };

    virtual bool empty() const override { return this->alarmMetadata_ == nullptr
        && this->approvalType_ == nullptr && this->buildParameters_ == nullptr && this->clientToken_ == nullptr && this->commodityShrink_ == nullptr && this->complianceMetadataShrink_ == nullptr
        && this->deployMetadata_ == nullptr && this->deployType_ == nullptr && this->dryRun_ == nullptr && this->duration_ == nullptr && this->isDefault_ == nullptr
        && this->isSupportOperated_ == nullptr && this->licenseMetadata_ == nullptr && this->logMetadata_ == nullptr && this->operationMetadata_ == nullptr && this->policyNames_ == nullptr
        && this->regionId_ == nullptr && this->resellable_ == nullptr && this->serviceId_ == nullptr && this->serviceInfo_ == nullptr && this->serviceLocaleConfigs_ == nullptr
        && this->serviceType_ == nullptr && this->serviceVersion_ == nullptr && this->shareType_ == nullptr && this->tenantType_ == nullptr && this->trialDuration_ == nullptr
        && this->updateOptionShrink_ == nullptr && this->upgradeMetadata_ == nullptr && this->versionName_ == nullptr; };
    // alarmMetadata Field Functions 
    bool hasAlarmMetadata() const { return this->alarmMetadata_ != nullptr;};
    void deleteAlarmMetadata() { this->alarmMetadata_ = nullptr;};
    inline string getAlarmMetadata() const { DARABONBA_PTR_GET_DEFAULT(alarmMetadata_, "") };
    inline UpdateServiceShrinkRequest& setAlarmMetadata(string alarmMetadata) { DARABONBA_PTR_SET_VALUE(alarmMetadata_, alarmMetadata) };


    // approvalType Field Functions 
    bool hasApprovalType() const { return this->approvalType_ != nullptr;};
    void deleteApprovalType() { this->approvalType_ = nullptr;};
    inline string getApprovalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, "") };
    inline UpdateServiceShrinkRequest& setApprovalType(string approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


    // buildParameters Field Functions 
    bool hasBuildParameters() const { return this->buildParameters_ != nullptr;};
    void deleteBuildParameters() { this->buildParameters_ = nullptr;};
    inline string getBuildParameters() const { DARABONBA_PTR_GET_DEFAULT(buildParameters_, "") };
    inline UpdateServiceShrinkRequest& setBuildParameters(string buildParameters) { DARABONBA_PTR_SET_VALUE(buildParameters_, buildParameters) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateServiceShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commodityShrink Field Functions 
    bool hasCommodityShrink() const { return this->commodityShrink_ != nullptr;};
    void deleteCommodityShrink() { this->commodityShrink_ = nullptr;};
    inline string getCommodityShrink() const { DARABONBA_PTR_GET_DEFAULT(commodityShrink_, "") };
    inline UpdateServiceShrinkRequest& setCommodityShrink(string commodityShrink) { DARABONBA_PTR_SET_VALUE(commodityShrink_, commodityShrink) };


    // complianceMetadataShrink Field Functions 
    bool hasComplianceMetadataShrink() const { return this->complianceMetadataShrink_ != nullptr;};
    void deleteComplianceMetadataShrink() { this->complianceMetadataShrink_ = nullptr;};
    inline string getComplianceMetadataShrink() const { DARABONBA_PTR_GET_DEFAULT(complianceMetadataShrink_, "") };
    inline UpdateServiceShrinkRequest& setComplianceMetadataShrink(string complianceMetadataShrink) { DARABONBA_PTR_SET_VALUE(complianceMetadataShrink_, complianceMetadataShrink) };


    // deployMetadata Field Functions 
    bool hasDeployMetadata() const { return this->deployMetadata_ != nullptr;};
    void deleteDeployMetadata() { this->deployMetadata_ = nullptr;};
    inline string getDeployMetadata() const { DARABONBA_PTR_GET_DEFAULT(deployMetadata_, "") };
    inline UpdateServiceShrinkRequest& setDeployMetadata(string deployMetadata) { DARABONBA_PTR_SET_VALUE(deployMetadata_, deployMetadata) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline string getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
    inline UpdateServiceShrinkRequest& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateServiceShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline UpdateServiceShrinkRequest& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline UpdateServiceShrinkRequest& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // isSupportOperated Field Functions 
    bool hasIsSupportOperated() const { return this->isSupportOperated_ != nullptr;};
    void deleteIsSupportOperated() { this->isSupportOperated_ = nullptr;};
    inline bool getIsSupportOperated() const { DARABONBA_PTR_GET_DEFAULT(isSupportOperated_, false) };
    inline UpdateServiceShrinkRequest& setIsSupportOperated(bool isSupportOperated) { DARABONBA_PTR_SET_VALUE(isSupportOperated_, isSupportOperated) };


    // licenseMetadata Field Functions 
    bool hasLicenseMetadata() const { return this->licenseMetadata_ != nullptr;};
    void deleteLicenseMetadata() { this->licenseMetadata_ = nullptr;};
    inline string getLicenseMetadata() const { DARABONBA_PTR_GET_DEFAULT(licenseMetadata_, "") };
    inline UpdateServiceShrinkRequest& setLicenseMetadata(string licenseMetadata) { DARABONBA_PTR_SET_VALUE(licenseMetadata_, licenseMetadata) };


    // logMetadata Field Functions 
    bool hasLogMetadata() const { return this->logMetadata_ != nullptr;};
    void deleteLogMetadata() { this->logMetadata_ = nullptr;};
    inline string getLogMetadata() const { DARABONBA_PTR_GET_DEFAULT(logMetadata_, "") };
    inline UpdateServiceShrinkRequest& setLogMetadata(string logMetadata) { DARABONBA_PTR_SET_VALUE(logMetadata_, logMetadata) };


    // operationMetadata Field Functions 
    bool hasOperationMetadata() const { return this->operationMetadata_ != nullptr;};
    void deleteOperationMetadata() { this->operationMetadata_ = nullptr;};
    inline string getOperationMetadata() const { DARABONBA_PTR_GET_DEFAULT(operationMetadata_, "") };
    inline UpdateServiceShrinkRequest& setOperationMetadata(string operationMetadata) { DARABONBA_PTR_SET_VALUE(operationMetadata_, operationMetadata) };


    // policyNames Field Functions 
    bool hasPolicyNames() const { return this->policyNames_ != nullptr;};
    void deletePolicyNames() { this->policyNames_ = nullptr;};
    inline string getPolicyNames() const { DARABONBA_PTR_GET_DEFAULT(policyNames_, "") };
    inline UpdateServiceShrinkRequest& setPolicyNames(string policyNames) { DARABONBA_PTR_SET_VALUE(policyNames_, policyNames) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateServiceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellable Field Functions 
    bool hasResellable() const { return this->resellable_ != nullptr;};
    void deleteResellable() { this->resellable_ = nullptr;};
    inline bool getResellable() const { DARABONBA_PTR_GET_DEFAULT(resellable_, false) };
    inline UpdateServiceShrinkRequest& setResellable(bool resellable) { DARABONBA_PTR_SET_VALUE(resellable_, resellable) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline UpdateServiceShrinkRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInfo Field Functions 
    bool hasServiceInfo() const { return this->serviceInfo_ != nullptr;};
    void deleteServiceInfo() { this->serviceInfo_ = nullptr;};
    inline const vector<UpdateServiceShrinkRequest::ServiceInfo> & getServiceInfo() const { DARABONBA_PTR_GET_CONST(serviceInfo_, vector<UpdateServiceShrinkRequest::ServiceInfo>) };
    inline vector<UpdateServiceShrinkRequest::ServiceInfo> getServiceInfo() { DARABONBA_PTR_GET(serviceInfo_, vector<UpdateServiceShrinkRequest::ServiceInfo>) };
    inline UpdateServiceShrinkRequest& setServiceInfo(const vector<UpdateServiceShrinkRequest::ServiceInfo> & serviceInfo) { DARABONBA_PTR_SET_VALUE(serviceInfo_, serviceInfo) };
    inline UpdateServiceShrinkRequest& setServiceInfo(vector<UpdateServiceShrinkRequest::ServiceInfo> && serviceInfo) { DARABONBA_PTR_SET_RVALUE(serviceInfo_, serviceInfo) };


    // serviceLocaleConfigs Field Functions 
    bool hasServiceLocaleConfigs() const { return this->serviceLocaleConfigs_ != nullptr;};
    void deleteServiceLocaleConfigs() { this->serviceLocaleConfigs_ = nullptr;};
    inline const vector<UpdateServiceShrinkRequest::ServiceLocaleConfigs> & getServiceLocaleConfigs() const { DARABONBA_PTR_GET_CONST(serviceLocaleConfigs_, vector<UpdateServiceShrinkRequest::ServiceLocaleConfigs>) };
    inline vector<UpdateServiceShrinkRequest::ServiceLocaleConfigs> getServiceLocaleConfigs() { DARABONBA_PTR_GET(serviceLocaleConfigs_, vector<UpdateServiceShrinkRequest::ServiceLocaleConfigs>) };
    inline UpdateServiceShrinkRequest& setServiceLocaleConfigs(const vector<UpdateServiceShrinkRequest::ServiceLocaleConfigs> & serviceLocaleConfigs) { DARABONBA_PTR_SET_VALUE(serviceLocaleConfigs_, serviceLocaleConfigs) };
    inline UpdateServiceShrinkRequest& setServiceLocaleConfigs(vector<UpdateServiceShrinkRequest::ServiceLocaleConfigs> && serviceLocaleConfigs) { DARABONBA_PTR_SET_RVALUE(serviceLocaleConfigs_, serviceLocaleConfigs) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline UpdateServiceShrinkRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string getServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline UpdateServiceShrinkRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline UpdateServiceShrinkRequest& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // tenantType Field Functions 
    bool hasTenantType() const { return this->tenantType_ != nullptr;};
    void deleteTenantType() { this->tenantType_ = nullptr;};
    inline string getTenantType() const { DARABONBA_PTR_GET_DEFAULT(tenantType_, "") };
    inline UpdateServiceShrinkRequest& setTenantType(string tenantType) { DARABONBA_PTR_SET_VALUE(tenantType_, tenantType) };


    // trialDuration Field Functions 
    bool hasTrialDuration() const { return this->trialDuration_ != nullptr;};
    void deleteTrialDuration() { this->trialDuration_ = nullptr;};
    inline int32_t getTrialDuration() const { DARABONBA_PTR_GET_DEFAULT(trialDuration_, 0) };
    inline UpdateServiceShrinkRequest& setTrialDuration(int32_t trialDuration) { DARABONBA_PTR_SET_VALUE(trialDuration_, trialDuration) };


    // updateOptionShrink Field Functions 
    bool hasUpdateOptionShrink() const { return this->updateOptionShrink_ != nullptr;};
    void deleteUpdateOptionShrink() { this->updateOptionShrink_ = nullptr;};
    inline string getUpdateOptionShrink() const { DARABONBA_PTR_GET_DEFAULT(updateOptionShrink_, "") };
    inline UpdateServiceShrinkRequest& setUpdateOptionShrink(string updateOptionShrink) { DARABONBA_PTR_SET_VALUE(updateOptionShrink_, updateOptionShrink) };


    // upgradeMetadata Field Functions 
    bool hasUpgradeMetadata() const { return this->upgradeMetadata_ != nullptr;};
    void deleteUpgradeMetadata() { this->upgradeMetadata_ = nullptr;};
    inline string getUpgradeMetadata() const { DARABONBA_PTR_GET_DEFAULT(upgradeMetadata_, "") };
    inline UpdateServiceShrinkRequest& setUpgradeMetadata(string upgradeMetadata) { DARABONBA_PTR_SET_VALUE(upgradeMetadata_, upgradeMetadata) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline UpdateServiceShrinkRequest& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The alert configurations for the service.
    // 
    // > This configuration takes effect only after you configure an alert-related access policy for **PolicyNames**.
    shared_ptr<string> alarmMetadata_ {};
    // The approval type for service usage requests. Valid values:
    // 
    // - Manual: The request is manually approved.
    // 
    // - AutoPass: The request is automatically approved.
    shared_ptr<string> approvalType_ {};
    // The parameters for building the service.
    shared_ptr<string> buildParameters_ {};
    // A client token to ensure that the request is idempotent. You can use a client to generate the token. Make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The commodity information.
    shared_ptr<string> commodityShrink_ {};
    // The compliance check metadata.
    shared_ptr<string> complianceMetadataShrink_ {};
    // The information about the service deployment configuration. The data format varies based on the deployment type. The value is a JSON string.
    shared_ptr<string> deployMetadata_ {};
    // The deployment type. Valid values:
    // 
    // - ros: The service is deployed using ROS.
    // 
    // - terraform: The service is deployed using Terraform.
    // 
    // - spi: The service is deployed by calling an SPI.
    // 
    // - operation: The service is an O\\&M service.
    // 
    // - container: The service is deployed using containers.
    // 
    // - pkg: The service is a package service.
    shared_ptr<string> deployType_ {};
    // Specifies whether to perform a dry run for the request. A dry run checks the permissions and the instance status. Valid values:
    // 
    // - true: sends the request but does not update the service.
    // 
    // - false: sends the request. If the check is successful, the service is updated.
    shared_ptr<bool> dryRun_ {};
    // The O\\&M duration. Unit: seconds.
    shared_ptr<int64_t> duration_ {};
    shared_ptr<bool> isDefault_ {};
    // Specifies whether to enable O\\&M. Default value: false. Valid values:
    // 
    // - true: enables O\\&M.
    // 
    // - false: disables O\\&M.
    // 
    // > This parameter is required when **ServiceType** is set to **private**.
    shared_ptr<bool> isSupportOperated_ {};
    // The license metadata.
    shared_ptr<string> licenseMetadata_ {};
    // The application log configurations.
    shared_ptr<string> logMetadata_ {};
    // The O\\&M configuration.
    shared_ptr<string> operationMetadata_ {};
    // The policy name. The name of a single policy can be up to 128 characters in length. If you specify multiple policies, separate them with commas (,). Only O\\&M-related policies are supported.
    shared_ptr<string> policyNames_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Specifies whether to enable distribution. Valid values:
    // 
    // - false: Distribution is not enabled.
    // 
    // - true: Distribution is enabled.
    shared_ptr<bool> resellable_ {};
    // The service ID.
    // 
    // This parameter is required.
    shared_ptr<string> serviceId_ {};
    // The service details.
    shared_ptr<vector<UpdateServiceShrinkRequest::ServiceInfo>> serviceInfo_ {};
    // The multilingual configurations of the service.
    shared_ptr<vector<UpdateServiceShrinkRequest::ServiceLocaleConfigs>> serviceLocaleConfigs_ {};
    // The service type. Valid values:
    // 
    // - private: The service instance is deployed in the user account.
    // 
    // - managed: The service instance is deployed in the service provider account.
    // 
    // - operation: The service instance is an O\\&M instance.
    // 
    // - poc: The service instance is a trial instance.
    shared_ptr<string> serviceType_ {};
    // The service version.
    shared_ptr<string> serviceVersion_ {};
    // The sharing type. Valid values:
    // 
    // - Public: The service is public. Formal and trial deployments are not restricted.
    // 
    // - Restricted: The service is restricted. Formal and trial deployments are restricted.
    // 
    // - OnlyFormalRestricted: Only formal deployments are restricted.
    // 
    // - OnlyTrailRestricted: Only trial deployments are restricted.
    // 
    // - Hidden: The service is hidden. You cannot view the service or request deployment permissions.
    shared_ptr<string> shareType_ {};
    // The tenant type. Valid values:
    // 
    // - SingleTenant: The service is single-tenant.
    // 
    // - MultiTenant: The service is multi-tenant.
    shared_ptr<string> tenantType_ {};
    // The trial duration. Unit: days. The maximum trial duration is 30 days.
    shared_ptr<int32_t> trialDuration_ {};
    // The update options.
    shared_ptr<string> updateOptionShrink_ {};
    // The upgrade metadata.
    shared_ptr<string> upgradeMetadata_ {};
    // The version name.
    shared_ptr<string> versionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif

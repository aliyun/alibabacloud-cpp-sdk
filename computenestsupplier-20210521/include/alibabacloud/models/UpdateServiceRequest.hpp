// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmMetadata, alarmMetadata_);
      DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_TO_JSON(BuildParameters, buildParameters_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Commodity, commodity_);
      DARABONBA_PTR_TO_JSON(ComplianceMetadata, complianceMetadata_);
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
      DARABONBA_PTR_TO_JSON(UpdateOption, updateOption_);
      DARABONBA_PTR_TO_JSON(UpgradeMetadata, upgradeMetadata_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmMetadata, alarmMetadata_);
      DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_FROM_JSON(BuildParameters, buildParameters_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
      DARABONBA_PTR_FROM_JSON(ComplianceMetadata, complianceMetadata_);
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
      DARABONBA_PTR_FROM_JSON(UpdateOption, updateOption_);
      DARABONBA_PTR_FROM_JSON(UpgradeMetadata, upgradeMetadata_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    UpdateServiceRequest() = default ;
    UpdateServiceRequest(const UpdateServiceRequest &) = default ;
    UpdateServiceRequest(UpdateServiceRequest &&) = default ;
    UpdateServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceRequest() = default ;
    UpdateServiceRequest& operator=(const UpdateServiceRequest &) = default ;
    UpdateServiceRequest& operator=(UpdateServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateOption : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateOption& obj) { 
        DARABONBA_PTR_TO_JSON(UpdateArtifact, updateArtifact_);
        DARABONBA_PTR_TO_JSON(UpdateFrom, updateFrom_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateOption& obj) { 
        DARABONBA_PTR_FROM_JSON(UpdateArtifact, updateArtifact_);
        DARABONBA_PTR_FROM_JSON(UpdateFrom, updateFrom_);
      };
      UpdateOption() = default ;
      UpdateOption(const UpdateOption &) = default ;
      UpdateOption(UpdateOption &&) = default ;
      UpdateOption(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateOption() = default ;
      UpdateOption& operator=(const UpdateOption &) = default ;
      UpdateOption& operator=(UpdateOption &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->updateArtifact_ == nullptr
        && this->updateFrom_ == nullptr; };
      // updateArtifact Field Functions 
      bool hasUpdateArtifact() const { return this->updateArtifact_ != nullptr;};
      void deleteUpdateArtifact() { this->updateArtifact_ = nullptr;};
      inline bool getUpdateArtifact() const { DARABONBA_PTR_GET_DEFAULT(updateArtifact_, false) };
      inline UpdateOption& setUpdateArtifact(bool updateArtifact) { DARABONBA_PTR_SET_VALUE(updateArtifact_, updateArtifact) };


      // updateFrom Field Functions 
      bool hasUpdateFrom() const { return this->updateFrom_ != nullptr;};
      void deleteUpdateFrom() { this->updateFrom_ = nullptr;};
      inline string getUpdateFrom() const { DARABONBA_PTR_GET_DEFAULT(updateFrom_, "") };
      inline UpdateOption& setUpdateFrom(string updateFrom) { DARABONBA_PTR_SET_VALUE(updateFrom_, updateFrom) };


    protected:
      // Specifies whether to update the deployment file.
      shared_ptr<bool> updateArtifact_ {};
      // The update option. Valid values:
      // 
      // - CODE: code.
      // 
      // - PARAMETERS: parameters.
      shared_ptr<string> updateFrom_ {};
    };

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

    class ComplianceMetadata : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComplianceMetadata& obj) { 
        DARABONBA_PTR_TO_JSON(CompliancePacks, compliancePacks_);
      };
      friend void from_json(const Darabonba::Json& j, ComplianceMetadata& obj) { 
        DARABONBA_PTR_FROM_JSON(CompliancePacks, compliancePacks_);
      };
      ComplianceMetadata() = default ;
      ComplianceMetadata(const ComplianceMetadata &) = default ;
      ComplianceMetadata(ComplianceMetadata &&) = default ;
      ComplianceMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComplianceMetadata() = default ;
      ComplianceMetadata& operator=(const ComplianceMetadata &) = default ;
      ComplianceMetadata& operator=(ComplianceMetadata &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->compliancePacks_ == nullptr; };
      // compliancePacks Field Functions 
      bool hasCompliancePacks() const { return this->compliancePacks_ != nullptr;};
      void deleteCompliancePacks() { this->compliancePacks_ = nullptr;};
      inline const vector<string> & getCompliancePacks() const { DARABONBA_PTR_GET_CONST(compliancePacks_, vector<string>) };
      inline vector<string> getCompliancePacks() { DARABONBA_PTR_GET(compliancePacks_, vector<string>) };
      inline ComplianceMetadata& setCompliancePacks(const vector<string> & compliancePacks) { DARABONBA_PTR_SET_VALUE(compliancePacks_, compliancePacks) };
      inline ComplianceMetadata& setCompliancePacks(vector<string> && compliancePacks) { DARABONBA_PTR_SET_RVALUE(compliancePacks_, compliancePacks) };


    protected:
      // The selected compliance package.
      shared_ptr<vector<string>> compliancePacks_ {};
    };

    class Commodity : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Commodity& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentsMappings, componentsMappings_);
        DARABONBA_PTR_TO_JSON(MeteringEntityExtraInfos, meteringEntityExtraInfos_);
        DARABONBA_PTR_TO_JSON(MeteringEntityMappings, meteringEntityMappings_);
        DARABONBA_PTR_TO_JSON(SaasBoostConfig, saasBoostConfig_);
        DARABONBA_PTR_TO_JSON(SpecificationMappings, specificationMappings_);
      };
      friend void from_json(const Darabonba::Json& j, Commodity& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentsMappings, componentsMappings_);
        DARABONBA_PTR_FROM_JSON(MeteringEntityExtraInfos, meteringEntityExtraInfos_);
        DARABONBA_PTR_FROM_JSON(MeteringEntityMappings, meteringEntityMappings_);
        DARABONBA_PTR_FROM_JSON(SaasBoostConfig, saasBoostConfig_);
        DARABONBA_PTR_FROM_JSON(SpecificationMappings, specificationMappings_);
      };
      Commodity() = default ;
      Commodity(const Commodity &) = default ;
      Commodity(Commodity &&) = default ;
      Commodity(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Commodity() = default ;
      Commodity& operator=(const Commodity &) = default ;
      Commodity& operator=(Commodity &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SpecificationMappings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SpecificationMappings& obj) { 
          DARABONBA_PTR_TO_JSON(SpecificationCode, specificationCode_);
          DARABONBA_PTR_TO_JSON(SpecificationName, specificationName_);
          DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        };
        friend void from_json(const Darabonba::Json& j, SpecificationMappings& obj) { 
          DARABONBA_PTR_FROM_JSON(SpecificationCode, specificationCode_);
          DARABONBA_PTR_FROM_JSON(SpecificationName, specificationName_);
          DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        };
        SpecificationMappings() = default ;
        SpecificationMappings(const SpecificationMappings &) = default ;
        SpecificationMappings(SpecificationMappings &&) = default ;
        SpecificationMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SpecificationMappings() = default ;
        SpecificationMappings& operator=(const SpecificationMappings &) = default ;
        SpecificationMappings& operator=(SpecificationMappings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->specificationCode_ == nullptr
        && this->specificationName_ == nullptr && this->templateName_ == nullptr; };
        // specificationCode Field Functions 
        bool hasSpecificationCode() const { return this->specificationCode_ != nullptr;};
        void deleteSpecificationCode() { this->specificationCode_ = nullptr;};
        inline string getSpecificationCode() const { DARABONBA_PTR_GET_DEFAULT(specificationCode_, "") };
        inline SpecificationMappings& setSpecificationCode(string specificationCode) { DARABONBA_PTR_SET_VALUE(specificationCode_, specificationCode) };


        // specificationName Field Functions 
        bool hasSpecificationName() const { return this->specificationName_ != nullptr;};
        void deleteSpecificationName() { this->specificationName_ = nullptr;};
        inline string getSpecificationName() const { DARABONBA_PTR_GET_DEFAULT(specificationName_, "") };
        inline SpecificationMappings& setSpecificationName(string specificationName) { DARABONBA_PTR_SET_VALUE(specificationName_, specificationName) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline SpecificationMappings& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      protected:
        // The specification code.
        shared_ptr<string> specificationCode_ {};
        // The package name.
        shared_ptr<string> specificationName_ {};
        // The template name.
        shared_ptr<string> templateName_ {};
      };

      class MeteringEntityMappings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MeteringEntityMappings& obj) { 
          DARABONBA_PTR_TO_JSON(EntityIds, entityIds_);
          DARABONBA_PTR_TO_JSON(SpecificationName, specificationName_);
          DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        };
        friend void from_json(const Darabonba::Json& j, MeteringEntityMappings& obj) { 
          DARABONBA_PTR_FROM_JSON(EntityIds, entityIds_);
          DARABONBA_PTR_FROM_JSON(SpecificationName, specificationName_);
          DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        };
        MeteringEntityMappings() = default ;
        MeteringEntityMappings(const MeteringEntityMappings &) = default ;
        MeteringEntityMappings(MeteringEntityMappings &&) = default ;
        MeteringEntityMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MeteringEntityMappings() = default ;
        MeteringEntityMappings& operator=(const MeteringEntityMappings &) = default ;
        MeteringEntityMappings& operator=(MeteringEntityMappings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->entityIds_ == nullptr
        && this->specificationName_ == nullptr && this->templateName_ == nullptr; };
        // entityIds Field Functions 
        bool hasEntityIds() const { return this->entityIds_ != nullptr;};
        void deleteEntityIds() { this->entityIds_ = nullptr;};
        inline const vector<string> & getEntityIds() const { DARABONBA_PTR_GET_CONST(entityIds_, vector<string>) };
        inline vector<string> getEntityIds() { DARABONBA_PTR_GET(entityIds_, vector<string>) };
        inline MeteringEntityMappings& setEntityIds(const vector<string> & entityIds) { DARABONBA_PTR_SET_VALUE(entityIds_, entityIds) };
        inline MeteringEntityMappings& setEntityIds(vector<string> && entityIds) { DARABONBA_PTR_SET_RVALUE(entityIds_, entityIds) };


        // specificationName Field Functions 
        bool hasSpecificationName() const { return this->specificationName_ != nullptr;};
        void deleteSpecificationName() { this->specificationName_ = nullptr;};
        inline string getSpecificationName() const { DARABONBA_PTR_GET_DEFAULT(specificationName_, "") };
        inline MeteringEntityMappings& setSpecificationName(string specificationName) { DARABONBA_PTR_SET_VALUE(specificationName_, specificationName) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline MeteringEntityMappings& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      protected:
        // The metering item ID.
        shared_ptr<vector<string>> entityIds_ {};
        // The package name.
        shared_ptr<string> specificationName_ {};
        // The template name.
        shared_ptr<string> templateName_ {};
      };

      class MeteringEntityExtraInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MeteringEntityExtraInfos& obj) { 
          DARABONBA_PTR_TO_JSON(EntityId, entityId_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(Promql, promql_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, MeteringEntityExtraInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(Promql, promql_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        MeteringEntityExtraInfos() = default ;
        MeteringEntityExtraInfos(const MeteringEntityExtraInfos &) = default ;
        MeteringEntityExtraInfos(MeteringEntityExtraInfos &&) = default ;
        MeteringEntityExtraInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MeteringEntityExtraInfos() = default ;
        MeteringEntityExtraInfos& operator=(const MeteringEntityExtraInfos &) = default ;
        MeteringEntityExtraInfos& operator=(MeteringEntityExtraInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->entityId_ == nullptr
        && this->metricName_ == nullptr && this->promql_ == nullptr && this->type_ == nullptr; };
        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline MeteringEntityExtraInfos& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline MeteringEntityExtraInfos& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // promql Field Functions 
        bool hasPromql() const { return this->promql_ != nullptr;};
        void deletePromql() { this->promql_ = nullptr;};
        inline string getPromql() const { DARABONBA_PTR_GET_DEFAULT(promql_, "") };
        inline MeteringEntityExtraInfos& setPromql(string promql) { DARABONBA_PTR_SET_VALUE(promql_, promql) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline MeteringEntityExtraInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The metering item ID.
        shared_ptr<string> entityId_ {};
        // The metric name. This parameter is required when Type is set to ComputeNestBill or ComputeNestPrometheus.
        shared_ptr<string> metricName_ {};
        // The Prometheus statement.
        shared_ptr<string> promql_ {};
        // The type. Valid values:
        // 
        // - **Custom**
        // 
        // - **ComputeNestBill**
        // 
        // - **ComputeNestPrometheus**
        // 
        // - **ComputeNestTime**
        shared_ptr<string> type_ {};
      };

      class ComponentsMappings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ComponentsMappings& obj) { 
          DARABONBA_PTR_TO_JSON(Mappings, mappings_);
          DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        };
        friend void from_json(const Darabonba::Json& j, ComponentsMappings& obj) { 
          DARABONBA_PTR_FROM_JSON(Mappings, mappings_);
          DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        };
        ComponentsMappings() = default ;
        ComponentsMappings(const ComponentsMappings &) = default ;
        ComponentsMappings(ComponentsMappings &&) = default ;
        ComponentsMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ComponentsMappings() = default ;
        ComponentsMappings& operator=(const ComponentsMappings &) = default ;
        ComponentsMappings& operator=(ComponentsMappings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mappings_ == nullptr
        && this->templateName_ == nullptr; };
        // mappings Field Functions 
        bool hasMappings() const { return this->mappings_ != nullptr;};
        void deleteMappings() { this->mappings_ = nullptr;};
        inline const map<string, string> & getMappings() const { DARABONBA_PTR_GET_CONST(mappings_, map<string, string>) };
        inline map<string, string> getMappings() { DARABONBA_PTR_GET(mappings_, map<string, string>) };
        inline ComponentsMappings& setMappings(const map<string, string> & mappings) { DARABONBA_PTR_SET_VALUE(mappings_, mappings) };
        inline ComponentsMappings& setMappings(map<string, string> && mappings) { DARABONBA_PTR_SET_RVALUE(mappings_, mappings) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline ComponentsMappings& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      protected:
        // This parameter is not available.
        shared_ptr<map<string, string>> mappings_ {};
        // This parameter is not available.
        shared_ptr<string> templateName_ {};
      };

      virtual bool empty() const override { return this->componentsMappings_ == nullptr
        && this->meteringEntityExtraInfos_ == nullptr && this->meteringEntityMappings_ == nullptr && this->saasBoostConfig_ == nullptr && this->specificationMappings_ == nullptr; };
      // componentsMappings Field Functions 
      bool hasComponentsMappings() const { return this->componentsMappings_ != nullptr;};
      void deleteComponentsMappings() { this->componentsMappings_ = nullptr;};
      inline const vector<Commodity::ComponentsMappings> & getComponentsMappings() const { DARABONBA_PTR_GET_CONST(componentsMappings_, vector<Commodity::ComponentsMappings>) };
      inline vector<Commodity::ComponentsMappings> getComponentsMappings() { DARABONBA_PTR_GET(componentsMappings_, vector<Commodity::ComponentsMappings>) };
      inline Commodity& setComponentsMappings(const vector<Commodity::ComponentsMappings> & componentsMappings) { DARABONBA_PTR_SET_VALUE(componentsMappings_, componentsMappings) };
      inline Commodity& setComponentsMappings(vector<Commodity::ComponentsMappings> && componentsMappings) { DARABONBA_PTR_SET_RVALUE(componentsMappings_, componentsMappings) };


      // meteringEntityExtraInfos Field Functions 
      bool hasMeteringEntityExtraInfos() const { return this->meteringEntityExtraInfos_ != nullptr;};
      void deleteMeteringEntityExtraInfos() { this->meteringEntityExtraInfos_ = nullptr;};
      inline const vector<Commodity::MeteringEntityExtraInfos> & getMeteringEntityExtraInfos() const { DARABONBA_PTR_GET_CONST(meteringEntityExtraInfos_, vector<Commodity::MeteringEntityExtraInfos>) };
      inline vector<Commodity::MeteringEntityExtraInfos> getMeteringEntityExtraInfos() { DARABONBA_PTR_GET(meteringEntityExtraInfos_, vector<Commodity::MeteringEntityExtraInfos>) };
      inline Commodity& setMeteringEntityExtraInfos(const vector<Commodity::MeteringEntityExtraInfos> & meteringEntityExtraInfos) { DARABONBA_PTR_SET_VALUE(meteringEntityExtraInfos_, meteringEntityExtraInfos) };
      inline Commodity& setMeteringEntityExtraInfos(vector<Commodity::MeteringEntityExtraInfos> && meteringEntityExtraInfos) { DARABONBA_PTR_SET_RVALUE(meteringEntityExtraInfos_, meteringEntityExtraInfos) };


      // meteringEntityMappings Field Functions 
      bool hasMeteringEntityMappings() const { return this->meteringEntityMappings_ != nullptr;};
      void deleteMeteringEntityMappings() { this->meteringEntityMappings_ = nullptr;};
      inline const vector<Commodity::MeteringEntityMappings> & getMeteringEntityMappings() const { DARABONBA_PTR_GET_CONST(meteringEntityMappings_, vector<Commodity::MeteringEntityMappings>) };
      inline vector<Commodity::MeteringEntityMappings> getMeteringEntityMappings() { DARABONBA_PTR_GET(meteringEntityMappings_, vector<Commodity::MeteringEntityMappings>) };
      inline Commodity& setMeteringEntityMappings(const vector<Commodity::MeteringEntityMappings> & meteringEntityMappings) { DARABONBA_PTR_SET_VALUE(meteringEntityMappings_, meteringEntityMappings) };
      inline Commodity& setMeteringEntityMappings(vector<Commodity::MeteringEntityMappings> && meteringEntityMappings) { DARABONBA_PTR_SET_RVALUE(meteringEntityMappings_, meteringEntityMappings) };


      // saasBoostConfig Field Functions 
      bool hasSaasBoostConfig() const { return this->saasBoostConfig_ != nullptr;};
      void deleteSaasBoostConfig() { this->saasBoostConfig_ = nullptr;};
      inline string getSaasBoostConfig() const { DARABONBA_PTR_GET_DEFAULT(saasBoostConfig_, "") };
      inline Commodity& setSaasBoostConfig(string saasBoostConfig) { DARABONBA_PTR_SET_VALUE(saasBoostConfig_, saasBoostConfig) };


      // specificationMappings Field Functions 
      bool hasSpecificationMappings() const { return this->specificationMappings_ != nullptr;};
      void deleteSpecificationMappings() { this->specificationMappings_ = nullptr;};
      inline const vector<Commodity::SpecificationMappings> & getSpecificationMappings() const { DARABONBA_PTR_GET_CONST(specificationMappings_, vector<Commodity::SpecificationMappings>) };
      inline vector<Commodity::SpecificationMappings> getSpecificationMappings() { DARABONBA_PTR_GET(specificationMappings_, vector<Commodity::SpecificationMappings>) };
      inline Commodity& setSpecificationMappings(const vector<Commodity::SpecificationMappings> & specificationMappings) { DARABONBA_PTR_SET_VALUE(specificationMappings_, specificationMappings) };
      inline Commodity& setSpecificationMappings(vector<Commodity::SpecificationMappings> && specificationMappings) { DARABONBA_PTR_SET_RVALUE(specificationMappings_, specificationMappings) };


    protected:
      // This parameter is not available.
      shared_ptr<vector<Commodity::ComponentsMappings>> componentsMappings_ {};
      // The configuration information of the metering item. This parameter is used in the pay-as-you-go scenario of Alibaba Cloud Marketplace.
      shared_ptr<vector<Commodity::MeteringEntityExtraInfos>> meteringEntityExtraInfos_ {};
      // The mapping between templates or packages and metering dimensions. This parameter is used in the pay-as-you-go scenario of Alibaba Cloud Marketplace.
      shared_ptr<vector<Commodity::MeteringEntityMappings>> meteringEntityMappings_ {};
      // The configuration of Software as a Service (SaaS) Boost.
      shared_ptr<string> saasBoostConfig_ {};
      // The mapping between commodity specifications and templates or packages. This parameter is used in the subscription scenario of Alibaba Cloud Marketplace.
      shared_ptr<vector<Commodity::SpecificationMappings>> specificationMappings_ {};
    };

    virtual bool empty() const override { return this->alarmMetadata_ == nullptr
        && this->approvalType_ == nullptr && this->buildParameters_ == nullptr && this->clientToken_ == nullptr && this->commodity_ == nullptr && this->complianceMetadata_ == nullptr
        && this->deployMetadata_ == nullptr && this->deployType_ == nullptr && this->dryRun_ == nullptr && this->duration_ == nullptr && this->isDefault_ == nullptr
        && this->isSupportOperated_ == nullptr && this->licenseMetadata_ == nullptr && this->logMetadata_ == nullptr && this->operationMetadata_ == nullptr && this->policyNames_ == nullptr
        && this->regionId_ == nullptr && this->resellable_ == nullptr && this->serviceId_ == nullptr && this->serviceInfo_ == nullptr && this->serviceLocaleConfigs_ == nullptr
        && this->serviceType_ == nullptr && this->serviceVersion_ == nullptr && this->shareType_ == nullptr && this->tenantType_ == nullptr && this->trialDuration_ == nullptr
        && this->updateOption_ == nullptr && this->upgradeMetadata_ == nullptr && this->versionName_ == nullptr; };
    // alarmMetadata Field Functions 
    bool hasAlarmMetadata() const { return this->alarmMetadata_ != nullptr;};
    void deleteAlarmMetadata() { this->alarmMetadata_ = nullptr;};
    inline string getAlarmMetadata() const { DARABONBA_PTR_GET_DEFAULT(alarmMetadata_, "") };
    inline UpdateServiceRequest& setAlarmMetadata(string alarmMetadata) { DARABONBA_PTR_SET_VALUE(alarmMetadata_, alarmMetadata) };


    // approvalType Field Functions 
    bool hasApprovalType() const { return this->approvalType_ != nullptr;};
    void deleteApprovalType() { this->approvalType_ = nullptr;};
    inline string getApprovalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, "") };
    inline UpdateServiceRequest& setApprovalType(string approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


    // buildParameters Field Functions 
    bool hasBuildParameters() const { return this->buildParameters_ != nullptr;};
    void deleteBuildParameters() { this->buildParameters_ = nullptr;};
    inline string getBuildParameters() const { DARABONBA_PTR_GET_DEFAULT(buildParameters_, "") };
    inline UpdateServiceRequest& setBuildParameters(string buildParameters) { DARABONBA_PTR_SET_VALUE(buildParameters_, buildParameters) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateServiceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commodity Field Functions 
    bool hasCommodity() const { return this->commodity_ != nullptr;};
    void deleteCommodity() { this->commodity_ = nullptr;};
    inline const UpdateServiceRequest::Commodity & getCommodity() const { DARABONBA_PTR_GET_CONST(commodity_, UpdateServiceRequest::Commodity) };
    inline UpdateServiceRequest::Commodity getCommodity() { DARABONBA_PTR_GET(commodity_, UpdateServiceRequest::Commodity) };
    inline UpdateServiceRequest& setCommodity(const UpdateServiceRequest::Commodity & commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };
    inline UpdateServiceRequest& setCommodity(UpdateServiceRequest::Commodity && commodity) { DARABONBA_PTR_SET_RVALUE(commodity_, commodity) };


    // complianceMetadata Field Functions 
    bool hasComplianceMetadata() const { return this->complianceMetadata_ != nullptr;};
    void deleteComplianceMetadata() { this->complianceMetadata_ = nullptr;};
    inline const UpdateServiceRequest::ComplianceMetadata & getComplianceMetadata() const { DARABONBA_PTR_GET_CONST(complianceMetadata_, UpdateServiceRequest::ComplianceMetadata) };
    inline UpdateServiceRequest::ComplianceMetadata getComplianceMetadata() { DARABONBA_PTR_GET(complianceMetadata_, UpdateServiceRequest::ComplianceMetadata) };
    inline UpdateServiceRequest& setComplianceMetadata(const UpdateServiceRequest::ComplianceMetadata & complianceMetadata) { DARABONBA_PTR_SET_VALUE(complianceMetadata_, complianceMetadata) };
    inline UpdateServiceRequest& setComplianceMetadata(UpdateServiceRequest::ComplianceMetadata && complianceMetadata) { DARABONBA_PTR_SET_RVALUE(complianceMetadata_, complianceMetadata) };


    // deployMetadata Field Functions 
    bool hasDeployMetadata() const { return this->deployMetadata_ != nullptr;};
    void deleteDeployMetadata() { this->deployMetadata_ = nullptr;};
    inline string getDeployMetadata() const { DARABONBA_PTR_GET_DEFAULT(deployMetadata_, "") };
    inline UpdateServiceRequest& setDeployMetadata(string deployMetadata) { DARABONBA_PTR_SET_VALUE(deployMetadata_, deployMetadata) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline string getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
    inline UpdateServiceRequest& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateServiceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline UpdateServiceRequest& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline UpdateServiceRequest& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // isSupportOperated Field Functions 
    bool hasIsSupportOperated() const { return this->isSupportOperated_ != nullptr;};
    void deleteIsSupportOperated() { this->isSupportOperated_ = nullptr;};
    inline bool getIsSupportOperated() const { DARABONBA_PTR_GET_DEFAULT(isSupportOperated_, false) };
    inline UpdateServiceRequest& setIsSupportOperated(bool isSupportOperated) { DARABONBA_PTR_SET_VALUE(isSupportOperated_, isSupportOperated) };


    // licenseMetadata Field Functions 
    bool hasLicenseMetadata() const { return this->licenseMetadata_ != nullptr;};
    void deleteLicenseMetadata() { this->licenseMetadata_ = nullptr;};
    inline string getLicenseMetadata() const { DARABONBA_PTR_GET_DEFAULT(licenseMetadata_, "") };
    inline UpdateServiceRequest& setLicenseMetadata(string licenseMetadata) { DARABONBA_PTR_SET_VALUE(licenseMetadata_, licenseMetadata) };


    // logMetadata Field Functions 
    bool hasLogMetadata() const { return this->logMetadata_ != nullptr;};
    void deleteLogMetadata() { this->logMetadata_ = nullptr;};
    inline string getLogMetadata() const { DARABONBA_PTR_GET_DEFAULT(logMetadata_, "") };
    inline UpdateServiceRequest& setLogMetadata(string logMetadata) { DARABONBA_PTR_SET_VALUE(logMetadata_, logMetadata) };


    // operationMetadata Field Functions 
    bool hasOperationMetadata() const { return this->operationMetadata_ != nullptr;};
    void deleteOperationMetadata() { this->operationMetadata_ = nullptr;};
    inline string getOperationMetadata() const { DARABONBA_PTR_GET_DEFAULT(operationMetadata_, "") };
    inline UpdateServiceRequest& setOperationMetadata(string operationMetadata) { DARABONBA_PTR_SET_VALUE(operationMetadata_, operationMetadata) };


    // policyNames Field Functions 
    bool hasPolicyNames() const { return this->policyNames_ != nullptr;};
    void deletePolicyNames() { this->policyNames_ = nullptr;};
    inline string getPolicyNames() const { DARABONBA_PTR_GET_DEFAULT(policyNames_, "") };
    inline UpdateServiceRequest& setPolicyNames(string policyNames) { DARABONBA_PTR_SET_VALUE(policyNames_, policyNames) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateServiceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellable Field Functions 
    bool hasResellable() const { return this->resellable_ != nullptr;};
    void deleteResellable() { this->resellable_ = nullptr;};
    inline bool getResellable() const { DARABONBA_PTR_GET_DEFAULT(resellable_, false) };
    inline UpdateServiceRequest& setResellable(bool resellable) { DARABONBA_PTR_SET_VALUE(resellable_, resellable) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline UpdateServiceRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInfo Field Functions 
    bool hasServiceInfo() const { return this->serviceInfo_ != nullptr;};
    void deleteServiceInfo() { this->serviceInfo_ = nullptr;};
    inline const vector<UpdateServiceRequest::ServiceInfo> & getServiceInfo() const { DARABONBA_PTR_GET_CONST(serviceInfo_, vector<UpdateServiceRequest::ServiceInfo>) };
    inline vector<UpdateServiceRequest::ServiceInfo> getServiceInfo() { DARABONBA_PTR_GET(serviceInfo_, vector<UpdateServiceRequest::ServiceInfo>) };
    inline UpdateServiceRequest& setServiceInfo(const vector<UpdateServiceRequest::ServiceInfo> & serviceInfo) { DARABONBA_PTR_SET_VALUE(serviceInfo_, serviceInfo) };
    inline UpdateServiceRequest& setServiceInfo(vector<UpdateServiceRequest::ServiceInfo> && serviceInfo) { DARABONBA_PTR_SET_RVALUE(serviceInfo_, serviceInfo) };


    // serviceLocaleConfigs Field Functions 
    bool hasServiceLocaleConfigs() const { return this->serviceLocaleConfigs_ != nullptr;};
    void deleteServiceLocaleConfigs() { this->serviceLocaleConfigs_ = nullptr;};
    inline const vector<UpdateServiceRequest::ServiceLocaleConfigs> & getServiceLocaleConfigs() const { DARABONBA_PTR_GET_CONST(serviceLocaleConfigs_, vector<UpdateServiceRequest::ServiceLocaleConfigs>) };
    inline vector<UpdateServiceRequest::ServiceLocaleConfigs> getServiceLocaleConfigs() { DARABONBA_PTR_GET(serviceLocaleConfigs_, vector<UpdateServiceRequest::ServiceLocaleConfigs>) };
    inline UpdateServiceRequest& setServiceLocaleConfigs(const vector<UpdateServiceRequest::ServiceLocaleConfigs> & serviceLocaleConfigs) { DARABONBA_PTR_SET_VALUE(serviceLocaleConfigs_, serviceLocaleConfigs) };
    inline UpdateServiceRequest& setServiceLocaleConfigs(vector<UpdateServiceRequest::ServiceLocaleConfigs> && serviceLocaleConfigs) { DARABONBA_PTR_SET_RVALUE(serviceLocaleConfigs_, serviceLocaleConfigs) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline UpdateServiceRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string getServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline UpdateServiceRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline UpdateServiceRequest& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // tenantType Field Functions 
    bool hasTenantType() const { return this->tenantType_ != nullptr;};
    void deleteTenantType() { this->tenantType_ = nullptr;};
    inline string getTenantType() const { DARABONBA_PTR_GET_DEFAULT(tenantType_, "") };
    inline UpdateServiceRequest& setTenantType(string tenantType) { DARABONBA_PTR_SET_VALUE(tenantType_, tenantType) };


    // trialDuration Field Functions 
    bool hasTrialDuration() const { return this->trialDuration_ != nullptr;};
    void deleteTrialDuration() { this->trialDuration_ = nullptr;};
    inline int32_t getTrialDuration() const { DARABONBA_PTR_GET_DEFAULT(trialDuration_, 0) };
    inline UpdateServiceRequest& setTrialDuration(int32_t trialDuration) { DARABONBA_PTR_SET_VALUE(trialDuration_, trialDuration) };


    // updateOption Field Functions 
    bool hasUpdateOption() const { return this->updateOption_ != nullptr;};
    void deleteUpdateOption() { this->updateOption_ = nullptr;};
    inline const UpdateServiceRequest::UpdateOption & getUpdateOption() const { DARABONBA_PTR_GET_CONST(updateOption_, UpdateServiceRequest::UpdateOption) };
    inline UpdateServiceRequest::UpdateOption getUpdateOption() { DARABONBA_PTR_GET(updateOption_, UpdateServiceRequest::UpdateOption) };
    inline UpdateServiceRequest& setUpdateOption(const UpdateServiceRequest::UpdateOption & updateOption) { DARABONBA_PTR_SET_VALUE(updateOption_, updateOption) };
    inline UpdateServiceRequest& setUpdateOption(UpdateServiceRequest::UpdateOption && updateOption) { DARABONBA_PTR_SET_RVALUE(updateOption_, updateOption) };


    // upgradeMetadata Field Functions 
    bool hasUpgradeMetadata() const { return this->upgradeMetadata_ != nullptr;};
    void deleteUpgradeMetadata() { this->upgradeMetadata_ = nullptr;};
    inline string getUpgradeMetadata() const { DARABONBA_PTR_GET_DEFAULT(upgradeMetadata_, "") };
    inline UpdateServiceRequest& setUpgradeMetadata(string upgradeMetadata) { DARABONBA_PTR_SET_VALUE(upgradeMetadata_, upgradeMetadata) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline UpdateServiceRequest& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


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
    shared_ptr<UpdateServiceRequest::Commodity> commodity_ {};
    // The compliance check metadata.
    shared_ptr<UpdateServiceRequest::ComplianceMetadata> complianceMetadata_ {};
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
    shared_ptr<vector<UpdateServiceRequest::ServiceInfo>> serviceInfo_ {};
    // The multilingual configurations of the service.
    shared_ptr<vector<UpdateServiceRequest::ServiceLocaleConfigs>> serviceLocaleConfigs_ {};
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
    shared_ptr<UpdateServiceRequest::UpdateOption> updateOption_ {};
    // The upgrade metadata.
    shared_ptr<string> upgradeMetadata_ {};
    // The version name.
    shared_ptr<string> versionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif

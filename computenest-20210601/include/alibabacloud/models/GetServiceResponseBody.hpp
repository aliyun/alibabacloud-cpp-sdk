// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmMetadata, alarmMetadata_);
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(Commodity, commodity_);
      DARABONBA_PTR_TO_JSON(ComplianceMetadata, complianceMetadata_);
      DARABONBA_PTR_TO_JSON(DeployFrom, deployFrom_);
      DARABONBA_PTR_TO_JSON(DeployMetadata, deployMetadata_);
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(InstanceRoleInfos, instanceRoleInfos_);
      DARABONBA_PTR_TO_JSON(IsSupportOperated, isSupportOperated_);
      DARABONBA_PTR_TO_JSON(LicenseMetadata, licenseMetadata_);
      DARABONBA_PTR_TO_JSON(LogMetadata, logMetadata_);
      DARABONBA_PTR_TO_JSON(OperationMetadata, operationMetadata_);
      DARABONBA_PTR_TO_JSON(Permission, permission_);
      DARABONBA_PTR_TO_JSON(PolicyNames, policyNames_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceDocumentInfos, serviceDocumentInfos_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInfos, serviceInfos_);
      DARABONBA_PTR_TO_JSON(ServiceLocaleConfigs, serviceLocaleConfigs_);
      DARABONBA_PTR_TO_JSON(ServiceProductUrl, serviceProductUrl_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupplierDesc, supplierDesc_);
      DARABONBA_PTR_TO_JSON(SupplierLogo, supplierLogo_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_TO_JSON(SupplierUid, supplierUid_);
      DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_TO_JSON(SupportContacts, supportContacts_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TenantType, tenantType_);
      DARABONBA_PTR_TO_JSON(TrialDuration, trialDuration_);
      DARABONBA_PTR_TO_JSON(TrialType, trialType_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmMetadata, alarmMetadata_);
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
      DARABONBA_PTR_FROM_JSON(ComplianceMetadata, complianceMetadata_);
      DARABONBA_PTR_FROM_JSON(DeployFrom, deployFrom_);
      DARABONBA_PTR_FROM_JSON(DeployMetadata, deployMetadata_);
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(InstanceRoleInfos, instanceRoleInfos_);
      DARABONBA_PTR_FROM_JSON(IsSupportOperated, isSupportOperated_);
      DARABONBA_PTR_FROM_JSON(LicenseMetadata, licenseMetadata_);
      DARABONBA_PTR_FROM_JSON(LogMetadata, logMetadata_);
      DARABONBA_PTR_FROM_JSON(OperationMetadata, operationMetadata_);
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
      DARABONBA_PTR_FROM_JSON(PolicyNames, policyNames_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceDocumentInfos, serviceDocumentInfos_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInfos, serviceInfos_);
      DARABONBA_PTR_FROM_JSON(ServiceLocaleConfigs, serviceLocaleConfigs_);
      DARABONBA_PTR_FROM_JSON(ServiceProductUrl, serviceProductUrl_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupplierDesc, supplierDesc_);
      DARABONBA_PTR_FROM_JSON(SupplierLogo, supplierLogo_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_FROM_JSON(SupplierUid, supplierUid_);
      DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_FROM_JSON(SupportContacts, supportContacts_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TenantType, tenantType_);
      DARABONBA_PTR_FROM_JSON(TrialDuration, trialDuration_);
      DARABONBA_PTR_FROM_JSON(TrialType, trialType_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    GetServiceResponseBody() = default ;
    GetServiceResponseBody(const GetServiceResponseBody &) = default ;
    GetServiceResponseBody(GetServiceResponseBody &&) = default ;
    GetServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBody() = default ;
    GetServiceResponseBody& operator=(const GetServiceResponseBody &) = default ;
    GetServiceResponseBody& operator=(GetServiceResponseBody &&) = default ;
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

    class SupportContacts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SupportContacts& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, SupportContacts& obj) { 
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      SupportContacts() = default ;
      SupportContacts(const SupportContacts &) = default ;
      SupportContacts(SupportContacts &&) = default ;
      SupportContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SupportContacts() = default ;
      SupportContacts& operator=(const SupportContacts &) = default ;
      SupportContacts& operator=(SupportContacts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SupportContacts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline SupportContacts& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The type of contact information.
      shared_ptr<string> type_ {};
      // The value of contact information.
      shared_ptr<string> value_ {};
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
      shared_ptr<string> enValue_ {};
      shared_ptr<string> originalValue_ {};
      shared_ptr<string> zhValue_ {};
    };

    class ServiceInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Agreements, agreements_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(Locale, locale_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ShortDescription, shortDescription_);
        DARABONBA_PTR_TO_JSON(Softwares, softwares_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Agreements, agreements_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
        DARABONBA_PTR_FROM_JSON(Locale, locale_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ShortDescription, shortDescription_);
        DARABONBA_PTR_FROM_JSON(Softwares, softwares_);
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
        // The name of the Software.
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
        // The agreement name.
        shared_ptr<string> name_ {};
        // The agreement URL.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->agreements_ == nullptr
        && this->image_ == nullptr && this->locale_ == nullptr && this->name_ == nullptr && this->shortDescription_ == nullptr && this->softwares_ == nullptr; };
      // agreements Field Functions 
      bool hasAgreements() const { return this->agreements_ != nullptr;};
      void deleteAgreements() { this->agreements_ = nullptr;};
      inline const vector<ServiceInfos::Agreements> & getAgreements() const { DARABONBA_PTR_GET_CONST(agreements_, vector<ServiceInfos::Agreements>) };
      inline vector<ServiceInfos::Agreements> getAgreements() { DARABONBA_PTR_GET(agreements_, vector<ServiceInfos::Agreements>) };
      inline ServiceInfos& setAgreements(const vector<ServiceInfos::Agreements> & agreements) { DARABONBA_PTR_SET_VALUE(agreements_, agreements) };
      inline ServiceInfos& setAgreements(vector<ServiceInfos::Agreements> && agreements) { DARABONBA_PTR_SET_RVALUE(agreements_, agreements) };


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


      // softwares Field Functions 
      bool hasSoftwares() const { return this->softwares_ != nullptr;};
      void deleteSoftwares() { this->softwares_ = nullptr;};
      inline const vector<ServiceInfos::Softwares> & getSoftwares() const { DARABONBA_PTR_GET_CONST(softwares_, vector<ServiceInfos::Softwares>) };
      inline vector<ServiceInfos::Softwares> getSoftwares() { DARABONBA_PTR_GET(softwares_, vector<ServiceInfos::Softwares>) };
      inline ServiceInfos& setSoftwares(const vector<ServiceInfos::Softwares> & softwares) { DARABONBA_PTR_SET_VALUE(softwares_, softwares) };
      inline ServiceInfos& setSoftwares(vector<ServiceInfos::Softwares> && softwares) { DARABONBA_PTR_SET_RVALUE(softwares_, softwares) };


    protected:
      // The agreement information about the service.
      shared_ptr<vector<ServiceInfos::Agreements>> agreements_ {};
      // The URL of the service icon.
      shared_ptr<string> image_ {};
      // The language of the service. Valid values:
      // 
      // *   zh-CN: Chinese
      // *   en-US: English
      shared_ptr<string> locale_ {};
      // The service name.
      shared_ptr<string> name_ {};
      // The description of the service.
      shared_ptr<string> shortDescription_ {};
      // The list of the software in the service.
      shared_ptr<vector<ServiceInfos::Softwares>> softwares_ {};
    };

    class ServiceDocumentInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceDocumentInfos& obj) { 
        DARABONBA_PTR_TO_JSON(DocumentUrl, documentUrl_);
        DARABONBA_PTR_TO_JSON(Locale, locale_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceDocumentInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(DocumentUrl, documentUrl_);
        DARABONBA_PTR_FROM_JSON(Locale, locale_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      };
      ServiceDocumentInfos() = default ;
      ServiceDocumentInfos(const ServiceDocumentInfos &) = default ;
      ServiceDocumentInfos(ServiceDocumentInfos &&) = default ;
      ServiceDocumentInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceDocumentInfos() = default ;
      ServiceDocumentInfos& operator=(const ServiceDocumentInfos &) = default ;
      ServiceDocumentInfos& operator=(ServiceDocumentInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->documentUrl_ == nullptr
        && this->locale_ == nullptr && this->templateName_ == nullptr; };
      // documentUrl Field Functions 
      bool hasDocumentUrl() const { return this->documentUrl_ != nullptr;};
      void deleteDocumentUrl() { this->documentUrl_ = nullptr;};
      inline string getDocumentUrl() const { DARABONBA_PTR_GET_DEFAULT(documentUrl_, "") };
      inline ServiceDocumentInfos& setDocumentUrl(string documentUrl) { DARABONBA_PTR_SET_VALUE(documentUrl_, documentUrl) };


      // locale Field Functions 
      bool hasLocale() const { return this->locale_ != nullptr;};
      void deleteLocale() { this->locale_ = nullptr;};
      inline string getLocale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
      inline ServiceDocumentInfos& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline ServiceDocumentInfos& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      // The URL that is used to access the document.
      shared_ptr<string> documentUrl_ {};
      // The language that you use for the query. Valid values: zh-CN and en-US.
      shared_ptr<string> locale_ {};
      // The template name.
      shared_ptr<string> templateName_ {};
    };

    class InstanceRoleInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceRoleInfos& obj) { 
        DARABONBA_PTR_TO_JSON(PolicyDocument, policyDocument_);
        DARABONBA_PTR_TO_JSON(Principals, principals_);
        DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceRoleInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
        DARABONBA_PTR_FROM_JSON(Principals, principals_);
        DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      };
      InstanceRoleInfos() = default ;
      InstanceRoleInfos(const InstanceRoleInfos &) = default ;
      InstanceRoleInfos(InstanceRoleInfos &&) = default ;
      InstanceRoleInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceRoleInfos() = default ;
      InstanceRoleInfos& operator=(const InstanceRoleInfos &) = default ;
      InstanceRoleInfos& operator=(InstanceRoleInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->policyDocument_ == nullptr
        && this->principals_ == nullptr && this->roleName_ == nullptr && this->templateName_ == nullptr; };
      // policyDocument Field Functions 
      bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
      void deletePolicyDocument() { this->policyDocument_ = nullptr;};
      inline string getPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
      inline InstanceRoleInfos& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


      // principals Field Functions 
      bool hasPrincipals() const { return this->principals_ != nullptr;};
      void deletePrincipals() { this->principals_ = nullptr;};
      inline const vector<string> & getPrincipals() const { DARABONBA_PTR_GET_CONST(principals_, vector<string>) };
      inline vector<string> getPrincipals() { DARABONBA_PTR_GET(principals_, vector<string>) };
      inline InstanceRoleInfos& setPrincipals(const vector<string> & principals) { DARABONBA_PTR_SET_VALUE(principals_, principals) };
      inline InstanceRoleInfos& setPrincipals(vector<string> && principals) { DARABONBA_PTR_SET_RVALUE(principals_, principals) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline InstanceRoleInfos& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline InstanceRoleInfos& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      // The content of the policy.
      shared_ptr<string> policyDocument_ {};
      // The information of the RAM entity.
      shared_ptr<vector<string>> principals_ {};
      // The ram role name.
      shared_ptr<string> roleName_ {};
      // The template name.
      shared_ptr<string> templateName_ {};
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
      // The compliance pack list.
      shared_ptr<vector<string>> compliancePacks_ {};
    };

    class Commodity : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Commodity& obj) { 
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CssMetadata, cssMetadata_);
        DARABONBA_PTR_TO_JSON(DeployPage, deployPage_);
        DARABONBA_PTR_TO_JSON(MarketplaceMetadata, marketplaceMetadata_);
        DARABONBA_PTR_TO_JSON(OrderTime, orderTime_);
        DARABONBA_PTR_TO_JSON(SaasBoostMetadata, saasBoostMetadata_);
        DARABONBA_PTR_TO_JSON(Specifications, specifications_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Commodity& obj) { 
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CssMetadata, cssMetadata_);
        DARABONBA_PTR_FROM_JSON(DeployPage, deployPage_);
        DARABONBA_PTR_FROM_JSON(MarketplaceMetadata, marketplaceMetadata_);
        DARABONBA_PTR_FROM_JSON(OrderTime, orderTime_);
        DARABONBA_PTR_FROM_JSON(SaasBoostMetadata, saasBoostMetadata_);
        DARABONBA_PTR_FROM_JSON(Specifications, specifications_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      class Specifications : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Specifications& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Times, times_);
        };
        friend void from_json(const Darabonba::Json& j, Specifications& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Times, times_);
        };
        Specifications() = default ;
        Specifications(const Specifications &) = default ;
        Specifications(Specifications &&) = default ;
        Specifications(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Specifications() = default ;
        Specifications& operator=(const Specifications &) = default ;
        Specifications& operator=(Specifications &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr && this->times_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Specifications& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Specifications& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // times Field Functions 
        bool hasTimes() const { return this->times_ != nullptr;};
        void deleteTimes() { this->times_ = nullptr;};
        inline const vector<string> & getTimes() const { DARABONBA_PTR_GET_CONST(times_, vector<string>) };
        inline vector<string> getTimes() { DARABONBA_PTR_GET(times_, vector<string>) };
        inline Specifications& setTimes(const vector<string> & times) { DARABONBA_PTR_SET_VALUE(times_, times) };
        inline Specifications& setTimes(vector<string> && times) { DARABONBA_PTR_SET_RVALUE(times_, times) };


      protected:
        // The commodity code.
        shared_ptr<string> code_ {};
        // The specification name.
        shared_ptr<string> name_ {};
        // The subscription duration. Unit: week or year.
        shared_ptr<vector<string>> times_ {};
      };

      class MarketplaceMetadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MarketplaceMetadata& obj) { 
          DARABONBA_PTR_TO_JSON(SpecificationMappings, specificationMappings_);
        };
        friend void from_json(const Darabonba::Json& j, MarketplaceMetadata& obj) { 
          DARABONBA_PTR_FROM_JSON(SpecificationMappings, specificationMappings_);
        };
        MarketplaceMetadata() = default ;
        MarketplaceMetadata(const MarketplaceMetadata &) = default ;
        MarketplaceMetadata(MarketplaceMetadata &&) = default ;
        MarketplaceMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MarketplaceMetadata() = default ;
        MarketplaceMetadata& operator=(const MarketplaceMetadata &) = default ;
        MarketplaceMetadata& operator=(MarketplaceMetadata &&) = default ;
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
          // The specification code of the service in Alibaba Cloud Marketplace.
          shared_ptr<string> specificationCode_ {};
          // The package name.
          shared_ptr<string> specificationName_ {};
          // The template name.
          shared_ptr<string> templateName_ {};
        };

        virtual bool empty() const override { return this->specificationMappings_ == nullptr; };
        // specificationMappings Field Functions 
        bool hasSpecificationMappings() const { return this->specificationMappings_ != nullptr;};
        void deleteSpecificationMappings() { this->specificationMappings_ = nullptr;};
        inline const vector<MarketplaceMetadata::SpecificationMappings> & getSpecificationMappings() const { DARABONBA_PTR_GET_CONST(specificationMappings_, vector<MarketplaceMetadata::SpecificationMappings>) };
        inline vector<MarketplaceMetadata::SpecificationMappings> getSpecificationMappings() { DARABONBA_PTR_GET(specificationMappings_, vector<MarketplaceMetadata::SpecificationMappings>) };
        inline MarketplaceMetadata& setSpecificationMappings(const vector<MarketplaceMetadata::SpecificationMappings> & specificationMappings) { DARABONBA_PTR_SET_VALUE(specificationMappings_, specificationMappings) };
        inline MarketplaceMetadata& setSpecificationMappings(vector<MarketplaceMetadata::SpecificationMappings> && specificationMappings) { DARABONBA_PTR_SET_RVALUE(specificationMappings_, specificationMappings) };


      protected:
        // The mappings between the service specifications and the template or package.
        shared_ptr<vector<MarketplaceMetadata::SpecificationMappings>> specificationMappings_ {};
      };

      class CssMetadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CssMetadata& obj) { 
          DARABONBA_PTR_TO_JSON(ComponentsMappings, componentsMappings_);
        };
        friend void from_json(const Darabonba::Json& j, CssMetadata& obj) { 
          DARABONBA_PTR_FROM_JSON(ComponentsMappings, componentsMappings_);
        };
        CssMetadata() = default ;
        CssMetadata(const CssMetadata &) = default ;
        CssMetadata(CssMetadata &&) = default ;
        CssMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CssMetadata() = default ;
        CssMetadata& operator=(const CssMetadata &) = default ;
        CssMetadata& operator=(CssMetadata &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
          // The mappings.
          shared_ptr<map<string, string>> mappings_ {};
          // The template name.
          shared_ptr<string> templateName_ {};
        };

        virtual bool empty() const override { return this->componentsMappings_ == nullptr; };
        // componentsMappings Field Functions 
        bool hasComponentsMappings() const { return this->componentsMappings_ != nullptr;};
        void deleteComponentsMappings() { this->componentsMappings_ = nullptr;};
        inline const vector<CssMetadata::ComponentsMappings> & getComponentsMappings() const { DARABONBA_PTR_GET_CONST(componentsMappings_, vector<CssMetadata::ComponentsMappings>) };
        inline vector<CssMetadata::ComponentsMappings> getComponentsMappings() { DARABONBA_PTR_GET(componentsMappings_, vector<CssMetadata::ComponentsMappings>) };
        inline CssMetadata& setComponentsMappings(const vector<CssMetadata::ComponentsMappings> & componentsMappings) { DARABONBA_PTR_SET_VALUE(componentsMappings_, componentsMappings) };
        inline CssMetadata& setComponentsMappings(vector<CssMetadata::ComponentsMappings> && componentsMappings) { DARABONBA_PTR_SET_RVALUE(componentsMappings_, componentsMappings) };


      protected:
        // The mapping information about the billing items.
        shared_ptr<vector<CssMetadata::ComponentsMappings>> componentsMappings_ {};
      };

      virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->commodityCode_ == nullptr && this->cssMetadata_ == nullptr && this->deployPage_ == nullptr && this->marketplaceMetadata_ == nullptr && this->orderTime_ == nullptr
        && this->saasBoostMetadata_ == nullptr && this->specifications_ == nullptr && this->type_ == nullptr; };
      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Commodity& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Commodity& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // cssMetadata Field Functions 
      bool hasCssMetadata() const { return this->cssMetadata_ != nullptr;};
      void deleteCssMetadata() { this->cssMetadata_ = nullptr;};
      inline const Commodity::CssMetadata & getCssMetadata() const { DARABONBA_PTR_GET_CONST(cssMetadata_, Commodity::CssMetadata) };
      inline Commodity::CssMetadata getCssMetadata() { DARABONBA_PTR_GET(cssMetadata_, Commodity::CssMetadata) };
      inline Commodity& setCssMetadata(const Commodity::CssMetadata & cssMetadata) { DARABONBA_PTR_SET_VALUE(cssMetadata_, cssMetadata) };
      inline Commodity& setCssMetadata(Commodity::CssMetadata && cssMetadata) { DARABONBA_PTR_SET_RVALUE(cssMetadata_, cssMetadata) };


      // deployPage Field Functions 
      bool hasDeployPage() const { return this->deployPage_ != nullptr;};
      void deleteDeployPage() { this->deployPage_ = nullptr;};
      inline string getDeployPage() const { DARABONBA_PTR_GET_DEFAULT(deployPage_, "") };
      inline Commodity& setDeployPage(string deployPage) { DARABONBA_PTR_SET_VALUE(deployPage_, deployPage) };


      // marketplaceMetadata Field Functions 
      bool hasMarketplaceMetadata() const { return this->marketplaceMetadata_ != nullptr;};
      void deleteMarketplaceMetadata() { this->marketplaceMetadata_ = nullptr;};
      inline const Commodity::MarketplaceMetadata & getMarketplaceMetadata() const { DARABONBA_PTR_GET_CONST(marketplaceMetadata_, Commodity::MarketplaceMetadata) };
      inline Commodity::MarketplaceMetadata getMarketplaceMetadata() { DARABONBA_PTR_GET(marketplaceMetadata_, Commodity::MarketplaceMetadata) };
      inline Commodity& setMarketplaceMetadata(const Commodity::MarketplaceMetadata & marketplaceMetadata) { DARABONBA_PTR_SET_VALUE(marketplaceMetadata_, marketplaceMetadata) };
      inline Commodity& setMarketplaceMetadata(Commodity::MarketplaceMetadata && marketplaceMetadata) { DARABONBA_PTR_SET_RVALUE(marketplaceMetadata_, marketplaceMetadata) };


      // orderTime Field Functions 
      bool hasOrderTime() const { return this->orderTime_ != nullptr;};
      void deleteOrderTime() { this->orderTime_ = nullptr;};
      inline const map<string, vector<string>> & getOrderTime() const { DARABONBA_PTR_GET_CONST(orderTime_, map<string, vector<string>>) };
      inline map<string, vector<string>> getOrderTime() { DARABONBA_PTR_GET(orderTime_, map<string, vector<string>>) };
      inline Commodity& setOrderTime(const map<string, vector<string>> & orderTime) { DARABONBA_PTR_SET_VALUE(orderTime_, orderTime) };
      inline Commodity& setOrderTime(map<string, vector<string>> && orderTime) { DARABONBA_PTR_SET_RVALUE(orderTime_, orderTime) };


      // saasBoostMetadata Field Functions 
      bool hasSaasBoostMetadata() const { return this->saasBoostMetadata_ != nullptr;};
      void deleteSaasBoostMetadata() { this->saasBoostMetadata_ = nullptr;};
      inline string getSaasBoostMetadata() const { DARABONBA_PTR_GET_DEFAULT(saasBoostMetadata_, "") };
      inline Commodity& setSaasBoostMetadata(string saasBoostMetadata) { DARABONBA_PTR_SET_VALUE(saasBoostMetadata_, saasBoostMetadata) };


      // specifications Field Functions 
      bool hasSpecifications() const { return this->specifications_ != nullptr;};
      void deleteSpecifications() { this->specifications_ = nullptr;};
      inline const vector<Commodity::Specifications> & getSpecifications() const { DARABONBA_PTR_GET_CONST(specifications_, vector<Commodity::Specifications>) };
      inline vector<Commodity::Specifications> getSpecifications() { DARABONBA_PTR_GET(specifications_, vector<Commodity::Specifications>) };
      inline Commodity& setSpecifications(const vector<Commodity::Specifications> & specifications) { DARABONBA_PTR_SET_VALUE(specifications_, specifications) };
      inline Commodity& setSpecifications(vector<Commodity::Specifications> && specifications) { DARABONBA_PTR_SET_RVALUE(specifications_, specifications) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Commodity& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The billing method of the service. Valid values:
      // 
      // *   **PREPAY** (default): subscription.
      // *   **POSTPAY**: pay-as-you-go.
      shared_ptr<string> chargeType_ {};
      // The commodity code of the service in Alibaba Cloud Marketplace.
      shared_ptr<string> commodityCode_ {};
      // The configuration metadata related to Lingxiao.
      shared_ptr<Commodity::CssMetadata> cssMetadata_ {};
      // The deploy page.
      shared_ptr<string> deployPage_ {};
      // The metadata of Alibaba Cloud Marketplace.
      shared_ptr<Commodity::MarketplaceMetadata> marketplaceMetadata_ {};
      // The order time.
      shared_ptr<map<string, vector<string>>> orderTime_ {};
      // The configuration metadata related to Saas Boost.
      shared_ptr<string> saasBoostMetadata_ {};
      // The specification details of the service in Alibaba Cloud Marketplace.
      shared_ptr<vector<Commodity::Specifications>> specifications_ {};
      // The service type. Valid values:
      // 
      // *   marketplace: Alibaba Cloud Marketplace.
      // *   Css: Lingxiao.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->alarmMetadata_ == nullptr
        && this->categories_ == nullptr && this->commodity_ == nullptr && this->complianceMetadata_ == nullptr && this->deployFrom_ == nullptr && this->deployMetadata_ == nullptr
        && this->deployType_ == nullptr && this->duration_ == nullptr && this->instanceRoleInfos_ == nullptr && this->isSupportOperated_ == nullptr && this->licenseMetadata_ == nullptr
        && this->logMetadata_ == nullptr && this->operationMetadata_ == nullptr && this->permission_ == nullptr && this->policyNames_ == nullptr && this->publishTime_ == nullptr
        && this->requestId_ == nullptr && this->serviceDocumentInfos_ == nullptr && this->serviceId_ == nullptr && this->serviceInfos_ == nullptr && this->serviceLocaleConfigs_ == nullptr
        && this->serviceProductUrl_ == nullptr && this->serviceType_ == nullptr && this->shareType_ == nullptr && this->status_ == nullptr && this->supplierDesc_ == nullptr
        && this->supplierLogo_ == nullptr && this->supplierName_ == nullptr && this->supplierUid_ == nullptr && this->supplierUrl_ == nullptr && this->supportContacts_ == nullptr
        && this->tags_ == nullptr && this->tenantType_ == nullptr && this->trialDuration_ == nullptr && this->trialType_ == nullptr && this->version_ == nullptr
        && this->versionName_ == nullptr; };
    // alarmMetadata Field Functions 
    bool hasAlarmMetadata() const { return this->alarmMetadata_ != nullptr;};
    void deleteAlarmMetadata() { this->alarmMetadata_ = nullptr;};
    inline string getAlarmMetadata() const { DARABONBA_PTR_GET_DEFAULT(alarmMetadata_, "") };
    inline GetServiceResponseBody& setAlarmMetadata(string alarmMetadata) { DARABONBA_PTR_SET_VALUE(alarmMetadata_, alarmMetadata) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline string getCategories() const { DARABONBA_PTR_GET_DEFAULT(categories_, "") };
    inline GetServiceResponseBody& setCategories(string categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };


    // commodity Field Functions 
    bool hasCommodity() const { return this->commodity_ != nullptr;};
    void deleteCommodity() { this->commodity_ = nullptr;};
    inline const GetServiceResponseBody::Commodity & getCommodity() const { DARABONBA_PTR_GET_CONST(commodity_, GetServiceResponseBody::Commodity) };
    inline GetServiceResponseBody::Commodity getCommodity() { DARABONBA_PTR_GET(commodity_, GetServiceResponseBody::Commodity) };
    inline GetServiceResponseBody& setCommodity(const GetServiceResponseBody::Commodity & commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };
    inline GetServiceResponseBody& setCommodity(GetServiceResponseBody::Commodity && commodity) { DARABONBA_PTR_SET_RVALUE(commodity_, commodity) };


    // complianceMetadata Field Functions 
    bool hasComplianceMetadata() const { return this->complianceMetadata_ != nullptr;};
    void deleteComplianceMetadata() { this->complianceMetadata_ = nullptr;};
    inline const GetServiceResponseBody::ComplianceMetadata & getComplianceMetadata() const { DARABONBA_PTR_GET_CONST(complianceMetadata_, GetServiceResponseBody::ComplianceMetadata) };
    inline GetServiceResponseBody::ComplianceMetadata getComplianceMetadata() { DARABONBA_PTR_GET(complianceMetadata_, GetServiceResponseBody::ComplianceMetadata) };
    inline GetServiceResponseBody& setComplianceMetadata(const GetServiceResponseBody::ComplianceMetadata & complianceMetadata) { DARABONBA_PTR_SET_VALUE(complianceMetadata_, complianceMetadata) };
    inline GetServiceResponseBody& setComplianceMetadata(GetServiceResponseBody::ComplianceMetadata && complianceMetadata) { DARABONBA_PTR_SET_RVALUE(complianceMetadata_, complianceMetadata) };


    // deployFrom Field Functions 
    bool hasDeployFrom() const { return this->deployFrom_ != nullptr;};
    void deleteDeployFrom() { this->deployFrom_ = nullptr;};
    inline string getDeployFrom() const { DARABONBA_PTR_GET_DEFAULT(deployFrom_, "") };
    inline GetServiceResponseBody& setDeployFrom(string deployFrom) { DARABONBA_PTR_SET_VALUE(deployFrom_, deployFrom) };


    // deployMetadata Field Functions 
    bool hasDeployMetadata() const { return this->deployMetadata_ != nullptr;};
    void deleteDeployMetadata() { this->deployMetadata_ = nullptr;};
    inline string getDeployMetadata() const { DARABONBA_PTR_GET_DEFAULT(deployMetadata_, "") };
    inline GetServiceResponseBody& setDeployMetadata(string deployMetadata) { DARABONBA_PTR_SET_VALUE(deployMetadata_, deployMetadata) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline string getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
    inline GetServiceResponseBody& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetServiceResponseBody& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // instanceRoleInfos Field Functions 
    bool hasInstanceRoleInfos() const { return this->instanceRoleInfos_ != nullptr;};
    void deleteInstanceRoleInfos() { this->instanceRoleInfos_ = nullptr;};
    inline const vector<GetServiceResponseBody::InstanceRoleInfos> & getInstanceRoleInfos() const { DARABONBA_PTR_GET_CONST(instanceRoleInfos_, vector<GetServiceResponseBody::InstanceRoleInfos>) };
    inline vector<GetServiceResponseBody::InstanceRoleInfos> getInstanceRoleInfos() { DARABONBA_PTR_GET(instanceRoleInfos_, vector<GetServiceResponseBody::InstanceRoleInfos>) };
    inline GetServiceResponseBody& setInstanceRoleInfos(const vector<GetServiceResponseBody::InstanceRoleInfos> & instanceRoleInfos) { DARABONBA_PTR_SET_VALUE(instanceRoleInfos_, instanceRoleInfos) };
    inline GetServiceResponseBody& setInstanceRoleInfos(vector<GetServiceResponseBody::InstanceRoleInfos> && instanceRoleInfos) { DARABONBA_PTR_SET_RVALUE(instanceRoleInfos_, instanceRoleInfos) };


    // isSupportOperated Field Functions 
    bool hasIsSupportOperated() const { return this->isSupportOperated_ != nullptr;};
    void deleteIsSupportOperated() { this->isSupportOperated_ = nullptr;};
    inline bool getIsSupportOperated() const { DARABONBA_PTR_GET_DEFAULT(isSupportOperated_, false) };
    inline GetServiceResponseBody& setIsSupportOperated(bool isSupportOperated) { DARABONBA_PTR_SET_VALUE(isSupportOperated_, isSupportOperated) };


    // licenseMetadata Field Functions 
    bool hasLicenseMetadata() const { return this->licenseMetadata_ != nullptr;};
    void deleteLicenseMetadata() { this->licenseMetadata_ = nullptr;};
    inline string getLicenseMetadata() const { DARABONBA_PTR_GET_DEFAULT(licenseMetadata_, "") };
    inline GetServiceResponseBody& setLicenseMetadata(string licenseMetadata) { DARABONBA_PTR_SET_VALUE(licenseMetadata_, licenseMetadata) };


    // logMetadata Field Functions 
    bool hasLogMetadata() const { return this->logMetadata_ != nullptr;};
    void deleteLogMetadata() { this->logMetadata_ = nullptr;};
    inline string getLogMetadata() const { DARABONBA_PTR_GET_DEFAULT(logMetadata_, "") };
    inline GetServiceResponseBody& setLogMetadata(string logMetadata) { DARABONBA_PTR_SET_VALUE(logMetadata_, logMetadata) };


    // operationMetadata Field Functions 
    bool hasOperationMetadata() const { return this->operationMetadata_ != nullptr;};
    void deleteOperationMetadata() { this->operationMetadata_ = nullptr;};
    inline string getOperationMetadata() const { DARABONBA_PTR_GET_DEFAULT(operationMetadata_, "") };
    inline GetServiceResponseBody& setOperationMetadata(string operationMetadata) { DARABONBA_PTR_SET_VALUE(operationMetadata_, operationMetadata) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline GetServiceResponseBody& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // policyNames Field Functions 
    bool hasPolicyNames() const { return this->policyNames_ != nullptr;};
    void deletePolicyNames() { this->policyNames_ = nullptr;};
    inline string getPolicyNames() const { DARABONBA_PTR_GET_DEFAULT(policyNames_, "") };
    inline GetServiceResponseBody& setPolicyNames(string policyNames) { DARABONBA_PTR_SET_VALUE(policyNames_, policyNames) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
    inline GetServiceResponseBody& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceDocumentInfos Field Functions 
    bool hasServiceDocumentInfos() const { return this->serviceDocumentInfos_ != nullptr;};
    void deleteServiceDocumentInfos() { this->serviceDocumentInfos_ = nullptr;};
    inline const vector<GetServiceResponseBody::ServiceDocumentInfos> & getServiceDocumentInfos() const { DARABONBA_PTR_GET_CONST(serviceDocumentInfos_, vector<GetServiceResponseBody::ServiceDocumentInfos>) };
    inline vector<GetServiceResponseBody::ServiceDocumentInfos> getServiceDocumentInfos() { DARABONBA_PTR_GET(serviceDocumentInfos_, vector<GetServiceResponseBody::ServiceDocumentInfos>) };
    inline GetServiceResponseBody& setServiceDocumentInfos(const vector<GetServiceResponseBody::ServiceDocumentInfos> & serviceDocumentInfos) { DARABONBA_PTR_SET_VALUE(serviceDocumentInfos_, serviceDocumentInfos) };
    inline GetServiceResponseBody& setServiceDocumentInfos(vector<GetServiceResponseBody::ServiceDocumentInfos> && serviceDocumentInfos) { DARABONBA_PTR_SET_RVALUE(serviceDocumentInfos_, serviceDocumentInfos) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetServiceResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInfos Field Functions 
    bool hasServiceInfos() const { return this->serviceInfos_ != nullptr;};
    void deleteServiceInfos() { this->serviceInfos_ = nullptr;};
    inline const vector<GetServiceResponseBody::ServiceInfos> & getServiceInfos() const { DARABONBA_PTR_GET_CONST(serviceInfos_, vector<GetServiceResponseBody::ServiceInfos>) };
    inline vector<GetServiceResponseBody::ServiceInfos> getServiceInfos() { DARABONBA_PTR_GET(serviceInfos_, vector<GetServiceResponseBody::ServiceInfos>) };
    inline GetServiceResponseBody& setServiceInfos(const vector<GetServiceResponseBody::ServiceInfos> & serviceInfos) { DARABONBA_PTR_SET_VALUE(serviceInfos_, serviceInfos) };
    inline GetServiceResponseBody& setServiceInfos(vector<GetServiceResponseBody::ServiceInfos> && serviceInfos) { DARABONBA_PTR_SET_RVALUE(serviceInfos_, serviceInfos) };


    // serviceLocaleConfigs Field Functions 
    bool hasServiceLocaleConfigs() const { return this->serviceLocaleConfigs_ != nullptr;};
    void deleteServiceLocaleConfigs() { this->serviceLocaleConfigs_ = nullptr;};
    inline const vector<GetServiceResponseBody::ServiceLocaleConfigs> & getServiceLocaleConfigs() const { DARABONBA_PTR_GET_CONST(serviceLocaleConfigs_, vector<GetServiceResponseBody::ServiceLocaleConfigs>) };
    inline vector<GetServiceResponseBody::ServiceLocaleConfigs> getServiceLocaleConfigs() { DARABONBA_PTR_GET(serviceLocaleConfigs_, vector<GetServiceResponseBody::ServiceLocaleConfigs>) };
    inline GetServiceResponseBody& setServiceLocaleConfigs(const vector<GetServiceResponseBody::ServiceLocaleConfigs> & serviceLocaleConfigs) { DARABONBA_PTR_SET_VALUE(serviceLocaleConfigs_, serviceLocaleConfigs) };
    inline GetServiceResponseBody& setServiceLocaleConfigs(vector<GetServiceResponseBody::ServiceLocaleConfigs> && serviceLocaleConfigs) { DARABONBA_PTR_SET_RVALUE(serviceLocaleConfigs_, serviceLocaleConfigs) };


    // serviceProductUrl Field Functions 
    bool hasServiceProductUrl() const { return this->serviceProductUrl_ != nullptr;};
    void deleteServiceProductUrl() { this->serviceProductUrl_ = nullptr;};
    inline string getServiceProductUrl() const { DARABONBA_PTR_GET_DEFAULT(serviceProductUrl_, "") };
    inline GetServiceResponseBody& setServiceProductUrl(string serviceProductUrl) { DARABONBA_PTR_SET_VALUE(serviceProductUrl_, serviceProductUrl) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetServiceResponseBody& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline GetServiceResponseBody& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetServiceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supplierDesc Field Functions 
    bool hasSupplierDesc() const { return this->supplierDesc_ != nullptr;};
    void deleteSupplierDesc() { this->supplierDesc_ = nullptr;};
    inline string getSupplierDesc() const { DARABONBA_PTR_GET_DEFAULT(supplierDesc_, "") };
    inline GetServiceResponseBody& setSupplierDesc(string supplierDesc) { DARABONBA_PTR_SET_VALUE(supplierDesc_, supplierDesc) };


    // supplierLogo Field Functions 
    bool hasSupplierLogo() const { return this->supplierLogo_ != nullptr;};
    void deleteSupplierLogo() { this->supplierLogo_ = nullptr;};
    inline string getSupplierLogo() const { DARABONBA_PTR_GET_DEFAULT(supplierLogo_, "") };
    inline GetServiceResponseBody& setSupplierLogo(string supplierLogo) { DARABONBA_PTR_SET_VALUE(supplierLogo_, supplierLogo) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline GetServiceResponseBody& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


    // supplierUid Field Functions 
    bool hasSupplierUid() const { return this->supplierUid_ != nullptr;};
    void deleteSupplierUid() { this->supplierUid_ = nullptr;};
    inline int64_t getSupplierUid() const { DARABONBA_PTR_GET_DEFAULT(supplierUid_, 0L) };
    inline GetServiceResponseBody& setSupplierUid(int64_t supplierUid) { DARABONBA_PTR_SET_VALUE(supplierUid_, supplierUid) };


    // supplierUrl Field Functions 
    bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
    void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
    inline string getSupplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
    inline GetServiceResponseBody& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


    // supportContacts Field Functions 
    bool hasSupportContacts() const { return this->supportContacts_ != nullptr;};
    void deleteSupportContacts() { this->supportContacts_ = nullptr;};
    inline const vector<GetServiceResponseBody::SupportContacts> & getSupportContacts() const { DARABONBA_PTR_GET_CONST(supportContacts_, vector<GetServiceResponseBody::SupportContacts>) };
    inline vector<GetServiceResponseBody::SupportContacts> getSupportContacts() { DARABONBA_PTR_GET(supportContacts_, vector<GetServiceResponseBody::SupportContacts>) };
    inline GetServiceResponseBody& setSupportContacts(const vector<GetServiceResponseBody::SupportContacts> & supportContacts) { DARABONBA_PTR_SET_VALUE(supportContacts_, supportContacts) };
    inline GetServiceResponseBody& setSupportContacts(vector<GetServiceResponseBody::SupportContacts> && supportContacts) { DARABONBA_PTR_SET_RVALUE(supportContacts_, supportContacts) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetServiceResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetServiceResponseBody::Tags>) };
    inline vector<GetServiceResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetServiceResponseBody::Tags>) };
    inline GetServiceResponseBody& setTags(const vector<GetServiceResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetServiceResponseBody& setTags(vector<GetServiceResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tenantType Field Functions 
    bool hasTenantType() const { return this->tenantType_ != nullptr;};
    void deleteTenantType() { this->tenantType_ = nullptr;};
    inline string getTenantType() const { DARABONBA_PTR_GET_DEFAULT(tenantType_, "") };
    inline GetServiceResponseBody& setTenantType(string tenantType) { DARABONBA_PTR_SET_VALUE(tenantType_, tenantType) };


    // trialDuration Field Functions 
    bool hasTrialDuration() const { return this->trialDuration_ != nullptr;};
    void deleteTrialDuration() { this->trialDuration_ = nullptr;};
    inline int64_t getTrialDuration() const { DARABONBA_PTR_GET_DEFAULT(trialDuration_, 0L) };
    inline GetServiceResponseBody& setTrialDuration(int64_t trialDuration) { DARABONBA_PTR_SET_VALUE(trialDuration_, trialDuration) };


    // trialType Field Functions 
    bool hasTrialType() const { return this->trialType_ != nullptr;};
    void deleteTrialType() { this->trialType_ = nullptr;};
    inline string getTrialType() const { DARABONBA_PTR_GET_DEFAULT(trialType_, "") };
    inline GetServiceResponseBody& setTrialType(string trialType) { DARABONBA_PTR_SET_VALUE(trialType_, trialType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetServiceResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline GetServiceResponseBody& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The alert configurations of the service.
    // 
    // >  This parameter takes effect only when you specify an alert policy for **PolicyNames**.
    shared_ptr<string> alarmMetadata_ {};
    // The categories of the Flow.
    shared_ptr<string> categories_ {};
    // The information about the order placed in Alibaba Cloud Marketplace.
    shared_ptr<GetServiceResponseBody::Commodity> commodity_ {};
    // Compliance check metadata.
    shared_ptr<GetServiceResponseBody::ComplianceMetadata> complianceMetadata_ {};
    // Service deployment approach, Valid values：
    // 
    // - NoWhere
    // - Marketplace
    // - ComputeNest
    shared_ptr<string> deployFrom_ {};
    // The storage configurations of the service. The format in which the deployment information of a service is stored varies based on the deployment type of the service. In this case, the deployment information is stored in the JSON string format.
    shared_ptr<string> deployMetadata_ {};
    // The deployment type of the service. Valid values:
    // 
    // *   ros: The service is deployed by using Resource Orchestration Service (ROS).
    // *   terraform: The service is deployed by using Terraform.
    shared_ptr<string> deployType_ {};
    // The duration for which hosted O\\&M is implemented. Unit: seconds.
    shared_ptr<int64_t> duration_ {};
    // Information about the ram role created in the service template.
    shared_ptr<vector<GetServiceResponseBody::InstanceRoleInfos>> instanceRoleInfos_ {};
    // Indicates whether the hosted O\\&M feature is enabled for the service. Default value: false. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  This parameter is returned if you set **ServiceType** to **private**.
    shared_ptr<bool> isSupportOperated_ {};
    // The license metadata.
    shared_ptr<string> licenseMetadata_ {};
    // The logging configurations.
    shared_ptr<string> logMetadata_ {};
    // The operation metadata.
    shared_ptr<string> operationMetadata_ {};
    // The permissions on the service. Valid values:
    // 
    // *   Deployable: Permissions to deploy the service.
    // *   Accessible: Permissions to access the service.
    shared_ptr<string> permission_ {};
    // The policy name. The name can be up to 128 characters in length. Separate multiple names with commas (,). Only hosted O\\&M policies are supported.
    shared_ptr<string> policyNames_ {};
    // The time when the service was published.
    shared_ptr<string> publishTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Service document information.
    shared_ptr<vector<GetServiceResponseBody::ServiceDocumentInfos>> serviceDocumentInfos_ {};
    // The service ID.
    shared_ptr<string> serviceId_ {};
    // The information about the service.
    shared_ptr<vector<GetServiceResponseBody::ServiceInfos>> serviceInfos_ {};
    shared_ptr<vector<GetServiceResponseBody::ServiceLocaleConfigs>> serviceLocaleConfigs_ {};
    // The URL of the service page.
    shared_ptr<string> serviceProductUrl_ {};
    // The type of the service. Valid values:
    // 
    // - private: The service is a private service and is deployed within the account of a customer.
    // - managed: The service is a fully managed service and is deployed within the account of a service provider.
    // - operation: The service is a hosted O&M service.
    shared_ptr<string> serviceType_ {};
    // The permission type of the deployment URL. Valid values:
    // 
    // *   Public: All users can go to the URL to create a service instance or a trial service instance.
    // *   Restricted: Only users in the whitelist can go to the URL to create a service instance or a trial service instance.
    // *   OnlyFormalRestricted: Only users in the whitelist can go to the URL to create a service instance.
    // *   OnlyTrailRestricted: Only users in the whitelist can go to the URL to create a trial service instance.
    // *   Hidden: Users not in the whitelist cannot see the service details page when they go to the URL and cannot request deployment permissions.
    shared_ptr<string> shareType_ {};
    // The deploy status of the service. Valid values:
    // - Draft
    // - Beta
    // - Submitted
    // - Approved
    // - Launching
    // - Online
    // - Offline
    // - Creating
    shared_ptr<string> status_ {};
    // The description of service provider.
    shared_ptr<string> supplierDesc_ {};
    // The Logo of service provider.
    shared_ptr<string> supplierLogo_ {};
    // The name of the service provider.
    shared_ptr<string> supplierName_ {};
    // The Alibaba Cloud account ID of the service provider.
    shared_ptr<int64_t> supplierUid_ {};
    // The URL of the service provider.
    shared_ptr<string> supplierUrl_ {};
    // Contact information of the service provider
    shared_ptr<vector<GetServiceResponseBody::SupportContacts>> supportContacts_ {};
    // The tags.
    shared_ptr<vector<GetServiceResponseBody::Tags>> tags_ {};
    // The type of the tenant. Valid values:
    // 
    // *   SingleTenant
    // *   MultiTenant
    shared_ptr<string> tenantType_ {};
    // The trial duration. Unit: day. The maximum trial duration cannot exceed 30 days.
    shared_ptr<int64_t> trialDuration_ {};
    // The trial policy. Valid values:
    // 
    // *   Trial: Trials are supported.
    // *   NotTrial: Trials are not supported.
    shared_ptr<string> trialType_ {};
    // The service version.
    shared_ptr<string> version_ {};
    // The version name.
    shared_ptr<string> versionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif

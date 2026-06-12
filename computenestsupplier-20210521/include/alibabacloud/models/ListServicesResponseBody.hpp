// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESRESPONSEBODY_HPP_
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
  class ListServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Services, services_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListServicesResponseBody() = default ;
    ListServicesResponseBody(const ListServicesResponseBody &) = default ;
    ListServicesResponseBody(ListServicesResponseBody &&) = default ;
    ListServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServicesResponseBody() = default ;
    ListServicesResponseBody& operator=(const ListServicesResponseBody &) = default ;
    ListServicesResponseBody& operator=(ListServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Services : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Services& obj) { 
        DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
        DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
        DARABONBA_PTR_TO_JSON(ArtifactVersion, artifactVersion_);
        DARABONBA_PTR_TO_JSON(BuildInfo, buildInfo_);
        DARABONBA_PTR_TO_JSON(Categories, categories_);
        DARABONBA_PTR_TO_JSON(Commodity, commodity_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
        DARABONBA_PTR_TO_JSON(DeployType, deployType_);
        DARABONBA_PTR_TO_JSON(HasBeta, hasBeta_);
        DARABONBA_PTR_TO_JSON(HasDraft, hasDraft_);
        DARABONBA_PTR_TO_JSON(LatestResellSourceServiceVersion, latestResellSourceServiceVersion_);
        DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
        DARABONBA_PTR_TO_JSON(RelationType, relationType_);
        DARABONBA_PTR_TO_JSON(ResellApplyStatus, resellApplyStatus_);
        DARABONBA_PTR_TO_JSON(ResellServiceId, resellServiceId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ServiceDiscoverable, serviceDiscoverable_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceInfos, serviceInfos_);
        DARABONBA_PTR_TO_JSON(ServiceLocaleConfigs, serviceLocaleConfigs_);
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_TO_JSON(ShareType, shareType_);
        DARABONBA_PTR_TO_JSON(SourceImage, sourceImage_);
        DARABONBA_PTR_TO_JSON(SourceServiceId, sourceServiceId_);
        DARABONBA_PTR_TO_JSON(SourceServiceVersion, sourceServiceVersion_);
        DARABONBA_PTR_TO_JSON(SourceSupplierName, sourceSupplierName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
        DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TenantType, tenantType_);
        DARABONBA_PTR_TO_JSON(TrialType, trialType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VersionName, versionName_);
        DARABONBA_PTR_TO_JSON(VirtualInternetService, virtualInternetService_);
      };
      friend void from_json(const Darabonba::Json& j, Services& obj) { 
        DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
        DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
        DARABONBA_PTR_FROM_JSON(ArtifactVersion, artifactVersion_);
        DARABONBA_PTR_FROM_JSON(BuildInfo, buildInfo_);
        DARABONBA_PTR_FROM_JSON(Categories, categories_);
        DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
        DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
        DARABONBA_PTR_FROM_JSON(HasBeta, hasBeta_);
        DARABONBA_PTR_FROM_JSON(HasDraft, hasDraft_);
        DARABONBA_PTR_FROM_JSON(LatestResellSourceServiceVersion, latestResellSourceServiceVersion_);
        DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
        DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
        DARABONBA_PTR_FROM_JSON(ResellApplyStatus, resellApplyStatus_);
        DARABONBA_PTR_FROM_JSON(ResellServiceId, resellServiceId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ServiceDiscoverable, serviceDiscoverable_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceInfos, serviceInfos_);
        DARABONBA_PTR_FROM_JSON(ServiceLocaleConfigs, serviceLocaleConfigs_);
        DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
        DARABONBA_PTR_FROM_JSON(SourceImage, sourceImage_);
        DARABONBA_PTR_FROM_JSON(SourceServiceId, sourceServiceId_);
        DARABONBA_PTR_FROM_JSON(SourceServiceVersion, sourceServiceVersion_);
        DARABONBA_PTR_FROM_JSON(SourceSupplierName, sourceSupplierName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
        DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TenantType, tenantType_);
        DARABONBA_PTR_FROM_JSON(TrialType, trialType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
        DARABONBA_PTR_FROM_JSON(VirtualInternetService, virtualInternetService_);
      };
      Services() = default ;
      Services(const Services &) = default ;
      Services(Services &&) = default ;
      Services(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Services() = default ;
      Services& operator=(const Services &) = default ;
      Services& operator=(Services &&) = default ;
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
        // The original value of the business information.
        shared_ptr<string> originalValue_ {};
        // The Chinese value of the business information.
        shared_ptr<string> zhValue_ {};
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
        // The language of the service configuration. Valid values:
        // 
        // - zh-CN: Chinese.
        // 
        // - en-US: English.
        shared_ptr<string> locale_ {};
        // The service name.
        shared_ptr<string> name_ {};
        // A brief description of the service.
        shared_ptr<string> shortDescription_ {};
      };

      class Commodity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Commodity& obj) { 
          DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_TO_JSON(SaasBoostMetadata, saasBoostMetadata_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Commodity& obj) { 
          DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_FROM_JSON(SaasBoostMetadata, saasBoostMetadata_);
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
        virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->saasBoostMetadata_ == nullptr && this->type_ == nullptr; };
        // commodityCode Field Functions 
        bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
        void deleteCommodityCode() { this->commodityCode_ = nullptr;};
        inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
        inline Commodity& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


        // saasBoostMetadata Field Functions 
        bool hasSaasBoostMetadata() const { return this->saasBoostMetadata_ != nullptr;};
        void deleteSaasBoostMetadata() { this->saasBoostMetadata_ = nullptr;};
        inline string getSaasBoostMetadata() const { DARABONBA_PTR_GET_DEFAULT(saasBoostMetadata_, "") };
        inline Commodity& setSaasBoostMetadata(string saasBoostMetadata) { DARABONBA_PTR_SET_VALUE(saasBoostMetadata_, saasBoostMetadata) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Commodity& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The commodity code.
        shared_ptr<string> commodityCode_ {};
        // The metadata of the SaaS Boost configuration.
        shared_ptr<string> saasBoostMetadata_ {};
        // The type. Valid values:
        // 
        // - Marketplace: Alibaba Cloud Marketplace.
        // 
        // - Css: Lingxiao.
        // 
        // - SaasBoost: SaaS Boost.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->approvalType_ == nullptr
        && this->artifactId_ == nullptr && this->artifactVersion_ == nullptr && this->buildInfo_ == nullptr && this->categories_ == nullptr && this->commodity_ == nullptr
        && this->commodityCode_ == nullptr && this->createTime_ == nullptr && this->defaultVersion_ == nullptr && this->deployType_ == nullptr && this->hasBeta_ == nullptr
        && this->hasDraft_ == nullptr && this->latestResellSourceServiceVersion_ == nullptr && this->publishTime_ == nullptr && this->relationType_ == nullptr && this->resellApplyStatus_ == nullptr
        && this->resellServiceId_ == nullptr && this->resourceGroupId_ == nullptr && this->serviceDiscoverable_ == nullptr && this->serviceId_ == nullptr && this->serviceInfos_ == nullptr
        && this->serviceLocaleConfigs_ == nullptr && this->serviceType_ == nullptr && this->shareType_ == nullptr && this->sourceImage_ == nullptr && this->sourceServiceId_ == nullptr
        && this->sourceServiceVersion_ == nullptr && this->sourceSupplierName_ == nullptr && this->status_ == nullptr && this->supplierName_ == nullptr && this->supplierUrl_ == nullptr
        && this->tags_ == nullptr && this->tenantType_ == nullptr && this->trialType_ == nullptr && this->updateTime_ == nullptr && this->version_ == nullptr
        && this->versionName_ == nullptr && this->virtualInternetService_ == nullptr; };
      // approvalType Field Functions 
      bool hasApprovalType() const { return this->approvalType_ != nullptr;};
      void deleteApprovalType() { this->approvalType_ = nullptr;};
      inline string getApprovalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, "") };
      inline Services& setApprovalType(string approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


      // artifactId Field Functions 
      bool hasArtifactId() const { return this->artifactId_ != nullptr;};
      void deleteArtifactId() { this->artifactId_ = nullptr;};
      inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
      inline Services& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


      // artifactVersion Field Functions 
      bool hasArtifactVersion() const { return this->artifactVersion_ != nullptr;};
      void deleteArtifactVersion() { this->artifactVersion_ = nullptr;};
      inline string getArtifactVersion() const { DARABONBA_PTR_GET_DEFAULT(artifactVersion_, "") };
      inline Services& setArtifactVersion(string artifactVersion) { DARABONBA_PTR_SET_VALUE(artifactVersion_, artifactVersion) };


      // buildInfo Field Functions 
      bool hasBuildInfo() const { return this->buildInfo_ != nullptr;};
      void deleteBuildInfo() { this->buildInfo_ = nullptr;};
      inline string getBuildInfo() const { DARABONBA_PTR_GET_DEFAULT(buildInfo_, "") };
      inline Services& setBuildInfo(string buildInfo) { DARABONBA_PTR_SET_VALUE(buildInfo_, buildInfo) };


      // categories Field Functions 
      bool hasCategories() const { return this->categories_ != nullptr;};
      void deleteCategories() { this->categories_ = nullptr;};
      inline string getCategories() const { DARABONBA_PTR_GET_DEFAULT(categories_, "") };
      inline Services& setCategories(string categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };


      // commodity Field Functions 
      bool hasCommodity() const { return this->commodity_ != nullptr;};
      void deleteCommodity() { this->commodity_ = nullptr;};
      inline const Services::Commodity & getCommodity() const { DARABONBA_PTR_GET_CONST(commodity_, Services::Commodity) };
      inline Services::Commodity getCommodity() { DARABONBA_PTR_GET(commodity_, Services::Commodity) };
      inline Services& setCommodity(const Services::Commodity & commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };
      inline Services& setCommodity(Services::Commodity && commodity) { DARABONBA_PTR_SET_RVALUE(commodity_, commodity) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Services& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Services& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // defaultVersion Field Functions 
      bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
      void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
      inline bool getDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, false) };
      inline Services& setDefaultVersion(bool defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


      // deployType Field Functions 
      bool hasDeployType() const { return this->deployType_ != nullptr;};
      void deleteDeployType() { this->deployType_ = nullptr;};
      inline string getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
      inline Services& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


      // hasBeta Field Functions 
      bool hasHasBeta() const { return this->hasBeta_ != nullptr;};
      void deleteHasBeta() { this->hasBeta_ = nullptr;};
      inline bool getHasBeta() const { DARABONBA_PTR_GET_DEFAULT(hasBeta_, false) };
      inline Services& setHasBeta(bool hasBeta) { DARABONBA_PTR_SET_VALUE(hasBeta_, hasBeta) };


      // hasDraft Field Functions 
      bool hasHasDraft() const { return this->hasDraft_ != nullptr;};
      void deleteHasDraft() { this->hasDraft_ = nullptr;};
      inline bool getHasDraft() const { DARABONBA_PTR_GET_DEFAULT(hasDraft_, false) };
      inline Services& setHasDraft(bool hasDraft) { DARABONBA_PTR_SET_VALUE(hasDraft_, hasDraft) };


      // latestResellSourceServiceVersion Field Functions 
      bool hasLatestResellSourceServiceVersion() const { return this->latestResellSourceServiceVersion_ != nullptr;};
      void deleteLatestResellSourceServiceVersion() { this->latestResellSourceServiceVersion_ = nullptr;};
      inline string getLatestResellSourceServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(latestResellSourceServiceVersion_, "") };
      inline Services& setLatestResellSourceServiceVersion(string latestResellSourceServiceVersion) { DARABONBA_PTR_SET_VALUE(latestResellSourceServiceVersion_, latestResellSourceServiceVersion) };


      // publishTime Field Functions 
      bool hasPublishTime() const { return this->publishTime_ != nullptr;};
      void deletePublishTime() { this->publishTime_ = nullptr;};
      inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
      inline Services& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


      // relationType Field Functions 
      bool hasRelationType() const { return this->relationType_ != nullptr;};
      void deleteRelationType() { this->relationType_ = nullptr;};
      inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
      inline Services& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


      // resellApplyStatus Field Functions 
      bool hasResellApplyStatus() const { return this->resellApplyStatus_ != nullptr;};
      void deleteResellApplyStatus() { this->resellApplyStatus_ = nullptr;};
      inline string getResellApplyStatus() const { DARABONBA_PTR_GET_DEFAULT(resellApplyStatus_, "") };
      inline Services& setResellApplyStatus(string resellApplyStatus) { DARABONBA_PTR_SET_VALUE(resellApplyStatus_, resellApplyStatus) };


      // resellServiceId Field Functions 
      bool hasResellServiceId() const { return this->resellServiceId_ != nullptr;};
      void deleteResellServiceId() { this->resellServiceId_ = nullptr;};
      inline string getResellServiceId() const { DARABONBA_PTR_GET_DEFAULT(resellServiceId_, "") };
      inline Services& setResellServiceId(string resellServiceId) { DARABONBA_PTR_SET_VALUE(resellServiceId_, resellServiceId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Services& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // serviceDiscoverable Field Functions 
      bool hasServiceDiscoverable() const { return this->serviceDiscoverable_ != nullptr;};
      void deleteServiceDiscoverable() { this->serviceDiscoverable_ = nullptr;};
      inline string getServiceDiscoverable() const { DARABONBA_PTR_GET_DEFAULT(serviceDiscoverable_, "") };
      inline Services& setServiceDiscoverable(string serviceDiscoverable) { DARABONBA_PTR_SET_VALUE(serviceDiscoverable_, serviceDiscoverable) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Services& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceInfos Field Functions 
      bool hasServiceInfos() const { return this->serviceInfos_ != nullptr;};
      void deleteServiceInfos() { this->serviceInfos_ = nullptr;};
      inline const vector<Services::ServiceInfos> & getServiceInfos() const { DARABONBA_PTR_GET_CONST(serviceInfos_, vector<Services::ServiceInfos>) };
      inline vector<Services::ServiceInfos> getServiceInfos() { DARABONBA_PTR_GET(serviceInfos_, vector<Services::ServiceInfos>) };
      inline Services& setServiceInfos(const vector<Services::ServiceInfos> & serviceInfos) { DARABONBA_PTR_SET_VALUE(serviceInfos_, serviceInfos) };
      inline Services& setServiceInfos(vector<Services::ServiceInfos> && serviceInfos) { DARABONBA_PTR_SET_RVALUE(serviceInfos_, serviceInfos) };


      // serviceLocaleConfigs Field Functions 
      bool hasServiceLocaleConfigs() const { return this->serviceLocaleConfigs_ != nullptr;};
      void deleteServiceLocaleConfigs() { this->serviceLocaleConfigs_ = nullptr;};
      inline const vector<Services::ServiceLocaleConfigs> & getServiceLocaleConfigs() const { DARABONBA_PTR_GET_CONST(serviceLocaleConfigs_, vector<Services::ServiceLocaleConfigs>) };
      inline vector<Services::ServiceLocaleConfigs> getServiceLocaleConfigs() { DARABONBA_PTR_GET(serviceLocaleConfigs_, vector<Services::ServiceLocaleConfigs>) };
      inline Services& setServiceLocaleConfigs(const vector<Services::ServiceLocaleConfigs> & serviceLocaleConfigs) { DARABONBA_PTR_SET_VALUE(serviceLocaleConfigs_, serviceLocaleConfigs) };
      inline Services& setServiceLocaleConfigs(vector<Services::ServiceLocaleConfigs> && serviceLocaleConfigs) { DARABONBA_PTR_SET_RVALUE(serviceLocaleConfigs_, serviceLocaleConfigs) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline Services& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // shareType Field Functions 
      bool hasShareType() const { return this->shareType_ != nullptr;};
      void deleteShareType() { this->shareType_ = nullptr;};
      inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
      inline Services& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


      // sourceImage Field Functions 
      bool hasSourceImage() const { return this->sourceImage_ != nullptr;};
      void deleteSourceImage() { this->sourceImage_ = nullptr;};
      inline string getSourceImage() const { DARABONBA_PTR_GET_DEFAULT(sourceImage_, "") };
      inline Services& setSourceImage(string sourceImage) { DARABONBA_PTR_SET_VALUE(sourceImage_, sourceImage) };


      // sourceServiceId Field Functions 
      bool hasSourceServiceId() const { return this->sourceServiceId_ != nullptr;};
      void deleteSourceServiceId() { this->sourceServiceId_ = nullptr;};
      inline string getSourceServiceId() const { DARABONBA_PTR_GET_DEFAULT(sourceServiceId_, "") };
      inline Services& setSourceServiceId(string sourceServiceId) { DARABONBA_PTR_SET_VALUE(sourceServiceId_, sourceServiceId) };


      // sourceServiceVersion Field Functions 
      bool hasSourceServiceVersion() const { return this->sourceServiceVersion_ != nullptr;};
      void deleteSourceServiceVersion() { this->sourceServiceVersion_ = nullptr;};
      inline string getSourceServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceServiceVersion_, "") };
      inline Services& setSourceServiceVersion(string sourceServiceVersion) { DARABONBA_PTR_SET_VALUE(sourceServiceVersion_, sourceServiceVersion) };


      // sourceSupplierName Field Functions 
      bool hasSourceSupplierName() const { return this->sourceSupplierName_ != nullptr;};
      void deleteSourceSupplierName() { this->sourceSupplierName_ = nullptr;};
      inline string getSourceSupplierName() const { DARABONBA_PTR_GET_DEFAULT(sourceSupplierName_, "") };
      inline Services& setSourceSupplierName(string sourceSupplierName) { DARABONBA_PTR_SET_VALUE(sourceSupplierName_, sourceSupplierName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Services& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supplierName Field Functions 
      bool hasSupplierName() const { return this->supplierName_ != nullptr;};
      void deleteSupplierName() { this->supplierName_ = nullptr;};
      inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
      inline Services& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


      // supplierUrl Field Functions 
      bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
      void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
      inline string getSupplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
      inline Services& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Services::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Services::Tags>) };
      inline vector<Services::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Services::Tags>) };
      inline Services& setTags(const vector<Services::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Services& setTags(vector<Services::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // tenantType Field Functions 
      bool hasTenantType() const { return this->tenantType_ != nullptr;};
      void deleteTenantType() { this->tenantType_ = nullptr;};
      inline string getTenantType() const { DARABONBA_PTR_GET_DEFAULT(tenantType_, "") };
      inline Services& setTenantType(string tenantType) { DARABONBA_PTR_SET_VALUE(tenantType_, tenantType) };


      // trialType Field Functions 
      bool hasTrialType() const { return this->trialType_ != nullptr;};
      void deleteTrialType() { this->trialType_ = nullptr;};
      inline string getTrialType() const { DARABONBA_PTR_GET_DEFAULT(trialType_, "") };
      inline Services& setTrialType(string trialType) { DARABONBA_PTR_SET_VALUE(trialType_, trialType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Services& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Services& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // versionName Field Functions 
      bool hasVersionName() const { return this->versionName_ != nullptr;};
      void deleteVersionName() { this->versionName_ = nullptr;};
      inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
      inline Services& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


      // virtualInternetService Field Functions 
      bool hasVirtualInternetService() const { return this->virtualInternetService_ != nullptr;};
      void deleteVirtualInternetService() { this->virtualInternetService_ = nullptr;};
      inline string getVirtualInternetService() const { DARABONBA_PTR_GET_DEFAULT(virtualInternetService_, "") };
      inline Services& setVirtualInternetService(string virtualInternetService) { DARABONBA_PTR_SET_VALUE(virtualInternetService_, virtualInternetService) };


    protected:
      // The approval type for service usage requests. Valid values:
      // 
      // - Manual: Manual approval.
      // 
      // - AutoPass: Automatic approval.
      shared_ptr<string> approvalType_ {};
      // The artifact ID.
      shared_ptr<string> artifactId_ {};
      // The artifact version.
      shared_ptr<string> artifactVersion_ {};
      // The information about the service build.
      shared_ptr<string> buildInfo_ {};
      // The service category.
      shared_ptr<string> categories_ {};
      // The commodity specifications.
      shared_ptr<Services::Commodity> commodity_ {};
      // The commodity code of the service in Alibaba Cloud Marketplace.
      shared_ptr<string> commodityCode_ {};
      // The time when the service was created.
      shared_ptr<string> createTime_ {};
      // Indicates whether the service is the default version. Valid values:
      // 
      // - false: The service is not the default version.
      // 
      // - true: The service is the default version.
      shared_ptr<bool> defaultVersion_ {};
      // The deployment type. Valid values:
      // 
      // - ros: The service is deployed using ROS.
      // 
      // - terraform: The service is deployed using Terraform.
      // 
      // - spi: The service is deployed by calling an SPI.
      // 
      // - operation: The service is deployed using Alibaba Cloud Managed Services.
      // 
      // - container: The service is deployed using a container.
      shared_ptr<string> deployType_ {};
      // Indicates whether the service has a beta version. Valid values:
      // 
      // - true: Yes.
      // 
      // - false: No.
      shared_ptr<bool> hasBeta_ {};
      // Indicates whether the service has a draft version. Valid values:
      // 
      // - true: Yes.
      // 
      // - false: No.
      shared_ptr<bool> hasDraft_ {};
      // The latest version of the source service for distribution.
      shared_ptr<string> latestResellSourceServiceVersion_ {};
      // The time when the service was published.
      shared_ptr<string> publishTime_ {};
      // The artifact association type. Valid values:
      // 
      // - ServiceDeployment: Service deployment.
      // 
      // - ServiceUpgrade: Service upgrade.
      shared_ptr<string> relationType_ {};
      // The distribution authorization status of the service. Valid values:
      // 
      // - CanApply: You can apply for authorization.
      // 
      // - Applied: An application has been submitted.
      // 
      // - Approved: The application is approved.
      shared_ptr<string> resellApplyStatus_ {};
      // The ID of the distributed service.
      shared_ptr<string> resellServiceId_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // Indicates whether the service is discoverable. Valid values:
      // 
      // - INVISIBLE: Not discoverable.
      // 
      // - DISCOVERABLE: Discoverable.
      shared_ptr<string> serviceDiscoverable_ {};
      // The service ID.
      shared_ptr<string> serviceId_ {};
      // The service information.
      shared_ptr<vector<Services::ServiceInfos>> serviceInfos_ {};
      // The multi-language configurations of the service.
      shared_ptr<vector<Services::ServiceLocaleConfigs>> serviceLocaleConfigs_ {};
      // The service type. Valid values:
      // 
      // - private: The service is deployed in the user\\"s account.
      // 
      // - managed: The service is deployed in the service provider\\"s account.
      // 
      // - operation: It is an Alibaba Cloud Managed Service.
      shared_ptr<string> serviceType_ {};
      // The sharing type. Valid values:
      // 
      // - Public: Public. Official and trial deployments are not restricted.
      // 
      // - Restricted: Restricted. Official and trial deployments are restricted.
      // 
      // - OnlyFormalRestricted: Only official deployments are restricted.
      // 
      // - OnlyTrailRestricted: Only trial deployments are restricted.
      // 
      // - Hidden: Hidden. The service is not visible and you cannot request deployment permissions.
      shared_ptr<string> shareType_ {};
      // The source image.
      shared_ptr<string> sourceImage_ {};
      // The ID of the source service for distribution.
      shared_ptr<string> sourceServiceId_ {};
      // The version of the source service for distribution.
      shared_ptr<string> sourceServiceVersion_ {};
      // The name of the source service provider for distribution.
      shared_ptr<string> sourceSupplierName_ {};
      // The service status. Valid values:
      // 
      // - Draft: The service is in the Draft state.
      // 
      // - Submitted: The service is submitted for review. Modifications are not allowed.
      // 
      // - Approved: The service is approved. Modifications are not allowed. The service can be published.
      // 
      // - Launching: The service is being published.
      // 
      // - Online: The service is published.
      // 
      // - Offline: The service is unpublished.
      shared_ptr<string> status_ {};
      // The name of the service provider.
      shared_ptr<string> supplierName_ {};
      // The URL of the service provider.
      shared_ptr<string> supplierUrl_ {};
      // The service tags.
      shared_ptr<vector<Services::Tags>> tags_ {};
      // The tenant type for the managed service. Valid values:
      // 
      // - SingleTenant: Single-tenant.
      // 
      // - MultiTenant: Multi-tenant.
      shared_ptr<string> tenantType_ {};
      // The trial policy. Valid values:
      // 
      // - Trial: The service supports a trial.
      // 
      // - NotTrial: The service does not support a trial.
      shared_ptr<string> trialType_ {};
      // The time when the service was last updated.
      shared_ptr<string> updateTime_ {};
      // The service version.
      shared_ptr<string> version_ {};
      // The custom version name defined by the service provider.
      shared_ptr<string> versionName_ {};
      // Indicates whether the service is a virtual Internet service. Valid values:
      // 
      // - false: No.
      // 
      // - true: Yes.
      shared_ptr<string> virtualInternetService_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->services_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServicesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServicesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<ListServicesResponseBody::Services> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<ListServicesResponseBody::Services>) };
    inline vector<ListServicesResponseBody::Services> getServices() { DARABONBA_PTR_GET(services_, vector<ListServicesResponseBody::Services>) };
    inline ListServicesResponseBody& setServices(const vector<ListServicesResponseBody::Services> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline ListServicesResponseBody& setServices(vector<ListServicesResponseBody::Services> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListServicesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on each page. Maximum value: 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of services.
    shared_ptr<vector<ListServicesResponseBody::Services>> services_ {};
    // The total number of entries that meet the filter criteria.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESRESPONSEBODY_HPP_
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
        DARABONBA_PTR_TO_JSON(Categories, categories_);
        DARABONBA_PTR_TO_JSON(Commodity, commodity_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(DeployFrom, deployFrom_);
        DARABONBA_PTR_TO_JSON(DeployType, deployType_);
        DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceInfos, serviceInfos_);
        DARABONBA_PTR_TO_JSON(ServiceLocaleConfigs, serviceLocaleConfigs_);
        DARABONBA_PTR_TO_JSON(ServiceProductUrl, serviceProductUrl_);
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
        DARABONBA_PTR_TO_JSON(SupplierNameEng, supplierNameEng_);
        DARABONBA_PTR_TO_JSON(SupplierUid, supplierUid_);
        DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TenantType, tenantType_);
        DARABONBA_PTR_TO_JSON(TrialDuration, trialDuration_);
        DARABONBA_PTR_TO_JSON(TrialType, trialType_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VersionName, versionName_);
        DARABONBA_PTR_TO_JSON(VirtualInternetService, virtualInternetService_);
      };
      friend void from_json(const Darabonba::Json& j, Services& obj) { 
        DARABONBA_PTR_FROM_JSON(Categories, categories_);
        DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(DeployFrom, deployFrom_);
        DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
        DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceInfos, serviceInfos_);
        DARABONBA_PTR_FROM_JSON(ServiceLocaleConfigs, serviceLocaleConfigs_);
        DARABONBA_PTR_FROM_JSON(ServiceProductUrl, serviceProductUrl_);
        DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
        DARABONBA_PTR_FROM_JSON(SupplierNameEng, supplierNameEng_);
        DARABONBA_PTR_FROM_JSON(SupplierUid, supplierUid_);
        DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TenantType, tenantType_);
        DARABONBA_PTR_FROM_JSON(TrialDuration, trialDuration_);
        DARABONBA_PTR_FROM_JSON(TrialType, trialType_);
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
        // 
        // >  This parameter is required.
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
        shared_ptr<string> enValue_ {};
        shared_ptr<string> originalValue_ {};
        shared_ptr<string> zhValue_ {};
      };

      class ServiceInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServiceInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Image, image_);
          DARABONBA_PTR_TO_JSON(Locale, locale_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ShortDescription, shortDescription_);
          DARABONBA_PTR_TO_JSON(Softwares, softwares_);
        };
        friend void from_json(const Darabonba::Json& j, ServiceInfos& obj) { 
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
          // The name of the software.
          shared_ptr<string> name_ {};
          // The version of the software.
          shared_ptr<string> version_ {};
        };

        virtual bool empty() const override { return this->image_ == nullptr
        && this->locale_ == nullptr && this->name_ == nullptr && this->shortDescription_ == nullptr && this->softwares_ == nullptr; };
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
        // The URL of the service icon.
        shared_ptr<string> image_ {};
        // The language of the service. Valid values:
        // 
        // *   zh-CN: Chinese.
        // *   en-US: English.
        shared_ptr<string> locale_ {};
        // The name of the service.
        shared_ptr<string> name_ {};
        // The description of the service.
        shared_ptr<string> shortDescription_ {};
        // Service software information.
        shared_ptr<vector<ServiceInfos::Softwares>> softwares_ {};
      };

      class Commodity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Commodity& obj) { 
          DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_TO_JSON(DeployPage, deployPage_);
        };
        friend void from_json(const Darabonba::Json& j, Commodity& obj) { 
          DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_FROM_JSON(DeployPage, deployPage_);
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
        && this->deployPage_ == nullptr; };
        // commodityCode Field Functions 
        bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
        void deleteCommodityCode() { this->commodityCode_ = nullptr;};
        inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
        inline Commodity& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


        // deployPage Field Functions 
        bool hasDeployPage() const { return this->deployPage_ != nullptr;};
        void deleteDeployPage() { this->deployPage_ = nullptr;};
        inline string getDeployPage() const { DARABONBA_PTR_GET_DEFAULT(deployPage_, "") };
        inline Commodity& setDeployPage(string deployPage) { DARABONBA_PTR_SET_VALUE(deployPage_, deployPage) };


      protected:
        // The commodity code.
        shared_ptr<string> commodityCode_ {};
        // Deploy Page.
        shared_ptr<string> deployPage_ {};
      };

      virtual bool empty() const override { return this->categories_ == nullptr
        && this->commodity_ == nullptr && this->commodityCode_ == nullptr && this->deployFrom_ == nullptr && this->deployType_ == nullptr && this->publishTime_ == nullptr
        && this->score_ == nullptr && this->serviceId_ == nullptr && this->serviceInfos_ == nullptr && this->serviceLocaleConfigs_ == nullptr && this->serviceProductUrl_ == nullptr
        && this->serviceType_ == nullptr && this->status_ == nullptr && this->supplierName_ == nullptr && this->supplierNameEng_ == nullptr && this->supplierUid_ == nullptr
        && this->supplierUrl_ == nullptr && this->tags_ == nullptr && this->tenantType_ == nullptr && this->trialDuration_ == nullptr && this->trialType_ == nullptr
        && this->version_ == nullptr && this->versionName_ == nullptr && this->virtualInternetService_ == nullptr; };
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


      // deployFrom Field Functions 
      bool hasDeployFrom() const { return this->deployFrom_ != nullptr;};
      void deleteDeployFrom() { this->deployFrom_ = nullptr;};
      inline string getDeployFrom() const { DARABONBA_PTR_GET_DEFAULT(deployFrom_, "") };
      inline Services& setDeployFrom(string deployFrom) { DARABONBA_PTR_SET_VALUE(deployFrom_, deployFrom) };


      // deployType Field Functions 
      bool hasDeployType() const { return this->deployType_ != nullptr;};
      void deleteDeployType() { this->deployType_ = nullptr;};
      inline string getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
      inline Services& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


      // publishTime Field Functions 
      bool hasPublishTime() const { return this->publishTime_ != nullptr;};
      void deletePublishTime() { this->publishTime_ = nullptr;};
      inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
      inline Services& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
      inline Services& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


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


      // serviceProductUrl Field Functions 
      bool hasServiceProductUrl() const { return this->serviceProductUrl_ != nullptr;};
      void deleteServiceProductUrl() { this->serviceProductUrl_ = nullptr;};
      inline string getServiceProductUrl() const { DARABONBA_PTR_GET_DEFAULT(serviceProductUrl_, "") };
      inline Services& setServiceProductUrl(string serviceProductUrl) { DARABONBA_PTR_SET_VALUE(serviceProductUrl_, serviceProductUrl) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline Services& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


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


      // supplierNameEng Field Functions 
      bool hasSupplierNameEng() const { return this->supplierNameEng_ != nullptr;};
      void deleteSupplierNameEng() { this->supplierNameEng_ = nullptr;};
      inline string getSupplierNameEng() const { DARABONBA_PTR_GET_DEFAULT(supplierNameEng_, "") };
      inline Services& setSupplierNameEng(string supplierNameEng) { DARABONBA_PTR_SET_VALUE(supplierNameEng_, supplierNameEng) };


      // supplierUid Field Functions 
      bool hasSupplierUid() const { return this->supplierUid_ != nullptr;};
      void deleteSupplierUid() { this->supplierUid_ = nullptr;};
      inline int64_t getSupplierUid() const { DARABONBA_PTR_GET_DEFAULT(supplierUid_, 0L) };
      inline Services& setSupplierUid(int64_t supplierUid) { DARABONBA_PTR_SET_VALUE(supplierUid_, supplierUid) };


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


      // trialDuration Field Functions 
      bool hasTrialDuration() const { return this->trialDuration_ != nullptr;};
      void deleteTrialDuration() { this->trialDuration_ = nullptr;};
      inline string getTrialDuration() const { DARABONBA_PTR_GET_DEFAULT(trialDuration_, "") };
      inline Services& setTrialDuration(string trialDuration) { DARABONBA_PTR_SET_VALUE(trialDuration_, trialDuration) };


      // trialType Field Functions 
      bool hasTrialType() const { return this->trialType_ != nullptr;};
      void deleteTrialType() { this->trialType_ = nullptr;};
      inline string getTrialType() const { DARABONBA_PTR_GET_DEFAULT(trialType_, "") };
      inline Services& setTrialType(string trialType) { DARABONBA_PTR_SET_VALUE(trialType_, trialType) };


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
      // The category of the service.
      shared_ptr<string> categories_ {};
      // The commodity details.
      shared_ptr<Services::Commodity> commodity_ {};
      // The commodity code of the service in Alibaba Cloud Marketplace.
      shared_ptr<string> commodityCode_ {};
      // Service deployment approach. Valid values:
      // - NoWhere
      // 
      // - Marketplace
      // 
      // - ComputeNest
      shared_ptr<string> deployFrom_ {};
      // The deployment type of the service. Valid values:
      // 
      // *   ros: The service is deployed by using Resource Orchestration Service (ROS).
      // *   terraform: The service is deployed by using Terraform.
      shared_ptr<string> deployType_ {};
      // The time when the service was published.
      shared_ptr<string> publishTime_ {};
      // Service recommendation score.
      shared_ptr<int32_t> score_ {};
      // The service ID.
      shared_ptr<string> serviceId_ {};
      // The service information.
      shared_ptr<vector<Services::ServiceInfos>> serviceInfos_ {};
      shared_ptr<vector<Services::ServiceLocaleConfigs>> serviceLocaleConfigs_ {};
      // The URL of the service page.
      shared_ptr<string> serviceProductUrl_ {};
      // The type of the service. Valid values:
      // 
      // - private: The service is a private service and is deployed within the account of a customer.
      // - managed: The service is a fully managed service and is deployed within the account of a service provider.
      // - operation: The service is a hosted O&M service.
      shared_ptr<string> serviceType_ {};
      // The state of the service. Valid values:
      // 
      // *   Draft: The service is a draft.
      // *   Submitted: The service is submitted for review. You cannot modify services in this state.
      // *   Approved: The service is approved. You cannot modify services in this state. You can publish services in this state.
      // *   Launching: The service is being published.
      // *   Online: The service is published.
      // *   Offline: The service is unpublished.
      shared_ptr<string> status_ {};
      // The name of the service provider.
      shared_ptr<string> supplierName_ {};
      // The name of service provider.
      shared_ptr<string> supplierNameEng_ {};
      // The Alibaba Cloud account ID of the service provider.
      shared_ptr<int64_t> supplierUid_ {};
      // The URL of the service provider.
      shared_ptr<string> supplierUrl_ {};
      // The tags.
      shared_ptr<vector<Services::Tags>> tags_ {};
      // The tenant type of the managed service. Valid values:
      // 
      // *   SingleTenant
      // *   MultiTenant
      shared_ptr<string> tenantType_ {};
      // The trial duration. Unit: day. The maximum trial duration cannot exceed 30 days.
      shared_ptr<string> trialDuration_ {};
      // The trial policy. Valid values:
      // 
      // *   Trial: Trials are supported.
      // *   NotTrial: Trials are not supported.
      shared_ptr<string> trialType_ {};
      // The version of the service.
      shared_ptr<string> version_ {};
      // The custom version name defined by the service provider.
      shared_ptr<string> versionName_ {};
      // Indicates whether the service is a virtual Internet service. Valid values:
      // 
      // *   false
      // *   true
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
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The services.
    shared_ptr<vector<ListServicesResponseBody::Services>> services_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif

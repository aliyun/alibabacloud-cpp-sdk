// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetResourceTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    GetResourceTypeResponseBody() = default ;
    GetResourceTypeResponseBody(const GetResourceTypeResponseBody &) = default ;
    GetResourceTypeResponseBody(GetResourceTypeResponseBody &&) = default ;
    GetResourceTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceTypeResponseBody() = default ;
    GetResourceTypeResponseBody& operator=(const GetResourceTypeResponseBody &) = default ;
    GetResourceTypeResponseBody& operator=(GetResourceTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceType : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceType& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(operations, operations_);
        DARABONBA_PTR_TO_JSON(product, product_);
        DARABONBA_PTR_TO_JSON(productName, productName_);
        DARABONBA_PTR_TO_JSON(productNameEn, productNameEn_);
        DARABONBA_ANY_TO_JSON(properties, properties_);
        DARABONBA_PTR_TO_JSON(resourceDetailPageUrl, resourceDetailPageUrl_);
        DARABONBA_PTR_TO_JSON(resourceListPageUrl, resourceListPageUrl_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(statusStartVersion, statusStartVersion_);
        DARABONBA_PTR_TO_JSON(subcategory, subcategory_);
        DARABONBA_PTR_TO_JSON(supportExported, supportExported_);
        DARABONBA_PTR_TO_JSON(terraformProviderVersion, terraformProviderVersion_);
        DARABONBA_PTR_TO_JSON(terraformResourceType, terraformResourceType_);
        DARABONBA_PTR_TO_JSON(title, title_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceType& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(operations, operations_);
        DARABONBA_PTR_FROM_JSON(product, product_);
        DARABONBA_PTR_FROM_JSON(productName, productName_);
        DARABONBA_PTR_FROM_JSON(productNameEn, productNameEn_);
        DARABONBA_ANY_FROM_JSON(properties, properties_);
        DARABONBA_PTR_FROM_JSON(resourceDetailPageUrl, resourceDetailPageUrl_);
        DARABONBA_PTR_FROM_JSON(resourceListPageUrl, resourceListPageUrl_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(statusStartVersion, statusStartVersion_);
        DARABONBA_PTR_FROM_JSON(subcategory, subcategory_);
        DARABONBA_PTR_FROM_JSON(supportExported, supportExported_);
        DARABONBA_PTR_FROM_JSON(terraformProviderVersion, terraformProviderVersion_);
        DARABONBA_PTR_FROM_JSON(terraformResourceType, terraformResourceType_);
        DARABONBA_PTR_FROM_JSON(title, title_);
      };
      ResourceType() = default ;
      ResourceType(const ResourceType &) = default ;
      ResourceType(ResourceType &&) = default ;
      ResourceType(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceType() = default ;
      ResourceType& operator=(const ResourceType &) = default ;
      ResourceType& operator=(ResourceType &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Operations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Operations& obj) { 
          DARABONBA_PTR_TO_JSON(apiName, apiName_);
          DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
          DARABONBA_PTR_TO_JSON(operationType, operationType_);
          DARABONBA_PTR_TO_JSON(serviceCode, serviceCode_);
        };
        friend void from_json(const Darabonba::Json& j, Operations& obj) { 
          DARABONBA_PTR_FROM_JSON(apiName, apiName_);
          DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
          DARABONBA_PTR_FROM_JSON(operationType, operationType_);
          DARABONBA_PTR_FROM_JSON(serviceCode, serviceCode_);
        };
        Operations() = default ;
        Operations(const Operations &) = default ;
        Operations(Operations &&) = default ;
        Operations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Operations() = default ;
        Operations& operator=(const Operations &) = default ;
        Operations& operator=(Operations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiName_ == nullptr
        && this->apiVersion_ == nullptr && this->operationType_ == nullptr && this->serviceCode_ == nullptr; };
        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline Operations& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // apiVersion Field Functions 
        bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
        void deleteApiVersion() { this->apiVersion_ = nullptr;};
        inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
        inline Operations& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


        // operationType Field Functions 
        bool hasOperationType() const { return this->operationType_ != nullptr;};
        void deleteOperationType() { this->operationType_ = nullptr;};
        inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
        inline Operations& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


        // serviceCode Field Functions 
        bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
        void deleteServiceCode() { this->serviceCode_ = nullptr;};
        inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
        inline Operations& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


      protected:
        shared_ptr<string> apiName_ {};
        shared_ptr<string> apiVersion_ {};
        shared_ptr<string> operationType_ {};
        // serviceCode
        shared_ptr<string> serviceCode_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->operations_ == nullptr && this->product_ == nullptr && this->productName_ == nullptr && this->productNameEn_ == nullptr && this->properties_ == nullptr
        && this->resourceDetailPageUrl_ == nullptr && this->resourceListPageUrl_ == nullptr && this->status_ == nullptr && this->statusStartVersion_ == nullptr && this->subcategory_ == nullptr
        && this->supportExported_ == nullptr && this->terraformProviderVersion_ == nullptr && this->terraformResourceType_ == nullptr && this->title_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ResourceType& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // operations Field Functions 
      bool hasOperations() const { return this->operations_ != nullptr;};
      void deleteOperations() { this->operations_ = nullptr;};
      inline const vector<ResourceType::Operations> & getOperations() const { DARABONBA_PTR_GET_CONST(operations_, vector<ResourceType::Operations>) };
      inline vector<ResourceType::Operations> getOperations() { DARABONBA_PTR_GET(operations_, vector<ResourceType::Operations>) };
      inline ResourceType& setOperations(const vector<ResourceType::Operations> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
      inline ResourceType& setOperations(vector<ResourceType::Operations> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline ResourceType& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline ResourceType& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // productNameEn Field Functions 
      bool hasProductNameEn() const { return this->productNameEn_ != nullptr;};
      void deleteProductNameEn() { this->productNameEn_ = nullptr;};
      inline string getProductNameEn() const { DARABONBA_PTR_GET_DEFAULT(productNameEn_, "") };
      inline ResourceType& setProductNameEn(string productNameEn) { DARABONBA_PTR_SET_VALUE(productNameEn_, productNameEn) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline       const Darabonba::Json & getProperties() const { DARABONBA_GET(properties_) };
      Darabonba::Json & getProperties() { DARABONBA_GET(properties_) };
      inline ResourceType& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
      inline ResourceType& setProperties(Darabonba::Json && properties) { DARABONBA_SET_RVALUE(properties_, properties) };


      // resourceDetailPageUrl Field Functions 
      bool hasResourceDetailPageUrl() const { return this->resourceDetailPageUrl_ != nullptr;};
      void deleteResourceDetailPageUrl() { this->resourceDetailPageUrl_ = nullptr;};
      inline string getResourceDetailPageUrl() const { DARABONBA_PTR_GET_DEFAULT(resourceDetailPageUrl_, "") };
      inline ResourceType& setResourceDetailPageUrl(string resourceDetailPageUrl) { DARABONBA_PTR_SET_VALUE(resourceDetailPageUrl_, resourceDetailPageUrl) };


      // resourceListPageUrl Field Functions 
      bool hasResourceListPageUrl() const { return this->resourceListPageUrl_ != nullptr;};
      void deleteResourceListPageUrl() { this->resourceListPageUrl_ = nullptr;};
      inline string getResourceListPageUrl() const { DARABONBA_PTR_GET_DEFAULT(resourceListPageUrl_, "") };
      inline ResourceType& setResourceListPageUrl(string resourceListPageUrl) { DARABONBA_PTR_SET_VALUE(resourceListPageUrl_, resourceListPageUrl) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResourceType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusStartVersion Field Functions 
      bool hasStatusStartVersion() const { return this->statusStartVersion_ != nullptr;};
      void deleteStatusStartVersion() { this->statusStartVersion_ = nullptr;};
      inline string getStatusStartVersion() const { DARABONBA_PTR_GET_DEFAULT(statusStartVersion_, "") };
      inline ResourceType& setStatusStartVersion(string statusStartVersion) { DARABONBA_PTR_SET_VALUE(statusStartVersion_, statusStartVersion) };


      // subcategory Field Functions 
      bool hasSubcategory() const { return this->subcategory_ != nullptr;};
      void deleteSubcategory() { this->subcategory_ = nullptr;};
      inline string getSubcategory() const { DARABONBA_PTR_GET_DEFAULT(subcategory_, "") };
      inline ResourceType& setSubcategory(string subcategory) { DARABONBA_PTR_SET_VALUE(subcategory_, subcategory) };


      // supportExported Field Functions 
      bool hasSupportExported() const { return this->supportExported_ != nullptr;};
      void deleteSupportExported() { this->supportExported_ = nullptr;};
      inline bool getSupportExported() const { DARABONBA_PTR_GET_DEFAULT(supportExported_, false) };
      inline ResourceType& setSupportExported(bool supportExported) { DARABONBA_PTR_SET_VALUE(supportExported_, supportExported) };


      // terraformProviderVersion Field Functions 
      bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
      void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
      inline string getTerraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
      inline ResourceType& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


      // terraformResourceType Field Functions 
      bool hasTerraformResourceType() const { return this->terraformResourceType_ != nullptr;};
      void deleteTerraformResourceType() { this->terraformResourceType_ = nullptr;};
      inline string getTerraformResourceType() const { DARABONBA_PTR_GET_DEFAULT(terraformResourceType_, "") };
      inline ResourceType& setTerraformResourceType(string terraformResourceType) { DARABONBA_PTR_SET_VALUE(terraformResourceType_, terraformResourceType) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ResourceType& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<vector<ResourceType::Operations>> operations_ {};
      shared_ptr<string> product_ {};
      shared_ptr<string> productName_ {};
      shared_ptr<string> productNameEn_ {};
      Darabonba::Json properties_ {};
      shared_ptr<string> resourceDetailPageUrl_ {};
      shared_ptr<string> resourceListPageUrl_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> statusStartVersion_ {};
      shared_ptr<string> subcategory_ {};
      shared_ptr<bool> supportExported_ {};
      shared_ptr<string> terraformProviderVersion_ {};
      shared_ptr<string> terraformResourceType_ {};
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline const GetResourceTypeResponseBody::ResourceType & getResourceType() const { DARABONBA_PTR_GET_CONST(resourceType_, GetResourceTypeResponseBody::ResourceType) };
    inline GetResourceTypeResponseBody::ResourceType getResourceType() { DARABONBA_PTR_GET(resourceType_, GetResourceTypeResponseBody::ResourceType) };
    inline GetResourceTypeResponseBody& setResourceType(const GetResourceTypeResponseBody::ResourceType & resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };
    inline GetResourceTypeResponseBody& setResourceType(GetResourceTypeResponseBody::ResourceType && resourceType) { DARABONBA_PTR_SET_RVALUE(resourceType_, resourceType) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetResourceTypeResponseBody::ResourceType> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif

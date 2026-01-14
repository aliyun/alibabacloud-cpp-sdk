// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODY_HPP_
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
  class ListResourceTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resourceTypes, resourceTypes_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resourceTypes, resourceTypes_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListResourceTypesResponseBody() = default ;
    ListResourceTypesResponseBody(const ListResourceTypesResponseBody &) = default ;
    ListResourceTypesResponseBody(ListResourceTypesResponseBody &&) = default ;
    ListResourceTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypesResponseBody() = default ;
    ListResourceTypesResponseBody& operator=(const ListResourceTypesResponseBody &) = default ;
    ListResourceTypesResponseBody& operator=(ListResourceTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceTypes& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(product, product_);
        DARABONBA_PTR_TO_JSON(productName, productName_);
        DARABONBA_PTR_TO_JSON(resourceDetailPageUrl, resourceDetailPageUrl_);
        DARABONBA_PTR_TO_JSON(resourceListPageUrl, resourceListPageUrl_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(statusStartVersion, statusStartVersion_);
        DARABONBA_PTR_TO_JSON(subcategory, subcategory_);
        DARABONBA_PTR_TO_JSON(supportTerraformer, supportTerraformer_);
        DARABONBA_PTR_TO_JSON(terraformProviderVersion, terraformProviderVersion_);
        DARABONBA_PTR_TO_JSON(terraformResourceType, terraformResourceType_);
        DARABONBA_PTR_TO_JSON(title, title_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(product, product_);
        DARABONBA_PTR_FROM_JSON(productName, productName_);
        DARABONBA_PTR_FROM_JSON(resourceDetailPageUrl, resourceDetailPageUrl_);
        DARABONBA_PTR_FROM_JSON(resourceListPageUrl, resourceListPageUrl_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(statusStartVersion, statusStartVersion_);
        DARABONBA_PTR_FROM_JSON(subcategory, subcategory_);
        DARABONBA_PTR_FROM_JSON(supportTerraformer, supportTerraformer_);
        DARABONBA_PTR_FROM_JSON(terraformProviderVersion, terraformProviderVersion_);
        DARABONBA_PTR_FROM_JSON(terraformResourceType, terraformResourceType_);
        DARABONBA_PTR_FROM_JSON(title, title_);
      };
      ResourceTypes() = default ;
      ResourceTypes(const ResourceTypes &) = default ;
      ResourceTypes(ResourceTypes &&) = default ;
      ResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceTypes() = default ;
      ResourceTypes& operator=(const ResourceTypes &) = default ;
      ResourceTypes& operator=(ResourceTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->product_ == nullptr && this->productName_ == nullptr && this->resourceDetailPageUrl_ == nullptr && this->resourceListPageUrl_ == nullptr && this->status_ == nullptr
        && this->statusStartVersion_ == nullptr && this->subcategory_ == nullptr && this->supportTerraformer_ == nullptr && this->terraformProviderVersion_ == nullptr && this->terraformResourceType_ == nullptr
        && this->title_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ResourceTypes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline ResourceTypes& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline ResourceTypes& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // resourceDetailPageUrl Field Functions 
      bool hasResourceDetailPageUrl() const { return this->resourceDetailPageUrl_ != nullptr;};
      void deleteResourceDetailPageUrl() { this->resourceDetailPageUrl_ = nullptr;};
      inline string getResourceDetailPageUrl() const { DARABONBA_PTR_GET_DEFAULT(resourceDetailPageUrl_, "") };
      inline ResourceTypes& setResourceDetailPageUrl(string resourceDetailPageUrl) { DARABONBA_PTR_SET_VALUE(resourceDetailPageUrl_, resourceDetailPageUrl) };


      // resourceListPageUrl Field Functions 
      bool hasResourceListPageUrl() const { return this->resourceListPageUrl_ != nullptr;};
      void deleteResourceListPageUrl() { this->resourceListPageUrl_ = nullptr;};
      inline string getResourceListPageUrl() const { DARABONBA_PTR_GET_DEFAULT(resourceListPageUrl_, "") };
      inline ResourceTypes& setResourceListPageUrl(string resourceListPageUrl) { DARABONBA_PTR_SET_VALUE(resourceListPageUrl_, resourceListPageUrl) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResourceTypes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusStartVersion Field Functions 
      bool hasStatusStartVersion() const { return this->statusStartVersion_ != nullptr;};
      void deleteStatusStartVersion() { this->statusStartVersion_ = nullptr;};
      inline string getStatusStartVersion() const { DARABONBA_PTR_GET_DEFAULT(statusStartVersion_, "") };
      inline ResourceTypes& setStatusStartVersion(string statusStartVersion) { DARABONBA_PTR_SET_VALUE(statusStartVersion_, statusStartVersion) };


      // subcategory Field Functions 
      bool hasSubcategory() const { return this->subcategory_ != nullptr;};
      void deleteSubcategory() { this->subcategory_ = nullptr;};
      inline string getSubcategory() const { DARABONBA_PTR_GET_DEFAULT(subcategory_, "") };
      inline ResourceTypes& setSubcategory(string subcategory) { DARABONBA_PTR_SET_VALUE(subcategory_, subcategory) };


      // supportTerraformer Field Functions 
      bool hasSupportTerraformer() const { return this->supportTerraformer_ != nullptr;};
      void deleteSupportTerraformer() { this->supportTerraformer_ = nullptr;};
      inline string getSupportTerraformer() const { DARABONBA_PTR_GET_DEFAULT(supportTerraformer_, "") };
      inline ResourceTypes& setSupportTerraformer(string supportTerraformer) { DARABONBA_PTR_SET_VALUE(supportTerraformer_, supportTerraformer) };


      // terraformProviderVersion Field Functions 
      bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
      void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
      inline string getTerraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
      inline ResourceTypes& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


      // terraformResourceType Field Functions 
      bool hasTerraformResourceType() const { return this->terraformResourceType_ != nullptr;};
      void deleteTerraformResourceType() { this->terraformResourceType_ = nullptr;};
      inline string getTerraformResourceType() const { DARABONBA_PTR_GET_DEFAULT(terraformResourceType_, "") };
      inline ResourceTypes& setTerraformResourceType(string terraformResourceType) { DARABONBA_PTR_SET_VALUE(terraformResourceType_, terraformResourceType) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ResourceTypes& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> product_ {};
      shared_ptr<string> productName_ {};
      shared_ptr<string> resourceDetailPageUrl_ {};
      shared_ptr<string> resourceListPageUrl_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> statusStartVersion_ {};
      shared_ptr<string> subcategory_ {};
      shared_ptr<string> supportTerraformer_ {};
      shared_ptr<string> terraformProviderVersion_ {};
      shared_ptr<string> terraformResourceType_ {};
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->resourceTypes_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceTypesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceTypesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<ListResourceTypesResponseBody::ResourceTypes> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<ListResourceTypesResponseBody::ResourceTypes>) };
    inline vector<ListResourceTypesResponseBody::ResourceTypes> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<ListResourceTypesResponseBody::ResourceTypes>) };
    inline ListResourceTypesResponseBody& setResourceTypes(const vector<ListResourceTypesResponseBody::ResourceTypes> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline ListResourceTypesResponseBody& setResourceTypes(vector<ListResourceTypesResponseBody::ResourceTypes> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListResourceTypesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListResourceTypesResponseBody::ResourceTypes>> resourceTypes_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif

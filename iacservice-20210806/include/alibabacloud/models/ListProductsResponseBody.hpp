// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
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
  class ListProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(products, products_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(products, products_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListProductsResponseBody() = default ;
    ListProductsResponseBody(const ListProductsResponseBody &) = default ;
    ListProductsResponseBody(ListProductsResponseBody &&) = default ;
    ListProductsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsResponseBody() = default ;
    ListProductsResponseBody& operator=(const ListProductsResponseBody &) = default ;
    ListProductsResponseBody& operator=(ListProductsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Products : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Products& obj) { 
        DARABONBA_PTR_TO_JSON(firstCategoryName, firstCategoryName_);
        DARABONBA_PTR_TO_JSON(firstCategoryNameEn, firstCategoryNameEn_);
        DARABONBA_PTR_TO_JSON(product, product_);
        DARABONBA_PTR_TO_JSON(productName, productName_);
        DARABONBA_PTR_TO_JSON(productNameEn, productNameEn_);
        DARABONBA_PTR_TO_JSON(secondCategoryName, secondCategoryName_);
        DARABONBA_PTR_TO_JSON(secondCategoryNameEn, secondCategoryNameEn_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(subcategory, subcategory_);
        DARABONBA_PTR_TO_JSON(supportTerraformer, supportTerraformer_);
        DARABONBA_PTR_TO_JSON(terraformProviderVersion, terraformProviderVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Products& obj) { 
        DARABONBA_PTR_FROM_JSON(firstCategoryName, firstCategoryName_);
        DARABONBA_PTR_FROM_JSON(firstCategoryNameEn, firstCategoryNameEn_);
        DARABONBA_PTR_FROM_JSON(product, product_);
        DARABONBA_PTR_FROM_JSON(productName, productName_);
        DARABONBA_PTR_FROM_JSON(productNameEn, productNameEn_);
        DARABONBA_PTR_FROM_JSON(secondCategoryName, secondCategoryName_);
        DARABONBA_PTR_FROM_JSON(secondCategoryNameEn, secondCategoryNameEn_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(subcategory, subcategory_);
        DARABONBA_PTR_FROM_JSON(supportTerraformer, supportTerraformer_);
        DARABONBA_PTR_FROM_JSON(terraformProviderVersion, terraformProviderVersion_);
      };
      Products() = default ;
      Products(const Products &) = default ;
      Products(Products &&) = default ;
      Products(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Products() = default ;
      Products& operator=(const Products &) = default ;
      Products& operator=(Products &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->firstCategoryName_ == nullptr
        && this->firstCategoryNameEn_ == nullptr && this->product_ == nullptr && this->productName_ == nullptr && this->productNameEn_ == nullptr && this->secondCategoryName_ == nullptr
        && this->secondCategoryNameEn_ == nullptr && this->status_ == nullptr && this->subcategory_ == nullptr && this->supportTerraformer_ == nullptr && this->terraformProviderVersion_ == nullptr; };
      // firstCategoryName Field Functions 
      bool hasFirstCategoryName() const { return this->firstCategoryName_ != nullptr;};
      void deleteFirstCategoryName() { this->firstCategoryName_ = nullptr;};
      inline string getFirstCategoryName() const { DARABONBA_PTR_GET_DEFAULT(firstCategoryName_, "") };
      inline Products& setFirstCategoryName(string firstCategoryName) { DARABONBA_PTR_SET_VALUE(firstCategoryName_, firstCategoryName) };


      // firstCategoryNameEn Field Functions 
      bool hasFirstCategoryNameEn() const { return this->firstCategoryNameEn_ != nullptr;};
      void deleteFirstCategoryNameEn() { this->firstCategoryNameEn_ = nullptr;};
      inline string getFirstCategoryNameEn() const { DARABONBA_PTR_GET_DEFAULT(firstCategoryNameEn_, "") };
      inline Products& setFirstCategoryNameEn(string firstCategoryNameEn) { DARABONBA_PTR_SET_VALUE(firstCategoryNameEn_, firstCategoryNameEn) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline Products& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline Products& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // productNameEn Field Functions 
      bool hasProductNameEn() const { return this->productNameEn_ != nullptr;};
      void deleteProductNameEn() { this->productNameEn_ = nullptr;};
      inline string getProductNameEn() const { DARABONBA_PTR_GET_DEFAULT(productNameEn_, "") };
      inline Products& setProductNameEn(string productNameEn) { DARABONBA_PTR_SET_VALUE(productNameEn_, productNameEn) };


      // secondCategoryName Field Functions 
      bool hasSecondCategoryName() const { return this->secondCategoryName_ != nullptr;};
      void deleteSecondCategoryName() { this->secondCategoryName_ = nullptr;};
      inline string getSecondCategoryName() const { DARABONBA_PTR_GET_DEFAULT(secondCategoryName_, "") };
      inline Products& setSecondCategoryName(string secondCategoryName) { DARABONBA_PTR_SET_VALUE(secondCategoryName_, secondCategoryName) };


      // secondCategoryNameEn Field Functions 
      bool hasSecondCategoryNameEn() const { return this->secondCategoryNameEn_ != nullptr;};
      void deleteSecondCategoryNameEn() { this->secondCategoryNameEn_ = nullptr;};
      inline string getSecondCategoryNameEn() const { DARABONBA_PTR_GET_DEFAULT(secondCategoryNameEn_, "") };
      inline Products& setSecondCategoryNameEn(string secondCategoryNameEn) { DARABONBA_PTR_SET_VALUE(secondCategoryNameEn_, secondCategoryNameEn) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Products& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subcategory Field Functions 
      bool hasSubcategory() const { return this->subcategory_ != nullptr;};
      void deleteSubcategory() { this->subcategory_ = nullptr;};
      inline string getSubcategory() const { DARABONBA_PTR_GET_DEFAULT(subcategory_, "") };
      inline Products& setSubcategory(string subcategory) { DARABONBA_PTR_SET_VALUE(subcategory_, subcategory) };


      // supportTerraformer Field Functions 
      bool hasSupportTerraformer() const { return this->supportTerraformer_ != nullptr;};
      void deleteSupportTerraformer() { this->supportTerraformer_ = nullptr;};
      inline bool getSupportTerraformer() const { DARABONBA_PTR_GET_DEFAULT(supportTerraformer_, false) };
      inline Products& setSupportTerraformer(bool supportTerraformer) { DARABONBA_PTR_SET_VALUE(supportTerraformer_, supportTerraformer) };


      // terraformProviderVersion Field Functions 
      bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
      void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
      inline string getTerraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
      inline Products& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


    protected:
      shared_ptr<string> firstCategoryName_ {};
      shared_ptr<string> firstCategoryNameEn_ {};
      shared_ptr<string> product_ {};
      shared_ptr<string> productName_ {};
      shared_ptr<string> productNameEn_ {};
      shared_ptr<string> secondCategoryName_ {};
      shared_ptr<string> secondCategoryNameEn_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> subcategory_ {};
      shared_ptr<bool> supportTerraformer_ {};
      shared_ptr<string> terraformProviderVersion_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->products_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProductsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProductsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // products Field Functions 
    bool hasProducts() const { return this->products_ != nullptr;};
    void deleteProducts() { this->products_ = nullptr;};
    inline const vector<ListProductsResponseBody::Products> & getProducts() const { DARABONBA_PTR_GET_CONST(products_, vector<ListProductsResponseBody::Products>) };
    inline vector<ListProductsResponseBody::Products> getProducts() { DARABONBA_PTR_GET(products_, vector<ListProductsResponseBody::Products>) };
    inline ListProductsResponseBody& setProducts(const vector<ListProductsResponseBody::Products> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
    inline ListProductsResponseBody& setProducts(vector<ListProductsResponseBody::Products> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProductsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProductsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListProductsResponseBody::Products>> products_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif

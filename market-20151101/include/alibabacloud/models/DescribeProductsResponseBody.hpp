// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductItems, productItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductItems, productItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeProductsResponseBody() = default ;
    DescribeProductsResponseBody(const DescribeProductsResponseBody &) = default ;
    DescribeProductsResponseBody(DescribeProductsResponseBody &&) = default ;
    DescribeProductsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductsResponseBody() = default ;
    DescribeProductsResponseBody& operator=(const DescribeProductsResponseBody &) = default ;
    DescribeProductsResponseBody& operator=(DescribeProductsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProductItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProductItems& obj) { 
        DARABONBA_PTR_TO_JSON(ProductItem, productItem_);
      };
      friend void from_json(const Darabonba::Json& j, ProductItems& obj) { 
        DARABONBA_PTR_FROM_JSON(ProductItem, productItem_);
      };
      ProductItems() = default ;
      ProductItems(const ProductItems &) = default ;
      ProductItems(ProductItems &&) = default ;
      ProductItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProductItems() = default ;
      ProductItems& operator=(const ProductItems &) = default ;
      ProductItems& operator=(ProductItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProductItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProductItem& obj) { 
          DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(DeliveryDate, deliveryDate_);
          DARABONBA_PTR_TO_JSON(DeliveryWay, deliveryWay_);
          DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OperationSystem, operationSystem_);
          DARABONBA_PTR_TO_JSON(PriceInfo, priceInfo_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(ShortDescription, shortDescription_);
          DARABONBA_PTR_TO_JSON(SuggestedPrice, suggestedPrice_);
          DARABONBA_PTR_TO_JSON(SupplierId, supplierId_);
          DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
          DARABONBA_PTR_TO_JSON(WarrantyDate, warrantyDate_);
        };
        friend void from_json(const Darabonba::Json& j, ProductItem& obj) { 
          DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(DeliveryDate, deliveryDate_);
          DARABONBA_PTR_FROM_JSON(DeliveryWay, deliveryWay_);
          DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OperationSystem, operationSystem_);
          DARABONBA_PTR_FROM_JSON(PriceInfo, priceInfo_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(ShortDescription, shortDescription_);
          DARABONBA_PTR_FROM_JSON(SuggestedPrice, suggestedPrice_);
          DARABONBA_PTR_FROM_JSON(SupplierId, supplierId_);
          DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
          DARABONBA_PTR_FROM_JSON(WarrantyDate, warrantyDate_);
        };
        ProductItem() = default ;
        ProductItem(const ProductItem &) = default ;
        ProductItem(ProductItem &&) = default ;
        ProductItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProductItem() = default ;
        ProductItem& operator=(const ProductItem &) = default ;
        ProductItem& operator=(ProductItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->code_ == nullptr && this->deliveryDate_ == nullptr && this->deliveryWay_ == nullptr && this->imageUrl_ == nullptr && this->name_ == nullptr
        && this->operationSystem_ == nullptr && this->priceInfo_ == nullptr && this->score_ == nullptr && this->shortDescription_ == nullptr && this->suggestedPrice_ == nullptr
        && this->supplierId_ == nullptr && this->supplierName_ == nullptr && this->tags_ == nullptr && this->targetUrl_ == nullptr && this->warrantyDate_ == nullptr; };
        // categoryId Field Functions 
        bool hasCategoryId() const { return this->categoryId_ != nullptr;};
        void deleteCategoryId() { this->categoryId_ = nullptr;};
        inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
        inline ProductItem& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline ProductItem& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // deliveryDate Field Functions 
        bool hasDeliveryDate() const { return this->deliveryDate_ != nullptr;};
        void deleteDeliveryDate() { this->deliveryDate_ = nullptr;};
        inline string getDeliveryDate() const { DARABONBA_PTR_GET_DEFAULT(deliveryDate_, "") };
        inline ProductItem& setDeliveryDate(string deliveryDate) { DARABONBA_PTR_SET_VALUE(deliveryDate_, deliveryDate) };


        // deliveryWay Field Functions 
        bool hasDeliveryWay() const { return this->deliveryWay_ != nullptr;};
        void deleteDeliveryWay() { this->deliveryWay_ = nullptr;};
        inline string getDeliveryWay() const { DARABONBA_PTR_GET_DEFAULT(deliveryWay_, "") };
        inline ProductItem& setDeliveryWay(string deliveryWay) { DARABONBA_PTR_SET_VALUE(deliveryWay_, deliveryWay) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline ProductItem& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ProductItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // operationSystem Field Functions 
        bool hasOperationSystem() const { return this->operationSystem_ != nullptr;};
        void deleteOperationSystem() { this->operationSystem_ = nullptr;};
        inline string getOperationSystem() const { DARABONBA_PTR_GET_DEFAULT(operationSystem_, "") };
        inline ProductItem& setOperationSystem(string operationSystem) { DARABONBA_PTR_SET_VALUE(operationSystem_, operationSystem) };


        // priceInfo Field Functions 
        bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
        void deletePriceInfo() { this->priceInfo_ = nullptr;};
        inline string getPriceInfo() const { DARABONBA_PTR_GET_DEFAULT(priceInfo_, "") };
        inline ProductItem& setPriceInfo(string priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
        inline ProductItem& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // shortDescription Field Functions 
        bool hasShortDescription() const { return this->shortDescription_ != nullptr;};
        void deleteShortDescription() { this->shortDescription_ = nullptr;};
        inline string getShortDescription() const { DARABONBA_PTR_GET_DEFAULT(shortDescription_, "") };
        inline ProductItem& setShortDescription(string shortDescription) { DARABONBA_PTR_SET_VALUE(shortDescription_, shortDescription) };


        // suggestedPrice Field Functions 
        bool hasSuggestedPrice() const { return this->suggestedPrice_ != nullptr;};
        void deleteSuggestedPrice() { this->suggestedPrice_ = nullptr;};
        inline string getSuggestedPrice() const { DARABONBA_PTR_GET_DEFAULT(suggestedPrice_, "") };
        inline ProductItem& setSuggestedPrice(string suggestedPrice) { DARABONBA_PTR_SET_VALUE(suggestedPrice_, suggestedPrice) };


        // supplierId Field Functions 
        bool hasSupplierId() const { return this->supplierId_ != nullptr;};
        void deleteSupplierId() { this->supplierId_ = nullptr;};
        inline int64_t getSupplierId() const { DARABONBA_PTR_GET_DEFAULT(supplierId_, 0L) };
        inline ProductItem& setSupplierId(int64_t supplierId) { DARABONBA_PTR_SET_VALUE(supplierId_, supplierId) };


        // supplierName Field Functions 
        bool hasSupplierName() const { return this->supplierName_ != nullptr;};
        void deleteSupplierName() { this->supplierName_ = nullptr;};
        inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
        inline ProductItem& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
        inline ProductItem& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


        // targetUrl Field Functions 
        bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
        void deleteTargetUrl() { this->targetUrl_ = nullptr;};
        inline string getTargetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
        inline ProductItem& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


        // warrantyDate Field Functions 
        bool hasWarrantyDate() const { return this->warrantyDate_ != nullptr;};
        void deleteWarrantyDate() { this->warrantyDate_ = nullptr;};
        inline string getWarrantyDate() const { DARABONBA_PTR_GET_DEFAULT(warrantyDate_, "") };
        inline ProductItem& setWarrantyDate(string warrantyDate) { DARABONBA_PTR_SET_VALUE(warrantyDate_, warrantyDate) };


      protected:
        shared_ptr<int64_t> categoryId_ {};
        shared_ptr<string> code_ {};
        shared_ptr<string> deliveryDate_ {};
        shared_ptr<string> deliveryWay_ {};
        shared_ptr<string> imageUrl_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> operationSystem_ {};
        shared_ptr<string> priceInfo_ {};
        shared_ptr<string> score_ {};
        shared_ptr<string> shortDescription_ {};
        shared_ptr<string> suggestedPrice_ {};
        shared_ptr<int64_t> supplierId_ {};
        shared_ptr<string> supplierName_ {};
        shared_ptr<string> tags_ {};
        shared_ptr<string> targetUrl_ {};
        shared_ptr<string> warrantyDate_ {};
      };

      virtual bool empty() const override { return this->productItem_ == nullptr; };
      // productItem Field Functions 
      bool hasProductItem() const { return this->productItem_ != nullptr;};
      void deleteProductItem() { this->productItem_ = nullptr;};
      inline const vector<ProductItems::ProductItem> & getProductItem() const { DARABONBA_PTR_GET_CONST(productItem_, vector<ProductItems::ProductItem>) };
      inline vector<ProductItems::ProductItem> getProductItem() { DARABONBA_PTR_GET(productItem_, vector<ProductItems::ProductItem>) };
      inline ProductItems& setProductItem(const vector<ProductItems::ProductItem> & productItem) { DARABONBA_PTR_SET_VALUE(productItem_, productItem) };
      inline ProductItems& setProductItem(vector<ProductItems::ProductItem> && productItem) { DARABONBA_PTR_SET_RVALUE(productItem_, productItem) };


    protected:
      shared_ptr<vector<ProductItems::ProductItem>> productItem_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->productItems_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeProductsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeProductsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productItems Field Functions 
    bool hasProductItems() const { return this->productItems_ != nullptr;};
    void deleteProductItems() { this->productItems_ = nullptr;};
    inline const DescribeProductsResponseBody::ProductItems & getProductItems() const { DARABONBA_PTR_GET_CONST(productItems_, DescribeProductsResponseBody::ProductItems) };
    inline DescribeProductsResponseBody::ProductItems getProductItems() { DARABONBA_PTR_GET(productItems_, DescribeProductsResponseBody::ProductItems) };
    inline DescribeProductsResponseBody& setProductItems(const DescribeProductsResponseBody::ProductItems & productItems) { DARABONBA_PTR_SET_VALUE(productItems_, productItems) };
    inline DescribeProductsResponseBody& setProductItems(DescribeProductsResponseBody::ProductItems && productItems) { DARABONBA_PTR_SET_RVALUE(productItems_, productItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProductsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeProductsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<DescribeProductsResponseBody::ProductItems> productItems_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif

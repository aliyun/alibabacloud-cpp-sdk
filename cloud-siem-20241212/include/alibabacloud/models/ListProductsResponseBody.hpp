// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Products, products_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Products, products_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
        DARABONBA_PTR_TO_JSON(AbnormalDataIngestionCount, abnormalDataIngestionCount_);
        DARABONBA_PTR_TO_JSON(ActiveTime, activeTime_);
        DARABONBA_PTR_TO_JSON(AllowAddDataIngestion, allowAddDataIngestion_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DataIngestionStatus, dataIngestionStatus_);
        DARABONBA_PTR_TO_JSON(EnabledDataIngestionCount, enabledDataIngestionCount_);
        DARABONBA_PTR_TO_JSON(ProductAlias, productAlias_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(TotalDataIngestionCount, totalDataIngestionCount_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
        DARABONBA_PTR_TO_JSON(VendorName, vendorName_);
      };
      friend void from_json(const Darabonba::Json& j, Products& obj) { 
        DARABONBA_PTR_FROM_JSON(AbnormalDataIngestionCount, abnormalDataIngestionCount_);
        DARABONBA_PTR_FROM_JSON(ActiveTime, activeTime_);
        DARABONBA_PTR_FROM_JSON(AllowAddDataIngestion, allowAddDataIngestion_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DataIngestionStatus, dataIngestionStatus_);
        DARABONBA_PTR_FROM_JSON(EnabledDataIngestionCount, enabledDataIngestionCount_);
        DARABONBA_PTR_FROM_JSON(ProductAlias, productAlias_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(TotalDataIngestionCount, totalDataIngestionCount_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
        DARABONBA_PTR_FROM_JSON(VendorName, vendorName_);
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
      virtual bool empty() const override { return this->abnormalDataIngestionCount_ == nullptr
        && this->activeTime_ == nullptr && this->allowAddDataIngestion_ == nullptr && this->createTime_ == nullptr && this->dataIngestionStatus_ == nullptr && this->enabledDataIngestionCount_ == nullptr
        && this->productAlias_ == nullptr && this->productId_ == nullptr && this->productName_ == nullptr && this->productType_ == nullptr && this->totalDataIngestionCount_ == nullptr
        && this->updateTime_ == nullptr && this->vendorId_ == nullptr && this->vendorName_ == nullptr; };
      // abnormalDataIngestionCount Field Functions 
      bool hasAbnormalDataIngestionCount() const { return this->abnormalDataIngestionCount_ != nullptr;};
      void deleteAbnormalDataIngestionCount() { this->abnormalDataIngestionCount_ = nullptr;};
      inline int32_t getAbnormalDataIngestionCount() const { DARABONBA_PTR_GET_DEFAULT(abnormalDataIngestionCount_, 0) };
      inline Products& setAbnormalDataIngestionCount(int32_t abnormalDataIngestionCount) { DARABONBA_PTR_SET_VALUE(abnormalDataIngestionCount_, abnormalDataIngestionCount) };


      // activeTime Field Functions 
      bool hasActiveTime() const { return this->activeTime_ != nullptr;};
      void deleteActiveTime() { this->activeTime_ = nullptr;};
      inline int64_t getActiveTime() const { DARABONBA_PTR_GET_DEFAULT(activeTime_, 0L) };
      inline Products& setActiveTime(int64_t activeTime) { DARABONBA_PTR_SET_VALUE(activeTime_, activeTime) };


      // allowAddDataIngestion Field Functions 
      bool hasAllowAddDataIngestion() const { return this->allowAddDataIngestion_ != nullptr;};
      void deleteAllowAddDataIngestion() { this->allowAddDataIngestion_ = nullptr;};
      inline bool getAllowAddDataIngestion() const { DARABONBA_PTR_GET_DEFAULT(allowAddDataIngestion_, false) };
      inline Products& setAllowAddDataIngestion(bool allowAddDataIngestion) { DARABONBA_PTR_SET_VALUE(allowAddDataIngestion_, allowAddDataIngestion) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Products& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataIngestionStatus Field Functions 
      bool hasDataIngestionStatus() const { return this->dataIngestionStatus_ != nullptr;};
      void deleteDataIngestionStatus() { this->dataIngestionStatus_ = nullptr;};
      inline bool getDataIngestionStatus() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionStatus_, false) };
      inline Products& setDataIngestionStatus(bool dataIngestionStatus) { DARABONBA_PTR_SET_VALUE(dataIngestionStatus_, dataIngestionStatus) };


      // enabledDataIngestionCount Field Functions 
      bool hasEnabledDataIngestionCount() const { return this->enabledDataIngestionCount_ != nullptr;};
      void deleteEnabledDataIngestionCount() { this->enabledDataIngestionCount_ = nullptr;};
      inline int32_t getEnabledDataIngestionCount() const { DARABONBA_PTR_GET_DEFAULT(enabledDataIngestionCount_, 0) };
      inline Products& setEnabledDataIngestionCount(int32_t enabledDataIngestionCount) { DARABONBA_PTR_SET_VALUE(enabledDataIngestionCount_, enabledDataIngestionCount) };


      // productAlias Field Functions 
      bool hasProductAlias() const { return this->productAlias_ != nullptr;};
      void deleteProductAlias() { this->productAlias_ = nullptr;};
      inline string getProductAlias() const { DARABONBA_PTR_GET_DEFAULT(productAlias_, "") };
      inline Products& setProductAlias(string productAlias) { DARABONBA_PTR_SET_VALUE(productAlias_, productAlias) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline Products& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline Products& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline Products& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // totalDataIngestionCount Field Functions 
      bool hasTotalDataIngestionCount() const { return this->totalDataIngestionCount_ != nullptr;};
      void deleteTotalDataIngestionCount() { this->totalDataIngestionCount_ = nullptr;};
      inline int32_t getTotalDataIngestionCount() const { DARABONBA_PTR_GET_DEFAULT(totalDataIngestionCount_, 0) };
      inline Products& setTotalDataIngestionCount(int32_t totalDataIngestionCount) { DARABONBA_PTR_SET_VALUE(totalDataIngestionCount_, totalDataIngestionCount) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Products& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // vendorId Field Functions 
      bool hasVendorId() const { return this->vendorId_ != nullptr;};
      void deleteVendorId() { this->vendorId_ = nullptr;};
      inline string getVendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
      inline Products& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


      // vendorName Field Functions 
      bool hasVendorName() const { return this->vendorName_ != nullptr;};
      void deleteVendorName() { this->vendorName_ = nullptr;};
      inline string getVendorName() const { DARABONBA_PTR_GET_DEFAULT(vendorName_, "") };
      inline Products& setVendorName(string vendorName) { DARABONBA_PTR_SET_VALUE(vendorName_, vendorName) };


    protected:
      shared_ptr<int32_t> abnormalDataIngestionCount_ {};
      shared_ptr<int64_t> activeTime_ {};
      shared_ptr<bool> allowAddDataIngestion_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<bool> dataIngestionStatus_ {};
      shared_ptr<int32_t> enabledDataIngestionCount_ {};
      shared_ptr<string> productAlias_ {};
      shared_ptr<string> productId_ {};
      shared_ptr<string> productName_ {};
      shared_ptr<string> productType_ {};
      shared_ptr<int32_t> totalDataIngestionCount_ {};
      shared_ptr<int64_t> updateTime_ {};
      shared_ptr<string> vendorId_ {};
      shared_ptr<string> vendorName_ {};
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
} // namespace CloudSiem20241212
#endif

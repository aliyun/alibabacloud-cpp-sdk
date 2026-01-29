// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRODUCTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRODUCTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryProductListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryProductListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryProductListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryProductListResponseBody() = default ;
    QueryProductListResponseBody(const QueryProductListResponseBody &) = default ;
    QueryProductListResponseBody(QueryProductListResponseBody &&) = default ;
    QueryProductListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryProductListResponseBody() = default ;
    QueryProductListResponseBody& operator=(const QueryProductListResponseBody &) = default ;
    QueryProductListResponseBody& operator=(QueryProductListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ProductList, productList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ProductList, productList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProductList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProductList& obj) { 
          DARABONBA_PTR_TO_JSON(Product, product_);
        };
        friend void from_json(const Darabonba::Json& j, ProductList& obj) { 
          DARABONBA_PTR_FROM_JSON(Product, product_);
        };
        ProductList() = default ;
        ProductList(const ProductList &) = default ;
        ProductList(ProductList &&) = default ;
        ProductList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProductList() = default ;
        ProductList& operator=(const ProductList &) = default ;
        ProductList& operator=(ProductList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Product : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Product& obj) { 
            DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
            DARABONBA_PTR_TO_JSON(ProductName, productName_);
            DARABONBA_PTR_TO_JSON(ProductType, productType_);
            DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
          };
          friend void from_json(const Darabonba::Json& j, Product& obj) { 
            DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
            DARABONBA_PTR_FROM_JSON(ProductName, productName_);
            DARABONBA_PTR_FROM_JSON(ProductType, productType_);
            DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
          };
          Product() = default ;
          Product(const Product &) = default ;
          Product(Product &&) = default ;
          Product(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Product() = default ;
          Product& operator=(const Product &) = default ;
          Product& operator=(Product &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->productCode_ == nullptr
        && this->productName_ == nullptr && this->productType_ == nullptr && this->subscriptionType_ == nullptr; };
          // productCode Field Functions 
          bool hasProductCode() const { return this->productCode_ != nullptr;};
          void deleteProductCode() { this->productCode_ = nullptr;};
          inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
          inline Product& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


          // productName Field Functions 
          bool hasProductName() const { return this->productName_ != nullptr;};
          void deleteProductName() { this->productName_ = nullptr;};
          inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
          inline Product& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


          // productType Field Functions 
          bool hasProductType() const { return this->productType_ != nullptr;};
          void deleteProductType() { this->productType_ = nullptr;};
          inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
          inline Product& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


          // subscriptionType Field Functions 
          bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
          void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
          inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
          inline Product& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


        protected:
          // The code of the service.
          shared_ptr<string> productCode_ {};
          // The name of the service.
          shared_ptr<string> productName_ {};
          // The type of the service.
          shared_ptr<string> productType_ {};
          // The billing method. Valid values:
          // 
          // *   Subscription: subscription
          // *   PayAsYouGo: pay-as-you-go
          shared_ptr<string> subscriptionType_ {};
        };

        virtual bool empty() const override { return this->product_ == nullptr; };
        // product Field Functions 
        bool hasProduct() const { return this->product_ != nullptr;};
        void deleteProduct() { this->product_ = nullptr;};
        inline const vector<ProductList::Product> & getProduct() const { DARABONBA_PTR_GET_CONST(product_, vector<ProductList::Product>) };
        inline vector<ProductList::Product> getProduct() { DARABONBA_PTR_GET(product_, vector<ProductList::Product>) };
        inline ProductList& setProduct(const vector<ProductList::Product> & product) { DARABONBA_PTR_SET_VALUE(product_, product) };
        inline ProductList& setProduct(vector<ProductList::Product> && product) { DARABONBA_PTR_SET_RVALUE(product_, product) };


      protected:
        shared_ptr<vector<ProductList::Product>> product_ {};
      };

      virtual bool empty() const override { return this->pageNum_ == nullptr
        && this->pageSize_ == nullptr && this->productList_ == nullptr && this->totalCount_ == nullptr; };
      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // productList Field Functions 
      bool hasProductList() const { return this->productList_ != nullptr;};
      void deleteProductList() { this->productList_ = nullptr;};
      inline const Data::ProductList & getProductList() const { DARABONBA_PTR_GET_CONST(productList_, Data::ProductList) };
      inline Data::ProductList getProductList() { DARABONBA_PTR_GET(productList_, Data::ProductList) };
      inline Data& setProductList(const Data::ProductList & productList) { DARABONBA_PTR_SET_VALUE(productList_, productList) };
      inline Data& setProductList(Data::ProductList && productList) { DARABONBA_PTR_SET_RVALUE(productList_, productList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number of the returned page.
      shared_ptr<int32_t> pageNum_ {};
      // The number of entries returned on each page.
      shared_ptr<int32_t> pageSize_ {};
      // The service definitions.
      shared_ptr<Data::ProductList> productList_ {};
      // The total number of services.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryProductListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryProductListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryProductListResponseBody::Data) };
    inline QueryProductListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryProductListResponseBody::Data) };
    inline QueryProductListResponseBody& setData(const QueryProductListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryProductListResponseBody& setData(QueryProductListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryProductListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryProductListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryProductListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The information about all Alibaba Cloud services.
    shared_ptr<QueryProductListResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif

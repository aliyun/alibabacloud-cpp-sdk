// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class ListProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(DirectoryName, directoryName_);
        DARABONBA_PTR_TO_JSON(ProductList, productList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(DirectoryName, directoryName_);
        DARABONBA_PTR_FROM_JSON(ProductList, productList_);
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
          DARABONBA_PTR_TO_JSON(ProductId, productId_);
          DARABONBA_PTR_TO_JSON(ProductName, productName_);
        };
        friend void from_json(const Darabonba::Json& j, ProductList& obj) { 
          DARABONBA_PTR_FROM_JSON(ProductId, productId_);
          DARABONBA_PTR_FROM_JSON(ProductName, productName_);
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
        virtual bool empty() const override { return this->productId_ == nullptr
        && this->productName_ == nullptr; };
        // productId Field Functions 
        bool hasProductId() const { return this->productId_ != nullptr;};
        void deleteProductId() { this->productId_ = nullptr;};
        inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
        inline ProductList& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


        // productName Field Functions 
        bool hasProductName() const { return this->productName_ != nullptr;};
        void deleteProductName() { this->productName_ = nullptr;};
        inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
        inline ProductList& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      protected:
        // Alibaba Cloud product ID
        shared_ptr<int64_t> productId_ {};
        // Alibaba Cloud product name
        shared_ptr<string> productName_ {};
      };

      virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->directoryName_ == nullptr && this->productList_ == nullptr; };
      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline int64_t getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, 0L) };
      inline Data& setDirectoryId(int64_t directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // directoryName Field Functions 
      bool hasDirectoryName() const { return this->directoryName_ != nullptr;};
      void deleteDirectoryName() { this->directoryName_ = nullptr;};
      inline string getDirectoryName() const { DARABONBA_PTR_GET_DEFAULT(directoryName_, "") };
      inline Data& setDirectoryName(string directoryName) { DARABONBA_PTR_SET_VALUE(directoryName_, directoryName) };


      // productList Field Functions 
      bool hasProductList() const { return this->productList_ != nullptr;};
      void deleteProductList() { this->productList_ = nullptr;};
      inline const vector<Data::ProductList> & getProductList() const { DARABONBA_PTR_GET_CONST(productList_, vector<Data::ProductList>) };
      inline vector<Data::ProductList> getProductList() { DARABONBA_PTR_GET(productList_, vector<Data::ProductList>) };
      inline Data& setProductList(const vector<Data::ProductList> & productList) { DARABONBA_PTR_SET_VALUE(productList_, productList) };
      inline Data& setProductList(vector<Data::ProductList> && productList) { DARABONBA_PTR_SET_RVALUE(productList_, productList) };


    protected:
      // The ID of the product catalog, which represents the product category, such as elastic computing
      shared_ptr<int64_t> directoryId_ {};
      // The name of the product catalog, which represents the product category, such as elastic computing
      shared_ptr<string> directoryName_ {};
      // List of Alibaba Cloud products
      shared_ptr<vector<Data::ProductList>> productList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListProductsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListProductsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListProductsResponseBody::Data>) };
    inline vector<ListProductsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListProductsResponseBody::Data>) };
    inline ListProductsResponseBody& setData(const vector<ListProductsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListProductsResponseBody& setData(vector<ListProductsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListProductsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProductsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListProductsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The return code of the request result.
    shared_ptr<int32_t> code_ {};
    // Return value, that is, product list
    shared_ptr<vector<ListProductsResponseBody::Data>> data_ {};
    // The error message. If success is set to false, the message is returned.
    shared_ptr<string> message_ {};
    // The unique ID of the API request. The requestID is unique for each call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. A value of true indicates that the call is normal.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif

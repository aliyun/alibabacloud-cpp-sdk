// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCTHOTSPOTDETECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PRODUCTHOTSPOTDETECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ProductHotspotDetectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProductHotspotDetectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ProductHotspotDetectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ProductHotspotDetectionResponseBody() = default ;
    ProductHotspotDetectionResponseBody(const ProductHotspotDetectionResponseBody &) = default ;
    ProductHotspotDetectionResponseBody(ProductHotspotDetectionResponseBody &&) = default ;
    ProductHotspotDetectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProductHotspotDetectionResponseBody() = default ;
    ProductHotspotDetectionResponseBody& operator=(const ProductHotspotDetectionResponseBody &) = default ;
    ProductHotspotDetectionResponseBody& operator=(ProductHotspotDetectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Products, products_);
        DARABONBA_PTR_TO_JSON(UsageMap, usageMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Products, products_);
        DARABONBA_PTR_FROM_JSON(UsageMap, usageMap_);
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
      class Products : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Products& obj) { 
          DARABONBA_PTR_TO_JSON(Boxes, boxes_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(ProductId, productId_);
        };
        friend void from_json(const Darabonba::Json& j, Products& obj) { 
          DARABONBA_PTR_FROM_JSON(Boxes, boxes_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(ProductId, productId_);
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
        class Boxes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Boxes& obj) { 
            DARABONBA_PTR_TO_JSON(Bottom, bottom_);
            DARABONBA_PTR_TO_JSON(Left, left_);
            DARABONBA_PTR_TO_JSON(Right, right_);
            DARABONBA_PTR_TO_JSON(Top, top_);
          };
          friend void from_json(const Darabonba::Json& j, Boxes& obj) { 
            DARABONBA_PTR_FROM_JSON(Bottom, bottom_);
            DARABONBA_PTR_FROM_JSON(Left, left_);
            DARABONBA_PTR_FROM_JSON(Right, right_);
            DARABONBA_PTR_FROM_JSON(Top, top_);
          };
          Boxes() = default ;
          Boxes(const Boxes &) = default ;
          Boxes(Boxes &&) = default ;
          Boxes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Boxes() = default ;
          Boxes& operator=(const Boxes &) = default ;
          Boxes& operator=(Boxes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bottom_ == nullptr
        && this->left_ == nullptr && this->right_ == nullptr && this->top_ == nullptr; };
          // bottom Field Functions 
          bool hasBottom() const { return this->bottom_ != nullptr;};
          void deleteBottom() { this->bottom_ = nullptr;};
          inline double getBottom() const { DARABONBA_PTR_GET_DEFAULT(bottom_, 0.0) };
          inline Boxes& setBottom(double bottom) { DARABONBA_PTR_SET_VALUE(bottom_, bottom) };


          // left Field Functions 
          bool hasLeft() const { return this->left_ != nullptr;};
          void deleteLeft() { this->left_ = nullptr;};
          inline double getLeft() const { DARABONBA_PTR_GET_DEFAULT(left_, 0.0) };
          inline Boxes& setLeft(double left) { DARABONBA_PTR_SET_VALUE(left_, left) };


          // right Field Functions 
          bool hasRight() const { return this->right_ != nullptr;};
          void deleteRight() { this->right_ = nullptr;};
          inline double getRight() const { DARABONBA_PTR_GET_DEFAULT(right_, 0.0) };
          inline Boxes& setRight(double right) { DARABONBA_PTR_SET_VALUE(right_, right) };


          // top Field Functions 
          bool hasTop() const { return this->top_ != nullptr;};
          void deleteTop() { this->top_ = nullptr;};
          inline double getTop() const { DARABONBA_PTR_GET_DEFAULT(top_, 0.0) };
          inline Boxes& setTop(double top) { DARABONBA_PTR_SET_VALUE(top_, top) };


        protected:
          // The bottom boundary of the bounding box.
          shared_ptr<double> bottom_ {};
          // The left boundary of the bounding box.
          shared_ptr<double> left_ {};
          // The right boundary of the bounding box.
          shared_ptr<double> right_ {};
          // The top boundary of the bounding box.
          shared_ptr<double> top_ {};
        };

        virtual bool empty() const override { return this->boxes_ == nullptr
        && this->label_ == nullptr && this->productId_ == nullptr; };
        // boxes Field Functions 
        bool hasBoxes() const { return this->boxes_ != nullptr;};
        void deleteBoxes() { this->boxes_ = nullptr;};
        inline const vector<Products::Boxes> & getBoxes() const { DARABONBA_PTR_GET_CONST(boxes_, vector<Products::Boxes>) };
        inline vector<Products::Boxes> getBoxes() { DARABONBA_PTR_GET(boxes_, vector<Products::Boxes>) };
        inline Products& setBoxes(const vector<Products::Boxes> & boxes) { DARABONBA_PTR_SET_VALUE(boxes_, boxes) };
        inline Products& setBoxes(vector<Products::Boxes> && boxes) { DARABONBA_PTR_SET_RVALUE(boxes_, boxes) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Products& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // productId Field Functions 
        bool hasProductId() const { return this->productId_ != nullptr;};
        void deleteProductId() { this->productId_ = nullptr;};
        inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
        inline Products& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      protected:
        // The bounding boxes of the product instances.
        shared_ptr<vector<Products::Boxes>> boxes_ {};
        // The product name.
        shared_ptr<string> label_ {};
        // The product ID generated by the workflow.
        shared_ptr<string> productId_ {};
      };

      virtual bool empty() const override { return this->products_ == nullptr
        && this->usageMap_ == nullptr; };
      // products Field Functions 
      bool hasProducts() const { return this->products_ != nullptr;};
      void deleteProducts() { this->products_ = nullptr;};
      inline const vector<Data::Products> & getProducts() const { DARABONBA_PTR_GET_CONST(products_, vector<Data::Products>) };
      inline vector<Data::Products> getProducts() { DARABONBA_PTR_GET(products_, vector<Data::Products>) };
      inline Data& setProducts(const vector<Data::Products> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
      inline Data& setProducts(vector<Data::Products> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


      // usageMap Field Functions 
      bool hasUsageMap() const { return this->usageMap_ != nullptr;};
      void deleteUsageMap() { this->usageMap_ = nullptr;};
      inline const map<string, int64_t> & getUsageMap() const { DARABONBA_PTR_GET_CONST(usageMap_, map<string, int64_t>) };
      inline map<string, int64_t> getUsageMap() { DARABONBA_PTR_GET(usageMap_, map<string, int64_t>) };
      inline Data& setUsageMap(const map<string, int64_t> & usageMap) { DARABONBA_PTR_SET_VALUE(usageMap_, usageMap) };
      inline Data& setUsageMap(map<string, int64_t> && usageMap) { DARABONBA_PTR_SET_RVALUE(usageMap_, usageMap) };


    protected:
      // The list of recognized products and their bounding boxes.
      shared_ptr<vector<Data::Products>> products_ {};
      // The usage information.
      shared_ptr<map<string, int64_t>> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ProductHotspotDetectionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ProductHotspotDetectionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ProductHotspotDetectionResponseBody::Data) };
    inline ProductHotspotDetectionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ProductHotspotDetectionResponseBody::Data) };
    inline ProductHotspotDetectionResponseBody& setData(const ProductHotspotDetectionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ProductHotspotDetectionResponseBody& setData(ProductHotspotDetectionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ProductHotspotDetectionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ProductHotspotDetectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ProductHotspotDetectionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The product hotzone recognition result.
    shared_ptr<ProductHotspotDetectionResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIDUIAREADEDUCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DIDUIAREADEDUCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class DiduiAreaDeductionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiduiAreaDeductionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Products, products_);
      DARABONBA_PTR_TO_JSON(RagId, ragId_);
      DARABONBA_PTR_TO_JSON(ReqId, reqId_);
      DARABONBA_PTR_TO_JSON(TargetImageUrl, targetImageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DiduiAreaDeductionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Products, products_);
      DARABONBA_PTR_FROM_JSON(RagId, ragId_);
      DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
      DARABONBA_PTR_FROM_JSON(TargetImageUrl, targetImageUrl_);
    };
    DiduiAreaDeductionRequest() = default ;
    DiduiAreaDeductionRequest(const DiduiAreaDeductionRequest &) = default ;
    DiduiAreaDeductionRequest(DiduiAreaDeductionRequest &&) = default ;
    DiduiAreaDeductionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiduiAreaDeductionRequest() = default ;
    DiduiAreaDeductionRequest& operator=(const DiduiAreaDeductionRequest &) = default ;
    DiduiAreaDeductionRequest& operator=(DiduiAreaDeductionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Products : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Products& obj) { 
        DARABONBA_PTR_TO_JSON(Boxes, boxes_);
        DARABONBA_PTR_TO_JSON(SkuId, skuId_);
      };
      friend void from_json(const Darabonba::Json& j, Products& obj) { 
        DARABONBA_PTR_FROM_JSON(Boxes, boxes_);
        DARABONBA_PTR_FROM_JSON(SkuId, skuId_);
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
        // The bottom boundary of the detection box.
        // 
        // This parameter is required.
        shared_ptr<double> bottom_ {};
        // The left boundary of the detection box.
        // 
        // This parameter is required.
        shared_ptr<double> left_ {};
        // The right boundary of the detection box.
        // 
        // This parameter is required.
        shared_ptr<double> right_ {};
        // The top boundary of the detection box.
        // 
        // This parameter is required.
        shared_ptr<double> top_ {};
      };

      virtual bool empty() const override { return this->boxes_ == nullptr
        && this->skuId_ == nullptr; };
      // boxes Field Functions 
      bool hasBoxes() const { return this->boxes_ != nullptr;};
      void deleteBoxes() { this->boxes_ = nullptr;};
      inline const vector<Products::Boxes> & getBoxes() const { DARABONBA_PTR_GET_CONST(boxes_, vector<Products::Boxes>) };
      inline vector<Products::Boxes> getBoxes() { DARABONBA_PTR_GET(boxes_, vector<Products::Boxes>) };
      inline Products& setBoxes(const vector<Products::Boxes> & boxes) { DARABONBA_PTR_SET_VALUE(boxes_, boxes) };
      inline Products& setBoxes(vector<Products::Boxes> && boxes) { DARABONBA_PTR_SET_RVALUE(boxes_, boxes) };


      // skuId Field Functions 
      bool hasSkuId() const { return this->skuId_ != nullptr;};
      void deleteSkuId() { this->skuId_ = nullptr;};
      inline string getSkuId() const { DARABONBA_PTR_GET_DEFAULT(skuId_, "") };
      inline Products& setSkuId(string skuId) { DARABONBA_PTR_SET_VALUE(skuId_, skuId) };


    protected:
      // The detection boxes for the current SKU. Coordinate values range from 0 to 1000.
      // 
      // This parameter is required.
      shared_ptr<vector<Products::Boxes>> boxes_ {};
      // The unique ID of the SKU.
      // 
      // This parameter is required.
      shared_ptr<string> skuId_ {};
    };

    virtual bool empty() const override { return this->products_ == nullptr
        && this->ragId_ == nullptr && this->reqId_ == nullptr && this->targetImageUrl_ == nullptr; };
    // products Field Functions 
    bool hasProducts() const { return this->products_ != nullptr;};
    void deleteProducts() { this->products_ = nullptr;};
    inline const vector<DiduiAreaDeductionRequest::Products> & getProducts() const { DARABONBA_PTR_GET_CONST(products_, vector<DiduiAreaDeductionRequest::Products>) };
    inline vector<DiduiAreaDeductionRequest::Products> getProducts() { DARABONBA_PTR_GET(products_, vector<DiduiAreaDeductionRequest::Products>) };
    inline DiduiAreaDeductionRequest& setProducts(const vector<DiduiAreaDeductionRequest::Products> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
    inline DiduiAreaDeductionRequest& setProducts(vector<DiduiAreaDeductionRequest::Products> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


    // ragId Field Functions 
    bool hasRagId() const { return this->ragId_ != nullptr;};
    void deleteRagId() { this->ragId_ = nullptr;};
    inline string getRagId() const { DARABONBA_PTR_GET_DEFAULT(ragId_, "") };
    inline DiduiAreaDeductionRequest& setRagId(string ragId) { DARABONBA_PTR_SET_VALUE(ragId_, ragId) };


    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline DiduiAreaDeductionRequest& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


    // targetImageUrl Field Functions 
    bool hasTargetImageUrl() const { return this->targetImageUrl_ != nullptr;};
    void deleteTargetImageUrl() { this->targetImageUrl_ = nullptr;};
    inline string getTargetImageUrl() const { DARABONBA_PTR_GET_DEFAULT(targetImageUrl_, "") };
    inline DiduiAreaDeductionRequest& setTargetImageUrl(string targetImageUrl) { DARABONBA_PTR_SET_VALUE(targetImageUrl_, targetImageUrl) };


  protected:
    // The list of products and their detection boxes.
    // 
    // This parameter is required.
    shared_ptr<vector<DiduiAreaDeductionRequest::Products>> products_ {};
    // The ID of the customer-specific SKU vector database that determines which database is used for retrieval. The database must be created in advance through the database creation process.
    shared_ptr<string> ragId_ {};
    // The optional business request ID used for Tracing Analysis.
    shared_ptr<string> reqId_ {};
    // The HTTPS URL of the overall floor display image.
    // 
    // This parameter is required.
    shared_ptr<string> targetImageUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif

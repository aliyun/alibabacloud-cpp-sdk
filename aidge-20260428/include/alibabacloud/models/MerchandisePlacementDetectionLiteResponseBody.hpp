// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERCHANDISEPLACEMENTDETECTIONLITERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MERCHANDISEPLACEMENTDETECTIONLITERESPONSEBODY_HPP_
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
  class MerchandisePlacementDetectionLiteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MerchandisePlacementDetectionLiteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, MerchandisePlacementDetectionLiteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    MerchandisePlacementDetectionLiteResponseBody() = default ;
    MerchandisePlacementDetectionLiteResponseBody(const MerchandisePlacementDetectionLiteResponseBody &) = default ;
    MerchandisePlacementDetectionLiteResponseBody(MerchandisePlacementDetectionLiteResponseBody &&) = default ;
    MerchandisePlacementDetectionLiteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MerchandisePlacementDetectionLiteResponseBody() = default ;
    MerchandisePlacementDetectionLiteResponseBody& operator=(const MerchandisePlacementDetectionLiteResponseBody &) = default ;
    MerchandisePlacementDetectionLiteResponseBody& operator=(MerchandisePlacementDetectionLiteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(UsageMap, usageMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Result, result_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(Grounding, grounding_);
          DARABONBA_PTR_TO_JSON(Products, products_);
          DARABONBA_PTR_TO_JSON(SkuIds, skuIds_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Grounding, grounding_);
          DARABONBA_PTR_FROM_JSON(Products, products_);
          DARABONBA_PTR_FROM_JSON(SkuIds, skuIds_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
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
            inline int64_t getBottom() const { DARABONBA_PTR_GET_DEFAULT(bottom_, 0L) };
            inline Boxes& setBottom(int64_t bottom) { DARABONBA_PTR_SET_VALUE(bottom_, bottom) };


            // left Field Functions 
            bool hasLeft() const { return this->left_ != nullptr;};
            void deleteLeft() { this->left_ = nullptr;};
            inline int64_t getLeft() const { DARABONBA_PTR_GET_DEFAULT(left_, 0L) };
            inline Boxes& setLeft(int64_t left) { DARABONBA_PTR_SET_VALUE(left_, left) };


            // right Field Functions 
            bool hasRight() const { return this->right_ != nullptr;};
            void deleteRight() { this->right_ = nullptr;};
            inline int64_t getRight() const { DARABONBA_PTR_GET_DEFAULT(right_, 0L) };
            inline Boxes& setRight(int64_t right) { DARABONBA_PTR_SET_VALUE(right_, right) };


            // top Field Functions 
            bool hasTop() const { return this->top_ != nullptr;};
            void deleteTop() { this->top_ = nullptr;};
            inline int64_t getTop() const { DARABONBA_PTR_GET_DEFAULT(top_, 0L) };
            inline Boxes& setTop(int64_t top) { DARABONBA_PTR_SET_VALUE(top_, top) };


          protected:
            // The bottom coordinate.
            shared_ptr<int64_t> bottom_ {};
            // The left coordinate.
            shared_ptr<int64_t> left_ {};
            // The right coordinate.
            shared_ptr<int64_t> right_ {};
            // The bottom coordinate.
            shared_ptr<int64_t> top_ {};
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
          // The bounding boxes corresponding to the SKU.
          shared_ptr<vector<Products::Boxes>> boxes_ {};
          // The recognition code, which is obtained by removing the trailing _ce from the recognition name.
          shared_ptr<string> skuId_ {};
        };

        class Grounding : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Grounding& obj) { 
            DARABONBA_PTR_TO_JSON(Coverage, coverage_);
            DARABONBA_PTR_TO_JSON(Regions, regions_);
          };
          friend void from_json(const Darabonba::Json& j, Grounding& obj) { 
            DARABONBA_PTR_FROM_JSON(Coverage, coverage_);
            DARABONBA_PTR_FROM_JSON(Regions, regions_);
          };
          Grounding() = default ;
          Grounding(const Grounding &) = default ;
          Grounding(Grounding &&) = default ;
          Grounding(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Grounding() = default ;
          Grounding& operator=(const Grounding &) = default ;
          Grounding& operator=(Grounding &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Regions : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Regions& obj) { 
              DARABONBA_PTR_TO_JSON(Bbox_2d, bbox2d_);
              DARABONBA_PTR_TO_JSON(Label, label_);
              DARABONBA_PTR_TO_JSON(Text, text_);
            };
            friend void from_json(const Darabonba::Json& j, Regions& obj) { 
              DARABONBA_PTR_FROM_JSON(Bbox_2d, bbox2d_);
              DARABONBA_PTR_FROM_JSON(Label, label_);
              DARABONBA_PTR_FROM_JSON(Text, text_);
            };
            Regions() = default ;
            Regions(const Regions &) = default ;
            Regions(Regions &&) = default ;
            Regions(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Regions() = default ;
            Regions& operator=(const Regions &) = default ;
            Regions& operator=(Regions &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->bbox2d_ == nullptr
        && this->label_ == nullptr && this->text_ == nullptr; };
            // bbox2d Field Functions 
            bool hasBbox2d() const { return this->bbox2d_ != nullptr;};
            void deleteBbox2d() { this->bbox2d_ = nullptr;};
            inline const vector<int64_t> & getBbox2d() const { DARABONBA_PTR_GET_CONST(bbox2d_, vector<int64_t>) };
            inline vector<int64_t> getBbox2d() { DARABONBA_PTR_GET(bbox2d_, vector<int64_t>) };
            inline Regions& setBbox2d(const vector<int64_t> & bbox2d) { DARABONBA_PTR_SET_VALUE(bbox2d_, bbox2d) };
            inline Regions& setBbox2d(vector<int64_t> && bbox2d) { DARABONBA_PTR_SET_RVALUE(bbox2d_, bbox2d) };


            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline Regions& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline Regions& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          protected:
            // The 2D bounding box in the format of [top-left x, top-left y, bottom-right x, bottom-right y]. The values range from 0 to 1000. The left coordinate is less than the right coordinate, and the top coordinate is less than the bottom coordinate.
            shared_ptr<vector<int64_t>> bbox2d_ {};
            // The target category.
            shared_ptr<string> label_ {};
            // The confirmable short name or text of up to 24 characters. This field is an empty string when the text is unclear.
            shared_ptr<string> text_ {};
          };

          virtual bool empty() const override { return this->coverage_ == nullptr
        && this->regions_ == nullptr; };
          // coverage Field Functions 
          bool hasCoverage() const { return this->coverage_ != nullptr;};
          void deleteCoverage() { this->coverage_ = nullptr;};
          inline string getCoverage() const { DARABONBA_PTR_GET_DEFAULT(coverage_, "") };
          inline Grounding& setCoverage(string coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };


          // regions Field Functions 
          bool hasRegions() const { return this->regions_ != nullptr;};
          void deleteRegions() { this->regions_ = nullptr;};
          inline const vector<Grounding::Regions> & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, vector<Grounding::Regions>) };
          inline vector<Grounding::Regions> getRegions() { DARABONBA_PTR_GET(regions_, vector<Grounding::Regions>) };
          inline Grounding& setRegions(const vector<Grounding::Regions> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
          inline Grounding& setRegions(vector<Grounding::Regions> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


        protected:
          // The coverage status. Valid values:
          // - complete: The relevant visible targets are complete.
          // - partial: Only some targets are valid or recognizable.
          // - Empty string: No valid supplementary grounding results are obtained.
          shared_ptr<string> coverage_ {};
          // The target array, which contains up to 12 items. This array can be empty when no relevant targets are found.
          shared_ptr<vector<Grounding::Regions>> regions_ {};
        };

        virtual bool empty() const override { return this->grounding_ == nullptr
        && this->products_ == nullptr && this->skuIds_ == nullptr && this->type_ == nullptr; };
        // grounding Field Functions 
        bool hasGrounding() const { return this->grounding_ != nullptr;};
        void deleteGrounding() { this->grounding_ = nullptr;};
        inline const Result::Grounding & getGrounding() const { DARABONBA_PTR_GET_CONST(grounding_, Result::Grounding) };
        inline Result::Grounding getGrounding() { DARABONBA_PTR_GET(grounding_, Result::Grounding) };
        inline Result& setGrounding(const Result::Grounding & grounding) { DARABONBA_PTR_SET_VALUE(grounding_, grounding) };
        inline Result& setGrounding(Result::Grounding && grounding) { DARABONBA_PTR_SET_RVALUE(grounding_, grounding) };


        // products Field Functions 
        bool hasProducts() const { return this->products_ != nullptr;};
        void deleteProducts() { this->products_ = nullptr;};
        inline const vector<Result::Products> & getProducts() const { DARABONBA_PTR_GET_CONST(products_, vector<Result::Products>) };
        inline vector<Result::Products> getProducts() { DARABONBA_PTR_GET(products_, vector<Result::Products>) };
        inline Result& setProducts(const vector<Result::Products> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
        inline Result& setProducts(vector<Result::Products> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


        // skuIds Field Functions 
        bool hasSkuIds() const { return this->skuIds_ != nullptr;};
        void deleteSkuIds() { this->skuIds_ = nullptr;};
        inline const vector<string> & getSkuIds() const { DARABONBA_PTR_GET_CONST(skuIds_, vector<string>) };
        inline vector<string> getSkuIds() { DARABONBA_PTR_GET(skuIds_, vector<string>) };
        inline Result& setSkuIds(const vector<string> & skuIds) { DARABONBA_PTR_SET_VALUE(skuIds_, skuIds) };
        inline Result& setSkuIds(vector<string> && skuIds) { DARABONBA_PTR_SET_RVALUE(skuIds_, skuIds) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The supplementary element grounding results.
        shared_ptr<Result::Grounding> grounding_ {};
        // The product items.
        shared_ptr<vector<Result::Products>> products_ {};
        // The deduplicated list of SkuIds.
        shared_ptr<vector<string>> skuIds_ {};
        // The result type, which is fixed to sku.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->result_ == nullptr
        && this->usageMap_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const Data::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, Data::Result) };
      inline Data::Result getResult() { DARABONBA_PTR_GET(result_, Data::Result) };
      inline Data& setResult(const Data::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(Data::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // usageMap Field Functions 
      bool hasUsageMap() const { return this->usageMap_ != nullptr;};
      void deleteUsageMap() { this->usageMap_ = nullptr;};
      inline const map<string, int64_t> & getUsageMap() const { DARABONBA_PTR_GET_CONST(usageMap_, map<string, int64_t>) };
      inline map<string, int64_t> getUsageMap() { DARABONBA_PTR_GET(usageMap_, map<string, int64_t>) };
      inline Data& setUsageMap(const map<string, int64_t> & usageMap) { DARABONBA_PTR_SET_VALUE(usageMap_, usageMap) };
      inline Data& setUsageMap(map<string, int64_t> && usageMap) { DARABONBA_PTR_SET_RVALUE(usageMap_, usageMap) };


    protected:
      // The result.
      shared_ptr<Data::Result> result_ {};
      // The usage map. The value is {"ProcessingCount":1} for a successful call, and an empty object for a failed call.
      shared_ptr<map<string, int64_t>> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MerchandisePlacementDetectionLiteResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MerchandisePlacementDetectionLiteResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, MerchandisePlacementDetectionLiteResponseBody::Data) };
    inline MerchandisePlacementDetectionLiteResponseBody::Data getData() { DARABONBA_PTR_GET(data_, MerchandisePlacementDetectionLiteResponseBody::Data) };
    inline MerchandisePlacementDetectionLiteResponseBody& setData(const MerchandisePlacementDetectionLiteResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MerchandisePlacementDetectionLiteResponseBody& setData(MerchandisePlacementDetectionLiteResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MerchandisePlacementDetectionLiteResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MerchandisePlacementDetectionLiteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MerchandisePlacementDetectionLiteResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The returned result.
    shared_ptr<MerchandisePlacementDetectionLiteResponseBody::Data> data_ {};
    // The response message or failure description.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif

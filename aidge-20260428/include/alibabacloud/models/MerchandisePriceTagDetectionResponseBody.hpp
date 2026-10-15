// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERCHANDISEPRICETAGDETECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MERCHANDISEPRICETAGDETECTIONRESPONSEBODY_HPP_
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
  class MerchandisePriceTagDetectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MerchandisePriceTagDetectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, MerchandisePriceTagDetectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    MerchandisePriceTagDetectionResponseBody() = default ;
    MerchandisePriceTagDetectionResponseBody(const MerchandisePriceTagDetectionResponseBody &) = default ;
    MerchandisePriceTagDetectionResponseBody(MerchandisePriceTagDetectionResponseBody &&) = default ;
    MerchandisePriceTagDetectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MerchandisePriceTagDetectionResponseBody() = default ;
    MerchandisePriceTagDetectionResponseBody& operator=(const MerchandisePriceTagDetectionResponseBody &) = default ;
    MerchandisePriceTagDetectionResponseBody& operator=(MerchandisePriceTagDetectionResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(PriceTags, priceTags_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Grounding, grounding_);
          DARABONBA_PTR_FROM_JSON(PriceTags, priceTags_);
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
        class PriceTags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PriceTags& obj) { 
            DARABONBA_PTR_TO_JSON(Location, location_);
            DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
            DARABONBA_PTR_TO_JSON(Price, price_);
            DARABONBA_PTR_TO_JSON(SkuCode, skuCode_);
            DARABONBA_PTR_TO_JSON(SkuName, skuName_);
          };
          friend void from_json(const Darabonba::Json& j, PriceTags& obj) { 
            DARABONBA_PTR_FROM_JSON(Location, location_);
            DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
            DARABONBA_PTR_FROM_JSON(Price, price_);
            DARABONBA_PTR_FROM_JSON(SkuCode, skuCode_);
            DARABONBA_PTR_FROM_JSON(SkuName, skuName_);
          };
          PriceTags() = default ;
          PriceTags(const PriceTags &) = default ;
          PriceTags(PriceTags &&) = default ;
          PriceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PriceTags() = default ;
          PriceTags& operator=(const PriceTags &) = default ;
          PriceTags& operator=(PriceTags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Location : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Location& obj) { 
              DARABONBA_PTR_TO_JSON(Bottom, bottom_);
              DARABONBA_PTR_TO_JSON(Left, left_);
              DARABONBA_PTR_TO_JSON(Right, right_);
              DARABONBA_PTR_TO_JSON(top, top_);
            };
            friend void from_json(const Darabonba::Json& j, Location& obj) { 
              DARABONBA_PTR_FROM_JSON(Bottom, bottom_);
              DARABONBA_PTR_FROM_JSON(Left, left_);
              DARABONBA_PTR_FROM_JSON(Right, right_);
              DARABONBA_PTR_FROM_JSON(top, top_);
            };
            Location() = default ;
            Location(const Location &) = default ;
            Location(Location &&) = default ;
            Location(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Location() = default ;
            Location& operator=(const Location &) = default ;
            Location& operator=(Location &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->bottom_ == nullptr
        && this->left_ == nullptr && this->right_ == nullptr && this->top_ == nullptr; };
            // bottom Field Functions 
            bool hasBottom() const { return this->bottom_ != nullptr;};
            void deleteBottom() { this->bottom_ = nullptr;};
            inline string getBottom() const { DARABONBA_PTR_GET_DEFAULT(bottom_, "") };
            inline Location& setBottom(string bottom) { DARABONBA_PTR_SET_VALUE(bottom_, bottom) };


            // left Field Functions 
            bool hasLeft() const { return this->left_ != nullptr;};
            void deleteLeft() { this->left_ = nullptr;};
            inline string getLeft() const { DARABONBA_PTR_GET_DEFAULT(left_, "") };
            inline Location& setLeft(string left) { DARABONBA_PTR_SET_VALUE(left_, left) };


            // right Field Functions 
            bool hasRight() const { return this->right_ != nullptr;};
            void deleteRight() { this->right_ = nullptr;};
            inline string getRight() const { DARABONBA_PTR_GET_DEFAULT(right_, "") };
            inline Location& setRight(string right) { DARABONBA_PTR_SET_VALUE(right_, right) };


            // top Field Functions 
            bool hasTop() const { return this->top_ != nullptr;};
            void deleteTop() { this->top_ = nullptr;};
            inline string getTop() const { DARABONBA_PTR_GET_DEFAULT(top_, "") };
            inline Location& setTop(string top) { DARABONBA_PTR_SET_VALUE(top_, top) };


          protected:
            // The bottom boundary of the detection box.
            shared_ptr<string> bottom_ {};
            // The left boundary of the detection box.
            shared_ptr<string> left_ {};
            // The right boundary of the detection box.
            shared_ptr<string> right_ {};
            // The top boundary of the detection box.
            shared_ptr<string> top_ {};
          };

          virtual bool empty() const override { return this->location_ == nullptr
        && this->originalPrice_ == nullptr && this->price_ == nullptr && this->skuCode_ == nullptr && this->skuName_ == nullptr; };
          // location Field Functions 
          bool hasLocation() const { return this->location_ != nullptr;};
          void deleteLocation() { this->location_ = nullptr;};
          inline const PriceTags::Location & getLocation() const { DARABONBA_PTR_GET_CONST(location_, PriceTags::Location) };
          inline PriceTags::Location getLocation() { DARABONBA_PTR_GET(location_, PriceTags::Location) };
          inline PriceTags& setLocation(const PriceTags::Location & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
          inline PriceTags& setLocation(PriceTags::Location && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


          // originalPrice Field Functions 
          bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
          void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
          inline string getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, "") };
          inline PriceTags& setOriginalPrice(string originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


          // price Field Functions 
          bool hasPrice() const { return this->price_ != nullptr;};
          void deletePrice() { this->price_ = nullptr;};
          inline string getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
          inline PriceTags& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


          // skuCode Field Functions 
          bool hasSkuCode() const { return this->skuCode_ != nullptr;};
          void deleteSkuCode() { this->skuCode_ = nullptr;};
          inline string getSkuCode() const { DARABONBA_PTR_GET_DEFAULT(skuCode_, "") };
          inline PriceTags& setSkuCode(string skuCode) { DARABONBA_PTR_SET_VALUE(skuCode_, skuCode) };


          // skuName Field Functions 
          bool hasSkuName() const { return this->skuName_ != nullptr;};
          void deleteSkuName() { this->skuName_ = nullptr;};
          inline string getSkuName() const { DARABONBA_PTR_GET_DEFAULT(skuName_, "") };
          inline PriceTags& setSkuName(string skuName) { DARABONBA_PTR_SET_VALUE(skuName_, skuName) };


        protected:
          // The location.
          shared_ptr<PriceTags::Location> location_ {};
          // The original price.
          shared_ptr<string> originalPrice_ {};
          // The selling price, retained as a string to avoid being parsed as a reserved word or reserved character.
          shared_ptr<string> price_ {};
          // The associated product code.
          shared_ptr<string> skuCode_ {};
          // The associated product name.
          shared_ptr<string> skuName_ {};
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
              DARABONBA_PTR_TO_JSON(Bbox2d, bbox2d_);
              DARABONBA_PTR_TO_JSON(Label, label_);
              DARABONBA_PTR_TO_JSON(Text, text_);
            };
            friend void from_json(const Darabonba::Json& j, Regions& obj) { 
              DARABONBA_PTR_FROM_JSON(Bbox2d, bbox2d_);
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
            inline const vector<double> & getBbox2d() const { DARABONBA_PTR_GET_CONST(bbox2d_, vector<double>) };
            inline vector<double> getBbox2d() { DARABONBA_PTR_GET(bbox2d_, vector<double>) };
            inline Regions& setBbox2d(const vector<double> & bbox2d) { DARABONBA_PTR_SET_VALUE(bbox2d_, bbox2d) };
            inline Regions& setBbox2d(vector<double> && bbox2d) { DARABONBA_PTR_SET_RVALUE(bbox2d_, bbox2d) };


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
            // The bounding box coordinates.
            shared_ptr<vector<double>> bbox2d_ {};
            // The label.
            shared_ptr<string> label_ {};
            // The recognized text.
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
          // The coverage.
          shared_ptr<string> coverage_ {};
          // The region list.
          shared_ptr<vector<Grounding::Regions>> regions_ {};
        };

        virtual bool empty() const override { return this->grounding_ == nullptr
        && this->priceTags_ == nullptr && this->type_ == nullptr; };
        // grounding Field Functions 
        bool hasGrounding() const { return this->grounding_ != nullptr;};
        void deleteGrounding() { this->grounding_ = nullptr;};
        inline const Result::Grounding & getGrounding() const { DARABONBA_PTR_GET_CONST(grounding_, Result::Grounding) };
        inline Result::Grounding getGrounding() { DARABONBA_PTR_GET(grounding_, Result::Grounding) };
        inline Result& setGrounding(const Result::Grounding & grounding) { DARABONBA_PTR_SET_VALUE(grounding_, grounding) };
        inline Result& setGrounding(Result::Grounding && grounding) { DARABONBA_PTR_SET_RVALUE(grounding_, grounding) };


        // priceTags Field Functions 
        bool hasPriceTags() const { return this->priceTags_ != nullptr;};
        void deletePriceTags() { this->priceTags_ = nullptr;};
        inline const vector<Result::PriceTags> & getPriceTags() const { DARABONBA_PTR_GET_CONST(priceTags_, vector<Result::PriceTags>) };
        inline vector<Result::PriceTags> getPriceTags() { DARABONBA_PTR_GET(priceTags_, vector<Result::PriceTags>) };
        inline Result& setPriceTags(const vector<Result::PriceTags> & priceTags) { DARABONBA_PTR_SET_VALUE(priceTags_, priceTags) };
        inline Result& setPriceTags(vector<Result::PriceTags> && priceTags) { DARABONBA_PTR_SET_RVALUE(priceTags_, priceTags) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The localization information.
        shared_ptr<Result::Grounding> grounding_ {};
        // The price tag list. This can be an empty array if no price tags are recognized under normal conditions.
        shared_ptr<vector<Result::PriceTags>> priceTags_ {};
        // The value is fixed to priceTag.
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
      // The detection and recognition result details.
      shared_ptr<Data::Result> result_ {};
      // The usage information.
      shared_ptr<map<string, int64_t>> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MerchandisePriceTagDetectionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MerchandisePriceTagDetectionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, MerchandisePriceTagDetectionResponseBody::Data) };
    inline MerchandisePriceTagDetectionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, MerchandisePriceTagDetectionResponseBody::Data) };
    inline MerchandisePriceTagDetectionResponseBody& setData(const MerchandisePriceTagDetectionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MerchandisePriceTagDetectionResponseBody& setData(MerchandisePriceTagDetectionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MerchandisePriceTagDetectionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MerchandisePriceTagDetectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MerchandisePriceTagDetectionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The scenario recognition result.
    shared_ptr<MerchandisePriceTagDetectionResponseBody::Data> data_ {};
    // The return message or failure description.
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

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEPACKAGEPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEPACKAGEPRICERESPONSEBODY_HPP_
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
  class GetResourcePackagePriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourcePackagePriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourcePackagePriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetResourcePackagePriceResponseBody() = default ;
    GetResourcePackagePriceResponseBody(const GetResourcePackagePriceResponseBody &) = default ;
    GetResourcePackagePriceResponseBody(GetResourcePackagePriceResponseBody &&) = default ;
    GetResourcePackagePriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourcePackagePriceResponseBody() = default ;
    GetResourcePackagePriceResponseBody& operator=(const GetResourcePackagePriceResponseBody &) = default ;
    GetResourcePackagePriceResponseBody& operator=(GetResourcePackagePriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
        DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
        DARABONBA_PTR_TO_JSON(Promotions, promotions_);
        DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
        DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
        DARABONBA_PTR_FROM_JSON(Promotions, promotions_);
        DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
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
      class Promotions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Promotions& obj) { 
          DARABONBA_PTR_TO_JSON(Promotion, promotion_);
        };
        friend void from_json(const Darabonba::Json& j, Promotions& obj) { 
          DARABONBA_PTR_FROM_JSON(Promotion, promotion_);
        };
        Promotions() = default ;
        Promotions(const Promotions &) = default ;
        Promotions(Promotions &&) = default ;
        Promotions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Promotions() = default ;
        Promotions& operator=(const Promotions &) = default ;
        Promotions& operator=(Promotions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Promotion : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Promotion& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Promotion& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Promotion() = default ;
          Promotion(const Promotion &) = default ;
          Promotion(Promotion &&) = default ;
          Promotion(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Promotion() = default ;
          Promotion& operator=(const Promotion &) = default ;
          Promotion& operator=(Promotion &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Promotion& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Promotion& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The ID of the promotion.
          shared_ptr<int64_t> id_ {};
          // The description of the discount.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->promotion_ == nullptr; };
        // promotion Field Functions 
        bool hasPromotion() const { return this->promotion_ != nullptr;};
        void deletePromotion() { this->promotion_ = nullptr;};
        inline const vector<Promotions::Promotion> & getPromotion() const { DARABONBA_PTR_GET_CONST(promotion_, vector<Promotions::Promotion>) };
        inline vector<Promotions::Promotion> getPromotion() { DARABONBA_PTR_GET(promotion_, vector<Promotions::Promotion>) };
        inline Promotions& setPromotion(const vector<Promotions::Promotion> & promotion) { DARABONBA_PTR_SET_VALUE(promotion_, promotion) };
        inline Promotions& setPromotion(vector<Promotions::Promotion> && promotion) { DARABONBA_PTR_SET_RVALUE(promotion_, promotion) };


      protected:
        shared_ptr<vector<Promotions::Promotion>> promotion_ {};
      };

      virtual bool empty() const override { return this->currency_ == nullptr
        && this->discountPrice_ == nullptr && this->originalPrice_ == nullptr && this->promotions_ == nullptr && this->tradePrice_ == nullptr; };
      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Data& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // discountPrice Field Functions 
      bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
      void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
      inline float getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
      inline Data& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


      // originalPrice Field Functions 
      bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
      void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
      inline float getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
      inline Data& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


      // promotions Field Functions 
      bool hasPromotions() const { return this->promotions_ != nullptr;};
      void deletePromotions() { this->promotions_ = nullptr;};
      inline const Data::Promotions & getPromotions() const { DARABONBA_PTR_GET_CONST(promotions_, Data::Promotions) };
      inline Data::Promotions getPromotions() { DARABONBA_PTR_GET(promotions_, Data::Promotions) };
      inline Data& setPromotions(const Data::Promotions & promotions) { DARABONBA_PTR_SET_VALUE(promotions_, promotions) };
      inline Data& setPromotions(Data::Promotions && promotions) { DARABONBA_PTR_SET_RVALUE(promotions_, promotions) };


      // tradePrice Field Functions 
      bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
      void deleteTradePrice() { this->tradePrice_ = nullptr;};
      inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
      inline Data& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


    protected:
      // The type of the currency.
      shared_ptr<string> currency_ {};
      // The discounted amount. Unit: CNY.
      shared_ptr<float> discountPrice_ {};
      // The original price. Unit: CNY.
      shared_ptr<float> originalPrice_ {};
      // The details of the discount.
      shared_ptr<Data::Promotions> promotions_ {};
      // The price at which the transaction is made. Unit: CNY.
      shared_ptr<float> tradePrice_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetResourcePackagePriceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetResourcePackagePriceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetResourcePackagePriceResponseBody::Data) };
    inline GetResourcePackagePriceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetResourcePackagePriceResponseBody::Data) };
    inline GetResourcePackagePriceResponseBody& setData(const GetResourcePackagePriceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetResourcePackagePriceResponseBody& setData(GetResourcePackagePriceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetResourcePackagePriceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourcePackagePriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetResourcePackagePriceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<GetResourcePackagePriceResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif

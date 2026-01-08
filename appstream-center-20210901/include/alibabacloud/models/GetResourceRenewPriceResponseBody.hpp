// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCERENEWPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCERENEWPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetResourceRenewPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceRenewPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceRenewPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetResourceRenewPriceResponseBody() = default ;
    GetResourceRenewPriceResponseBody(const GetResourceRenewPriceResponseBody &) = default ;
    GetResourceRenewPriceResponseBody(GetResourceRenewPriceResponseBody &&) = default ;
    GetResourceRenewPriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceRenewPriceResponseBody() = default ;
    GetResourceRenewPriceResponseBody& operator=(const GetResourceRenewPriceResponseBody &) = default ;
    GetResourceRenewPriceResponseBody& operator=(GetResourceRenewPriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
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
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        };
        Rules() = default ;
        Rules(const Rules &) = default ;
        Rules(Rules &&) = default ;
        Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rules() = default ;
        Rules& operator=(const Rules &) = default ;
        Rules& operator=(Rules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->ruleId_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Rules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
        inline Rules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      protected:
        // The description of the price calculation rule.
        shared_ptr<string> description_ {};
        // The ID of the price calculation rule.
        shared_ptr<int64_t> ruleId_ {};
      };

      class Price : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Price& obj) { 
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
          DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
          DARABONBA_PTR_TO_JSON(Promotions, promotions_);
          DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
        };
        friend void from_json(const Darabonba::Json& j, Price& obj) { 
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
          DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
          DARABONBA_PTR_FROM_JSON(Promotions, promotions_);
          DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
        };
        Price() = default ;
        Price(const Price &) = default ;
        Price(Price &&) = default ;
        Price(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Price() = default ;
        Price& operator=(const Price &) = default ;
        Price& operator=(Price &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Promotions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Promotions& obj) { 
            DARABONBA_PTR_TO_JSON(OptionCode, optionCode_);
            DARABONBA_PTR_TO_JSON(PromotionDesc, promotionDesc_);
            DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
            DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
            DARABONBA_PTR_TO_JSON(Selected, selected_);
          };
          friend void from_json(const Darabonba::Json& j, Promotions& obj) { 
            DARABONBA_PTR_FROM_JSON(OptionCode, optionCode_);
            DARABONBA_PTR_FROM_JSON(PromotionDesc, promotionDesc_);
            DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
            DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
            DARABONBA_PTR_FROM_JSON(Selected, selected_);
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
          virtual bool empty() const override { return this->optionCode_ == nullptr
        && this->promotionDesc_ == nullptr && this->promotionId_ == nullptr && this->promotionName_ == nullptr && this->selected_ == nullptr; };
          // optionCode Field Functions 
          bool hasOptionCode() const { return this->optionCode_ != nullptr;};
          void deleteOptionCode() { this->optionCode_ = nullptr;};
          inline string getOptionCode() const { DARABONBA_PTR_GET_DEFAULT(optionCode_, "") };
          inline Promotions& setOptionCode(string optionCode) { DARABONBA_PTR_SET_VALUE(optionCode_, optionCode) };


          // promotionDesc Field Functions 
          bool hasPromotionDesc() const { return this->promotionDesc_ != nullptr;};
          void deletePromotionDesc() { this->promotionDesc_ = nullptr;};
          inline string getPromotionDesc() const { DARABONBA_PTR_GET_DEFAULT(promotionDesc_, "") };
          inline Promotions& setPromotionDesc(string promotionDesc) { DARABONBA_PTR_SET_VALUE(promotionDesc_, promotionDesc) };


          // promotionId Field Functions 
          bool hasPromotionId() const { return this->promotionId_ != nullptr;};
          void deletePromotionId() { this->promotionId_ = nullptr;};
          inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
          inline Promotions& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


          // promotionName Field Functions 
          bool hasPromotionName() const { return this->promotionName_ != nullptr;};
          void deletePromotionName() { this->promotionName_ = nullptr;};
          inline string getPromotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
          inline Promotions& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


          // selected Field Functions 
          bool hasSelected() const { return this->selected_ != nullptr;};
          void deleteSelected() { this->selected_ = nullptr;};
          inline bool getSelected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
          inline Promotions& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


        protected:
          // The coupon code.
          shared_ptr<string> optionCode_ {};
          // The coupon description.
          shared_ptr<string> promotionDesc_ {};
          // The coupon ID.
          shared_ptr<string> promotionId_ {};
          // The coupon name.
          shared_ptr<string> promotionName_ {};
          // Indicates whether the coupon was used.
          // 
          // Valid values:
          // 
          // *   true
          // *   false
          shared_ptr<bool> selected_ {};
        };

        virtual bool empty() const override { return this->currency_ == nullptr
        && this->discountPrice_ == nullptr && this->originalPrice_ == nullptr && this->promotions_ == nullptr && this->tradePrice_ == nullptr; };
        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline Price& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // discountPrice Field Functions 
        bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
        void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
        inline string getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, "") };
        inline Price& setDiscountPrice(string discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


        // originalPrice Field Functions 
        bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
        void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
        inline string getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, "") };
        inline Price& setOriginalPrice(string originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


        // promotions Field Functions 
        bool hasPromotions() const { return this->promotions_ != nullptr;};
        void deletePromotions() { this->promotions_ = nullptr;};
        inline const vector<Price::Promotions> & getPromotions() const { DARABONBA_PTR_GET_CONST(promotions_, vector<Price::Promotions>) };
        inline vector<Price::Promotions> getPromotions() { DARABONBA_PTR_GET(promotions_, vector<Price::Promotions>) };
        inline Price& setPromotions(const vector<Price::Promotions> & promotions) { DARABONBA_PTR_SET_VALUE(promotions_, promotions) };
        inline Price& setPromotions(vector<Price::Promotions> && promotions) { DARABONBA_PTR_SET_RVALUE(promotions_, promotions) };


        // tradePrice Field Functions 
        bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
        void deleteTradePrice() { this->tradePrice_ = nullptr;};
        inline string getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, "") };
        inline Price& setTradePrice(string tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


      protected:
        // The currency type.
        shared_ptr<string> currency_ {};
        // The discount. The actual price is calculated based on the following formula: Actual price = Original price - Discount.
        shared_ptr<string> discountPrice_ {};
        // The original price.
        shared_ptr<string> originalPrice_ {};
        // The coupon description.
        shared_ptr<vector<Price::Promotions>> promotions_ {};
        // The actual price. The actual price is calculated based on the following formula: Actual price = Original price - Discount.
        shared_ptr<string> tradePrice_ {};
      };

      virtual bool empty() const override { return this->price_ == nullptr
        && this->rules_ == nullptr; };
      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline const Data::Price & getPrice() const { DARABONBA_PTR_GET_CONST(price_, Data::Price) };
      inline Data::Price getPrice() { DARABONBA_PTR_GET(price_, Data::Price) };
      inline Data& setPrice(const Data::Price & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
      inline Data& setPrice(Data::Price && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<Data::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Data::Rules>) };
      inline vector<Data::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<Data::Rules>) };
      inline Data& setRules(const vector<Data::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline Data& setRules(vector<Data::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      // The price details.
      shared_ptr<Data::Price> price_ {};
      // The price calculation rules.
      shared_ptr<vector<Data::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetResourceRenewPriceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetResourceRenewPriceResponseBody::Data) };
    inline GetResourceRenewPriceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetResourceRenewPriceResponseBody::Data) };
    inline GetResourceRenewPriceResponseBody& setData(const GetResourceRenewPriceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetResourceRenewPriceResponseBody& setData(GetResourceRenewPriceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceRenewPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The price object.
    shared_ptr<GetResourceRenewPriceResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif

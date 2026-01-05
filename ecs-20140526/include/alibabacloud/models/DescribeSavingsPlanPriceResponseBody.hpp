// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSavingsPlanPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlanPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlanPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSavingsPlanPriceResponseBody() = default ;
    DescribeSavingsPlanPriceResponseBody(const DescribeSavingsPlanPriceResponseBody &) = default ;
    DescribeSavingsPlanPriceResponseBody(DescribeSavingsPlanPriceResponseBody &&) = default ;
    DescribeSavingsPlanPriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlanPriceResponseBody() = default ;
    DescribeSavingsPlanPriceResponseBody& operator=(const DescribeSavingsPlanPriceResponseBody &) = default ;
    DescribeSavingsPlanPriceResponseBody& operator=(DescribeSavingsPlanPriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PriceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PriceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, PriceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
      };
      PriceInfo() = default ;
      PriceInfo(const PriceInfo &) = default ;
      PriceInfo(PriceInfo &&) = default ;
      PriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PriceInfo() = default ;
      PriceInfo& operator=(const PriceInfo &) = default ;
      PriceInfo& operator=(PriceInfo &&) = default ;
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
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline Rules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> ruleId_ {};
      };

      class Price : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Price& obj) { 
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
          DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
          DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
        };
        friend void from_json(const Darabonba::Json& j, Price& obj) { 
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
          DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
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
        virtual bool empty() const override { return this->currency_ == nullptr
        && this->discountPrice_ == nullptr && this->originalPrice_ == nullptr && this->tradePrice_ == nullptr; };
        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline Price& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // discountPrice Field Functions 
        bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
        void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
        inline float getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
        inline Price& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


        // originalPrice Field Functions 
        bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
        void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
        inline float getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
        inline Price& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


        // tradePrice Field Functions 
        bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
        void deleteTradePrice() { this->tradePrice_ = nullptr;};
        inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
        inline Price& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


      protected:
        shared_ptr<string> currency_ {};
        shared_ptr<float> discountPrice_ {};
        shared_ptr<float> originalPrice_ {};
        shared_ptr<float> tradePrice_ {};
      };

      virtual bool empty() const override { return this->price_ == nullptr
        && this->rules_ == nullptr; };
      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline const PriceInfo::Price & getPrice() const { DARABONBA_PTR_GET_CONST(price_, PriceInfo::Price) };
      inline PriceInfo::Price getPrice() { DARABONBA_PTR_GET(price_, PriceInfo::Price) };
      inline PriceInfo& setPrice(const PriceInfo::Price & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
      inline PriceInfo& setPrice(PriceInfo::Price && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<PriceInfo::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<PriceInfo::Rules>) };
      inline vector<PriceInfo::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<PriceInfo::Rules>) };
      inline PriceInfo& setRules(const vector<PriceInfo::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline PriceInfo& setRules(vector<PriceInfo::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      shared_ptr<PriceInfo::Price> price_ {};
      shared_ptr<vector<PriceInfo::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->priceInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const DescribeSavingsPlanPriceResponseBody::PriceInfo & getPriceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, DescribeSavingsPlanPriceResponseBody::PriceInfo) };
    inline DescribeSavingsPlanPriceResponseBody::PriceInfo getPriceInfo() { DARABONBA_PTR_GET(priceInfo_, DescribeSavingsPlanPriceResponseBody::PriceInfo) };
    inline DescribeSavingsPlanPriceResponseBody& setPriceInfo(const DescribeSavingsPlanPriceResponseBody::PriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline DescribeSavingsPlanPriceResponseBody& setPriceInfo(DescribeSavingsPlanPriceResponseBody::PriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSavingsPlanPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeSavingsPlanPriceResponseBody::PriceInfo> priceInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePriceResponseBody() = default ;
    DescribePriceResponseBody(const DescribePriceResponseBody &) = default ;
    DescribePriceResponseBody(DescribePriceResponseBody &&) = default ;
    DescribePriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBody() = default ;
    DescribePriceResponseBody& operator=(const DescribePriceResponseBody &) = default ;
    DescribePriceResponseBody& operator=(DescribePriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PriceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PriceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(FreeCdsQuota, freeCdsQuota_);
        DARABONBA_PTR_TO_JSON(FreeCdsSize, freeCdsSize_);
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, PriceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(FreeCdsQuota, freeCdsQuota_);
        DARABONBA_PTR_FROM_JSON(FreeCdsSize, freeCdsSize_);
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
        inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
        inline Rules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      protected:
        // The description of the rule.
        shared_ptr<string> description_ {};
        // The rule ID.
        shared_ptr<int64_t> ruleId_ {};
      };

      class Price : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Price& obj) { 
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
          DARABONBA_PTR_TO_JSON(OrderLines, orderLines_);
          DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
          DARABONBA_PTR_TO_JSON(Promotions, promotions_);
          DARABONBA_PTR_TO_JSON(SpPrice, spPrice_);
          DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
        };
        friend void from_json(const Darabonba::Json& j, Price& obj) { 
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
          DARABONBA_PTR_FROM_JSON(OrderLines, orderLines_);
          DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
          DARABONBA_PTR_FROM_JSON(Promotions, promotions_);
          DARABONBA_PTR_FROM_JSON(SpPrice, spPrice_);
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
          // The description of the promotion rule.
          shared_ptr<string> optionCode_ {};
          // The description of the promotion.
          shared_ptr<string> promotionDesc_ {};
          // The promotion ID.
          shared_ptr<string> promotionId_ {};
          // The promotion name.
          shared_ptr<string> promotionName_ {};
          // Indicates whether an item is selected.
          shared_ptr<bool> selected_ {};
        };

        virtual bool empty() const override { return this->currency_ == nullptr
        && this->discountPrice_ == nullptr && this->orderLines_ == nullptr && this->originalPrice_ == nullptr && this->promotions_ == nullptr && this->spPrice_ == nullptr
        && this->tradePrice_ == nullptr; };
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


        // orderLines Field Functions 
        bool hasOrderLines() const { return this->orderLines_ != nullptr;};
        void deleteOrderLines() { this->orderLines_ = nullptr;};
        inline const map<string, string> & getOrderLines() const { DARABONBA_PTR_GET_CONST(orderLines_, map<string, string>) };
        inline map<string, string> getOrderLines() { DARABONBA_PTR_GET(orderLines_, map<string, string>) };
        inline Price& setOrderLines(const map<string, string> & orderLines) { DARABONBA_PTR_SET_VALUE(orderLines_, orderLines) };
        inline Price& setOrderLines(map<string, string> && orderLines) { DARABONBA_PTR_SET_RVALUE(orderLines_, orderLines) };


        // originalPrice Field Functions 
        bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
        void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
        inline float getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
        inline Price& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


        // promotions Field Functions 
        bool hasPromotions() const { return this->promotions_ != nullptr;};
        void deletePromotions() { this->promotions_ = nullptr;};
        inline const vector<Price::Promotions> & getPromotions() const { DARABONBA_PTR_GET_CONST(promotions_, vector<Price::Promotions>) };
        inline vector<Price::Promotions> getPromotions() { DARABONBA_PTR_GET(promotions_, vector<Price::Promotions>) };
        inline Price& setPromotions(const vector<Price::Promotions> & promotions) { DARABONBA_PTR_SET_VALUE(promotions_, promotions) };
        inline Price& setPromotions(vector<Price::Promotions> && promotions) { DARABONBA_PTR_SET_RVALUE(promotions_, promotions) };


        // spPrice Field Functions 
        bool hasSpPrice() const { return this->spPrice_ != nullptr;};
        void deleteSpPrice() { this->spPrice_ = nullptr;};
        inline int64_t getSpPrice() const { DARABONBA_PTR_GET_DEFAULT(spPrice_, 0L) };
        inline Price& setSpPrice(int64_t spPrice) { DARABONBA_PTR_SET_VALUE(spPrice_, spPrice) };


        // tradePrice Field Functions 
        bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
        void deleteTradePrice() { this->tradePrice_ = nullptr;};
        inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
        inline Price& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


      protected:
        // The unit of currency (USD).
        shared_ptr<string> currency_ {};
        // The discounted amount.
        shared_ptr<float> discountPrice_ {};
        // The orders.
        shared_ptr<map<string, string>> orderLines_ {};
        // The original price.
        shared_ptr<float> originalPrice_ {};
        // The promotions.
        shared_ptr<vector<Price::Promotions>> promotions_ {};
        // The price under an effective savings plan.
        shared_ptr<int64_t> spPrice_ {};
        // The actual price. The original price minus the discounted amount equals the actual price.
        shared_ptr<float> tradePrice_ {};
      };

      virtual bool empty() const override { return this->freeCdsQuota_ == nullptr
        && this->freeCdsSize_ == nullptr && this->price_ == nullptr && this->rules_ == nullptr; };
      // freeCdsQuota Field Functions 
      bool hasFreeCdsQuota() const { return this->freeCdsQuota_ != nullptr;};
      void deleteFreeCdsQuota() { this->freeCdsQuota_ = nullptr;};
      inline bool getFreeCdsQuota() const { DARABONBA_PTR_GET_DEFAULT(freeCdsQuota_, false) };
      inline PriceInfo& setFreeCdsQuota(bool freeCdsQuota) { DARABONBA_PTR_SET_VALUE(freeCdsQuota_, freeCdsQuota) };


      // freeCdsSize Field Functions 
      bool hasFreeCdsSize() const { return this->freeCdsSize_ != nullptr;};
      void deleteFreeCdsSize() { this->freeCdsSize_ = nullptr;};
      inline int64_t getFreeCdsSize() const { DARABONBA_PTR_GET_DEFAULT(freeCdsSize_, 0L) };
      inline PriceInfo& setFreeCdsSize(int64_t freeCdsSize) { DARABONBA_PTR_SET_VALUE(freeCdsSize_, freeCdsSize) };


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
      // Indicates whether a free enterprise drive is available.
      shared_ptr<bool> freeCdsQuota_ {};
      // The free capacity provided by the enterprise drive. Unit: GiB.
      shared_ptr<int64_t> freeCdsSize_ {};
      // The price.
      shared_ptr<PriceInfo::Price> price_ {};
      // The details of the promotion rules.
      shared_ptr<vector<PriceInfo::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->priceInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const DescribePriceResponseBody::PriceInfo & getPriceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, DescribePriceResponseBody::PriceInfo) };
    inline DescribePriceResponseBody::PriceInfo getPriceInfo() { DARABONBA_PTR_GET(priceInfo_, DescribePriceResponseBody::PriceInfo) };
    inline DescribePriceResponseBody& setPriceInfo(const DescribePriceResponseBody::PriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline DescribePriceResponseBody& setPriceInfo(DescribePriceResponseBody::PriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The price details.
    shared_ptr<DescribePriceResponseBody::PriceInfo> priceInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEPRICERESPONSEBODY_HPP_
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
  class GetResourcePriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourcePriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PriceList, priceList_);
      DARABONBA_PTR_TO_JSON(PriceModel, priceModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourcePriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PriceList, priceList_);
      DARABONBA_PTR_FROM_JSON(PriceModel, priceModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetResourcePriceResponseBody() = default ;
    GetResourcePriceResponseBody(const GetResourcePriceResponseBody &) = default ;
    GetResourcePriceResponseBody(GetResourcePriceResponseBody &&) = default ;
    GetResourcePriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourcePriceResponseBody() = default ;
    GetResourcePriceResponseBody& operator=(const GetResourcePriceResponseBody &) = default ;
    GetResourcePriceResponseBody& operator=(GetResourcePriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PriceModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PriceModel& obj) { 
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, PriceModel& obj) { 
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
      };
      PriceModel() = default ;
      PriceModel(const PriceModel &) = default ;
      PriceModel(PriceModel &&) = default ;
      PriceModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PriceModel() = default ;
      PriceModel& operator=(const PriceModel &) = default ;
      PriceModel& operator=(PriceModel &&) = default ;
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
        // The coupon metadata.
        shared_ptr<vector<Price::Promotions>> promotions_ {};
        // The actual price. The actual price is calculated based on the following formula: Actual price = Original price - Discount.
        shared_ptr<string> tradePrice_ {};
      };

      virtual bool empty() const override { return this->price_ == nullptr
        && this->rules_ == nullptr; };
      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline const PriceModel::Price & getPrice() const { DARABONBA_PTR_GET_CONST(price_, PriceModel::Price) };
      inline PriceModel::Price getPrice() { DARABONBA_PTR_GET(price_, PriceModel::Price) };
      inline PriceModel& setPrice(const PriceModel::Price & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
      inline PriceModel& setPrice(PriceModel::Price && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<PriceModel::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<PriceModel::Rules>) };
      inline vector<PriceModel::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<PriceModel::Rules>) };
      inline PriceModel& setRules(const vector<PriceModel::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline PriceModel& setRules(vector<PriceModel::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      // The price details.
      shared_ptr<PriceModel::Price> price_ {};
      // The price calculation rules.
      shared_ptr<vector<PriceModel::Rules>> rules_ {};
    };

    class PriceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PriceList& obj) { 
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(PriceType, priceType_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, PriceList& obj) { 
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(PriceType, priceType_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
      };
      PriceList() = default ;
      PriceList(const PriceList &) = default ;
      PriceList(PriceList &&) = default ;
      PriceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PriceList() = default ;
      PriceList& operator=(const PriceList &) = default ;
      PriceList& operator=(PriceList &&) = default ;
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
        // The coupon metadata.
        shared_ptr<vector<Price::Promotions>> promotions_ {};
        // The actual price. The actual price is calculated based on the following formula: Actual price = Original price - Discount.
        shared_ptr<string> tradePrice_ {};
      };

      virtual bool empty() const override { return this->price_ == nullptr
        && this->priceType_ == nullptr && this->rules_ == nullptr; };
      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline const PriceList::Price & getPrice() const { DARABONBA_PTR_GET_CONST(price_, PriceList::Price) };
      inline PriceList::Price getPrice() { DARABONBA_PTR_GET(price_, PriceList::Price) };
      inline PriceList& setPrice(const PriceList::Price & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
      inline PriceList& setPrice(PriceList::Price && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


      // priceType Field Functions 
      bool hasPriceType() const { return this->priceType_ != nullptr;};
      void deletePriceType() { this->priceType_ = nullptr;};
      inline string getPriceType() const { DARABONBA_PTR_GET_DEFAULT(priceType_, "") };
      inline PriceList& setPriceType(string priceType) { DARABONBA_PTR_SET_VALUE(priceType_, priceType) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<PriceList::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<PriceList::Rules>) };
      inline vector<PriceList::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<PriceList::Rules>) };
      inline PriceList& setRules(const vector<PriceList::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline PriceList& setRules(vector<PriceList::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      // The price details.
      shared_ptr<PriceList::Price> price_ {};
      // The price type.
      // 
      // Valid values:
      // 
      // *   Connected: in use
      // *   Standby: pending for use.
      shared_ptr<string> priceType_ {};
      // The price calculation rules.
      shared_ptr<vector<PriceList::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->priceList_ == nullptr && this->priceModel_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetResourcePriceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetResourcePriceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // priceList Field Functions 
    bool hasPriceList() const { return this->priceList_ != nullptr;};
    void deletePriceList() { this->priceList_ = nullptr;};
    inline const vector<GetResourcePriceResponseBody::PriceList> & getPriceList() const { DARABONBA_PTR_GET_CONST(priceList_, vector<GetResourcePriceResponseBody::PriceList>) };
    inline vector<GetResourcePriceResponseBody::PriceList> getPriceList() { DARABONBA_PTR_GET(priceList_, vector<GetResourcePriceResponseBody::PriceList>) };
    inline GetResourcePriceResponseBody& setPriceList(const vector<GetResourcePriceResponseBody::PriceList> & priceList) { DARABONBA_PTR_SET_VALUE(priceList_, priceList) };
    inline GetResourcePriceResponseBody& setPriceList(vector<GetResourcePriceResponseBody::PriceList> && priceList) { DARABONBA_PTR_SET_RVALUE(priceList_, priceList) };


    // priceModel Field Functions 
    bool hasPriceModel() const { return this->priceModel_ != nullptr;};
    void deletePriceModel() { this->priceModel_ = nullptr;};
    inline const GetResourcePriceResponseBody::PriceModel & getPriceModel() const { DARABONBA_PTR_GET_CONST(priceModel_, GetResourcePriceResponseBody::PriceModel) };
    inline GetResourcePriceResponseBody::PriceModel getPriceModel() { DARABONBA_PTR_GET(priceModel_, GetResourcePriceResponseBody::PriceModel) };
    inline GetResourcePriceResponseBody& setPriceModel(const GetResourcePriceResponseBody::PriceModel & priceModel) { DARABONBA_PTR_SET_VALUE(priceModel_, priceModel) };
    inline GetResourcePriceResponseBody& setPriceModel(GetResourcePriceResponseBody::PriceModel && priceModel) { DARABONBA_PTR_SET_RVALUE(priceModel_, priceModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourcePriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The price objects.
    // 
    // This parameter is returned only if a value is specified for AppInstanceType.
    shared_ptr<vector<GetResourcePriceResponseBody::PriceList>> priceList_ {};
    // The price object.
    // 
    // This parameter is returned only if a value is specified for NodeInstanceType.
    shared_ptr<GetResourcePriceResponseBody::PriceModel> priceModel_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif

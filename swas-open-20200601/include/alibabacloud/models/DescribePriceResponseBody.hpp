// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
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
        inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
        inline Rules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      protected:
        // The custom parameter description.
        shared_ptr<string> description_ {};
        // The rule ID.
        shared_ptr<int64_t> ruleId_ {};
      };

      class Price : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Price& obj) { 
          DARABONBA_PTR_TO_JSON(Coupons, coupons_);
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(DetailInfos, detailInfos_);
          DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
          DARABONBA_PTR_TO_JSON(IsContractPromotion, isContractPromotion_);
          DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
          DARABONBA_PTR_TO_JSON(Promotions, promotions_);
          DARABONBA_PTR_TO_JSON(StandardDiscountPrice, standardDiscountPrice_);
          DARABONBA_PTR_TO_JSON(StandardPrice, standardPrice_);
          DARABONBA_PTR_TO_JSON(SubPrices, subPrices_);
          DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
        };
        friend void from_json(const Darabonba::Json& j, Price& obj) { 
          DARABONBA_PTR_FROM_JSON(Coupons, coupons_);
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(DetailInfos, detailInfos_);
          DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
          DARABONBA_PTR_FROM_JSON(IsContractPromotion, isContractPromotion_);
          DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
          DARABONBA_PTR_FROM_JSON(Promotions, promotions_);
          DARABONBA_PTR_FROM_JSON(StandardDiscountPrice, standardDiscountPrice_);
          DARABONBA_PTR_FROM_JSON(StandardPrice, standardPrice_);
          DARABONBA_PTR_FROM_JSON(SubPrices, subPrices_);
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
        class SubPrices : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubPrices& obj) { 
            DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(IsContractPromotion, isContractPromotion_);
            DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
            DARABONBA_PTR_TO_JSON(Promotions, promotions_);
            DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
            DARABONBA_PTR_TO_JSON(StandardDiscountPrice, standardDiscountPrice_);
            DARABONBA_PTR_TO_JSON(StandardPrice, standardPrice_);
            DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
          };
          friend void from_json(const Darabonba::Json& j, SubPrices& obj) { 
            DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(IsContractPromotion, isContractPromotion_);
            DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
            DARABONBA_PTR_FROM_JSON(Promotions, promotions_);
            DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
            DARABONBA_PTR_FROM_JSON(StandardDiscountPrice, standardDiscountPrice_);
            DARABONBA_PTR_FROM_JSON(StandardPrice, standardPrice_);
            DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
          };
          SubPrices() = default ;
          SubPrices(const SubPrices &) = default ;
          SubPrices(SubPrices &&) = default ;
          SubPrices(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubPrices() = default ;
          SubPrices& operator=(const SubPrices &) = default ;
          SubPrices& operator=(SubPrices &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Promotions : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Promotions& obj) { 
              DARABONBA_PTR_TO_JSON(DiscountOff, discountOff_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
            };
            friend void from_json(const Darabonba::Json& j, Promotions& obj) { 
              DARABONBA_PTR_FROM_JSON(DiscountOff, discountOff_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
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
            virtual bool empty() const override { return this->discountOff_ == nullptr
        && this->name_ == nullptr && this->ruleIds_ == nullptr; };
            // discountOff Field Functions 
            bool hasDiscountOff() const { return this->discountOff_ != nullptr;};
            void deleteDiscountOff() { this->discountOff_ = nullptr;};
            inline float getDiscountOff() const { DARABONBA_PTR_GET_DEFAULT(discountOff_, 0.0) };
            inline Promotions& setDiscountOff(float discountOff) { DARABONBA_PTR_SET_VALUE(discountOff_, discountOff) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Promotions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // ruleIds Field Functions 
            bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
            void deleteRuleIds() { this->ruleIds_ = nullptr;};
            inline const vector<int64_t> & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<int64_t>) };
            inline vector<int64_t> getRuleIds() { DARABONBA_PTR_GET(ruleIds_, vector<int64_t>) };
            inline Promotions& setRuleIds(const vector<int64_t> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
            inline Promotions& setRuleIds(vector<int64_t> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


          protected:
            // The coupon discount amount.
            shared_ptr<float> discountOff_ {};
            // The name.
            shared_ptr<string> name_ {};
            // The promotion rule ID.
            shared_ptr<vector<int64_t>> ruleIds_ {};
          };

          virtual bool empty() const override { return this->discountPrice_ == nullptr
        && this->instanceId_ == nullptr && this->isContractPromotion_ == nullptr && this->originalPrice_ == nullptr && this->promotions_ == nullptr && this->ruleIds_ == nullptr
        && this->standardDiscountPrice_ == nullptr && this->standardPrice_ == nullptr && this->tradePrice_ == nullptr; };
          // discountPrice Field Functions 
          bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
          void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
          inline float getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
          inline SubPrices& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline SubPrices& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // isContractPromotion Field Functions 
          bool hasIsContractPromotion() const { return this->isContractPromotion_ != nullptr;};
          void deleteIsContractPromotion() { this->isContractPromotion_ = nullptr;};
          inline bool getIsContractPromotion() const { DARABONBA_PTR_GET_DEFAULT(isContractPromotion_, false) };
          inline SubPrices& setIsContractPromotion(bool isContractPromotion) { DARABONBA_PTR_SET_VALUE(isContractPromotion_, isContractPromotion) };


          // originalPrice Field Functions 
          bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
          void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
          inline float getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
          inline SubPrices& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


          // promotions Field Functions 
          bool hasPromotions() const { return this->promotions_ != nullptr;};
          void deletePromotions() { this->promotions_ = nullptr;};
          inline const vector<SubPrices::Promotions> & getPromotions() const { DARABONBA_PTR_GET_CONST(promotions_, vector<SubPrices::Promotions>) };
          inline vector<SubPrices::Promotions> getPromotions() { DARABONBA_PTR_GET(promotions_, vector<SubPrices::Promotions>) };
          inline SubPrices& setPromotions(const vector<SubPrices::Promotions> & promotions) { DARABONBA_PTR_SET_VALUE(promotions_, promotions) };
          inline SubPrices& setPromotions(vector<SubPrices::Promotions> && promotions) { DARABONBA_PTR_SET_RVALUE(promotions_, promotions) };


          // ruleIds Field Functions 
          bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
          void deleteRuleIds() { this->ruleIds_ = nullptr;};
          inline const vector<int64_t> & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<int64_t>) };
          inline vector<int64_t> getRuleIds() { DARABONBA_PTR_GET(ruleIds_, vector<int64_t>) };
          inline SubPrices& setRuleIds(const vector<int64_t> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
          inline SubPrices& setRuleIds(vector<int64_t> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


          // standardDiscountPrice Field Functions 
          bool hasStandardDiscountPrice() const { return this->standardDiscountPrice_ != nullptr;};
          void deleteStandardDiscountPrice() { this->standardDiscountPrice_ = nullptr;};
          inline float getStandardDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(standardDiscountPrice_, 0.0) };
          inline SubPrices& setStandardDiscountPrice(float standardDiscountPrice) { DARABONBA_PTR_SET_VALUE(standardDiscountPrice_, standardDiscountPrice) };


          // standardPrice Field Functions 
          bool hasStandardPrice() const { return this->standardPrice_ != nullptr;};
          void deleteStandardPrice() { this->standardPrice_ = nullptr;};
          inline float getStandardPrice() const { DARABONBA_PTR_GET_DEFAULT(standardPrice_, 0.0) };
          inline SubPrices& setStandardPrice(float standardPrice) { DARABONBA_PTR_SET_VALUE(standardPrice_, standardPrice) };


          // tradePrice Field Functions 
          bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
          void deleteTradePrice() { this->tradePrice_ = nullptr;};
          inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
          inline SubPrices& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


        protected:
          // The order discount amount.
          shared_ptr<float> discountPrice_ {};
          // The instance ID of the Simple Application Server.
          shared_ptr<string> instanceId_ {};
          // Specifies whether a promotion is matched.
          shared_ptr<bool> isContractPromotion_ {};
          // The original price of the order (CNY).
          shared_ptr<float> originalPrice_ {};
          // The promotion name.
          shared_ptr<vector<SubPrices::Promotions>> promotions_ {};
          // The collection of activity rule IDs.
          shared_ptr<vector<int64_t>> ruleIds_ {};
          // The discounted price based on the official website discount.
          shared_ptr<float> standardDiscountPrice_ {};
          // The discounted price on the official website or the discounted price in the direct sales contract.
          shared_ptr<float> standardPrice_ {};
          // The transaction price.
          shared_ptr<float> tradePrice_ {};
        };

        class Promotions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Promotions& obj) { 
            DARABONBA_PTR_TO_JSON(DiscountOff, discountOff_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
          };
          friend void from_json(const Darabonba::Json& j, Promotions& obj) { 
            DARABONBA_PTR_FROM_JSON(DiscountOff, discountOff_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
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
          virtual bool empty() const override { return this->discountOff_ == nullptr
        && this->name_ == nullptr && this->ruleIds_ == nullptr; };
          // discountOff Field Functions 
          bool hasDiscountOff() const { return this->discountOff_ != nullptr;};
          void deleteDiscountOff() { this->discountOff_ = nullptr;};
          inline float getDiscountOff() const { DARABONBA_PTR_GET_DEFAULT(discountOff_, 0.0) };
          inline Promotions& setDiscountOff(float discountOff) { DARABONBA_PTR_SET_VALUE(discountOff_, discountOff) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Promotions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // ruleIds Field Functions 
          bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
          void deleteRuleIds() { this->ruleIds_ = nullptr;};
          inline const vector<int64_t> & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<int64_t>) };
          inline vector<int64_t> getRuleIds() { DARABONBA_PTR_GET(ruleIds_, vector<int64_t>) };
          inline Promotions& setRuleIds(const vector<int64_t> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
          inline Promotions& setRuleIds(vector<int64_t> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


        protected:
          // The coupon discount amount.
          shared_ptr<float> discountOff_ {};
          // The coupon name.
          shared_ptr<string> name_ {};
          // The promotion ID.
          shared_ptr<vector<int64_t>> ruleIds_ {};
        };

        class DetailInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DetailInfos& obj) { 
            DARABONBA_PTR_TO_JSON(CommodityType, commodityType_);
            DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
            DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
            DARABONBA_PTR_TO_JSON(Promotions, promotions_);
            DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
          };
          friend void from_json(const Darabonba::Json& j, DetailInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(CommodityType, commodityType_);
            DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
            DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
            DARABONBA_PTR_FROM_JSON(Promotions, promotions_);
            DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
          };
          DetailInfos() = default ;
          DetailInfos(const DetailInfos &) = default ;
          DetailInfos(DetailInfos &&) = default ;
          DetailInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DetailInfos() = default ;
          DetailInfos& operator=(const DetailInfos &) = default ;
          DetailInfos& operator=(DetailInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Promotions : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Promotions& obj) { 
              DARABONBA_PTR_TO_JSON(DiscountOff, discountOff_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
            };
            friend void from_json(const Darabonba::Json& j, Promotions& obj) { 
              DARABONBA_PTR_FROM_JSON(DiscountOff, discountOff_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
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
            virtual bool empty() const override { return this->discountOff_ == nullptr
        && this->name_ == nullptr && this->ruleId_ == nullptr; };
            // discountOff Field Functions 
            bool hasDiscountOff() const { return this->discountOff_ != nullptr;};
            void deleteDiscountOff() { this->discountOff_ = nullptr;};
            inline float getDiscountOff() const { DARABONBA_PTR_GET_DEFAULT(discountOff_, 0.0) };
            inline Promotions& setDiscountOff(float discountOff) { DARABONBA_PTR_SET_VALUE(discountOff_, discountOff) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Promotions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // ruleId Field Functions 
            bool hasRuleId() const { return this->ruleId_ != nullptr;};
            void deleteRuleId() { this->ruleId_ = nullptr;};
            inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
            inline Promotions& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


          protected:
            // The discount amount.
            shared_ptr<float> discountOff_ {};
            // The promotion name.
            shared_ptr<string> name_ {};
            // The promotion rule ID.
            shared_ptr<int64_t> ruleId_ {};
          };

          virtual bool empty() const override { return this->commodityType_ == nullptr
        && this->discountPrice_ == nullptr && this->originalPrice_ == nullptr && this->promotions_ == nullptr && this->tradePrice_ == nullptr; };
          // commodityType Field Functions 
          bool hasCommodityType() const { return this->commodityType_ != nullptr;};
          void deleteCommodityType() { this->commodityType_ = nullptr;};
          inline string getCommodityType() const { DARABONBA_PTR_GET_DEFAULT(commodityType_, "") };
          inline DetailInfos& setCommodityType(string commodityType) { DARABONBA_PTR_SET_VALUE(commodityType_, commodityType) };


          // discountPrice Field Functions 
          bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
          void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
          inline float getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
          inline DetailInfos& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


          // originalPrice Field Functions 
          bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
          void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
          inline float getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
          inline DetailInfos& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


          // promotions Field Functions 
          bool hasPromotions() const { return this->promotions_ != nullptr;};
          void deletePromotions() { this->promotions_ = nullptr;};
          inline const vector<DetailInfos::Promotions> & getPromotions() const { DARABONBA_PTR_GET_CONST(promotions_, vector<DetailInfos::Promotions>) };
          inline vector<DetailInfos::Promotions> getPromotions() { DARABONBA_PTR_GET(promotions_, vector<DetailInfos::Promotions>) };
          inline DetailInfos& setPromotions(const vector<DetailInfos::Promotions> & promotions) { DARABONBA_PTR_SET_VALUE(promotions_, promotions) };
          inline DetailInfos& setPromotions(vector<DetailInfos::Promotions> && promotions) { DARABONBA_PTR_SET_RVALUE(promotions_, promotions) };


          // tradePrice Field Functions 
          bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
          void deleteTradePrice() { this->tradePrice_ = nullptr;};
          inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
          inline DetailInfos& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


        protected:
          // The resource name.
          shared_ptr<string> commodityType_ {};
          // The discounted price.
          shared_ptr<float> discountPrice_ {};
          // The original price.
          shared_ptr<float> originalPrice_ {};
          // The promotion information matched by the configuration details.
          shared_ptr<vector<DetailInfos::Promotions>> promotions_ {};
          // The transaction price.
          shared_ptr<float> tradePrice_ {};
        };

        class Coupons : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Coupons& obj) { 
            DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(DiscountOff, discountOff_);
            DARABONBA_PTR_TO_JSON(IsSelected, isSelected_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(OptionCode, optionCode_);
          };
          friend void from_json(const Darabonba::Json& j, Coupons& obj) { 
            DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(DiscountOff, discountOff_);
            DARABONBA_PTR_FROM_JSON(IsSelected, isSelected_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(OptionCode, optionCode_);
          };
          Coupons() = default ;
          Coupons(const Coupons &) = default ;
          Coupons(Coupons &&) = default ;
          Coupons(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Coupons() = default ;
          Coupons& operator=(const Coupons &) = default ;
          Coupons& operator=(Coupons &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->couponNo_ == nullptr
        && this->description_ == nullptr && this->discountOff_ == nullptr && this->isSelected_ == nullptr && this->name_ == nullptr && this->optionCode_ == nullptr; };
          // couponNo Field Functions 
          bool hasCouponNo() const { return this->couponNo_ != nullptr;};
          void deleteCouponNo() { this->couponNo_ = nullptr;};
          inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
          inline Coupons& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Coupons& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // discountOff Field Functions 
          bool hasDiscountOff() const { return this->discountOff_ != nullptr;};
          void deleteDiscountOff() { this->discountOff_ = nullptr;};
          inline float getDiscountOff() const { DARABONBA_PTR_GET_DEFAULT(discountOff_, 0.0) };
          inline Coupons& setDiscountOff(float discountOff) { DARABONBA_PTR_SET_VALUE(discountOff_, discountOff) };


          // isSelected Field Functions 
          bool hasIsSelected() const { return this->isSelected_ != nullptr;};
          void deleteIsSelected() { this->isSelected_ = nullptr;};
          inline bool getIsSelected() const { DARABONBA_PTR_GET_DEFAULT(isSelected_, false) };
          inline Coupons& setIsSelected(bool isSelected) { DARABONBA_PTR_SET_VALUE(isSelected_, isSelected) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Coupons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // optionCode Field Functions 
          bool hasOptionCode() const { return this->optionCode_ != nullptr;};
          void deleteOptionCode() { this->optionCode_ = nullptr;};
          inline string getOptionCode() const { DARABONBA_PTR_GET_DEFAULT(optionCode_, "") };
          inline Coupons& setOptionCode(string optionCode) { DARABONBA_PTR_SET_VALUE(optionCode_, optionCode) };


        protected:
          // The coupon code. Default value: `youhuiquan_promotion_option_id_for_blank`.
          shared_ptr<string> couponNo_ {};
          // The custom parameter description.
          shared_ptr<string> description_ {};
          // The discount.
          shared_ptr<float> discountOff_ {};
          // Specifies whether the coupon is selected.
          shared_ptr<bool> isSelected_ {};
          // The command name.
          shared_ptr<string> name_ {};
          // The promotion ID.
          shared_ptr<string> optionCode_ {};
        };

        virtual bool empty() const override { return this->coupons_ == nullptr
        && this->currency_ == nullptr && this->detailInfos_ == nullptr && this->discountPrice_ == nullptr && this->isContractPromotion_ == nullptr && this->originalPrice_ == nullptr
        && this->promotions_ == nullptr && this->standardDiscountPrice_ == nullptr && this->standardPrice_ == nullptr && this->subPrices_ == nullptr && this->tradePrice_ == nullptr; };
        // coupons Field Functions 
        bool hasCoupons() const { return this->coupons_ != nullptr;};
        void deleteCoupons() { this->coupons_ = nullptr;};
        inline const vector<Price::Coupons> & getCoupons() const { DARABONBA_PTR_GET_CONST(coupons_, vector<Price::Coupons>) };
        inline vector<Price::Coupons> getCoupons() { DARABONBA_PTR_GET(coupons_, vector<Price::Coupons>) };
        inline Price& setCoupons(const vector<Price::Coupons> & coupons) { DARABONBA_PTR_SET_VALUE(coupons_, coupons) };
        inline Price& setCoupons(vector<Price::Coupons> && coupons) { DARABONBA_PTR_SET_RVALUE(coupons_, coupons) };


        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline Price& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // detailInfos Field Functions 
        bool hasDetailInfos() const { return this->detailInfos_ != nullptr;};
        void deleteDetailInfos() { this->detailInfos_ = nullptr;};
        inline const vector<Price::DetailInfos> & getDetailInfos() const { DARABONBA_PTR_GET_CONST(detailInfos_, vector<Price::DetailInfos>) };
        inline vector<Price::DetailInfos> getDetailInfos() { DARABONBA_PTR_GET(detailInfos_, vector<Price::DetailInfos>) };
        inline Price& setDetailInfos(const vector<Price::DetailInfos> & detailInfos) { DARABONBA_PTR_SET_VALUE(detailInfos_, detailInfos) };
        inline Price& setDetailInfos(vector<Price::DetailInfos> && detailInfos) { DARABONBA_PTR_SET_RVALUE(detailInfos_, detailInfos) };


        // discountPrice Field Functions 
        bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
        void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
        inline float getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
        inline Price& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


        // isContractPromotion Field Functions 
        bool hasIsContractPromotion() const { return this->isContractPromotion_ != nullptr;};
        void deleteIsContractPromotion() { this->isContractPromotion_ = nullptr;};
        inline bool getIsContractPromotion() const { DARABONBA_PTR_GET_DEFAULT(isContractPromotion_, false) };
        inline Price& setIsContractPromotion(bool isContractPromotion) { DARABONBA_PTR_SET_VALUE(isContractPromotion_, isContractPromotion) };


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


        // standardDiscountPrice Field Functions 
        bool hasStandardDiscountPrice() const { return this->standardDiscountPrice_ != nullptr;};
        void deleteStandardDiscountPrice() { this->standardDiscountPrice_ = nullptr;};
        inline float getStandardDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(standardDiscountPrice_, 0.0) };
        inline Price& setStandardDiscountPrice(float standardDiscountPrice) { DARABONBA_PTR_SET_VALUE(standardDiscountPrice_, standardDiscountPrice) };


        // standardPrice Field Functions 
        bool hasStandardPrice() const { return this->standardPrice_ != nullptr;};
        void deleteStandardPrice() { this->standardPrice_ = nullptr;};
        inline float getStandardPrice() const { DARABONBA_PTR_GET_DEFAULT(standardPrice_, 0.0) };
        inline Price& setStandardPrice(float standardPrice) { DARABONBA_PTR_SET_VALUE(standardPrice_, standardPrice) };


        // subPrices Field Functions 
        bool hasSubPrices() const { return this->subPrices_ != nullptr;};
        void deleteSubPrices() { this->subPrices_ = nullptr;};
        inline const vector<Price::SubPrices> & getSubPrices() const { DARABONBA_PTR_GET_CONST(subPrices_, vector<Price::SubPrices>) };
        inline vector<Price::SubPrices> getSubPrices() { DARABONBA_PTR_GET(subPrices_, vector<Price::SubPrices>) };
        inline Price& setSubPrices(const vector<Price::SubPrices> & subPrices) { DARABONBA_PTR_SET_VALUE(subPrices_, subPrices) };
        inline Price& setSubPrices(vector<Price::SubPrices> && subPrices) { DARABONBA_PTR_SET_RVALUE(subPrices_, subPrices) };


        // tradePrice Field Functions 
        bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
        void deleteTradePrice() { this->tradePrice_ = nullptr;};
        inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
        inline Price& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


      protected:
        // Specifies whether the coupon is selected.
        shared_ptr<vector<Price::Coupons>> coupons_ {};
        // The currency. Valid values:
        // 
        // - CNY: Chinese yuan.
        // - USD: US dollar.
        shared_ptr<string> currency_ {};
        // The detailed pricing information of the configuration.
        shared_ptr<vector<Price::DetailInfos>> detailInfos_ {};
        // The discounted price.
        shared_ptr<float> discountPrice_ {};
        // Specifies whether a promotion is matched.
        shared_ptr<bool> isContractPromotion_ {};
        // The original price.
        shared_ptr<float> originalPrice_ {};
        // The promotion information.
        shared_ptr<vector<Price::Promotions>> promotions_ {};
        // The discounted price based on the official website discount.
        shared_ptr<float> standardDiscountPrice_ {};
        // The discounted price on the official website or the discounted price in the direct sales contract.
        shared_ptr<float> standardPrice_ {};
        // The list of price details.
        shared_ptr<vector<Price::SubPrices>> subPrices_ {};
        // The transaction price.
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
      // The pricing information.
      shared_ptr<PriceInfo::Price> price_ {};
      // The activity rule information.
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
    // The detailed pricing information.
    shared_ptr<DescribePriceResponseBody::PriceInfo> priceInfo_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif

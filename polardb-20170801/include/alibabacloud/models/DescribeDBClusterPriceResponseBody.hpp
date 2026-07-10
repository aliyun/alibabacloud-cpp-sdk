// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(ShowDiscount, showDiscount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(ShowDiscount, showDiscount_);
    };
    DescribeDBClusterPriceResponseBody() = default ;
    DescribeDBClusterPriceResponseBody(const DescribeDBClusterPriceResponseBody &) = default ;
    DescribeDBClusterPriceResponseBody(DescribeDBClusterPriceResponseBody &&) = default ;
    DescribeDBClusterPriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterPriceResponseBody() = default ;
    DescribeDBClusterPriceResponseBody& operator=(const DescribeDBClusterPriceResponseBody &) = default ;
    DescribeDBClusterPriceResponseBody& operator=(DescribeDBClusterPriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(Rule, rule_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(Rule, rule_);
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
      class Rule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rule& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        };
        friend void from_json(const Darabonba::Json& j, Rule& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        };
        Rule() = default ;
        Rule(const Rule &) = default ;
        Rule(Rule &&) = default ;
        Rule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rule() = default ;
        Rule& operator=(const Rule &) = default ;
        Rule& operator=(Rule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->ruleId_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Rule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
        inline Rule& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> ruleId_ {};
      };

      virtual bool empty() const override { return this->rule_ == nullptr; };
      // rule Field Functions 
      bool hasRule() const { return this->rule_ != nullptr;};
      void deleteRule() { this->rule_ = nullptr;};
      inline const vector<Rules::Rule> & getRule() const { DARABONBA_PTR_GET_CONST(rule_, vector<Rules::Rule>) };
      inline vector<Rules::Rule> getRule() { DARABONBA_PTR_GET(rule_, vector<Rules::Rule>) };
      inline Rules& setRule(const vector<Rules::Rule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
      inline Rules& setRule(vector<Rules::Rule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


    protected:
      shared_ptr<vector<Rules::Rule>> rule_ {};
    };

    class PriceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PriceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Coupons, coupons_);
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
        DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
        DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
        DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
      };
      friend void from_json(const Darabonba::Json& j, PriceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Coupons, coupons_);
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
        DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
        DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
        DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
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
      class RuleIds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleIds& obj) { 
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        };
        friend void from_json(const Darabonba::Json& j, RuleIds& obj) { 
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        };
        RuleIds() = default ;
        RuleIds(const RuleIds &) = default ;
        RuleIds(RuleIds &&) = default ;
        RuleIds(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleIds() = default ;
        RuleIds& operator=(const RuleIds &) = default ;
        RuleIds& operator=(RuleIds &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ruleId_ == nullptr; };
        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline const vector<string> & getRuleId() const { DARABONBA_PTR_GET_CONST(ruleId_, vector<string>) };
        inline vector<string> getRuleId() { DARABONBA_PTR_GET(ruleId_, vector<string>) };
        inline RuleIds& setRuleId(const vector<string> & ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };
        inline RuleIds& setRuleId(vector<string> && ruleId) { DARABONBA_PTR_SET_RVALUE(ruleId_, ruleId) };


      protected:
        shared_ptr<vector<string>> ruleId_ {};
      };

      class Coupons : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Coupons& obj) { 
          DARABONBA_PTR_TO_JSON(Coupon, coupon_);
        };
        friend void from_json(const Darabonba::Json& j, Coupons& obj) { 
          DARABONBA_PTR_FROM_JSON(Coupon, coupon_);
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
        class Coupon : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Coupon& obj) { 
            DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
            DARABONBA_PTR_TO_JSON(IsSelected, isSelected_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Coupon& obj) { 
            DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
            DARABONBA_PTR_FROM_JSON(IsSelected, isSelected_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Coupon() = default ;
          Coupon(const Coupon &) = default ;
          Coupon(Coupon &&) = default ;
          Coupon(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Coupon() = default ;
          Coupon& operator=(const Coupon &) = default ;
          Coupon& operator=(Coupon &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->couponNo_ == nullptr
        && this->isSelected_ == nullptr && this->name_ == nullptr; };
          // couponNo Field Functions 
          bool hasCouponNo() const { return this->couponNo_ != nullptr;};
          void deleteCouponNo() { this->couponNo_ = nullptr;};
          inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
          inline Coupon& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


          // isSelected Field Functions 
          bool hasIsSelected() const { return this->isSelected_ != nullptr;};
          void deleteIsSelected() { this->isSelected_ = nullptr;};
          inline string getIsSelected() const { DARABONBA_PTR_GET_DEFAULT(isSelected_, "") };
          inline Coupon& setIsSelected(string isSelected) { DARABONBA_PTR_SET_VALUE(isSelected_, isSelected) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Coupon& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> couponNo_ {};
          shared_ptr<string> isSelected_ {};
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->coupon_ == nullptr; };
        // coupon Field Functions 
        bool hasCoupon() const { return this->coupon_ != nullptr;};
        void deleteCoupon() { this->coupon_ = nullptr;};
        inline const vector<Coupons::Coupon> & getCoupon() const { DARABONBA_PTR_GET_CONST(coupon_, vector<Coupons::Coupon>) };
        inline vector<Coupons::Coupon> getCoupon() { DARABONBA_PTR_GET(coupon_, vector<Coupons::Coupon>) };
        inline Coupons& setCoupon(const vector<Coupons::Coupon> & coupon) { DARABONBA_PTR_SET_VALUE(coupon_, coupon) };
        inline Coupons& setCoupon(vector<Coupons::Coupon> && coupon) { DARABONBA_PTR_SET_RVALUE(coupon_, coupon) };


      protected:
        shared_ptr<vector<Coupons::Coupon>> coupon_ {};
      };

      virtual bool empty() const override { return this->coupons_ == nullptr
        && this->currency_ == nullptr && this->discountPrice_ == nullptr && this->originalPrice_ == nullptr && this->ruleIds_ == nullptr && this->tradePrice_ == nullptr; };
      // coupons Field Functions 
      bool hasCoupons() const { return this->coupons_ != nullptr;};
      void deleteCoupons() { this->coupons_ = nullptr;};
      inline const PriceInfo::Coupons & getCoupons() const { DARABONBA_PTR_GET_CONST(coupons_, PriceInfo::Coupons) };
      inline PriceInfo::Coupons getCoupons() { DARABONBA_PTR_GET(coupons_, PriceInfo::Coupons) };
      inline PriceInfo& setCoupons(const PriceInfo::Coupons & coupons) { DARABONBA_PTR_SET_VALUE(coupons_, coupons) };
      inline PriceInfo& setCoupons(PriceInfo::Coupons && coupons) { DARABONBA_PTR_SET_RVALUE(coupons_, coupons) };


      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline PriceInfo& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // discountPrice Field Functions 
      bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
      void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
      inline float getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
      inline PriceInfo& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


      // originalPrice Field Functions 
      bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
      void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
      inline float getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
      inline PriceInfo& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


      // ruleIds Field Functions 
      bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
      void deleteRuleIds() { this->ruleIds_ = nullptr;};
      inline const PriceInfo::RuleIds & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, PriceInfo::RuleIds) };
      inline PriceInfo::RuleIds getRuleIds() { DARABONBA_PTR_GET(ruleIds_, PriceInfo::RuleIds) };
      inline PriceInfo& setRuleIds(const PriceInfo::RuleIds & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
      inline PriceInfo& setRuleIds(PriceInfo::RuleIds && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


      // tradePrice Field Functions 
      bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
      void deleteTradePrice() { this->tradePrice_ = nullptr;};
      inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
      inline PriceInfo& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


    protected:
      shared_ptr<PriceInfo::Coupons> coupons_ {};
      // The currency unit.
      shared_ptr<string> currency_ {};
      // The discount amount.
      shared_ptr<float> discountPrice_ {};
      // The original price.
      shared_ptr<float> originalPrice_ {};
      shared_ptr<PriceInfo::RuleIds> ruleIds_ {};
      // The final price, which is the original price minus the discount.
      shared_ptr<float> tradePrice_ {};
    };

    virtual bool empty() const override { return this->orderType_ == nullptr
        && this->priceInfo_ == nullptr && this->requestId_ == nullptr && this->rules_ == nullptr && this->showDiscount_ == nullptr; };
    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeDBClusterPriceResponseBody& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const DescribeDBClusterPriceResponseBody::PriceInfo & getPriceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, DescribeDBClusterPriceResponseBody::PriceInfo) };
    inline DescribeDBClusterPriceResponseBody::PriceInfo getPriceInfo() { DARABONBA_PTR_GET(priceInfo_, DescribeDBClusterPriceResponseBody::PriceInfo) };
    inline DescribeDBClusterPriceResponseBody& setPriceInfo(const DescribeDBClusterPriceResponseBody::PriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline DescribeDBClusterPriceResponseBody& setPriceInfo(DescribeDBClusterPriceResponseBody::PriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const DescribeDBClusterPriceResponseBody::Rules & getRules() const { DARABONBA_PTR_GET_CONST(rules_, DescribeDBClusterPriceResponseBody::Rules) };
    inline DescribeDBClusterPriceResponseBody::Rules getRules() { DARABONBA_PTR_GET(rules_, DescribeDBClusterPriceResponseBody::Rules) };
    inline DescribeDBClusterPriceResponseBody& setRules(const DescribeDBClusterPriceResponseBody::Rules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeDBClusterPriceResponseBody& setRules(DescribeDBClusterPriceResponseBody::Rules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // showDiscount Field Functions 
    bool hasShowDiscount() const { return this->showDiscount_ != nullptr;};
    void deleteShowDiscount() { this->showDiscount_ = nullptr;};
    inline bool getShowDiscount() const { DARABONBA_PTR_GET_DEFAULT(showDiscount_, false) };
    inline DescribeDBClusterPriceResponseBody& setShowDiscount(bool showDiscount) { DARABONBA_PTR_SET_VALUE(showDiscount_, showDiscount) };


  protected:
    // The order type. Valid values:
    // * BUY: new purchase.
    // * UPGRADE: specification change.
    // * RENEW: renewal.
    // * CONVERT: billing method conversion.
    shared_ptr<string> orderType_ {};
    // The price details.
    shared_ptr<DescribeDBClusterPriceResponseBody::PriceInfo> priceInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeDBClusterPriceResponseBody::Rules> rules_ {};
    // Indicates whether discounts are allowed.
    shared_ptr<bool> showDiscount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

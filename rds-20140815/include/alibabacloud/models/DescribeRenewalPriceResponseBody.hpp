// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRenewalPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenewalPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenewalPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeRenewalPriceResponseBody() = default ;
    DescribeRenewalPriceResponseBody(const DescribeRenewalPriceResponseBody &) = default ;
    DescribeRenewalPriceResponseBody(DescribeRenewalPriceResponseBody &&) = default ;
    DescribeRenewalPriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenewalPriceResponseBody() = default ;
    DescribeRenewalPriceResponseBody& operator=(const DescribeRenewalPriceResponseBody &) = default ;
    DescribeRenewalPriceResponseBody& operator=(DescribeRenewalPriceResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        };
        friend void from_json(const Darabonba::Json& j, Rule& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
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
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->ruleId_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Rule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


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
        // The description of the activity.
        shared_ptr<string> description_ {};
        // The name of the rule.
        shared_ptr<string> name_ {};
        // The ID of the promotion rule.
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
        DARABONBA_PTR_TO_JSON(ActivityInfo, activityInfo_);
        DARABONBA_PTR_TO_JSON(Coupons, coupons_);
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
        DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
        DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
        DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
      };
      friend void from_json(const Darabonba::Json& j, PriceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivityInfo, activityInfo_);
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
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(IsSelected, isSelected_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Coupon& obj) { 
            DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
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
        && this->description_ == nullptr && this->isSelected_ == nullptr && this->name_ == nullptr; };
          // couponNo Field Functions 
          bool hasCouponNo() const { return this->couponNo_ != nullptr;};
          void deleteCouponNo() { this->couponNo_ = nullptr;};
          inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
          inline Coupon& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Coupon& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


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
          // The coupon ID.
          shared_ptr<string> couponNo_ {};
          // The description of the coupon.
          shared_ptr<string> description_ {};
          // Indicates whether the coupon is selected.
          shared_ptr<string> isSelected_ {};
          // The name of the coupon.
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

      class ActivityInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ActivityInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CheckErrMsg, checkErrMsg_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, ActivityInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckErrMsg, checkErrMsg_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        ActivityInfo() = default ;
        ActivityInfo(const ActivityInfo &) = default ;
        ActivityInfo(ActivityInfo &&) = default ;
        ActivityInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ActivityInfo() = default ;
        ActivityInfo& operator=(const ActivityInfo &) = default ;
        ActivityInfo& operator=(ActivityInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkErrMsg_ == nullptr
        && this->errorCode_ == nullptr && this->success_ == nullptr; };
        // checkErrMsg Field Functions 
        bool hasCheckErrMsg() const { return this->checkErrMsg_ != nullptr;};
        void deleteCheckErrMsg() { this->checkErrMsg_ = nullptr;};
        inline string getCheckErrMsg() const { DARABONBA_PTR_GET_DEFAULT(checkErrMsg_, "") };
        inline ActivityInfo& setCheckErrMsg(string checkErrMsg) { DARABONBA_PTR_SET_VALUE(checkErrMsg_, checkErrMsg) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline ActivityInfo& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
        inline ActivityInfo& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        // The returned message.
        shared_ptr<string> checkErrMsg_ {};
        // The error code that is returned.
        shared_ptr<string> errorCode_ {};
        // Indicates whether the request was successful.
        shared_ptr<string> success_ {};
      };

      virtual bool empty() const override { return this->activityInfo_ == nullptr
        && this->coupons_ == nullptr && this->currency_ == nullptr && this->discountPrice_ == nullptr && this->originalPrice_ == nullptr && this->ruleIds_ == nullptr
        && this->tradePrice_ == nullptr; };
      // activityInfo Field Functions 
      bool hasActivityInfo() const { return this->activityInfo_ != nullptr;};
      void deleteActivityInfo() { this->activityInfo_ = nullptr;};
      inline const PriceInfo::ActivityInfo & getActivityInfo() const { DARABONBA_PTR_GET_CONST(activityInfo_, PriceInfo::ActivityInfo) };
      inline PriceInfo::ActivityInfo getActivityInfo() { DARABONBA_PTR_GET(activityInfo_, PriceInfo::ActivityInfo) };
      inline PriceInfo& setActivityInfo(const PriceInfo::ActivityInfo & activityInfo) { DARABONBA_PTR_SET_VALUE(activityInfo_, activityInfo) };
      inline PriceInfo& setActivityInfo(PriceInfo::ActivityInfo && activityInfo) { DARABONBA_PTR_SET_RVALUE(activityInfo_, activityInfo) };


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
      // The information about the promotion.
      shared_ptr<PriceInfo::ActivityInfo> activityInfo_ {};
      // An array that consists of information about the coupon.
      shared_ptr<PriceInfo::Coupons> coupons_ {};
      // The currency unit.
      shared_ptr<string> currency_ {};
      // The discount.
      shared_ptr<float> discountPrice_ {};
      // The original price.
      shared_ptr<float> originalPrice_ {};
      // An array that consists of the ID of the promotion rule.
      shared_ptr<PriceInfo::RuleIds> ruleIds_ {};
      // The transaction price, which is equal to the original price minus the discount.
      shared_ptr<float> tradePrice_ {};
    };

    virtual bool empty() const override { return this->priceInfo_ == nullptr
        && this->requestId_ == nullptr && this->rules_ == nullptr; };
    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const DescribeRenewalPriceResponseBody::PriceInfo & getPriceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, DescribeRenewalPriceResponseBody::PriceInfo) };
    inline DescribeRenewalPriceResponseBody::PriceInfo getPriceInfo() { DARABONBA_PTR_GET(priceInfo_, DescribeRenewalPriceResponseBody::PriceInfo) };
    inline DescribeRenewalPriceResponseBody& setPriceInfo(const DescribeRenewalPriceResponseBody::PriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline DescribeRenewalPriceResponseBody& setPriceInfo(DescribeRenewalPriceResponseBody::PriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRenewalPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const DescribeRenewalPriceResponseBody::Rules & getRules() const { DARABONBA_PTR_GET_CONST(rules_, DescribeRenewalPriceResponseBody::Rules) };
    inline DescribeRenewalPriceResponseBody::Rules getRules() { DARABONBA_PTR_GET(rules_, DescribeRenewalPriceResponseBody::Rules) };
    inline DescribeRenewalPriceResponseBody& setRules(const DescribeRenewalPriceResponseBody::Rules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeRenewalPriceResponseBody& setRules(DescribeRenewalPriceResponseBody::Rules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // Details of price information.
    shared_ptr<DescribeRenewalPriceResponseBody::PriceInfo> priceInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array that consists of the details of the promotion rule.
    shared_ptr<DescribeRenewalPriceResponseBody::Rules> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

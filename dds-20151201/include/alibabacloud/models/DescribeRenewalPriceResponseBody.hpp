// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeRenewalPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenewalPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SubOrders, subOrders_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenewalPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SubOrders, subOrders_);
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
    class SubOrders : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubOrders& obj) { 
        DARABONBA_PTR_TO_JSON(SubOrder, subOrder_);
      };
      friend void from_json(const Darabonba::Json& j, SubOrders& obj) { 
        DARABONBA_PTR_FROM_JSON(SubOrder, subOrder_);
      };
      SubOrders() = default ;
      SubOrders(const SubOrders &) = default ;
      SubOrders(SubOrders &&) = default ;
      SubOrders(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubOrders() = default ;
      SubOrders& operator=(const SubOrders &) = default ;
      SubOrders& operator=(SubOrders &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubOrder : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubOrder& obj) { 
          DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
          DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
          DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
        };
        friend void from_json(const Darabonba::Json& j, SubOrder& obj) { 
          DARABONBA_PTR_FROM_JSON(DiscountAmount, discountAmount_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
          DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
          DARABONBA_PTR_FROM_JSON(TradeAmount, tradeAmount_);
        };
        SubOrder() = default ;
        SubOrder(const SubOrder &) = default ;
        SubOrder(SubOrder &&) = default ;
        SubOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubOrder() = default ;
        SubOrder& operator=(const SubOrder &) = default ;
        SubOrder& operator=(SubOrder &&) = default ;
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

        virtual bool empty() const override { return this->discountAmount_ == nullptr
        && this->instanceId_ == nullptr && this->originalAmount_ == nullptr && this->ruleIds_ == nullptr && this->tradeAmount_ == nullptr; };
        // discountAmount Field Functions 
        bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
        void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
        inline float getDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, 0.0) };
        inline SubOrder& setDiscountAmount(float discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SubOrder& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // originalAmount Field Functions 
        bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
        void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
        inline float getOriginalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, 0.0) };
        inline SubOrder& setOriginalAmount(float originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


        // ruleIds Field Functions 
        bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
        void deleteRuleIds() { this->ruleIds_ = nullptr;};
        inline const SubOrder::RuleIds & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, SubOrder::RuleIds) };
        inline SubOrder::RuleIds getRuleIds() { DARABONBA_PTR_GET(ruleIds_, SubOrder::RuleIds) };
        inline SubOrder& setRuleIds(const SubOrder::RuleIds & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
        inline SubOrder& setRuleIds(SubOrder::RuleIds && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


        // tradeAmount Field Functions 
        bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
        void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
        inline float getTradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, 0.0) };
        inline SubOrder& setTradeAmount(float tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


      protected:
        // The discount amount of the order.
        shared_ptr<float> discountAmount_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The original price of the order.
        shared_ptr<float> originalAmount_ {};
        // The IDs of the matched rules.
        shared_ptr<SubOrder::RuleIds> ruleIds_ {};
        // The actual price of the order.
        shared_ptr<float> tradeAmount_ {};
      };

      virtual bool empty() const override { return this->subOrder_ == nullptr; };
      // subOrder Field Functions 
      bool hasSubOrder() const { return this->subOrder_ != nullptr;};
      void deleteSubOrder() { this->subOrder_ = nullptr;};
      inline const vector<SubOrders::SubOrder> & getSubOrder() const { DARABONBA_PTR_GET_CONST(subOrder_, vector<SubOrders::SubOrder>) };
      inline vector<SubOrders::SubOrder> getSubOrder() { DARABONBA_PTR_GET(subOrder_, vector<SubOrders::SubOrder>) };
      inline SubOrders& setSubOrder(const vector<SubOrders::SubOrder> & subOrder) { DARABONBA_PTR_SET_VALUE(subOrder_, subOrder) };
      inline SubOrders& setSubOrder(vector<SubOrders::SubOrder> && subOrder) { DARABONBA_PTR_SET_RVALUE(subOrder_, subOrder) };


    protected:
      shared_ptr<vector<SubOrders::SubOrder>> subOrder_ {};
    };

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
          DARABONBA_PTR_TO_JSON(RuleDescId, ruleDescId_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Rule& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RuleDescId, ruleDescId_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
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
        && this->ruleDescId_ == nullptr && this->title_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Rule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ruleDescId Field Functions 
        bool hasRuleDescId() const { return this->ruleDescId_ != nullptr;};
        void deleteRuleDescId() { this->ruleDescId_ = nullptr;};
        inline int64_t getRuleDescId() const { DARABONBA_PTR_GET_DEFAULT(ruleDescId_, 0L) };
        inline Rule& setRuleDescId(int64_t ruleDescId) { DARABONBA_PTR_SET_VALUE(ruleDescId_, ruleDescId) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Rule& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // The name of the rule.
        shared_ptr<string> name_ {};
        // The ID of the rule.
        shared_ptr<int64_t> ruleDescId_ {};
        // The title of the rule.
        shared_ptr<string> title_ {};
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

    class Order : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Order& obj) { 
        DARABONBA_PTR_TO_JSON(Coupons, coupons_);
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
        DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
        DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
        DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
      };
      friend void from_json(const Darabonba::Json& j, Order& obj) { 
        DARABONBA_PTR_FROM_JSON(Coupons, coupons_);
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(DiscountAmount, discountAmount_);
        DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
        DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
        DARABONBA_PTR_FROM_JSON(TradeAmount, tradeAmount_);
      };
      Order() = default ;
      Order(const Order &) = default ;
      Order(Order &&) = default ;
      Order(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Order() = default ;
      Order& operator=(const Order &) = default ;
      Order& operator=(Order &&) = default ;
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
          // The coupon number.
          shared_ptr<string> couponNo_ {};
          // The description of the coupon.
          shared_ptr<string> description_ {};
          // Indicates whether the coupon was selected.
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

      virtual bool empty() const override { return this->coupons_ == nullptr
        && this->currency_ == nullptr && this->discountAmount_ == nullptr && this->originalAmount_ == nullptr && this->ruleIds_ == nullptr && this->tradeAmount_ == nullptr; };
      // coupons Field Functions 
      bool hasCoupons() const { return this->coupons_ != nullptr;};
      void deleteCoupons() { this->coupons_ = nullptr;};
      inline const Order::Coupons & getCoupons() const { DARABONBA_PTR_GET_CONST(coupons_, Order::Coupons) };
      inline Order::Coupons getCoupons() { DARABONBA_PTR_GET(coupons_, Order::Coupons) };
      inline Order& setCoupons(const Order::Coupons & coupons) { DARABONBA_PTR_SET_VALUE(coupons_, coupons) };
      inline Order& setCoupons(Order::Coupons && coupons) { DARABONBA_PTR_SET_RVALUE(coupons_, coupons) };


      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Order& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // discountAmount Field Functions 
      bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
      void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
      inline float getDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, 0.0) };
      inline Order& setDiscountAmount(float discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


      // originalAmount Field Functions 
      bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
      void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
      inline float getOriginalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, 0.0) };
      inline Order& setOriginalAmount(float originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


      // ruleIds Field Functions 
      bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
      void deleteRuleIds() { this->ruleIds_ = nullptr;};
      inline const Order::RuleIds & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, Order::RuleIds) };
      inline Order::RuleIds getRuleIds() { DARABONBA_PTR_GET(ruleIds_, Order::RuleIds) };
      inline Order& setRuleIds(const Order::RuleIds & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
      inline Order& setRuleIds(Order::RuleIds && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


      // tradeAmount Field Functions 
      bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
      void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
      inline float getTradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, 0.0) };
      inline Order& setTradeAmount(float tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


    protected:
      // Details about the coupons.
      shared_ptr<Order::Coupons> coupons_ {};
      // The type of the currency. Valid values:
      // 
      // *   USD: United States dollar
      // *   JPY: Japanese Yen
      shared_ptr<string> currency_ {};
      // The discount amount of the order.
      shared_ptr<float> discountAmount_ {};
      // The original price of the order.
      shared_ptr<float> originalAmount_ {};
      // The IDs of the matched rules.
      shared_ptr<Order::RuleIds> ruleIds_ {};
      // The actual price of the order.
      shared_ptr<float> tradeAmount_ {};
    };

    virtual bool empty() const override { return this->order_ == nullptr
        && this->requestId_ == nullptr && this->rules_ == nullptr && this->subOrders_ == nullptr; };
    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline const DescribeRenewalPriceResponseBody::Order & getOrder() const { DARABONBA_PTR_GET_CONST(order_, DescribeRenewalPriceResponseBody::Order) };
    inline DescribeRenewalPriceResponseBody::Order getOrder() { DARABONBA_PTR_GET(order_, DescribeRenewalPriceResponseBody::Order) };
    inline DescribeRenewalPriceResponseBody& setOrder(const DescribeRenewalPriceResponseBody::Order & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
    inline DescribeRenewalPriceResponseBody& setOrder(DescribeRenewalPriceResponseBody::Order && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


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


    // subOrders Field Functions 
    bool hasSubOrders() const { return this->subOrders_ != nullptr;};
    void deleteSubOrders() { this->subOrders_ = nullptr;};
    inline const DescribeRenewalPriceResponseBody::SubOrders & getSubOrders() const { DARABONBA_PTR_GET_CONST(subOrders_, DescribeRenewalPriceResponseBody::SubOrders) };
    inline DescribeRenewalPriceResponseBody::SubOrders getSubOrders() { DARABONBA_PTR_GET(subOrders_, DescribeRenewalPriceResponseBody::SubOrders) };
    inline DescribeRenewalPriceResponseBody& setSubOrders(const DescribeRenewalPriceResponseBody::SubOrders & subOrders) { DARABONBA_PTR_SET_VALUE(subOrders_, subOrders) };
    inline DescribeRenewalPriceResponseBody& setSubOrders(DescribeRenewalPriceResponseBody::SubOrders && subOrders) { DARABONBA_PTR_SET_RVALUE(subOrders_, subOrders) };


  protected:
    // The list of orders.
    shared_ptr<DescribeRenewalPriceResponseBody::Order> order_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Details about the promotion rules.
    shared_ptr<DescribeRenewalPriceResponseBody::Rules> rules_ {};
    // The rules matching the coupons.
    shared_ptr<DescribeRenewalPriceResponseBody::SubOrders> subOrders_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif

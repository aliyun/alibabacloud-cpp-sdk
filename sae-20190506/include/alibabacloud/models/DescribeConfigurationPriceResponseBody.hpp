// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeConfigurationPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigurationPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigurationPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeConfigurationPriceResponseBody() = default ;
    DescribeConfigurationPriceResponseBody(const DescribeConfigurationPriceResponseBody &) = default ;
    DescribeConfigurationPriceResponseBody(DescribeConfigurationPriceResponseBody &&) = default ;
    DescribeConfigurationPriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigurationPriceResponseBody() = default ;
    DescribeConfigurationPriceResponseBody& operator=(const DescribeConfigurationPriceResponseBody &) = default ;
    DescribeConfigurationPriceResponseBody& operator=(DescribeConfigurationPriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BagUsage, bagUsage_);
        DARABONBA_PTR_TO_JSON(CpuMemPrice, cpuMemPrice_);
        DARABONBA_PTR_TO_JSON(Order, order_);
        DARABONBA_PTR_TO_JSON(RequestPrice, requestPrice_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
        DARABONBA_PTR_TO_JSON(TrafficPrice, trafficPrice_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BagUsage, bagUsage_);
        DARABONBA_PTR_FROM_JSON(CpuMemPrice, cpuMemPrice_);
        DARABONBA_PTR_FROM_JSON(Order, order_);
        DARABONBA_PTR_FROM_JSON(RequestPrice, requestPrice_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
        DARABONBA_PTR_FROM_JSON(TrafficPrice, trafficPrice_);
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
      class TrafficPrice : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TrafficPrice& obj) { 
          DARABONBA_PTR_TO_JSON(Order, order_);
          DARABONBA_PTR_TO_JSON(Rules, rules_);
        };
        friend void from_json(const Darabonba::Json& j, TrafficPrice& obj) { 
          DARABONBA_PTR_FROM_JSON(Order, order_);
          DARABONBA_PTR_FROM_JSON(Rules, rules_);
        };
        TrafficPrice() = default ;
        TrafficPrice(const TrafficPrice &) = default ;
        TrafficPrice(TrafficPrice &&) = default ;
        TrafficPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TrafficPrice() = default ;
        TrafficPrice& operator=(const TrafficPrice &) = default ;
        TrafficPrice& operator=(TrafficPrice &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Rules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rules& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(RuleDescId, ruleDescId_);
          };
          friend void from_json(const Darabonba::Json& j, Rules& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(RuleDescId, ruleDescId_);
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
          virtual bool empty() const override { return this->name_ == nullptr
        && this->ruleDescId_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Rules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // ruleDescId Field Functions 
          bool hasRuleDescId() const { return this->ruleDescId_ != nullptr;};
          void deleteRuleDescId() { this->ruleDescId_ = nullptr;};
          inline float getRuleDescId() const { DARABONBA_PTR_GET_DEFAULT(ruleDescId_, 0.0) };
          inline Rules& setRuleDescId(float ruleDescId) { DARABONBA_PTR_SET_VALUE(ruleDescId_, ruleDescId) };


        protected:
          // The name of the discount rule.
          shared_ptr<string> name_ {};
          // The ID of the discount rule.
          shared_ptr<float> ruleDescId_ {};
        };

        class Order : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Order& obj) { 
            DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
            DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
            DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
            DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
          };
          friend void from_json(const Darabonba::Json& j, Order& obj) { 
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
          virtual bool empty() const override { return this->discountAmount_ == nullptr
        && this->originalAmount_ == nullptr && this->ruleIds_ == nullptr && this->tradeAmount_ == nullptr; };
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
          inline const vector<string> & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<string>) };
          inline vector<string> getRuleIds() { DARABONBA_PTR_GET(ruleIds_, vector<string>) };
          inline Order& setRuleIds(const vector<string> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
          inline Order& setRuleIds(vector<string> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


          // tradeAmount Field Functions 
          bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
          void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
          inline float getTradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, 0.0) };
          inline Order& setTradeAmount(float tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


        protected:
          // The discount amount.
          shared_ptr<float> discountAmount_ {};
          // The original price of the order.
          shared_ptr<float> originalAmount_ {};
          // The ID of the discount rule.
          shared_ptr<vector<string>> ruleIds_ {};
          // The final price of the order.
          shared_ptr<float> tradeAmount_ {};
        };

        virtual bool empty() const override { return this->order_ == nullptr
        && this->rules_ == nullptr; };
        // order Field Functions 
        bool hasOrder() const { return this->order_ != nullptr;};
        void deleteOrder() { this->order_ = nullptr;};
        inline const TrafficPrice::Order & getOrder() const { DARABONBA_PTR_GET_CONST(order_, TrafficPrice::Order) };
        inline TrafficPrice::Order getOrder() { DARABONBA_PTR_GET(order_, TrafficPrice::Order) };
        inline TrafficPrice& setOrder(const TrafficPrice::Order & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
        inline TrafficPrice& setOrder(TrafficPrice::Order && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


        // rules Field Functions 
        bool hasRules() const { return this->rules_ != nullptr;};
        void deleteRules() { this->rules_ = nullptr;};
        inline const vector<TrafficPrice::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<TrafficPrice::Rules>) };
        inline vector<TrafficPrice::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<TrafficPrice::Rules>) };
        inline TrafficPrice& setRules(const vector<TrafficPrice::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
        inline TrafficPrice& setRules(vector<TrafficPrice::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      protected:
        // The information about pricing.
        shared_ptr<TrafficPrice::Order> order_ {};
        // The discount rule.
        shared_ptr<vector<TrafficPrice::Rules>> rules_ {};
      };

      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RuleDescId, ruleDescId_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RuleDescId, ruleDescId_);
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
        virtual bool empty() const override { return this->name_ == nullptr
        && this->ruleDescId_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Rules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ruleDescId Field Functions 
        bool hasRuleDescId() const { return this->ruleDescId_ != nullptr;};
        void deleteRuleDescId() { this->ruleDescId_ = nullptr;};
        inline int64_t getRuleDescId() const { DARABONBA_PTR_GET_DEFAULT(ruleDescId_, 0L) };
        inline Rules& setRuleDescId(int64_t ruleDescId) { DARABONBA_PTR_SET_VALUE(ruleDescId_, ruleDescId) };


      protected:
        // The name of the promotion rule.
        shared_ptr<string> name_ {};
        // The ID of the promotion rule.
        shared_ptr<int64_t> ruleDescId_ {};
      };

      class RequestPrice : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RequestPrice& obj) { 
          DARABONBA_PTR_TO_JSON(Order, order_);
          DARABONBA_PTR_TO_JSON(Rules, rules_);
        };
        friend void from_json(const Darabonba::Json& j, RequestPrice& obj) { 
          DARABONBA_PTR_FROM_JSON(Order, order_);
          DARABONBA_PTR_FROM_JSON(Rules, rules_);
        };
        RequestPrice() = default ;
        RequestPrice(const RequestPrice &) = default ;
        RequestPrice(RequestPrice &&) = default ;
        RequestPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RequestPrice() = default ;
        RequestPrice& operator=(const RequestPrice &) = default ;
        RequestPrice& operator=(RequestPrice &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Rules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rules& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(RuleDescId, ruleDescId_);
          };
          friend void from_json(const Darabonba::Json& j, Rules& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(RuleDescId, ruleDescId_);
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
          virtual bool empty() const override { return this->name_ == nullptr
        && this->ruleDescId_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Rules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // ruleDescId Field Functions 
          bool hasRuleDescId() const { return this->ruleDescId_ != nullptr;};
          void deleteRuleDescId() { this->ruleDescId_ = nullptr;};
          inline int64_t getRuleDescId() const { DARABONBA_PTR_GET_DEFAULT(ruleDescId_, 0L) };
          inline Rules& setRuleDescId(int64_t ruleDescId) { DARABONBA_PTR_SET_VALUE(ruleDescId_, ruleDescId) };


        protected:
          // The name of the discount rule.
          shared_ptr<string> name_ {};
          // The ID of the discount policy.
          shared_ptr<int64_t> ruleDescId_ {};
        };

        class Order : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Order& obj) { 
            DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
            DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
            DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
            DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
          };
          friend void from_json(const Darabonba::Json& j, Order& obj) { 
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
          virtual bool empty() const override { return this->discountAmount_ == nullptr
        && this->originalAmount_ == nullptr && this->ruleIds_ == nullptr && this->tradeAmount_ == nullptr; };
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
          inline const vector<string> & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<string>) };
          inline vector<string> getRuleIds() { DARABONBA_PTR_GET(ruleIds_, vector<string>) };
          inline Order& setRuleIds(const vector<string> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
          inline Order& setRuleIds(vector<string> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


          // tradeAmount Field Functions 
          bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
          void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
          inline float getTradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, 0.0) };
          inline Order& setTradeAmount(float tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


        protected:
          // The discount amount.
          shared_ptr<float> discountAmount_ {};
          // The original price of the order.
          shared_ptr<float> originalAmount_ {};
          // The ID of the discount rule.
          shared_ptr<vector<string>> ruleIds_ {};
          // The actual price of the order.
          shared_ptr<float> tradeAmount_ {};
        };

        virtual bool empty() const override { return this->order_ == nullptr
        && this->rules_ == nullptr; };
        // order Field Functions 
        bool hasOrder() const { return this->order_ != nullptr;};
        void deleteOrder() { this->order_ = nullptr;};
        inline const RequestPrice::Order & getOrder() const { DARABONBA_PTR_GET_CONST(order_, RequestPrice::Order) };
        inline RequestPrice::Order getOrder() { DARABONBA_PTR_GET(order_, RequestPrice::Order) };
        inline RequestPrice& setOrder(const RequestPrice::Order & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
        inline RequestPrice& setOrder(RequestPrice::Order && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


        // rules Field Functions 
        bool hasRules() const { return this->rules_ != nullptr;};
        void deleteRules() { this->rules_ = nullptr;};
        inline const vector<RequestPrice::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<RequestPrice::Rules>) };
        inline vector<RequestPrice::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<RequestPrice::Rules>) };
        inline RequestPrice& setRules(const vector<RequestPrice::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
        inline RequestPrice& setRules(vector<RequestPrice::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      protected:
        // The information about pricing.
        shared_ptr<RequestPrice::Order> order_ {};
        // The discount rule.
        shared_ptr<vector<RequestPrice::Rules>> rules_ {};
      };

      class Order : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Order& obj) { 
          DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
          DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
          DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
          DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
        };
        friend void from_json(const Darabonba::Json& j, Order& obj) { 
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
        virtual bool empty() const override { return this->discountAmount_ == nullptr
        && this->originalAmount_ == nullptr && this->ruleIds_ == nullptr && this->tradeAmount_ == nullptr; };
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
        inline const vector<string> & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<string>) };
        inline vector<string> getRuleIds() { DARABONBA_PTR_GET(ruleIds_, vector<string>) };
        inline Order& setRuleIds(const vector<string> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
        inline Order& setRuleIds(vector<string> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


        // tradeAmount Field Functions 
        bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
        void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
        inline float getTradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, 0.0) };
        inline Order& setTradeAmount(float tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


      protected:
        // The discount amount.
        shared_ptr<float> discountAmount_ {};
        // The original price of the order.
        shared_ptr<float> originalAmount_ {};
        // The ID of the promotion rule.
        shared_ptr<vector<string>> ruleIds_ {};
        // The transaction price.
        shared_ptr<float> tradeAmount_ {};
      };

      class CpuMemPrice : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CpuMemPrice& obj) { 
          DARABONBA_PTR_TO_JSON(Order, order_);
          DARABONBA_PTR_TO_JSON(Rules, rules_);
        };
        friend void from_json(const Darabonba::Json& j, CpuMemPrice& obj) { 
          DARABONBA_PTR_FROM_JSON(Order, order_);
          DARABONBA_PTR_FROM_JSON(Rules, rules_);
        };
        CpuMemPrice() = default ;
        CpuMemPrice(const CpuMemPrice &) = default ;
        CpuMemPrice(CpuMemPrice &&) = default ;
        CpuMemPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CpuMemPrice() = default ;
        CpuMemPrice& operator=(const CpuMemPrice &) = default ;
        CpuMemPrice& operator=(CpuMemPrice &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Rules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rules& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(RuleDescId, ruleDescId_);
          };
          friend void from_json(const Darabonba::Json& j, Rules& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(RuleDescId, ruleDescId_);
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
          virtual bool empty() const override { return this->name_ == nullptr
        && this->ruleDescId_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Rules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // ruleDescId Field Functions 
          bool hasRuleDescId() const { return this->ruleDescId_ != nullptr;};
          void deleteRuleDescId() { this->ruleDescId_ = nullptr;};
          inline float getRuleDescId() const { DARABONBA_PTR_GET_DEFAULT(ruleDescId_, 0.0) };
          inline Rules& setRuleDescId(float ruleDescId) { DARABONBA_PTR_SET_VALUE(ruleDescId_, ruleDescId) };


        protected:
          // The name of discount rule.
          shared_ptr<string> name_ {};
          // The ID of the discount rule.
          shared_ptr<float> ruleDescId_ {};
        };

        class Order : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Order& obj) { 
            DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
            DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
            DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
            DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
          };
          friend void from_json(const Darabonba::Json& j, Order& obj) { 
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
          virtual bool empty() const override { return this->discountAmount_ == nullptr
        && this->originalAmount_ == nullptr && this->ruleIds_ == nullptr && this->tradeAmount_ == nullptr; };
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
          inline const vector<string> & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<string>) };
          inline vector<string> getRuleIds() { DARABONBA_PTR_GET(ruleIds_, vector<string>) };
          inline Order& setRuleIds(const vector<string> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
          inline Order& setRuleIds(vector<string> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


          // tradeAmount Field Functions 
          bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
          void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
          inline float getTradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, 0.0) };
          inline Order& setTradeAmount(float tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


        protected:
          // The discount amount.
          shared_ptr<float> discountAmount_ {};
          // The original price.
          shared_ptr<float> originalAmount_ {};
          // The ID of the discount rule.
          shared_ptr<vector<string>> ruleIds_ {};
          // The final price of the order.
          shared_ptr<float> tradeAmount_ {};
        };

        virtual bool empty() const override { return this->order_ == nullptr
        && this->rules_ == nullptr; };
        // order Field Functions 
        bool hasOrder() const { return this->order_ != nullptr;};
        void deleteOrder() { this->order_ = nullptr;};
        inline const CpuMemPrice::Order & getOrder() const { DARABONBA_PTR_GET_CONST(order_, CpuMemPrice::Order) };
        inline CpuMemPrice::Order getOrder() { DARABONBA_PTR_GET(order_, CpuMemPrice::Order) };
        inline CpuMemPrice& setOrder(const CpuMemPrice::Order & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
        inline CpuMemPrice& setOrder(CpuMemPrice::Order && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


        // rules Field Functions 
        bool hasRules() const { return this->rules_ != nullptr;};
        void deleteRules() { this->rules_ = nullptr;};
        inline const vector<CpuMemPrice::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<CpuMemPrice::Rules>) };
        inline vector<CpuMemPrice::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<CpuMemPrice::Rules>) };
        inline CpuMemPrice& setRules(const vector<CpuMemPrice::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
        inline CpuMemPrice& setRules(vector<CpuMemPrice::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      protected:
        // The information about pricing.
        shared_ptr<CpuMemPrice::Order> order_ {};
        // The discount rules.
        shared_ptr<vector<CpuMemPrice::Rules>> rules_ {};
      };

      class BagUsage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BagUsage& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(Cu, cu_);
          DARABONBA_PTR_TO_JSON(Mem, mem_);
        };
        friend void from_json(const Darabonba::Json& j, BagUsage& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(Cu, cu_);
          DARABONBA_PTR_FROM_JSON(Mem, mem_);
        };
        BagUsage() = default ;
        BagUsage(const BagUsage &) = default ;
        BagUsage(BagUsage &&) = default ;
        BagUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BagUsage() = default ;
        BagUsage& operator=(const BagUsage &) = default ;
        BagUsage& operator=(BagUsage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->cu_ == nullptr && this->mem_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
        inline BagUsage& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // cu Field Functions 
        bool hasCu() const { return this->cu_ != nullptr;};
        void deleteCu() { this->cu_ = nullptr;};
        inline float getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0.0) };
        inline BagUsage& setCu(float cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


        // mem Field Functions 
        bool hasMem() const { return this->mem_ != nullptr;};
        void deleteMem() { this->mem_ = nullptr;};
        inline float getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0.0) };
        inline BagUsage& setMem(float mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


      protected:
        // The available CPU capacity. Unit: cores \\*.
        shared_ptr<float> cpu_ {};
        shared_ptr<float> cu_ {};
        // The available memory size. Unit: GiB ×.
        shared_ptr<float> mem_ {};
      };

      virtual bool empty() const override { return this->bagUsage_ == nullptr
        && this->cpuMemPrice_ == nullptr && this->order_ == nullptr && this->requestPrice_ == nullptr && this->rules_ == nullptr && this->trafficPrice_ == nullptr; };
      // bagUsage Field Functions 
      bool hasBagUsage() const { return this->bagUsage_ != nullptr;};
      void deleteBagUsage() { this->bagUsage_ = nullptr;};
      inline const Data::BagUsage & getBagUsage() const { DARABONBA_PTR_GET_CONST(bagUsage_, Data::BagUsage) };
      inline Data::BagUsage getBagUsage() { DARABONBA_PTR_GET(bagUsage_, Data::BagUsage) };
      inline Data& setBagUsage(const Data::BagUsage & bagUsage) { DARABONBA_PTR_SET_VALUE(bagUsage_, bagUsage) };
      inline Data& setBagUsage(Data::BagUsage && bagUsage) { DARABONBA_PTR_SET_RVALUE(bagUsage_, bagUsage) };


      // cpuMemPrice Field Functions 
      bool hasCpuMemPrice() const { return this->cpuMemPrice_ != nullptr;};
      void deleteCpuMemPrice() { this->cpuMemPrice_ = nullptr;};
      inline const Data::CpuMemPrice & getCpuMemPrice() const { DARABONBA_PTR_GET_CONST(cpuMemPrice_, Data::CpuMemPrice) };
      inline Data::CpuMemPrice getCpuMemPrice() { DARABONBA_PTR_GET(cpuMemPrice_, Data::CpuMemPrice) };
      inline Data& setCpuMemPrice(const Data::CpuMemPrice & cpuMemPrice) { DARABONBA_PTR_SET_VALUE(cpuMemPrice_, cpuMemPrice) };
      inline Data& setCpuMemPrice(Data::CpuMemPrice && cpuMemPrice) { DARABONBA_PTR_SET_RVALUE(cpuMemPrice_, cpuMemPrice) };


      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline const Data::Order & getOrder() const { DARABONBA_PTR_GET_CONST(order_, Data::Order) };
      inline Data::Order getOrder() { DARABONBA_PTR_GET(order_, Data::Order) };
      inline Data& setOrder(const Data::Order & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
      inline Data& setOrder(Data::Order && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


      // requestPrice Field Functions 
      bool hasRequestPrice() const { return this->requestPrice_ != nullptr;};
      void deleteRequestPrice() { this->requestPrice_ = nullptr;};
      inline const Data::RequestPrice & getRequestPrice() const { DARABONBA_PTR_GET_CONST(requestPrice_, Data::RequestPrice) };
      inline Data::RequestPrice getRequestPrice() { DARABONBA_PTR_GET(requestPrice_, Data::RequestPrice) };
      inline Data& setRequestPrice(const Data::RequestPrice & requestPrice) { DARABONBA_PTR_SET_VALUE(requestPrice_, requestPrice) };
      inline Data& setRequestPrice(Data::RequestPrice && requestPrice) { DARABONBA_PTR_SET_RVALUE(requestPrice_, requestPrice) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<Data::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Data::Rules>) };
      inline vector<Data::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<Data::Rules>) };
      inline Data& setRules(const vector<Data::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline Data& setRules(vector<Data::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      // trafficPrice Field Functions 
      bool hasTrafficPrice() const { return this->trafficPrice_ != nullptr;};
      void deleteTrafficPrice() { this->trafficPrice_ = nullptr;};
      inline const Data::TrafficPrice & getTrafficPrice() const { DARABONBA_PTR_GET_CONST(trafficPrice_, Data::TrafficPrice) };
      inline Data::TrafficPrice getTrafficPrice() { DARABONBA_PTR_GET(trafficPrice_, Data::TrafficPrice) };
      inline Data& setTrafficPrice(const Data::TrafficPrice & trafficPrice) { DARABONBA_PTR_SET_VALUE(trafficPrice_, trafficPrice) };
      inline Data& setTrafficPrice(Data::TrafficPrice && trafficPrice) { DARABONBA_PTR_SET_RVALUE(trafficPrice_, trafficPrice) };


    protected:
      // The remaining capacity of the resource plan.
      shared_ptr<Data::BagUsage> bagUsage_ {};
      // The price of CPU and memory.
      shared_ptr<Data::CpuMemPrice> cpuMemPrice_ {};
      // The information about pricing.
      shared_ptr<Data::Order> order_ {};
      // The price based on the number of requests.
      shared_ptr<Data::RequestPrice> requestPrice_ {};
      // The promotion rules.
      shared_ptr<vector<Data::Rules>> rules_ {};
      // The traffic price.
      shared_ptr<Data::TrafficPrice> trafficPrice_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeConfigurationPriceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeConfigurationPriceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeConfigurationPriceResponseBody::Data) };
    inline DescribeConfigurationPriceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeConfigurationPriceResponseBody::Data) };
    inline DescribeConfigurationPriceResponseBody& setData(const DescribeConfigurationPriceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeConfigurationPriceResponseBody& setData(DescribeConfigurationPriceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeConfigurationPriceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeConfigurationPriceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConfigurationPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeConfigurationPriceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeConfigurationPriceResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The request was successful.
    // *   **3xx**: The request was redirected.
    // *   **4xx**: The request failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The price.
    shared_ptr<DescribeConfigurationPriceResponseBody::Data> data_ {};
    // The error code. Valid values:
    // 
    // *   If the request was successful, **ErrorCode** is not returned.
    // *   If the request failed, **ErrorCode** is returned. For more information, see **Error codes** in this topic.
    shared_ptr<string> errorCode_ {};
    // The message returned. Valid values:
    // 
    // *   If the request was successful, **success** is returned.
    // *   If the request failed, an error code is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the configuration price was obtained.
    // 
    // *   **true**: The price was obtained.
    // *   **false**: The price failed to be queried.
    shared_ptr<bool> success_ {};
    // The ID of the trace.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERATEPLANPRICEGAPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERATEPLANPRICEGAPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeRatePlanPriceGapResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRatePlanPriceGapResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PriceModel, priceModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRatePlanPriceGapResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceModel, priceModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRatePlanPriceGapResponseBody() = default ;
    DescribeRatePlanPriceGapResponseBody(const DescribeRatePlanPriceGapResponseBody &) = default ;
    DescribeRatePlanPriceGapResponseBody(DescribeRatePlanPriceGapResponseBody &&) = default ;
    DescribeRatePlanPriceGapResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRatePlanPriceGapResponseBody() = default ;
    DescribeRatePlanPriceGapResponseBody& operator=(const DescribeRatePlanPriceGapResponseBody &) = default ;
    DescribeRatePlanPriceGapResponseBody& operator=(DescribeRatePlanPriceGapResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PriceModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PriceModel& obj) { 
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(Rule, rule_);
        DARABONBA_PTR_TO_JSON(TargetPlanCode, targetPlanCode_);
        DARABONBA_PTR_TO_JSON(TotalPrice, totalPrice_);
      };
      friend void from_json(const Darabonba::Json& j, PriceModel& obj) { 
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(Rule, rule_);
        DARABONBA_PTR_FROM_JSON(TargetPlanCode, targetPlanCode_);
        DARABONBA_PTR_FROM_JSON(TotalPrice, totalPrice_);
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
      class Rule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rule& obj) { 
          DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
        };
        friend void from_json(const Darabonba::Json& j, Rule& obj) { 
          DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
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
        class RuleList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuleList& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(RuleDescId, ruleDescId_);
          };
          friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(RuleDescId, ruleDescId_);
          };
          RuleList() = default ;
          RuleList(const RuleList &) = default ;
          RuleList(RuleList &&) = default ;
          RuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuleList() = default ;
          RuleList& operator=(const RuleList &) = default ;
          RuleList& operator=(RuleList &&) = default ;
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
          inline RuleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // ruleDescId Field Functions 
          bool hasRuleDescId() const { return this->ruleDescId_ != nullptr;};
          void deleteRuleDescId() { this->ruleDescId_ = nullptr;};
          inline int64_t getRuleDescId() const { DARABONBA_PTR_GET_DEFAULT(ruleDescId_, 0L) };
          inline RuleList& setRuleDescId(int64_t ruleDescId) { DARABONBA_PTR_SET_VALUE(ruleDescId_, ruleDescId) };


        protected:
          shared_ptr<string> name_ {};
          shared_ptr<int64_t> ruleDescId_ {};
        };

        virtual bool empty() const override { return this->ruleList_ == nullptr; };
        // ruleList Field Functions 
        bool hasRuleList() const { return this->ruleList_ != nullptr;};
        void deleteRuleList() { this->ruleList_ = nullptr;};
        inline const vector<Rule::RuleList> & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<Rule::RuleList>) };
        inline vector<Rule::RuleList> getRuleList() { DARABONBA_PTR_GET(ruleList_, vector<Rule::RuleList>) };
        inline Rule& setRuleList(const vector<Rule::RuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
        inline Rule& setRuleList(vector<Rule::RuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


      protected:
        shared_ptr<vector<Rule::RuleList>> ruleList_ {};
      };

      virtual bool empty() const override { return this->currency_ == nullptr
        && this->discountPrice_ == nullptr && this->instanceId_ == nullptr && this->price_ == nullptr && this->rule_ == nullptr && this->targetPlanCode_ == nullptr
        && this->totalPrice_ == nullptr; };
      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline PriceModel& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // discountPrice Field Functions 
      bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
      void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
      inline float getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
      inline PriceModel& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline PriceModel& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline float getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
      inline PriceModel& setPrice(float price) { DARABONBA_PTR_SET_VALUE(price_, price) };


      // rule Field Functions 
      bool hasRule() const { return this->rule_ != nullptr;};
      void deleteRule() { this->rule_ = nullptr;};
      inline const PriceModel::Rule & getRule() const { DARABONBA_PTR_GET_CONST(rule_, PriceModel::Rule) };
      inline PriceModel::Rule getRule() { DARABONBA_PTR_GET(rule_, PriceModel::Rule) };
      inline PriceModel& setRule(const PriceModel::Rule & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
      inline PriceModel& setRule(PriceModel::Rule && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


      // targetPlanCode Field Functions 
      bool hasTargetPlanCode() const { return this->targetPlanCode_ != nullptr;};
      void deleteTargetPlanCode() { this->targetPlanCode_ = nullptr;};
      inline string getTargetPlanCode() const { DARABONBA_PTR_GET_DEFAULT(targetPlanCode_, "") };
      inline PriceModel& setTargetPlanCode(string targetPlanCode) { DARABONBA_PTR_SET_VALUE(targetPlanCode_, targetPlanCode) };


      // totalPrice Field Functions 
      bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
      void deleteTotalPrice() { this->totalPrice_ = nullptr;};
      inline float getTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0.0) };
      inline PriceModel& setTotalPrice(float totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


    protected:
      // The currency. Valid values:
      // - JPY: Japanese Yen.
      // - USD: US Dollar.
      // - CNY: Chinese Yuan.
      shared_ptr<string> currency_ {};
      // The discount amount of the order.
      shared_ptr<float> discountPrice_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The final order price, which is the actual transaction price.
      shared_ptr<float> price_ {};
      shared_ptr<PriceModel::Rule> rule_ {};
      // The target plan code.
      shared_ptr<string> targetPlanCode_ {};
      // The original order price. Original order price = actual transaction price + discount amount.
      shared_ptr<float> totalPrice_ {};
    };

    virtual bool empty() const override { return this->priceModel_ == nullptr
        && this->requestId_ == nullptr; };
    // priceModel Field Functions 
    bool hasPriceModel() const { return this->priceModel_ != nullptr;};
    void deletePriceModel() { this->priceModel_ = nullptr;};
    inline const DescribeRatePlanPriceGapResponseBody::PriceModel & getPriceModel() const { DARABONBA_PTR_GET_CONST(priceModel_, DescribeRatePlanPriceGapResponseBody::PriceModel) };
    inline DescribeRatePlanPriceGapResponseBody::PriceModel getPriceModel() { DARABONBA_PTR_GET(priceModel_, DescribeRatePlanPriceGapResponseBody::PriceModel) };
    inline DescribeRatePlanPriceGapResponseBody& setPriceModel(const DescribeRatePlanPriceGapResponseBody::PriceModel & priceModel) { DARABONBA_PTR_SET_VALUE(priceModel_, priceModel) };
    inline DescribeRatePlanPriceGapResponseBody& setPriceModel(DescribeRatePlanPriceGapResponseBody::PriceModel && priceModel) { DARABONBA_PTR_SET_RVALUE(priceModel_, priceModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRatePlanPriceGapResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The price information.
    shared_ptr<DescribeRatePlanPriceGapResponseBody::PriceModel> priceModel_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERATEPLANPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERATEPLANPRICERESPONSEBODY_HPP_
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
  class DescribeRatePlanPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRatePlanPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PriceModel, priceModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRatePlanPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceModel, priceModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRatePlanPriceResponseBody() = default ;
    DescribeRatePlanPriceResponseBody(const DescribeRatePlanPriceResponseBody &) = default ;
    DescribeRatePlanPriceResponseBody(DescribeRatePlanPriceResponseBody &&) = default ;
    DescribeRatePlanPriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRatePlanPriceResponseBody() = default ;
    DescribeRatePlanPriceResponseBody& operator=(const DescribeRatePlanPriceResponseBody &) = default ;
    DescribeRatePlanPriceResponseBody& operator=(DescribeRatePlanPriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PriceModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PriceModel& obj) { 
        DARABONBA_PTR_TO_JSON(RatePlan, ratePlan_);
        DARABONBA_PTR_TO_JSON(Rule, rule_);
      };
      friend void from_json(const Darabonba::Json& j, PriceModel& obj) { 
        DARABONBA_PTR_FROM_JSON(RatePlan, ratePlan_);
        DARABONBA_PTR_FROM_JSON(Rule, rule_);
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

      class RatePlan : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RatePlan& obj) { 
          DARABONBA_PTR_TO_JSON(PlanPriceList, planPriceList_);
        };
        friend void from_json(const Darabonba::Json& j, RatePlan& obj) { 
          DARABONBA_PTR_FROM_JSON(PlanPriceList, planPriceList_);
        };
        RatePlan() = default ;
        RatePlan(const RatePlan &) = default ;
        RatePlan(RatePlan &&) = default ;
        RatePlan(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RatePlan() = default ;
        RatePlan& operator=(const RatePlan &) = default ;
        RatePlan& operator=(RatePlan &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PlanPriceList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PlanPriceList& obj) { 
            DARABONBA_PTR_TO_JSON(AccelerateType, accelerateType_);
            DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
            DARABONBA_PTR_TO_JSON(Coverages, coverages_);
            DARABONBA_PTR_TO_JSON(CrossborderTraffic, crossborderTraffic_);
            DARABONBA_PTR_TO_JSON(Currency, currency_);
            DARABONBA_PTR_TO_JSON(DcdnPlan, dcdnPlan_);
            DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
            DARABONBA_PTR_TO_JSON(EdgeCompute, edgeCompute_);
            DARABONBA_PTR_TO_JSON(EdgeDdos4Layer, edgeDdos4Layer_);
            DARABONBA_PTR_TO_JSON(EdgeDdos4LayerIntl, edgeDdos4LayerIntl_);
            DARABONBA_PTR_TO_JSON(EdgeDdos7Layer, edgeDdos7Layer_);
            DARABONBA_PTR_TO_JSON(EdgeDdosInstanceCn, edgeDdosInstanceCn_);
            DARABONBA_PTR_TO_JSON(EdgeDdosInstanceIntl, edgeDdosInstanceIntl_);
            DARABONBA_PTR_TO_JSON(EdgeLb4Layer, edgeLb4Layer_);
            DARABONBA_PTR_TO_JSON(EdgeLb4LayerIntl, edgeLb4LayerIntl_);
            DARABONBA_PTR_TO_JSON(EdgeLb7Layer, edgeLb7Layer_);
            DARABONBA_PTR_TO_JSON(EdgeWaf, edgeWaf_);
            DARABONBA_PTR_TO_JSON(EdgeWafInstance, edgeWafInstance_);
            DARABONBA_PTR_TO_JSON(Layer4Traffic, layer4Traffic_);
            DARABONBA_PTR_TO_JSON(Layer4TrafficIntl, layer4TrafficIntl_);
            DARABONBA_PTR_TO_JSON(PlanName, planName_);
            DARABONBA_PTR_TO_JSON(PlanStatus, planStatus_);
            DARABONBA_PTR_TO_JSON(PlanTraffic, planTraffic_);
            DARABONBA_PTR_TO_JSON(PlanType, planType_);
            DARABONBA_PTR_TO_JSON(Position, position_);
            DARABONBA_PTR_TO_JSON(Price, price_);
            DARABONBA_PTR_TO_JSON(TotalPrice, totalPrice_);
          };
          friend void from_json(const Darabonba::Json& j, PlanPriceList& obj) { 
            DARABONBA_PTR_FROM_JSON(AccelerateType, accelerateType_);
            DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
            DARABONBA_PTR_FROM_JSON(Coverages, coverages_);
            DARABONBA_PTR_FROM_JSON(CrossborderTraffic, crossborderTraffic_);
            DARABONBA_PTR_FROM_JSON(Currency, currency_);
            DARABONBA_PTR_FROM_JSON(DcdnPlan, dcdnPlan_);
            DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
            DARABONBA_PTR_FROM_JSON(EdgeCompute, edgeCompute_);
            DARABONBA_PTR_FROM_JSON(EdgeDdos4Layer, edgeDdos4Layer_);
            DARABONBA_PTR_FROM_JSON(EdgeDdos4LayerIntl, edgeDdos4LayerIntl_);
            DARABONBA_PTR_FROM_JSON(EdgeDdos7Layer, edgeDdos7Layer_);
            DARABONBA_PTR_FROM_JSON(EdgeDdosInstanceCn, edgeDdosInstanceCn_);
            DARABONBA_PTR_FROM_JSON(EdgeDdosInstanceIntl, edgeDdosInstanceIntl_);
            DARABONBA_PTR_FROM_JSON(EdgeLb4Layer, edgeLb4Layer_);
            DARABONBA_PTR_FROM_JSON(EdgeLb4LayerIntl, edgeLb4LayerIntl_);
            DARABONBA_PTR_FROM_JSON(EdgeLb7Layer, edgeLb7Layer_);
            DARABONBA_PTR_FROM_JSON(EdgeWaf, edgeWaf_);
            DARABONBA_PTR_FROM_JSON(EdgeWafInstance, edgeWafInstance_);
            DARABONBA_PTR_FROM_JSON(Layer4Traffic, layer4Traffic_);
            DARABONBA_PTR_FROM_JSON(Layer4TrafficIntl, layer4TrafficIntl_);
            DARABONBA_PTR_FROM_JSON(PlanName, planName_);
            DARABONBA_PTR_FROM_JSON(PlanStatus, planStatus_);
            DARABONBA_PTR_FROM_JSON(PlanTraffic, planTraffic_);
            DARABONBA_PTR_FROM_JSON(PlanType, planType_);
            DARABONBA_PTR_FROM_JSON(Position, position_);
            DARABONBA_PTR_FROM_JSON(Price, price_);
            DARABONBA_PTR_FROM_JSON(TotalPrice, totalPrice_);
          };
          PlanPriceList() = default ;
          PlanPriceList(const PlanPriceList &) = default ;
          PlanPriceList(PlanPriceList &&) = default ;
          PlanPriceList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PlanPriceList() = default ;
          PlanPriceList& operator=(const PlanPriceList &) = default ;
          PlanPriceList& operator=(PlanPriceList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accelerateType_ == nullptr
        && this->chargeType_ == nullptr && this->coverages_ == nullptr && this->crossborderTraffic_ == nullptr && this->currency_ == nullptr && this->dcdnPlan_ == nullptr
        && this->discountPrice_ == nullptr && this->edgeCompute_ == nullptr && this->edgeDdos4Layer_ == nullptr && this->edgeDdos4LayerIntl_ == nullptr && this->edgeDdos7Layer_ == nullptr
        && this->edgeDdosInstanceCn_ == nullptr && this->edgeDdosInstanceIntl_ == nullptr && this->edgeLb4Layer_ == nullptr && this->edgeLb4LayerIntl_ == nullptr && this->edgeLb7Layer_ == nullptr
        && this->edgeWaf_ == nullptr && this->edgeWafInstance_ == nullptr && this->layer4Traffic_ == nullptr && this->layer4TrafficIntl_ == nullptr && this->planName_ == nullptr
        && this->planStatus_ == nullptr && this->planTraffic_ == nullptr && this->planType_ == nullptr && this->position_ == nullptr && this->price_ == nullptr
        && this->totalPrice_ == nullptr; };
          // accelerateType Field Functions 
          bool hasAccelerateType() const { return this->accelerateType_ != nullptr;};
          void deleteAccelerateType() { this->accelerateType_ = nullptr;};
          inline string getAccelerateType() const { DARABONBA_PTR_GET_DEFAULT(accelerateType_, "") };
          inline PlanPriceList& setAccelerateType(string accelerateType) { DARABONBA_PTR_SET_VALUE(accelerateType_, accelerateType) };


          // chargeType Field Functions 
          bool hasChargeType() const { return this->chargeType_ != nullptr;};
          void deleteChargeType() { this->chargeType_ = nullptr;};
          inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
          inline PlanPriceList& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


          // coverages Field Functions 
          bool hasCoverages() const { return this->coverages_ != nullptr;};
          void deleteCoverages() { this->coverages_ = nullptr;};
          inline string getCoverages() const { DARABONBA_PTR_GET_DEFAULT(coverages_, "") };
          inline PlanPriceList& setCoverages(string coverages) { DARABONBA_PTR_SET_VALUE(coverages_, coverages) };


          // crossborderTraffic Field Functions 
          bool hasCrossborderTraffic() const { return this->crossborderTraffic_ != nullptr;};
          void deleteCrossborderTraffic() { this->crossborderTraffic_ = nullptr;};
          inline string getCrossborderTraffic() const { DARABONBA_PTR_GET_DEFAULT(crossborderTraffic_, "") };
          inline PlanPriceList& setCrossborderTraffic(string crossborderTraffic) { DARABONBA_PTR_SET_VALUE(crossborderTraffic_, crossborderTraffic) };


          // currency Field Functions 
          bool hasCurrency() const { return this->currency_ != nullptr;};
          void deleteCurrency() { this->currency_ = nullptr;};
          inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
          inline PlanPriceList& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


          // dcdnPlan Field Functions 
          bool hasDcdnPlan() const { return this->dcdnPlan_ != nullptr;};
          void deleteDcdnPlan() { this->dcdnPlan_ = nullptr;};
          inline string getDcdnPlan() const { DARABONBA_PTR_GET_DEFAULT(dcdnPlan_, "") };
          inline PlanPriceList& setDcdnPlan(string dcdnPlan) { DARABONBA_PTR_SET_VALUE(dcdnPlan_, dcdnPlan) };


          // discountPrice Field Functions 
          bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
          void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
          inline float getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
          inline PlanPriceList& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


          // edgeCompute Field Functions 
          bool hasEdgeCompute() const { return this->edgeCompute_ != nullptr;};
          void deleteEdgeCompute() { this->edgeCompute_ = nullptr;};
          inline string getEdgeCompute() const { DARABONBA_PTR_GET_DEFAULT(edgeCompute_, "") };
          inline PlanPriceList& setEdgeCompute(string edgeCompute) { DARABONBA_PTR_SET_VALUE(edgeCompute_, edgeCompute) };


          // edgeDdos4Layer Field Functions 
          bool hasEdgeDdos4Layer() const { return this->edgeDdos4Layer_ != nullptr;};
          void deleteEdgeDdos4Layer() { this->edgeDdos4Layer_ = nullptr;};
          inline string getEdgeDdos4Layer() const { DARABONBA_PTR_GET_DEFAULT(edgeDdos4Layer_, "") };
          inline PlanPriceList& setEdgeDdos4Layer(string edgeDdos4Layer) { DARABONBA_PTR_SET_VALUE(edgeDdos4Layer_, edgeDdos4Layer) };


          // edgeDdos4LayerIntl Field Functions 
          bool hasEdgeDdos4LayerIntl() const { return this->edgeDdos4LayerIntl_ != nullptr;};
          void deleteEdgeDdos4LayerIntl() { this->edgeDdos4LayerIntl_ = nullptr;};
          inline string getEdgeDdos4LayerIntl() const { DARABONBA_PTR_GET_DEFAULT(edgeDdos4LayerIntl_, "") };
          inline PlanPriceList& setEdgeDdos4LayerIntl(string edgeDdos4LayerIntl) { DARABONBA_PTR_SET_VALUE(edgeDdos4LayerIntl_, edgeDdos4LayerIntl) };


          // edgeDdos7Layer Field Functions 
          bool hasEdgeDdos7Layer() const { return this->edgeDdos7Layer_ != nullptr;};
          void deleteEdgeDdos7Layer() { this->edgeDdos7Layer_ = nullptr;};
          inline string getEdgeDdos7Layer() const { DARABONBA_PTR_GET_DEFAULT(edgeDdos7Layer_, "") };
          inline PlanPriceList& setEdgeDdos7Layer(string edgeDdos7Layer) { DARABONBA_PTR_SET_VALUE(edgeDdos7Layer_, edgeDdos7Layer) };


          // edgeDdosInstanceCn Field Functions 
          bool hasEdgeDdosInstanceCn() const { return this->edgeDdosInstanceCn_ != nullptr;};
          void deleteEdgeDdosInstanceCn() { this->edgeDdosInstanceCn_ = nullptr;};
          inline string getEdgeDdosInstanceCn() const { DARABONBA_PTR_GET_DEFAULT(edgeDdosInstanceCn_, "") };
          inline PlanPriceList& setEdgeDdosInstanceCn(string edgeDdosInstanceCn) { DARABONBA_PTR_SET_VALUE(edgeDdosInstanceCn_, edgeDdosInstanceCn) };


          // edgeDdosInstanceIntl Field Functions 
          bool hasEdgeDdosInstanceIntl() const { return this->edgeDdosInstanceIntl_ != nullptr;};
          void deleteEdgeDdosInstanceIntl() { this->edgeDdosInstanceIntl_ = nullptr;};
          inline string getEdgeDdosInstanceIntl() const { DARABONBA_PTR_GET_DEFAULT(edgeDdosInstanceIntl_, "") };
          inline PlanPriceList& setEdgeDdosInstanceIntl(string edgeDdosInstanceIntl) { DARABONBA_PTR_SET_VALUE(edgeDdosInstanceIntl_, edgeDdosInstanceIntl) };


          // edgeLb4Layer Field Functions 
          bool hasEdgeLb4Layer() const { return this->edgeLb4Layer_ != nullptr;};
          void deleteEdgeLb4Layer() { this->edgeLb4Layer_ = nullptr;};
          inline string getEdgeLb4Layer() const { DARABONBA_PTR_GET_DEFAULT(edgeLb4Layer_, "") };
          inline PlanPriceList& setEdgeLb4Layer(string edgeLb4Layer) { DARABONBA_PTR_SET_VALUE(edgeLb4Layer_, edgeLb4Layer) };


          // edgeLb4LayerIntl Field Functions 
          bool hasEdgeLb4LayerIntl() const { return this->edgeLb4LayerIntl_ != nullptr;};
          void deleteEdgeLb4LayerIntl() { this->edgeLb4LayerIntl_ = nullptr;};
          inline string getEdgeLb4LayerIntl() const { DARABONBA_PTR_GET_DEFAULT(edgeLb4LayerIntl_, "") };
          inline PlanPriceList& setEdgeLb4LayerIntl(string edgeLb4LayerIntl) { DARABONBA_PTR_SET_VALUE(edgeLb4LayerIntl_, edgeLb4LayerIntl) };


          // edgeLb7Layer Field Functions 
          bool hasEdgeLb7Layer() const { return this->edgeLb7Layer_ != nullptr;};
          void deleteEdgeLb7Layer() { this->edgeLb7Layer_ = nullptr;};
          inline string getEdgeLb7Layer() const { DARABONBA_PTR_GET_DEFAULT(edgeLb7Layer_, "") };
          inline PlanPriceList& setEdgeLb7Layer(string edgeLb7Layer) { DARABONBA_PTR_SET_VALUE(edgeLb7Layer_, edgeLb7Layer) };


          // edgeWaf Field Functions 
          bool hasEdgeWaf() const { return this->edgeWaf_ != nullptr;};
          void deleteEdgeWaf() { this->edgeWaf_ = nullptr;};
          inline string getEdgeWaf() const { DARABONBA_PTR_GET_DEFAULT(edgeWaf_, "") };
          inline PlanPriceList& setEdgeWaf(string edgeWaf) { DARABONBA_PTR_SET_VALUE(edgeWaf_, edgeWaf) };


          // edgeWafInstance Field Functions 
          bool hasEdgeWafInstance() const { return this->edgeWafInstance_ != nullptr;};
          void deleteEdgeWafInstance() { this->edgeWafInstance_ = nullptr;};
          inline string getEdgeWafInstance() const { DARABONBA_PTR_GET_DEFAULT(edgeWafInstance_, "") };
          inline PlanPriceList& setEdgeWafInstance(string edgeWafInstance) { DARABONBA_PTR_SET_VALUE(edgeWafInstance_, edgeWafInstance) };


          // layer4Traffic Field Functions 
          bool hasLayer4Traffic() const { return this->layer4Traffic_ != nullptr;};
          void deleteLayer4Traffic() { this->layer4Traffic_ = nullptr;};
          inline string getLayer4Traffic() const { DARABONBA_PTR_GET_DEFAULT(layer4Traffic_, "") };
          inline PlanPriceList& setLayer4Traffic(string layer4Traffic) { DARABONBA_PTR_SET_VALUE(layer4Traffic_, layer4Traffic) };


          // layer4TrafficIntl Field Functions 
          bool hasLayer4TrafficIntl() const { return this->layer4TrafficIntl_ != nullptr;};
          void deleteLayer4TrafficIntl() { this->layer4TrafficIntl_ = nullptr;};
          inline string getLayer4TrafficIntl() const { DARABONBA_PTR_GET_DEFAULT(layer4TrafficIntl_, "") };
          inline PlanPriceList& setLayer4TrafficIntl(string layer4TrafficIntl) { DARABONBA_PTR_SET_VALUE(layer4TrafficIntl_, layer4TrafficIntl) };


          // planName Field Functions 
          bool hasPlanName() const { return this->planName_ != nullptr;};
          void deletePlanName() { this->planName_ = nullptr;};
          inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
          inline PlanPriceList& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


          // planStatus Field Functions 
          bool hasPlanStatus() const { return this->planStatus_ != nullptr;};
          void deletePlanStatus() { this->planStatus_ = nullptr;};
          inline string getPlanStatus() const { DARABONBA_PTR_GET_DEFAULT(planStatus_, "") };
          inline PlanPriceList& setPlanStatus(string planStatus) { DARABONBA_PTR_SET_VALUE(planStatus_, planStatus) };


          // planTraffic Field Functions 
          bool hasPlanTraffic() const { return this->planTraffic_ != nullptr;};
          void deletePlanTraffic() { this->planTraffic_ = nullptr;};
          inline string getPlanTraffic() const { DARABONBA_PTR_GET_DEFAULT(planTraffic_, "") };
          inline PlanPriceList& setPlanTraffic(string planTraffic) { DARABONBA_PTR_SET_VALUE(planTraffic_, planTraffic) };


          // planType Field Functions 
          bool hasPlanType() const { return this->planType_ != nullptr;};
          void deletePlanType() { this->planType_ = nullptr;};
          inline string getPlanType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
          inline PlanPriceList& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


          // position Field Functions 
          bool hasPosition() const { return this->position_ != nullptr;};
          void deletePosition() { this->position_ = nullptr;};
          inline int32_t getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
          inline PlanPriceList& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


          // price Field Functions 
          bool hasPrice() const { return this->price_ != nullptr;};
          void deletePrice() { this->price_ = nullptr;};
          inline float getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
          inline PlanPriceList& setPrice(float price) { DARABONBA_PTR_SET_VALUE(price_, price) };


          // totalPrice Field Functions 
          bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
          void deleteTotalPrice() { this->totalPrice_ = nullptr;};
          inline float getTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0.0) };
          inline PlanPriceList& setTotalPrice(float totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


        protected:
          shared_ptr<string> accelerateType_ {};
          shared_ptr<string> chargeType_ {};
          shared_ptr<string> coverages_ {};
          shared_ptr<string> crossborderTraffic_ {};
          shared_ptr<string> currency_ {};
          shared_ptr<string> dcdnPlan_ {};
          shared_ptr<float> discountPrice_ {};
          shared_ptr<string> edgeCompute_ {};
          shared_ptr<string> edgeDdos4Layer_ {};
          shared_ptr<string> edgeDdos4LayerIntl_ {};
          shared_ptr<string> edgeDdos7Layer_ {};
          shared_ptr<string> edgeDdosInstanceCn_ {};
          shared_ptr<string> edgeDdosInstanceIntl_ {};
          shared_ptr<string> edgeLb4Layer_ {};
          shared_ptr<string> edgeLb4LayerIntl_ {};
          shared_ptr<string> edgeLb7Layer_ {};
          shared_ptr<string> edgeWaf_ {};
          shared_ptr<string> edgeWafInstance_ {};
          shared_ptr<string> layer4Traffic_ {};
          shared_ptr<string> layer4TrafficIntl_ {};
          shared_ptr<string> planName_ {};
          shared_ptr<string> planStatus_ {};
          shared_ptr<string> planTraffic_ {};
          shared_ptr<string> planType_ {};
          shared_ptr<int32_t> position_ {};
          shared_ptr<float> price_ {};
          shared_ptr<float> totalPrice_ {};
        };

        virtual bool empty() const override { return this->planPriceList_ == nullptr; };
        // planPriceList Field Functions 
        bool hasPlanPriceList() const { return this->planPriceList_ != nullptr;};
        void deletePlanPriceList() { this->planPriceList_ = nullptr;};
        inline const vector<RatePlan::PlanPriceList> & getPlanPriceList() const { DARABONBA_PTR_GET_CONST(planPriceList_, vector<RatePlan::PlanPriceList>) };
        inline vector<RatePlan::PlanPriceList> getPlanPriceList() { DARABONBA_PTR_GET(planPriceList_, vector<RatePlan::PlanPriceList>) };
        inline RatePlan& setPlanPriceList(const vector<RatePlan::PlanPriceList> & planPriceList) { DARABONBA_PTR_SET_VALUE(planPriceList_, planPriceList) };
        inline RatePlan& setPlanPriceList(vector<RatePlan::PlanPriceList> && planPriceList) { DARABONBA_PTR_SET_RVALUE(planPriceList_, planPriceList) };


      protected:
        shared_ptr<vector<RatePlan::PlanPriceList>> planPriceList_ {};
      };

      virtual bool empty() const override { return this->ratePlan_ == nullptr
        && this->rule_ == nullptr; };
      // ratePlan Field Functions 
      bool hasRatePlan() const { return this->ratePlan_ != nullptr;};
      void deleteRatePlan() { this->ratePlan_ = nullptr;};
      inline const PriceModel::RatePlan & getRatePlan() const { DARABONBA_PTR_GET_CONST(ratePlan_, PriceModel::RatePlan) };
      inline PriceModel::RatePlan getRatePlan() { DARABONBA_PTR_GET(ratePlan_, PriceModel::RatePlan) };
      inline PriceModel& setRatePlan(const PriceModel::RatePlan & ratePlan) { DARABONBA_PTR_SET_VALUE(ratePlan_, ratePlan) };
      inline PriceModel& setRatePlan(PriceModel::RatePlan && ratePlan) { DARABONBA_PTR_SET_RVALUE(ratePlan_, ratePlan) };


      // rule Field Functions 
      bool hasRule() const { return this->rule_ != nullptr;};
      void deleteRule() { this->rule_ = nullptr;};
      inline const PriceModel::Rule & getRule() const { DARABONBA_PTR_GET_CONST(rule_, PriceModel::Rule) };
      inline PriceModel::Rule getRule() { DARABONBA_PTR_GET(rule_, PriceModel::Rule) };
      inline PriceModel& setRule(const PriceModel::Rule & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
      inline PriceModel& setRule(PriceModel::Rule && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


    protected:
      shared_ptr<PriceModel::RatePlan> ratePlan_ {};
      shared_ptr<PriceModel::Rule> rule_ {};
    };

    virtual bool empty() const override { return this->priceModel_ == nullptr
        && this->requestId_ == nullptr; };
    // priceModel Field Functions 
    bool hasPriceModel() const { return this->priceModel_ != nullptr;};
    void deletePriceModel() { this->priceModel_ = nullptr;};
    inline const DescribeRatePlanPriceResponseBody::PriceModel & getPriceModel() const { DARABONBA_PTR_GET_CONST(priceModel_, DescribeRatePlanPriceResponseBody::PriceModel) };
    inline DescribeRatePlanPriceResponseBody::PriceModel getPriceModel() { DARABONBA_PTR_GET(priceModel_, DescribeRatePlanPriceResponseBody::PriceModel) };
    inline DescribeRatePlanPriceResponseBody& setPriceModel(const DescribeRatePlanPriceResponseBody::PriceModel & priceModel) { DARABONBA_PTR_SET_VALUE(priceModel_, priceModel) };
    inline DescribeRatePlanPriceResponseBody& setPriceModel(DescribeRatePlanPriceResponseBody::PriceModel && priceModel) { DARABONBA_PTR_SET_RVALUE(priceModel_, priceModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRatePlanPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pricing information.
    shared_ptr<DescribeRatePlanPriceResponseBody::PriceModel> priceModel_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

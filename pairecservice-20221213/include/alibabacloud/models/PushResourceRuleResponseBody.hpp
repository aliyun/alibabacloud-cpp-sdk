// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHRESOURCERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUSHRESOURCERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class PushResourceRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushResourceRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MetricOperationType, metricOperationType_);
      DARABONBA_PTR_TO_JSON(MetricPullInfo, metricPullInfo_);
      DARABONBA_PTR_TO_JSON(MetricPullPeriod, metricPullPeriod_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceRuleId, resourceRuleId_);
      DARABONBA_PTR_TO_JSON(RuleComputingDefinition, ruleComputingDefinition_);
      DARABONBA_PTR_TO_JSON(RuleItems, ruleItems_);
    };
    friend void from_json(const Darabonba::Json& j, PushResourceRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MetricOperationType, metricOperationType_);
      DARABONBA_PTR_FROM_JSON(MetricPullInfo, metricPullInfo_);
      DARABONBA_PTR_FROM_JSON(MetricPullPeriod, metricPullPeriod_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceRuleId, resourceRuleId_);
      DARABONBA_PTR_FROM_JSON(RuleComputingDefinition, ruleComputingDefinition_);
      DARABONBA_PTR_FROM_JSON(RuleItems, ruleItems_);
    };
    PushResourceRuleResponseBody() = default ;
    PushResourceRuleResponseBody(const PushResourceRuleResponseBody &) = default ;
    PushResourceRuleResponseBody(PushResourceRuleResponseBody &&) = default ;
    PushResourceRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushResourceRuleResponseBody() = default ;
    PushResourceRuleResponseBody& operator=(const PushResourceRuleResponseBody &) = default ;
    PushResourceRuleResponseBody& operator=(PushResourceRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleItems& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
        DARABONBA_PTR_TO_JSON(MinValue, minValue_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, RuleItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
        DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      RuleItems() = default ;
      RuleItems(const RuleItems &) = default ;
      RuleItems(RuleItems &&) = default ;
      RuleItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleItems() = default ;
      RuleItems& operator=(const RuleItems &) = default ;
      RuleItems& operator=(RuleItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->maxValue_ == nullptr && this->minValue_ == nullptr && this->name_ == nullptr && this->value_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RuleItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // maxValue Field Functions 
      bool hasMaxValue() const { return this->maxValue_ != nullptr;};
      void deleteMaxValue() { this->maxValue_ = nullptr;};
      inline string getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, "") };
      inline RuleItems& setMaxValue(string maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


      // minValue Field Functions 
      bool hasMinValue() const { return this->minValue_ != nullptr;};
      void deleteMinValue() { this->minValue_ = nullptr;};
      inline string getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, "") };
      inline RuleItems& setMinValue(string minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RuleItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline RuleItems& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> maxValue_ {};
      shared_ptr<string> minValue_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->metricOperationType_ == nullptr && this->metricPullInfo_ == nullptr && this->metricPullPeriod_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr
        && this->resourceRuleId_ == nullptr && this->ruleComputingDefinition_ == nullptr && this->ruleItems_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PushResourceRuleResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // metricOperationType Field Functions 
    bool hasMetricOperationType() const { return this->metricOperationType_ != nullptr;};
    void deleteMetricOperationType() { this->metricOperationType_ = nullptr;};
    inline string getMetricOperationType() const { DARABONBA_PTR_GET_DEFAULT(metricOperationType_, "") };
    inline PushResourceRuleResponseBody& setMetricOperationType(string metricOperationType) { DARABONBA_PTR_SET_VALUE(metricOperationType_, metricOperationType) };


    // metricPullInfo Field Functions 
    bool hasMetricPullInfo() const { return this->metricPullInfo_ != nullptr;};
    void deleteMetricPullInfo() { this->metricPullInfo_ = nullptr;};
    inline string getMetricPullInfo() const { DARABONBA_PTR_GET_DEFAULT(metricPullInfo_, "") };
    inline PushResourceRuleResponseBody& setMetricPullInfo(string metricPullInfo) { DARABONBA_PTR_SET_VALUE(metricPullInfo_, metricPullInfo) };


    // metricPullPeriod Field Functions 
    bool hasMetricPullPeriod() const { return this->metricPullPeriod_ != nullptr;};
    void deleteMetricPullPeriod() { this->metricPullPeriod_ = nullptr;};
    inline string getMetricPullPeriod() const { DARABONBA_PTR_GET_DEFAULT(metricPullPeriod_, "") };
    inline PushResourceRuleResponseBody& setMetricPullPeriod(string metricPullPeriod) { DARABONBA_PTR_SET_VALUE(metricPullPeriod_, metricPullPeriod) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PushResourceRuleResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PushResourceRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceRuleId Field Functions 
    bool hasResourceRuleId() const { return this->resourceRuleId_ != nullptr;};
    void deleteResourceRuleId() { this->resourceRuleId_ = nullptr;};
    inline string getResourceRuleId() const { DARABONBA_PTR_GET_DEFAULT(resourceRuleId_, "") };
    inline PushResourceRuleResponseBody& setResourceRuleId(string resourceRuleId) { DARABONBA_PTR_SET_VALUE(resourceRuleId_, resourceRuleId) };


    // ruleComputingDefinition Field Functions 
    bool hasRuleComputingDefinition() const { return this->ruleComputingDefinition_ != nullptr;};
    void deleteRuleComputingDefinition() { this->ruleComputingDefinition_ = nullptr;};
    inline string getRuleComputingDefinition() const { DARABONBA_PTR_GET_DEFAULT(ruleComputingDefinition_, "") };
    inline PushResourceRuleResponseBody& setRuleComputingDefinition(string ruleComputingDefinition) { DARABONBA_PTR_SET_VALUE(ruleComputingDefinition_, ruleComputingDefinition) };


    // ruleItems Field Functions 
    bool hasRuleItems() const { return this->ruleItems_ != nullptr;};
    void deleteRuleItems() { this->ruleItems_ = nullptr;};
    inline const vector<PushResourceRuleResponseBody::RuleItems> & getRuleItems() const { DARABONBA_PTR_GET_CONST(ruleItems_, vector<PushResourceRuleResponseBody::RuleItems>) };
    inline vector<PushResourceRuleResponseBody::RuleItems> getRuleItems() { DARABONBA_PTR_GET(ruleItems_, vector<PushResourceRuleResponseBody::RuleItems>) };
    inline PushResourceRuleResponseBody& setRuleItems(const vector<PushResourceRuleResponseBody::RuleItems> & ruleItems) { DARABONBA_PTR_SET_VALUE(ruleItems_, ruleItems) };
    inline PushResourceRuleResponseBody& setRuleItems(vector<PushResourceRuleResponseBody::RuleItems> && ruleItems) { DARABONBA_PTR_SET_RVALUE(ruleItems_, ruleItems) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> metricOperationType_ {};
    shared_ptr<string> metricPullInfo_ {};
    shared_ptr<string> metricPullPeriod_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resourceRuleId_ {};
    shared_ptr<string> ruleComputingDefinition_ {};
    shared_ptr<vector<PushResourceRuleResponseBody::RuleItems>> ruleItems_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif

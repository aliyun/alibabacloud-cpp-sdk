// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCERULEREQUEST_HPP_
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
  class CreateResourceRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MetricOperationType, metricOperationType_);
      DARABONBA_PTR_TO_JSON(MetricPullInfo, metricPullInfo_);
      DARABONBA_PTR_TO_JSON(MetricPullPeriod, metricPullPeriod_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RuleComputingDefinition, ruleComputingDefinition_);
      DARABONBA_PTR_TO_JSON(RuleItems, ruleItems_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MetricOperationType, metricOperationType_);
      DARABONBA_PTR_FROM_JSON(MetricPullInfo, metricPullInfo_);
      DARABONBA_PTR_FROM_JSON(MetricPullPeriod, metricPullPeriod_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RuleComputingDefinition, ruleComputingDefinition_);
      DARABONBA_PTR_FROM_JSON(RuleItems, ruleItems_);
    };
    CreateResourceRuleRequest() = default ;
    CreateResourceRuleRequest(const CreateResourceRuleRequest &) = default ;
    CreateResourceRuleRequest(CreateResourceRuleRequest &&) = default ;
    CreateResourceRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceRuleRequest() = default ;
    CreateResourceRuleRequest& operator=(const CreateResourceRuleRequest &) = default ;
    CreateResourceRuleRequest& operator=(CreateResourceRuleRequest &&) = default ;
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
      inline double getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0.0) };
      inline RuleItems& setMaxValue(double maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


      // minValue Field Functions 
      bool hasMinValue() const { return this->minValue_ != nullptr;};
      void deleteMinValue() { this->minValue_ = nullptr;};
      inline double getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0.0) };
      inline RuleItems& setMinValue(double minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RuleItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
      inline RuleItems& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> description_ {};
      // This parameter is required.
      shared_ptr<double> maxValue_ {};
      // This parameter is required.
      shared_ptr<double> minValue_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      // This parameter is required.
      shared_ptr<double> value_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->instanceId_ == nullptr && this->metricOperationType_ == nullptr && this->metricPullInfo_ == nullptr && this->metricPullPeriod_ == nullptr && this->name_ == nullptr
        && this->ruleComputingDefinition_ == nullptr && this->ruleItems_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateResourceRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateResourceRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // metricOperationType Field Functions 
    bool hasMetricOperationType() const { return this->metricOperationType_ != nullptr;};
    void deleteMetricOperationType() { this->metricOperationType_ = nullptr;};
    inline string getMetricOperationType() const { DARABONBA_PTR_GET_DEFAULT(metricOperationType_, "") };
    inline CreateResourceRuleRequest& setMetricOperationType(string metricOperationType) { DARABONBA_PTR_SET_VALUE(metricOperationType_, metricOperationType) };


    // metricPullInfo Field Functions 
    bool hasMetricPullInfo() const { return this->metricPullInfo_ != nullptr;};
    void deleteMetricPullInfo() { this->metricPullInfo_ = nullptr;};
    inline string getMetricPullInfo() const { DARABONBA_PTR_GET_DEFAULT(metricPullInfo_, "") };
    inline CreateResourceRuleRequest& setMetricPullInfo(string metricPullInfo) { DARABONBA_PTR_SET_VALUE(metricPullInfo_, metricPullInfo) };


    // metricPullPeriod Field Functions 
    bool hasMetricPullPeriod() const { return this->metricPullPeriod_ != nullptr;};
    void deleteMetricPullPeriod() { this->metricPullPeriod_ = nullptr;};
    inline string getMetricPullPeriod() const { DARABONBA_PTR_GET_DEFAULT(metricPullPeriod_, "") };
    inline CreateResourceRuleRequest& setMetricPullPeriod(string metricPullPeriod) { DARABONBA_PTR_SET_VALUE(metricPullPeriod_, metricPullPeriod) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateResourceRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ruleComputingDefinition Field Functions 
    bool hasRuleComputingDefinition() const { return this->ruleComputingDefinition_ != nullptr;};
    void deleteRuleComputingDefinition() { this->ruleComputingDefinition_ = nullptr;};
    inline string getRuleComputingDefinition() const { DARABONBA_PTR_GET_DEFAULT(ruleComputingDefinition_, "") };
    inline CreateResourceRuleRequest& setRuleComputingDefinition(string ruleComputingDefinition) { DARABONBA_PTR_SET_VALUE(ruleComputingDefinition_, ruleComputingDefinition) };


    // ruleItems Field Functions 
    bool hasRuleItems() const { return this->ruleItems_ != nullptr;};
    void deleteRuleItems() { this->ruleItems_ = nullptr;};
    inline const vector<CreateResourceRuleRequest::RuleItems> & getRuleItems() const { DARABONBA_PTR_GET_CONST(ruleItems_, vector<CreateResourceRuleRequest::RuleItems>) };
    inline vector<CreateResourceRuleRequest::RuleItems> getRuleItems() { DARABONBA_PTR_GET(ruleItems_, vector<CreateResourceRuleRequest::RuleItems>) };
    inline CreateResourceRuleRequest& setRuleItems(const vector<CreateResourceRuleRequest::RuleItems> & ruleItems) { DARABONBA_PTR_SET_VALUE(ruleItems_, ruleItems) };
    inline CreateResourceRuleRequest& setRuleItems(vector<CreateResourceRuleRequest::RuleItems> && ruleItems) { DARABONBA_PTR_SET_RVALUE(ruleItems_, ruleItems) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> metricOperationType_ {};
    shared_ptr<string> metricPullInfo_ {};
    shared_ptr<string> metricPullPeriod_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> ruleComputingDefinition_ {};
    // This parameter is required.
    shared_ptr<vector<CreateResourceRuleRequest::RuleItems>> ruleItems_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif

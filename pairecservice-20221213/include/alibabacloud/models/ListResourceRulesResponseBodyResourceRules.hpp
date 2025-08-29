// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCERULESRESPONSEBODYRESOURCERULES_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCERULESRESPONSEBODYRESOURCERULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceRulesResponseBodyResourceRulesRuleItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListResourceRulesResponseBodyResourceRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceRulesResponseBodyResourceRules& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MetricOperationType, metricOperationType_);
      DARABONBA_PTR_TO_JSON(MetricPullInfo, metricPullInfo_);
      DARABONBA_PTR_TO_JSON(MetricPullPeriod, metricPullPeriod_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceRuleId, resourceRuleId_);
      DARABONBA_PTR_TO_JSON(RuleComputingDefinition, ruleComputingDefinition_);
      DARABONBA_PTR_TO_JSON(RuleItems, ruleItems_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceRulesResponseBodyResourceRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MetricOperationType, metricOperationType_);
      DARABONBA_PTR_FROM_JSON(MetricPullInfo, metricPullInfo_);
      DARABONBA_PTR_FROM_JSON(MetricPullPeriod, metricPullPeriod_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceRuleId, resourceRuleId_);
      DARABONBA_PTR_FROM_JSON(RuleComputingDefinition, ruleComputingDefinition_);
      DARABONBA_PTR_FROM_JSON(RuleItems, ruleItems_);
    };
    ListResourceRulesResponseBodyResourceRules() = default ;
    ListResourceRulesResponseBodyResourceRules(const ListResourceRulesResponseBodyResourceRules &) = default ;
    ListResourceRulesResponseBodyResourceRules(ListResourceRulesResponseBodyResourceRules &&) = default ;
    ListResourceRulesResponseBodyResourceRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceRulesResponseBodyResourceRules() = default ;
    ListResourceRulesResponseBodyResourceRules& operator=(const ListResourceRulesResponseBodyResourceRules &) = default ;
    ListResourceRulesResponseBodyResourceRules& operator=(ListResourceRulesResponseBodyResourceRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->metricOperationType_ != nullptr && this->metricPullInfo_ != nullptr && this->metricPullPeriod_ != nullptr && this->name_ != nullptr && this->resourceRuleId_ != nullptr
        && this->ruleComputingDefinition_ != nullptr && this->ruleItems_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListResourceRulesResponseBodyResourceRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // metricOperationType Field Functions 
    bool hasMetricOperationType() const { return this->metricOperationType_ != nullptr;};
    void deleteMetricOperationType() { this->metricOperationType_ = nullptr;};
    inline string metricOperationType() const { DARABONBA_PTR_GET_DEFAULT(metricOperationType_, "") };
    inline ListResourceRulesResponseBodyResourceRules& setMetricOperationType(string metricOperationType) { DARABONBA_PTR_SET_VALUE(metricOperationType_, metricOperationType) };


    // metricPullInfo Field Functions 
    bool hasMetricPullInfo() const { return this->metricPullInfo_ != nullptr;};
    void deleteMetricPullInfo() { this->metricPullInfo_ = nullptr;};
    inline string metricPullInfo() const { DARABONBA_PTR_GET_DEFAULT(metricPullInfo_, "") };
    inline ListResourceRulesResponseBodyResourceRules& setMetricPullInfo(string metricPullInfo) { DARABONBA_PTR_SET_VALUE(metricPullInfo_, metricPullInfo) };


    // metricPullPeriod Field Functions 
    bool hasMetricPullPeriod() const { return this->metricPullPeriod_ != nullptr;};
    void deleteMetricPullPeriod() { this->metricPullPeriod_ = nullptr;};
    inline string metricPullPeriod() const { DARABONBA_PTR_GET_DEFAULT(metricPullPeriod_, "") };
    inline ListResourceRulesResponseBodyResourceRules& setMetricPullPeriod(string metricPullPeriod) { DARABONBA_PTR_SET_VALUE(metricPullPeriod_, metricPullPeriod) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourceRulesResponseBodyResourceRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceRuleId Field Functions 
    bool hasResourceRuleId() const { return this->resourceRuleId_ != nullptr;};
    void deleteResourceRuleId() { this->resourceRuleId_ = nullptr;};
    inline string resourceRuleId() const { DARABONBA_PTR_GET_DEFAULT(resourceRuleId_, "") };
    inline ListResourceRulesResponseBodyResourceRules& setResourceRuleId(string resourceRuleId) { DARABONBA_PTR_SET_VALUE(resourceRuleId_, resourceRuleId) };


    // ruleComputingDefinition Field Functions 
    bool hasRuleComputingDefinition() const { return this->ruleComputingDefinition_ != nullptr;};
    void deleteRuleComputingDefinition() { this->ruleComputingDefinition_ = nullptr;};
    inline string ruleComputingDefinition() const { DARABONBA_PTR_GET_DEFAULT(ruleComputingDefinition_, "") };
    inline ListResourceRulesResponseBodyResourceRules& setRuleComputingDefinition(string ruleComputingDefinition) { DARABONBA_PTR_SET_VALUE(ruleComputingDefinition_, ruleComputingDefinition) };


    // ruleItems Field Functions 
    bool hasRuleItems() const { return this->ruleItems_ != nullptr;};
    void deleteRuleItems() { this->ruleItems_ = nullptr;};
    inline const vector<Models::ListResourceRulesResponseBodyResourceRulesRuleItems> & ruleItems() const { DARABONBA_PTR_GET_CONST(ruleItems_, vector<Models::ListResourceRulesResponseBodyResourceRulesRuleItems>) };
    inline vector<Models::ListResourceRulesResponseBodyResourceRulesRuleItems> ruleItems() { DARABONBA_PTR_GET(ruleItems_, vector<Models::ListResourceRulesResponseBodyResourceRulesRuleItems>) };
    inline ListResourceRulesResponseBodyResourceRules& setRuleItems(const vector<Models::ListResourceRulesResponseBodyResourceRulesRuleItems> & ruleItems) { DARABONBA_PTR_SET_VALUE(ruleItems_, ruleItems) };
    inline ListResourceRulesResponseBodyResourceRules& setRuleItems(vector<Models::ListResourceRulesResponseBodyResourceRulesRuleItems> && ruleItems) { DARABONBA_PTR_SET_RVALUE(ruleItems_, ruleItems) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> metricOperationType_ = nullptr;
    std::shared_ptr<string> metricPullInfo_ = nullptr;
    std::shared_ptr<string> metricPullPeriod_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> resourceRuleId_ = nullptr;
    std::shared_ptr<string> ruleComputingDefinition_ = nullptr;
    std::shared_ptr<vector<Models::ListResourceRulesResponseBodyResourceRulesRuleItems>> ruleItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif

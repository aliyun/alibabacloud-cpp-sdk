// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateResourceRuleRequestRuleItems.hpp>
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
    virtual bool empty() const override { this->description_ != nullptr
        && this->instanceId_ != nullptr && this->metricOperationType_ != nullptr && this->metricPullInfo_ != nullptr && this->metricPullPeriod_ != nullptr && this->name_ != nullptr
        && this->ruleComputingDefinition_ != nullptr && this->ruleItems_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateResourceRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateResourceRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // metricOperationType Field Functions 
    bool hasMetricOperationType() const { return this->metricOperationType_ != nullptr;};
    void deleteMetricOperationType() { this->metricOperationType_ = nullptr;};
    inline string metricOperationType() const { DARABONBA_PTR_GET_DEFAULT(metricOperationType_, "") };
    inline CreateResourceRuleRequest& setMetricOperationType(string metricOperationType) { DARABONBA_PTR_SET_VALUE(metricOperationType_, metricOperationType) };


    // metricPullInfo Field Functions 
    bool hasMetricPullInfo() const { return this->metricPullInfo_ != nullptr;};
    void deleteMetricPullInfo() { this->metricPullInfo_ = nullptr;};
    inline string metricPullInfo() const { DARABONBA_PTR_GET_DEFAULT(metricPullInfo_, "") };
    inline CreateResourceRuleRequest& setMetricPullInfo(string metricPullInfo) { DARABONBA_PTR_SET_VALUE(metricPullInfo_, metricPullInfo) };


    // metricPullPeriod Field Functions 
    bool hasMetricPullPeriod() const { return this->metricPullPeriod_ != nullptr;};
    void deleteMetricPullPeriod() { this->metricPullPeriod_ = nullptr;};
    inline string metricPullPeriod() const { DARABONBA_PTR_GET_DEFAULT(metricPullPeriod_, "") };
    inline CreateResourceRuleRequest& setMetricPullPeriod(string metricPullPeriod) { DARABONBA_PTR_SET_VALUE(metricPullPeriod_, metricPullPeriod) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateResourceRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ruleComputingDefinition Field Functions 
    bool hasRuleComputingDefinition() const { return this->ruleComputingDefinition_ != nullptr;};
    void deleteRuleComputingDefinition() { this->ruleComputingDefinition_ = nullptr;};
    inline string ruleComputingDefinition() const { DARABONBA_PTR_GET_DEFAULT(ruleComputingDefinition_, "") };
    inline CreateResourceRuleRequest& setRuleComputingDefinition(string ruleComputingDefinition) { DARABONBA_PTR_SET_VALUE(ruleComputingDefinition_, ruleComputingDefinition) };


    // ruleItems Field Functions 
    bool hasRuleItems() const { return this->ruleItems_ != nullptr;};
    void deleteRuleItems() { this->ruleItems_ = nullptr;};
    inline const vector<CreateResourceRuleRequestRuleItems> & ruleItems() const { DARABONBA_PTR_GET_CONST(ruleItems_, vector<CreateResourceRuleRequestRuleItems>) };
    inline vector<CreateResourceRuleRequestRuleItems> ruleItems() { DARABONBA_PTR_GET(ruleItems_, vector<CreateResourceRuleRequestRuleItems>) };
    inline CreateResourceRuleRequest& setRuleItems(const vector<CreateResourceRuleRequestRuleItems> & ruleItems) { DARABONBA_PTR_SET_VALUE(ruleItems_, ruleItems) };
    inline CreateResourceRuleRequest& setRuleItems(vector<CreateResourceRuleRequestRuleItems> && ruleItems) { DARABONBA_PTR_SET_RVALUE(ruleItems_, ruleItems) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> metricOperationType_ = nullptr;
    std::shared_ptr<string> metricPullInfo_ = nullptr;
    std::shared_ptr<string> metricPullPeriod_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ruleComputingDefinition_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<CreateResourceRuleRequestRuleItems>> ruleItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif

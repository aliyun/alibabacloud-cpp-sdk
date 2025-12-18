// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATEPRECONFIGRULESREQUESTRESOURCEEVALUATEITEMS_HPP_
#define ALIBABACLOUD_MODELS_EVALUATEPRECONFIGRULESREQUESTRESOURCEEVALUATEITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EvaluatePreConfigRulesRequestResourceEvaluateItemsRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class EvaluatePreConfigRulesRequestResourceEvaluateItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluatePreConfigRulesRequestResourceEvaluateItems& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceLogicalId, resourceLogicalId_);
      DARABONBA_PTR_TO_JSON(ResourceProperties, resourceProperties_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluatePreConfigRulesRequestResourceEvaluateItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceLogicalId, resourceLogicalId_);
      DARABONBA_PTR_FROM_JSON(ResourceProperties, resourceProperties_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    EvaluatePreConfigRulesRequestResourceEvaluateItems() = default ;
    EvaluatePreConfigRulesRequestResourceEvaluateItems(const EvaluatePreConfigRulesRequestResourceEvaluateItems &) = default ;
    EvaluatePreConfigRulesRequestResourceEvaluateItems(EvaluatePreConfigRulesRequestResourceEvaluateItems &&) = default ;
    EvaluatePreConfigRulesRequestResourceEvaluateItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluatePreConfigRulesRequestResourceEvaluateItems() = default ;
    EvaluatePreConfigRulesRequestResourceEvaluateItems& operator=(const EvaluatePreConfigRulesRequestResourceEvaluateItems &) = default ;
    EvaluatePreConfigRulesRequestResourceEvaluateItems& operator=(EvaluatePreConfigRulesRequestResourceEvaluateItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceLogicalId_ == nullptr
        && return this->resourceProperties_ == nullptr && return this->resourceType_ == nullptr && return this->rules_ == nullptr; };
    // resourceLogicalId Field Functions 
    bool hasResourceLogicalId() const { return this->resourceLogicalId_ != nullptr;};
    void deleteResourceLogicalId() { this->resourceLogicalId_ = nullptr;};
    inline string resourceLogicalId() const { DARABONBA_PTR_GET_DEFAULT(resourceLogicalId_, "") };
    inline EvaluatePreConfigRulesRequestResourceEvaluateItems& setResourceLogicalId(string resourceLogicalId) { DARABONBA_PTR_SET_VALUE(resourceLogicalId_, resourceLogicalId) };


    // resourceProperties Field Functions 
    bool hasResourceProperties() const { return this->resourceProperties_ != nullptr;};
    void deleteResourceProperties() { this->resourceProperties_ = nullptr;};
    inline string resourceProperties() const { DARABONBA_PTR_GET_DEFAULT(resourceProperties_, "") };
    inline EvaluatePreConfigRulesRequestResourceEvaluateItems& setResourceProperties(string resourceProperties) { DARABONBA_PTR_SET_VALUE(resourceProperties_, resourceProperties) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline EvaluatePreConfigRulesRequestResourceEvaluateItems& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::EvaluatePreConfigRulesRequestResourceEvaluateItemsRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::EvaluatePreConfigRulesRequestResourceEvaluateItemsRules>) };
    inline vector<Models::EvaluatePreConfigRulesRequestResourceEvaluateItemsRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::EvaluatePreConfigRulesRequestResourceEvaluateItemsRules>) };
    inline EvaluatePreConfigRulesRequestResourceEvaluateItems& setRules(const vector<Models::EvaluatePreConfigRulesRequestResourceEvaluateItemsRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline EvaluatePreConfigRulesRequestResourceEvaluateItems& setRules(vector<Models::EvaluatePreConfigRulesRequestResourceEvaluateItemsRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The logical ID of the resource.
    std::shared_ptr<string> resourceLogicalId_ = nullptr;
    // The properties of the resource.
    std::shared_ptr<string> resourceProperties_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The evaluation rules.
    std::shared_ptr<vector<Models::EvaluatePreConfigRulesRequestResourceEvaluateItemsRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATEPRECONFIGRULESRESPONSEBODYRESOURCEEVALUATIONS_HPP_
#define ALIBABACLOUD_MODELS_EVALUATEPRECONFIGRULESRESPONSEBODYRESOURCEEVALUATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class EvaluatePreConfigRulesResponseBodyResourceEvaluations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluatePreConfigRulesResponseBodyResourceEvaluations& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceLogicalId, resourceLogicalId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluatePreConfigRulesResponseBodyResourceEvaluations& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceLogicalId, resourceLogicalId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    EvaluatePreConfigRulesResponseBodyResourceEvaluations() = default ;
    EvaluatePreConfigRulesResponseBodyResourceEvaluations(const EvaluatePreConfigRulesResponseBodyResourceEvaluations &) = default ;
    EvaluatePreConfigRulesResponseBodyResourceEvaluations(EvaluatePreConfigRulesResponseBodyResourceEvaluations &&) = default ;
    EvaluatePreConfigRulesResponseBodyResourceEvaluations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluatePreConfigRulesResponseBodyResourceEvaluations() = default ;
    EvaluatePreConfigRulesResponseBodyResourceEvaluations& operator=(const EvaluatePreConfigRulesResponseBodyResourceEvaluations &) = default ;
    EvaluatePreConfigRulesResponseBodyResourceEvaluations& operator=(EvaluatePreConfigRulesResponseBodyResourceEvaluations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceLogicalId_ == nullptr
        && return this->resourceType_ == nullptr && return this->rules_ == nullptr; };
    // resourceLogicalId Field Functions 
    bool hasResourceLogicalId() const { return this->resourceLogicalId_ != nullptr;};
    void deleteResourceLogicalId() { this->resourceLogicalId_ = nullptr;};
    inline string resourceLogicalId() const { DARABONBA_PTR_GET_DEFAULT(resourceLogicalId_, "") };
    inline EvaluatePreConfigRulesResponseBodyResourceEvaluations& setResourceLogicalId(string resourceLogicalId) { DARABONBA_PTR_SET_VALUE(resourceLogicalId_, resourceLogicalId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline EvaluatePreConfigRulesResponseBodyResourceEvaluations& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules>) };
    inline vector<Models::EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules>) };
    inline EvaluatePreConfigRulesResponseBodyResourceEvaluations& setRules(const vector<Models::EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline EvaluatePreConfigRulesResponseBodyResourceEvaluations& setRules(vector<Models::EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The logical ID of the resource.
    // 
    // >  If the ResourceLogicalId request parameter is left empty, the value of the ResourceLogicalId response parameter is generated based on the value of the `ResourceProperties` parameter.
    std::shared_ptr<string> resourceLogicalId_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The evaluation rules.
    std::shared_ptr<vector<Models::EvaluatePreConfigRulesResponseBodyResourceEvaluationsRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif

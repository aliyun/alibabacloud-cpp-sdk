// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULECONDITIONSCOOKIECONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULECONDITIONSCOOKIECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleConditionsCookieConfigValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig() = default ;
    UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig(const UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig &) = default ;
    UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig(UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig &&) = default ;
    UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig() = default ;
    UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig& operator=(const UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig &) = default ;
    UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig& operator=(UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->values_ != nullptr; };
    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<Models::UpdateRulesAttributeRequestRulesRuleConditionsCookieConfigValues> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<Models::UpdateRulesAttributeRequestRulesRuleConditionsCookieConfigValues>) };
    inline vector<Models::UpdateRulesAttributeRequestRulesRuleConditionsCookieConfigValues> values() { DARABONBA_PTR_GET(values_, vector<Models::UpdateRulesAttributeRequestRulesRuleConditionsCookieConfigValues>) };
    inline UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig& setValues(const vector<Models::UpdateRulesAttributeRequestRulesRuleConditionsCookieConfigValues> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig& setValues(vector<Models::UpdateRulesAttributeRequestRulesRuleConditionsCookieConfigValues> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<vector<Models::UpdateRulesAttributeRequestRulesRuleConditionsCookieConfigValues>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif

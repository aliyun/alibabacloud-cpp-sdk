// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULESREQUESTRULESRULECONDITIONSCOOKIECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATERULESREQUESTRULESRULECONDITIONSCOOKIECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRulesRequestRulesRuleConditionsCookieConfigValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateRulesRequestRulesRuleConditionsCookieConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRulesRequestRulesRuleConditionsCookieConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRulesRequestRulesRuleConditionsCookieConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    CreateRulesRequestRulesRuleConditionsCookieConfig() = default ;
    CreateRulesRequestRulesRuleConditionsCookieConfig(const CreateRulesRequestRulesRuleConditionsCookieConfig &) = default ;
    CreateRulesRequestRulesRuleConditionsCookieConfig(CreateRulesRequestRulesRuleConditionsCookieConfig &&) = default ;
    CreateRulesRequestRulesRuleConditionsCookieConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRulesRequestRulesRuleConditionsCookieConfig() = default ;
    CreateRulesRequestRulesRuleConditionsCookieConfig& operator=(const CreateRulesRequestRulesRuleConditionsCookieConfig &) = default ;
    CreateRulesRequestRulesRuleConditionsCookieConfig& operator=(CreateRulesRequestRulesRuleConditionsCookieConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->values_ != nullptr; };
    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<Models::CreateRulesRequestRulesRuleConditionsCookieConfigValues> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<Models::CreateRulesRequestRulesRuleConditionsCookieConfigValues>) };
    inline vector<Models::CreateRulesRequestRulesRuleConditionsCookieConfigValues> values() { DARABONBA_PTR_GET(values_, vector<Models::CreateRulesRequestRulesRuleConditionsCookieConfigValues>) };
    inline CreateRulesRequestRulesRuleConditionsCookieConfig& setValues(const vector<Models::CreateRulesRequestRulesRuleConditionsCookieConfigValues> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline CreateRulesRequestRulesRuleConditionsCookieConfig& setValues(vector<Models::CreateRulesRequestRulesRuleConditionsCookieConfigValues> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<vector<Models::CreateRulesRequestRulesRuleConditionsCookieConfigValues>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif

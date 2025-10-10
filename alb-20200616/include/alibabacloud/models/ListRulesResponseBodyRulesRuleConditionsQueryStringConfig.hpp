// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULECONDITIONSQUERYSTRINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULECONDITIONSQUERYSTRINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleConditionsQueryStringConfigValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListRulesResponseBodyRulesRuleConditionsQueryStringConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesResponseBodyRulesRuleConditionsQueryStringConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesResponseBodyRulesRuleConditionsQueryStringConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    ListRulesResponseBodyRulesRuleConditionsQueryStringConfig() = default ;
    ListRulesResponseBodyRulesRuleConditionsQueryStringConfig(const ListRulesResponseBodyRulesRuleConditionsQueryStringConfig &) = default ;
    ListRulesResponseBodyRulesRuleConditionsQueryStringConfig(ListRulesResponseBodyRulesRuleConditionsQueryStringConfig &&) = default ;
    ListRulesResponseBodyRulesRuleConditionsQueryStringConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesResponseBodyRulesRuleConditionsQueryStringConfig() = default ;
    ListRulesResponseBodyRulesRuleConditionsQueryStringConfig& operator=(const ListRulesResponseBodyRulesRuleConditionsQueryStringConfig &) = default ;
    ListRulesResponseBodyRulesRuleConditionsQueryStringConfig& operator=(ListRulesResponseBodyRulesRuleConditionsQueryStringConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->values_ != nullptr; };
    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<Models::ListRulesResponseBodyRulesRuleConditionsQueryStringConfigValues> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<Models::ListRulesResponseBodyRulesRuleConditionsQueryStringConfigValues>) };
    inline vector<Models::ListRulesResponseBodyRulesRuleConditionsQueryStringConfigValues> values() { DARABONBA_PTR_GET(values_, vector<Models::ListRulesResponseBodyRulesRuleConditionsQueryStringConfigValues>) };
    inline ListRulesResponseBodyRulesRuleConditionsQueryStringConfig& setValues(const vector<Models::ListRulesResponseBodyRulesRuleConditionsQueryStringConfigValues> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline ListRulesResponseBodyRulesRuleConditionsQueryStringConfig& setValues(vector<Models::ListRulesResponseBodyRulesRuleConditionsQueryStringConfigValues> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The query string.
    std::shared_ptr<vector<Models::ListRulesResponseBodyRulesRuleConditionsQueryStringConfigValues>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif

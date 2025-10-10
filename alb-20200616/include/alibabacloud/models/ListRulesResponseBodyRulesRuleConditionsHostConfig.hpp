// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULECONDITIONSHOSTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULECONDITIONSHOSTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListRulesResponseBodyRulesRuleConditionsHostConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesResponseBodyRulesRuleConditionsHostConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesResponseBodyRulesRuleConditionsHostConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    ListRulesResponseBodyRulesRuleConditionsHostConfig() = default ;
    ListRulesResponseBodyRulesRuleConditionsHostConfig(const ListRulesResponseBodyRulesRuleConditionsHostConfig &) = default ;
    ListRulesResponseBodyRulesRuleConditionsHostConfig(ListRulesResponseBodyRulesRuleConditionsHostConfig &&) = default ;
    ListRulesResponseBodyRulesRuleConditionsHostConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesResponseBodyRulesRuleConditionsHostConfig() = default ;
    ListRulesResponseBodyRulesRuleConditionsHostConfig& operator=(const ListRulesResponseBodyRulesRuleConditionsHostConfig &) = default ;
    ListRulesResponseBodyRulesRuleConditionsHostConfig& operator=(ListRulesResponseBodyRulesRuleConditionsHostConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->values_ != nullptr; };
    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline ListRulesResponseBodyRulesRuleConditionsHostConfig& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline ListRulesResponseBodyRulesRuleConditionsHostConfig& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The hostnames.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif

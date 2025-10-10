// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULESREQUESTRULESRULECONDITIONSSOURCEIPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATERULESREQUESTRULESRULECONDITIONSSOURCEIPCONFIG_HPP_
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
  class CreateRulesRequestRulesRuleConditionsSourceIpConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRulesRequestRulesRuleConditionsSourceIpConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRulesRequestRulesRuleConditionsSourceIpConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    CreateRulesRequestRulesRuleConditionsSourceIpConfig() = default ;
    CreateRulesRequestRulesRuleConditionsSourceIpConfig(const CreateRulesRequestRulesRuleConditionsSourceIpConfig &) = default ;
    CreateRulesRequestRulesRuleConditionsSourceIpConfig(CreateRulesRequestRulesRuleConditionsSourceIpConfig &&) = default ;
    CreateRulesRequestRulesRuleConditionsSourceIpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRulesRequestRulesRuleConditionsSourceIpConfig() = default ;
    CreateRulesRequestRulesRuleConditionsSourceIpConfig& operator=(const CreateRulesRequestRulesRuleConditionsSourceIpConfig &) = default ;
    CreateRulesRequestRulesRuleConditionsSourceIpConfig& operator=(CreateRulesRequestRulesRuleConditionsSourceIpConfig &&) = default ;
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
    inline CreateRulesRequestRulesRuleConditionsSourceIpConfig& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline CreateRulesRequestRulesRuleConditionsSourceIpConfig& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULESRESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_CREATERULESRESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRulesResponseBodyRulesRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class CreateRulesResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    CreateRulesResponseBodyRules() = default ;
    CreateRulesResponseBodyRules(const CreateRulesResponseBodyRules &) = default ;
    CreateRulesResponseBodyRules(CreateRulesResponseBodyRules &&) = default ;
    CreateRulesResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRulesResponseBodyRules() = default ;
    CreateRulesResponseBodyRules& operator=(const CreateRulesResponseBodyRules &) = default ;
    CreateRulesResponseBodyRules& operator=(CreateRulesResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rule_ == nullptr; };
    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<Models::CreateRulesResponseBodyRulesRule> & rule() const { DARABONBA_PTR_GET_CONST(rule_, vector<Models::CreateRulesResponseBodyRulesRule>) };
    inline vector<Models::CreateRulesResponseBodyRulesRule> rule() { DARABONBA_PTR_GET(rule_, vector<Models::CreateRulesResponseBodyRulesRule>) };
    inline CreateRulesResponseBodyRules& setRule(const vector<Models::CreateRulesResponseBodyRulesRule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline CreateRulesResponseBodyRules& setRule(vector<Models::CreateRulesResponseBodyRulesRule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    std::shared_ptr<vector<Models::CreateRulesResponseBodyRulesRule>> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif

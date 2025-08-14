// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOCENRESPONSEBODYGRANTRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOCENRESPONSEBODYGRANTRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeGrantRulesToCenResponseBodyGrantRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGrantRulesToCenResponseBodyGrantRules& obj) { 
      DARABONBA_PTR_TO_JSON(GrantRule, grantRule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGrantRulesToCenResponseBodyGrantRules& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantRule, grantRule_);
    };
    DescribeGrantRulesToCenResponseBodyGrantRules() = default ;
    DescribeGrantRulesToCenResponseBodyGrantRules(const DescribeGrantRulesToCenResponseBodyGrantRules &) = default ;
    DescribeGrantRulesToCenResponseBodyGrantRules(DescribeGrantRulesToCenResponseBodyGrantRules &&) = default ;
    DescribeGrantRulesToCenResponseBodyGrantRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGrantRulesToCenResponseBodyGrantRules() = default ;
    DescribeGrantRulesToCenResponseBodyGrantRules& operator=(const DescribeGrantRulesToCenResponseBodyGrantRules &) = default ;
    DescribeGrantRulesToCenResponseBodyGrantRules& operator=(DescribeGrantRulesToCenResponseBodyGrantRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->grantRule_ != nullptr; };
    // grantRule Field Functions 
    bool hasGrantRule() const { return this->grantRule_ != nullptr;};
    void deleteGrantRule() { this->grantRule_ = nullptr;};
    inline const vector<Models::DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule> & grantRule() const { DARABONBA_PTR_GET_CONST(grantRule_, vector<Models::DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule>) };
    inline vector<Models::DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule> grantRule() { DARABONBA_PTR_GET(grantRule_, vector<Models::DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule>) };
    inline DescribeGrantRulesToCenResponseBodyGrantRules& setGrantRule(const vector<Models::DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule> & grantRule) { DARABONBA_PTR_SET_VALUE(grantRule_, grantRule) };
    inline DescribeGrantRulesToCenResponseBodyGrantRules& setGrantRule(vector<Models::DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule> && grantRule) { DARABONBA_PTR_SET_RVALUE(grantRule_, grantRule) };


  protected:
    std::shared_ptr<vector<Models::DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule>> grantRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif

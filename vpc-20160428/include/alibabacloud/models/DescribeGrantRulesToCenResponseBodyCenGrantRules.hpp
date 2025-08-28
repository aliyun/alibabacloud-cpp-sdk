// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOCENRESPONSEBODYCENGRANTRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOCENRESPONSEBODYCENGRANTRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeGrantRulesToCenResponseBodyCenGrantRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGrantRulesToCenResponseBodyCenGrantRules& obj) { 
      DARABONBA_PTR_TO_JSON(CbnGrantRule, cbnGrantRule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGrantRulesToCenResponseBodyCenGrantRules& obj) { 
      DARABONBA_PTR_FROM_JSON(CbnGrantRule, cbnGrantRule_);
    };
    DescribeGrantRulesToCenResponseBodyCenGrantRules() = default ;
    DescribeGrantRulesToCenResponseBodyCenGrantRules(const DescribeGrantRulesToCenResponseBodyCenGrantRules &) = default ;
    DescribeGrantRulesToCenResponseBodyCenGrantRules(DescribeGrantRulesToCenResponseBodyCenGrantRules &&) = default ;
    DescribeGrantRulesToCenResponseBodyCenGrantRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGrantRulesToCenResponseBodyCenGrantRules() = default ;
    DescribeGrantRulesToCenResponseBodyCenGrantRules& operator=(const DescribeGrantRulesToCenResponseBodyCenGrantRules &) = default ;
    DescribeGrantRulesToCenResponseBodyCenGrantRules& operator=(DescribeGrantRulesToCenResponseBodyCenGrantRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cbnGrantRule_ != nullptr; };
    // cbnGrantRule Field Functions 
    bool hasCbnGrantRule() const { return this->cbnGrantRule_ != nullptr;};
    void deleteCbnGrantRule() { this->cbnGrantRule_ = nullptr;};
    inline const vector<Models::DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule> & cbnGrantRule() const { DARABONBA_PTR_GET_CONST(cbnGrantRule_, vector<Models::DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule>) };
    inline vector<Models::DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule> cbnGrantRule() { DARABONBA_PTR_GET(cbnGrantRule_, vector<Models::DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule>) };
    inline DescribeGrantRulesToCenResponseBodyCenGrantRules& setCbnGrantRule(const vector<Models::DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule> & cbnGrantRule) { DARABONBA_PTR_SET_VALUE(cbnGrantRule_, cbnGrantRule) };
    inline DescribeGrantRulesToCenResponseBodyCenGrantRules& setCbnGrantRule(vector<Models::DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule> && cbnGrantRule) { DARABONBA_PTR_SET_RVALUE(cbnGrantRule_, cbnGrantRule) };


  protected:
    std::shared_ptr<vector<Models::DescribeGrantRulesToCenResponseBodyCenGrantRulesCbnGrantRule>> cbnGrantRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif

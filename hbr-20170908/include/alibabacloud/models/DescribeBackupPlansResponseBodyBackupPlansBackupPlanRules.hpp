// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLANRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLANRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules& obj) { 
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules(const DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules(DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules &&) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules& operator=(const DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules& operator=(DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rule_ != nullptr; };
    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule> & rule() const { DARABONBA_PTR_GET_CONST(rule_, vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule>) };
    inline vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule> rule() { DARABONBA_PTR_GET(rule_, vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule>) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules& setRule(const vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules& setRule(vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    std::shared_ptr<vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule>> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif

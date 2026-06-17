// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPSRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPSRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeIPSRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPSRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttackApp, attackApp_);
      DARABONBA_PTR_TO_JSON(AttackAppCategory, attackAppCategory_);
      DARABONBA_PTR_TO_JSON(AttackApps, attackApps_);
      DARABONBA_PTR_TO_JSON(AttackType, attackType_);
      DARABONBA_PTR_TO_JSON(Cve, cve_);
      DARABONBA_PTR_TO_JSON(DefaultAction, defaultAction_);
      DARABONBA_PTR_TO_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryModify, queryModify_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(RuleClass, ruleClass_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleLevel, ruleLevel_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPSRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackApp, attackApp_);
      DARABONBA_PTR_FROM_JSON(AttackAppCategory, attackAppCategory_);
      DARABONBA_PTR_FROM_JSON(AttackApps, attackApps_);
      DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
      DARABONBA_PTR_FROM_JSON(Cve, cve_);
      DARABONBA_PTR_FROM_JSON(DefaultAction, defaultAction_);
      DARABONBA_PTR_FROM_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryModify, queryModify_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(RuleClass, ruleClass_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleLevel, ruleLevel_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
    };
    DescribeIPSRulesRequest() = default ;
    DescribeIPSRulesRequest(const DescribeIPSRulesRequest &) = default ;
    DescribeIPSRulesRequest(DescribeIPSRulesRequest &&) = default ;
    DescribeIPSRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPSRulesRequest() = default ;
    DescribeIPSRulesRequest& operator=(const DescribeIPSRulesRequest &) = default ;
    DescribeIPSRulesRequest& operator=(DescribeIPSRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackApp_ == nullptr
        && this->attackAppCategory_ == nullptr && this->attackApps_ == nullptr && this->attackType_ == nullptr && this->cve_ == nullptr && this->defaultAction_ == nullptr
        && this->firewallType_ == nullptr && this->lang_ == nullptr && this->order_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr
        && this->queryModify_ == nullptr && this->ruleAction_ == nullptr && this->ruleClass_ == nullptr && this->ruleId_ == nullptr && this->ruleLevel_ == nullptr
        && this->ruleName_ == nullptr && this->ruleType_ == nullptr && this->sort_ == nullptr && this->sourceIp_ == nullptr && this->vpcFirewallId_ == nullptr; };
    // attackApp Field Functions 
    bool hasAttackApp() const { return this->attackApp_ != nullptr;};
    void deleteAttackApp() { this->attackApp_ = nullptr;};
    inline string getAttackApp() const { DARABONBA_PTR_GET_DEFAULT(attackApp_, "") };
    inline DescribeIPSRulesRequest& setAttackApp(string attackApp) { DARABONBA_PTR_SET_VALUE(attackApp_, attackApp) };


    // attackAppCategory Field Functions 
    bool hasAttackAppCategory() const { return this->attackAppCategory_ != nullptr;};
    void deleteAttackAppCategory() { this->attackAppCategory_ = nullptr;};
    inline const vector<string> & getAttackAppCategory() const { DARABONBA_PTR_GET_CONST(attackAppCategory_, vector<string>) };
    inline vector<string> getAttackAppCategory() { DARABONBA_PTR_GET(attackAppCategory_, vector<string>) };
    inline DescribeIPSRulesRequest& setAttackAppCategory(const vector<string> & attackAppCategory) { DARABONBA_PTR_SET_VALUE(attackAppCategory_, attackAppCategory) };
    inline DescribeIPSRulesRequest& setAttackAppCategory(vector<string> && attackAppCategory) { DARABONBA_PTR_SET_RVALUE(attackAppCategory_, attackAppCategory) };


    // attackApps Field Functions 
    bool hasAttackApps() const { return this->attackApps_ != nullptr;};
    void deleteAttackApps() { this->attackApps_ = nullptr;};
    inline const vector<string> & getAttackApps() const { DARABONBA_PTR_GET_CONST(attackApps_, vector<string>) };
    inline vector<string> getAttackApps() { DARABONBA_PTR_GET(attackApps_, vector<string>) };
    inline DescribeIPSRulesRequest& setAttackApps(const vector<string> & attackApps) { DARABONBA_PTR_SET_VALUE(attackApps_, attackApps) };
    inline DescribeIPSRulesRequest& setAttackApps(vector<string> && attackApps) { DARABONBA_PTR_SET_RVALUE(attackApps_, attackApps) };


    // attackType Field Functions 
    bool hasAttackType() const { return this->attackType_ != nullptr;};
    void deleteAttackType() { this->attackType_ = nullptr;};
    inline string getAttackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, "") };
    inline DescribeIPSRulesRequest& setAttackType(string attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


    // cve Field Functions 
    bool hasCve() const { return this->cve_ != nullptr;};
    void deleteCve() { this->cve_ = nullptr;};
    inline string getCve() const { DARABONBA_PTR_GET_DEFAULT(cve_, "") };
    inline DescribeIPSRulesRequest& setCve(string cve) { DARABONBA_PTR_SET_VALUE(cve_, cve) };


    // defaultAction Field Functions 
    bool hasDefaultAction() const { return this->defaultAction_ != nullptr;};
    void deleteDefaultAction() { this->defaultAction_ = nullptr;};
    inline string getDefaultAction() const { DARABONBA_PTR_GET_DEFAULT(defaultAction_, "") };
    inline DescribeIPSRulesRequest& setDefaultAction(string defaultAction) { DARABONBA_PTR_SET_VALUE(defaultAction_, defaultAction) };


    // firewallType Field Functions 
    bool hasFirewallType() const { return this->firewallType_ != nullptr;};
    void deleteFirewallType() { this->firewallType_ = nullptr;};
    inline string getFirewallType() const { DARABONBA_PTR_GET_DEFAULT(firewallType_, "") };
    inline DescribeIPSRulesRequest& setFirewallType(string firewallType) { DARABONBA_PTR_SET_VALUE(firewallType_, firewallType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeIPSRulesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeIPSRulesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline DescribeIPSRulesRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeIPSRulesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryModify Field Functions 
    bool hasQueryModify() const { return this->queryModify_ != nullptr;};
    void deleteQueryModify() { this->queryModify_ = nullptr;};
    inline string getQueryModify() const { DARABONBA_PTR_GET_DEFAULT(queryModify_, "") };
    inline DescribeIPSRulesRequest& setQueryModify(string queryModify) { DARABONBA_PTR_SET_VALUE(queryModify_, queryModify) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline string getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
    inline DescribeIPSRulesRequest& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // ruleClass Field Functions 
    bool hasRuleClass() const { return this->ruleClass_ != nullptr;};
    void deleteRuleClass() { this->ruleClass_ = nullptr;};
    inline string getRuleClass() const { DARABONBA_PTR_GET_DEFAULT(ruleClass_, "") };
    inline DescribeIPSRulesRequest& setRuleClass(string ruleClass) { DARABONBA_PTR_SET_VALUE(ruleClass_, ruleClass) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeIPSRulesRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleLevel Field Functions 
    bool hasRuleLevel() const { return this->ruleLevel_ != nullptr;};
    void deleteRuleLevel() { this->ruleLevel_ = nullptr;};
    inline int64_t getRuleLevel() const { DARABONBA_PTR_GET_DEFAULT(ruleLevel_, 0L) };
    inline DescribeIPSRulesRequest& setRuleLevel(int64_t ruleLevel) { DARABONBA_PTR_SET_VALUE(ruleLevel_, ruleLevel) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeIPSRulesRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline DescribeIPSRulesRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline DescribeIPSRulesRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeIPSRulesRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DescribeIPSRulesRequest& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


  protected:
    // The application targeted by the attack.
    shared_ptr<string> attackApp_ {};
    // The categories of applications targeted by attacks.
    shared_ptr<vector<string>> attackAppCategory_ {};
    // The applications targeted by attacks.
    shared_ptr<vector<string>> attackApps_ {};
    // The attack type.
    shared_ptr<string> attackType_ {};
    // The CVE ID.
    shared_ptr<string> cve_ {};
    // The status of the rule.
    shared_ptr<string> defaultAction_ {};
    // The type of firewall.
    shared_ptr<string> firewallType_ {};
    // The language of the request and response.
    shared_ptr<string> lang_ {};
    // The sort order.
    shared_ptr<string> order_ {};
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // Indicates whether to retrieve only modified rules.
    shared_ptr<string> queryModify_ {};
    // The rule action.
    shared_ptr<string> ruleAction_ {};
    // The inspection mode.
    shared_ptr<string> ruleClass_ {};
    // The rule ID.
    shared_ptr<string> ruleId_ {};
    // The rule level.
    shared_ptr<int64_t> ruleLevel_ {};
    // The rule name.
    shared_ptr<string> ruleName_ {};
    // The rule type.
    // 
    // This parameter is required.
    shared_ptr<string> ruleType_ {};
    // The field to sort by.
    shared_ptr<string> sort_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The instance ID of the VPC firewall.
    shared_ptr<string> vpcFirewallId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

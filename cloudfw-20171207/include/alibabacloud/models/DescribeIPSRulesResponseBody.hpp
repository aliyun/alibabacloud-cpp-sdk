// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPSRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPSRULESRESPONSEBODY_HPP_
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
  class DescribeIPSRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPSRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DropCount, dropCount_);
      DARABONBA_PTR_TO_JSON(HighRiskCount, highRiskCount_);
      DARABONBA_PTR_TO_JSON(OpenCount, openCount_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserDefineCount, userDefineCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPSRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DropCount, dropCount_);
      DARABONBA_PTR_FROM_JSON(HighRiskCount, highRiskCount_);
      DARABONBA_PTR_FROM_JSON(OpenCount, openCount_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserDefineCount, userDefineCount_);
    };
    DescribeIPSRulesResponseBody() = default ;
    DescribeIPSRulesResponseBody(const DescribeIPSRulesResponseBody &) = default ;
    DescribeIPSRulesResponseBody(DescribeIPSRulesResponseBody &&) = default ;
    DescribeIPSRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPSRulesResponseBody() = default ;
    DescribeIPSRulesResponseBody& operator=(const DescribeIPSRulesResponseBody &) = default ;
    DescribeIPSRulesResponseBody& operator=(DescribeIPSRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(AttackApp, attackApp_);
        DARABONBA_PTR_TO_JSON(AttackType, attackType_);
        DARABONBA_PTR_TO_JSON(CurrentMode, currentMode_);
        DARABONBA_PTR_TO_JSON(Cve, cve_);
        DARABONBA_PTR_TO_JSON(DefaultMode, defaultMode_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(RuleClass, ruleClass_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleLevel, ruleLevel_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleUuid, ruleUuid_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserDefined, userDefined_);
        DARABONBA_PTR_TO_JSON(UserStatus, userStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackApp, attackApp_);
        DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
        DARABONBA_PTR_FROM_JSON(CurrentMode, currentMode_);
        DARABONBA_PTR_FROM_JSON(Cve, cve_);
        DARABONBA_PTR_FROM_JSON(DefaultMode, defaultMode_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(RuleClass, ruleClass_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleLevel, ruleLevel_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleUuid, ruleUuid_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserDefined, userDefined_);
        DARABONBA_PTR_FROM_JSON(UserStatus, userStatus_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attackApp_ == nullptr
        && this->attackType_ == nullptr && this->currentMode_ == nullptr && this->cve_ == nullptr && this->defaultMode_ == nullptr && this->description_ == nullptr
        && this->ruleClass_ == nullptr && this->ruleId_ == nullptr && this->ruleLevel_ == nullptr && this->ruleName_ == nullptr && this->ruleUuid_ == nullptr
        && this->updateTime_ == nullptr && this->userDefined_ == nullptr && this->userStatus_ == nullptr; };
      // attackApp Field Functions 
      bool hasAttackApp() const { return this->attackApp_ != nullptr;};
      void deleteAttackApp() { this->attackApp_ = nullptr;};
      inline string getAttackApp() const { DARABONBA_PTR_GET_DEFAULT(attackApp_, "") };
      inline Rules& setAttackApp(string attackApp) { DARABONBA_PTR_SET_VALUE(attackApp_, attackApp) };


      // attackType Field Functions 
      bool hasAttackType() const { return this->attackType_ != nullptr;};
      void deleteAttackType() { this->attackType_ = nullptr;};
      inline string getAttackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, "") };
      inline Rules& setAttackType(string attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


      // currentMode Field Functions 
      bool hasCurrentMode() const { return this->currentMode_ != nullptr;};
      void deleteCurrentMode() { this->currentMode_ = nullptr;};
      inline string getCurrentMode() const { DARABONBA_PTR_GET_DEFAULT(currentMode_, "") };
      inline Rules& setCurrentMode(string currentMode) { DARABONBA_PTR_SET_VALUE(currentMode_, currentMode) };


      // cve Field Functions 
      bool hasCve() const { return this->cve_ != nullptr;};
      void deleteCve() { this->cve_ = nullptr;};
      inline string getCve() const { DARABONBA_PTR_GET_DEFAULT(cve_, "") };
      inline Rules& setCve(string cve) { DARABONBA_PTR_SET_VALUE(cve_, cve) };


      // defaultMode Field Functions 
      bool hasDefaultMode() const { return this->defaultMode_ != nullptr;};
      void deleteDefaultMode() { this->defaultMode_ = nullptr;};
      inline string getDefaultMode() const { DARABONBA_PTR_GET_DEFAULT(defaultMode_, "") };
      inline Rules& setDefaultMode(string defaultMode) { DARABONBA_PTR_SET_VALUE(defaultMode_, defaultMode) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Rules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ruleClass Field Functions 
      bool hasRuleClass() const { return this->ruleClass_ != nullptr;};
      void deleteRuleClass() { this->ruleClass_ = nullptr;};
      inline int32_t getRuleClass() const { DARABONBA_PTR_GET_DEFAULT(ruleClass_, 0) };
      inline Rules& setRuleClass(int32_t ruleClass) { DARABONBA_PTR_SET_VALUE(ruleClass_, ruleClass) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline Rules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleLevel Field Functions 
      bool hasRuleLevel() const { return this->ruleLevel_ != nullptr;};
      void deleteRuleLevel() { this->ruleLevel_ = nullptr;};
      inline int64_t getRuleLevel() const { DARABONBA_PTR_GET_DEFAULT(ruleLevel_, 0L) };
      inline Rules& setRuleLevel(int64_t ruleLevel) { DARABONBA_PTR_SET_VALUE(ruleLevel_, ruleLevel) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Rules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleUuid Field Functions 
      bool hasRuleUuid() const { return this->ruleUuid_ != nullptr;};
      void deleteRuleUuid() { this->ruleUuid_ = nullptr;};
      inline string getRuleUuid() const { DARABONBA_PTR_GET_DEFAULT(ruleUuid_, "") };
      inline Rules& setRuleUuid(string ruleUuid) { DARABONBA_PTR_SET_VALUE(ruleUuid_, ruleUuid) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Rules& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userDefined Field Functions 
      bool hasUserDefined() const { return this->userDefined_ != nullptr;};
      void deleteUserDefined() { this->userDefined_ = nullptr;};
      inline string getUserDefined() const { DARABONBA_PTR_GET_DEFAULT(userDefined_, "") };
      inline Rules& setUserDefined(string userDefined) { DARABONBA_PTR_SET_VALUE(userDefined_, userDefined) };


      // userStatus Field Functions 
      bool hasUserStatus() const { return this->userStatus_ != nullptr;};
      void deleteUserStatus() { this->userStatus_ = nullptr;};
      inline int32_t getUserStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, 0) };
      inline Rules& setUserStatus(int32_t userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


    protected:
      // The target application.
      shared_ptr<string> attackApp_ {};
      // The attack type.
      shared_ptr<string> attackType_ {};
      // The current action.
      shared_ptr<string> currentMode_ {};
      // The CVE ID.
      shared_ptr<string> cve_ {};
      // The default action.
      shared_ptr<string> defaultMode_ {};
      // A description of the rule.
      shared_ptr<string> description_ {};
      // The engine mode.
      // 
      // This parameter takes effect only when `DefaultMode` is set to `drop`.
      shared_ptr<int32_t> ruleClass_ {};
      // The rule ID.
      shared_ptr<string> ruleId_ {};
      // The rule level.
      shared_ptr<int64_t> ruleLevel_ {};
      // The rule name.
      shared_ptr<string> ruleName_ {};
      // The rule UUID.
      shared_ptr<string> ruleUuid_ {};
      // The UNIX timestamp for when the rule was last updated.
      shared_ptr<int64_t> updateTime_ {};
      // Specifies whether the rule is user-defined.
      shared_ptr<string> userDefined_ {};
      // The user-defined status of the rule.
      shared_ptr<int32_t> userStatus_ {};
    };

    virtual bool empty() const override { return this->dropCount_ == nullptr
        && this->highRiskCount_ == nullptr && this->openCount_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->rules_ == nullptr && this->totalCount_ == nullptr && this->userDefineCount_ == nullptr; };
    // dropCount Field Functions 
    bool hasDropCount() const { return this->dropCount_ != nullptr;};
    void deleteDropCount() { this->dropCount_ = nullptr;};
    inline int64_t getDropCount() const { DARABONBA_PTR_GET_DEFAULT(dropCount_, 0L) };
    inline DescribeIPSRulesResponseBody& setDropCount(int64_t dropCount) { DARABONBA_PTR_SET_VALUE(dropCount_, dropCount) };


    // highRiskCount Field Functions 
    bool hasHighRiskCount() const { return this->highRiskCount_ != nullptr;};
    void deleteHighRiskCount() { this->highRiskCount_ = nullptr;};
    inline int64_t getHighRiskCount() const { DARABONBA_PTR_GET_DEFAULT(highRiskCount_, 0L) };
    inline DescribeIPSRulesResponseBody& setHighRiskCount(int64_t highRiskCount) { DARABONBA_PTR_SET_VALUE(highRiskCount_, highRiskCount) };


    // openCount Field Functions 
    bool hasOpenCount() const { return this->openCount_ != nullptr;};
    void deleteOpenCount() { this->openCount_ = nullptr;};
    inline int64_t getOpenCount() const { DARABONBA_PTR_GET_DEFAULT(openCount_, 0L) };
    inline DescribeIPSRulesResponseBody& setOpenCount(int64_t openCount) { DARABONBA_PTR_SET_VALUE(openCount_, openCount) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline DescribeIPSRulesResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeIPSRulesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIPSRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<DescribeIPSRulesResponseBody::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<DescribeIPSRulesResponseBody::Rules>) };
    inline vector<DescribeIPSRulesResponseBody::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<DescribeIPSRulesResponseBody::Rules>) };
    inline DescribeIPSRulesResponseBody& setRules(const vector<DescribeIPSRulesResponseBody::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeIPSRulesResponseBody& setRules(vector<DescribeIPSRulesResponseBody::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeIPSRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userDefineCount Field Functions 
    bool hasUserDefineCount() const { return this->userDefineCount_ != nullptr;};
    void deleteUserDefineCount() { this->userDefineCount_ = nullptr;};
    inline int64_t getUserDefineCount() const { DARABONBA_PTR_GET_DEFAULT(userDefineCount_, 0L) };
    inline DescribeIPSRulesResponseBody& setUserDefineCount(int64_t userDefineCount) { DARABONBA_PTR_SET_VALUE(userDefineCount_, userDefineCount) };


  protected:
    // The number of rules that have the `drop` action.
    shared_ptr<int64_t> dropCount_ {};
    // The number of high-risk rules.
    shared_ptr<int64_t> highRiskCount_ {};
    // The total number of enabled rules.
    shared_ptr<int64_t> openCount_ {};
    // The page number.
    shared_ptr<int64_t> pageNo_ {};
    // The page size.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of rules.
    shared_ptr<vector<DescribeIPSRulesResponseBody::Rules>> rules_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
    // The total number of user-defined rules.
    shared_ptr<int64_t> userDefineCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

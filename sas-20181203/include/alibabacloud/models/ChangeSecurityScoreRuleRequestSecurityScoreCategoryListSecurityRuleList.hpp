// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGESECURITYSCORERULEREQUESTSECURITYSCORECATEGORYLISTSECURITYRULELIST_HPP_
#define ALIBABACLOUD_MODELS_CHANGESECURITYSCORERULEREQUESTSECURITYSCORECATEGORYLISTSECURITYRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(SecurityScoreItemList, securityScoreItemList_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(SecurityScoreItemList, securityScoreItemList_);
    };
    ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList() = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList(const ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList &) = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList(ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList &&) = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList() = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList& operator=(const ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList &) = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList& operator=(ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleType_ == nullptr
        && return this->score_ == nullptr && return this->securityScoreItemList_ == nullptr; };
    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // securityScoreItemList Field Functions 
    bool hasSecurityScoreItemList() const { return this->securityScoreItemList_ != nullptr;};
    void deleteSecurityScoreItemList() { this->securityScoreItemList_ = nullptr;};
    inline const vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList> & securityScoreItemList() const { DARABONBA_PTR_GET_CONST(securityScoreItemList_, vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList>) };
    inline vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList> securityScoreItemList() { DARABONBA_PTR_GET(securityScoreItemList_, vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList>) };
    inline ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList& setSecurityScoreItemList(const vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList> & securityScoreItemList) { DARABONBA_PTR_SET_VALUE(securityScoreItemList_, securityScoreItemList) };
    inline ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList& setSecurityScoreItemList(vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList> && securityScoreItemList) { DARABONBA_PTR_SET_RVALUE(securityScoreItemList_, securityScoreItemList) };


  protected:
    // The deducted module that is supported by the security score feature. The type of the sub-deduction item. Valid values:
    // 
    // *   **SS_SAS_WEAK_PW**: unhandled weak password risk.
    // *   **SS_SAS_ALARM**: unhandled alert in Security Center.
    // *   **SS_SAS_EMG_VUL**: unfixed urgent vulnerability.
    // *   **SS_SAS_APP_VUL**: unfixed application vulnerability.
    // *   **SS_SAS_SYS_VUL**: unfixed system vulnerability.
    // *   **SS_SAS_CLOUD_HC**: unhandled cloud security posture management (CSPM) risk.
    // *   **SS_SDDP_DATA_RISK**: unhandled data security risk.
    // *   **SS_WAF_API_RISK**: unhandled API security risk.
    // *   **SS_DDOS_BH_ASSET**: asset on which blackhole filtering is triggered.
    // *   **SS_SAS_AK_LEAK**: unhandled AK/SK leak event.
    // *   **SS_PRODUCT_CONNECT**: security service not integrated.
    // *   **SS_KEY_CONFIG**: key feature configuration.
    // *   **SS_PRODUCT_EXPIRE**: service that is about to expire.
    // *   **SS_AI_RISK**: AI application risk.
    std::shared_ptr<string> ruleType_ = nullptr;
    // The threshold of deduction for the security score rule type.
    // 
    // >  Valid values: 0 to the deduction threshold of the deduction module.
    std::shared_ptr<int32_t> score_ = nullptr;
    // The sub-deduction items of the security score rule.
    std::shared_ptr<vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList>> securityScoreItemList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

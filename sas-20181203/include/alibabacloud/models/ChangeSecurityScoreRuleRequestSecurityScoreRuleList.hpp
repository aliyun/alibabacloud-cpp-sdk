// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGESECURITYSCORERULEREQUESTSECURITYSCORERULELIST_HPP_
#define ALIBABACLOUD_MODELS_CHANGESECURITYSCORERULEREQUESTSECURITYSCORERULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeSecurityScoreRuleRequestSecurityScoreRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeSecurityScoreRuleRequestSecurityScoreRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(SecurityScoreItemList, securityScoreItemList_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeSecurityScoreRuleRequestSecurityScoreRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(SecurityScoreItemList, securityScoreItemList_);
    };
    ChangeSecurityScoreRuleRequestSecurityScoreRuleList() = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreRuleList(const ChangeSecurityScoreRuleRequestSecurityScoreRuleList &) = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreRuleList(ChangeSecurityScoreRuleRequestSecurityScoreRuleList &&) = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeSecurityScoreRuleRequestSecurityScoreRuleList() = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreRuleList& operator=(const ChangeSecurityScoreRuleRequestSecurityScoreRuleList &) = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreRuleList& operator=(ChangeSecurityScoreRuleRequestSecurityScoreRuleList &&) = default ;
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
    inline ChangeSecurityScoreRuleRequestSecurityScoreRuleList& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline ChangeSecurityScoreRuleRequestSecurityScoreRuleList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // securityScoreItemList Field Functions 
    bool hasSecurityScoreItemList() const { return this->securityScoreItemList_ != nullptr;};
    void deleteSecurityScoreItemList() { this->securityScoreItemList_ = nullptr;};
    inline const vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList> & securityScoreItemList() const { DARABONBA_PTR_GET_CONST(securityScoreItemList_, vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList>) };
    inline vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList> securityScoreItemList() { DARABONBA_PTR_GET(securityScoreItemList_, vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList>) };
    inline ChangeSecurityScoreRuleRequestSecurityScoreRuleList& setSecurityScoreItemList(const vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList> & securityScoreItemList) { DARABONBA_PTR_SET_VALUE(securityScoreItemList_, securityScoreItemList) };
    inline ChangeSecurityScoreRuleRequestSecurityScoreRuleList& setSecurityScoreItemList(vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList> && securityScoreItemList) { DARABONBA_PTR_SET_RVALUE(securityScoreItemList_, securityScoreItemList) };


  protected:
    // The type of the security score rule. Valid values:
    // 
    // *   SS_REINFORCE: issue in key feature configuration
    // *   SS_ALARM: unhandled alert
    // *   SS_VUL: unfixed vulnerability
    // *   SS_HC: baseline risk
    // *   SS_CLOUD_HC: risk item of configuration assessment
    // *   SS_AK: risk of AccessKey pair leaks
    std::shared_ptr<string> ruleType_ = nullptr;
    // The deduction threshold of the deduction module.
    // 
    // >  Valid values: 0 to 100. The sum of the deduction thresholds for all deduction modules must be equal to 100.
    std::shared_ptr<int32_t> score_ = nullptr;
    // The deduction items of the deduction module.
    std::shared_ptr<vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList>> securityScoreItemList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

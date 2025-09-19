// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYSCORERULERESPONSEBODYSECURITYSCORECATEGORYLISTSECURITYRULELIST_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYSCORERULERESPONSEBODYSECURITYSCORECATEGORYLISTSECURITYRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(SecurityScoreItemList, securityScoreItemList_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(SecurityScoreItemList, securityScoreItemList_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList() = default ;
    GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList(const GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList &) = default ;
    GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList(GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList &&) = default ;
    GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList() = default ;
    GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList& operator=(const GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList &) = default ;
    GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList& operator=(GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleType_ != nullptr
        && this->score_ != nullptr && this->securityScoreItemList_ != nullptr && this->title_ != nullptr; };
    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // securityScoreItemList Field Functions 
    bool hasSecurityScoreItemList() const { return this->securityScoreItemList_ != nullptr;};
    void deleteSecurityScoreItemList() { this->securityScoreItemList_ = nullptr;};
    inline const vector<Models::GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList> & securityScoreItemList() const { DARABONBA_PTR_GET_CONST(securityScoreItemList_, vector<Models::GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList>) };
    inline vector<Models::GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList> securityScoreItemList() { DARABONBA_PTR_GET(securityScoreItemList_, vector<Models::GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList>) };
    inline GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList& setSecurityScoreItemList(const vector<Models::GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList> & securityScoreItemList) { DARABONBA_PTR_SET_VALUE(securityScoreItemList_, securityScoreItemList) };
    inline GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList& setSecurityScoreItemList(vector<Models::GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList> && securityScoreItemList) { DARABONBA_PTR_SET_RVALUE(securityScoreItemList_, securityScoreItemList) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The type of the security score rule.
    std::shared_ptr<string> ruleType_ = nullptr;
    // The threshold of deduction for the security score rule type.
    std::shared_ptr<int32_t> score_ = nullptr;
    // The sub-deduction items of the security score rule.
    std::shared_ptr<vector<Models::GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList>> securityScoreItemList_ = nullptr;
    // The name of the security score rule type.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

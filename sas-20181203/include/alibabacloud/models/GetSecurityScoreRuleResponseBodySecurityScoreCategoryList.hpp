// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYSCORERULERESPONSEBODYSECURITYSCORECATEGORYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYSCORERULERESPONSEBODYSECURITYSCORECATEGORYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSecurityScoreRuleResponseBodySecurityScoreCategoryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityScoreRuleResponseBodySecurityScoreCategoryList& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(SecurityRuleList, securityRuleList_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityScoreRuleResponseBodySecurityScoreCategoryList& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(SecurityRuleList, securityRuleList_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetSecurityScoreRuleResponseBodySecurityScoreCategoryList() = default ;
    GetSecurityScoreRuleResponseBodySecurityScoreCategoryList(const GetSecurityScoreRuleResponseBodySecurityScoreCategoryList &) = default ;
    GetSecurityScoreRuleResponseBodySecurityScoreCategoryList(GetSecurityScoreRuleResponseBodySecurityScoreCategoryList &&) = default ;
    GetSecurityScoreRuleResponseBodySecurityScoreCategoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityScoreRuleResponseBodySecurityScoreCategoryList() = default ;
    GetSecurityScoreRuleResponseBodySecurityScoreCategoryList& operator=(const GetSecurityScoreRuleResponseBodySecurityScoreCategoryList &) = default ;
    GetSecurityScoreRuleResponseBodySecurityScoreCategoryList& operator=(GetSecurityScoreRuleResponseBodySecurityScoreCategoryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->score_ != nullptr && this->securityRuleList_ != nullptr && this->title_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetSecurityScoreRuleResponseBodySecurityScoreCategoryList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline GetSecurityScoreRuleResponseBodySecurityScoreCategoryList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // securityRuleList Field Functions 
    bool hasSecurityRuleList() const { return this->securityRuleList_ != nullptr;};
    void deleteSecurityRuleList() { this->securityRuleList_ = nullptr;};
    inline const vector<Models::GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList> & securityRuleList() const { DARABONBA_PTR_GET_CONST(securityRuleList_, vector<Models::GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList>) };
    inline vector<Models::GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList> securityRuleList() { DARABONBA_PTR_GET(securityRuleList_, vector<Models::GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList>) };
    inline GetSecurityScoreRuleResponseBodySecurityScoreCategoryList& setSecurityRuleList(const vector<Models::GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList> & securityRuleList) { DARABONBA_PTR_SET_VALUE(securityRuleList_, securityRuleList) };
    inline GetSecurityScoreRuleResponseBodySecurityScoreCategoryList& setSecurityRuleList(vector<Models::GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList> && securityRuleList) { DARABONBA_PTR_SET_RVALUE(securityRuleList_, securityRuleList) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetSecurityScoreRuleResponseBodySecurityScoreCategoryList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The category of the security score rule. Valid values:
    // 
    // *   **SS_SAS_HANDLE**: security governance.
    // *   **SS_SAS_RESPOND**: security response.
    std::shared_ptr<string> category_ = nullptr;
    // The threshold of deduction for the security score rule type.
    std::shared_ptr<int32_t> score_ = nullptr;
    // The deduction items of the security score rule.
    std::shared_ptr<vector<Models::GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleList>> securityRuleList_ = nullptr;
    // The category of the security score rule.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

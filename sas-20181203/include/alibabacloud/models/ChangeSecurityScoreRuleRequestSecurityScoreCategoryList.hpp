// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGESECURITYSCORERULEREQUESTSECURITYSCORECATEGORYLIST_HPP_
#define ALIBABACLOUD_MODELS_CHANGESECURITYSCORERULEREQUESTSECURITYSCORECATEGORYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeSecurityScoreRuleRequestSecurityScoreCategoryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeSecurityScoreRuleRequestSecurityScoreCategoryList& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_TO_JSON(SecurityRuleList, securityRuleList_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeSecurityScoreRuleRequestSecurityScoreCategoryList& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_FROM_JSON(SecurityRuleList, securityRuleList_);
    };
    ChangeSecurityScoreRuleRequestSecurityScoreCategoryList() = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreCategoryList(const ChangeSecurityScoreRuleRequestSecurityScoreCategoryList &) = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreCategoryList(ChangeSecurityScoreRuleRequestSecurityScoreCategoryList &&) = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreCategoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeSecurityScoreRuleRequestSecurityScoreCategoryList() = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreCategoryList& operator=(const ChangeSecurityScoreRuleRequestSecurityScoreCategoryList &) = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreCategoryList& operator=(ChangeSecurityScoreRuleRequestSecurityScoreCategoryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->scoreThreshold_ == nullptr && return this->securityRuleList_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ChangeSecurityScoreRuleRequestSecurityScoreCategoryList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // scoreThreshold Field Functions 
    bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
    void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
    inline int32_t scoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, 0) };
    inline ChangeSecurityScoreRuleRequestSecurityScoreCategoryList& setScoreThreshold(int32_t scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


    // securityRuleList Field Functions 
    bool hasSecurityRuleList() const { return this->securityRuleList_ != nullptr;};
    void deleteSecurityRuleList() { this->securityRuleList_ = nullptr;};
    inline const vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList> & securityRuleList() const { DARABONBA_PTR_GET_CONST(securityRuleList_, vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList>) };
    inline vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList> securityRuleList() { DARABONBA_PTR_GET(securityRuleList_, vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList>) };
    inline ChangeSecurityScoreRuleRequestSecurityScoreCategoryList& setSecurityRuleList(const vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList> & securityRuleList) { DARABONBA_PTR_SET_VALUE(securityRuleList_, securityRuleList) };
    inline ChangeSecurityScoreRuleRequestSecurityScoreCategoryList& setSecurityRuleList(vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList> && securityRuleList) { DARABONBA_PTR_SET_RVALUE(securityRuleList_, securityRuleList) };


  protected:
    // The category of the security score rule. Valid values:
    // 
    // *   **SS_SAS_HANDLE**: security governance.
    // *   **SS_SAS_RESPOND**: security response.
    std::shared_ptr<string> category_ = nullptr;
    // The threshold of deduction for the security score rule type.
    // 
    // >  Valid values: 0 to 100. The sum of the deduction thresholds for all deduction modules must be equal to 100.
    std::shared_ptr<int32_t> scoreThreshold_ = nullptr;
    // The deduction items of the security score rule.
    std::shared_ptr<vector<Models::ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleList>> securityRuleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGESECURITYSCORERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGESECURITYSCORERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeSecurityScoreRuleRequestSecurityScoreCategoryList.hpp>
#include <alibabacloud/models/ChangeSecurityScoreRuleRequestSecurityScoreRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeSecurityScoreRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeSecurityScoreRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalType, calType_);
      DARABONBA_PTR_TO_JSON(ResetSecurityScoreRule, resetSecurityScoreRule_);
      DARABONBA_PTR_TO_JSON(SecurityScoreCategoryList, securityScoreCategoryList_);
      DARABONBA_PTR_TO_JSON(SecurityScoreRuleList, securityScoreRuleList_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeSecurityScoreRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalType, calType_);
      DARABONBA_PTR_FROM_JSON(ResetSecurityScoreRule, resetSecurityScoreRule_);
      DARABONBA_PTR_FROM_JSON(SecurityScoreCategoryList, securityScoreCategoryList_);
      DARABONBA_PTR_FROM_JSON(SecurityScoreRuleList, securityScoreRuleList_);
    };
    ChangeSecurityScoreRuleRequest() = default ;
    ChangeSecurityScoreRuleRequest(const ChangeSecurityScoreRuleRequest &) = default ;
    ChangeSecurityScoreRuleRequest(ChangeSecurityScoreRuleRequest &&) = default ;
    ChangeSecurityScoreRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeSecurityScoreRuleRequest() = default ;
    ChangeSecurityScoreRuleRequest& operator=(const ChangeSecurityScoreRuleRequest &) = default ;
    ChangeSecurityScoreRuleRequest& operator=(ChangeSecurityScoreRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->calType_ != nullptr
        && this->resetSecurityScoreRule_ != nullptr && this->securityScoreCategoryList_ != nullptr && this->securityScoreRuleList_ != nullptr; };
    // calType Field Functions 
    bool hasCalType() const { return this->calType_ != nullptr;};
    void deleteCalType() { this->calType_ = nullptr;};
    inline string calType() const { DARABONBA_PTR_GET_DEFAULT(calType_, "") };
    inline ChangeSecurityScoreRuleRequest& setCalType(string calType) { DARABONBA_PTR_SET_VALUE(calType_, calType) };


    // resetSecurityScoreRule Field Functions 
    bool hasResetSecurityScoreRule() const { return this->resetSecurityScoreRule_ != nullptr;};
    void deleteResetSecurityScoreRule() { this->resetSecurityScoreRule_ = nullptr;};
    inline bool resetSecurityScoreRule() const { DARABONBA_PTR_GET_DEFAULT(resetSecurityScoreRule_, false) };
    inline ChangeSecurityScoreRuleRequest& setResetSecurityScoreRule(bool resetSecurityScoreRule) { DARABONBA_PTR_SET_VALUE(resetSecurityScoreRule_, resetSecurityScoreRule) };


    // securityScoreCategoryList Field Functions 
    bool hasSecurityScoreCategoryList() const { return this->securityScoreCategoryList_ != nullptr;};
    void deleteSecurityScoreCategoryList() { this->securityScoreCategoryList_ = nullptr;};
    inline const vector<ChangeSecurityScoreRuleRequestSecurityScoreCategoryList> & securityScoreCategoryList() const { DARABONBA_PTR_GET_CONST(securityScoreCategoryList_, vector<ChangeSecurityScoreRuleRequestSecurityScoreCategoryList>) };
    inline vector<ChangeSecurityScoreRuleRequestSecurityScoreCategoryList> securityScoreCategoryList() { DARABONBA_PTR_GET(securityScoreCategoryList_, vector<ChangeSecurityScoreRuleRequestSecurityScoreCategoryList>) };
    inline ChangeSecurityScoreRuleRequest& setSecurityScoreCategoryList(const vector<ChangeSecurityScoreRuleRequestSecurityScoreCategoryList> & securityScoreCategoryList) { DARABONBA_PTR_SET_VALUE(securityScoreCategoryList_, securityScoreCategoryList) };
    inline ChangeSecurityScoreRuleRequest& setSecurityScoreCategoryList(vector<ChangeSecurityScoreRuleRequestSecurityScoreCategoryList> && securityScoreCategoryList) { DARABONBA_PTR_SET_RVALUE(securityScoreCategoryList_, securityScoreCategoryList) };


    // securityScoreRuleList Field Functions 
    bool hasSecurityScoreRuleList() const { return this->securityScoreRuleList_ != nullptr;};
    void deleteSecurityScoreRuleList() { this->securityScoreRuleList_ = nullptr;};
    inline const vector<ChangeSecurityScoreRuleRequestSecurityScoreRuleList> & securityScoreRuleList() const { DARABONBA_PTR_GET_CONST(securityScoreRuleList_, vector<ChangeSecurityScoreRuleRequestSecurityScoreRuleList>) };
    inline vector<ChangeSecurityScoreRuleRequestSecurityScoreRuleList> securityScoreRuleList() { DARABONBA_PTR_GET(securityScoreRuleList_, vector<ChangeSecurityScoreRuleRequestSecurityScoreRuleList>) };
    inline ChangeSecurityScoreRuleRequest& setSecurityScoreRuleList(const vector<ChangeSecurityScoreRuleRequestSecurityScoreRuleList> & securityScoreRuleList) { DARABONBA_PTR_SET_VALUE(securityScoreRuleList_, securityScoreRuleList) };
    inline ChangeSecurityScoreRuleRequest& setSecurityScoreRuleList(vector<ChangeSecurityScoreRuleRequestSecurityScoreRuleList> && securityScoreRuleList) { DARABONBA_PTR_SET_RVALUE(securityScoreRuleList_, securityScoreRuleList) };


  protected:
    // The old or new version of the security score rule. If you set this parameter to **home_security_score**, the new version of the security score rule is changed. Otherwise, the old version of the security score rule is changed by default.
    std::shared_ptr<string> calType_ = nullptr;
    // Specifies whether to reset to the system default rule. Valid values:
    // 
    // *   true: yes
    // *   false: no
    std::shared_ptr<bool> resetSecurityScoreRule_ = nullptr;
    // The information about the new version of the security score rule.
    std::shared_ptr<vector<ChangeSecurityScoreRuleRequestSecurityScoreCategoryList>> securityScoreCategoryList_ = nullptr;
    // The information about the old version of the security score rule.
    std::shared_ptr<vector<ChangeSecurityScoreRuleRequestSecurityScoreRuleList>> securityScoreRuleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

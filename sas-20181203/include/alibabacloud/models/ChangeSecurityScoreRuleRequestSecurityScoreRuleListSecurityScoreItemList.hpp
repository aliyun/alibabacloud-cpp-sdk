// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGESECURITYSCORERULEREQUESTSECURITYSCORERULELISTSECURITYSCOREITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_CHANGESECURITYSCORERULEREQUESTSECURITYSCORERULELISTSECURITYSCOREITEMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList& obj) { 
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_TO_JSON(SubRuleType, subRuleType_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_FROM_JSON(SubRuleType, subRuleType_);
    };
    ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList() = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList(const ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList &) = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList(ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList &&) = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList() = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList& operator=(const ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList &) = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList& operator=(ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->score_ != nullptr
        && this->scoreThreshold_ != nullptr && this->subRuleType_ != nullptr; };
    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // scoreThreshold Field Functions 
    bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
    void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
    inline int32_t scoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, 0) };
    inline ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList& setScoreThreshold(int32_t scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


    // subRuleType Field Functions 
    bool hasSubRuleType() const { return this->subRuleType_ != nullptr;};
    void deleteSubRuleType() { this->subRuleType_ = nullptr;};
    inline string subRuleType() const { DARABONBA_PTR_GET_DEFAULT(subRuleType_, "") };
    inline ChangeSecurityScoreRuleRequestSecurityScoreRuleListSecurityScoreItemList& setSubRuleType(string subRuleType) { DARABONBA_PTR_SET_VALUE(subRuleType_, subRuleType) };


  protected:
    // The penalty point of the deduction item.
    std::shared_ptr<int32_t> score_ = nullptr;
    // The threshold for the deduction item.
    // 
    // >  Valid values: 0 to the deduction threshold of the deduction module.
    std::shared_ptr<int32_t> scoreThreshold_ = nullptr;
    // The deduction item of the deduction module. The following list describes the deduction modules and their deduction items:
    // 
    // *   SS_REINFORCE: issue in key feature configuration
    // 
    //     *   XPRESS_INSTALL: Security Center is not authorized.
    //     *   REINFORCE_SUSPICIOUS: The anti-virus feature is disabled.
    //     *   RANSOMWARE: The anti-ransomware policy is disabled.
    //     *   WEB_LOCK: The web tamper proofing feature is disabled.
    //     *   VIRUS_SCHEDULE_SCAN: The periodic virus scan policy is disabled.
    //     *   IMAGE_REPO_SCAN: The container image scan range is not configured.
    //     *   IMAGE_SCAN_TASK: The feature of one-click scan of container images for security risks is not performed.
    // 
    // *   SS_ALARM: unhandled alert
    // 
    //     *   ALARM_SERIOUS: An unhandled high-risk alert event is detected.
    //     *   ALARM_SUSPICIOUS: An unhandled medium-risk alarm event is detected.
    //     *   ALARM_REMIND: An unhandled low-risk alarm event is detected.
    // 
    // *   SS_VUL: unfixed vulnerability
    // 
    //     *   CMS_UNFIX: An unfixed Web-CMS vulnerability is detected.
    //     *   WIN_UNFIX: An unfixed Windows host vulnerability is detected.
    //     *   CVE_UNFIX: An unfixed Linux host vulnerability is detected.
    //     *   ERM_UNFIX: An unfixed emergency vulnerability is detected.
    //     *   ERM_UNCHECK: An undetected emergency vulnerability exists.
    // 
    // *   SS_HC: baseline risk
    // 
    //     *   WEAK_EXPLOIT: Weak passwords are exposed to the Internet.
    //     *   WEAK_PASSWORD: Weak passwords exist.
    //     *   HC_EXPLOIT: The data source may be hacked.
    //     *   HC_OTHER_WARNING: Security configuration risks exist.
    // 
    // *   SS_CLOUD_HC: Cloud platform configuration check item problem.
    // 
    //     *   CSPM_CIEM_NOT_PASS: A CIEM check item failed the check.
    //     *   CSPM_RISK_NOT_PASS: A security risk check item failed the check.
    //     *   CSPM_COMPLIANCE_NOT_PASS: A compliance check item failed the check.
    // 
    // *   SS_AK: risk of AccessKey pair leaks
    std::shared_ptr<string> subRuleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

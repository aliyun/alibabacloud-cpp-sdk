// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYSCORERULERESPONSEBODYSECURITYSCORECATEGORYLISTSECURITYRULELISTSECURITYSCOREITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYSCORERULERESPONSEBODYSECURITYSCORECATEGORYLISTSECURITYRULELISTSECURITYSCOREITEMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList& obj) { 
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_TO_JSON(SubRuleType, subRuleType_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_FROM_JSON(SubRuleType, subRuleType_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList() = default ;
    GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList(const GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList &) = default ;
    GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList(GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList &&) = default ;
    GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList() = default ;
    GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList& operator=(const GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList &) = default ;
    GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList& operator=(GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->score_ == nullptr
        && return this->scoreThreshold_ == nullptr && return this->subRuleType_ == nullptr && return this->title_ == nullptr; };
    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // scoreThreshold Field Functions 
    bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
    void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
    inline int32_t scoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, 0) };
    inline GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList& setScoreThreshold(int32_t scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


    // subRuleType Field Functions 
    bool hasSubRuleType() const { return this->subRuleType_ != nullptr;};
    void deleteSubRuleType() { this->subRuleType_ = nullptr;};
    inline string subRuleType() const { DARABONBA_PTR_GET_DEFAULT(subRuleType_, "") };
    inline GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList& setSubRuleType(string subRuleType) { DARABONBA_PTR_SET_VALUE(subRuleType_, subRuleType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetSecurityScoreRuleResponseBodySecurityScoreCategoryListSecurityRuleListSecurityScoreItemList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The deduction score for the item.
    std::shared_ptr<int32_t> score_ = nullptr;
    // The threshold of the deduction score for the item.
    std::shared_ptr<int32_t> scoreThreshold_ = nullptr;
    // The type of the sub-deduction item. Valid values:
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
    std::shared_ptr<string> subRuleType_ = nullptr;
    // The name of the sub-deduction item of the security score rule.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

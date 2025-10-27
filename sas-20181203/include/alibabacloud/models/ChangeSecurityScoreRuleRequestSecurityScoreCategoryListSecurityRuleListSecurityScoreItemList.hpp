// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGESECURITYSCORERULEREQUESTSECURITYSCORECATEGORYLISTSECURITYRULELISTSECURITYSCOREITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_CHANGESECURITYSCORERULEREQUESTSECURITYSCORECATEGORYLISTSECURITYRULELISTSECURITYSCOREITEMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList& obj) { 
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_TO_JSON(SubRuleType, subRuleType_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_FROM_JSON(SubRuleType, subRuleType_);
    };
    ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList() = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList(const ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList &) = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList(ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList &&) = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList() = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList& operator=(const ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList &) = default ;
    ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList& operator=(ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->score_ == nullptr
        && return this->scoreThreshold_ == nullptr && return this->subRuleType_ == nullptr; };
    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // scoreThreshold Field Functions 
    bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
    void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
    inline int32_t scoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, 0) };
    inline ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList& setScoreThreshold(int32_t scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


    // subRuleType Field Functions 
    bool hasSubRuleType() const { return this->subRuleType_ != nullptr;};
    void deleteSubRuleType() { this->subRuleType_ = nullptr;};
    inline string subRuleType() const { DARABONBA_PTR_GET_DEFAULT(subRuleType_, "") };
    inline ChangeSecurityScoreRuleRequestSecurityScoreCategoryListSecurityRuleListSecurityScoreItemList& setSubRuleType(string subRuleType) { DARABONBA_PTR_SET_VALUE(subRuleType_, subRuleType) };


  protected:
    // The penalty point of the deduction item.
    std::shared_ptr<int32_t> score_ = nullptr;
    // The threshold for the deduction item.
    // 
    // >  Valid values: 0 to the deduction threshold of the deduction module.
    std::shared_ptr<int32_t> scoreThreshold_ = nullptr;
    // The sub-deduction item of the security score rule.
    std::shared_ptr<string> subRuleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

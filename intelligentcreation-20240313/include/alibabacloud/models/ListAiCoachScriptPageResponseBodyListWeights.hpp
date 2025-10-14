// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODYLISTWEIGHTS_HPP_
#define ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODYLISTWEIGHTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAICoachScriptPageResponseBodyListWeights : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICoachScriptPageResponseBodyListWeights& obj) { 
      DARABONBA_PTR_TO_JSON(assessmentPoint, assessmentPoint_);
      DARABONBA_PTR_TO_JSON(assessmentPointEnabled, assessmentPointEnabled_);
      DARABONBA_PTR_TO_JSON(customReplyRuleEnabled, customReplyRuleEnabled_);
      DARABONBA_PTR_TO_JSON(expressiveness, expressiveness_);
      DARABONBA_PTR_TO_JSON(expressivenessEnabled, expressivenessEnabled_);
      DARABONBA_PTR_TO_JSON(pointDeductionRule, pointDeductionRule_);
      DARABONBA_PTR_TO_JSON(pointDeductionRuleEnabled, pointDeductionRuleEnabled_);
      DARABONBA_PTR_TO_JSON(similarPronunciationScoringEnabled, similarPronunciationScoringEnabled_);
      DARABONBA_PTR_TO_JSON(standard, standard_);
      DARABONBA_PTR_TO_JSON(standardEnabled, standardEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICoachScriptPageResponseBodyListWeights& obj) { 
      DARABONBA_PTR_FROM_JSON(assessmentPoint, assessmentPoint_);
      DARABONBA_PTR_FROM_JSON(assessmentPointEnabled, assessmentPointEnabled_);
      DARABONBA_PTR_FROM_JSON(customReplyRuleEnabled, customReplyRuleEnabled_);
      DARABONBA_PTR_FROM_JSON(expressiveness, expressiveness_);
      DARABONBA_PTR_FROM_JSON(expressivenessEnabled, expressivenessEnabled_);
      DARABONBA_PTR_FROM_JSON(pointDeductionRule, pointDeductionRule_);
      DARABONBA_PTR_FROM_JSON(pointDeductionRuleEnabled, pointDeductionRuleEnabled_);
      DARABONBA_PTR_FROM_JSON(similarPronunciationScoringEnabled, similarPronunciationScoringEnabled_);
      DARABONBA_PTR_FROM_JSON(standard, standard_);
      DARABONBA_PTR_FROM_JSON(standardEnabled, standardEnabled_);
    };
    ListAICoachScriptPageResponseBodyListWeights() = default ;
    ListAICoachScriptPageResponseBodyListWeights(const ListAICoachScriptPageResponseBodyListWeights &) = default ;
    ListAICoachScriptPageResponseBodyListWeights(ListAICoachScriptPageResponseBodyListWeights &&) = default ;
    ListAICoachScriptPageResponseBodyListWeights(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICoachScriptPageResponseBodyListWeights() = default ;
    ListAICoachScriptPageResponseBodyListWeights& operator=(const ListAICoachScriptPageResponseBodyListWeights &) = default ;
    ListAICoachScriptPageResponseBodyListWeights& operator=(ListAICoachScriptPageResponseBodyListWeights &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assessmentPoint_ == nullptr
        && return this->assessmentPointEnabled_ == nullptr && return this->customReplyRuleEnabled_ == nullptr && return this->expressiveness_ == nullptr && return this->expressivenessEnabled_ == nullptr && return this->pointDeductionRule_ == nullptr
        && return this->pointDeductionRuleEnabled_ == nullptr && return this->similarPronunciationScoringEnabled_ == nullptr && return this->standard_ == nullptr && return this->standardEnabled_ == nullptr; };
    // assessmentPoint Field Functions 
    bool hasAssessmentPoint() const { return this->assessmentPoint_ != nullptr;};
    void deleteAssessmentPoint() { this->assessmentPoint_ = nullptr;};
    inline int32_t assessmentPoint() const { DARABONBA_PTR_GET_DEFAULT(assessmentPoint_, 0) };
    inline ListAICoachScriptPageResponseBodyListWeights& setAssessmentPoint(int32_t assessmentPoint) { DARABONBA_PTR_SET_VALUE(assessmentPoint_, assessmentPoint) };


    // assessmentPointEnabled Field Functions 
    bool hasAssessmentPointEnabled() const { return this->assessmentPointEnabled_ != nullptr;};
    void deleteAssessmentPointEnabled() { this->assessmentPointEnabled_ = nullptr;};
    inline bool assessmentPointEnabled() const { DARABONBA_PTR_GET_DEFAULT(assessmentPointEnabled_, false) };
    inline ListAICoachScriptPageResponseBodyListWeights& setAssessmentPointEnabled(bool assessmentPointEnabled) { DARABONBA_PTR_SET_VALUE(assessmentPointEnabled_, assessmentPointEnabled) };


    // customReplyRuleEnabled Field Functions 
    bool hasCustomReplyRuleEnabled() const { return this->customReplyRuleEnabled_ != nullptr;};
    void deleteCustomReplyRuleEnabled() { this->customReplyRuleEnabled_ = nullptr;};
    inline bool customReplyRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(customReplyRuleEnabled_, false) };
    inline ListAICoachScriptPageResponseBodyListWeights& setCustomReplyRuleEnabled(bool customReplyRuleEnabled) { DARABONBA_PTR_SET_VALUE(customReplyRuleEnabled_, customReplyRuleEnabled) };


    // expressiveness Field Functions 
    bool hasExpressiveness() const { return this->expressiveness_ != nullptr;};
    void deleteExpressiveness() { this->expressiveness_ = nullptr;};
    inline int32_t expressiveness() const { DARABONBA_PTR_GET_DEFAULT(expressiveness_, 0) };
    inline ListAICoachScriptPageResponseBodyListWeights& setExpressiveness(int32_t expressiveness) { DARABONBA_PTR_SET_VALUE(expressiveness_, expressiveness) };


    // expressivenessEnabled Field Functions 
    bool hasExpressivenessEnabled() const { return this->expressivenessEnabled_ != nullptr;};
    void deleteExpressivenessEnabled() { this->expressivenessEnabled_ = nullptr;};
    inline bool expressivenessEnabled() const { DARABONBA_PTR_GET_DEFAULT(expressivenessEnabled_, false) };
    inline ListAICoachScriptPageResponseBodyListWeights& setExpressivenessEnabled(bool expressivenessEnabled) { DARABONBA_PTR_SET_VALUE(expressivenessEnabled_, expressivenessEnabled) };


    // pointDeductionRule Field Functions 
    bool hasPointDeductionRule() const { return this->pointDeductionRule_ != nullptr;};
    void deletePointDeductionRule() { this->pointDeductionRule_ = nullptr;};
    inline int32_t pointDeductionRule() const { DARABONBA_PTR_GET_DEFAULT(pointDeductionRule_, 0) };
    inline ListAICoachScriptPageResponseBodyListWeights& setPointDeductionRule(int32_t pointDeductionRule) { DARABONBA_PTR_SET_VALUE(pointDeductionRule_, pointDeductionRule) };


    // pointDeductionRuleEnabled Field Functions 
    bool hasPointDeductionRuleEnabled() const { return this->pointDeductionRuleEnabled_ != nullptr;};
    void deletePointDeductionRuleEnabled() { this->pointDeductionRuleEnabled_ = nullptr;};
    inline bool pointDeductionRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(pointDeductionRuleEnabled_, false) };
    inline ListAICoachScriptPageResponseBodyListWeights& setPointDeductionRuleEnabled(bool pointDeductionRuleEnabled) { DARABONBA_PTR_SET_VALUE(pointDeductionRuleEnabled_, pointDeductionRuleEnabled) };


    // similarPronunciationScoringEnabled Field Functions 
    bool hasSimilarPronunciationScoringEnabled() const { return this->similarPronunciationScoringEnabled_ != nullptr;};
    void deleteSimilarPronunciationScoringEnabled() { this->similarPronunciationScoringEnabled_ = nullptr;};
    inline bool similarPronunciationScoringEnabled() const { DARABONBA_PTR_GET_DEFAULT(similarPronunciationScoringEnabled_, false) };
    inline ListAICoachScriptPageResponseBodyListWeights& setSimilarPronunciationScoringEnabled(bool similarPronunciationScoringEnabled) { DARABONBA_PTR_SET_VALUE(similarPronunciationScoringEnabled_, similarPronunciationScoringEnabled) };


    // standard Field Functions 
    bool hasStandard() const { return this->standard_ != nullptr;};
    void deleteStandard() { this->standard_ = nullptr;};
    inline int32_t standard() const { DARABONBA_PTR_GET_DEFAULT(standard_, 0) };
    inline ListAICoachScriptPageResponseBodyListWeights& setStandard(int32_t standard) { DARABONBA_PTR_SET_VALUE(standard_, standard) };


    // standardEnabled Field Functions 
    bool hasStandardEnabled() const { return this->standardEnabled_ != nullptr;};
    void deleteStandardEnabled() { this->standardEnabled_ = nullptr;};
    inline bool standardEnabled() const { DARABONBA_PTR_GET_DEFAULT(standardEnabled_, false) };
    inline ListAICoachScriptPageResponseBodyListWeights& setStandardEnabled(bool standardEnabled) { DARABONBA_PTR_SET_VALUE(standardEnabled_, standardEnabled) };


  protected:
    std::shared_ptr<int32_t> assessmentPoint_ = nullptr;
    std::shared_ptr<bool> assessmentPointEnabled_ = nullptr;
    std::shared_ptr<bool> customReplyRuleEnabled_ = nullptr;
    std::shared_ptr<int32_t> expressiveness_ = nullptr;
    std::shared_ptr<bool> expressivenessEnabled_ = nullptr;
    std::shared_ptr<int32_t> pointDeductionRule_ = nullptr;
    std::shared_ptr<bool> pointDeductionRuleEnabled_ = nullptr;
    std::shared_ptr<bool> similarPronunciationScoringEnabled_ = nullptr;
    std::shared_ptr<int32_t> standard_ = nullptr;
    std::shared_ptr<bool> standardEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif

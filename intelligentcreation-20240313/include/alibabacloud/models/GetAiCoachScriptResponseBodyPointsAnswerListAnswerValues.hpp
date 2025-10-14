// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYPOINTSANSWERLISTANSWERVALUES_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYPOINTSANSWERLISTANSWERVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesKeywordValues.hpp>
#include <alibabacloud/models/GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachScriptResponseBodyPointsAnswerListAnswerValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachScriptResponseBodyPointsAnswerListAnswerValues& obj) { 
      DARABONBA_PTR_TO_JSON(answerName, answerName_);
      DARABONBA_PTR_TO_JSON(answerWeight, answerWeight_);
      DARABONBA_PTR_TO_JSON(keywordValues, keywordValues_);
      DARABONBA_PTR_TO_JSON(keywordWeight, keywordWeight_);
      DARABONBA_PTR_TO_JSON(scoringRules, scoringRules_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachScriptResponseBodyPointsAnswerListAnswerValues& obj) { 
      DARABONBA_PTR_FROM_JSON(answerName, answerName_);
      DARABONBA_PTR_FROM_JSON(answerWeight, answerWeight_);
      DARABONBA_PTR_FROM_JSON(keywordValues, keywordValues_);
      DARABONBA_PTR_FROM_JSON(keywordWeight, keywordWeight_);
      DARABONBA_PTR_FROM_JSON(scoringRules, scoringRules_);
    };
    GetAICoachScriptResponseBodyPointsAnswerListAnswerValues() = default ;
    GetAICoachScriptResponseBodyPointsAnswerListAnswerValues(const GetAICoachScriptResponseBodyPointsAnswerListAnswerValues &) = default ;
    GetAICoachScriptResponseBodyPointsAnswerListAnswerValues(GetAICoachScriptResponseBodyPointsAnswerListAnswerValues &&) = default ;
    GetAICoachScriptResponseBodyPointsAnswerListAnswerValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachScriptResponseBodyPointsAnswerListAnswerValues() = default ;
    GetAICoachScriptResponseBodyPointsAnswerListAnswerValues& operator=(const GetAICoachScriptResponseBodyPointsAnswerListAnswerValues &) = default ;
    GetAICoachScriptResponseBodyPointsAnswerListAnswerValues& operator=(GetAICoachScriptResponseBodyPointsAnswerListAnswerValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answerName_ == nullptr
        && return this->answerWeight_ == nullptr && return this->keywordValues_ == nullptr && return this->keywordWeight_ == nullptr && return this->scoringRules_ == nullptr; };
    // answerName Field Functions 
    bool hasAnswerName() const { return this->answerName_ != nullptr;};
    void deleteAnswerName() { this->answerName_ = nullptr;};
    inline string answerName() const { DARABONBA_PTR_GET_DEFAULT(answerName_, "") };
    inline GetAICoachScriptResponseBodyPointsAnswerListAnswerValues& setAnswerName(string answerName) { DARABONBA_PTR_SET_VALUE(answerName_, answerName) };


    // answerWeight Field Functions 
    bool hasAnswerWeight() const { return this->answerWeight_ != nullptr;};
    void deleteAnswerWeight() { this->answerWeight_ = nullptr;};
    inline int32_t answerWeight() const { DARABONBA_PTR_GET_DEFAULT(answerWeight_, 0) };
    inline GetAICoachScriptResponseBodyPointsAnswerListAnswerValues& setAnswerWeight(int32_t answerWeight) { DARABONBA_PTR_SET_VALUE(answerWeight_, answerWeight) };


    // keywordValues Field Functions 
    bool hasKeywordValues() const { return this->keywordValues_ != nullptr;};
    void deleteKeywordValues() { this->keywordValues_ = nullptr;};
    inline const vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesKeywordValues> & keywordValues() const { DARABONBA_PTR_GET_CONST(keywordValues_, vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesKeywordValues>) };
    inline vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesKeywordValues> keywordValues() { DARABONBA_PTR_GET(keywordValues_, vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesKeywordValues>) };
    inline GetAICoachScriptResponseBodyPointsAnswerListAnswerValues& setKeywordValues(const vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesKeywordValues> & keywordValues) { DARABONBA_PTR_SET_VALUE(keywordValues_, keywordValues) };
    inline GetAICoachScriptResponseBodyPointsAnswerListAnswerValues& setKeywordValues(vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesKeywordValues> && keywordValues) { DARABONBA_PTR_SET_RVALUE(keywordValues_, keywordValues) };


    // keywordWeight Field Functions 
    bool hasKeywordWeight() const { return this->keywordWeight_ != nullptr;};
    void deleteKeywordWeight() { this->keywordWeight_ = nullptr;};
    inline int32_t keywordWeight() const { DARABONBA_PTR_GET_DEFAULT(keywordWeight_, 0) };
    inline GetAICoachScriptResponseBodyPointsAnswerListAnswerValues& setKeywordWeight(int32_t keywordWeight) { DARABONBA_PTR_SET_VALUE(keywordWeight_, keywordWeight) };


    // scoringRules Field Functions 
    bool hasScoringRules() const { return this->scoringRules_ != nullptr;};
    void deleteScoringRules() { this->scoringRules_ = nullptr;};
    inline const vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules> & scoringRules() const { DARABONBA_PTR_GET_CONST(scoringRules_, vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules>) };
    inline vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules> scoringRules() { DARABONBA_PTR_GET(scoringRules_, vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules>) };
    inline GetAICoachScriptResponseBodyPointsAnswerListAnswerValues& setScoringRules(const vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules> & scoringRules) { DARABONBA_PTR_SET_VALUE(scoringRules_, scoringRules) };
    inline GetAICoachScriptResponseBodyPointsAnswerListAnswerValues& setScoringRules(vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules> && scoringRules) { DARABONBA_PTR_SET_RVALUE(scoringRules_, scoringRules) };


  protected:
    std::shared_ptr<string> answerName_ = nullptr;
    std::shared_ptr<int32_t> answerWeight_ = nullptr;
    std::shared_ptr<vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesKeywordValues>> keywordValues_ = nullptr;
    std::shared_ptr<int32_t> keywordWeight_ = nullptr;
    std::shared_ptr<vector<Models::GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules>> scoringRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif

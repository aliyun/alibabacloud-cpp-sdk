// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITSCOREHITSCORE_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITSCOREHITSCORE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoHitScoreHitScore : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoHitScoreHitScore& obj) { 
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ScoreId, scoreId_);
      DARABONBA_PTR_TO_JSON(ScoreName, scoreName_);
      DARABONBA_PTR_TO_JSON(ScoreNumber, scoreNumber_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoHitScoreHitScore& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ScoreId, scoreId_);
      DARABONBA_PTR_FROM_JSON(ScoreName, scoreName_);
      DARABONBA_PTR_FROM_JSON(ScoreNumber, scoreNumber_);
    };
    GetResultResponseBodyDataResultInfoHitScoreHitScore() = default ;
    GetResultResponseBodyDataResultInfoHitScoreHitScore(const GetResultResponseBodyDataResultInfoHitScoreHitScore &) = default ;
    GetResultResponseBodyDataResultInfoHitScoreHitScore(GetResultResponseBodyDataResultInfoHitScoreHitScore &&) = default ;
    GetResultResponseBodyDataResultInfoHitScoreHitScore(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoHitScoreHitScore() = default ;
    GetResultResponseBodyDataResultInfoHitScoreHitScore& operator=(const GetResultResponseBodyDataResultInfoHitScoreHitScore &) = default ;
    GetResultResponseBodyDataResultInfoHitScoreHitScore& operator=(GetResultResponseBodyDataResultInfoHitScoreHitScore &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleId_ != nullptr
        && this->scoreId_ != nullptr && this->scoreName_ != nullptr && this->scoreNumber_ != nullptr; };
    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline GetResultResponseBodyDataResultInfoHitScoreHitScore& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // scoreId Field Functions 
    bool hasScoreId() const { return this->scoreId_ != nullptr;};
    void deleteScoreId() { this->scoreId_ = nullptr;};
    inline string scoreId() const { DARABONBA_PTR_GET_DEFAULT(scoreId_, "") };
    inline GetResultResponseBodyDataResultInfoHitScoreHitScore& setScoreId(string scoreId) { DARABONBA_PTR_SET_VALUE(scoreId_, scoreId) };


    // scoreName Field Functions 
    bool hasScoreName() const { return this->scoreName_ != nullptr;};
    void deleteScoreName() { this->scoreName_ = nullptr;};
    inline string scoreName() const { DARABONBA_PTR_GET_DEFAULT(scoreName_, "") };
    inline GetResultResponseBodyDataResultInfoHitScoreHitScore& setScoreName(string scoreName) { DARABONBA_PTR_SET_VALUE(scoreName_, scoreName) };


    // scoreNumber Field Functions 
    bool hasScoreNumber() const { return this->scoreNumber_ != nullptr;};
    void deleteScoreNumber() { this->scoreNumber_ = nullptr;};
    inline string scoreNumber() const { DARABONBA_PTR_GET_DEFAULT(scoreNumber_, "") };
    inline GetResultResponseBodyDataResultInfoHitScoreHitScore& setScoreNumber(string scoreNumber) { DARABONBA_PTR_SET_VALUE(scoreNumber_, scoreNumber) };


  protected:
    std::shared_ptr<string> ruleId_ = nullptr;
    std::shared_ptr<string> scoreId_ = nullptr;
    std::shared_ptr<string> scoreName_ = nullptr;
    std::shared_ptr<string> scoreNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONSCOREHISTORYRESPONSEBODYSCOREHISTORYTOTALSCOREHISTORY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONSCOREHISTORYRESPONSEBODYSCOREHISTORYTOTALSCOREHISTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory& obj) { 
      DARABONBA_PTR_TO_JSON(EvaluationTime, evaluationTime_);
      DARABONBA_PTR_TO_JSON(Score, score_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory& obj) { 
      DARABONBA_PTR_FROM_JSON(EvaluationTime, evaluationTime_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
    };
    ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory() = default ;
    ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory(const ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory &) = default ;
    ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory(ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory &&) = default ;
    ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory() = default ;
    ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory& operator=(const ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory &) = default ;
    ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory& operator=(ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->evaluationTime_ == nullptr
        && return this->score_ == nullptr; };
    // evaluationTime Field Functions 
    bool hasEvaluationTime() const { return this->evaluationTime_ != nullptr;};
    void deleteEvaluationTime() { this->evaluationTime_ = nullptr;};
    inline string evaluationTime() const { DARABONBA_PTR_GET_DEFAULT(evaluationTime_, "") };
    inline ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory& setEvaluationTime(string evaluationTime) { DARABONBA_PTR_SET_VALUE(evaluationTime_, evaluationTime) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


  protected:
    // The time when the score was generated. The time is in UTC.
    std::shared_ptr<string> evaluationTime_ = nullptr;
    // The score.
    // 
    // Valid values: 0 to 1.
    std::shared_ptr<double> score_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONSCOREHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONSCOREHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationScoreHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationScoreHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScoreHistory, scoreHistory_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationScoreHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScoreHistory, scoreHistory_);
    };
    ListEvaluationScoreHistoryResponseBody() = default ;
    ListEvaluationScoreHistoryResponseBody(const ListEvaluationScoreHistoryResponseBody &) = default ;
    ListEvaluationScoreHistoryResponseBody(ListEvaluationScoreHistoryResponseBody &&) = default ;
    ListEvaluationScoreHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationScoreHistoryResponseBody() = default ;
    ListEvaluationScoreHistoryResponseBody& operator=(const ListEvaluationScoreHistoryResponseBody &) = default ;
    ListEvaluationScoreHistoryResponseBody& operator=(ListEvaluationScoreHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScoreHistory : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScoreHistory& obj) { 
        DARABONBA_PTR_TO_JSON(TotalScoreHistory, totalScoreHistory_);
      };
      friend void from_json(const Darabonba::Json& j, ScoreHistory& obj) { 
        DARABONBA_PTR_FROM_JSON(TotalScoreHistory, totalScoreHistory_);
      };
      ScoreHistory() = default ;
      ScoreHistory(const ScoreHistory &) = default ;
      ScoreHistory(ScoreHistory &&) = default ;
      ScoreHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScoreHistory() = default ;
      ScoreHistory& operator=(const ScoreHistory &) = default ;
      ScoreHistory& operator=(ScoreHistory &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TotalScoreHistory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TotalScoreHistory& obj) { 
          DARABONBA_PTR_TO_JSON(EvaluationTime, evaluationTime_);
          DARABONBA_PTR_TO_JSON(Score, score_);
        };
        friend void from_json(const Darabonba::Json& j, TotalScoreHistory& obj) { 
          DARABONBA_PTR_FROM_JSON(EvaluationTime, evaluationTime_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
        };
        TotalScoreHistory() = default ;
        TotalScoreHistory(const TotalScoreHistory &) = default ;
        TotalScoreHistory(TotalScoreHistory &&) = default ;
        TotalScoreHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TotalScoreHistory() = default ;
        TotalScoreHistory& operator=(const TotalScoreHistory &) = default ;
        TotalScoreHistory& operator=(TotalScoreHistory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->evaluationTime_ == nullptr
        && this->score_ == nullptr; };
        // evaluationTime Field Functions 
        bool hasEvaluationTime() const { return this->evaluationTime_ != nullptr;};
        void deleteEvaluationTime() { this->evaluationTime_ = nullptr;};
        inline string getEvaluationTime() const { DARABONBA_PTR_GET_DEFAULT(evaluationTime_, "") };
        inline TotalScoreHistory& setEvaluationTime(string evaluationTime) { DARABONBA_PTR_SET_VALUE(evaluationTime_, evaluationTime) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline TotalScoreHistory& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      protected:
        // The time when the score was generated. The time is in UTC.
        shared_ptr<string> evaluationTime_ {};
        // The score.
        // 
        // Valid values: 0 to 1.
        shared_ptr<double> score_ {};
      };

      virtual bool empty() const override { return this->totalScoreHistory_ == nullptr; };
      // totalScoreHistory Field Functions 
      bool hasTotalScoreHistory() const { return this->totalScoreHistory_ != nullptr;};
      void deleteTotalScoreHistory() { this->totalScoreHistory_ = nullptr;};
      inline const vector<ScoreHistory::TotalScoreHistory> & getTotalScoreHistory() const { DARABONBA_PTR_GET_CONST(totalScoreHistory_, vector<ScoreHistory::TotalScoreHistory>) };
      inline vector<ScoreHistory::TotalScoreHistory> getTotalScoreHistory() { DARABONBA_PTR_GET(totalScoreHistory_, vector<ScoreHistory::TotalScoreHistory>) };
      inline ScoreHistory& setTotalScoreHistory(const vector<ScoreHistory::TotalScoreHistory> & totalScoreHistory) { DARABONBA_PTR_SET_VALUE(totalScoreHistory_, totalScoreHistory) };
      inline ScoreHistory& setTotalScoreHistory(vector<ScoreHistory::TotalScoreHistory> && totalScoreHistory) { DARABONBA_PTR_SET_RVALUE(totalScoreHistory_, totalScoreHistory) };


    protected:
      // The historical scores.
      shared_ptr<vector<ScoreHistory::TotalScoreHistory>> totalScoreHistory_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->scoreHistory_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEvaluationScoreHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scoreHistory Field Functions 
    bool hasScoreHistory() const { return this->scoreHistory_ != nullptr;};
    void deleteScoreHistory() { this->scoreHistory_ = nullptr;};
    inline const ListEvaluationScoreHistoryResponseBody::ScoreHistory & getScoreHistory() const { DARABONBA_PTR_GET_CONST(scoreHistory_, ListEvaluationScoreHistoryResponseBody::ScoreHistory) };
    inline ListEvaluationScoreHistoryResponseBody::ScoreHistory getScoreHistory() { DARABONBA_PTR_GET(scoreHistory_, ListEvaluationScoreHistoryResponseBody::ScoreHistory) };
    inline ListEvaluationScoreHistoryResponseBody& setScoreHistory(const ListEvaluationScoreHistoryResponseBody::ScoreHistory & scoreHistory) { DARABONBA_PTR_SET_VALUE(scoreHistory_, scoreHistory) };
    inline ListEvaluationScoreHistoryResponseBody& setScoreHistory(ListEvaluationScoreHistoryResponseBody::ScoreHistory && scoreHistory) { DARABONBA_PTR_SET_RVALUE(scoreHistory_, scoreHistory) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The historical scores.
    shared_ptr<ListEvaluationScoreHistoryResponseBody::ScoreHistory> scoreHistory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONSCOREHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONSCOREHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEvaluationScoreHistoryResponseBodyScoreHistory.hpp>
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
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->scoreHistory_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEvaluationScoreHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scoreHistory Field Functions 
    bool hasScoreHistory() const { return this->scoreHistory_ != nullptr;};
    void deleteScoreHistory() { this->scoreHistory_ = nullptr;};
    inline const ListEvaluationScoreHistoryResponseBodyScoreHistory & scoreHistory() const { DARABONBA_PTR_GET_CONST(scoreHistory_, ListEvaluationScoreHistoryResponseBodyScoreHistory) };
    inline ListEvaluationScoreHistoryResponseBodyScoreHistory scoreHistory() { DARABONBA_PTR_GET(scoreHistory_, ListEvaluationScoreHistoryResponseBodyScoreHistory) };
    inline ListEvaluationScoreHistoryResponseBody& setScoreHistory(const ListEvaluationScoreHistoryResponseBodyScoreHistory & scoreHistory) { DARABONBA_PTR_SET_VALUE(scoreHistory_, scoreHistory) };
    inline ListEvaluationScoreHistoryResponseBody& setScoreHistory(ListEvaluationScoreHistoryResponseBodyScoreHistory && scoreHistory) { DARABONBA_PTR_SET_RVALUE(scoreHistory_, scoreHistory) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The historical scores.
    std::shared_ptr<ListEvaluationScoreHistoryResponseBodyScoreHistory> scoreHistory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONSCOREHISTORYRESPONSEBODYSCOREHISTORY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONSCOREHISTORYRESPONSEBODYSCOREHISTORY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationScoreHistoryResponseBodyScoreHistory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationScoreHistoryResponseBodyScoreHistory& obj) { 
      DARABONBA_PTR_TO_JSON(TotalScoreHistory, totalScoreHistory_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationScoreHistoryResponseBodyScoreHistory& obj) { 
      DARABONBA_PTR_FROM_JSON(TotalScoreHistory, totalScoreHistory_);
    };
    ListEvaluationScoreHistoryResponseBodyScoreHistory() = default ;
    ListEvaluationScoreHistoryResponseBodyScoreHistory(const ListEvaluationScoreHistoryResponseBodyScoreHistory &) = default ;
    ListEvaluationScoreHistoryResponseBodyScoreHistory(ListEvaluationScoreHistoryResponseBodyScoreHistory &&) = default ;
    ListEvaluationScoreHistoryResponseBodyScoreHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationScoreHistoryResponseBodyScoreHistory() = default ;
    ListEvaluationScoreHistoryResponseBodyScoreHistory& operator=(const ListEvaluationScoreHistoryResponseBodyScoreHistory &) = default ;
    ListEvaluationScoreHistoryResponseBodyScoreHistory& operator=(ListEvaluationScoreHistoryResponseBodyScoreHistory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->totalScoreHistory_ == nullptr; };
    // totalScoreHistory Field Functions 
    bool hasTotalScoreHistory() const { return this->totalScoreHistory_ != nullptr;};
    void deleteTotalScoreHistory() { this->totalScoreHistory_ = nullptr;};
    inline const vector<Models::ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory> & totalScoreHistory() const { DARABONBA_PTR_GET_CONST(totalScoreHistory_, vector<Models::ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory>) };
    inline vector<Models::ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory> totalScoreHistory() { DARABONBA_PTR_GET(totalScoreHistory_, vector<Models::ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory>) };
    inline ListEvaluationScoreHistoryResponseBodyScoreHistory& setTotalScoreHistory(const vector<Models::ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory> & totalScoreHistory) { DARABONBA_PTR_SET_VALUE(totalScoreHistory_, totalScoreHistory) };
    inline ListEvaluationScoreHistoryResponseBodyScoreHistory& setTotalScoreHistory(vector<Models::ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory> && totalScoreHistory) { DARABONBA_PTR_SET_RVALUE(totalScoreHistory_, totalScoreHistory) };


  protected:
    // The historical scores.
    std::shared_ptr<vector<Models::ListEvaluationScoreHistoryResponseBodyScoreHistoryTotalScoreHistory>> totalScoreHistory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif

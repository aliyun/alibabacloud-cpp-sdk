// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATATOPICSUMMARYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATATOPICSUMMARYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult& obj) { 
      DARABONBA_PTR_TO_JSON(Summaries, summaries_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Summaries, summaries_);
    };
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult &&) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult& operator=(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult& operator=(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->summaries_ == nullptr; };
    // summaries Field Functions 
    bool hasSummaries() const { return this->summaries_ != nullptr;};
    void deleteSummaries() { this->summaries_ = nullptr;};
    inline const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries> & summaries() const { DARABONBA_PTR_GET_CONST(summaries_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries>) };
    inline vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries> summaries() { DARABONBA_PTR_GET(summaries_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries>) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult& setSummaries(const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries> & summaries) { DARABONBA_PTR_SET_VALUE(summaries_, summaries) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResult& setSummaries(vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries> && summaries) { DARABONBA_PTR_SET_RVALUE(summaries_, summaries) };


  protected:
    std::shared_ptr<vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries>> summaries_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

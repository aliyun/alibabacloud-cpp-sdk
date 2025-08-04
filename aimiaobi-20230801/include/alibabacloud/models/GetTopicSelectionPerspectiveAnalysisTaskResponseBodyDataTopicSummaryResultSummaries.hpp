// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATATOPICSUMMARYRESULTSUMMARIES_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATATOPICSUMMARYRESULTSUMMARIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummariesDocList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries& obj) { 
      DARABONBA_PTR_TO_JSON(DocList, docList_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries& obj) { 
      DARABONBA_PTR_FROM_JSON(DocList, docList_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries &&) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries& operator=(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries& operator=(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docList_ != nullptr
        && this->summary_ != nullptr && this->title_ != nullptr; };
    // docList Field Functions 
    bool hasDocList() const { return this->docList_ != nullptr;};
    void deleteDocList() { this->docList_ = nullptr;};
    inline const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummariesDocList> & docList() const { DARABONBA_PTR_GET_CONST(docList_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummariesDocList>) };
    inline vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummariesDocList> docList() { DARABONBA_PTR_GET(docList_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummariesDocList>) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries& setDocList(const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummariesDocList> & docList) { DARABONBA_PTR_SET_VALUE(docList_, docList) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries& setDocList(vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummariesDocList> && docList) { DARABONBA_PTR_SET_RVALUE(docList_, docList) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummaries& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTopicSummaryResultSummariesDocList>> docList_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

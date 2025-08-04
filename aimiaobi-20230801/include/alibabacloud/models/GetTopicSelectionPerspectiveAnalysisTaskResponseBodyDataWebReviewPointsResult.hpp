// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATAWEBREVIEWPOINTSRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATAWEBREVIEWPOINTSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult& obj) { 
      DARABONBA_PTR_TO_JSON(Attitudes, attitudes_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Attitudes, attitudes_);
    };
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult &&) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult& operator=(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult& operator=(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attitudes_ != nullptr; };
    // attitudes Field Functions 
    bool hasAttitudes() const { return this->attitudes_ != nullptr;};
    void deleteAttitudes() { this->attitudes_ = nullptr;};
    inline const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes> & attitudes() const { DARABONBA_PTR_GET_CONST(attitudes_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes>) };
    inline vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes> attitudes() { DARABONBA_PTR_GET(attitudes_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes>) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult& setAttitudes(const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes> & attitudes) { DARABONBA_PTR_SET_VALUE(attitudes_, attitudes) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResult& setAttitudes(vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes> && attitudes) { DARABONBA_PTR_SET_RVALUE(attitudes_, attitudes) };


  protected:
    std::shared_ptr<vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes>> attitudes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

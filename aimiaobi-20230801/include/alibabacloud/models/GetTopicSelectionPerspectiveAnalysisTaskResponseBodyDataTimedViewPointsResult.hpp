// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATATIMEDVIEWPOINTSRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATATIMEDVIEWPOINTSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult& obj) { 
      DARABONBA_PTR_TO_JSON(Attitudes, attitudes_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Attitudes, attitudes_);
    };
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult &&) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult& operator=(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult& operator=(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attitudes_ != nullptr; };
    // attitudes Field Functions 
    bool hasAttitudes() const { return this->attitudes_ != nullptr;};
    void deleteAttitudes() { this->attitudes_ = nullptr;};
    inline const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudes> & attitudes() const { DARABONBA_PTR_GET_CONST(attitudes_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudes>) };
    inline vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudes> attitudes() { DARABONBA_PTR_GET(attitudes_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudes>) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult& setAttitudes(const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudes> & attitudes) { DARABONBA_PTR_SET_VALUE(attitudes_, attitudes) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResult& setAttitudes(vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudes> && attitudes) { DARABONBA_PTR_SET_RVALUE(attitudes_, attitudes) };


  protected:
    std::shared_ptr<vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudes>> attitudes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

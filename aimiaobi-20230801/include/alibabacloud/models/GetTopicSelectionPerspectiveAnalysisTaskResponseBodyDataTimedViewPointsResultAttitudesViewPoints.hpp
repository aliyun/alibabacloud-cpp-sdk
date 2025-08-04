// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATATIMEDVIEWPOINTSRESULTATTITUDESVIEWPOINTS_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATATIMEDVIEWPOINTSRESULTATTITUDESVIEWPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPointsOutlines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPoints& obj) { 
      DARABONBA_PTR_TO_JSON(Outlines, outlines_);
      DARABONBA_PTR_TO_JSON(Point, point_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Outlines, outlines_);
      DARABONBA_PTR_FROM_JSON(Point, point_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPoints() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPoints(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPoints &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPoints(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPoints &&) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPoints() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPoints& operator=(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPoints &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPoints& operator=(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outlines_ != nullptr
        && this->point_ != nullptr && this->summary_ != nullptr; };
    // outlines Field Functions 
    bool hasOutlines() const { return this->outlines_ != nullptr;};
    void deleteOutlines() { this->outlines_ = nullptr;};
    inline const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPointsOutlines> & outlines() const { DARABONBA_PTR_GET_CONST(outlines_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPointsOutlines>) };
    inline vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPointsOutlines> outlines() { DARABONBA_PTR_GET(outlines_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPointsOutlines>) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPoints& setOutlines(const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPointsOutlines> & outlines) { DARABONBA_PTR_SET_VALUE(outlines_, outlines) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPoints& setOutlines(vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPointsOutlines> && outlines) { DARABONBA_PTR_SET_RVALUE(outlines_, outlines) };


    // point Field Functions 
    bool hasPoint() const { return this->point_ != nullptr;};
    void deletePoint() { this->point_ = nullptr;};
    inline string point() const { DARABONBA_PTR_GET_DEFAULT(point_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPoints& setPoint(string point) { DARABONBA_PTR_SET_VALUE(point_, point) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPoints& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    std::shared_ptr<vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataTimedViewPointsResultAttitudesViewPointsOutlines>> outlines_ = nullptr;
    std::shared_ptr<string> point_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

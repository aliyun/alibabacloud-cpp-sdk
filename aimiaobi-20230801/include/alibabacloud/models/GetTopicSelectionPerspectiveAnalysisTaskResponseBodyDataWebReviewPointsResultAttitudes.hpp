// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATAWEBREVIEWPOINTSRESULTATTITUDES_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATAWEBREVIEWPOINTSRESULTATTITUDES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments.hpp>
#include <alibabacloud/models/GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesViewPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes& obj) { 
      DARABONBA_PTR_TO_JSON(Attitude, attitude_);
      DARABONBA_PTR_TO_JSON(AttitudeType, attitudeType_);
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(Ratio, ratio_);
      DARABONBA_PTR_TO_JSON(ViewPoints, viewPoints_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes& obj) { 
      DARABONBA_PTR_FROM_JSON(Attitude, attitude_);
      DARABONBA_PTR_FROM_JSON(AttitudeType, attitudeType_);
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(ViewPoints, viewPoints_);
    };
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes &&) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes& operator=(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes& operator=(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attitude_ != nullptr
        && this->attitudeType_ != nullptr && this->comments_ != nullptr && this->ratio_ != nullptr && this->viewPoints_ != nullptr; };
    // attitude Field Functions 
    bool hasAttitude() const { return this->attitude_ != nullptr;};
    void deleteAttitude() { this->attitude_ = nullptr;};
    inline string attitude() const { DARABONBA_PTR_GET_DEFAULT(attitude_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes& setAttitude(string attitude) { DARABONBA_PTR_SET_VALUE(attitude_, attitude) };


    // attitudeType Field Functions 
    bool hasAttitudeType() const { return this->attitudeType_ != nullptr;};
    void deleteAttitudeType() { this->attitudeType_ = nullptr;};
    inline string attitudeType() const { DARABONBA_PTR_GET_DEFAULT(attitudeType_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes& setAttitudeType(string attitudeType) { DARABONBA_PTR_SET_VALUE(attitudeType_, attitudeType) };


    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments> & comments() const { DARABONBA_PTR_GET_CONST(comments_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments>) };
    inline vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments> comments() { DARABONBA_PTR_GET(comments_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments>) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes& setComments(const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments> & comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes& setComments(vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments> && comments) { DARABONBA_PTR_SET_RVALUE(comments_, comments) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline string ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // viewPoints Field Functions 
    bool hasViewPoints() const { return this->viewPoints_ != nullptr;};
    void deleteViewPoints() { this->viewPoints_ = nullptr;};
    inline const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesViewPoints> & viewPoints() const { DARABONBA_PTR_GET_CONST(viewPoints_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesViewPoints>) };
    inline vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesViewPoints> viewPoints() { DARABONBA_PTR_GET(viewPoints_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesViewPoints>) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes& setViewPoints(const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesViewPoints> & viewPoints) { DARABONBA_PTR_SET_VALUE(viewPoints_, viewPoints) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudes& setViewPoints(vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesViewPoints> && viewPoints) { DARABONBA_PTR_SET_RVALUE(viewPoints_, viewPoints) };


  protected:
    std::shared_ptr<string> attitude_ = nullptr;
    std::shared_ptr<string> attitudeType_ = nullptr;
    std::shared_ptr<vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments>> comments_ = nullptr;
    std::shared_ptr<string> ratio_ = nullptr;
    std::shared_ptr<vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesViewPoints>> viewPoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

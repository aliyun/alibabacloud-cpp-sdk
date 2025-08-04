// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATAHOTVIEWPOINTSRESULTATTITUDES_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATAHOTVIEWPOINTSRESULTATTITUDES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews.hpp>
#include <alibabacloud/models/GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesViewPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes& obj) { 
      DARABONBA_PTR_TO_JSON(Attitude, attitude_);
      DARABONBA_PTR_TO_JSON(AttitudeType, attitudeType_);
      DARABONBA_PTR_TO_JSON(News, news_);
      DARABONBA_PTR_TO_JSON(Ratio, ratio_);
      DARABONBA_PTR_TO_JSON(ViewPoints, viewPoints_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes& obj) { 
      DARABONBA_PTR_FROM_JSON(Attitude, attitude_);
      DARABONBA_PTR_FROM_JSON(AttitudeType, attitudeType_);
      DARABONBA_PTR_FROM_JSON(News, news_);
      DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(ViewPoints, viewPoints_);
    };
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes &&) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes& operator=(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes& operator=(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attitude_ != nullptr
        && this->attitudeType_ != nullptr && this->news_ != nullptr && this->ratio_ != nullptr && this->viewPoints_ != nullptr; };
    // attitude Field Functions 
    bool hasAttitude() const { return this->attitude_ != nullptr;};
    void deleteAttitude() { this->attitude_ = nullptr;};
    inline string attitude() const { DARABONBA_PTR_GET_DEFAULT(attitude_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes& setAttitude(string attitude) { DARABONBA_PTR_SET_VALUE(attitude_, attitude) };


    // attitudeType Field Functions 
    bool hasAttitudeType() const { return this->attitudeType_ != nullptr;};
    void deleteAttitudeType() { this->attitudeType_ = nullptr;};
    inline string attitudeType() const { DARABONBA_PTR_GET_DEFAULT(attitudeType_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes& setAttitudeType(string attitudeType) { DARABONBA_PTR_SET_VALUE(attitudeType_, attitudeType) };


    // news Field Functions 
    bool hasNews() const { return this->news_ != nullptr;};
    void deleteNews() { this->news_ = nullptr;};
    inline const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews> & news() const { DARABONBA_PTR_GET_CONST(news_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews>) };
    inline vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews> news() { DARABONBA_PTR_GET(news_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews>) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes& setNews(const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews> & news) { DARABONBA_PTR_SET_VALUE(news_, news) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes& setNews(vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews> && news) { DARABONBA_PTR_SET_RVALUE(news_, news) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline string ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // viewPoints Field Functions 
    bool hasViewPoints() const { return this->viewPoints_ != nullptr;};
    void deleteViewPoints() { this->viewPoints_ = nullptr;};
    inline const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesViewPoints> & viewPoints() const { DARABONBA_PTR_GET_CONST(viewPoints_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesViewPoints>) };
    inline vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesViewPoints> viewPoints() { DARABONBA_PTR_GET(viewPoints_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesViewPoints>) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes& setViewPoints(const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesViewPoints> & viewPoints) { DARABONBA_PTR_SET_VALUE(viewPoints_, viewPoints) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes& setViewPoints(vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesViewPoints> && viewPoints) { DARABONBA_PTR_SET_RVALUE(viewPoints_, viewPoints) };


  protected:
    std::shared_ptr<string> attitude_ = nullptr;
    std::shared_ptr<string> attitudeType_ = nullptr;
    std::shared_ptr<vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews>> news_ = nullptr;
    std::shared_ptr<string> ratio_ = nullptr;
    std::shared_ptr<vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesViewPoints>> viewPoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTVIEWPOINTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTVIEWPOINTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHotViewPointsResponseBodyDataNews.hpp>
#include <alibabacloud/models/ListHotViewPointsResponseBodyDataViewPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListHotViewPointsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotViewPointsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Attitude, attitude_);
      DARABONBA_PTR_TO_JSON(AttitudeType, attitudeType_);
      DARABONBA_PTR_TO_JSON(News, news_);
      DARABONBA_PTR_TO_JSON(Ratio, ratio_);
      DARABONBA_PTR_TO_JSON(ViewPoints, viewPoints_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotViewPointsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Attitude, attitude_);
      DARABONBA_PTR_FROM_JSON(AttitudeType, attitudeType_);
      DARABONBA_PTR_FROM_JSON(News, news_);
      DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(ViewPoints, viewPoints_);
    };
    ListHotViewPointsResponseBodyData() = default ;
    ListHotViewPointsResponseBodyData(const ListHotViewPointsResponseBodyData &) = default ;
    ListHotViewPointsResponseBodyData(ListHotViewPointsResponseBodyData &&) = default ;
    ListHotViewPointsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotViewPointsResponseBodyData() = default ;
    ListHotViewPointsResponseBodyData& operator=(const ListHotViewPointsResponseBodyData &) = default ;
    ListHotViewPointsResponseBodyData& operator=(ListHotViewPointsResponseBodyData &&) = default ;
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
    inline ListHotViewPointsResponseBodyData& setAttitude(string attitude) { DARABONBA_PTR_SET_VALUE(attitude_, attitude) };


    // attitudeType Field Functions 
    bool hasAttitudeType() const { return this->attitudeType_ != nullptr;};
    void deleteAttitudeType() { this->attitudeType_ = nullptr;};
    inline string attitudeType() const { DARABONBA_PTR_GET_DEFAULT(attitudeType_, "") };
    inline ListHotViewPointsResponseBodyData& setAttitudeType(string attitudeType) { DARABONBA_PTR_SET_VALUE(attitudeType_, attitudeType) };


    // news Field Functions 
    bool hasNews() const { return this->news_ != nullptr;};
    void deleteNews() { this->news_ = nullptr;};
    inline const vector<Models::ListHotViewPointsResponseBodyDataNews> & news() const { DARABONBA_PTR_GET_CONST(news_, vector<Models::ListHotViewPointsResponseBodyDataNews>) };
    inline vector<Models::ListHotViewPointsResponseBodyDataNews> news() { DARABONBA_PTR_GET(news_, vector<Models::ListHotViewPointsResponseBodyDataNews>) };
    inline ListHotViewPointsResponseBodyData& setNews(const vector<Models::ListHotViewPointsResponseBodyDataNews> & news) { DARABONBA_PTR_SET_VALUE(news_, news) };
    inline ListHotViewPointsResponseBodyData& setNews(vector<Models::ListHotViewPointsResponseBodyDataNews> && news) { DARABONBA_PTR_SET_RVALUE(news_, news) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline string ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
    inline ListHotViewPointsResponseBodyData& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // viewPoints Field Functions 
    bool hasViewPoints() const { return this->viewPoints_ != nullptr;};
    void deleteViewPoints() { this->viewPoints_ = nullptr;};
    inline const vector<Models::ListHotViewPointsResponseBodyDataViewPoints> & viewPoints() const { DARABONBA_PTR_GET_CONST(viewPoints_, vector<Models::ListHotViewPointsResponseBodyDataViewPoints>) };
    inline vector<Models::ListHotViewPointsResponseBodyDataViewPoints> viewPoints() { DARABONBA_PTR_GET(viewPoints_, vector<Models::ListHotViewPointsResponseBodyDataViewPoints>) };
    inline ListHotViewPointsResponseBodyData& setViewPoints(const vector<Models::ListHotViewPointsResponseBodyDataViewPoints> & viewPoints) { DARABONBA_PTR_SET_VALUE(viewPoints_, viewPoints) };
    inline ListHotViewPointsResponseBodyData& setViewPoints(vector<Models::ListHotViewPointsResponseBodyDataViewPoints> && viewPoints) { DARABONBA_PTR_SET_RVALUE(viewPoints_, viewPoints) };


  protected:
    std::shared_ptr<string> attitude_ = nullptr;
    std::shared_ptr<string> attitudeType_ = nullptr;
    std::shared_ptr<vector<Models::ListHotViewPointsResponseBodyDataNews>> news_ = nullptr;
    std::shared_ptr<string> ratio_ = nullptr;
    std::shared_ptr<vector<Models::ListHotViewPointsResponseBodyDataViewPoints>> viewPoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWEBREVIEWPOINTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTWEBREVIEWPOINTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWebReviewPointsResponseBodyDataComments.hpp>
#include <alibabacloud/models/ListWebReviewPointsResponseBodyDataViewPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListWebReviewPointsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWebReviewPointsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Attitude, attitude_);
      DARABONBA_PTR_TO_JSON(AttitudeType, attitudeType_);
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(Ratio, ratio_);
      DARABONBA_PTR_TO_JSON(ViewPoints, viewPoints_);
    };
    friend void from_json(const Darabonba::Json& j, ListWebReviewPointsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Attitude, attitude_);
      DARABONBA_PTR_FROM_JSON(AttitudeType, attitudeType_);
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(ViewPoints, viewPoints_);
    };
    ListWebReviewPointsResponseBodyData() = default ;
    ListWebReviewPointsResponseBodyData(const ListWebReviewPointsResponseBodyData &) = default ;
    ListWebReviewPointsResponseBodyData(ListWebReviewPointsResponseBodyData &&) = default ;
    ListWebReviewPointsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWebReviewPointsResponseBodyData() = default ;
    ListWebReviewPointsResponseBodyData& operator=(const ListWebReviewPointsResponseBodyData &) = default ;
    ListWebReviewPointsResponseBodyData& operator=(ListWebReviewPointsResponseBodyData &&) = default ;
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
    inline ListWebReviewPointsResponseBodyData& setAttitude(string attitude) { DARABONBA_PTR_SET_VALUE(attitude_, attitude) };


    // attitudeType Field Functions 
    bool hasAttitudeType() const { return this->attitudeType_ != nullptr;};
    void deleteAttitudeType() { this->attitudeType_ = nullptr;};
    inline string attitudeType() const { DARABONBA_PTR_GET_DEFAULT(attitudeType_, "") };
    inline ListWebReviewPointsResponseBodyData& setAttitudeType(string attitudeType) { DARABONBA_PTR_SET_VALUE(attitudeType_, attitudeType) };


    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline const vector<Models::ListWebReviewPointsResponseBodyDataComments> & comments() const { DARABONBA_PTR_GET_CONST(comments_, vector<Models::ListWebReviewPointsResponseBodyDataComments>) };
    inline vector<Models::ListWebReviewPointsResponseBodyDataComments> comments() { DARABONBA_PTR_GET(comments_, vector<Models::ListWebReviewPointsResponseBodyDataComments>) };
    inline ListWebReviewPointsResponseBodyData& setComments(const vector<Models::ListWebReviewPointsResponseBodyDataComments> & comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };
    inline ListWebReviewPointsResponseBodyData& setComments(vector<Models::ListWebReviewPointsResponseBodyDataComments> && comments) { DARABONBA_PTR_SET_RVALUE(comments_, comments) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline string ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
    inline ListWebReviewPointsResponseBodyData& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // viewPoints Field Functions 
    bool hasViewPoints() const { return this->viewPoints_ != nullptr;};
    void deleteViewPoints() { this->viewPoints_ = nullptr;};
    inline const vector<Models::ListWebReviewPointsResponseBodyDataViewPoints> & viewPoints() const { DARABONBA_PTR_GET_CONST(viewPoints_, vector<Models::ListWebReviewPointsResponseBodyDataViewPoints>) };
    inline vector<Models::ListWebReviewPointsResponseBodyDataViewPoints> viewPoints() { DARABONBA_PTR_GET(viewPoints_, vector<Models::ListWebReviewPointsResponseBodyDataViewPoints>) };
    inline ListWebReviewPointsResponseBodyData& setViewPoints(const vector<Models::ListWebReviewPointsResponseBodyDataViewPoints> & viewPoints) { DARABONBA_PTR_SET_VALUE(viewPoints_, viewPoints) };
    inline ListWebReviewPointsResponseBodyData& setViewPoints(vector<Models::ListWebReviewPointsResponseBodyDataViewPoints> && viewPoints) { DARABONBA_PTR_SET_RVALUE(viewPoints_, viewPoints) };


  protected:
    std::shared_ptr<string> attitude_ = nullptr;
    std::shared_ptr<string> attitudeType_ = nullptr;
    std::shared_ptr<vector<Models::ListWebReviewPointsResponseBodyDataComments>> comments_ = nullptr;
    std::shared_ptr<string> ratio_ = nullptr;
    std::shared_ptr<vector<Models::ListWebReviewPointsResponseBodyDataViewPoints>> viewPoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

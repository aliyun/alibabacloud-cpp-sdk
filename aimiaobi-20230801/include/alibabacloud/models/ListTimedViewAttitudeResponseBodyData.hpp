// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTIMEDVIEWATTITUDERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTIMEDVIEWATTITUDERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTimedViewAttitudeResponseBodyDataViewPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListTimedViewAttitudeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTimedViewAttitudeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Attitude, attitude_);
      DARABONBA_PTR_TO_JSON(AttitudeType, attitudeType_);
      DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(Ratio, ratio_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(ViewPoints, viewPoints_);
    };
    friend void from_json(const Darabonba::Json& j, ListTimedViewAttitudeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Attitude, attitude_);
      DARABONBA_PTR_FROM_JSON(AttitudeType, attitudeType_);
      DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(ViewPoints, viewPoints_);
    };
    ListTimedViewAttitudeResponseBodyData() = default ;
    ListTimedViewAttitudeResponseBodyData(const ListTimedViewAttitudeResponseBodyData &) = default ;
    ListTimedViewAttitudeResponseBodyData(ListTimedViewAttitudeResponseBodyData &&) = default ;
    ListTimedViewAttitudeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTimedViewAttitudeResponseBodyData() = default ;
    ListTimedViewAttitudeResponseBodyData& operator=(const ListTimedViewAttitudeResponseBodyData &) = default ;
    ListTimedViewAttitudeResponseBodyData& operator=(ListTimedViewAttitudeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attitude_ != nullptr
        && this->attitudeType_ != nullptr && this->pubTime_ != nullptr && this->ratio_ != nullptr && this->source_ != nullptr && this->title_ != nullptr
        && this->url_ != nullptr && this->viewPoints_ != nullptr; };
    // attitude Field Functions 
    bool hasAttitude() const { return this->attitude_ != nullptr;};
    void deleteAttitude() { this->attitude_ = nullptr;};
    inline string attitude() const { DARABONBA_PTR_GET_DEFAULT(attitude_, "") };
    inline ListTimedViewAttitudeResponseBodyData& setAttitude(string attitude) { DARABONBA_PTR_SET_VALUE(attitude_, attitude) };


    // attitudeType Field Functions 
    bool hasAttitudeType() const { return this->attitudeType_ != nullptr;};
    void deleteAttitudeType() { this->attitudeType_ = nullptr;};
    inline string attitudeType() const { DARABONBA_PTR_GET_DEFAULT(attitudeType_, "") };
    inline ListTimedViewAttitudeResponseBodyData& setAttitudeType(string attitudeType) { DARABONBA_PTR_SET_VALUE(attitudeType_, attitudeType) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline ListTimedViewAttitudeResponseBodyData& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline string ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
    inline ListTimedViewAttitudeResponseBodyData& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListTimedViewAttitudeResponseBodyData& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListTimedViewAttitudeResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListTimedViewAttitudeResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // viewPoints Field Functions 
    bool hasViewPoints() const { return this->viewPoints_ != nullptr;};
    void deleteViewPoints() { this->viewPoints_ = nullptr;};
    inline const vector<Models::ListTimedViewAttitudeResponseBodyDataViewPoints> & viewPoints() const { DARABONBA_PTR_GET_CONST(viewPoints_, vector<Models::ListTimedViewAttitudeResponseBodyDataViewPoints>) };
    inline vector<Models::ListTimedViewAttitudeResponseBodyDataViewPoints> viewPoints() { DARABONBA_PTR_GET(viewPoints_, vector<Models::ListTimedViewAttitudeResponseBodyDataViewPoints>) };
    inline ListTimedViewAttitudeResponseBodyData& setViewPoints(const vector<Models::ListTimedViewAttitudeResponseBodyDataViewPoints> & viewPoints) { DARABONBA_PTR_SET_VALUE(viewPoints_, viewPoints) };
    inline ListTimedViewAttitudeResponseBodyData& setViewPoints(vector<Models::ListTimedViewAttitudeResponseBodyDataViewPoints> && viewPoints) { DARABONBA_PTR_SET_RVALUE(viewPoints_, viewPoints) };


  protected:
    std::shared_ptr<string> attitude_ = nullptr;
    std::shared_ptr<string> attitudeType_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<string> ratio_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<vector<Models::ListTimedViewAttitudeResponseBodyDataViewPoints>> viewPoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

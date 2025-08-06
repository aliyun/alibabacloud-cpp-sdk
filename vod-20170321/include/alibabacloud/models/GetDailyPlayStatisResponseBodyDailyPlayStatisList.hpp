// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDAILYPLAYSTATISRESPONSEBODYDAILYPLAYSTATISLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDAILYPLAYSTATISRESPONSEBODYDAILYPLAYSTATISLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetDailyPlayStatisResponseBodyDailyPlayStatisList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDailyPlayStatisResponseBodyDailyPlayStatisList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(Flow, flow_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(PlayCount, playCount_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDailyPlayStatisResponseBodyDailyPlayStatisList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(Flow, flow_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(PlayCount, playCount_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetDailyPlayStatisResponseBodyDailyPlayStatisList() = default ;
    GetDailyPlayStatisResponseBodyDailyPlayStatisList(const GetDailyPlayStatisResponseBodyDailyPlayStatisList &) = default ;
    GetDailyPlayStatisResponseBodyDailyPlayStatisList(GetDailyPlayStatisResponseBodyDailyPlayStatisList &&) = default ;
    GetDailyPlayStatisResponseBodyDailyPlayStatisList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDailyPlayStatisResponseBodyDailyPlayStatisList() = default ;
    GetDailyPlayStatisResponseBodyDailyPlayStatisList& operator=(const GetDailyPlayStatisResponseBodyDailyPlayStatisList &) = default ;
    GetDailyPlayStatisResponseBodyDailyPlayStatisList& operator=(GetDailyPlayStatisResponseBodyDailyPlayStatisList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->date_ != nullptr && this->flow_ != nullptr && this->mediaId_ != nullptr && this->playCount_ != nullptr && this->userId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline GetDailyPlayStatisResponseBodyDailyPlayStatisList& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetDailyPlayStatisResponseBodyDailyPlayStatisList& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // flow Field Functions 
    bool hasFlow() const { return this->flow_ != nullptr;};
    void deleteFlow() { this->flow_ = nullptr;};
    inline double flow() const { DARABONBA_PTR_GET_DEFAULT(flow_, 0.0) };
    inline GetDailyPlayStatisResponseBodyDailyPlayStatisList& setFlow(double flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetDailyPlayStatisResponseBodyDailyPlayStatisList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // playCount Field Functions 
    bool hasPlayCount() const { return this->playCount_ != nullptr;};
    void deletePlayCount() { this->playCount_ = nullptr;};
    inline int64_t playCount() const { DARABONBA_PTR_GET_DEFAULT(playCount_, 0L) };
    inline GetDailyPlayStatisResponseBodyDailyPlayStatisList& setPlayCount(int64_t playCount) { DARABONBA_PTR_SET_VALUE(playCount_, playCount) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline GetDailyPlayStatisResponseBodyDailyPlayStatisList& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> appId_ = nullptr;
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<double> flow_ = nullptr;
    std::shared_ptr<string> mediaId_ = nullptr;
    std::shared_ptr<int64_t> playCount_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

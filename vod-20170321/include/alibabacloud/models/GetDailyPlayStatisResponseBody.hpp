// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDAILYPLAYSTATISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDAILYPLAYSTATISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDailyPlayStatisResponseBodyDailyPlayStatisList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetDailyPlayStatisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDailyPlayStatisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DailyPlayStatisList, dailyPlayStatisList_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDailyPlayStatisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DailyPlayStatisList, dailyPlayStatisList_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDailyPlayStatisResponseBody() = default ;
    GetDailyPlayStatisResponseBody(const GetDailyPlayStatisResponseBody &) = default ;
    GetDailyPlayStatisResponseBody(GetDailyPlayStatisResponseBody &&) = default ;
    GetDailyPlayStatisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDailyPlayStatisResponseBody() = default ;
    GetDailyPlayStatisResponseBody& operator=(const GetDailyPlayStatisResponseBody &) = default ;
    GetDailyPlayStatisResponseBody& operator=(GetDailyPlayStatisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dailyPlayStatisList_ != nullptr
        && this->mediaId_ != nullptr && this->requestId_ != nullptr; };
    // dailyPlayStatisList Field Functions 
    bool hasDailyPlayStatisList() const { return this->dailyPlayStatisList_ != nullptr;};
    void deleteDailyPlayStatisList() { this->dailyPlayStatisList_ = nullptr;};
    inline const vector<GetDailyPlayStatisResponseBodyDailyPlayStatisList> & dailyPlayStatisList() const { DARABONBA_PTR_GET_CONST(dailyPlayStatisList_, vector<GetDailyPlayStatisResponseBodyDailyPlayStatisList>) };
    inline vector<GetDailyPlayStatisResponseBodyDailyPlayStatisList> dailyPlayStatisList() { DARABONBA_PTR_GET(dailyPlayStatisList_, vector<GetDailyPlayStatisResponseBodyDailyPlayStatisList>) };
    inline GetDailyPlayStatisResponseBody& setDailyPlayStatisList(const vector<GetDailyPlayStatisResponseBodyDailyPlayStatisList> & dailyPlayStatisList) { DARABONBA_PTR_SET_VALUE(dailyPlayStatisList_, dailyPlayStatisList) };
    inline GetDailyPlayStatisResponseBody& setDailyPlayStatisList(vector<GetDailyPlayStatisResponseBodyDailyPlayStatisList> && dailyPlayStatisList) { DARABONBA_PTR_SET_RVALUE(dailyPlayStatisList_, dailyPlayStatisList) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetDailyPlayStatisResponseBody& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDailyPlayStatisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetDailyPlayStatisResponseBodyDailyPlayStatisList>> dailyPlayStatisList_ = nullptr;
    std::shared_ptr<string> mediaId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

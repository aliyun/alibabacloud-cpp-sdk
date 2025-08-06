// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYLISTRESPONSEBODYPLAYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYLISTRESPONSEBODYPLAYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayListResponseBodyPlayList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayListResponseBodyPlayList& obj) { 
      DARABONBA_PTR_TO_JSON(FirstFrameDuration, firstFrameDuration_);
      DARABONBA_PTR_TO_JSON(PlayDuration, playDuration_);
      DARABONBA_PTR_TO_JSON(PlayTs, playTs_);
      DARABONBA_PTR_TO_JSON(PlayType, playType_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StuckDuration, stuckDuration_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
      DARABONBA_PTR_TO_JSON(VideoDuration, videoDuration_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayListResponseBodyPlayList& obj) { 
      DARABONBA_PTR_FROM_JSON(FirstFrameDuration, firstFrameDuration_);
      DARABONBA_PTR_FROM_JSON(PlayDuration, playDuration_);
      DARABONBA_PTR_FROM_JSON(PlayTs, playTs_);
      DARABONBA_PTR_FROM_JSON(PlayType, playType_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StuckDuration, stuckDuration_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
      DARABONBA_PTR_FROM_JSON(VideoDuration, videoDuration_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    DescribePlayListResponseBodyPlayList() = default ;
    DescribePlayListResponseBodyPlayList(const DescribePlayListResponseBodyPlayList &) = default ;
    DescribePlayListResponseBodyPlayList(DescribePlayListResponseBodyPlayList &&) = default ;
    DescribePlayListResponseBodyPlayList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayListResponseBodyPlayList() = default ;
    DescribePlayListResponseBodyPlayList& operator=(const DescribePlayListResponseBodyPlayList &) = default ;
    DescribePlayListResponseBodyPlayList& operator=(DescribePlayListResponseBodyPlayList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->firstFrameDuration_ != nullptr
        && this->playDuration_ != nullptr && this->playTs_ != nullptr && this->playType_ != nullptr && this->sessionId_ != nullptr && this->status_ != nullptr
        && this->stuckDuration_ != nullptr && this->traceId_ != nullptr && this->videoDuration_ != nullptr && this->videoId_ != nullptr; };
    // firstFrameDuration Field Functions 
    bool hasFirstFrameDuration() const { return this->firstFrameDuration_ != nullptr;};
    void deleteFirstFrameDuration() { this->firstFrameDuration_ = nullptr;};
    inline string firstFrameDuration() const { DARABONBA_PTR_GET_DEFAULT(firstFrameDuration_, "") };
    inline DescribePlayListResponseBodyPlayList& setFirstFrameDuration(string firstFrameDuration) { DARABONBA_PTR_SET_VALUE(firstFrameDuration_, firstFrameDuration) };


    // playDuration Field Functions 
    bool hasPlayDuration() const { return this->playDuration_ != nullptr;};
    void deletePlayDuration() { this->playDuration_ = nullptr;};
    inline string playDuration() const { DARABONBA_PTR_GET_DEFAULT(playDuration_, "") };
    inline DescribePlayListResponseBodyPlayList& setPlayDuration(string playDuration) { DARABONBA_PTR_SET_VALUE(playDuration_, playDuration) };


    // playTs Field Functions 
    bool hasPlayTs() const { return this->playTs_ != nullptr;};
    void deletePlayTs() { this->playTs_ = nullptr;};
    inline string playTs() const { DARABONBA_PTR_GET_DEFAULT(playTs_, "") };
    inline DescribePlayListResponseBodyPlayList& setPlayTs(string playTs) { DARABONBA_PTR_SET_VALUE(playTs_, playTs) };


    // playType Field Functions 
    bool hasPlayType() const { return this->playType_ != nullptr;};
    void deletePlayType() { this->playType_ = nullptr;};
    inline string playType() const { DARABONBA_PTR_GET_DEFAULT(playType_, "") };
    inline DescribePlayListResponseBodyPlayList& setPlayType(string playType) { DARABONBA_PTR_SET_VALUE(playType_, playType) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribePlayListResponseBodyPlayList& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePlayListResponseBodyPlayList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stuckDuration Field Functions 
    bool hasStuckDuration() const { return this->stuckDuration_ != nullptr;};
    void deleteStuckDuration() { this->stuckDuration_ = nullptr;};
    inline string stuckDuration() const { DARABONBA_PTR_GET_DEFAULT(stuckDuration_, "") };
    inline DescribePlayListResponseBodyPlayList& setStuckDuration(string stuckDuration) { DARABONBA_PTR_SET_VALUE(stuckDuration_, stuckDuration) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribePlayListResponseBodyPlayList& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    // videoDuration Field Functions 
    bool hasVideoDuration() const { return this->videoDuration_ != nullptr;};
    void deleteVideoDuration() { this->videoDuration_ = nullptr;};
    inline string videoDuration() const { DARABONBA_PTR_GET_DEFAULT(videoDuration_, "") };
    inline DescribePlayListResponseBodyPlayList& setVideoDuration(string videoDuration) { DARABONBA_PTR_SET_VALUE(videoDuration_, videoDuration) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline DescribePlayListResponseBodyPlayList& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    std::shared_ptr<string> firstFrameDuration_ = nullptr;
    std::shared_ptr<string> playDuration_ = nullptr;
    std::shared_ptr<string> playTs_ = nullptr;
    std::shared_ptr<string> playType_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> stuckDuration_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
    std::shared_ptr<string> videoDuration_ = nullptr;
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

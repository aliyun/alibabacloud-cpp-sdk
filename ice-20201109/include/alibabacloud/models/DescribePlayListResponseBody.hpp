// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribePlayListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlayList, playList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlayList, playList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    DescribePlayListResponseBody() = default ;
    DescribePlayListResponseBody(const DescribePlayListResponseBody &) = default ;
    DescribePlayListResponseBody(DescribePlayListResponseBody &&) = default ;
    DescribePlayListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayListResponseBody() = default ;
    DescribePlayListResponseBody& operator=(const DescribePlayListResponseBody &) = default ;
    DescribePlayListResponseBody& operator=(DescribePlayListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PlayList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PlayList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, PlayList& obj) { 
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
      PlayList() = default ;
      PlayList(const PlayList &) = default ;
      PlayList(PlayList &&) = default ;
      PlayList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PlayList() = default ;
      PlayList& operator=(const PlayList &) = default ;
      PlayList& operator=(PlayList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->firstFrameDuration_ == nullptr
        && this->playDuration_ == nullptr && this->playTs_ == nullptr && this->playType_ == nullptr && this->sessionId_ == nullptr && this->status_ == nullptr
        && this->stuckDuration_ == nullptr && this->traceId_ == nullptr && this->videoDuration_ == nullptr && this->videoId_ == nullptr; };
      // firstFrameDuration Field Functions 
      bool hasFirstFrameDuration() const { return this->firstFrameDuration_ != nullptr;};
      void deleteFirstFrameDuration() { this->firstFrameDuration_ = nullptr;};
      inline string getFirstFrameDuration() const { DARABONBA_PTR_GET_DEFAULT(firstFrameDuration_, "") };
      inline PlayList& setFirstFrameDuration(string firstFrameDuration) { DARABONBA_PTR_SET_VALUE(firstFrameDuration_, firstFrameDuration) };


      // playDuration Field Functions 
      bool hasPlayDuration() const { return this->playDuration_ != nullptr;};
      void deletePlayDuration() { this->playDuration_ = nullptr;};
      inline string getPlayDuration() const { DARABONBA_PTR_GET_DEFAULT(playDuration_, "") };
      inline PlayList& setPlayDuration(string playDuration) { DARABONBA_PTR_SET_VALUE(playDuration_, playDuration) };


      // playTs Field Functions 
      bool hasPlayTs() const { return this->playTs_ != nullptr;};
      void deletePlayTs() { this->playTs_ = nullptr;};
      inline string getPlayTs() const { DARABONBA_PTR_GET_DEFAULT(playTs_, "") };
      inline PlayList& setPlayTs(string playTs) { DARABONBA_PTR_SET_VALUE(playTs_, playTs) };


      // playType Field Functions 
      bool hasPlayType() const { return this->playType_ != nullptr;};
      void deletePlayType() { this->playType_ = nullptr;};
      inline string getPlayType() const { DARABONBA_PTR_GET_DEFAULT(playType_, "") };
      inline PlayList& setPlayType(string playType) { DARABONBA_PTR_SET_VALUE(playType_, playType) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline PlayList& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PlayList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // stuckDuration Field Functions 
      bool hasStuckDuration() const { return this->stuckDuration_ != nullptr;};
      void deleteStuckDuration() { this->stuckDuration_ = nullptr;};
      inline string getStuckDuration() const { DARABONBA_PTR_GET_DEFAULT(stuckDuration_, "") };
      inline PlayList& setStuckDuration(string stuckDuration) { DARABONBA_PTR_SET_VALUE(stuckDuration_, stuckDuration) };


      // traceId Field Functions 
      bool hasTraceId() const { return this->traceId_ != nullptr;};
      void deleteTraceId() { this->traceId_ = nullptr;};
      inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
      inline PlayList& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


      // videoDuration Field Functions 
      bool hasVideoDuration() const { return this->videoDuration_ != nullptr;};
      void deleteVideoDuration() { this->videoDuration_ = nullptr;};
      inline string getVideoDuration() const { DARABONBA_PTR_GET_DEFAULT(videoDuration_, "") };
      inline PlayList& setVideoDuration(string videoDuration) { DARABONBA_PTR_SET_VALUE(videoDuration_, videoDuration) };


      // videoId Field Functions 
      bool hasVideoId() const { return this->videoId_ != nullptr;};
      void deleteVideoId() { this->videoId_ = nullptr;};
      inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
      inline PlayList& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    protected:
      // Time to first frame.
      shared_ptr<string> firstFrameDuration_ {};
      // The playback duration.
      shared_ptr<string> playDuration_ {};
      // The timestamp when the playback started.
      shared_ptr<string> playTs_ {};
      // The playback type.
      shared_ptr<string> playType_ {};
      // The ID of the player session.
      shared_ptr<string> sessionId_ {};
      // The playback status.
      shared_ptr<string> status_ {};
      // The stuttering duration.
      shared_ptr<string> stuckDuration_ {};
      // The TraceId of the player.
      shared_ptr<string> traceId_ {};
      // The duration of the video.
      shared_ptr<string> videoDuration_ {};
      // The ID of the video.
      shared_ptr<string> videoId_ {};
    };

    virtual bool empty() const override { return this->pageNum_ == nullptr
        && this->pageSize_ == nullptr && this->playList_ == nullptr && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline DescribePlayListResponseBody& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribePlayListResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // playList Field Functions 
    bool hasPlayList() const { return this->playList_ != nullptr;};
    void deletePlayList() { this->playList_ = nullptr;};
    inline const vector<DescribePlayListResponseBody::PlayList> & getPlayList() const { DARABONBA_PTR_GET_CONST(playList_, vector<DescribePlayListResponseBody::PlayList>) };
    inline vector<DescribePlayListResponseBody::PlayList> getPlayList() { DARABONBA_PTR_GET(playList_, vector<DescribePlayListResponseBody::PlayList>) };
    inline DescribePlayListResponseBody& setPlayList(const vector<DescribePlayListResponseBody::PlayList> & playList) { DARABONBA_PTR_SET_VALUE(playList_, playList) };
    inline DescribePlayListResponseBody& setPlayList(vector<DescribePlayListResponseBody::PlayList> && playList) { DARABONBA_PTR_SET_RVALUE(playList_, playList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlayListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline DescribePlayListResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The page number.
    shared_ptr<int64_t> pageNum_ {};
    // The number of entries per page. Default value: 20. Valid values: 1 to 100.
    shared_ptr<int64_t> pageSize_ {};
    // The playback records.
    shared_ptr<vector<DescribePlayListResponseBody::PlayList>> playList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total playback count.
    shared_ptr<int64_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

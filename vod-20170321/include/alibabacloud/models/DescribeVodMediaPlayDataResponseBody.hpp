// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODMEDIAPLAYDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODMEDIAPLAYDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodMediaPlayDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodMediaPlayDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QoeInfoList, qoeInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodMediaPlayDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QoeInfoList, qoeInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVodMediaPlayDataResponseBody() = default ;
    DescribeVodMediaPlayDataResponseBody(const DescribeVodMediaPlayDataResponseBody &) = default ;
    DescribeVodMediaPlayDataResponseBody(DescribeVodMediaPlayDataResponseBody &&) = default ;
    DescribeVodMediaPlayDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodMediaPlayDataResponseBody() = default ;
    DescribeVodMediaPlayDataResponseBody& operator=(const DescribeVodMediaPlayDataResponseBody &) = default ;
    DescribeVodMediaPlayDataResponseBody& operator=(DescribeVodMediaPlayDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QoeInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QoeInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(DAU, DAU_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(PlayDuration, playDuration_);
        DARABONBA_PTR_TO_JSON(PlayDurationPerUv, playDurationPerUv_);
        DARABONBA_PTR_TO_JSON(PlayPerVv, playPerVv_);
        DARABONBA_PTR_TO_JSON(PlaySuccessVv, playSuccessVv_);
        DARABONBA_PTR_TO_JSON(VideoDuration, videoDuration_);
        DARABONBA_PTR_TO_JSON(VideoTitle, videoTitle_);
      };
      friend void from_json(const Darabonba::Json& j, QoeInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(DAU, DAU_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(PlayDuration, playDuration_);
        DARABONBA_PTR_FROM_JSON(PlayDurationPerUv, playDurationPerUv_);
        DARABONBA_PTR_FROM_JSON(PlayPerVv, playPerVv_);
        DARABONBA_PTR_FROM_JSON(PlaySuccessVv, playSuccessVv_);
        DARABONBA_PTR_FROM_JSON(VideoDuration, videoDuration_);
        DARABONBA_PTR_FROM_JSON(VideoTitle, videoTitle_);
      };
      QoeInfoList() = default ;
      QoeInfoList(const QoeInfoList &) = default ;
      QoeInfoList(QoeInfoList &&) = default ;
      QoeInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QoeInfoList() = default ;
      QoeInfoList& operator=(const QoeInfoList &) = default ;
      QoeInfoList& operator=(QoeInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DAU_ == nullptr
        && this->mediaId_ == nullptr && this->playDuration_ == nullptr && this->playDurationPerUv_ == nullptr && this->playPerVv_ == nullptr && this->playSuccessVv_ == nullptr
        && this->videoDuration_ == nullptr && this->videoTitle_ == nullptr; };
      // DAU Field Functions 
      bool hasDAU() const { return this->DAU_ != nullptr;};
      void deleteDAU() { this->DAU_ = nullptr;};
      inline float getDAU() const { DARABONBA_PTR_GET_DEFAULT(DAU_, 0.0) };
      inline QoeInfoList& setDAU(float DAU) { DARABONBA_PTR_SET_VALUE(DAU_, DAU) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline QoeInfoList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // playDuration Field Functions 
      bool hasPlayDuration() const { return this->playDuration_ != nullptr;};
      void deletePlayDuration() { this->playDuration_ = nullptr;};
      inline float getPlayDuration() const { DARABONBA_PTR_GET_DEFAULT(playDuration_, 0.0) };
      inline QoeInfoList& setPlayDuration(float playDuration) { DARABONBA_PTR_SET_VALUE(playDuration_, playDuration) };


      // playDurationPerUv Field Functions 
      bool hasPlayDurationPerUv() const { return this->playDurationPerUv_ != nullptr;};
      void deletePlayDurationPerUv() { this->playDurationPerUv_ = nullptr;};
      inline float getPlayDurationPerUv() const { DARABONBA_PTR_GET_DEFAULT(playDurationPerUv_, 0.0) };
      inline QoeInfoList& setPlayDurationPerUv(float playDurationPerUv) { DARABONBA_PTR_SET_VALUE(playDurationPerUv_, playDurationPerUv) };


      // playPerVv Field Functions 
      bool hasPlayPerVv() const { return this->playPerVv_ != nullptr;};
      void deletePlayPerVv() { this->playPerVv_ = nullptr;};
      inline float getPlayPerVv() const { DARABONBA_PTR_GET_DEFAULT(playPerVv_, 0.0) };
      inline QoeInfoList& setPlayPerVv(float playPerVv) { DARABONBA_PTR_SET_VALUE(playPerVv_, playPerVv) };


      // playSuccessVv Field Functions 
      bool hasPlaySuccessVv() const { return this->playSuccessVv_ != nullptr;};
      void deletePlaySuccessVv() { this->playSuccessVv_ = nullptr;};
      inline float getPlaySuccessVv() const { DARABONBA_PTR_GET_DEFAULT(playSuccessVv_, 0.0) };
      inline QoeInfoList& setPlaySuccessVv(float playSuccessVv) { DARABONBA_PTR_SET_VALUE(playSuccessVv_, playSuccessVv) };


      // videoDuration Field Functions 
      bool hasVideoDuration() const { return this->videoDuration_ != nullptr;};
      void deleteVideoDuration() { this->videoDuration_ = nullptr;};
      inline float getVideoDuration() const { DARABONBA_PTR_GET_DEFAULT(videoDuration_, 0.0) };
      inline QoeInfoList& setVideoDuration(float videoDuration) { DARABONBA_PTR_SET_VALUE(videoDuration_, videoDuration) };


      // videoTitle Field Functions 
      bool hasVideoTitle() const { return this->videoTitle_ != nullptr;};
      void deleteVideoTitle() { this->videoTitle_ = nullptr;};
      inline string getVideoTitle() const { DARABONBA_PTR_GET_DEFAULT(videoTitle_, "") };
      inline QoeInfoList& setVideoTitle(string videoTitle) { DARABONBA_PTR_SET_VALUE(videoTitle_, videoTitle) };


    protected:
      // The number of visits to the audio or video per day.
      shared_ptr<float> DAU_ {};
      // The ID of the media file (VideoId).
      shared_ptr<string> mediaId_ {};
      // The total playback duration of the audio or video. Unit: seconds.
      shared_ptr<float> playDuration_ {};
      // The average playback duration of the audio or video per viewer. Unit: seconds.
      shared_ptr<float> playDurationPerUv_ {};
      // The average number of times that the audio or video was played per viewer.
      shared_ptr<float> playPerVv_ {};
      // The total number of times the audio or video has been played.
      shared_ptr<float> playSuccessVv_ {};
      // The duration of the audio or video file. Unit: seconds.
      shared_ptr<float> videoDuration_ {};
      // The name of the audio or video file.
      shared_ptr<string> videoTitle_ {};
    };

    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->qoeInfoList_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline DescribeVodMediaPlayDataResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeVodMediaPlayDataResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // qoeInfoList Field Functions 
    bool hasQoeInfoList() const { return this->qoeInfoList_ != nullptr;};
    void deleteQoeInfoList() { this->qoeInfoList_ = nullptr;};
    inline const vector<DescribeVodMediaPlayDataResponseBody::QoeInfoList> & getQoeInfoList() const { DARABONBA_PTR_GET_CONST(qoeInfoList_, vector<DescribeVodMediaPlayDataResponseBody::QoeInfoList>) };
    inline vector<DescribeVodMediaPlayDataResponseBody::QoeInfoList> getQoeInfoList() { DARABONBA_PTR_GET(qoeInfoList_, vector<DescribeVodMediaPlayDataResponseBody::QoeInfoList>) };
    inline DescribeVodMediaPlayDataResponseBody& setQoeInfoList(const vector<DescribeVodMediaPlayDataResponseBody::QoeInfoList> & qoeInfoList) { DARABONBA_PTR_SET_VALUE(qoeInfoList_, qoeInfoList) };
    inline DescribeVodMediaPlayDataResponseBody& setQoeInfoList(vector<DescribeVodMediaPlayDataResponseBody::QoeInfoList> && qoeInfoList) { DARABONBA_PTR_SET_RVALUE(qoeInfoList_, qoeInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodMediaPlayDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeVodMediaPlayDataResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The data returned.
    shared_ptr<vector<DescribeVodMediaPlayDataResponseBody::QoeInfoList>> qoeInfoList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

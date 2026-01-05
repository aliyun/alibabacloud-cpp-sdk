// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETERLIVEBYPASSDURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETERLIVEBYPASSDURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeMeterLiveBypassDurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeterLiveBypassDurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AudioSummaryDuration, audioSummaryDuration_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SingleAudioSummaryDuration, singleAudioSummaryDuration_);
      DARABONBA_PTR_TO_JSON(SingleVideoSummaryDuration, singleVideoSummaryDuration_);
      DARABONBA_PTR_TO_JSON(TotalSummaryDuration, totalSummaryDuration_);
      DARABONBA_PTR_TO_JSON(V1080SummaryDuration, v1080SummaryDuration_);
      DARABONBA_PTR_TO_JSON(V480SummaryDuration, v480SummaryDuration_);
      DARABONBA_PTR_TO_JSON(V720SummaryDuration, v720SummaryDuration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeterLiveBypassDurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioSummaryDuration, audioSummaryDuration_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SingleAudioSummaryDuration, singleAudioSummaryDuration_);
      DARABONBA_PTR_FROM_JSON(SingleVideoSummaryDuration, singleVideoSummaryDuration_);
      DARABONBA_PTR_FROM_JSON(TotalSummaryDuration, totalSummaryDuration_);
      DARABONBA_PTR_FROM_JSON(V1080SummaryDuration, v1080SummaryDuration_);
      DARABONBA_PTR_FROM_JSON(V480SummaryDuration, v480SummaryDuration_);
      DARABONBA_PTR_FROM_JSON(V720SummaryDuration, v720SummaryDuration_);
    };
    DescribeMeterLiveBypassDurationResponseBody() = default ;
    DescribeMeterLiveBypassDurationResponseBody(const DescribeMeterLiveBypassDurationResponseBody &) = default ;
    DescribeMeterLiveBypassDurationResponseBody(DescribeMeterLiveBypassDurationResponseBody &&) = default ;
    DescribeMeterLiveBypassDurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeterLiveBypassDurationResponseBody() = default ;
    DescribeMeterLiveBypassDurationResponseBody& operator=(const DescribeMeterLiveBypassDurationResponseBody &) = default ;
    DescribeMeterLiveBypassDurationResponseBody& operator=(DescribeMeterLiveBypassDurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AudioDuration, audioDuration_);
        DARABONBA_PTR_TO_JSON(Single_Audio, singleAudio_);
        DARABONBA_PTR_TO_JSON(Single_Video, singleVideo_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
        DARABONBA_PTR_TO_JSON(V1080Duration, v1080Duration_);
        DARABONBA_PTR_TO_JSON(V480Duration, v480Duration_);
        DARABONBA_PTR_TO_JSON(V720Duration, v720Duration_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioDuration, audioDuration_);
        DARABONBA_PTR_FROM_JSON(Single_Audio, singleAudio_);
        DARABONBA_PTR_FROM_JSON(Single_Video, singleVideo_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
        DARABONBA_PTR_FROM_JSON(V1080Duration, v1080Duration_);
        DARABONBA_PTR_FROM_JSON(V480Duration, v480Duration_);
        DARABONBA_PTR_FROM_JSON(V720Duration, v720Duration_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->audioDuration_ == nullptr
        && this->singleAudio_ == nullptr && this->singleVideo_ == nullptr && this->timestamp_ == nullptr && this->totalDuration_ == nullptr && this->v1080Duration_ == nullptr
        && this->v480Duration_ == nullptr && this->v720Duration_ == nullptr; };
      // audioDuration Field Functions 
      bool hasAudioDuration() const { return this->audioDuration_ != nullptr;};
      void deleteAudioDuration() { this->audioDuration_ = nullptr;};
      inline int64_t getAudioDuration() const { DARABONBA_PTR_GET_DEFAULT(audioDuration_, 0L) };
      inline Data& setAudioDuration(int64_t audioDuration) { DARABONBA_PTR_SET_VALUE(audioDuration_, audioDuration) };


      // singleAudio Field Functions 
      bool hasSingleAudio() const { return this->singleAudio_ != nullptr;};
      void deleteSingleAudio() { this->singleAudio_ = nullptr;};
      inline int64_t getSingleAudio() const { DARABONBA_PTR_GET_DEFAULT(singleAudio_, 0L) };
      inline Data& setSingleAudio(int64_t singleAudio) { DARABONBA_PTR_SET_VALUE(singleAudio_, singleAudio) };


      // singleVideo Field Functions 
      bool hasSingleVideo() const { return this->singleVideo_ != nullptr;};
      void deleteSingleVideo() { this->singleVideo_ = nullptr;};
      inline int64_t getSingleVideo() const { DARABONBA_PTR_GET_DEFAULT(singleVideo_, 0L) };
      inline Data& setSingleVideo(int64_t singleVideo) { DARABONBA_PTR_SET_VALUE(singleVideo_, singleVideo) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline Data& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // totalDuration Field Functions 
      bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
      void deleteTotalDuration() { this->totalDuration_ = nullptr;};
      inline int64_t getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0L) };
      inline Data& setTotalDuration(int64_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


      // v1080Duration Field Functions 
      bool hasV1080Duration() const { return this->v1080Duration_ != nullptr;};
      void deleteV1080Duration() { this->v1080Duration_ = nullptr;};
      inline int64_t getV1080Duration() const { DARABONBA_PTR_GET_DEFAULT(v1080Duration_, 0L) };
      inline Data& setV1080Duration(int64_t v1080Duration) { DARABONBA_PTR_SET_VALUE(v1080Duration_, v1080Duration) };


      // v480Duration Field Functions 
      bool hasV480Duration() const { return this->v480Duration_ != nullptr;};
      void deleteV480Duration() { this->v480Duration_ = nullptr;};
      inline int64_t getV480Duration() const { DARABONBA_PTR_GET_DEFAULT(v480Duration_, 0L) };
      inline Data& setV480Duration(int64_t v480Duration) { DARABONBA_PTR_SET_VALUE(v480Duration_, v480Duration) };


      // v720Duration Field Functions 
      bool hasV720Duration() const { return this->v720Duration_ != nullptr;};
      void deleteV720Duration() { this->v720Duration_ = nullptr;};
      inline int64_t getV720Duration() const { DARABONBA_PTR_GET_DEFAULT(v720Duration_, 0L) };
      inline Data& setV720Duration(int64_t v720Duration) { DARABONBA_PTR_SET_VALUE(v720Duration_, v720Duration) };


    protected:
      // The audio-only duration. Audio-only is a basic specification. Unit: minutes.
      shared_ptr<int64_t> audioDuration_ {};
      // The single-stream relay duration for audio. Unit: minutes.
      shared_ptr<int64_t> singleAudio_ {};
      // The single-stream relay duration for video. Unit: minutes.
      shared_ptr<int64_t> singleVideo_ {};
      // The timestamp of the data returned.
      shared_ptr<string> timestamp_ {};
      // The duration. Unit: minutes.
      shared_ptr<int64_t> totalDuration_ {};
      // The Full HD duration. The video resolution is 1920 × 1080 or lower. Unit: minutes.
      shared_ptr<int64_t> v1080Duration_ {};
      // The SD duration. The video resolution is 640 × 480 or lower. Unit: minutes.
      shared_ptr<int64_t> v480Duration_ {};
      // The HD duration. The video resolution is 1280 × 720 or lower. Unit: minutes.
      shared_ptr<int64_t> v720Duration_ {};
    };

    virtual bool empty() const override { return this->audioSummaryDuration_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->singleAudioSummaryDuration_ == nullptr && this->singleVideoSummaryDuration_ == nullptr && this->totalSummaryDuration_ == nullptr
        && this->v1080SummaryDuration_ == nullptr && this->v480SummaryDuration_ == nullptr && this->v720SummaryDuration_ == nullptr; };
    // audioSummaryDuration Field Functions 
    bool hasAudioSummaryDuration() const { return this->audioSummaryDuration_ != nullptr;};
    void deleteAudioSummaryDuration() { this->audioSummaryDuration_ = nullptr;};
    inline int64_t getAudioSummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(audioSummaryDuration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBody& setAudioSummaryDuration(int64_t audioSummaryDuration) { DARABONBA_PTR_SET_VALUE(audioSummaryDuration_, audioSummaryDuration) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeMeterLiveBypassDurationResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeMeterLiveBypassDurationResponseBody::Data>) };
    inline vector<DescribeMeterLiveBypassDurationResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeMeterLiveBypassDurationResponseBody::Data>) };
    inline DescribeMeterLiveBypassDurationResponseBody& setData(const vector<DescribeMeterLiveBypassDurationResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeMeterLiveBypassDurationResponseBody& setData(vector<DescribeMeterLiveBypassDurationResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMeterLiveBypassDurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // singleAudioSummaryDuration Field Functions 
    bool hasSingleAudioSummaryDuration() const { return this->singleAudioSummaryDuration_ != nullptr;};
    void deleteSingleAudioSummaryDuration() { this->singleAudioSummaryDuration_ = nullptr;};
    inline int64_t getSingleAudioSummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(singleAudioSummaryDuration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBody& setSingleAudioSummaryDuration(int64_t singleAudioSummaryDuration) { DARABONBA_PTR_SET_VALUE(singleAudioSummaryDuration_, singleAudioSummaryDuration) };


    // singleVideoSummaryDuration Field Functions 
    bool hasSingleVideoSummaryDuration() const { return this->singleVideoSummaryDuration_ != nullptr;};
    void deleteSingleVideoSummaryDuration() { this->singleVideoSummaryDuration_ = nullptr;};
    inline int64_t getSingleVideoSummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(singleVideoSummaryDuration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBody& setSingleVideoSummaryDuration(int64_t singleVideoSummaryDuration) { DARABONBA_PTR_SET_VALUE(singleVideoSummaryDuration_, singleVideoSummaryDuration) };


    // totalSummaryDuration Field Functions 
    bool hasTotalSummaryDuration() const { return this->totalSummaryDuration_ != nullptr;};
    void deleteTotalSummaryDuration() { this->totalSummaryDuration_ = nullptr;};
    inline int64_t getTotalSummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(totalSummaryDuration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBody& setTotalSummaryDuration(int64_t totalSummaryDuration) { DARABONBA_PTR_SET_VALUE(totalSummaryDuration_, totalSummaryDuration) };


    // v1080SummaryDuration Field Functions 
    bool hasV1080SummaryDuration() const { return this->v1080SummaryDuration_ != nullptr;};
    void deleteV1080SummaryDuration() { this->v1080SummaryDuration_ = nullptr;};
    inline int64_t getV1080SummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(v1080SummaryDuration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBody& setV1080SummaryDuration(int64_t v1080SummaryDuration) { DARABONBA_PTR_SET_VALUE(v1080SummaryDuration_, v1080SummaryDuration) };


    // v480SummaryDuration Field Functions 
    bool hasV480SummaryDuration() const { return this->v480SummaryDuration_ != nullptr;};
    void deleteV480SummaryDuration() { this->v480SummaryDuration_ = nullptr;};
    inline int64_t getV480SummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(v480SummaryDuration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBody& setV480SummaryDuration(int64_t v480SummaryDuration) { DARABONBA_PTR_SET_VALUE(v480SummaryDuration_, v480SummaryDuration) };


    // v720SummaryDuration Field Functions 
    bool hasV720SummaryDuration() const { return this->v720SummaryDuration_ != nullptr;};
    void deleteV720SummaryDuration() { this->v720SummaryDuration_ = nullptr;};
    inline int64_t getV720SummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(v720SummaryDuration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBody& setV720SummaryDuration(int64_t v720SummaryDuration) { DARABONBA_PTR_SET_VALUE(v720SummaryDuration_, v720SummaryDuration) };


  protected:
    // The total audio-only duration. Audio-only is a basic specification. Unit: minutes.
    shared_ptr<int64_t> audioSummaryDuration_ {};
    // The usage statistics for each time granularity.
    shared_ptr<vector<DescribeMeterLiveBypassDurationResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total single-stream relay duration for audio. Unit: minutes.
    shared_ptr<int64_t> singleAudioSummaryDuration_ {};
    // The total single-stream relay duration for video. Unit: minutes.
    shared_ptr<int64_t> singleVideoSummaryDuration_ {};
    // The total duration. Unit: minutes.
    shared_ptr<int64_t> totalSummaryDuration_ {};
    // The total Full HD duration. The video resolution is 1920 × 1080 or lower. Unit: minutes.
    shared_ptr<int64_t> v1080SummaryDuration_ {};
    // The total standard definition (SD) duration. The video resolution is 640 × 480 or lower. Unit: minutes.
    shared_ptr<int64_t> v480SummaryDuration_ {};
    // The total high definition (HD) duration. The video resolution is 1280 × 720 or lower. Unit: minutes.
    shared_ptr<int64_t> v720SummaryDuration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMDETAILFRAMERATEANDBITRATEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMDETAILFRAMERATEANDBITRATEDATARESPONSEBODY_HPP_
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
  class DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FrameRateAndBitRateInfos, frameRateAndBitRateInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FrameRateAndBitRateInfos, frameRateAndBitRateInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody() = default ;
    DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody(const DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody &) = default ;
    DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody(DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody &&) = default ;
    DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody() = default ;
    DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody& operator=(const DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody &) = default ;
    DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody& operator=(DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FrameRateAndBitRateInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FrameRateAndBitRateInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AudioBitRate, audioBitRate_);
        DARABONBA_PTR_TO_JSON(AudioFrameRate, audioFrameRate_);
        DARABONBA_PTR_TO_JSON(BitRate, bitRate_);
        DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
        DARABONBA_PTR_TO_JSON(Time, time_);
        DARABONBA_PTR_TO_JSON(VideoBitRate, videoBitRate_);
        DARABONBA_PTR_TO_JSON(VideoFrameRate, videoFrameRate_);
      };
      friend void from_json(const Darabonba::Json& j, FrameRateAndBitRateInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioBitRate, audioBitRate_);
        DARABONBA_PTR_FROM_JSON(AudioFrameRate, audioFrameRate_);
        DARABONBA_PTR_FROM_JSON(BitRate, bitRate_);
        DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
        DARABONBA_PTR_FROM_JSON(VideoBitRate, videoBitRate_);
        DARABONBA_PTR_FROM_JSON(VideoFrameRate, videoFrameRate_);
      };
      FrameRateAndBitRateInfos() = default ;
      FrameRateAndBitRateInfos(const FrameRateAndBitRateInfos &) = default ;
      FrameRateAndBitRateInfos(FrameRateAndBitRateInfos &&) = default ;
      FrameRateAndBitRateInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FrameRateAndBitRateInfos() = default ;
      FrameRateAndBitRateInfos& operator=(const FrameRateAndBitRateInfos &) = default ;
      FrameRateAndBitRateInfos& operator=(FrameRateAndBitRateInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->audioBitRate_ == nullptr
        && this->audioFrameRate_ == nullptr && this->bitRate_ == nullptr && this->streamUrl_ == nullptr && this->time_ == nullptr && this->videoBitRate_ == nullptr
        && this->videoFrameRate_ == nullptr; };
      // audioBitRate Field Functions 
      bool hasAudioBitRate() const { return this->audioBitRate_ != nullptr;};
      void deleteAudioBitRate() { this->audioBitRate_ = nullptr;};
      inline float getAudioBitRate() const { DARABONBA_PTR_GET_DEFAULT(audioBitRate_, 0.0) };
      inline FrameRateAndBitRateInfos& setAudioBitRate(float audioBitRate) { DARABONBA_PTR_SET_VALUE(audioBitRate_, audioBitRate) };


      // audioFrameRate Field Functions 
      bool hasAudioFrameRate() const { return this->audioFrameRate_ != nullptr;};
      void deleteAudioFrameRate() { this->audioFrameRate_ = nullptr;};
      inline float getAudioFrameRate() const { DARABONBA_PTR_GET_DEFAULT(audioFrameRate_, 0.0) };
      inline FrameRateAndBitRateInfos& setAudioFrameRate(float audioFrameRate) { DARABONBA_PTR_SET_VALUE(audioFrameRate_, audioFrameRate) };


      // bitRate Field Functions 
      bool hasBitRate() const { return this->bitRate_ != nullptr;};
      void deleteBitRate() { this->bitRate_ = nullptr;};
      inline float getBitRate() const { DARABONBA_PTR_GET_DEFAULT(bitRate_, 0.0) };
      inline FrameRateAndBitRateInfos& setBitRate(float bitRate) { DARABONBA_PTR_SET_VALUE(bitRate_, bitRate) };


      // streamUrl Field Functions 
      bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
      void deleteStreamUrl() { this->streamUrl_ = nullptr;};
      inline string getStreamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
      inline FrameRateAndBitRateInfos& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline FrameRateAndBitRateInfos& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // videoBitRate Field Functions 
      bool hasVideoBitRate() const { return this->videoBitRate_ != nullptr;};
      void deleteVideoBitRate() { this->videoBitRate_ = nullptr;};
      inline float getVideoBitRate() const { DARABONBA_PTR_GET_DEFAULT(videoBitRate_, 0.0) };
      inline FrameRateAndBitRateInfos& setVideoBitRate(float videoBitRate) { DARABONBA_PTR_SET_VALUE(videoBitRate_, videoBitRate) };


      // videoFrameRate Field Functions 
      bool hasVideoFrameRate() const { return this->videoFrameRate_ != nullptr;};
      void deleteVideoFrameRate() { this->videoFrameRate_ = nullptr;};
      inline float getVideoFrameRate() const { DARABONBA_PTR_GET_DEFAULT(videoFrameRate_, 0.0) };
      inline FrameRateAndBitRateInfos& setVideoFrameRate(float videoFrameRate) { DARABONBA_PTR_SET_VALUE(videoFrameRate_, videoFrameRate) };


    protected:
      // The audio bitrate of the live stream. Unit: bit/s.
      shared_ptr<float> audioBitRate_ {};
      // The audio frame rate of the live stream. Unit: FPS.
      shared_ptr<float> audioFrameRate_ {};
      // The bitrate of the live stream. Unit: bit/s.
      shared_ptr<float> bitRate_ {};
      // The URL of the live stream.
      shared_ptr<string> streamUrl_ {};
      // The time when the data was collected. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> time_ {};
      // The video bitrate of the live stream. Unit: bit/s.
      shared_ptr<float> videoBitRate_ {};
      // The video frame rate of the live stream. Unit: frames per second (FPS).
      shared_ptr<float> videoFrameRate_ {};
    };

    virtual bool empty() const override { return this->frameRateAndBitRateInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // frameRateAndBitRateInfos Field Functions 
    bool hasFrameRateAndBitRateInfos() const { return this->frameRateAndBitRateInfos_ != nullptr;};
    void deleteFrameRateAndBitRateInfos() { this->frameRateAndBitRateInfos_ = nullptr;};
    inline const vector<DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody::FrameRateAndBitRateInfos> & getFrameRateAndBitRateInfos() const { DARABONBA_PTR_GET_CONST(frameRateAndBitRateInfos_, vector<DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody::FrameRateAndBitRateInfos>) };
    inline vector<DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody::FrameRateAndBitRateInfos> getFrameRateAndBitRateInfos() { DARABONBA_PTR_GET(frameRateAndBitRateInfos_, vector<DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody::FrameRateAndBitRateInfos>) };
    inline DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody& setFrameRateAndBitRateInfos(const vector<DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody::FrameRateAndBitRateInfos> & frameRateAndBitRateInfos) { DARABONBA_PTR_SET_VALUE(frameRateAndBitRateInfos_, frameRateAndBitRateInfos) };
    inline DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody& setFrameRateAndBitRateInfos(vector<DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody::FrameRateAndBitRateInfos> && frameRateAndBitRateInfos) { DARABONBA_PTR_SET_RVALUE(frameRateAndBitRateInfos_, frameRateAndBitRateInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The audio and video frame rates and bitrates at each time granularity.
    shared_ptr<vector<DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBody::FrameRateAndBitRateInfos>> frameRateAndBitRateInfos_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

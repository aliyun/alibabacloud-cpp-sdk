// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEMETRICDATARESPONSEBODYSTREAMDETAILDATASTREAMDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEMETRICDATARESPONSEBODYSTREAMDETAILDATASTREAMDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(TranscodeType, transcodeType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(TranscodeType, transcodeType_);
    };
    DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData() = default ;
    DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData(const DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData &) = default ;
    DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData(DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData &&) = default ;
    DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData() = default ;
    DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData& operator=(const DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData &) = default ;
    DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData& operator=(DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->duration_ != nullptr && this->fps_ != nullptr && this->region_ != nullptr && this->resolution_ != nullptr && this->streamName_ != nullptr
        && this->timeStamp_ != nullptr && this->transcodeType_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string resolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // transcodeType Field Functions 
    bool hasTranscodeType() const { return this->transcodeType_ != nullptr;};
    void deleteTranscodeType() { this->transcodeType_ = nullptr;};
    inline string transcodeType() const { DARABONBA_PTR_GET_DEFAULT(transcodeType_, "") };
    inline DescribeLiveStreamTranscodeMetricDataResponseBodyStreamDetailDataStreamData& setTranscodeType(string transcodeType) { DARABONBA_PTR_SET_VALUE(transcodeType_, transcodeType) };


  protected:
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The duration. Unit: seconds.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The frame rate.
    // 
    // Valid values:
    // 
    // *   <!-- -->
    // 
    //     <!-- -->
    // 
    //     normal
    // 
    //     <!-- -->
    // 
    // *   <!-- -->
    // 
    //     <!-- -->
    // 
    //     high
    // 
    //     <!-- -->
    // 
    // *   <!-- -->
    // 
    //     <!-- -->
    // 
    //     def
    // 
    //     <!-- -->
    std::shared_ptr<string> fps_ = nullptr;
    // The region.
    std::shared_ptr<string> region_ = nullptr;
    // The resolution. Valid values:
    // 
    // *   2K: 2K resolution
    // *   4K: 4K resolution
    // *   LD: low definition
    // *   SD: standard definition
    // *   HD: high definition
    // *   def: audio
    std::shared_ptr<string> resolution_ = nullptr;
    // The name of the stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The transcoding type. Valid values:
    // 
    // *   H264STD: standard transcoding based on H.264
    // *   H264NBHD: Narrowband HD™ transcoding based on H.264
    // *   H265STD: standard transcoding based on H.265
    // *   AUDIO: audio transcoding
    std::shared_ptr<string> transcodeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

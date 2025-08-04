// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDRECORDREQUESTSINGLESTREAMINGRECORDTRANSCODINGPARAMETERSAUDIO_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDRECORDREQUESTSINGLESTREAMINGRECORDTRANSCODINGPARAMETERSAUDIO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Codec, codec_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Codec, codec_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
    };
    StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio() = default ;
    StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio(const StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio &) = default ;
    StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio(StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio &&) = default ;
    StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio() = default ;
    StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio& operator=(const StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio &) = default ;
    StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio& operator=(StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bitrate_ != nullptr
        && this->codec_ != nullptr && this->sampleRate_ != nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int32_t bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
    inline StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string codec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline int32_t sampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
    inline StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


  protected:
    std::shared_ptr<int32_t> bitrate_ = nullptr;
    std::shared_ptr<string> codec_ = nullptr;
    std::shared_ptr<int32_t> sampleRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif

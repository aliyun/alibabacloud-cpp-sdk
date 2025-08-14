// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNELVIDEOSETTINGSVIDEOCODECSETTINGRATE_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNELVIDEOSETTINGSVIDEOCODECSETTINGRATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(BufferSize, bufferSize_);
      DARABONBA_PTR_TO_JSON(MaxBitrate, maxBitrate_);
      DARABONBA_PTR_TO_JSON(RateControlMode, rateControlMode_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(BufferSize, bufferSize_);
      DARABONBA_PTR_FROM_JSON(MaxBitrate, maxBitrate_);
      DARABONBA_PTR_FROM_JSON(RateControlMode, rateControlMode_);
    };
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate() = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate(const GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate &) = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate(GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate &&) = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate() = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate& operator=(const GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate &) = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate& operator=(GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bitrate_ != nullptr
        && this->bufferSize_ != nullptr && this->maxBitrate_ != nullptr && this->rateControlMode_ != nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int32_t bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // bufferSize Field Functions 
    bool hasBufferSize() const { return this->bufferSize_ != nullptr;};
    void deleteBufferSize() { this->bufferSize_ = nullptr;};
    inline int32_t bufferSize() const { DARABONBA_PTR_GET_DEFAULT(bufferSize_, 0) };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate& setBufferSize(int32_t bufferSize) { DARABONBA_PTR_SET_VALUE(bufferSize_, bufferSize) };


    // maxBitrate Field Functions 
    bool hasMaxBitrate() const { return this->maxBitrate_ != nullptr;};
    void deleteMaxBitrate() { this->maxBitrate_ = nullptr;};
    inline int32_t maxBitrate() const { DARABONBA_PTR_GET_DEFAULT(maxBitrate_, 0) };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate& setMaxBitrate(int32_t maxBitrate) { DARABONBA_PTR_SET_VALUE(maxBitrate_, maxBitrate) };


    // rateControlMode Field Functions 
    bool hasRateControlMode() const { return this->rateControlMode_ != nullptr;};
    void deleteRateControlMode() { this->rateControlMode_ = nullptr;};
    inline string rateControlMode() const { DARABONBA_PTR_GET_DEFAULT(rateControlMode_, "") };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate& setRateControlMode(string rateControlMode) { DARABONBA_PTR_SET_VALUE(rateControlMode_, rateControlMode) };


  protected:
    // The video bitrate. Unit: bit/s.
    std::shared_ptr<int32_t> bitrate_ = nullptr;
    // The video buffer size. Unit: bit/s.
    std::shared_ptr<int32_t> bufferSize_ = nullptr;
    // The maximum bitrate. Unit: bit/s.
    std::shared_ptr<int32_t> maxBitrate_ = nullptr;
    // The bitrate control mode.
    std::shared_ptr<string> rateControlMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

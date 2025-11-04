// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNELVIDEOSETTINGSVIDEOCODECSETTINGGOP_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNELVIDEOSETTINGSVIDEOCODECSETTINGGOP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop& obj) { 
      DARABONBA_PTR_TO_JSON(BframesNum, bframesNum_);
      DARABONBA_PTR_TO_JSON(GopSize, gopSize_);
      DARABONBA_PTR_TO_JSON(GopSizeUnits, gopSizeUnits_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop& obj) { 
      DARABONBA_PTR_FROM_JSON(BframesNum, bframesNum_);
      DARABONBA_PTR_FROM_JSON(GopSize, gopSize_);
      DARABONBA_PTR_FROM_JSON(GopSizeUnits, gopSizeUnits_);
    };
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop() = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop(const GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop &) = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop(GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop &&) = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop() = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop& operator=(const GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop &) = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop& operator=(GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bframesNum_ == nullptr
        && return this->gopSize_ == nullptr && return this->gopSizeUnits_ == nullptr; };
    // bframesNum Field Functions 
    bool hasBframesNum() const { return this->bframesNum_ != nullptr;};
    void deleteBframesNum() { this->bframesNum_ = nullptr;};
    inline int32_t bframesNum() const { DARABONBA_PTR_GET_DEFAULT(bframesNum_, 0) };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop& setBframesNum(int32_t bframesNum) { DARABONBA_PTR_SET_VALUE(bframesNum_, bframesNum) };


    // gopSize Field Functions 
    bool hasGopSize() const { return this->gopSize_ != nullptr;};
    void deleteGopSize() { this->gopSize_ = nullptr;};
    inline int32_t gopSize() const { DARABONBA_PTR_GET_DEFAULT(gopSize_, 0) };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop& setGopSize(int32_t gopSize) { DARABONBA_PTR_SET_VALUE(gopSize_, gopSize) };


    // gopSizeUnits Field Functions 
    bool hasGopSizeUnits() const { return this->gopSizeUnits_ != nullptr;};
    void deleteGopSizeUnits() { this->gopSizeUnits_ = nullptr;};
    inline string gopSizeUnits() const { DARABONBA_PTR_GET_DEFAULT(gopSizeUnits_, "") };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop& setGopSizeUnits(string gopSizeUnits) { DARABONBA_PTR_SET_VALUE(gopSizeUnits_, gopSizeUnits) };


  protected:
    // The number of B frames.
    std::shared_ptr<int32_t> bframesNum_ = nullptr;
    // The GOP size.
    std::shared_ptr<int32_t> gopSize_ = nullptr;
    // The GOP size unit.
    std::shared_ptr<string> gopSizeUnits_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

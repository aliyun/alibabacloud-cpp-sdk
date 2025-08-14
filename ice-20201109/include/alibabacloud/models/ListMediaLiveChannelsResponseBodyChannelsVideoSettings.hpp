// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSRESPONSEBODYCHANNELSVIDEOSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSRESPONSEBODYCHANNELSVIDEOSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaLiveChannelsResponseBodyChannelsVideoSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaLiveChannelsResponseBodyChannelsVideoSettings& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VideoCodec, videoCodec_);
      DARABONBA_PTR_TO_JSON(VideoCodecSetting, videoCodecSetting_);
      DARABONBA_PTR_TO_JSON(VideoCodecType, videoCodecType_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaLiveChannelsResponseBodyChannelsVideoSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VideoCodec, videoCodec_);
      DARABONBA_PTR_FROM_JSON(VideoCodecSetting, videoCodecSetting_);
      DARABONBA_PTR_FROM_JSON(VideoCodecType, videoCodecType_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    ListMediaLiveChannelsResponseBodyChannelsVideoSettings() = default ;
    ListMediaLiveChannelsResponseBodyChannelsVideoSettings(const ListMediaLiveChannelsResponseBodyChannelsVideoSettings &) = default ;
    ListMediaLiveChannelsResponseBodyChannelsVideoSettings(ListMediaLiveChannelsResponseBodyChannelsVideoSettings &&) = default ;
    ListMediaLiveChannelsResponseBodyChannelsVideoSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaLiveChannelsResponseBodyChannelsVideoSettings() = default ;
    ListMediaLiveChannelsResponseBodyChannelsVideoSettings& operator=(const ListMediaLiveChannelsResponseBodyChannelsVideoSettings &) = default ;
    ListMediaLiveChannelsResponseBodyChannelsVideoSettings& operator=(ListMediaLiveChannelsResponseBodyChannelsVideoSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->height_ != nullptr
        && this->name_ != nullptr && this->videoCodec_ != nullptr && this->videoCodecSetting_ != nullptr && this->videoCodecType_ != nullptr && this->width_ != nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline ListMediaLiveChannelsResponseBodyChannelsVideoSettings& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMediaLiveChannelsResponseBodyChannelsVideoSettings& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // videoCodec Field Functions 
    bool hasVideoCodec() const { return this->videoCodec_ != nullptr;};
    void deleteVideoCodec() { this->videoCodec_ = nullptr;};
    inline string videoCodec() const { DARABONBA_PTR_GET_DEFAULT(videoCodec_, "") };
    inline ListMediaLiveChannelsResponseBodyChannelsVideoSettings& setVideoCodec(string videoCodec) { DARABONBA_PTR_SET_VALUE(videoCodec_, videoCodec) };


    // videoCodecSetting Field Functions 
    bool hasVideoCodecSetting() const { return this->videoCodecSetting_ != nullptr;};
    void deleteVideoCodecSetting() { this->videoCodecSetting_ = nullptr;};
    inline const Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting & videoCodecSetting() const { DARABONBA_PTR_GET_CONST(videoCodecSetting_, Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting) };
    inline Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting videoCodecSetting() { DARABONBA_PTR_GET(videoCodecSetting_, Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting) };
    inline ListMediaLiveChannelsResponseBodyChannelsVideoSettings& setVideoCodecSetting(const Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting & videoCodecSetting) { DARABONBA_PTR_SET_VALUE(videoCodecSetting_, videoCodecSetting) };
    inline ListMediaLiveChannelsResponseBodyChannelsVideoSettings& setVideoCodecSetting(Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting && videoCodecSetting) { DARABONBA_PTR_SET_RVALUE(videoCodecSetting_, videoCodecSetting) };


    // videoCodecType Field Functions 
    bool hasVideoCodecType() const { return this->videoCodecType_ != nullptr;};
    void deleteVideoCodecType() { this->videoCodecType_ = nullptr;};
    inline string videoCodecType() const { DARABONBA_PTR_GET_DEFAULT(videoCodecType_, "") };
    inline ListMediaLiveChannelsResponseBodyChannelsVideoSettings& setVideoCodecType(string videoCodecType) { DARABONBA_PTR_SET_VALUE(videoCodecType_, videoCodecType) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline ListMediaLiveChannelsResponseBodyChannelsVideoSettings& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The height of the video in pixels.
    std::shared_ptr<int32_t> height_ = nullptr;
    // The name of the video settings.
    std::shared_ptr<string> name_ = nullptr;
    // The video codec.
    std::shared_ptr<string> videoCodec_ = nullptr;
    // The video encoding settings.
    std::shared_ptr<Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting> videoCodecSetting_ = nullptr;
    // The video transcoding method. Valid values: NORMAL (regular transcoding) and NBHD (Narrowband HD™ transcoding).
    std::shared_ptr<string> videoCodecType_ = nullptr;
    // The width of the video in pixels.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

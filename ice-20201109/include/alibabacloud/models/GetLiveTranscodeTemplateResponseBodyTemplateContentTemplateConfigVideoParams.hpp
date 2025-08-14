// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVETRANSCODETEMPLATERESPONSEBODYTEMPLATECONTENTTEMPLATECONFIGVIDEOPARAMS_HPP_
#define ALIBABACLOUD_MODELS_GETLIVETRANSCODETEMPLATERESPONSEBODYTEMPLATECONTENTTEMPLATECONFIGVIDEOPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Codec, codec_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Gop, gop_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Codec, codec_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Gop, gop_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams() = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams(const GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams &) = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams(GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams &&) = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams() = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams& operator=(const GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams &) = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams& operator=(GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bitrate_ != nullptr
        && this->codec_ != nullptr && this->fps_ != nullptr && this->gop_ != nullptr && this->height_ != nullptr && this->profile_ != nullptr
        && this->width_ != nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string codec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // gop Field Functions 
    bool hasGop() const { return this->gop_ != nullptr;};
    void deleteGop() { this->gop_ = nullptr;};
    inline string gop() const { DARABONBA_PTR_GET_DEFAULT(gop_, "") };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams& setGop(string gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The bitrate of the output video.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The encoding type.
    std::shared_ptr<string> codec_ = nullptr;
    // The frame rate of the output video.
    std::shared_ptr<string> fps_ = nullptr;
    // The group of pictures (GOP) of the output video.
    std::shared_ptr<string> gop_ = nullptr;
    // The height of the output video.
    std::shared_ptr<string> height_ = nullptr;
    // The encoding profile.
    std::shared_ptr<string> profile_ = nullptr;
    // The width of the output video.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

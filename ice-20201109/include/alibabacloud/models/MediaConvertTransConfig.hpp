// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTTRANSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTTRANSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertTransConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertTransConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AdjDarMethod, adjDarMethod_);
      DARABONBA_PTR_TO_JSON(IsCheckAudioBitrate, isCheckAudioBitrate_);
      DARABONBA_PTR_TO_JSON(IsCheckAudioBitrateFail, isCheckAudioBitrateFail_);
      DARABONBA_PTR_TO_JSON(IsCheckReso, isCheckReso_);
      DARABONBA_PTR_TO_JSON(IsCheckResoFail, isCheckResoFail_);
      DARABONBA_PTR_TO_JSON(IsCheckVideoBitrate, isCheckVideoBitrate_);
      DARABONBA_PTR_TO_JSON(IsCheckVideoBitrateFail, isCheckVideoBitrateFail_);
      DARABONBA_PTR_TO_JSON(TransMode, transMode_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertTransConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AdjDarMethod, adjDarMethod_);
      DARABONBA_PTR_FROM_JSON(IsCheckAudioBitrate, isCheckAudioBitrate_);
      DARABONBA_PTR_FROM_JSON(IsCheckAudioBitrateFail, isCheckAudioBitrateFail_);
      DARABONBA_PTR_FROM_JSON(IsCheckReso, isCheckReso_);
      DARABONBA_PTR_FROM_JSON(IsCheckResoFail, isCheckResoFail_);
      DARABONBA_PTR_FROM_JSON(IsCheckVideoBitrate, isCheckVideoBitrate_);
      DARABONBA_PTR_FROM_JSON(IsCheckVideoBitrateFail, isCheckVideoBitrateFail_);
      DARABONBA_PTR_FROM_JSON(TransMode, transMode_);
    };
    MediaConvertTransConfig() = default ;
    MediaConvertTransConfig(const MediaConvertTransConfig &) = default ;
    MediaConvertTransConfig(MediaConvertTransConfig &&) = default ;
    MediaConvertTransConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertTransConfig() = default ;
    MediaConvertTransConfig& operator=(const MediaConvertTransConfig &) = default ;
    MediaConvertTransConfig& operator=(MediaConvertTransConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adjDarMethod_ == nullptr
        && this->isCheckAudioBitrate_ == nullptr && this->isCheckAudioBitrateFail_ == nullptr && this->isCheckReso_ == nullptr && this->isCheckResoFail_ == nullptr && this->isCheckVideoBitrate_ == nullptr
        && this->isCheckVideoBitrateFail_ == nullptr && this->transMode_ == nullptr; };
    // adjDarMethod Field Functions 
    bool hasAdjDarMethod() const { return this->adjDarMethod_ != nullptr;};
    void deleteAdjDarMethod() { this->adjDarMethod_ = nullptr;};
    inline string getAdjDarMethod() const { DARABONBA_PTR_GET_DEFAULT(adjDarMethod_, "") };
    inline MediaConvertTransConfig& setAdjDarMethod(string adjDarMethod) { DARABONBA_PTR_SET_VALUE(adjDarMethod_, adjDarMethod) };


    // isCheckAudioBitrate Field Functions 
    bool hasIsCheckAudioBitrate() const { return this->isCheckAudioBitrate_ != nullptr;};
    void deleteIsCheckAudioBitrate() { this->isCheckAudioBitrate_ = nullptr;};
    inline bool getIsCheckAudioBitrate() const { DARABONBA_PTR_GET_DEFAULT(isCheckAudioBitrate_, false) };
    inline MediaConvertTransConfig& setIsCheckAudioBitrate(bool isCheckAudioBitrate) { DARABONBA_PTR_SET_VALUE(isCheckAudioBitrate_, isCheckAudioBitrate) };


    // isCheckAudioBitrateFail Field Functions 
    bool hasIsCheckAudioBitrateFail() const { return this->isCheckAudioBitrateFail_ != nullptr;};
    void deleteIsCheckAudioBitrateFail() { this->isCheckAudioBitrateFail_ = nullptr;};
    inline bool getIsCheckAudioBitrateFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckAudioBitrateFail_, false) };
    inline MediaConvertTransConfig& setIsCheckAudioBitrateFail(bool isCheckAudioBitrateFail) { DARABONBA_PTR_SET_VALUE(isCheckAudioBitrateFail_, isCheckAudioBitrateFail) };


    // isCheckReso Field Functions 
    bool hasIsCheckReso() const { return this->isCheckReso_ != nullptr;};
    void deleteIsCheckReso() { this->isCheckReso_ = nullptr;};
    inline bool getIsCheckReso() const { DARABONBA_PTR_GET_DEFAULT(isCheckReso_, false) };
    inline MediaConvertTransConfig& setIsCheckReso(bool isCheckReso) { DARABONBA_PTR_SET_VALUE(isCheckReso_, isCheckReso) };


    // isCheckResoFail Field Functions 
    bool hasIsCheckResoFail() const { return this->isCheckResoFail_ != nullptr;};
    void deleteIsCheckResoFail() { this->isCheckResoFail_ = nullptr;};
    inline bool getIsCheckResoFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckResoFail_, false) };
    inline MediaConvertTransConfig& setIsCheckResoFail(bool isCheckResoFail) { DARABONBA_PTR_SET_VALUE(isCheckResoFail_, isCheckResoFail) };


    // isCheckVideoBitrate Field Functions 
    bool hasIsCheckVideoBitrate() const { return this->isCheckVideoBitrate_ != nullptr;};
    void deleteIsCheckVideoBitrate() { this->isCheckVideoBitrate_ = nullptr;};
    inline bool getIsCheckVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(isCheckVideoBitrate_, false) };
    inline MediaConvertTransConfig& setIsCheckVideoBitrate(bool isCheckVideoBitrate) { DARABONBA_PTR_SET_VALUE(isCheckVideoBitrate_, isCheckVideoBitrate) };


    // isCheckVideoBitrateFail Field Functions 
    bool hasIsCheckVideoBitrateFail() const { return this->isCheckVideoBitrateFail_ != nullptr;};
    void deleteIsCheckVideoBitrateFail() { this->isCheckVideoBitrateFail_ = nullptr;};
    inline bool getIsCheckVideoBitrateFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckVideoBitrateFail_, false) };
    inline MediaConvertTransConfig& setIsCheckVideoBitrateFail(bool isCheckVideoBitrateFail) { DARABONBA_PTR_SET_VALUE(isCheckVideoBitrateFail_, isCheckVideoBitrateFail) };


    // transMode Field Functions 
    bool hasTransMode() const { return this->transMode_ != nullptr;};
    void deleteTransMode() { this->transMode_ = nullptr;};
    inline string getTransMode() const { DARABONBA_PTR_GET_DEFAULT(transMode_, "") };
    inline MediaConvertTransConfig& setTransMode(string transMode) { DARABONBA_PTR_SET_VALUE(transMode_, transMode) };


  protected:
    // The method for adjusting the resolution. This parameter takes effect only if both the Width and Height parameters are specified. You can use this parameter together with the LongShortMode parameter.
    // 
    // *   Valid values: rescale, crop, pad, and none.
    // *   Default value: none.
    // *
    shared_ptr<string> adjDarMethod_ {};
    // Specifies whether to check the audio bitrate. Mutually exclusive with IsCheckVideoBitrateFail. IsCheckVideoBitrateFail has a higher priority.
    // 
    // *   true: checks the audio bitrate. If the source bitrate is lower than the target, the task will transcode using the source bitrate.
    // 
    // *   false: does not check the audio bitrate.
    // 
    // *   Default value:
    // 
    //     *   If this parameter is not specified and the codec of the output audio is different from that of the input audio, the default value is false.
    //     *   If this parameter is not specified and the codec of the output audio is the same as that of the input audio, the default value is true.
    shared_ptr<bool> isCheckAudioBitrate_ {};
    // Specifies whether to check the audio bitrate. Mutually exclusive with IsCheckAudioBitrate. This parameter has a higher priority.
    // 
    // *   true: checks the audio bitrate. If the source bitrate is lower than the target, the task will fail.
    // *   false: does not check the audio bitrate.
    // *   Default value: false.
    shared_ptr<bool> isCheckAudioBitrateFail_ {};
    // Specifies whether to check the video resolution. Mutually exclusive with IsCheckResoFail. IsCheckResoFail has a higher priority.
    // 
    // *   true: checks the video resolution. If the source resolution (width or height) is smaller than the target, the task will transcode using the source resolution.
    // *   false: does not check the video resolution.
    // *   Default value: false.
    shared_ptr<bool> isCheckReso_ {};
    // Specifies whether to check the video resolution. Mutually exclusive with IsCheckReso. This parameter has a higher priority.
    // 
    // *   true: checks the video resolution. If the source resolution (width or height) is smaller than the target, the task will fail.
    // *   false: does not check the video resolution.
    // *   Default value: false.
    shared_ptr<bool> isCheckResoFail_ {};
    // Specifies whether to check the video bitrate. Mutually exclusive with IsCheckVideoBitrateFail. IsCheckVideoBitrateFail has a higher priority.
    // 
    // *   true: checks the video bitrate. If the source bitrate is lower than the target, the task will transcode using the source bitrate.
    // *   false: does not check the video bitrate.
    // *   Default value: false.
    shared_ptr<bool> isCheckVideoBitrate_ {};
    // Specifies whether to check the video bitrate. Mutually exclusive with IsCheckVideoBitrate. This parameter has a higher priority.
    // 
    // *   true: checks the video bitrate. If the source bitrate is lower than the target, the task will fail.
    // *   false: does not check the video bitrate.
    // *   Default value: false.
    shared_ptr<bool> isCheckVideoBitrateFail_ {};
    // The video bitrate control mode. This is only valid for H.264, H.265, and AV1 codecs and must be used with the correct Bitrate or Crf settings. Valid values:
    // 
    // *   CBR: Constant bitrate mode.
    // *   onepass: Typically used for Average bitrate mode (ABR). Faster than twopass.
    // *   twopass: Typically used for variable bitrate mode (VBR). Slower than onepass.
    // *   fixCRF: Constant Rate Factor (quality-based) mode.
    // *   If you specify the Bitrate parameter, the default value of this parameter is onepass. If you do not specify the Bitrate parameter, the default value of this parameter is fixCRF, and the default value of the Crf parameter is used.
    shared_ptr<string> transMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

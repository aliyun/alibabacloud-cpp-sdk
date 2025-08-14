// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMSTRANSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMSTRANSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AdjDarMethod, adjDarMethod_);
      DARABONBA_PTR_TO_JSON(IsCheckAudioBitrate, isCheckAudioBitrate_);
      DARABONBA_PTR_TO_JSON(IsCheckAudioBitrateFail, isCheckAudioBitrateFail_);
      DARABONBA_PTR_TO_JSON(IsCheckReso, isCheckReso_);
      DARABONBA_PTR_TO_JSON(IsCheckResoFail, isCheckResoFail_);
      DARABONBA_PTR_TO_JSON(IsCheckVideoBitrate, isCheckVideoBitrate_);
      DARABONBA_PTR_TO_JSON(IsCheckVideoBitrateFail, isCheckVideoBitrateFail_);
      DARABONBA_PTR_TO_JSON(TransMode, transMode_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AdjDarMethod, adjDarMethod_);
      DARABONBA_PTR_FROM_JSON(IsCheckAudioBitrate, isCheckAudioBitrate_);
      DARABONBA_PTR_FROM_JSON(IsCheckAudioBitrateFail, isCheckAudioBitrateFail_);
      DARABONBA_PTR_FROM_JSON(IsCheckReso, isCheckReso_);
      DARABONBA_PTR_FROM_JSON(IsCheckResoFail, isCheckResoFail_);
      DARABONBA_PTR_FROM_JSON(IsCheckVideoBitrate, isCheckVideoBitrate_);
      DARABONBA_PTR_FROM_JSON(IsCheckVideoBitrateFail, isCheckVideoBitrateFail_);
      DARABONBA_PTR_FROM_JSON(TransMode, transMode_);
    };
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig() = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig(const SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig &) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig(SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig &&) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig() = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig& operator=(const SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig &) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig& operator=(SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adjDarMethod_ != nullptr
        && this->isCheckAudioBitrate_ != nullptr && this->isCheckAudioBitrateFail_ != nullptr && this->isCheckReso_ != nullptr && this->isCheckResoFail_ != nullptr && this->isCheckVideoBitrate_ != nullptr
        && this->isCheckVideoBitrateFail_ != nullptr && this->transMode_ != nullptr; };
    // adjDarMethod Field Functions 
    bool hasAdjDarMethod() const { return this->adjDarMethod_ != nullptr;};
    void deleteAdjDarMethod() { this->adjDarMethod_ = nullptr;};
    inline string adjDarMethod() const { DARABONBA_PTR_GET_DEFAULT(adjDarMethod_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig& setAdjDarMethod(string adjDarMethod) { DARABONBA_PTR_SET_VALUE(adjDarMethod_, adjDarMethod) };


    // isCheckAudioBitrate Field Functions 
    bool hasIsCheckAudioBitrate() const { return this->isCheckAudioBitrate_ != nullptr;};
    void deleteIsCheckAudioBitrate() { this->isCheckAudioBitrate_ = nullptr;};
    inline string isCheckAudioBitrate() const { DARABONBA_PTR_GET_DEFAULT(isCheckAudioBitrate_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig& setIsCheckAudioBitrate(string isCheckAudioBitrate) { DARABONBA_PTR_SET_VALUE(isCheckAudioBitrate_, isCheckAudioBitrate) };


    // isCheckAudioBitrateFail Field Functions 
    bool hasIsCheckAudioBitrateFail() const { return this->isCheckAudioBitrateFail_ != nullptr;};
    void deleteIsCheckAudioBitrateFail() { this->isCheckAudioBitrateFail_ = nullptr;};
    inline string isCheckAudioBitrateFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckAudioBitrateFail_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig& setIsCheckAudioBitrateFail(string isCheckAudioBitrateFail) { DARABONBA_PTR_SET_VALUE(isCheckAudioBitrateFail_, isCheckAudioBitrateFail) };


    // isCheckReso Field Functions 
    bool hasIsCheckReso() const { return this->isCheckReso_ != nullptr;};
    void deleteIsCheckReso() { this->isCheckReso_ = nullptr;};
    inline string isCheckReso() const { DARABONBA_PTR_GET_DEFAULT(isCheckReso_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig& setIsCheckReso(string isCheckReso) { DARABONBA_PTR_SET_VALUE(isCheckReso_, isCheckReso) };


    // isCheckResoFail Field Functions 
    bool hasIsCheckResoFail() const { return this->isCheckResoFail_ != nullptr;};
    void deleteIsCheckResoFail() { this->isCheckResoFail_ = nullptr;};
    inline string isCheckResoFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckResoFail_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig& setIsCheckResoFail(string isCheckResoFail) { DARABONBA_PTR_SET_VALUE(isCheckResoFail_, isCheckResoFail) };


    // isCheckVideoBitrate Field Functions 
    bool hasIsCheckVideoBitrate() const { return this->isCheckVideoBitrate_ != nullptr;};
    void deleteIsCheckVideoBitrate() { this->isCheckVideoBitrate_ = nullptr;};
    inline string isCheckVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(isCheckVideoBitrate_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig& setIsCheckVideoBitrate(string isCheckVideoBitrate) { DARABONBA_PTR_SET_VALUE(isCheckVideoBitrate_, isCheckVideoBitrate) };


    // isCheckVideoBitrateFail Field Functions 
    bool hasIsCheckVideoBitrateFail() const { return this->isCheckVideoBitrateFail_ != nullptr;};
    void deleteIsCheckVideoBitrateFail() { this->isCheckVideoBitrateFail_ = nullptr;};
    inline string isCheckVideoBitrateFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckVideoBitrateFail_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig& setIsCheckVideoBitrateFail(string isCheckVideoBitrateFail) { DARABONBA_PTR_SET_VALUE(isCheckVideoBitrateFail_, isCheckVideoBitrateFail) };


    // transMode Field Functions 
    bool hasTransMode() const { return this->transMode_ != nullptr;};
    void deleteTransMode() { this->transMode_ = nullptr;};
    inline string transMode() const { DARABONBA_PTR_GET_DEFAULT(transMode_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig& setTransMode(string transMode) { DARABONBA_PTR_SET_VALUE(transMode_, transMode) };


  protected:
    // The method that is used to adjust the resolution. This parameter takes effect only if both the Width and Height parameters are specified. You can use this parameter together with the LongShortMode parameter.
    // 
    // Valid values: rescale, crop, pad, and none.
    // 
    // Default value: none.
    std::shared_ptr<string> adjDarMethod_ = nullptr;
    // Specifies whether to check the audio bitrate. You can specify only one of the IsCheckAudioBitrate and IsCheckAudioBitrateFail parameters. The priority of the IsCheckAudioBitrateFail parameter is higher. Valid values:
    // 
    // *   true: checks the video resolution. If the bitrate of the input audio is less than that of the output audio, the bitrate of the input audio is used for transcoding.
    // *   false: does not check the video resolution.
    // 
    // Default value:
    // 
    // *   If this parameter is not specified and the codec of the output audio is different from that of the input audio, the default value is false.
    // *   If this parameter is not specified and the codec of the output audio is the same as that of the input audio, the default value is true.
    std::shared_ptr<string> isCheckAudioBitrate_ = nullptr;
    // Specifies whether to check the audio bitrate. You can specify only one of the IsCheckAudioBitrate and IsCheckAudioBitrateFail parameters. The priority of the IsCheckAudioBitrateFail parameter is higher. Valid values:
    // 
    // *   true: checks the video resolution. If the bitrate of the input audio is less than that of the output audio, the transcoding job fails.
    // *   false: does not check the video resolution.
    // 
    // Default value: false.
    std::shared_ptr<string> isCheckAudioBitrateFail_ = nullptr;
    // Specifies whether to check the video resolution. You can specify only one of the IsCheckReso and IsCheckResoFail parameters. The priority of the IsCheckResoFail parameter is higher. Valid values:
    // 
    // *   true: checks the video resolution. If the width or height of the input video is less than that of the output video, the resolution of the input video is used for transcoding.
    // *   false: does not check the video resolution.
    // 
    // Default value: false.
    std::shared_ptr<string> isCheckReso_ = nullptr;
    // Specifies whether to check the video resolution. You can specify only one of the IsCheckReso and IsCheckResoFail parameters. The priority of the IsCheckResoFail parameter is higher. Valid values:
    // 
    // *   true: checks the video resolution. If the width or height of the input video is less than that of the output video, the transcoding job fails.
    // *   false: does not check the video resolution.
    // 
    // Default value: false.
    std::shared_ptr<string> isCheckResoFail_ = nullptr;
    // Specifies whether to check the video bitrate. You can specify only one of the IsCheckVideoBitrate and IsCheckVideoBitrateFail parameters. The priority of the IsCheckVideoBitrateFail parameter is higher. Valid values:
    // 
    // *   true: checks the video resolution. If the bitrate of the input video is less than that of the output video, the bitrate of the input video is used for transcoding.
    // *   false: does not check the video resolution.
    // 
    // Default value: false.
    std::shared_ptr<string> isCheckVideoBitrate_ = nullptr;
    // Specifies whether to check the video bitrate. You can specify only one of the IsCheckVideoBitrate and IsCheckVideoBitrateFail parameters. The priority of the IsCheckVideoBitrateFail parameter is higher. Valid values:
    // 
    // *   true: checks the video resolution. If the bitrate of the input video is less than that of the output video, the transcoding job fails.
    // *   false: does not check the video resolution.
    // 
    // Default value: false.
    std::shared_ptr<string> isCheckVideoBitrateFail_ = nullptr;
    // The video transcoding mode. Valid values:
    // 
    // *   onepass: You can set this parameter to onepass if the Bitrate parameter is set to ABR. The encoding speed of this mode is faster than that of the twopass mode.
    // *   twopass: You can set this parameter to twopass if the Bitrate parameter is set to VBR. The encoding speed of this mode is slower than that of the onepass mode.
    // *   CBR: the constant bitrate mode.
    // 
    // Default value: onepass.
    std::shared_ptr<string> transMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

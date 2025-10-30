// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPPOLICYREQUESTVIDEOPOLICY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPPOLICYREQUESTVIDEOPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyAppPolicyRequestVideoPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppPolicyRequestVideoPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(FrameRate, frameRate_);
      DARABONBA_PTR_TO_JSON(SessionResolutionHeight, sessionResolutionHeight_);
      DARABONBA_PTR_TO_JSON(SessionResolutionWidth, sessionResolutionWidth_);
      DARABONBA_PTR_TO_JSON(StreamingMode, streamingMode_);
      DARABONBA_PTR_TO_JSON(TerminalResolutionAdaptive, terminalResolutionAdaptive_);
      DARABONBA_PTR_TO_JSON(VisualQualityStrategy, visualQualityStrategy_);
      DARABONBA_PTR_TO_JSON(Webrtc, webrtc_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppPolicyRequestVideoPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(FrameRate, frameRate_);
      DARABONBA_PTR_FROM_JSON(SessionResolutionHeight, sessionResolutionHeight_);
      DARABONBA_PTR_FROM_JSON(SessionResolutionWidth, sessionResolutionWidth_);
      DARABONBA_PTR_FROM_JSON(StreamingMode, streamingMode_);
      DARABONBA_PTR_FROM_JSON(TerminalResolutionAdaptive, terminalResolutionAdaptive_);
      DARABONBA_PTR_FROM_JSON(VisualQualityStrategy, visualQualityStrategy_);
      DARABONBA_PTR_FROM_JSON(Webrtc, webrtc_);
    };
    ModifyAppPolicyRequestVideoPolicy() = default ;
    ModifyAppPolicyRequestVideoPolicy(const ModifyAppPolicyRequestVideoPolicy &) = default ;
    ModifyAppPolicyRequestVideoPolicy(ModifyAppPolicyRequestVideoPolicy &&) = default ;
    ModifyAppPolicyRequestVideoPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppPolicyRequestVideoPolicy() = default ;
    ModifyAppPolicyRequestVideoPolicy& operator=(const ModifyAppPolicyRequestVideoPolicy &) = default ;
    ModifyAppPolicyRequestVideoPolicy& operator=(ModifyAppPolicyRequestVideoPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->frameRate_ == nullptr
        && return this->sessionResolutionHeight_ == nullptr && return this->sessionResolutionWidth_ == nullptr && return this->streamingMode_ == nullptr && return this->terminalResolutionAdaptive_ == nullptr && return this->visualQualityStrategy_ == nullptr
        && return this->webrtc_ == nullptr; };
    // frameRate Field Functions 
    bool hasFrameRate() const { return this->frameRate_ != nullptr;};
    void deleteFrameRate() { this->frameRate_ = nullptr;};
    inline int32_t frameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, 0) };
    inline ModifyAppPolicyRequestVideoPolicy& setFrameRate(int32_t frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


    // sessionResolutionHeight Field Functions 
    bool hasSessionResolutionHeight() const { return this->sessionResolutionHeight_ != nullptr;};
    void deleteSessionResolutionHeight() { this->sessionResolutionHeight_ = nullptr;};
    inline int32_t sessionResolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(sessionResolutionHeight_, 0) };
    inline ModifyAppPolicyRequestVideoPolicy& setSessionResolutionHeight(int32_t sessionResolutionHeight) { DARABONBA_PTR_SET_VALUE(sessionResolutionHeight_, sessionResolutionHeight) };


    // sessionResolutionWidth Field Functions 
    bool hasSessionResolutionWidth() const { return this->sessionResolutionWidth_ != nullptr;};
    void deleteSessionResolutionWidth() { this->sessionResolutionWidth_ = nullptr;};
    inline int32_t sessionResolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(sessionResolutionWidth_, 0) };
    inline ModifyAppPolicyRequestVideoPolicy& setSessionResolutionWidth(int32_t sessionResolutionWidth) { DARABONBA_PTR_SET_VALUE(sessionResolutionWidth_, sessionResolutionWidth) };


    // streamingMode Field Functions 
    bool hasStreamingMode() const { return this->streamingMode_ != nullptr;};
    void deleteStreamingMode() { this->streamingMode_ = nullptr;};
    inline string streamingMode() const { DARABONBA_PTR_GET_DEFAULT(streamingMode_, "") };
    inline ModifyAppPolicyRequestVideoPolicy& setStreamingMode(string streamingMode) { DARABONBA_PTR_SET_VALUE(streamingMode_, streamingMode) };


    // terminalResolutionAdaptive Field Functions 
    bool hasTerminalResolutionAdaptive() const { return this->terminalResolutionAdaptive_ != nullptr;};
    void deleteTerminalResolutionAdaptive() { this->terminalResolutionAdaptive_ = nullptr;};
    inline bool terminalResolutionAdaptive() const { DARABONBA_PTR_GET_DEFAULT(terminalResolutionAdaptive_, false) };
    inline ModifyAppPolicyRequestVideoPolicy& setTerminalResolutionAdaptive(bool terminalResolutionAdaptive) { DARABONBA_PTR_SET_VALUE(terminalResolutionAdaptive_, terminalResolutionAdaptive) };


    // visualQualityStrategy Field Functions 
    bool hasVisualQualityStrategy() const { return this->visualQualityStrategy_ != nullptr;};
    void deleteVisualQualityStrategy() { this->visualQualityStrategy_ = nullptr;};
    inline string visualQualityStrategy() const { DARABONBA_PTR_GET_DEFAULT(visualQualityStrategy_, "") };
    inline ModifyAppPolicyRequestVideoPolicy& setVisualQualityStrategy(string visualQualityStrategy) { DARABONBA_PTR_SET_VALUE(visualQualityStrategy_, visualQualityStrategy) };


    // webrtc Field Functions 
    bool hasWebrtc() const { return this->webrtc_ != nullptr;};
    void deleteWebrtc() { this->webrtc_ = nullptr;};
    inline bool webrtc() const { DARABONBA_PTR_GET_DEFAULT(webrtc_, false) };
    inline ModifyAppPolicyRequestVideoPolicy& setWebrtc(bool webrtc) { DARABONBA_PTR_SET_VALUE(webrtc_, webrtc) };


  protected:
    // The frame rate (FPS).
    // 
    // Enumerated values:
    // 
    // *   30: 30 FPS
    // *   60: 60 FPS
    std::shared_ptr<int32_t> frameRate_ = nullptr;
    // The height of the resolution, in pixels.
    std::shared_ptr<int32_t> sessionResolutionHeight_ = nullptr;
    // The width of the resolution, in pixels.
    std::shared_ptr<int32_t> sessionResolutionWidth_ = nullptr;
    // The stream mode. This parameter is used together with `Webrtc` to specify the protocol type.
    // 
    // *   If you set `Webrtc` to `true` and `StreamingMode` to `video`, Web Real-Time Communications (WebRTC) streams are used.
    // *   If you set `Webrtc` to `false` and `StreamingMode` to `video`, video streams are used.
    // *   If you set `Webrtc` to `false` and `StreamingMode` to `mix`, mixed streams are used.
    std::shared_ptr<string> streamingMode_ = nullptr;
    // Whether to use adaptive resolution.
    // 
    // *   `true`: The session resolution changes with the display area of the terminal. In this case, `SessionResolutionWidth` indicates the maximum resolution width and `SessionResolutionHeight` indicates the maximum resolution height.
    // *   `false`: The session resolution does not change with the display area of the terminal. In this case, `SessionResolutionWidth` specifies the fixed resolution width and `SessionResolutionHeight` specifies the fixed resolution height.
    std::shared_ptr<bool> terminalResolutionAdaptive_ = nullptr;
    // The image quality policy.
    // 
    // Enumerated values:
    // 
    // *   adaptive: adaptive.
    // *   smooth: smooth first.
    // *   quality: quality first.
    std::shared_ptr<string> visualQualityStrategy_ = nullptr;
    // Specifies whether to enable WebRTC. This parameter is used together with `StreamingMode` to specify the protocol type.
    // 
    // *   If you set `Webrtc` to `true` and `StreamingMode` to `video`, WebRTC streams are used.
    // *   If you set `Webrtc` to `false` and `StreamingMode` to `video`, video streams are used.
    // *   If you set `Webrtc` to `false` and `StreamingMode` to `mix`, mixed streams are used.
    std::shared_ptr<bool> webrtc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif

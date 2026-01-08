// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyAppPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppPolicyId, appPolicyId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(VideoPolicy, videoPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppPolicyId, appPolicyId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(VideoPolicy, videoPolicy_);
    };
    ModifyAppPolicyRequest() = default ;
    ModifyAppPolicyRequest(const ModifyAppPolicyRequest &) = default ;
    ModifyAppPolicyRequest(ModifyAppPolicyRequest &&) = default ;
    ModifyAppPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppPolicyRequest() = default ;
    ModifyAppPolicyRequest& operator=(const ModifyAppPolicyRequest &) = default ;
    ModifyAppPolicyRequest& operator=(ModifyAppPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VideoPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VideoPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(FrameRate, frameRate_);
        DARABONBA_PTR_TO_JSON(SessionResolutionHeight, sessionResolutionHeight_);
        DARABONBA_PTR_TO_JSON(SessionResolutionWidth, sessionResolutionWidth_);
        DARABONBA_PTR_TO_JSON(StreamingMode, streamingMode_);
        DARABONBA_PTR_TO_JSON(TerminalResolutionAdaptive, terminalResolutionAdaptive_);
        DARABONBA_PTR_TO_JSON(VisualQualityStrategy, visualQualityStrategy_);
        DARABONBA_PTR_TO_JSON(Webrtc, webrtc_);
      };
      friend void from_json(const Darabonba::Json& j, VideoPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(FrameRate, frameRate_);
        DARABONBA_PTR_FROM_JSON(SessionResolutionHeight, sessionResolutionHeight_);
        DARABONBA_PTR_FROM_JSON(SessionResolutionWidth, sessionResolutionWidth_);
        DARABONBA_PTR_FROM_JSON(StreamingMode, streamingMode_);
        DARABONBA_PTR_FROM_JSON(TerminalResolutionAdaptive, terminalResolutionAdaptive_);
        DARABONBA_PTR_FROM_JSON(VisualQualityStrategy, visualQualityStrategy_);
        DARABONBA_PTR_FROM_JSON(Webrtc, webrtc_);
      };
      VideoPolicy() = default ;
      VideoPolicy(const VideoPolicy &) = default ;
      VideoPolicy(VideoPolicy &&) = default ;
      VideoPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VideoPolicy() = default ;
      VideoPolicy& operator=(const VideoPolicy &) = default ;
      VideoPolicy& operator=(VideoPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->frameRate_ == nullptr
        && this->sessionResolutionHeight_ == nullptr && this->sessionResolutionWidth_ == nullptr && this->streamingMode_ == nullptr && this->terminalResolutionAdaptive_ == nullptr && this->visualQualityStrategy_ == nullptr
        && this->webrtc_ == nullptr; };
      // frameRate Field Functions 
      bool hasFrameRate() const { return this->frameRate_ != nullptr;};
      void deleteFrameRate() { this->frameRate_ = nullptr;};
      inline int32_t getFrameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, 0) };
      inline VideoPolicy& setFrameRate(int32_t frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


      // sessionResolutionHeight Field Functions 
      bool hasSessionResolutionHeight() const { return this->sessionResolutionHeight_ != nullptr;};
      void deleteSessionResolutionHeight() { this->sessionResolutionHeight_ = nullptr;};
      inline int32_t getSessionResolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(sessionResolutionHeight_, 0) };
      inline VideoPolicy& setSessionResolutionHeight(int32_t sessionResolutionHeight) { DARABONBA_PTR_SET_VALUE(sessionResolutionHeight_, sessionResolutionHeight) };


      // sessionResolutionWidth Field Functions 
      bool hasSessionResolutionWidth() const { return this->sessionResolutionWidth_ != nullptr;};
      void deleteSessionResolutionWidth() { this->sessionResolutionWidth_ = nullptr;};
      inline int32_t getSessionResolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(sessionResolutionWidth_, 0) };
      inline VideoPolicy& setSessionResolutionWidth(int32_t sessionResolutionWidth) { DARABONBA_PTR_SET_VALUE(sessionResolutionWidth_, sessionResolutionWidth) };


      // streamingMode Field Functions 
      bool hasStreamingMode() const { return this->streamingMode_ != nullptr;};
      void deleteStreamingMode() { this->streamingMode_ = nullptr;};
      inline string getStreamingMode() const { DARABONBA_PTR_GET_DEFAULT(streamingMode_, "") };
      inline VideoPolicy& setStreamingMode(string streamingMode) { DARABONBA_PTR_SET_VALUE(streamingMode_, streamingMode) };


      // terminalResolutionAdaptive Field Functions 
      bool hasTerminalResolutionAdaptive() const { return this->terminalResolutionAdaptive_ != nullptr;};
      void deleteTerminalResolutionAdaptive() { this->terminalResolutionAdaptive_ = nullptr;};
      inline bool getTerminalResolutionAdaptive() const { DARABONBA_PTR_GET_DEFAULT(terminalResolutionAdaptive_, false) };
      inline VideoPolicy& setTerminalResolutionAdaptive(bool terminalResolutionAdaptive) { DARABONBA_PTR_SET_VALUE(terminalResolutionAdaptive_, terminalResolutionAdaptive) };


      // visualQualityStrategy Field Functions 
      bool hasVisualQualityStrategy() const { return this->visualQualityStrategy_ != nullptr;};
      void deleteVisualQualityStrategy() { this->visualQualityStrategy_ = nullptr;};
      inline string getVisualQualityStrategy() const { DARABONBA_PTR_GET_DEFAULT(visualQualityStrategy_, "") };
      inline VideoPolicy& setVisualQualityStrategy(string visualQualityStrategy) { DARABONBA_PTR_SET_VALUE(visualQualityStrategy_, visualQualityStrategy) };


      // webrtc Field Functions 
      bool hasWebrtc() const { return this->webrtc_ != nullptr;};
      void deleteWebrtc() { this->webrtc_ = nullptr;};
      inline bool getWebrtc() const { DARABONBA_PTR_GET_DEFAULT(webrtc_, false) };
      inline VideoPolicy& setWebrtc(bool webrtc) { DARABONBA_PTR_SET_VALUE(webrtc_, webrtc) };


    protected:
      // The frame rate (FPS).
      // 
      // Enumerated values:
      // 
      // *   30: 30 FPS
      // *   60: 60 FPS
      shared_ptr<int32_t> frameRate_ {};
      // The height of the resolution, in pixels.
      shared_ptr<int32_t> sessionResolutionHeight_ {};
      // The width of the resolution, in pixels.
      shared_ptr<int32_t> sessionResolutionWidth_ {};
      // The stream mode. This parameter is used together with `Webrtc` to specify the protocol type.
      // 
      // *   If you set `Webrtc` to `true` and `StreamingMode` to `video`, Web Real-Time Communications (WebRTC) streams are used.
      // *   If you set `Webrtc` to `false` and `StreamingMode` to `video`, video streams are used.
      // *   If you set `Webrtc` to `false` and `StreamingMode` to `mix`, mixed streams are used.
      shared_ptr<string> streamingMode_ {};
      // Whether to use adaptive resolution.
      // 
      // *   `true`: The session resolution changes with the display area of the terminal. In this case, `SessionResolutionWidth` indicates the maximum resolution width and `SessionResolutionHeight` indicates the maximum resolution height.
      // *   `false`: The session resolution does not change with the display area of the terminal. In this case, `SessionResolutionWidth` specifies the fixed resolution width and `SessionResolutionHeight` specifies the fixed resolution height.
      shared_ptr<bool> terminalResolutionAdaptive_ {};
      // The image quality policy.
      // 
      // Enumerated values:
      // 
      // *   adaptive: adaptive.
      // *   smooth: smooth first.
      // *   quality: quality first.
      shared_ptr<string> visualQualityStrategy_ {};
      // Specifies whether to enable WebRTC. This parameter is used together with `StreamingMode` to specify the protocol type.
      // 
      // *   If you set `Webrtc` to `true` and `StreamingMode` to `video`, WebRTC streams are used.
      // *   If you set `Webrtc` to `false` and `StreamingMode` to `video`, video streams are used.
      // *   If you set `Webrtc` to `false` and `StreamingMode` to `mix`, mixed streams are used.
      shared_ptr<bool> webrtc_ {};
    };

    virtual bool empty() const override { return this->appPolicyId_ == nullptr
        && this->productType_ == nullptr && this->videoPolicy_ == nullptr; };
    // appPolicyId Field Functions 
    bool hasAppPolicyId() const { return this->appPolicyId_ != nullptr;};
    void deleteAppPolicyId() { this->appPolicyId_ = nullptr;};
    inline string getAppPolicyId() const { DARABONBA_PTR_GET_DEFAULT(appPolicyId_, "") };
    inline ModifyAppPolicyRequest& setAppPolicyId(string appPolicyId) { DARABONBA_PTR_SET_VALUE(appPolicyId_, appPolicyId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyAppPolicyRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // videoPolicy Field Functions 
    bool hasVideoPolicy() const { return this->videoPolicy_ != nullptr;};
    void deleteVideoPolicy() { this->videoPolicy_ = nullptr;};
    inline const ModifyAppPolicyRequest::VideoPolicy & getVideoPolicy() const { DARABONBA_PTR_GET_CONST(videoPolicy_, ModifyAppPolicyRequest::VideoPolicy) };
    inline ModifyAppPolicyRequest::VideoPolicy getVideoPolicy() { DARABONBA_PTR_GET(videoPolicy_, ModifyAppPolicyRequest::VideoPolicy) };
    inline ModifyAppPolicyRequest& setVideoPolicy(const ModifyAppPolicyRequest::VideoPolicy & videoPolicy) { DARABONBA_PTR_SET_VALUE(videoPolicy_, videoPolicy) };
    inline ModifyAppPolicyRequest& setVideoPolicy(ModifyAppPolicyRequest::VideoPolicy && videoPolicy) { DARABONBA_PTR_SET_RVALUE(videoPolicy_, videoPolicy) };


  protected:
    // The policy ID.
    // 
    // This parameter is required.
    shared_ptr<string> appPolicyId_ {};
    // The product type.
    // 
    // Enumerated values:
    // 
    // *   CloudApp: RDS Cloud App
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // Displays the policy.
    shared_ptr<ModifyAppPolicyRequest::VideoPolicy> videoPolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif

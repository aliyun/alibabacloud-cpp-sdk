// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTVIDEOPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTVIDEOPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateAppInstanceGroupRequestVideoPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceGroupRequestVideoPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(FrameRate, frameRate_);
      DARABONBA_PTR_TO_JSON(SessionResolutionHeight, sessionResolutionHeight_);
      DARABONBA_PTR_TO_JSON(SessionResolutionWidth, sessionResolutionWidth_);
      DARABONBA_PTR_TO_JSON(StreamingMode, streamingMode_);
      DARABONBA_PTR_TO_JSON(TerminalResolutionAdaptive, terminalResolutionAdaptive_);
      DARABONBA_PTR_TO_JSON(Webrtc, webrtc_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceGroupRequestVideoPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(FrameRate, frameRate_);
      DARABONBA_PTR_FROM_JSON(SessionResolutionHeight, sessionResolutionHeight_);
      DARABONBA_PTR_FROM_JSON(SessionResolutionWidth, sessionResolutionWidth_);
      DARABONBA_PTR_FROM_JSON(StreamingMode, streamingMode_);
      DARABONBA_PTR_FROM_JSON(TerminalResolutionAdaptive, terminalResolutionAdaptive_);
      DARABONBA_PTR_FROM_JSON(Webrtc, webrtc_);
    };
    CreateAppInstanceGroupRequestVideoPolicy() = default ;
    CreateAppInstanceGroupRequestVideoPolicy(const CreateAppInstanceGroupRequestVideoPolicy &) = default ;
    CreateAppInstanceGroupRequestVideoPolicy(CreateAppInstanceGroupRequestVideoPolicy &&) = default ;
    CreateAppInstanceGroupRequestVideoPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceGroupRequestVideoPolicy() = default ;
    CreateAppInstanceGroupRequestVideoPolicy& operator=(const CreateAppInstanceGroupRequestVideoPolicy &) = default ;
    CreateAppInstanceGroupRequestVideoPolicy& operator=(CreateAppInstanceGroupRequestVideoPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->frameRate_ == nullptr
        && return this->sessionResolutionHeight_ == nullptr && return this->sessionResolutionWidth_ == nullptr && return this->streamingMode_ == nullptr && return this->terminalResolutionAdaptive_ == nullptr && return this->webrtc_ == nullptr; };
    // frameRate Field Functions 
    bool hasFrameRate() const { return this->frameRate_ != nullptr;};
    void deleteFrameRate() { this->frameRate_ = nullptr;};
    inline int32_t frameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, 0) };
    inline CreateAppInstanceGroupRequestVideoPolicy& setFrameRate(int32_t frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


    // sessionResolutionHeight Field Functions 
    bool hasSessionResolutionHeight() const { return this->sessionResolutionHeight_ != nullptr;};
    void deleteSessionResolutionHeight() { this->sessionResolutionHeight_ = nullptr;};
    inline int32_t sessionResolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(sessionResolutionHeight_, 0) };
    inline CreateAppInstanceGroupRequestVideoPolicy& setSessionResolutionHeight(int32_t sessionResolutionHeight) { DARABONBA_PTR_SET_VALUE(sessionResolutionHeight_, sessionResolutionHeight) };


    // sessionResolutionWidth Field Functions 
    bool hasSessionResolutionWidth() const { return this->sessionResolutionWidth_ != nullptr;};
    void deleteSessionResolutionWidth() { this->sessionResolutionWidth_ = nullptr;};
    inline int32_t sessionResolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(sessionResolutionWidth_, 0) };
    inline CreateAppInstanceGroupRequestVideoPolicy& setSessionResolutionWidth(int32_t sessionResolutionWidth) { DARABONBA_PTR_SET_VALUE(sessionResolutionWidth_, sessionResolutionWidth) };


    // streamingMode Field Functions 
    bool hasStreamingMode() const { return this->streamingMode_ != nullptr;};
    void deleteStreamingMode() { this->streamingMode_ = nullptr;};
    inline string streamingMode() const { DARABONBA_PTR_GET_DEFAULT(streamingMode_, "") };
    inline CreateAppInstanceGroupRequestVideoPolicy& setStreamingMode(string streamingMode) { DARABONBA_PTR_SET_VALUE(streamingMode_, streamingMode) };


    // terminalResolutionAdaptive Field Functions 
    bool hasTerminalResolutionAdaptive() const { return this->terminalResolutionAdaptive_ != nullptr;};
    void deleteTerminalResolutionAdaptive() { this->terminalResolutionAdaptive_ = nullptr;};
    inline bool terminalResolutionAdaptive() const { DARABONBA_PTR_GET_DEFAULT(terminalResolutionAdaptive_, false) };
    inline CreateAppInstanceGroupRequestVideoPolicy& setTerminalResolutionAdaptive(bool terminalResolutionAdaptive) { DARABONBA_PTR_SET_VALUE(terminalResolutionAdaptive_, terminalResolutionAdaptive) };


    // webrtc Field Functions 
    bool hasWebrtc() const { return this->webrtc_ != nullptr;};
    void deleteWebrtc() { this->webrtc_ = nullptr;};
    inline bool webrtc() const { DARABONBA_PTR_GET_DEFAULT(webrtc_, false) };
    inline CreateAppInstanceGroupRequestVideoPolicy& setWebrtc(bool webrtc) { DARABONBA_PTR_SET_VALUE(webrtc_, webrtc) };


  protected:
    std::shared_ptr<int32_t> frameRate_ = nullptr;
    std::shared_ptr<int32_t> sessionResolutionHeight_ = nullptr;
    std::shared_ptr<int32_t> sessionResolutionWidth_ = nullptr;
    std::shared_ptr<string> streamingMode_ = nullptr;
    std::shared_ptr<bool> terminalResolutionAdaptive_ = nullptr;
    std::shared_ptr<bool> webrtc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif

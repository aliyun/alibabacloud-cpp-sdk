// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAIAGENTOUTBOUNDCALLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTAIAGENTOUTBOUNDCALLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class StartAIAgentOutboundCallShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAIAgentOutboundCallShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_TO_JSON(Config, configShrink_);
      DARABONBA_PTR_TO_JSON(ImsAIAgentFreeObCall, imsAIAgentFreeObCall_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, StartAIAgentOutboundCallShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_FROM_JSON(Config, configShrink_);
      DARABONBA_PTR_FROM_JSON(ImsAIAgentFreeObCall, imsAIAgentFreeObCall_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    StartAIAgentOutboundCallShrinkRequest() = default ;
    StartAIAgentOutboundCallShrinkRequest(const StartAIAgentOutboundCallShrinkRequest &) = default ;
    StartAIAgentOutboundCallShrinkRequest(StartAIAgentOutboundCallShrinkRequest &&) = default ;
    StartAIAgentOutboundCallShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAIAgentOutboundCallShrinkRequest() = default ;
    StartAIAgentOutboundCallShrinkRequest& operator=(const StartAIAgentOutboundCallShrinkRequest &) = default ;
    StartAIAgentOutboundCallShrinkRequest& operator=(StartAIAgentOutboundCallShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AIAgentId_ == nullptr
        && return this->calledNumber_ == nullptr && return this->callerNumber_ == nullptr && return this->configShrink_ == nullptr && return this->imsAIAgentFreeObCall_ == nullptr && return this->sessionId_ == nullptr
        && return this->userData_ == nullptr; };
    // AIAgentId Field Functions 
    bool hasAIAgentId() const { return this->AIAgentId_ != nullptr;};
    void deleteAIAgentId() { this->AIAgentId_ = nullptr;};
    inline string AIAgentId() const { DARABONBA_PTR_GET_DEFAULT(AIAgentId_, "") };
    inline StartAIAgentOutboundCallShrinkRequest& setAIAgentId(string AIAgentId) { DARABONBA_PTR_SET_VALUE(AIAgentId_, AIAgentId) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline StartAIAgentOutboundCallShrinkRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callerNumber Field Functions 
    bool hasCallerNumber() const { return this->callerNumber_ != nullptr;};
    void deleteCallerNumber() { this->callerNumber_ = nullptr;};
    inline string callerNumber() const { DARABONBA_PTR_GET_DEFAULT(callerNumber_, "") };
    inline StartAIAgentOutboundCallShrinkRequest& setCallerNumber(string callerNumber) { DARABONBA_PTR_SET_VALUE(callerNumber_, callerNumber) };


    // configShrink Field Functions 
    bool hasConfigShrink() const { return this->configShrink_ != nullptr;};
    void deleteConfigShrink() { this->configShrink_ = nullptr;};
    inline string configShrink() const { DARABONBA_PTR_GET_DEFAULT(configShrink_, "") };
    inline StartAIAgentOutboundCallShrinkRequest& setConfigShrink(string configShrink) { DARABONBA_PTR_SET_VALUE(configShrink_, configShrink) };


    // imsAIAgentFreeObCall Field Functions 
    bool hasImsAIAgentFreeObCall() const { return this->imsAIAgentFreeObCall_ != nullptr;};
    void deleteImsAIAgentFreeObCall() { this->imsAIAgentFreeObCall_ = nullptr;};
    inline string imsAIAgentFreeObCall() const { DARABONBA_PTR_GET_DEFAULT(imsAIAgentFreeObCall_, "") };
    inline StartAIAgentOutboundCallShrinkRequest& setImsAIAgentFreeObCall(string imsAIAgentFreeObCall) { DARABONBA_PTR_SET_VALUE(imsAIAgentFreeObCall_, imsAIAgentFreeObCall) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline StartAIAgentOutboundCallShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline StartAIAgentOutboundCallShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> AIAgentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> calledNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> callerNumber_ = nullptr;
    std::shared_ptr<string> configShrink_ = nullptr;
    std::shared_ptr<string> imsAIAgentFreeObCall_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAIAGENTOUTBOUNDCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTAIAGENTOUTBOUNDCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AIAgentOutboundCallConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class StartAIAgentOutboundCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAIAgentOutboundCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ImsAIAgentFreeObCall, imsAIAgentFreeObCall_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, StartAIAgentOutboundCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ImsAIAgentFreeObCall, imsAIAgentFreeObCall_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    StartAIAgentOutboundCallRequest() = default ;
    StartAIAgentOutboundCallRequest(const StartAIAgentOutboundCallRequest &) = default ;
    StartAIAgentOutboundCallRequest(StartAIAgentOutboundCallRequest &&) = default ;
    StartAIAgentOutboundCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAIAgentOutboundCallRequest() = default ;
    StartAIAgentOutboundCallRequest& operator=(const StartAIAgentOutboundCallRequest &) = default ;
    StartAIAgentOutboundCallRequest& operator=(StartAIAgentOutboundCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AIAgentId_ == nullptr
        && return this->calledNumber_ == nullptr && return this->callerNumber_ == nullptr && return this->config_ == nullptr && return this->imsAIAgentFreeObCall_ == nullptr && return this->sessionId_ == nullptr
        && return this->userData_ == nullptr; };
    // AIAgentId Field Functions 
    bool hasAIAgentId() const { return this->AIAgentId_ != nullptr;};
    void deleteAIAgentId() { this->AIAgentId_ = nullptr;};
    inline string AIAgentId() const { DARABONBA_PTR_GET_DEFAULT(AIAgentId_, "") };
    inline StartAIAgentOutboundCallRequest& setAIAgentId(string AIAgentId) { DARABONBA_PTR_SET_VALUE(AIAgentId_, AIAgentId) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline StartAIAgentOutboundCallRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callerNumber Field Functions 
    bool hasCallerNumber() const { return this->callerNumber_ != nullptr;};
    void deleteCallerNumber() { this->callerNumber_ = nullptr;};
    inline string callerNumber() const { DARABONBA_PTR_GET_DEFAULT(callerNumber_, "") };
    inline StartAIAgentOutboundCallRequest& setCallerNumber(string callerNumber) { DARABONBA_PTR_SET_VALUE(callerNumber_, callerNumber) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const AIAgentOutboundCallConfig & config() const { DARABONBA_PTR_GET_CONST(config_, AIAgentOutboundCallConfig) };
    inline AIAgentOutboundCallConfig config() { DARABONBA_PTR_GET(config_, AIAgentOutboundCallConfig) };
    inline StartAIAgentOutboundCallRequest& setConfig(const AIAgentOutboundCallConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline StartAIAgentOutboundCallRequest& setConfig(AIAgentOutboundCallConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // imsAIAgentFreeObCall Field Functions 
    bool hasImsAIAgentFreeObCall() const { return this->imsAIAgentFreeObCall_ != nullptr;};
    void deleteImsAIAgentFreeObCall() { this->imsAIAgentFreeObCall_ = nullptr;};
    inline string imsAIAgentFreeObCall() const { DARABONBA_PTR_GET_DEFAULT(imsAIAgentFreeObCall_, "") };
    inline StartAIAgentOutboundCallRequest& setImsAIAgentFreeObCall(string imsAIAgentFreeObCall) { DARABONBA_PTR_SET_VALUE(imsAIAgentFreeObCall_, imsAIAgentFreeObCall) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline StartAIAgentOutboundCallRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline StartAIAgentOutboundCallRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> AIAgentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> calledNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> callerNumber_ = nullptr;
    std::shared_ptr<AIAgentOutboundCallConfig> config_ = nullptr;
    std::shared_ptr<string> imsAIAgentFreeObCall_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

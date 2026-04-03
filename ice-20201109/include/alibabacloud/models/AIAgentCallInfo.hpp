// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTCALLINFO_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTCALLINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentCallInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentCallInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CallDuration, callDuration_);
      DARABONBA_PTR_TO_JSON(CallEndTime, callEndTime_);
      DARABONBA_PTR_TO_JSON(CallStartTime, callStartTime_);
      DARABONBA_PTR_TO_JSON(CalleeNumber, calleeNumber_);
      DARABONBA_PTR_TO_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_TO_JSON(HangupRole, hangupRole_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentCallInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CallDuration, callDuration_);
      DARABONBA_PTR_FROM_JSON(CallEndTime, callEndTime_);
      DARABONBA_PTR_FROM_JSON(CallStartTime, callStartTime_);
      DARABONBA_PTR_FROM_JSON(CalleeNumber, calleeNumber_);
      DARABONBA_PTR_FROM_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_FROM_JSON(HangupRole, hangupRole_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    AIAgentCallInfo() = default ;
    AIAgentCallInfo(const AIAgentCallInfo &) = default ;
    AIAgentCallInfo(AIAgentCallInfo &&) = default ;
    AIAgentCallInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentCallInfo() = default ;
    AIAgentCallInfo& operator=(const AIAgentCallInfo &) = default ;
    AIAgentCallInfo& operator=(AIAgentCallInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callDuration_ == nullptr
        && this->callEndTime_ == nullptr && this->callStartTime_ == nullptr && this->calleeNumber_ == nullptr && this->callerNumber_ == nullptr && this->hangupRole_ == nullptr
        && this->status_ == nullptr; };
    // callDuration Field Functions 
    bool hasCallDuration() const { return this->callDuration_ != nullptr;};
    void deleteCallDuration() { this->callDuration_ = nullptr;};
    inline int32_t getCallDuration() const { DARABONBA_PTR_GET_DEFAULT(callDuration_, 0) };
    inline AIAgentCallInfo& setCallDuration(int32_t callDuration) { DARABONBA_PTR_SET_VALUE(callDuration_, callDuration) };


    // callEndTime Field Functions 
    bool hasCallEndTime() const { return this->callEndTime_ != nullptr;};
    void deleteCallEndTime() { this->callEndTime_ = nullptr;};
    inline string getCallEndTime() const { DARABONBA_PTR_GET_DEFAULT(callEndTime_, "") };
    inline AIAgentCallInfo& setCallEndTime(string callEndTime) { DARABONBA_PTR_SET_VALUE(callEndTime_, callEndTime) };


    // callStartTime Field Functions 
    bool hasCallStartTime() const { return this->callStartTime_ != nullptr;};
    void deleteCallStartTime() { this->callStartTime_ = nullptr;};
    inline string getCallStartTime() const { DARABONBA_PTR_GET_DEFAULT(callStartTime_, "") };
    inline AIAgentCallInfo& setCallStartTime(string callStartTime) { DARABONBA_PTR_SET_VALUE(callStartTime_, callStartTime) };


    // calleeNumber Field Functions 
    bool hasCalleeNumber() const { return this->calleeNumber_ != nullptr;};
    void deleteCalleeNumber() { this->calleeNumber_ = nullptr;};
    inline string getCalleeNumber() const { DARABONBA_PTR_GET_DEFAULT(calleeNumber_, "") };
    inline AIAgentCallInfo& setCalleeNumber(string calleeNumber) { DARABONBA_PTR_SET_VALUE(calleeNumber_, calleeNumber) };


    // callerNumber Field Functions 
    bool hasCallerNumber() const { return this->callerNumber_ != nullptr;};
    void deleteCallerNumber() { this->callerNumber_ = nullptr;};
    inline string getCallerNumber() const { DARABONBA_PTR_GET_DEFAULT(callerNumber_, "") };
    inline AIAgentCallInfo& setCallerNumber(string callerNumber) { DARABONBA_PTR_SET_VALUE(callerNumber_, callerNumber) };


    // hangupRole Field Functions 
    bool hasHangupRole() const { return this->hangupRole_ != nullptr;};
    void deleteHangupRole() { this->hangupRole_ = nullptr;};
    inline int32_t getHangupRole() const { DARABONBA_PTR_GET_DEFAULT(hangupRole_, 0) };
    inline AIAgentCallInfo& setHangupRole(int32_t hangupRole) { DARABONBA_PTR_SET_VALUE(hangupRole_, hangupRole) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AIAgentCallInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<int32_t> callDuration_ {};
    shared_ptr<string> callEndTime_ {};
    shared_ptr<string> callStartTime_ {};
    shared_ptr<string> calleeNumber_ {};
    shared_ptr<string> callerNumber_ {};
    shared_ptr<int32_t> hangupRole_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

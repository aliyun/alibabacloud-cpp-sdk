// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTCALLCONFIGEVENTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTCALLCONFIGEVENTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CallAssistantHangup, callAssistantHangup_);
      DARABONBA_PTR_TO_JSON(CallAssistantRecognize, callAssistantRecognize_);
      DARABONBA_PTR_TO_JSON(MuteActive, muteActive_);
      DARABONBA_PTR_TO_JSON(MuteDuration, muteDuration_);
      DARABONBA_PTR_TO_JSON(MuteHangupNum, muteHangupNum_);
      DARABONBA_PTR_TO_JSON(SessionTimeout, sessionTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CallAssistantHangup, callAssistantHangup_);
      DARABONBA_PTR_FROM_JSON(CallAssistantRecognize, callAssistantRecognize_);
      DARABONBA_PTR_FROM_JSON(MuteActive, muteActive_);
      DARABONBA_PTR_FROM_JSON(MuteDuration, muteDuration_);
      DARABONBA_PTR_FROM_JSON(MuteHangupNum, muteHangupNum_);
      DARABONBA_PTR_FROM_JSON(SessionTimeout, sessionTimeout_);
    };
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig &&) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig& operator=(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig& operator=(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callAssistantHangup_ == nullptr
        && return this->callAssistantRecognize_ == nullptr && return this->muteActive_ == nullptr && return this->muteDuration_ == nullptr && return this->muteHangupNum_ == nullptr && return this->sessionTimeout_ == nullptr; };
    // callAssistantHangup Field Functions 
    bool hasCallAssistantHangup() const { return this->callAssistantHangup_ != nullptr;};
    void deleteCallAssistantHangup() { this->callAssistantHangup_ = nullptr;};
    inline bool callAssistantHangup() const { DARABONBA_PTR_GET_DEFAULT(callAssistantHangup_, false) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig& setCallAssistantHangup(bool callAssistantHangup) { DARABONBA_PTR_SET_VALUE(callAssistantHangup_, callAssistantHangup) };


    // callAssistantRecognize Field Functions 
    bool hasCallAssistantRecognize() const { return this->callAssistantRecognize_ != nullptr;};
    void deleteCallAssistantRecognize() { this->callAssistantRecognize_ = nullptr;};
    inline bool callAssistantRecognize() const { DARABONBA_PTR_GET_DEFAULT(callAssistantRecognize_, false) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig& setCallAssistantRecognize(bool callAssistantRecognize) { DARABONBA_PTR_SET_VALUE(callAssistantRecognize_, callAssistantRecognize) };


    // muteActive Field Functions 
    bool hasMuteActive() const { return this->muteActive_ != nullptr;};
    void deleteMuteActive() { this->muteActive_ = nullptr;};
    inline bool muteActive() const { DARABONBA_PTR_GET_DEFAULT(muteActive_, false) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig& setMuteActive(bool muteActive) { DARABONBA_PTR_SET_VALUE(muteActive_, muteActive) };


    // muteDuration Field Functions 
    bool hasMuteDuration() const { return this->muteDuration_ != nullptr;};
    void deleteMuteDuration() { this->muteDuration_ = nullptr;};
    inline int64_t muteDuration() const { DARABONBA_PTR_GET_DEFAULT(muteDuration_, 0L) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig& setMuteDuration(int64_t muteDuration) { DARABONBA_PTR_SET_VALUE(muteDuration_, muteDuration) };


    // muteHangupNum Field Functions 
    bool hasMuteHangupNum() const { return this->muteHangupNum_ != nullptr;};
    void deleteMuteHangupNum() { this->muteHangupNum_ = nullptr;};
    inline int64_t muteHangupNum() const { DARABONBA_PTR_GET_DEFAULT(muteHangupNum_, 0L) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig& setMuteHangupNum(int64_t muteHangupNum) { DARABONBA_PTR_SET_VALUE(muteHangupNum_, muteHangupNum) };


    // sessionTimeout Field Functions 
    bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
    void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
    inline int64_t sessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, 0L) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig& setSessionTimeout(int64_t sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


  protected:
    std::shared_ptr<bool> callAssistantHangup_ = nullptr;
    std::shared_ptr<bool> callAssistantRecognize_ = nullptr;
    std::shared_ptr<bool> muteActive_ = nullptr;
    std::shared_ptr<int64_t> muteDuration_ = nullptr;
    std::shared_ptr<int64_t> muteHangupNum_ = nullptr;
    std::shared_ptr<int64_t> sessionTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDPOLARCLAWAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BINDPOLARCLAWAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class BindPolarClawAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindPolarClawAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Binding, binding_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalBindings, totalBindings_);
    };
    friend void from_json(const Darabonba::Json& j, BindPolarClawAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Binding, binding_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalBindings, totalBindings_);
    };
    BindPolarClawAgentResponseBody() = default ;
    BindPolarClawAgentResponseBody(const BindPolarClawAgentResponseBody &) = default ;
    BindPolarClawAgentResponseBody(BindPolarClawAgentResponseBody &&) = default ;
    BindPolarClawAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindPolarClawAgentResponseBody() = default ;
    BindPolarClawAgentResponseBody& operator=(const BindPolarClawAgentResponseBody &) = default ;
    BindPolarClawAgentResponseBody& operator=(BindPolarClawAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Binding : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Binding& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(Channel, channel_);
      };
      friend void from_json(const Darabonba::Json& j, Binding& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(Channel, channel_);
      };
      Binding() = default ;
      Binding(const Binding &) = default ;
      Binding(Binding &&) = default ;
      Binding(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Binding() = default ;
      Binding& operator=(const Binding &) = default ;
      Binding& operator=(Binding &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->agentId_ == nullptr && this->channel_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Binding& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Binding& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // channel Field Functions 
      bool hasChannel() const { return this->channel_ != nullptr;};
      void deleteChannel() { this->channel_ = nullptr;};
      inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
      inline Binding& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    protected:
      shared_ptr<string> accountId_ {};
      // Agent ID
      shared_ptr<string> agentId_ {};
      shared_ptr<string> channel_ {};
    };

    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->binding_ == nullptr && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->totalBindings_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline BindPolarClawAgentResponseBody& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline BindPolarClawAgentResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // binding Field Functions 
    bool hasBinding() const { return this->binding_ != nullptr;};
    void deleteBinding() { this->binding_ = nullptr;};
    inline const BindPolarClawAgentResponseBody::Binding & getBinding() const { DARABONBA_PTR_GET_CONST(binding_, BindPolarClawAgentResponseBody::Binding) };
    inline BindPolarClawAgentResponseBody::Binding getBinding() { DARABONBA_PTR_GET(binding_, BindPolarClawAgentResponseBody::Binding) };
    inline BindPolarClawAgentResponseBody& setBinding(const BindPolarClawAgentResponseBody::Binding & binding) { DARABONBA_PTR_SET_VALUE(binding_, binding) };
    inline BindPolarClawAgentResponseBody& setBinding(BindPolarClawAgentResponseBody::Binding && binding) { DARABONBA_PTR_SET_RVALUE(binding_, binding) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline BindPolarClawAgentResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BindPolarClawAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BindPolarClawAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalBindings Field Functions 
    bool hasTotalBindings() const { return this->totalBindings_ != nullptr;};
    void deleteTotalBindings() { this->totalBindings_ = nullptr;};
    inline int32_t getTotalBindings() const { DARABONBA_PTR_GET_DEFAULT(totalBindings_, 0) };
    inline BindPolarClawAgentResponseBody& setTotalBindings(int32_t totalBindings) { DARABONBA_PTR_SET_VALUE(totalBindings_, totalBindings) };


  protected:
    // Agent ID
    shared_ptr<string> agentId_ {};
    shared_ptr<string> applicationId_ {};
    shared_ptr<BindPolarClawAgentResponseBody::Binding> binding_ {};
    // 200
    shared_ptr<int32_t> code_ {};
    // successful
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalBindings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

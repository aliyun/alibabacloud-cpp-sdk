// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLARCLAWBINDINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLARCLAWBINDINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ListPolarClawBindingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolarClawBindingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Bindings, bindings_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolarClawBindingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Bindings, bindings_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPolarClawBindingsResponseBody() = default ;
    ListPolarClawBindingsResponseBody(const ListPolarClawBindingsResponseBody &) = default ;
    ListPolarClawBindingsResponseBody(ListPolarClawBindingsResponseBody &&) = default ;
    ListPolarClawBindingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolarClawBindingsResponseBody() = default ;
    ListPolarClawBindingsResponseBody& operator=(const ListPolarClawBindingsResponseBody &) = default ;
    ListPolarClawBindingsResponseBody& operator=(ListPolarClawBindingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Bindings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Bindings& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(Channel, channel_);
        DARABONBA_PTR_TO_JSON(ChannelAccountId, channelAccountId_);
      };
      friend void from_json(const Darabonba::Json& j, Bindings& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(Channel, channel_);
        DARABONBA_PTR_FROM_JSON(ChannelAccountId, channelAccountId_);
      };
      Bindings() = default ;
      Bindings(const Bindings &) = default ;
      Bindings(Bindings &&) = default ;
      Bindings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Bindings() = default ;
      Bindings& operator=(const Bindings &) = default ;
      Bindings& operator=(Bindings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->channel_ == nullptr && this->channelAccountId_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Bindings& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // channel Field Functions 
      bool hasChannel() const { return this->channel_ != nullptr;};
      void deleteChannel() { this->channel_ = nullptr;};
      inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
      inline Bindings& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


      // channelAccountId Field Functions 
      bool hasChannelAccountId() const { return this->channelAccountId_ != nullptr;};
      void deleteChannelAccountId() { this->channelAccountId_ = nullptr;};
      inline string getChannelAccountId() const { DARABONBA_PTR_GET_DEFAULT(channelAccountId_, "") };
      inline Bindings& setChannelAccountId(string channelAccountId) { DARABONBA_PTR_SET_VALUE(channelAccountId_, channelAccountId) };


    protected:
      // Agent ID
      shared_ptr<string> agentId_ {};
      // Channel ID
      shared_ptr<string> channel_ {};
      // Account ID
      shared_ptr<string> channelAccountId_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->bindings_ == nullptr && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListPolarClawBindingsResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // bindings Field Functions 
    bool hasBindings() const { return this->bindings_ != nullptr;};
    void deleteBindings() { this->bindings_ = nullptr;};
    inline const vector<ListPolarClawBindingsResponseBody::Bindings> & getBindings() const { DARABONBA_PTR_GET_CONST(bindings_, vector<ListPolarClawBindingsResponseBody::Bindings>) };
    inline vector<ListPolarClawBindingsResponseBody::Bindings> getBindings() { DARABONBA_PTR_GET(bindings_, vector<ListPolarClawBindingsResponseBody::Bindings>) };
    inline ListPolarClawBindingsResponseBody& setBindings(const vector<ListPolarClawBindingsResponseBody::Bindings> & bindings) { DARABONBA_PTR_SET_VALUE(bindings_, bindings) };
    inline ListPolarClawBindingsResponseBody& setBindings(vector<ListPolarClawBindingsResponseBody::Bindings> && bindings) { DARABONBA_PTR_SET_RVALUE(bindings_, bindings) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListPolarClawBindingsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPolarClawBindingsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPolarClawBindingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> applicationId_ {};
    shared_ptr<vector<ListPolarClawBindingsResponseBody::Bindings>> bindings_ {};
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

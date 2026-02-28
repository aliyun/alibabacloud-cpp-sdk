// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATROUTINGPROFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHATROUTINGPROFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetChatRoutingProfileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatRoutingProfileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatRoutingProfileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetChatRoutingProfileResponseBody() = default ;
    GetChatRoutingProfileResponseBody(const GetChatRoutingProfileResponseBody &) = default ;
    GetChatRoutingProfileResponseBody(GetChatRoutingProfileResponseBody &&) = default ;
    GetChatRoutingProfileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatRoutingProfileResponseBody() = default ;
    GetChatRoutingProfileResponseBody& operator=(const GetChatRoutingProfileResponseBody &) = default ;
    GetChatRoutingProfileResponseBody& operator=(GetChatRoutingProfileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentConcurrencySettings, agentConcurrencySettings_);
        DARABONBA_PTR_TO_JSON(ChatSettings, chatSettings_);
        DARABONBA_PTR_TO_JSON(DistributionSettings, distributionSettings_);
        DARABONBA_PTR_TO_JSON(RoutingType, routingType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentConcurrencySettings, agentConcurrencySettings_);
        DARABONBA_PTR_FROM_JSON(ChatSettings, chatSettings_);
        DARABONBA_PTR_FROM_JSON(DistributionSettings, distributionSettings_);
        DARABONBA_PTR_FROM_JSON(RoutingType, routingType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentConcurrencySettings_ == nullptr
        && this->chatSettings_ == nullptr && this->distributionSettings_ == nullptr && this->routingType_ == nullptr; };
      // agentConcurrencySettings Field Functions 
      bool hasAgentConcurrencySettings() const { return this->agentConcurrencySettings_ != nullptr;};
      void deleteAgentConcurrencySettings() { this->agentConcurrencySettings_ = nullptr;};
      inline string getAgentConcurrencySettings() const { DARABONBA_PTR_GET_DEFAULT(agentConcurrencySettings_, "") };
      inline Data& setAgentConcurrencySettings(string agentConcurrencySettings) { DARABONBA_PTR_SET_VALUE(agentConcurrencySettings_, agentConcurrencySettings) };


      // chatSettings Field Functions 
      bool hasChatSettings() const { return this->chatSettings_ != nullptr;};
      void deleteChatSettings() { this->chatSettings_ = nullptr;};
      inline string getChatSettings() const { DARABONBA_PTR_GET_DEFAULT(chatSettings_, "") };
      inline Data& setChatSettings(string chatSettings) { DARABONBA_PTR_SET_VALUE(chatSettings_, chatSettings) };


      // distributionSettings Field Functions 
      bool hasDistributionSettings() const { return this->distributionSettings_ != nullptr;};
      void deleteDistributionSettings() { this->distributionSettings_ = nullptr;};
      inline string getDistributionSettings() const { DARABONBA_PTR_GET_DEFAULT(distributionSettings_, "") };
      inline Data& setDistributionSettings(string distributionSettings) { DARABONBA_PTR_SET_VALUE(distributionSettings_, distributionSettings) };


      // routingType Field Functions 
      bool hasRoutingType() const { return this->routingType_ != nullptr;};
      void deleteRoutingType() { this->routingType_ = nullptr;};
      inline string getRoutingType() const { DARABONBA_PTR_GET_DEFAULT(routingType_, "") };
      inline Data& setRoutingType(string routingType) { DARABONBA_PTR_SET_VALUE(routingType_, routingType) };


    protected:
      shared_ptr<string> agentConcurrencySettings_ {};
      shared_ptr<string> chatSettings_ {};
      shared_ptr<string> distributionSettings_ {};
      shared_ptr<string> routingType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetChatRoutingProfileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetChatRoutingProfileResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetChatRoutingProfileResponseBody::Data) };
    inline GetChatRoutingProfileResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetChatRoutingProfileResponseBody::Data) };
    inline GetChatRoutingProfileResponseBody& setData(const GetChatRoutingProfileResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetChatRoutingProfileResponseBody& setData(GetChatRoutingProfileResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetChatRoutingProfileResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetChatRoutingProfileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChatRoutingProfileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetChatRoutingProfileResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif

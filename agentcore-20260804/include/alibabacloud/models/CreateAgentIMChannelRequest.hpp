// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTIMCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTIMCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateAgentIMChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentIMChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentIMChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateAgentIMChannelRequest() = default ;
    CreateAgentIMChannelRequest(const CreateAgentIMChannelRequest &) = default ;
    CreateAgentIMChannelRequest(CreateAgentIMChannelRequest &&) = default ;
    CreateAgentIMChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentIMChannelRequest() = default ;
    CreateAgentIMChannelRequest& operator=(const CreateAgentIMChannelRequest &) = default ;
    CreateAgentIMChannelRequest& operator=(CreateAgentIMChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(channelConfig, channelConfig_);
        DARABONBA_PTR_TO_JSON(channelType, channelType_);
        DARABONBA_PTR_TO_JSON(credential, credential_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(serviceEndpointId, serviceEndpointId_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(channelConfig, channelConfig_);
        DARABONBA_PTR_FROM_JSON(channelType, channelType_);
        DARABONBA_PTR_FROM_JSON(credential, credential_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(serviceEndpointId, serviceEndpointId_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ChannelConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChannelConfig& obj) { 
          DARABONBA_PTR_TO_JSON(showThinking, showThinking_);
          DARABONBA_PTR_TO_JSON(showToolCalls, showToolCalls_);
        };
        friend void from_json(const Darabonba::Json& j, ChannelConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(showThinking, showThinking_);
          DARABONBA_PTR_FROM_JSON(showToolCalls, showToolCalls_);
        };
        ChannelConfig() = default ;
        ChannelConfig(const ChannelConfig &) = default ;
        ChannelConfig(ChannelConfig &&) = default ;
        ChannelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChannelConfig() = default ;
        ChannelConfig& operator=(const ChannelConfig &) = default ;
        ChannelConfig& operator=(ChannelConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->showThinking_ == nullptr
        && this->showToolCalls_ == nullptr; };
        // showThinking Field Functions 
        bool hasShowThinking() const { return this->showThinking_ != nullptr;};
        void deleteShowThinking() { this->showThinking_ = nullptr;};
        inline bool getShowThinking() const { DARABONBA_PTR_GET_DEFAULT(showThinking_, false) };
        inline ChannelConfig& setShowThinking(bool showThinking) { DARABONBA_PTR_SET_VALUE(showThinking_, showThinking) };


        // showToolCalls Field Functions 
        bool hasShowToolCalls() const { return this->showToolCalls_ != nullptr;};
        void deleteShowToolCalls() { this->showToolCalls_ = nullptr;};
        inline bool getShowToolCalls() const { DARABONBA_PTR_GET_DEFAULT(showToolCalls_, false) };
        inline ChannelConfig& setShowToolCalls(bool showToolCalls) { DARABONBA_PTR_SET_VALUE(showToolCalls_, showToolCalls) };


      protected:
        // Specifies whether to display the thinking process in IM messages. Default value: false.
        shared_ptr<bool> showThinking_ {};
        // Specifies whether to display the tool calling process in IM messages. Default value: false.
        shared_ptr<bool> showToolCalls_ {};
      };

      virtual bool empty() const override { return this->channelConfig_ == nullptr
        && this->channelType_ == nullptr && this->credential_ == nullptr && this->enabled_ == nullptr && this->serviceEndpointId_ == nullptr; };
      // channelConfig Field Functions 
      bool hasChannelConfig() const { return this->channelConfig_ != nullptr;};
      void deleteChannelConfig() { this->channelConfig_ = nullptr;};
      inline const Body::ChannelConfig & getChannelConfig() const { DARABONBA_PTR_GET_CONST(channelConfig_, Body::ChannelConfig) };
      inline Body::ChannelConfig getChannelConfig() { DARABONBA_PTR_GET(channelConfig_, Body::ChannelConfig) };
      inline Body& setChannelConfig(const Body::ChannelConfig & channelConfig) { DARABONBA_PTR_SET_VALUE(channelConfig_, channelConfig) };
      inline Body& setChannelConfig(Body::ChannelConfig && channelConfig) { DARABONBA_PTR_SET_RVALUE(channelConfig_, channelConfig) };


      // channelType Field Functions 
      bool hasChannelType() const { return this->channelType_ != nullptr;};
      void deleteChannelType() { this->channelType_ = nullptr;};
      inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
      inline Body& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


      // credential Field Functions 
      bool hasCredential() const { return this->credential_ != nullptr;};
      void deleteCredential() { this->credential_ = nullptr;};
      inline const map<string, string> & getCredential() const { DARABONBA_PTR_GET_CONST(credential_, map<string, string>) };
      inline map<string, string> getCredential() { DARABONBA_PTR_GET(credential_, map<string, string>) };
      inline Body& setCredential(const map<string, string> & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
      inline Body& setCredential(map<string, string> && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Body& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // serviceEndpointId Field Functions 
      bool hasServiceEndpointId() const { return this->serviceEndpointId_ != nullptr;};
      void deleteServiceEndpointId() { this->serviceEndpointId_ = nullptr;};
      inline string getServiceEndpointId() const { DARABONBA_PTR_GET_DEFAULT(serviceEndpointId_, "") };
      inline Body& setServiceEndpointId(string serviceEndpointId) { DARABONBA_PTR_SET_VALUE(serviceEndpointId_, serviceEndpointId) };


    protected:
      // The channel behavior configuration.
      shared_ptr<Body::ChannelConfig> channelConfig_ {};
      // The IM channel type. Valid values:
      // 
      // - DINGTALK: DingTalk.
      // - FEISHU: Lark.
      // - WECOM: WeCom.
      // 
      // This parameter is required.
      shared_ptr<string> channelType_ {};
      // The channel credentials. All fields must be provided and field values must be non-empty strings. DingTalk uses clientID and clientSecret. Lark uses appId and appSecret. WeCom uses botId and secret.
      // 
      // This parameter is required.
      shared_ptr<map<string, string>> credential_ {};
      // Specifies whether to enable the IM channel. Default value: true.
      shared_ptr<bool> enabled_ {};
      // The ID of the ServiceEndpoint to bind. The endpoint must belong to the specified agent and its current version, be in the ready state, and have a public network address.
      // 
      // This parameter is required.
      shared_ptr<string> serviceEndpointId_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateAgentIMChannelRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateAgentIMChannelRequest::Body) };
    inline CreateAgentIMChannelRequest::Body getBody() { DARABONBA_PTR_GET(body_, CreateAgentIMChannelRequest::Body) };
    inline CreateAgentIMChannelRequest& setBody(const CreateAgentIMChannelRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateAgentIMChannelRequest& setBody(CreateAgentIMChannelRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAgentIMChannelRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The request body.
    shared_ptr<CreateAgentIMChannelRequest::Body> body_ {};
    // A reserved idempotency token. The backend does not provide persistent idempotency guarantees in the current phase.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHOPPINGASSISTANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SHOPPINGASSISTANTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ShoppingAssistantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShoppingAssistantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Contents, contents_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(InputMessage, inputMessage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, ShoppingAssistantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Contents, contents_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(InputMessage, inputMessage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    ShoppingAssistantRequest() = default ;
    ShoppingAssistantRequest(const ShoppingAssistantRequest &) = default ;
    ShoppingAssistantRequest(ShoppingAssistantRequest &&) = default ;
    ShoppingAssistantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShoppingAssistantRequest() = default ;
    ShoppingAssistantRequest& operator=(const ShoppingAssistantRequest &) = default ;
    ShoppingAssistantRequest& operator=(ShoppingAssistantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InputMessage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InputMessage& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
      };
      friend void from_json(const Darabonba::Json& j, InputMessage& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
      };
      InputMessage() = default ;
      InputMessage(const InputMessage &) = default ;
      InputMessage(InputMessage &&) = default ;
      InputMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InputMessage() = default ;
      InputMessage& operator=(const InputMessage &) = default ;
      InputMessage& operator=(InputMessage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->text_ == nullptr
        && this->type_ == nullptr; };
        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Content& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Content& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The message content.
        shared_ptr<string> text_ {};
        // The message type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<InputMessage::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<InputMessage::Content>) };
      inline vector<InputMessage::Content> getContent() { DARABONBA_PTR_GET(content_, vector<InputMessage::Content>) };
      inline InputMessage& setContent(const vector<InputMessage::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline InputMessage& setContent(vector<InputMessage::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    protected:
      // The message content.
      shared_ptr<vector<InputMessage::Content>> content_ {};
    };

    class Contents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Contents& obj) { 
        DARABONBA_PTR_TO_JSON(Text, text_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Contents& obj) { 
        DARABONBA_PTR_FROM_JSON(Text, text_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Contents() = default ;
      Contents(const Contents &) = default ;
      Contents(Contents &&) = default ;
      Contents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Contents() = default ;
      Contents& operator=(const Contents &) = default ;
      Contents& operator=(Contents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->text_ == nullptr
        && this->type_ == nullptr; };
      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline Contents& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Contents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The message content.
      shared_ptr<string> text_ {};
      // The message type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->contents_ == nullptr && this->conversationId_ == nullptr && this->environment_ == nullptr && this->inputMessage_ == nullptr && this->instanceId_ == nullptr
        && this->language_ == nullptr && this->sceneId_ == nullptr && this->serviceId_ == nullptr && this->sessionId_ == nullptr && this->uid_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ShoppingAssistantRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const ShoppingAssistantRequest::Contents & getContents() const { DARABONBA_PTR_GET_CONST(contents_, ShoppingAssistantRequest::Contents) };
    inline ShoppingAssistantRequest::Contents getContents() { DARABONBA_PTR_GET(contents_, ShoppingAssistantRequest::Contents) };
    inline ShoppingAssistantRequest& setContents(const ShoppingAssistantRequest::Contents & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline ShoppingAssistantRequest& setContents(ShoppingAssistantRequest::Contents && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline ShoppingAssistantRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string getEnvironment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline ShoppingAssistantRequest& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // inputMessage Field Functions 
    bool hasInputMessage() const { return this->inputMessage_ != nullptr;};
    void deleteInputMessage() { this->inputMessage_ = nullptr;};
    inline const ShoppingAssistantRequest::InputMessage & getInputMessage() const { DARABONBA_PTR_GET_CONST(inputMessage_, ShoppingAssistantRequest::InputMessage) };
    inline ShoppingAssistantRequest::InputMessage getInputMessage() { DARABONBA_PTR_GET(inputMessage_, ShoppingAssistantRequest::InputMessage) };
    inline ShoppingAssistantRequest& setInputMessage(const ShoppingAssistantRequest::InputMessage & inputMessage) { DARABONBA_PTR_SET_VALUE(inputMessage_, inputMessage) };
    inline ShoppingAssistantRequest& setInputMessage(ShoppingAssistantRequest::InputMessage && inputMessage) { DARABONBA_PTR_SET_RVALUE(inputMessage_, inputMessage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ShoppingAssistantRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ShoppingAssistantRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline ShoppingAssistantRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ShoppingAssistantRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ShoppingAssistantRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ShoppingAssistantRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The additional configuration.
    shared_ptr<string> config_ {};
    // The contents.
    shared_ptr<ShoppingAssistantRequest::Contents> contents_ {};
    // The conversation ID. This parameter is not yet effective.
    shared_ptr<string> conversationId_ {};
    // **The environment.**
    shared_ptr<string> environment_ {};
    // The input message.
    shared_ptr<ShoppingAssistantRequest::InputMessage> inputMessage_ {};
    // **The instance ID.**
    shared_ptr<string> instanceId_ {};
    // The language.
    shared_ptr<string> language_ {};
    // **The scene ID.**
    shared_ptr<string> sceneId_ {};
    // **The service ID.**
    shared_ptr<string> serviceId_ {};
    // The session ID.
    shared_ptr<string> sessionId_ {};
    // user id。
    shared_ptr<string> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif

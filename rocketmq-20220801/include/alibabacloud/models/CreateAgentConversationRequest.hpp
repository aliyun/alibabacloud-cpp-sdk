// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTCONVERSATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTCONVERSATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class CreateAgentConversationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentConversationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(initialMessage, initialMessage_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentConversationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(initialMessage, initialMessage_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    CreateAgentConversationRequest() = default ;
    CreateAgentConversationRequest(const CreateAgentConversationRequest &) = default ;
    CreateAgentConversationRequest(CreateAgentConversationRequest &&) = default ;
    CreateAgentConversationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentConversationRequest() = default ;
    CreateAgentConversationRequest& operator=(const CreateAgentConversationRequest &) = default ;
    CreateAgentConversationRequest& operator=(CreateAgentConversationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InitialMessage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InitialMessage& obj) { 
        DARABONBA_PTR_TO_JSON(clientContext, clientContext_);
        DARABONBA_PTR_TO_JSON(images, images_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(messageType, messageType_);
        DARABONBA_PTR_TO_JSON(ticketRequestId, ticketRequestId_);
      };
      friend void from_json(const Darabonba::Json& j, InitialMessage& obj) { 
        DARABONBA_PTR_FROM_JSON(clientContext, clientContext_);
        DARABONBA_PTR_FROM_JSON(images, images_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(messageType, messageType_);
        DARABONBA_PTR_FROM_JSON(ticketRequestId, ticketRequestId_);
      };
      InitialMessage() = default ;
      InitialMessage(const InitialMessage &) = default ;
      InitialMessage(InitialMessage &&) = default ;
      InitialMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InitialMessage() = default ;
      InitialMessage& operator=(const InitialMessage &) = default ;
      InitialMessage& operator=(InitialMessage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Images : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Images& obj) { 
          DARABONBA_PTR_TO_JSON(dataBase64, dataBase64_);
          DARABONBA_PTR_TO_JSON(mediaType, mediaType_);
        };
        friend void from_json(const Darabonba::Json& j, Images& obj) { 
          DARABONBA_PTR_FROM_JSON(dataBase64, dataBase64_);
          DARABONBA_PTR_FROM_JSON(mediaType, mediaType_);
        };
        Images() = default ;
        Images(const Images &) = default ;
        Images(Images &&) = default ;
        Images(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Images() = default ;
        Images& operator=(const Images &) = default ;
        Images& operator=(Images &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataBase64_ == nullptr
        && this->mediaType_ == nullptr; };
        // dataBase64 Field Functions 
        bool hasDataBase64() const { return this->dataBase64_ != nullptr;};
        void deleteDataBase64() { this->dataBase64_ = nullptr;};
        inline string getDataBase64() const { DARABONBA_PTR_GET_DEFAULT(dataBase64_, "") };
        inline Images& setDataBase64(string dataBase64) { DARABONBA_PTR_SET_VALUE(dataBase64_, dataBase64) };


        // mediaType Field Functions 
        bool hasMediaType() const { return this->mediaType_ != nullptr;};
        void deleteMediaType() { this->mediaType_ = nullptr;};
        inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
        inline Images& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


      protected:
        // This parameter is required.
        shared_ptr<string> dataBase64_ {};
        // This parameter is required.
        shared_ptr<string> mediaType_ {};
      };

      virtual bool empty() const override { return this->clientContext_ == nullptr
        && this->images_ == nullptr && this->message_ == nullptr && this->messageType_ == nullptr && this->ticketRequestId_ == nullptr; };
      // clientContext Field Functions 
      bool hasClientContext() const { return this->clientContext_ != nullptr;};
      void deleteClientContext() { this->clientContext_ = nullptr;};
      inline string getClientContext() const { DARABONBA_PTR_GET_DEFAULT(clientContext_, "") };
      inline InitialMessage& setClientContext(string clientContext) { DARABONBA_PTR_SET_VALUE(clientContext_, clientContext) };


      // images Field Functions 
      bool hasImages() const { return this->images_ != nullptr;};
      void deleteImages() { this->images_ = nullptr;};
      inline const vector<InitialMessage::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<InitialMessage::Images>) };
      inline vector<InitialMessage::Images> getImages() { DARABONBA_PTR_GET(images_, vector<InitialMessage::Images>) };
      inline InitialMessage& setImages(const vector<InitialMessage::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
      inline InitialMessage& setImages(vector<InitialMessage::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline InitialMessage& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // messageType Field Functions 
      bool hasMessageType() const { return this->messageType_ != nullptr;};
      void deleteMessageType() { this->messageType_ = nullptr;};
      inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
      inline InitialMessage& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


      // ticketRequestId Field Functions 
      bool hasTicketRequestId() const { return this->ticketRequestId_ != nullptr;};
      void deleteTicketRequestId() { this->ticketRequestId_ = nullptr;};
      inline string getTicketRequestId() const { DARABONBA_PTR_GET_DEFAULT(ticketRequestId_, "") };
      inline InitialMessage& setTicketRequestId(string ticketRequestId) { DARABONBA_PTR_SET_VALUE(ticketRequestId_, ticketRequestId) };


    protected:
      shared_ptr<string> clientContext_ {};
      shared_ptr<vector<InitialMessage::Images>> images_ {};
      // This parameter is required.
      shared_ptr<string> message_ {};
      shared_ptr<string> messageType_ {};
      shared_ptr<string> ticketRequestId_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->initialMessage_ == nullptr && this->title_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAgentConversationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // initialMessage Field Functions 
    bool hasInitialMessage() const { return this->initialMessage_ != nullptr;};
    void deleteInitialMessage() { this->initialMessage_ = nullptr;};
    inline const CreateAgentConversationRequest::InitialMessage & getInitialMessage() const { DARABONBA_PTR_GET_CONST(initialMessage_, CreateAgentConversationRequest::InitialMessage) };
    inline CreateAgentConversationRequest::InitialMessage getInitialMessage() { DARABONBA_PTR_GET(initialMessage_, CreateAgentConversationRequest::InitialMessage) };
    inline CreateAgentConversationRequest& setInitialMessage(const CreateAgentConversationRequest::InitialMessage & initialMessage) { DARABONBA_PTR_SET_VALUE(initialMessage_, initialMessage) };
    inline CreateAgentConversationRequest& setInitialMessage(CreateAgentConversationRequest::InitialMessage && initialMessage) { DARABONBA_PTR_SET_RVALUE(initialMessage_, initialMessage) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateAgentConversationRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    shared_ptr<CreateAgentConversationRequest::InitialMessage> initialMessage_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif

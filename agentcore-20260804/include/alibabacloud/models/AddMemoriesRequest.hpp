// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEMORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMEMORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class AddMemoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMemoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, AddMemoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    AddMemoriesRequest() = default ;
    AddMemoriesRequest(const AddMemoriesRequest &) = default ;
    AddMemoriesRequest(AddMemoriesRequest &&) = default ;
    AddMemoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMemoriesRequest() = default ;
    AddMemoriesRequest& operator=(const AddMemoriesRequest &) = default ;
    AddMemoriesRequest& operator=(AddMemoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(messages, messages_);
        DARABONBA_PTR_TO_JSON(metadata, metadata_);
        DARABONBA_PTR_TO_JSON(referenceTime, referenceTime_);
        DARABONBA_PTR_TO_JSON(scope, scope_);
        DARABONBA_PTR_TO_JSON(sync, sync_);
        DARABONBA_PTR_TO_JSON(text, text_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(messages, messages_);
        DARABONBA_PTR_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(referenceTime, referenceTime_);
        DARABONBA_PTR_FROM_JSON(scope, scope_);
        DARABONBA_PTR_FROM_JSON(sync, sync_);
        DARABONBA_PTR_FROM_JSON(text, text_);
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
      class Scope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Scope& obj) { 
          DARABONBA_PTR_TO_JSON(agentId, agentId_);
          DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(userId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Scope& obj) { 
          DARABONBA_PTR_FROM_JSON(agentId, agentId_);
          DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
          DARABONBA_PTR_FROM_JSON(userId, userId_);
        };
        Scope() = default ;
        Scope(const Scope &) = default ;
        Scope(Scope &&) = default ;
        Scope(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Scope() = default ;
        Scope& operator=(const Scope &) = default ;
        Scope& operator=(Scope &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->sessionId_ == nullptr && this->userId_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline Scope& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline Scope& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Scope& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The ID of the agent. The length is limited to 1 to 128 UTF-8 bytes. The ID cannot contain a forward slash (/) or an asterisk (*).
        shared_ptr<string> agentId_ {};
        // The ID of the session. The length is limited to 1 to 128 UTF-8 bytes. The ID cannot contain a forward slash (/) or an asterisk (*).
        shared_ptr<string> sessionId_ {};
        // The ID of the user. The length is limited to 1 to 128 UTF-8 bytes. The ID cannot contain a forward slash (/) or an asterisk (*).
        shared_ptr<string> userId_ {};
      };

      class Messages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Messages& obj) { 
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(role, role_);
        };
        friend void from_json(const Darabonba::Json& j, Messages& obj) { 
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(role, role_);
        };
        Messages() = default ;
        Messages(const Messages &) = default ;
        Messages(Messages &&) = default ;
        Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Messages() = default ;
        Messages& operator=(const Messages &) = default ;
        Messages& operator=(Messages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Messages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      protected:
        // The content of the message.
        // 
        // This parameter is required.
        shared_ptr<string> content_ {};
        // The role of the message.
        // 
        // This parameter is required.
        shared_ptr<string> role_ {};
      };

      virtual bool empty() const override { return this->messages_ == nullptr
        && this->metadata_ == nullptr && this->referenceTime_ == nullptr && this->scope_ == nullptr && this->sync_ == nullptr && this->text_ == nullptr; };
      // messages Field Functions 
      bool hasMessages() const { return this->messages_ != nullptr;};
      void deleteMessages() { this->messages_ = nullptr;};
      inline const vector<Body::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Body::Messages>) };
      inline vector<Body::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<Body::Messages>) };
      inline Body& setMessages(const vector<Body::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
      inline Body& setMessages(vector<Body::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline const map<string, string> & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
      inline map<string, string> getMetadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
      inline Body& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
      inline Body& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


      // referenceTime Field Functions 
      bool hasReferenceTime() const { return this->referenceTime_ != nullptr;};
      void deleteReferenceTime() { this->referenceTime_ = nullptr;};
      inline string getReferenceTime() const { DARABONBA_PTR_GET_DEFAULT(referenceTime_, "") };
      inline Body& setReferenceTime(string referenceTime) { DARABONBA_PTR_SET_VALUE(referenceTime_, referenceTime) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline const Body::Scope & getScope() const { DARABONBA_PTR_GET_CONST(scope_, Body::Scope) };
      inline Body::Scope getScope() { DARABONBA_PTR_GET(scope_, Body::Scope) };
      inline Body& setScope(const Body::Scope & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
      inline Body& setScope(Body::Scope && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


      // sync Field Functions 
      bool hasSync() const { return this->sync_ != nullptr;};
      void deleteSync() { this->sync_ = nullptr;};
      inline bool getSync() const { DARABONBA_PTR_GET_DEFAULT(sync_, false) };
      inline Body& setSync(bool sync) { DARABONBA_PTR_SET_VALUE(sync_, sync) };


      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline Body& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    protected:
      // The list of messages. You must provide either this parameter or Text, but not both. The list must contain 1 to 20 messages, and the total size of the content must not exceed 32,000 UTF-8 bytes.
      shared_ptr<vector<Body::Messages>> messages_ {};
      // The string key-value metadata. You can specify up to 16 keys. The maximum length of a key is 64 characters, and the maximum length of a value is 1,024 characters.
      shared_ptr<map<string, string>> metadata_ {};
      // The time reference point for the batch of messages or text. The value must be in RFC 3339 format with a time zone and support fractional seconds.
      shared_ptr<string> referenceTime_ {};
      // The scope of the write operation. UserId, AgentId, and SessionId are all optional.
      shared_ptr<Body::Scope> scope_ {};
      // Specifies whether to synchronously wait for memory extraction to complete. Default value: true.
      shared_ptr<bool> sync_ {};
      // The text to be written directly. You must provide either this parameter or Messages, but not both. The size of the text must not exceed 32,000 UTF-8 bytes.
      shared_ptr<string> text_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const AddMemoriesRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, AddMemoriesRequest::Body) };
    inline AddMemoriesRequest::Body getBody() { DARABONBA_PTR_GET(body_, AddMemoriesRequest::Body) };
    inline AddMemoriesRequest& setBody(const AddMemoriesRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline AddMemoriesRequest& setBody(AddMemoriesRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body for writing to memory.
    // 
    // This parameter is required.
    shared_ptr<AddMemoriesRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif

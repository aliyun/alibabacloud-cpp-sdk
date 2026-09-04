// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHATSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetChatSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(session, session_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(session, session_);
    };
    GetChatSessionResponseBody() = default ;
    GetChatSessionResponseBody(const GetChatSessionResponseBody &) = default ;
    GetChatSessionResponseBody(GetChatSessionResponseBody &&) = default ;
    GetChatSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatSessionResponseBody() = default ;
    GetChatSessionResponseBody& operator=(const GetChatSessionResponseBody &) = default ;
    GetChatSessionResponseBody& operator=(GetChatSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Session : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Session& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(isExpired, isExpired_);
        DARABONBA_ANY_TO_JSON(metadata, metadata_);
        DARABONBA_PTR_TO_JSON(model, model_);
        DARABONBA_PTR_TO_JSON(object, object_);
        DARABONBA_PTR_TO_JSON(objectId, objectId_);
        DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
        DARABONBA_PTR_TO_JSON(title, title_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Session& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(isExpired, isExpired_);
        DARABONBA_ANY_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(model, model_);
        DARABONBA_PTR_FROM_JSON(object, object_);
        DARABONBA_PTR_FROM_JSON(objectId, objectId_);
        DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
        DARABONBA_PTR_FROM_JSON(title, title_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      };
      Session() = default ;
      Session(const Session &) = default ;
      Session(Session &&) = default ;
      Session(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Session() = default ;
      Session& operator=(const Session &) = default ;
      Session& operator=(Session &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->id_ == nullptr && this->isExpired_ == nullptr && this->metadata_ == nullptr && this->model_ == nullptr && this->object_ == nullptr
        && this->objectId_ == nullptr && this->operatingObjectName_ == nullptr && this->title_ == nullptr && this->updatedAt_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
      inline Session& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Session& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isExpired Field Functions 
      bool hasIsExpired() const { return this->isExpired_ != nullptr;};
      void deleteIsExpired() { this->isExpired_ = nullptr;};
      inline bool getIsExpired() const { DARABONBA_PTR_GET_DEFAULT(isExpired_, false) };
      inline Session& setIsExpired(bool isExpired) { DARABONBA_PTR_SET_VALUE(isExpired_, isExpired) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline       const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
      Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
      inline Session& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
      inline Session& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Session& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // object Field Functions 
      bool hasObject() const { return this->object_ != nullptr;};
      void deleteObject() { this->object_ = nullptr;};
      inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
      inline Session& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


      // objectId Field Functions 
      bool hasObjectId() const { return this->objectId_ != nullptr;};
      void deleteObjectId() { this->objectId_ = nullptr;};
      inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
      inline Session& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


      // operatingObjectName Field Functions 
      bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
      void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
      inline const vector<string> & getOperatingObjectName() const { DARABONBA_PTR_GET_CONST(operatingObjectName_, vector<string>) };
      inline vector<string> getOperatingObjectName() { DARABONBA_PTR_GET(operatingObjectName_, vector<string>) };
      inline Session& setOperatingObjectName(const vector<string> & operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };
      inline Session& setOperatingObjectName(vector<string> && operatingObjectName) { DARABONBA_PTR_SET_RVALUE(operatingObjectName_, operatingObjectName) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Session& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
      inline Session& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // The creation time.
      shared_ptr<int64_t> createdAt_ {};
      // The message ID.
      shared_ptr<string> id_ {};
      // Indicates whether the creation time is older than 30 days.
      shared_ptr<bool> isExpired_ {};
      // The session metadata.
      Darabonba::Json metadata_ {};
      // The abstract model name used by the session (quick/standard/flagship).
      shared_ptr<string> model_ {};
      // The type.
      shared_ptr<string> object_ {};
      // The associated object ID.
      shared_ptr<string> objectId_ {};
      // The list of digital employee names.
      shared_ptr<vector<string>> operatingObjectName_ {};
      // The title.
      shared_ptr<string> title_ {};
      // The update time.
      shared_ptr<int64_t> updatedAt_ {};
    };

    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(contextCleared, contextCleared_);
        DARABONBA_PTR_TO_JSON(fromShare, fromShare_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_ANY_TO_JSON(metadata, metadata_);
        DARABONBA_PTR_TO_JSON(object, object_);
        DARABONBA_PTR_TO_JSON(role, role_);
        DARABONBA_PTR_TO_JSON(shareUserName, shareUserName_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(traceId, traceId_);
        DARABONBA_PTR_TO_JSON(updateAt, updateAt_);
        DARABONBA_PTR_TO_JSON(userFeedback, userFeedback_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(contextCleared, contextCleared_);
        DARABONBA_PTR_FROM_JSON(fromShare, fromShare_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_ANY_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(object, object_);
        DARABONBA_PTR_FROM_JSON(role, role_);
        DARABONBA_PTR_FROM_JSON(shareUserName, shareUserName_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(traceId, traceId_);
        DARABONBA_PTR_FROM_JSON(updateAt, updateAt_);
        DARABONBA_PTR_FROM_JSON(userFeedback, userFeedback_);
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
        && this->contextCleared_ == nullptr && this->fromShare_ == nullptr && this->id_ == nullptr && this->metadata_ == nullptr && this->object_ == nullptr
        && this->role_ == nullptr && this->shareUserName_ == nullptr && this->status_ == nullptr && this->traceId_ == nullptr && this->updateAt_ == nullptr
        && this->userFeedback_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Messages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // contextCleared Field Functions 
      bool hasContextCleared() const { return this->contextCleared_ != nullptr;};
      void deleteContextCleared() { this->contextCleared_ = nullptr;};
      inline bool getContextCleared() const { DARABONBA_PTR_GET_DEFAULT(contextCleared_, false) };
      inline Messages& setContextCleared(bool contextCleared) { DARABONBA_PTR_SET_VALUE(contextCleared_, contextCleared) };


      // fromShare Field Functions 
      bool hasFromShare() const { return this->fromShare_ != nullptr;};
      void deleteFromShare() { this->fromShare_ = nullptr;};
      inline bool getFromShare() const { DARABONBA_PTR_GET_DEFAULT(fromShare_, false) };
      inline Messages& setFromShare(bool fromShare) { DARABONBA_PTR_SET_VALUE(fromShare_, fromShare) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Messages& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline       const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
      Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
      inline Messages& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
      inline Messages& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


      // object Field Functions 
      bool hasObject() const { return this->object_ != nullptr;};
      void deleteObject() { this->object_ = nullptr;};
      inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
      inline Messages& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // shareUserName Field Functions 
      bool hasShareUserName() const { return this->shareUserName_ != nullptr;};
      void deleteShareUserName() { this->shareUserName_ = nullptr;};
      inline string getShareUserName() const { DARABONBA_PTR_GET_DEFAULT(shareUserName_, "") };
      inline Messages& setShareUserName(string shareUserName) { DARABONBA_PTR_SET_VALUE(shareUserName_, shareUserName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Messages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // traceId Field Functions 
      bool hasTraceId() const { return this->traceId_ != nullptr;};
      void deleteTraceId() { this->traceId_ = nullptr;};
      inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
      inline Messages& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


      // updateAt Field Functions 
      bool hasUpdateAt() const { return this->updateAt_ != nullptr;};
      void deleteUpdateAt() { this->updateAt_ = nullptr;};
      inline int64_t getUpdateAt() const { DARABONBA_PTR_GET_DEFAULT(updateAt_, 0L) };
      inline Messages& setUpdateAt(int64_t updateAt) { DARABONBA_PTR_SET_VALUE(updateAt_, updateAt) };


      // userFeedback Field Functions 
      bool hasUserFeedback() const { return this->userFeedback_ != nullptr;};
      void deleteUserFeedback() { this->userFeedback_ = nullptr;};
      inline string getUserFeedback() const { DARABONBA_PTR_GET_DEFAULT(userFeedback_, "") };
      inline Messages& setUserFeedback(string userFeedback) { DARABONBA_PTR_SET_VALUE(userFeedback_, userFeedback) };


    protected:
      // The message content.
      shared_ptr<string> content_ {};
      // Indicates whether the LLM context has been cleared after this message.
      shared_ptr<bool> contextCleared_ {};
      // Indicates whether the message is copied from a shared conversation.
      shared_ptr<bool> fromShare_ {};
      // The message ID.
      shared_ptr<string> id_ {};
      // The message metadata.
      Darabonba::Json metadata_ {};
      // The type.
      shared_ptr<string> object_ {};
      // The role.
      shared_ptr<string> role_ {};
      // The username of the user who shared the message. This parameter has a value only when from_share is set to True.
      shared_ptr<string> shareUserName_ {};
      // The message status.
      shared_ptr<string> status_ {};
      // The trace ID.
      shared_ptr<string> traceId_ {};
      // The update time.
      shared_ptr<int64_t> updateAt_ {};
      // The user feedback type: LIKE | DISLIKE | CANCEL.
      shared_ptr<string> userFeedback_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->messages_ == nullptr && this->requestId_ == nullptr && this->session_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetChatSessionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetChatSessionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<GetChatSessionResponseBody::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<GetChatSessionResponseBody::Messages>) };
    inline vector<GetChatSessionResponseBody::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<GetChatSessionResponseBody::Messages>) };
    inline GetChatSessionResponseBody& setMessages(const vector<GetChatSessionResponseBody::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline GetChatSessionResponseBody& setMessages(vector<GetChatSessionResponseBody::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChatSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // session Field Functions 
    bool hasSession() const { return this->session_ != nullptr;};
    void deleteSession() { this->session_ = nullptr;};
    inline const GetChatSessionResponseBody::Session & getSession() const { DARABONBA_PTR_GET_CONST(session_, GetChatSessionResponseBody::Session) };
    inline GetChatSessionResponseBody::Session getSession() { DARABONBA_PTR_GET(session_, GetChatSessionResponseBody::Session) };
    inline GetChatSessionResponseBody& setSession(const GetChatSessionResponseBody::Session & session) { DARABONBA_PTR_SET_VALUE(session_, session) };
    inline GetChatSessionResponseBody& setSession(GetChatSessionResponseBody::Session && session) { DARABONBA_PTR_SET_RVALUE(session_, session) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The message data detail structure.
    shared_ptr<vector<GetChatSessionResponseBody::Messages>> messages_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The session information.
    shared_ptr<GetChatSessionResponseBody::Session> session_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif

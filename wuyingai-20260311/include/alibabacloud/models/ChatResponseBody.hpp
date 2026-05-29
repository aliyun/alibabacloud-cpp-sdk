// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingAI20260311
{
namespace Models
{
  class ChatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Created, created_);
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Object, object_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(SequenceNumber, sequenceNumber_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Created, created_);
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Object, object_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(SequenceNumber, sequenceNumber_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ChatResponseBody() = default ;
    ChatResponseBody(const ChatResponseBody &) = default ;
    ChatResponseBody(ChatResponseBody &&) = default ;
    ChatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatResponseBody() = default ;
    ChatResponseBody& operator=(const ChatResponseBody &) = default ;
    ChatResponseBody& operator=(ChatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_ANY_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Object, object_);
        DARABONBA_PTR_TO_JSON(Text, text_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_ANY_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Object, object_);
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
      virtual bool empty() const override { return this->data_ == nullptr
        && this->object_ == nullptr && this->text_ == nullptr && this->type_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline       const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
      Darabonba::Json & getData() { DARABONBA_GET(data_) };
      inline Content& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
      inline Content& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


      // object Field Functions 
      bool hasObject() const { return this->object_ != nullptr;};
      void deleteObject() { this->object_ = nullptr;};
      inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
      inline Content& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


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
      Darabonba::Json data_ {};
      shared_ptr<string> object_ {};
      shared_ptr<string> text_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->content_ == nullptr && this->created_ == nullptr && this->createdAt_ == nullptr && this->httpStatusCode_ == nullptr && this->id_ == nullptr
        && this->message_ == nullptr && this->object_ == nullptr && this->requestId_ == nullptr && this->role_ == nullptr && this->sequenceNumber_ == nullptr
        && this->sessionId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr && this->text_ == nullptr && this->type_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ChatResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<ChatResponseBody::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<ChatResponseBody::Content>) };
    inline vector<ChatResponseBody::Content> getContent() { DARABONBA_PTR_GET(content_, vector<ChatResponseBody::Content>) };
    inline ChatResponseBody& setContent(const vector<ChatResponseBody::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ChatResponseBody& setContent(vector<ChatResponseBody::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline ChatResponseBody& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ChatResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ChatResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ChatResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ChatResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // object Field Functions 
    bool hasObject() const { return this->object_ != nullptr;};
    void deleteObject() { this->object_ = nullptr;};
    inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
    inline ChatResponseBody& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ChatResponseBody& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // sequenceNumber Field Functions 
    bool hasSequenceNumber() const { return this->sequenceNumber_ != nullptr;};
    void deleteSequenceNumber() { this->sequenceNumber_ = nullptr;};
    inline string getSequenceNumber() const { DARABONBA_PTR_GET_DEFAULT(sequenceNumber_, "") };
    inline ChatResponseBody& setSequenceNumber(string sequenceNumber) { DARABONBA_PTR_SET_VALUE(sequenceNumber_, sequenceNumber) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ChatResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ChatResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ChatResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ChatResponseBody& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ChatResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ChatResponseBody::Content>> content_ {};
    shared_ptr<string> created_ {};
    shared_ptr<string> createdAt_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> object_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> role_ {};
    shared_ptr<string> sequenceNumber_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> text_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingAI20260311
#endif

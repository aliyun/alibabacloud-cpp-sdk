// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETNOTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETNOTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class ListTicketNotesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketNotesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketNotesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListTicketNotesResponseBody() = default ;
    ListTicketNotesResponseBody(const ListTicketNotesResponseBody &) = default ;
    ListTicketNotesResponseBody(ListTicketNotesResponseBody &&) = default ;
    ListTicketNotesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketNotesResponseBody() = default ;
    ListTicketNotesResponseBody& operator=(const ListTicketNotesResponseBody &) = default ;
    ListTicketNotesResponseBody& operator=(ListTicketNotesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Attachments, attachments_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Dialog, dialog_);
        DARABONBA_PTR_TO_JSON(DialogId, dialogId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tip, tip_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Attachments, attachments_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Dialog, dialog_);
        DARABONBA_PTR_FROM_JSON(DialogId, dialogId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tip, tip_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(User, user_);
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
      class User : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const User& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Role, role_);
        };
        friend void from_json(const Darabonba::Json& j, User& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
        };
        User() = default ;
        User(const User &) = default ;
        User(User &&) = default ;
        User(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~User() = default ;
        User& operator=(const User &) = default ;
        User& operator=(User &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->role_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline User& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline int32_t getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, 0) };
        inline User& setRole(int32_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      protected:
        // The name of the user.
        shared_ptr<string> name_ {};
        // The role of the user in the communication. This parameter distinguishes between customer service agents and customers. Valid values: \\`2\\`: Customer service agent. \\`3\\`: Customer.
        shared_ptr<int32_t> role_ {};
      };

      class Dialog : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dialog& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Schema, schema_);
        };
        friend void from_json(const Darabonba::Json& j, Dialog& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Schema, schema_);
        };
        Dialog() = default ;
        Dialog(const Dialog &) = default ;
        Dialog(Dialog &&) = default ;
        Dialog(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dialog() = default ;
        Dialog& operator=(const Dialog &) = default ;
        Dialog& operator=(Dialog &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->schema_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Dialog& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // schema Field Functions 
        bool hasSchema() const { return this->schema_ != nullptr;};
        void deleteSchema() { this->schema_ = nullptr;};
        inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
        inline Dialog& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


      protected:
        // The content of the ticket communication.
        shared_ptr<string> content_ {};
        // The system card for the ticket communication record. This parameter is reserved for future use. Currently, you can use the \\`Content\\` parameter to retrieve the plain text.
        shared_ptr<string> schema_ {};
      };

      class Attachments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Attachments& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Attachments& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        Attachments() = default ;
        Attachments(const Attachments &) = default ;
        Attachments(Attachments &&) = default ;
        Attachments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Attachments() = default ;
        Attachments& operator=(const Attachments &) = default ;
        Attachments& operator=(Attachments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->url_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Attachments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Attachments& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The name of the attachment.
        shared_ptr<string> name_ {};
        // A temporary URL to access the attachment.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->attachments_ == nullptr
        && this->createTime_ == nullptr && this->dialog_ == nullptr && this->dialogId_ == nullptr && this->status_ == nullptr && this->tip_ == nullptr
        && this->type_ == nullptr && this->user_ == nullptr; };
      // attachments Field Functions 
      bool hasAttachments() const { return this->attachments_ != nullptr;};
      void deleteAttachments() { this->attachments_ = nullptr;};
      inline const vector<Data::Attachments> & getAttachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<Data::Attachments>) };
      inline vector<Data::Attachments> getAttachments() { DARABONBA_PTR_GET(attachments_, vector<Data::Attachments>) };
      inline Data& setAttachments(const vector<Data::Attachments> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
      inline Data& setAttachments(vector<Data::Attachments> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dialog Field Functions 
      bool hasDialog() const { return this->dialog_ != nullptr;};
      void deleteDialog() { this->dialog_ = nullptr;};
      inline const Data::Dialog & getDialog() const { DARABONBA_PTR_GET_CONST(dialog_, Data::Dialog) };
      inline Data::Dialog getDialog() { DARABONBA_PTR_GET(dialog_, Data::Dialog) };
      inline Data& setDialog(const Data::Dialog & dialog) { DARABONBA_PTR_SET_VALUE(dialog_, dialog) };
      inline Data& setDialog(Data::Dialog && dialog) { DARABONBA_PTR_SET_RVALUE(dialog_, dialog) };


      // dialogId Field Functions 
      bool hasDialogId() const { return this->dialogId_ != nullptr;};
      void deleteDialogId() { this->dialogId_ = nullptr;};
      inline int64_t getDialogId() const { DARABONBA_PTR_GET_DEFAULT(dialogId_, 0L) };
      inline Data& setDialogId(int64_t dialogId) { DARABONBA_PTR_SET_VALUE(dialogId_, dialogId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tip Field Functions 
      bool hasTip() const { return this->tip_ != nullptr;};
      void deleteTip() { this->tip_ = nullptr;};
      inline string getTip() const { DARABONBA_PTR_GET_DEFAULT(tip_, "") };
      inline Data& setTip(string tip) { DARABONBA_PTR_SET_VALUE(tip_, tip) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Data& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline const Data::User & getUser() const { DARABONBA_PTR_GET_CONST(user_, Data::User) };
      inline Data::User getUser() { DARABONBA_PTR_GET(user_, Data::User) };
      inline Data& setUser(const Data::User & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
      inline Data& setUser(Data::User && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


    protected:
      // The list of attachments.
      shared_ptr<vector<Data::Attachments>> attachments_ {};
      // The UNIX timestamp when the communication message was created.
      shared_ptr<int64_t> createTime_ {};
      // The ticket communication record object.
      shared_ptr<Data::Dialog> dialog_ {};
      // The unique ID of the communication record.
      shared_ptr<int64_t> dialogId_ {};
      // The status of the communication message. Valid values: \\`1\\`: Unread. \\`2\\`: Read.
      shared_ptr<int32_t> status_ {};
      // This parameter is not in use.
      shared_ptr<string> tip_ {};
      // The type of communication. Valid values: \\`1\\`: Card, which corresponds to \\`Schema\\`. \\`2\\`: Text, which corresponds to \\`Content\\`.
      shared_ptr<int32_t> type_ {};
      // The user in the communication.
      shared_ptr<Data::User> user_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListTicketNotesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListTicketNotesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListTicketNotesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListTicketNotesResponseBody::Data>) };
    inline vector<ListTicketNotesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListTicketNotesResponseBody::Data>) };
    inline ListTicketNotesResponseBody& setData(const vector<ListTicketNotesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTicketNotesResponseBody& setData(vector<ListTicketNotesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTicketNotesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTicketNotesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTicketNotesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the permission error. An empty string is returned if you have the required permissions.
    shared_ptr<string> accessDeniedDetail_ {};
    // The return code for the API request.
    shared_ptr<int32_t> code_ {};
    // The return value, which is a list of communication records for the specified ticket.
    shared_ptr<vector<ListTicketNotesResponseBody::Data>> data_ {};
    // The error message. This parameter is returned when \\`Success\\` is \\`false\\`.
    shared_ptr<string> message_ {};
    // The unique ID of the request. Each request has a unique ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. A value of \\`true\\` indicates a successful call.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif

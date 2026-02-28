// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLSUMMARIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLSUMMARIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCallSummariesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallSummariesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallSummariesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCallSummariesResponseBody() = default ;
    ListCallSummariesResponseBody(const ListCallSummariesResponseBody &) = default ;
    ListCallSummariesResponseBody(ListCallSummariesResponseBody &&) = default ;
    ListCallSummariesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallSummariesResponseBody() = default ;
    ListCallSummariesResponseBody& operator=(const ListCallSummariesResponseBody &) = default ;
    ListCallSummariesResponseBody& operator=(ListCallSummariesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ContactId, contactId_);
        DARABONBA_PTR_TO_JSON(Context, context_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(Editor, editor_);
        DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
        DARABONBA_PTR_FROM_JSON(Context, context_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(Editor, editor_);
        DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
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
      virtual bool empty() const override { return this->contactId_ == nullptr
        && this->context_ == nullptr && this->createdTime_ == nullptr && this->creator_ == nullptr && this->editor_ == nullptr && this->ticketId_ == nullptr; };
      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
      inline Data& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // context Field Functions 
      bool hasContext() const { return this->context_ != nullptr;};
      void deleteContext() { this->context_ = nullptr;};
      inline string getContext() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
      inline Data& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline Data& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Data& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // editor Field Functions 
      bool hasEditor() const { return this->editor_ != nullptr;};
      void deleteEditor() { this->editor_ = nullptr;};
      inline string getEditor() const { DARABONBA_PTR_GET_DEFAULT(editor_, "") };
      inline Data& setEditor(string editor) { DARABONBA_PTR_SET_VALUE(editor_, editor) };


      // ticketId Field Functions 
      bool hasTicketId() const { return this->ticketId_ != nullptr;};
      void deleteTicketId() { this->ticketId_ = nullptr;};
      inline string getTicketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
      inline Data& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


    protected:
      shared_ptr<string> contactId_ {};
      shared_ptr<string> context_ {};
      shared_ptr<int64_t> createdTime_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> editor_ {};
      shared_ptr<string> ticketId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCallSummariesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListCallSummariesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListCallSummariesResponseBody::Data>) };
    inline vector<ListCallSummariesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListCallSummariesResponseBody::Data>) };
    inline ListCallSummariesResponseBody& setData(const vector<ListCallSummariesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCallSummariesResponseBody& setData(vector<ListCallSummariesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListCallSummariesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCallSummariesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListCallSummariesResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListCallSummariesResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCallSummariesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListCallSummariesResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMSGSTATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMSGSTATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class QueryMsgStatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMsgStatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMsgStatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryMsgStatResponseBody() = default ;
    QueryMsgStatResponseBody(const QueryMsgStatResponseBody &) = default ;
    QueryMsgStatResponseBody(QueryMsgStatResponseBody &&) = default ;
    QueryMsgStatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMsgStatResponseBody() = default ;
    QueryMsgStatResponseBody& operator=(const QueryMsgStatResponseBody &) = default ;
    QueryMsgStatResponseBody& operator=(QueryMsgStatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Accept, accept_);
        DARABONBA_PTR_TO_JSON(Arrive, arrive_);
        DARABONBA_PTR_TO_JSON(ClosePush, closePush_);
        DARABONBA_PTR_TO_JSON(Dismiss, dismiss_);
        DARABONBA_PTR_TO_JSON(MsgId, msgId_);
        DARABONBA_PTR_TO_JSON(Open, open_);
        DARABONBA_PTR_TO_JSON(Sent, sent_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Accept, accept_);
        DARABONBA_PTR_FROM_JSON(Arrive, arrive_);
        DARABONBA_PTR_FROM_JSON(ClosePush, closePush_);
        DARABONBA_PTR_FROM_JSON(Dismiss, dismiss_);
        DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
        DARABONBA_PTR_FROM_JSON(Open, open_);
        DARABONBA_PTR_FROM_JSON(Sent, sent_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->accept_ == nullptr
        && this->arrive_ == nullptr && this->closePush_ == nullptr && this->dismiss_ == nullptr && this->msgId_ == nullptr && this->open_ == nullptr
        && this->sent_ == nullptr && this->status_ == nullptr; };
      // accept Field Functions 
      bool hasAccept() const { return this->accept_ != nullptr;};
      void deleteAccept() { this->accept_ = nullptr;};
      inline int64_t getAccept() const { DARABONBA_PTR_GET_DEFAULT(accept_, 0L) };
      inline Data& setAccept(int64_t accept) { DARABONBA_PTR_SET_VALUE(accept_, accept) };


      // arrive Field Functions 
      bool hasArrive() const { return this->arrive_ != nullptr;};
      void deleteArrive() { this->arrive_ = nullptr;};
      inline int64_t getArrive() const { DARABONBA_PTR_GET_DEFAULT(arrive_, 0L) };
      inline Data& setArrive(int64_t arrive) { DARABONBA_PTR_SET_VALUE(arrive_, arrive) };


      // closePush Field Functions 
      bool hasClosePush() const { return this->closePush_ != nullptr;};
      void deleteClosePush() { this->closePush_ = nullptr;};
      inline int64_t getClosePush() const { DARABONBA_PTR_GET_DEFAULT(closePush_, 0L) };
      inline Data& setClosePush(int64_t closePush) { DARABONBA_PTR_SET_VALUE(closePush_, closePush) };


      // dismiss Field Functions 
      bool hasDismiss() const { return this->dismiss_ != nullptr;};
      void deleteDismiss() { this->dismiss_ = nullptr;};
      inline int64_t getDismiss() const { DARABONBA_PTR_GET_DEFAULT(dismiss_, 0L) };
      inline Data& setDismiss(int64_t dismiss) { DARABONBA_PTR_SET_VALUE(dismiss_, dismiss) };


      // msgId Field Functions 
      bool hasMsgId() const { return this->msgId_ != nullptr;};
      void deleteMsgId() { this->msgId_ = nullptr;};
      inline string getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
      inline Data& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


      // open Field Functions 
      bool hasOpen() const { return this->open_ != nullptr;};
      void deleteOpen() { this->open_ = nullptr;};
      inline int64_t getOpen() const { DARABONBA_PTR_GET_DEFAULT(open_, 0L) };
      inline Data& setOpen(int64_t open) { DARABONBA_PTR_SET_VALUE(open_, open) };


      // sent Field Functions 
      bool hasSent() const { return this->sent_ != nullptr;};
      void deleteSent() { this->sent_ = nullptr;};
      inline int64_t getSent() const { DARABONBA_PTR_GET_DEFAULT(sent_, 0L) };
      inline Data& setSent(int64_t sent) { DARABONBA_PTR_SET_VALUE(sent_, sent) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<int64_t> accept_ {};
      shared_ptr<int64_t> arrive_ {};
      shared_ptr<int64_t> closePush_ {};
      shared_ptr<int64_t> dismiss_ {};
      shared_ptr<string> msgId_ {};
      shared_ptr<int64_t> open_ {};
      shared_ptr<int64_t> sent_ {};
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryMsgStatResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryMsgStatResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryMsgStatResponseBody::Data) };
    inline QueryMsgStatResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryMsgStatResponseBody::Data) };
    inline QueryMsgStatResponseBody& setData(const QueryMsgStatResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryMsgStatResponseBody& setData(QueryMsgStatResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryMsgStatResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryMsgStatResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMsgStatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryMsgStatResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryMsgStatResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif

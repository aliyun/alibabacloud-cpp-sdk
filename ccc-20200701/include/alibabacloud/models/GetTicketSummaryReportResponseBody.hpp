// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTICKETSUMMARYREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTICKETSUMMARYREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetTicketSummaryReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTicketSummaryReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTicketSummaryReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetTicketSummaryReportResponseBody() = default ;
    GetTicketSummaryReportResponseBody(const GetTicketSummaryReportResponseBody &) = default ;
    GetTicketSummaryReportResponseBody(GetTicketSummaryReportResponseBody &&) = default ;
    GetTicketSummaryReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTicketSummaryReportResponseBody() = default ;
    GetTicketSummaryReportResponseBody& operator=(const GetTicketSummaryReportResponseBody &) = default ;
    GetTicketSummaryReportResponseBody& operator=(GetTicketSummaryReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TicketsAssigned, ticketsAssigned_);
        DARABONBA_PTR_TO_JSON(TicketsCreated, ticketsCreated_);
        DARABONBA_PTR_TO_JSON(TicketsParticipated, ticketsParticipated_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TicketsAssigned, ticketsAssigned_);
        DARABONBA_PTR_FROM_JSON(TicketsCreated, ticketsCreated_);
        DARABONBA_PTR_FROM_JSON(TicketsParticipated, ticketsParticipated_);
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
      virtual bool empty() const override { return this->ticketsAssigned_ == nullptr
        && this->ticketsCreated_ == nullptr && this->ticketsParticipated_ == nullptr; };
      // ticketsAssigned Field Functions 
      bool hasTicketsAssigned() const { return this->ticketsAssigned_ != nullptr;};
      void deleteTicketsAssigned() { this->ticketsAssigned_ = nullptr;};
      inline string getTicketsAssigned() const { DARABONBA_PTR_GET_DEFAULT(ticketsAssigned_, "") };
      inline Data& setTicketsAssigned(string ticketsAssigned) { DARABONBA_PTR_SET_VALUE(ticketsAssigned_, ticketsAssigned) };


      // ticketsCreated Field Functions 
      bool hasTicketsCreated() const { return this->ticketsCreated_ != nullptr;};
      void deleteTicketsCreated() { this->ticketsCreated_ = nullptr;};
      inline string getTicketsCreated() const { DARABONBA_PTR_GET_DEFAULT(ticketsCreated_, "") };
      inline Data& setTicketsCreated(string ticketsCreated) { DARABONBA_PTR_SET_VALUE(ticketsCreated_, ticketsCreated) };


      // ticketsParticipated Field Functions 
      bool hasTicketsParticipated() const { return this->ticketsParticipated_ != nullptr;};
      void deleteTicketsParticipated() { this->ticketsParticipated_ = nullptr;};
      inline string getTicketsParticipated() const { DARABONBA_PTR_GET_DEFAULT(ticketsParticipated_, "") };
      inline Data& setTicketsParticipated(string ticketsParticipated) { DARABONBA_PTR_SET_VALUE(ticketsParticipated_, ticketsParticipated) };


    protected:
      shared_ptr<string> ticketsAssigned_ {};
      shared_ptr<string> ticketsCreated_ {};
      shared_ptr<string> ticketsParticipated_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTicketSummaryReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTicketSummaryReportResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTicketSummaryReportResponseBody::Data) };
    inline GetTicketSummaryReportResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTicketSummaryReportResponseBody::Data) };
    inline GetTicketSummaryReportResponseBody& setData(const GetTicketSummaryReportResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTicketSummaryReportResponseBody& setData(GetTicketSummaryReportResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline GetTicketSummaryReportResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTicketSummaryReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTicketSummaryReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetTicketSummaryReportResponseBody::Data> data_ {};
    shared_ptr<int64_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif

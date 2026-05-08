// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYQWENCONFERENCESGTICKETPOPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYQWENCONFERENCESGTICKETPOPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class QueryQwenConferenceSgTicketPopResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryQwenConferenceSgTicketPopResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryQwenConferenceSgTicketPopResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryQwenConferenceSgTicketPopResponseBody() = default ;
    QueryQwenConferenceSgTicketPopResponseBody(const QueryQwenConferenceSgTicketPopResponseBody &) = default ;
    QueryQwenConferenceSgTicketPopResponseBody(QueryQwenConferenceSgTicketPopResponseBody &&) = default ;
    QueryQwenConferenceSgTicketPopResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryQwenConferenceSgTicketPopResponseBody() = default ;
    QueryQwenConferenceSgTicketPopResponseBody& operator=(const QueryQwenConferenceSgTicketPopResponseBody &) = default ;
    QueryQwenConferenceSgTicketPopResponseBody& operator=(QueryQwenConferenceSgTicketPopResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
        DARABONBA_PTR_TO_JSON(ExtFields, extFields_);
        DARABONBA_PTR_TO_JSON(FirstName, firstName_);
        DARABONBA_PTR_TO_JSON(LastName, lastName_);
        DARABONBA_PTR_TO_JSON(SubmitId, submitId_);
        DARABONBA_PTR_TO_JSON(TicketToken, ticketToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
        DARABONBA_PTR_FROM_JSON(ExtFields, extFields_);
        DARABONBA_PTR_FROM_JSON(FirstName, firstName_);
        DARABONBA_PTR_FROM_JSON(LastName, lastName_);
        DARABONBA_PTR_FROM_JSON(SubmitId, submitId_);
        DARABONBA_PTR_FROM_JSON(TicketToken, ticketToken_);
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
      virtual bool empty() const override { return this->companyName_ == nullptr
        && this->extFields_ == nullptr && this->firstName_ == nullptr && this->lastName_ == nullptr && this->submitId_ == nullptr && this->ticketToken_ == nullptr; };
      // companyName Field Functions 
      bool hasCompanyName() const { return this->companyName_ != nullptr;};
      void deleteCompanyName() { this->companyName_ = nullptr;};
      inline string getCompanyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
      inline Data& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


      // extFields Field Functions 
      bool hasExtFields() const { return this->extFields_ != nullptr;};
      void deleteExtFields() { this->extFields_ = nullptr;};
      inline string getExtFields() const { DARABONBA_PTR_GET_DEFAULT(extFields_, "") };
      inline Data& setExtFields(string extFields) { DARABONBA_PTR_SET_VALUE(extFields_, extFields) };


      // firstName Field Functions 
      bool hasFirstName() const { return this->firstName_ != nullptr;};
      void deleteFirstName() { this->firstName_ = nullptr;};
      inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
      inline Data& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


      // lastName Field Functions 
      bool hasLastName() const { return this->lastName_ != nullptr;};
      void deleteLastName() { this->lastName_ = nullptr;};
      inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
      inline Data& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


      // submitId Field Functions 
      bool hasSubmitId() const { return this->submitId_ != nullptr;};
      void deleteSubmitId() { this->submitId_ = nullptr;};
      inline int64_t getSubmitId() const { DARABONBA_PTR_GET_DEFAULT(submitId_, 0L) };
      inline Data& setSubmitId(int64_t submitId) { DARABONBA_PTR_SET_VALUE(submitId_, submitId) };


      // ticketToken Field Functions 
      bool hasTicketToken() const { return this->ticketToken_ != nullptr;};
      void deleteTicketToken() { this->ticketToken_ = nullptr;};
      inline string getTicketToken() const { DARABONBA_PTR_GET_DEFAULT(ticketToken_, "") };
      inline Data& setTicketToken(string ticketToken) { DARABONBA_PTR_SET_VALUE(ticketToken_, ticketToken) };


    protected:
      shared_ptr<string> companyName_ {};
      shared_ptr<string> extFields_ {};
      shared_ptr<string> firstName_ {};
      shared_ptr<string> lastName_ {};
      shared_ptr<int64_t> submitId_ {};
      shared_ptr<string> ticketToken_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryQwenConferenceSgTicketPopResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryQwenConferenceSgTicketPopResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryQwenConferenceSgTicketPopResponseBody::Data) };
    inline QueryQwenConferenceSgTicketPopResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryQwenConferenceSgTicketPopResponseBody::Data) };
    inline QueryQwenConferenceSgTicketPopResponseBody& setData(const QueryQwenConferenceSgTicketPopResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryQwenConferenceSgTicketPopResponseBody& setData(QueryQwenConferenceSgTicketPopResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryQwenConferenceSgTicketPopResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryQwenConferenceSgTicketPopResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryQwenConferenceSgTicketPopResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Id of the request
    shared_ptr<string> code_ {};
    shared_ptr<QueryQwenConferenceSgTicketPopResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif

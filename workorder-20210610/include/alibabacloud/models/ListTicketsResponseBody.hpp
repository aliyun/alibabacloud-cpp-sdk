// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETSRESPONSEBODY_HPP_
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
  class ListTicketsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTicketsResponseBody() = default ;
    ListTicketsResponseBody(const ListTicketsResponseBody &) = default ;
    ListTicketsResponseBody(ListTicketsResponseBody &&) = default ;
    ListTicketsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketsResponseBody() = default ;
    ListTicketsResponseBody& operator=(const ListTicketsResponseBody &) = default ;
    ListTicketsResponseBody& operator=(ListTicketsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
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
      class Status : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Status& obj) { 
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Status& obj) { 
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Status() = default ;
        Status(const Status &) = default ;
        Status(Status &&) = default ;
        Status(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Status() = default ;
        Status& operator=(const Status &) = default ;
        Status& operator=(Status &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->label_ == nullptr
        && this->value_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Status& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Status& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The description of the status. Example: Completed.
        shared_ptr<string> label_ {};
        // The value of the status. For example, a value of 6 indicates that the ticket is completed.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->status_ == nullptr
        && this->ticketId_ == nullptr && this->title_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline const Data::Status & getStatus() const { DARABONBA_PTR_GET_CONST(status_, Data::Status) };
      inline Data::Status getStatus() { DARABONBA_PTR_GET(status_, Data::Status) };
      inline Data& setStatus(const Data::Status & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
      inline Data& setStatus(Data::Status && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


      // ticketId Field Functions 
      bool hasTicketId() const { return this->ticketId_ != nullptr;};
      void deleteTicketId() { this->ticketId_ = nullptr;};
      inline string getTicketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
      inline Data& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The ticket status. Valid values: assigned (Pending response), dealing (In progress), wait_feedback (Waiting for feedback), feedback (Feedback received), wait_confirm (Pending confirmation), and confirmed (Completed).
      shared_ptr<Data::Status> status_ {};
      // The ticket ID.
      shared_ptr<string> ticketId_ {};
      // The ticket title.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListTicketsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListTicketsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListTicketsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListTicketsResponseBody::Data>) };
    inline vector<ListTicketsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListTicketsResponseBody::Data>) };
    inline ListTicketsResponseBody& setData(const vector<ListTicketsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTicketsResponseBody& setData(vector<ListTicketsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTicketsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTicketsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTicketsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTicketsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTicketsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTicketsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the permission error. If you have the required permissions, an empty string is returned.
    shared_ptr<string> accessDeniedDetail_ {};
    // The return code of the request.
    shared_ptr<int32_t> code_ {};
    // The list of your tickets.
    shared_ptr<vector<ListTicketsResponseBody::Data>> data_ {};
    // The error message. This parameter is returned only when the value of success is false.
    shared_ptr<string> message_ {};
    // The page number of the paged query.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The unique ID of the request. A unique ID is returned for each request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. A value of true indicates that the call was successful.
    shared_ptr<bool> success_ {};
    // The total number of query results, which is the total number of your tickets.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif

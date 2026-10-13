// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class GetTicketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTicketResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetTicketResponseBody& obj) { 
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
    GetTicketResponseBody() = default ;
    GetTicketResponseBody(const GetTicketResponseBody &) = default ;
    GetTicketResponseBody(GetTicketResponseBody &&) = default ;
    GetTicketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTicketResponseBody() = default ;
    GetTicketResponseBody& operator=(const GetTicketResponseBody &) = default ;
    GetTicketResponseBody& operator=(GetTicketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Severity, severity_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Severity, severity_);
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
        // The display text of the status.
        shared_ptr<string> label_ {};
        // The value of the status.
        shared_ptr<string> value_ {};
      };

      class Severity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Severity& obj) { 
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Severity& obj) { 
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Severity() = default ;
        Severity(const Severity &) = default ;
        Severity(Severity &&) = default ;
        Severity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Severity() = default ;
        Severity& operator=(const Severity &) = default ;
        Severity& operator=(Severity &&) = default ;
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
        inline Severity& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Severity& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The display text of the severity level.
        shared_ptr<string> label_ {};
        // The value of the severity level.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->creatorName_ == nullptr && this->description_ == nullptr && this->severity_ == nullptr
        && this->status_ == nullptr && this->ticketId_ == nullptr && this->title_ == nullptr; };
      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
      inline Data& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline Data& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline Data& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // severity Field Functions 
      bool hasSeverity() const { return this->severity_ != nullptr;};
      void deleteSeverity() { this->severity_ = nullptr;};
      inline const Data::Severity & getSeverity() const { DARABONBA_PTR_GET_CONST(severity_, Data::Severity) };
      inline Data::Severity getSeverity() { DARABONBA_PTR_GET(severity_, Data::Severity) };
      inline Data& setSeverity(const Data::Severity & severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };
      inline Data& setSeverity(Data::Severity && severity) { DARABONBA_PTR_SET_RVALUE(severity_, severity) };


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
      // The ID of the ticket category.
      shared_ptr<string> categoryId_ {};
      // The timestamp when the ticket was created.
      shared_ptr<int64_t> createTime_ {};
      // The user ID of the ticket creator.
      shared_ptr<string> creatorId_ {};
      // The name of the ticket creator.
      shared_ptr<string> creatorName_ {};
      // The description of the ticket issue. Only plain text format is supported.
      shared_ptr<string> description_ {};
      // The severity level of the ticket. Valid values:
      // - 1: Normal issue.
      // - 2: Urgent issue.
      shared_ptr<Data::Severity> severity_ {};
      // The status of the ticket. Valid values:
      // - 1: assigned (Pending response). 
      // - 2: dealing (Processing).
      // - 3: wait_feedback (Pending feedback).
      // - 4: feedback (Feedback provided).
      // - 5: wait_confirm (Pending confirmation).
      // - 6: confirmed (Completed).
      shared_ptr<Data::Status> status_ {};
      // The ticket ID.
      shared_ptr<string> ticketId_ {};
      // The title of the ticket.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetTicketResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetTicketResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTicketResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTicketResponseBody::Data) };
    inline GetTicketResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTicketResponseBody::Data) };
    inline GetTicketResponseBody& setData(const GetTicketResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTicketResponseBody& setData(GetTicketResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTicketResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetTicketResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetTicketResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTicketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTicketResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetTicketResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the access denied error. If the request is authorized, an empty string is returned.
    shared_ptr<string> accessDeniedDetail_ {};
    // The status code returned by the API request.
    shared_ptr<int32_t> code_ {};
    // The business data returned upon a successful API call.
    shared_ptr<GetTicketResponseBody::Data> data_ {};
    // The error message. This parameter is returned when Success is set to false.
    shared_ptr<string> message_ {};
    // The page number of the paging query parameter.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page for the paging query parameter.
    shared_ptr<int32_t> pageSize_ {};
    // The unique identifier generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call was successful. A value of true indicates that the call was successful.
    shared_ptr<bool> success_ {};
    // The total number of queried results, which is the total number of ticket records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif

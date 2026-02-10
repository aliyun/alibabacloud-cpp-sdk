// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEEVENTOPERATIONPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEEVENTOPERATIONPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageEventOperationPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageEventOperationPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageEventOperationPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeImageEventOperationPageResponseBody() = default ;
    DescribeImageEventOperationPageResponseBody(const DescribeImageEventOperationPageResponseBody &) = default ;
    DescribeImageEventOperationPageResponseBody(DescribeImageEventOperationPageResponseBody &&) = default ;
    DescribeImageEventOperationPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageEventOperationPageResponseBody() = default ;
    DescribeImageEventOperationPageResponseBody& operator=(const DescribeImageEventOperationPageResponseBody &) = default ;
    DescribeImageEventOperationPageResponseBody& operator=(DescribeImageEventOperationPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
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
      class PageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        PageInfo() = default ;
        PageInfo(const PageInfo &) = default ;
        PageInfo(PageInfo &&) = default ;
        PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageInfo() = default ;
        PageInfo& operator=(const PageInfo &) = default ;
        PageInfo& operator=(PageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
        // currentPage Field Functions 
        bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
        void deleteCurrentPage() { this->currentPage_ = nullptr;};
        inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
        inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The page number.
        shared_ptr<int32_t> currentPage_ {};
        // The number of entries per page.
        shared_ptr<int32_t> pageSize_ {};
        // The total number of entries returned.
        shared_ptr<int32_t> totalCount_ {};
      };

      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(Conditions, conditions_);
          DARABONBA_PTR_TO_JSON(EventKey, eventKey_);
          DARABONBA_PTR_TO_JSON(EventName, eventName_);
          DARABONBA_PTR_TO_JSON(EventType, eventType_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Note, note_);
          DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
          DARABONBA_PTR_TO_JSON(Scenarios, scenarios_);
          DARABONBA_PTR_TO_JSON(Source, source_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
          DARABONBA_PTR_FROM_JSON(EventKey, eventKey_);
          DARABONBA_PTR_FROM_JSON(EventName, eventName_);
          DARABONBA_PTR_FROM_JSON(EventType, eventType_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Note, note_);
          DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
          DARABONBA_PTR_FROM_JSON(Scenarios, scenarios_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->conditions_ == nullptr
        && this->eventKey_ == nullptr && this->eventName_ == nullptr && this->eventType_ == nullptr && this->id_ == nullptr && this->note_ == nullptr
        && this->operationCode_ == nullptr && this->scenarios_ == nullptr && this->source_ == nullptr; };
        // conditions Field Functions 
        bool hasConditions() const { return this->conditions_ != nullptr;};
        void deleteConditions() { this->conditions_ = nullptr;};
        inline string getConditions() const { DARABONBA_PTR_GET_DEFAULT(conditions_, "") };
        inline List& setConditions(string conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };


        // eventKey Field Functions 
        bool hasEventKey() const { return this->eventKey_ != nullptr;};
        void deleteEventKey() { this->eventKey_ = nullptr;};
        inline string getEventKey() const { DARABONBA_PTR_GET_DEFAULT(eventKey_, "") };
        inline List& setEventKey(string eventKey) { DARABONBA_PTR_SET_VALUE(eventKey_, eventKey) };


        // eventName Field Functions 
        bool hasEventName() const { return this->eventName_ != nullptr;};
        void deleteEventName() { this->eventName_ = nullptr;};
        inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
        inline List& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


        // eventType Field Functions 
        bool hasEventType() const { return this->eventType_ != nullptr;};
        void deleteEventType() { this->eventType_ = nullptr;};
        inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
        inline List& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline List& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // note Field Functions 
        bool hasNote() const { return this->note_ != nullptr;};
        void deleteNote() { this->note_ = nullptr;};
        inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
        inline List& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


        // operationCode Field Functions 
        bool hasOperationCode() const { return this->operationCode_ != nullptr;};
        void deleteOperationCode() { this->operationCode_ = nullptr;};
        inline string getOperationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
        inline List& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


        // scenarios Field Functions 
        bool hasScenarios() const { return this->scenarios_ != nullptr;};
        void deleteScenarios() { this->scenarios_ = nullptr;};
        inline string getScenarios() const { DARABONBA_PTR_GET_DEFAULT(scenarios_, "") };
        inline List& setScenarios(string scenarios) { DARABONBA_PTR_SET_VALUE(scenarios_, scenarios) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline List& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      protected:
        // The rule conditions. The value is in the JSON format. Valid values of keys:
        // 
        // *   **condition**: the matching condition.
        // *   **type**: the matching type.
        // *   **value**: the matching value.
        shared_ptr<string> conditions_ {};
        // The keyword of the alert item.
        shared_ptr<string> eventKey_ {};
        // The name of the alert item.
        shared_ptr<string> eventName_ {};
        // The alert type.
        // 
        // *   Only **sensitiveFile** may be returned.
        shared_ptr<string> eventType_ {};
        // The primary key of the alert handling rule.
        shared_ptr<int64_t> id_ {};
        // The remarks.
        shared_ptr<string> note_ {};
        // The operation code.
        // 
        // *   Only **whitelist** may be returned, which means that the alert item is added to the whitelist.
        shared_ptr<string> operationCode_ {};
        // The application scope of the rule. The value is in the JSON format. Valid values of keys:
        // 
        // *   **type**
        // *   **value**
        shared_ptr<string> scenarios_ {};
        // The source of the whitelist. Valid values:
        // 
        // *   **image**: image.
        // *   **agentless**: agentless detection.
        shared_ptr<string> source_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageInfo_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageInfo Field Functions 
      bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
      void deletePageInfo() { this->pageInfo_ = nullptr;};
      inline const Data::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Data::PageInfo) };
      inline Data::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, Data::PageInfo) };
      inline Data& setPageInfo(const Data::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
      inline Data& setPageInfo(Data::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    protected:
      // The alert handling rules.
      shared_ptr<vector<Data::List>> list_ {};
      // The pagination information.
      shared_ptr<Data::PageInfo> pageInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeImageEventOperationPageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeImageEventOperationPageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeImageEventOperationPageResponseBody::Data) };
    inline DescribeImageEventOperationPageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeImageEventOperationPageResponseBody::Data) };
    inline DescribeImageEventOperationPageResponseBody& setData(const DescribeImageEventOperationPageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeImageEventOperationPageResponseBody& setData(DescribeImageEventOperationPageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeImageEventOperationPageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageEventOperationPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeImageEventOperationPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<DescribeImageEventOperationPageResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGROUPEDSECURITYEVENTMARKMISSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYGROUPEDSECURITYEVENTMARKMISSLISTRESPONSEBODY_HPP_
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
  class QueryGroupedSecurityEventMarkMissListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGroupedSecurityEventMarkMissListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGroupedSecurityEventMarkMissListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryGroupedSecurityEventMarkMissListResponseBody() = default ;
    QueryGroupedSecurityEventMarkMissListResponseBody(const QueryGroupedSecurityEventMarkMissListResponseBody &) = default ;
    QueryGroupedSecurityEventMarkMissListResponseBody(QueryGroupedSecurityEventMarkMissListResponseBody &&) = default ;
    QueryGroupedSecurityEventMarkMissListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGroupedSecurityEventMarkMissListResponseBody() = default ;
    QueryGroupedSecurityEventMarkMissListResponseBody& operator=(const QueryGroupedSecurityEventMarkMissListResponseBody &) = default ;
    QueryGroupedSecurityEventMarkMissListResponseBody& operator=(QueryGroupedSecurityEventMarkMissListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
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
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


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
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page. Default value: **20**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(DisposalWay, disposalWay_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(EventNameOriginal, eventNameOriginal_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(EventTypeOriginal, eventTypeOriginal_);
        DARABONBA_PTR_TO_JSON(Field, field_);
        DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
        DARABONBA_PTR_TO_JSON(FiledAliasName, filedAliasName_);
        DARABONBA_PTR_TO_JSON(Operate, operate_);
        DARABONBA_PTR_TO_JSON(Uuids, uuids_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(DisposalWay, disposalWay_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(EventNameOriginal, eventNameOriginal_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(EventTypeOriginal, eventTypeOriginal_);
        DARABONBA_PTR_FROM_JSON(Field, field_);
        DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
        DARABONBA_PTR_FROM_JSON(FiledAliasName, filedAliasName_);
        DARABONBA_PTR_FROM_JSON(Operate, operate_);
        DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
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
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->disposalWay_ == nullptr && this->eventName_ == nullptr && this->eventNameOriginal_ == nullptr && this->eventType_ == nullptr && this->eventTypeOriginal_ == nullptr
        && this->field_ == nullptr && this->fieldValue_ == nullptr && this->filedAliasName_ == nullptr && this->operate_ == nullptr && this->uuids_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline List& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // disposalWay Field Functions 
      bool hasDisposalWay() const { return this->disposalWay_ != nullptr;};
      void deleteDisposalWay() { this->disposalWay_ = nullptr;};
      inline string getDisposalWay() const { DARABONBA_PTR_GET_DEFAULT(disposalWay_, "") };
      inline List& setDisposalWay(string disposalWay) { DARABONBA_PTR_SET_VALUE(disposalWay_, disposalWay) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline List& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // eventNameOriginal Field Functions 
      bool hasEventNameOriginal() const { return this->eventNameOriginal_ != nullptr;};
      void deleteEventNameOriginal() { this->eventNameOriginal_ = nullptr;};
      inline string getEventNameOriginal() const { DARABONBA_PTR_GET_DEFAULT(eventNameOriginal_, "") };
      inline List& setEventNameOriginal(string eventNameOriginal) { DARABONBA_PTR_SET_VALUE(eventNameOriginal_, eventNameOriginal) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline List& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // eventTypeOriginal Field Functions 
      bool hasEventTypeOriginal() const { return this->eventTypeOriginal_ != nullptr;};
      void deleteEventTypeOriginal() { this->eventTypeOriginal_ = nullptr;};
      inline string getEventTypeOriginal() const { DARABONBA_PTR_GET_DEFAULT(eventTypeOriginal_, "") };
      inline List& setEventTypeOriginal(string eventTypeOriginal) { DARABONBA_PTR_SET_VALUE(eventTypeOriginal_, eventTypeOriginal) };


      // field Field Functions 
      bool hasField() const { return this->field_ != nullptr;};
      void deleteField() { this->field_ = nullptr;};
      inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
      inline List& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


      // fieldValue Field Functions 
      bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
      void deleteFieldValue() { this->fieldValue_ = nullptr;};
      inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
      inline List& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


      // filedAliasName Field Functions 
      bool hasFiledAliasName() const { return this->filedAliasName_ != nullptr;};
      void deleteFiledAliasName() { this->filedAliasName_ = nullptr;};
      inline string getFiledAliasName() const { DARABONBA_PTR_GET_DEFAULT(filedAliasName_, "") };
      inline List& setFiledAliasName(string filedAliasName) { DARABONBA_PTR_SET_VALUE(filedAliasName_, filedAliasName) };


      // operate Field Functions 
      bool hasOperate() const { return this->operate_ != nullptr;};
      void deleteOperate() { this->operate_ = nullptr;};
      inline string getOperate() const { DARABONBA_PTR_GET_DEFAULT(operate_, "") };
      inline List& setOperate(string operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


      // uuids Field Functions 
      bool hasUuids() const { return this->uuids_ != nullptr;};
      void deleteUuids() { this->uuids_ = nullptr;};
      inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
      inline List& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


    protected:
      // The ID of the user.
      shared_ptr<int64_t> aliUid_ {};
      // The handling method. Valid values:
      // 
      // *   **auto_add_white**: Automatically Added to Whitelist
      // *   **defense_not_notification**: Defense Without Notification
      shared_ptr<string> disposalWay_ {};
      // The name of the alert event. The value indicates a subtype.
      shared_ptr<string> eventName_ {};
      // The name of the alert event. The value indicates a type.
      shared_ptr<string> eventNameOriginal_ {};
      // The subtype of the alert event.
      shared_ptr<string> eventType_ {};
      // The type of the alert event.
      shared_ptr<string> eventTypeOriginal_ {};
      // The field that is used in the whitelist rule.
      shared_ptr<string> field_ {};
      // The value of the field.
      shared_ptr<string> fieldValue_ {};
      // The alias of the field.
      shared_ptr<string> filedAliasName_ {};
      // The operator. Valid values:
      // 
      // *   **contains**: contains
      // *   **notContains**: does not contain
      // *   **strEqual**: equals
      // *   **strNotEqual**: does not equal
      // *   **regex**: regular expression
      shared_ptr<string> operate_ {};
      // The UUIDs of assets. Multiple UUIDs are separated by commas (,).
      shared_ptr<string> uuids_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->list_ == nullptr && this->message_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryGroupedSecurityEventMarkMissListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<QueryGroupedSecurityEventMarkMissListResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<QueryGroupedSecurityEventMarkMissListResponseBody::List>) };
    inline vector<QueryGroupedSecurityEventMarkMissListResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<QueryGroupedSecurityEventMarkMissListResponseBody::List>) };
    inline QueryGroupedSecurityEventMarkMissListResponseBody& setList(const vector<QueryGroupedSecurityEventMarkMissListResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline QueryGroupedSecurityEventMarkMissListResponseBody& setList(vector<QueryGroupedSecurityEventMarkMissListResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryGroupedSecurityEventMarkMissListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const QueryGroupedSecurityEventMarkMissListResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, QueryGroupedSecurityEventMarkMissListResponseBody::PageInfo) };
    inline QueryGroupedSecurityEventMarkMissListResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, QueryGroupedSecurityEventMarkMissListResponseBody::PageInfo) };
    inline QueryGroupedSecurityEventMarkMissListResponseBody& setPageInfo(const QueryGroupedSecurityEventMarkMissListResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline QueryGroupedSecurityEventMarkMissListResponseBody& setPageInfo(QueryGroupedSecurityEventMarkMissListResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryGroupedSecurityEventMarkMissListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryGroupedSecurityEventMarkMissListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. The status code **200** indicates that the request is successful. Other status codes indicate that the request fails. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // An array that consists of the whitelist rules.
    shared_ptr<vector<QueryGroupedSecurityEventMarkMissListResponseBody::List>> list_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The pagination information.
    shared_ptr<QueryGroupedSecurityEventMarkMissListResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRESULTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRESULTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventResultListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventResultListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventResultListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    DescribeEventResultListResponseBody() = default ;
    DescribeEventResultListResponseBody(const DescribeEventResultListResponseBody &) = default ;
    DescribeEventResultListResponseBody(DescribeEventResultListResponseBody &&) = default ;
    DescribeEventResultListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventResultListResponseBody() = default ;
    DescribeEventResultListResponseBody& operator=(const DescribeEventResultListResponseBody &) = default ;
    DescribeEventResultListResponseBody& operator=(DescribeEventResultListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(eventName, eventName_);
        DARABONBA_PTR_TO_JSON(passNum, passNum_);
        DARABONBA_PTR_TO_JSON(pendingNum, pendingNum_);
        DARABONBA_PTR_TO_JSON(rejectNum, rejectNum_);
        DARABONBA_PTR_TO_JSON(totalNum, totalNum_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(eventName, eventName_);
        DARABONBA_PTR_FROM_JSON(passNum, passNum_);
        DARABONBA_PTR_FROM_JSON(pendingNum, pendingNum_);
        DARABONBA_PTR_FROM_JSON(rejectNum, rejectNum_);
        DARABONBA_PTR_FROM_JSON(totalNum, totalNum_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eventCode_ == nullptr
        && this->eventName_ == nullptr && this->passNum_ == nullptr && this->pendingNum_ == nullptr && this->rejectNum_ == nullptr && this->totalNum_ == nullptr; };
      // eventCode Field Functions 
      bool hasEventCode() const { return this->eventCode_ != nullptr;};
      void deleteEventCode() { this->eventCode_ = nullptr;};
      inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
      inline ResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline ResultObject& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // passNum Field Functions 
      bool hasPassNum() const { return this->passNum_ != nullptr;};
      void deletePassNum() { this->passNum_ = nullptr;};
      inline int64_t getPassNum() const { DARABONBA_PTR_GET_DEFAULT(passNum_, 0L) };
      inline ResultObject& setPassNum(int64_t passNum) { DARABONBA_PTR_SET_VALUE(passNum_, passNum) };


      // pendingNum Field Functions 
      bool hasPendingNum() const { return this->pendingNum_ != nullptr;};
      void deletePendingNum() { this->pendingNum_ = nullptr;};
      inline int64_t getPendingNum() const { DARABONBA_PTR_GET_DEFAULT(pendingNum_, 0L) };
      inline ResultObject& setPendingNum(int64_t pendingNum) { DARABONBA_PTR_SET_VALUE(pendingNum_, pendingNum) };


      // rejectNum Field Functions 
      bool hasRejectNum() const { return this->rejectNum_ != nullptr;};
      void deleteRejectNum() { this->rejectNum_ = nullptr;};
      inline int64_t getRejectNum() const { DARABONBA_PTR_GET_DEFAULT(rejectNum_, 0L) };
      inline ResultObject& setRejectNum(int64_t rejectNum) { DARABONBA_PTR_SET_VALUE(rejectNum_, rejectNum) };


      // totalNum Field Functions 
      bool hasTotalNum() const { return this->totalNum_ != nullptr;};
      void deleteTotalNum() { this->totalNum_ = nullptr;};
      inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
      inline ResultObject& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    protected:
      // Event code
      shared_ptr<string> eventCode_ {};
      // Event name.
      shared_ptr<string> eventName_ {};
      // Number of passed checks.
      shared_ptr<int64_t> passNum_ {};
      // Number of pending items.
      shared_ptr<int64_t> pendingNum_ {};
      // Number of rejected approvals.
      shared_ptr<int64_t> rejectNum_ {};
      // Total number of items.
      shared_ptr<int64_t> totalNum_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->currentPage_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->resultObject_ == nullptr && this->success_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeEventResultListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline DescribeEventResultListResponseBody& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline DescribeEventResultListResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEventResultListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeEventResultListResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventResultListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeEventResultListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeEventResultListResponseBody::ResultObject>) };
    inline vector<DescribeEventResultListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeEventResultListResponseBody::ResultObject>) };
    inline DescribeEventResultListResponseBody& setResultObject(const vector<DescribeEventResultListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeEventResultListResponseBody& setResultObject(vector<DescribeEventResultListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeEventResultListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int64_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0L) };
    inline DescribeEventResultListResponseBody& setTotalItem(int64_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline DescribeEventResultListResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Status code.
    shared_ptr<string> code_ {};
    // Current page number.
    shared_ptr<int64_t> currentPage_ {};
    // HTTP status code
    shared_ptr<string> httpStatusCode_ {};
    // Error details
    shared_ptr<string> message_ {};
    // Page size, default value is 10
    shared_ptr<int64_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<vector<DescribeEventResultListResponseBody::ResultObject>> resultObject_ {};
    // Whether the query was successful.
    shared_ptr<bool> success_ {};
    // Total number of items.
    shared_ptr<int64_t> totalItem_ {};
    // Total number of pages
    shared_ptr<int64_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif

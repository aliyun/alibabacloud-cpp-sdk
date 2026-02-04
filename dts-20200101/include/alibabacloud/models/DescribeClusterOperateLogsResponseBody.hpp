// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTEROPERATELOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTEROPERATELOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeClusterOperateLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterOperateLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DataPoints, dataPoints_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterOperateLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DataPoints, dataPoints_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeClusterOperateLogsResponseBody() = default ;
    DescribeClusterOperateLogsResponseBody(const DescribeClusterOperateLogsResponseBody &) = default ;
    DescribeClusterOperateLogsResponseBody(DescribeClusterOperateLogsResponseBody &&) = default ;
    DescribeClusterOperateLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterOperateLogsResponseBody() = default ;
    DescribeClusterOperateLogsResponseBody& operator=(const DescribeClusterOperateLogsResponseBody &) = default ;
    DescribeClusterOperateLogsResponseBody& operator=(DescribeClusterOperateLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataPoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataPoints& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LogDatetime, logDatetime_);
        DARABONBA_PTR_TO_JSON(NewValue, newValue_);
        DARABONBA_PTR_TO_JSON(OldValue, oldValue_);
        DARABONBA_PTR_TO_JSON(OperationName, operationName_);
        DARABONBA_PTR_TO_JSON(OperationUser, operationUser_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, DataPoints& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LogDatetime, logDatetime_);
        DARABONBA_PTR_FROM_JSON(NewValue, newValue_);
        DARABONBA_PTR_FROM_JSON(OldValue, oldValue_);
        DARABONBA_PTR_FROM_JSON(OperationName, operationName_);
        DARABONBA_PTR_FROM_JSON(OperationUser, operationUser_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      DataPoints() = default ;
      DataPoints(const DataPoints &) = default ;
      DataPoints(DataPoints &&) = default ;
      DataPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataPoints() = default ;
      DataPoints& operator=(const DataPoints &) = default ;
      DataPoints& operator=(DataPoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->id_ == nullptr && this->logDatetime_ == nullptr && this->newValue_ == nullptr && this->oldValue_ == nullptr && this->operationName_ == nullptr
        && this->operationUser_ == nullptr && this->success_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline DataPoints& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DataPoints& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // logDatetime Field Functions 
      bool hasLogDatetime() const { return this->logDatetime_ != nullptr;};
      void deleteLogDatetime() { this->logDatetime_ = nullptr;};
      inline int64_t getLogDatetime() const { DARABONBA_PTR_GET_DEFAULT(logDatetime_, 0L) };
      inline DataPoints& setLogDatetime(int64_t logDatetime) { DARABONBA_PTR_SET_VALUE(logDatetime_, logDatetime) };


      // newValue Field Functions 
      bool hasNewValue() const { return this->newValue_ != nullptr;};
      void deleteNewValue() { this->newValue_ = nullptr;};
      inline string getNewValue() const { DARABONBA_PTR_GET_DEFAULT(newValue_, "") };
      inline DataPoints& setNewValue(string newValue) { DARABONBA_PTR_SET_VALUE(newValue_, newValue) };


      // oldValue Field Functions 
      bool hasOldValue() const { return this->oldValue_ != nullptr;};
      void deleteOldValue() { this->oldValue_ = nullptr;};
      inline string getOldValue() const { DARABONBA_PTR_GET_DEFAULT(oldValue_, "") };
      inline DataPoints& setOldValue(string oldValue) { DARABONBA_PTR_SET_VALUE(oldValue_, oldValue) };


      // operationName Field Functions 
      bool hasOperationName() const { return this->operationName_ != nullptr;};
      void deleteOperationName() { this->operationName_ = nullptr;};
      inline string getOperationName() const { DARABONBA_PTR_GET_DEFAULT(operationName_, "") };
      inline DataPoints& setOperationName(string operationName) { DARABONBA_PTR_SET_VALUE(operationName_, operationName) };


      // operationUser Field Functions 
      bool hasOperationUser() const { return this->operationUser_ != nullptr;};
      void deleteOperationUser() { this->operationUser_ = nullptr;};
      inline string getOperationUser() const { DARABONBA_PTR_GET_DEFAULT(operationUser_, "") };
      inline DataPoints& setOperationUser(string operationUser) { DARABONBA_PTR_SET_VALUE(operationUser_, operationUser) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline int32_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0) };
      inline DataPoints& setSuccess(int32_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // Other description of the operation.
      shared_ptr<string> content_ {};
      // The primary key of the log table.
      shared_ptr<string> id_ {};
      // The time when the operation is recorded. The value is in the UNIX timestamp format. Unit: milliseconds.
      shared_ptr<int64_t> logDatetime_ {};
      // The value of the parameter after the operation if the operation is an UPDATE operation.
      shared_ptr<string> newValue_ {};
      // The value of the parameter before the operation if the operation is an UPDATE operation.
      shared_ptr<string> oldValue_ {};
      // The type of the operation.
      shared_ptr<string> operationName_ {};
      // The user who performed the operation.
      shared_ptr<string> operationUser_ {};
      // Indicates whether the request was successful. A value of **1** indicates that the request was successful.
      shared_ptr<int32_t> success_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->dataPoints_ == nullptr && this->dynamicMessage_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalRecordCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeClusterOperateLogsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dataPoints Field Functions 
    bool hasDataPoints() const { return this->dataPoints_ != nullptr;};
    void deleteDataPoints() { this->dataPoints_ = nullptr;};
    inline const vector<DescribeClusterOperateLogsResponseBody::DataPoints> & getDataPoints() const { DARABONBA_PTR_GET_CONST(dataPoints_, vector<DescribeClusterOperateLogsResponseBody::DataPoints>) };
    inline vector<DescribeClusterOperateLogsResponseBody::DataPoints> getDataPoints() { DARABONBA_PTR_GET(dataPoints_, vector<DescribeClusterOperateLogsResponseBody::DataPoints>) };
    inline DescribeClusterOperateLogsResponseBody& setDataPoints(const vector<DescribeClusterOperateLogsResponseBody::DataPoints> & dataPoints) { DARABONBA_PTR_SET_VALUE(dataPoints_, dataPoints) };
    inline DescribeClusterOperateLogsResponseBody& setDataPoints(vector<DescribeClusterOperateLogsResponseBody::DataPoints> && dataPoints) { DARABONBA_PTR_SET_RVALUE(dataPoints_, dataPoints) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeClusterOperateLogsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeClusterOperateLogsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeClusterOperateLogsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeClusterOperateLogsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeClusterOperateLogsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeClusterOperateLogsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterOperateLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeClusterOperateLogsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline DescribeClusterOperateLogsResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The error code returned by the backend service. The number is incremented.
    shared_ptr<string> code_ {};
    // The information about the operation logs.
    shared_ptr<vector<DescribeClusterOperateLogsResponseBody::DataPoints>> dataPoints_ {};
    // The dynamic part in the error message. This parameter is used to replace %s in the ErrMessage parameter.
    shared_ptr<string> dynamicMessage_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errCode_ {};
    // The error message returned.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code returned for an exception.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The total number of records.
    shared_ptr<int64_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASEERRORLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASEERRORLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeDatabaseErrorLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabaseErrorLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorLogs, errorLogs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabaseErrorLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorLogs, errorLogs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDatabaseErrorLogsResponseBody() = default ;
    DescribeDatabaseErrorLogsResponseBody(const DescribeDatabaseErrorLogsResponseBody &) = default ;
    DescribeDatabaseErrorLogsResponseBody(DescribeDatabaseErrorLogsResponseBody &&) = default ;
    DescribeDatabaseErrorLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabaseErrorLogsResponseBody() = default ;
    DescribeDatabaseErrorLogsResponseBody& operator=(const DescribeDatabaseErrorLogsResponseBody &) = default ;
    DescribeDatabaseErrorLogsResponseBody& operator=(DescribeDatabaseErrorLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ErrorLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ErrorLogs& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ErrorLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
      };
      ErrorLogs() = default ;
      ErrorLogs(const ErrorLogs &) = default ;
      ErrorLogs(ErrorLogs &&) = default ;
      ErrorLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ErrorLogs() = default ;
      ErrorLogs& operator=(const ErrorLogs &) = default ;
      ErrorLogs& operator=(ErrorLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->errorInfo_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ErrorLogs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // errorInfo Field Functions 
      bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
      void deleteErrorInfo() { this->errorInfo_ = nullptr;};
      inline string getErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
      inline ErrorLogs& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


    protected:
      // The time when the error log was generated. The time is in UTC and formatted as `yyyy-MM-ddTHH:mm:ssZ` according to the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard.
      // 
      // > The time displayed in the console is 8 hours ahead of the specified UTC time.
      shared_ptr<string> createTime_ {};
      // The error information.
      shared_ptr<string> errorInfo_ {};
    };

    virtual bool empty() const override { return this->errorLogs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // errorLogs Field Functions 
    bool hasErrorLogs() const { return this->errorLogs_ != nullptr;};
    void deleteErrorLogs() { this->errorLogs_ = nullptr;};
    inline const vector<DescribeDatabaseErrorLogsResponseBody::ErrorLogs> & getErrorLogs() const { DARABONBA_PTR_GET_CONST(errorLogs_, vector<DescribeDatabaseErrorLogsResponseBody::ErrorLogs>) };
    inline vector<DescribeDatabaseErrorLogsResponseBody::ErrorLogs> getErrorLogs() { DARABONBA_PTR_GET(errorLogs_, vector<DescribeDatabaseErrorLogsResponseBody::ErrorLogs>) };
    inline DescribeDatabaseErrorLogsResponseBody& setErrorLogs(const vector<DescribeDatabaseErrorLogsResponseBody::ErrorLogs> & errorLogs) { DARABONBA_PTR_SET_VALUE(errorLogs_, errorLogs) };
    inline DescribeDatabaseErrorLogsResponseBody& setErrorLogs(vector<DescribeDatabaseErrorLogsResponseBody::ErrorLogs> && errorLogs) { DARABONBA_PTR_SET_RVALUE(errorLogs_, errorLogs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDatabaseErrorLogsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDatabaseErrorLogsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDatabaseErrorLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDatabaseErrorLogsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array of error logs.
    shared_ptr<vector<DescribeDatabaseErrorLogsResponseBody::ErrorLogs>> errorLogs_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of matching error logs.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDownloadRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDownloadRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDownloadRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDownloadRecordsResponseBody() = default ;
    DescribeDownloadRecordsResponseBody(const DescribeDownloadRecordsResponseBody &) = default ;
    DescribeDownloadRecordsResponseBody(DescribeDownloadRecordsResponseBody &&) = default ;
    DescribeDownloadRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDownloadRecordsResponseBody() = default ;
    DescribeDownloadRecordsResponseBody& operator=(const DescribeDownloadRecordsResponseBody &) = default ;
    DescribeDownloadRecordsResponseBody& operator=(DescribeDownloadRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(DownloadId, downloadId_);
        DARABONBA_PTR_TO_JSON(ExceptionMsg, exceptionMsg_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(DownloadId, downloadId_);
        DARABONBA_PTR_FROM_JSON(ExceptionMsg, exceptionMsg_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->downloadId_ == nullptr
        && this->exceptionMsg_ == nullptr && this->fileName_ == nullptr && this->status_ == nullptr && this->url_ == nullptr; };
      // downloadId Field Functions 
      bool hasDownloadId() const { return this->downloadId_ != nullptr;};
      void deleteDownloadId() { this->downloadId_ = nullptr;};
      inline int64_t getDownloadId() const { DARABONBA_PTR_GET_DEFAULT(downloadId_, 0L) };
      inline Records& setDownloadId(int64_t downloadId) { DARABONBA_PTR_SET_VALUE(downloadId_, downloadId) };


      // exceptionMsg Field Functions 
      bool hasExceptionMsg() const { return this->exceptionMsg_ != nullptr;};
      void deleteExceptionMsg() { this->exceptionMsg_ = nullptr;};
      inline string getExceptionMsg() const { DARABONBA_PTR_GET_DEFAULT(exceptionMsg_, "") };
      inline Records& setExceptionMsg(string exceptionMsg) { DARABONBA_PTR_SET_VALUE(exceptionMsg_, exceptionMsg) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Records& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Records& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Records& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The download job ID.
      shared_ptr<int64_t> downloadId_ {};
      // The error message returned if the download job failed.
      shared_ptr<string> exceptionMsg_ {};
      // The name of the downloaded file.
      shared_ptr<string> fileName_ {};
      // The status of the download job. Valid values:
      // 
      // *   **running**
      // *   **finished**
      // *   **failed**
      shared_ptr<string> status_ {};
      // The download URL of the file.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->records_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeDownloadRecordsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<DescribeDownloadRecordsResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<DescribeDownloadRecordsResponseBody::Records>) };
    inline vector<DescribeDownloadRecordsResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<DescribeDownloadRecordsResponseBody::Records>) };
    inline DescribeDownloadRecordsResponseBody& setRecords(const vector<DescribeDownloadRecordsResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline DescribeDownloadRecordsResponseBody& setRecords(vector<DescribeDownloadRecordsResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDownloadRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    // The queried download tasks.
    shared_ptr<vector<DescribeDownloadRecordsResponseBody::Records>> records_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif

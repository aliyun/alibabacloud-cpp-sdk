// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADSQLLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADSQLLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDownloadSQLLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDownloadSQLLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDownloadSQLLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDownloadSQLLogsResponseBody() = default ;
    DescribeDownloadSQLLogsResponseBody(const DescribeDownloadSQLLogsResponseBody &) = default ;
    DescribeDownloadSQLLogsResponseBody(DescribeDownloadSQLLogsResponseBody &&) = default ;
    DescribeDownloadSQLLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDownloadSQLLogsResponseBody() = default ;
    DescribeDownloadSQLLogsResponseBody& operator=(const DescribeDownloadSQLLogsResponseBody &) = default ;
    DescribeDownloadSQLLogsResponseBody& operator=(DescribeDownloadSQLLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(DownloadId, downloadId_);
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(ExceptionMsg, exceptionMsg_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(DownloadId, downloadId_);
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(ExceptionMsg, exceptionMsg_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
        && this->downloadUrl_ == nullptr && this->exceptionMsg_ == nullptr && this->fileName_ == nullptr && this->status_ == nullptr; };
      // downloadId Field Functions 
      bool hasDownloadId() const { return this->downloadId_ != nullptr;};
      void deleteDownloadId() { this->downloadId_ = nullptr;};
      inline int64_t getDownloadId() const { DARABONBA_PTR_GET_DEFAULT(downloadId_, 0L) };
      inline Records& setDownloadId(int64_t downloadId) { DARABONBA_PTR_SET_VALUE(downloadId_, downloadId) };


      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline Records& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


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


    protected:
      // Download record ID.
      shared_ptr<int64_t> downloadId_ {};
      // Download link.
      shared_ptr<string> downloadUrl_ {};
      // Error message.
      shared_ptr<string> exceptionMsg_ {};
      // File name.
      shared_ptr<string> fileName_ {};
      // Task status, with possible values being:
      // - **running**: Downloading.
      // - **finished**: Completed.
      // - **failed**: Download failed.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->records_ == nullptr
        && this->requestId_ == nullptr; };
    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<DescribeDownloadSQLLogsResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<DescribeDownloadSQLLogsResponseBody::Records>) };
    inline vector<DescribeDownloadSQLLogsResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<DescribeDownloadSQLLogsResponseBody::Records>) };
    inline DescribeDownloadSQLLogsResponseBody& setRecords(const vector<DescribeDownloadSQLLogsResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline DescribeDownloadSQLLogsResponseBody& setRecords(vector<DescribeDownloadSQLLogsResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDownloadSQLLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of download records.
    shared_ptr<vector<DescribeDownloadSQLLogsResponseBody::Records>> records_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

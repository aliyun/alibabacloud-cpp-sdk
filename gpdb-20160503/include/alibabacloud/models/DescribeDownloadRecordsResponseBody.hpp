// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADRECORDSRESPONSEBODY_HPP_
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
  class DescribeDownloadRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDownloadRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDownloadRecordsResponseBody& obj) { 
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
      // The ID of the download record.
      shared_ptr<int64_t> downloadId_ {};
      // The URL that can be used to download the file.
      shared_ptr<string> downloadUrl_ {};
      // The error message returned.
      shared_ptr<string> exceptionMsg_ {};
      // The name of the file.
      shared_ptr<string> fileName_ {};
      // The state of the upload task. After you call the DownloadDiagnosisRecords operation, query diagnostic information is first uploaded to Object Storage Service (OSS). After the upload task is complete, the query diagnostic information can be downloaded. Valid values:
      // 
      // *   **running**: uploading
      // *   **finished**: uploaded
      // *   **failed**: failed
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->records_ == nullptr
        && this->requestId_ == nullptr; };
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
    // The URL that is used to download the file.
    shared_ptr<vector<DescribeDownloadRecordsResponseBody::Records>> records_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADRECORDSRESPONSEBODYRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADRECORDSRESPONSEBODYRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDownloadRecordsResponseBodyRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDownloadRecordsResponseBodyRecords& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadId, downloadId_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(ExceptionMsg, exceptionMsg_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDownloadRecordsResponseBodyRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadId, downloadId_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(ExceptionMsg, exceptionMsg_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDownloadRecordsResponseBodyRecords() = default ;
    DescribeDownloadRecordsResponseBodyRecords(const DescribeDownloadRecordsResponseBodyRecords &) = default ;
    DescribeDownloadRecordsResponseBodyRecords(DescribeDownloadRecordsResponseBodyRecords &&) = default ;
    DescribeDownloadRecordsResponseBodyRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDownloadRecordsResponseBodyRecords() = default ;
    DescribeDownloadRecordsResponseBodyRecords& operator=(const DescribeDownloadRecordsResponseBodyRecords &) = default ;
    DescribeDownloadRecordsResponseBodyRecords& operator=(DescribeDownloadRecordsResponseBodyRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadId_ == nullptr
        && return this->downloadUrl_ == nullptr && return this->exceptionMsg_ == nullptr && return this->fileName_ == nullptr && return this->status_ == nullptr; };
    // downloadId Field Functions 
    bool hasDownloadId() const { return this->downloadId_ != nullptr;};
    void deleteDownloadId() { this->downloadId_ = nullptr;};
    inline int64_t downloadId() const { DARABONBA_PTR_GET_DEFAULT(downloadId_, 0L) };
    inline DescribeDownloadRecordsResponseBodyRecords& setDownloadId(int64_t downloadId) { DARABONBA_PTR_SET_VALUE(downloadId_, downloadId) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline DescribeDownloadRecordsResponseBodyRecords& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // exceptionMsg Field Functions 
    bool hasExceptionMsg() const { return this->exceptionMsg_ != nullptr;};
    void deleteExceptionMsg() { this->exceptionMsg_ = nullptr;};
    inline string exceptionMsg() const { DARABONBA_PTR_GET_DEFAULT(exceptionMsg_, "") };
    inline DescribeDownloadRecordsResponseBodyRecords& setExceptionMsg(string exceptionMsg) { DARABONBA_PTR_SET_VALUE(exceptionMsg_, exceptionMsg) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeDownloadRecordsResponseBodyRecords& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDownloadRecordsResponseBodyRecords& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the download record.
    std::shared_ptr<int64_t> downloadId_ = nullptr;
    // The URL that can be used to download the file.
    std::shared_ptr<string> downloadUrl_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> exceptionMsg_ = nullptr;
    // The name of the file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The state of the upload task. After you call the DownloadDiagnosisRecords operation, query diagnostic information is first uploaded to Object Storage Service (OSS). After the upload task is complete, the query diagnostic information can be downloaded. Valid values:
    // 
    // *   **running**: uploading
    // *   **finished**: uploaded
    // *   **failed**: failed
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

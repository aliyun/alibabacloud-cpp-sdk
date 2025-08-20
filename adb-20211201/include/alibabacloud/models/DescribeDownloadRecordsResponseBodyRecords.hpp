// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADRECORDSRESPONSEBODYRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADRECORDSRESPONSEBODYRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDownloadRecordsResponseBodyRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDownloadRecordsResponseBodyRecords& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadId, downloadId_);
      DARABONBA_PTR_TO_JSON(ExceptionMsg, exceptionMsg_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDownloadRecordsResponseBodyRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadId, downloadId_);
      DARABONBA_PTR_FROM_JSON(ExceptionMsg, exceptionMsg_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
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
    virtual bool empty() const override { this->downloadId_ != nullptr
        && this->exceptionMsg_ != nullptr && this->fileName_ != nullptr && this->status_ != nullptr && this->url_ != nullptr; };
    // downloadId Field Functions 
    bool hasDownloadId() const { return this->downloadId_ != nullptr;};
    void deleteDownloadId() { this->downloadId_ = nullptr;};
    inline int64_t downloadId() const { DARABONBA_PTR_GET_DEFAULT(downloadId_, 0L) };
    inline DescribeDownloadRecordsResponseBodyRecords& setDownloadId(int64_t downloadId) { DARABONBA_PTR_SET_VALUE(downloadId_, downloadId) };


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


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeDownloadRecordsResponseBodyRecords& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The download job ID.
    std::shared_ptr<int64_t> downloadId_ = nullptr;
    // The error message returned if the download job failed.
    std::shared_ptr<string> exceptionMsg_ = nullptr;
    // The name of the downloaded file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The status of the download job. Valid values:
    // 
    // *   **running**
    // *   **finished**
    // *   **failed**
    std::shared_ptr<string> status_ = nullptr;
    // The download URL of the file.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif

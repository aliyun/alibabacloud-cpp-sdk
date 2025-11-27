// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGBACKUPFILESRESPONSEBODYITEMSBINLOGFILE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGBACKUPFILESRESPONSEBODYITEMSBINLOGFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeLogBackupFilesResponseBodyItemsBinLogFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogBackupFilesResponseBodyItemsBinLogFile& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadLink, downloadLink_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(IntranetDownloadLink, intranetDownloadLink_);
      DARABONBA_PTR_TO_JSON(LinkExpiredTime, linkExpiredTime_);
      DARABONBA_PTR_TO_JSON(LogBeginTime, logBeginTime_);
      DARABONBA_PTR_TO_JSON(LogEndTime, logEndTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogBackupFilesResponseBodyItemsBinLogFile& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadLink, downloadLink_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(IntranetDownloadLink, intranetDownloadLink_);
      DARABONBA_PTR_FROM_JSON(LinkExpiredTime, linkExpiredTime_);
      DARABONBA_PTR_FROM_JSON(LogBeginTime, logBeginTime_);
      DARABONBA_PTR_FROM_JSON(LogEndTime, logEndTime_);
    };
    DescribeLogBackupFilesResponseBodyItemsBinLogFile() = default ;
    DescribeLogBackupFilesResponseBodyItemsBinLogFile(const DescribeLogBackupFilesResponseBodyItemsBinLogFile &) = default ;
    DescribeLogBackupFilesResponseBodyItemsBinLogFile(DescribeLogBackupFilesResponseBodyItemsBinLogFile &&) = default ;
    DescribeLogBackupFilesResponseBodyItemsBinLogFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogBackupFilesResponseBodyItemsBinLogFile() = default ;
    DescribeLogBackupFilesResponseBodyItemsBinLogFile& operator=(const DescribeLogBackupFilesResponseBodyItemsBinLogFile &) = default ;
    DescribeLogBackupFilesResponseBodyItemsBinLogFile& operator=(DescribeLogBackupFilesResponseBodyItemsBinLogFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadLink_ == nullptr
        && return this->fileSize_ == nullptr && return this->intranetDownloadLink_ == nullptr && return this->linkExpiredTime_ == nullptr && return this->logBeginTime_ == nullptr && return this->logEndTime_ == nullptr; };
    // downloadLink Field Functions 
    bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
    void deleteDownloadLink() { this->downloadLink_ = nullptr;};
    inline string downloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
    inline DescribeLogBackupFilesResponseBodyItemsBinLogFile& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline DescribeLogBackupFilesResponseBodyItemsBinLogFile& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // intranetDownloadLink Field Functions 
    bool hasIntranetDownloadLink() const { return this->intranetDownloadLink_ != nullptr;};
    void deleteIntranetDownloadLink() { this->intranetDownloadLink_ = nullptr;};
    inline string intranetDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(intranetDownloadLink_, "") };
    inline DescribeLogBackupFilesResponseBodyItemsBinLogFile& setIntranetDownloadLink(string intranetDownloadLink) { DARABONBA_PTR_SET_VALUE(intranetDownloadLink_, intranetDownloadLink) };


    // linkExpiredTime Field Functions 
    bool hasLinkExpiredTime() const { return this->linkExpiredTime_ != nullptr;};
    void deleteLinkExpiredTime() { this->linkExpiredTime_ = nullptr;};
    inline string linkExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(linkExpiredTime_, "") };
    inline DescribeLogBackupFilesResponseBodyItemsBinLogFile& setLinkExpiredTime(string linkExpiredTime) { DARABONBA_PTR_SET_VALUE(linkExpiredTime_, linkExpiredTime) };


    // logBeginTime Field Functions 
    bool hasLogBeginTime() const { return this->logBeginTime_ != nullptr;};
    void deleteLogBeginTime() { this->logBeginTime_ = nullptr;};
    inline string logBeginTime() const { DARABONBA_PTR_GET_DEFAULT(logBeginTime_, "") };
    inline DescribeLogBackupFilesResponseBodyItemsBinLogFile& setLogBeginTime(string logBeginTime) { DARABONBA_PTR_SET_VALUE(logBeginTime_, logBeginTime) };


    // logEndTime Field Functions 
    bool hasLogEndTime() const { return this->logEndTime_ != nullptr;};
    void deleteLogEndTime() { this->logEndTime_ = nullptr;};
    inline string logEndTime() const { DARABONBA_PTR_GET_DEFAULT(logEndTime_, "") };
    inline DescribeLogBackupFilesResponseBodyItemsBinLogFile& setLogEndTime(string logEndTime) { DARABONBA_PTR_SET_VALUE(logEndTime_, logEndTime) };


  protected:
    // The HTTP-based download URL of the log file. If the log file cannot be downloaded, an empty string is returned.
    std::shared_ptr<string> downloadLink_ = nullptr;
    // The size of the log file. Unit: bytes.
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    // The URL that is used to download the log file over an internal network. If the log file cannot be downloaded, an empty string is returned. This URL is valid for one hour.
    std::shared_ptr<string> intranetDownloadLink_ = nullptr;
    // The expiration time of the URL. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> linkExpiredTime_ = nullptr;
    // The start time of the log file. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
    std::shared_ptr<string> logBeginTime_ = nullptr;
    // The end time of the log file. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
    std::shared_ptr<string> logEndTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

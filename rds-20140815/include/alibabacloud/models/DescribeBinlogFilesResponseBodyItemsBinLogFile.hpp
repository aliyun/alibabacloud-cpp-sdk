// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBINLOGFILESRESPONSEBODYITEMSBINLOGFILE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBINLOGFILESRESPONSEBODYITEMSBINLOGFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeBinlogFilesResponseBodyItemsBinLogFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBinlogFilesResponseBodyItemsBinLogFile& obj) { 
      DARABONBA_PTR_TO_JSON(Checksum, checksum_);
      DARABONBA_PTR_TO_JSON(DownloadLink, downloadLink_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(HostInstanceID, hostInstanceID_);
      DARABONBA_PTR_TO_JSON(IntranetDownloadLink, intranetDownloadLink_);
      DARABONBA_PTR_TO_JSON(LinkExpiredTime, linkExpiredTime_);
      DARABONBA_PTR_TO_JSON(LogBeginTime, logBeginTime_);
      DARABONBA_PTR_TO_JSON(LogEndTime, logEndTime_);
      DARABONBA_PTR_TO_JSON(LogFileName, logFileName_);
      DARABONBA_PTR_TO_JSON(RemoteStatus, remoteStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBinlogFilesResponseBodyItemsBinLogFile& obj) { 
      DARABONBA_PTR_FROM_JSON(Checksum, checksum_);
      DARABONBA_PTR_FROM_JSON(DownloadLink, downloadLink_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(HostInstanceID, hostInstanceID_);
      DARABONBA_PTR_FROM_JSON(IntranetDownloadLink, intranetDownloadLink_);
      DARABONBA_PTR_FROM_JSON(LinkExpiredTime, linkExpiredTime_);
      DARABONBA_PTR_FROM_JSON(LogBeginTime, logBeginTime_);
      DARABONBA_PTR_FROM_JSON(LogEndTime, logEndTime_);
      DARABONBA_PTR_FROM_JSON(LogFileName, logFileName_);
      DARABONBA_PTR_FROM_JSON(RemoteStatus, remoteStatus_);
    };
    DescribeBinlogFilesResponseBodyItemsBinLogFile() = default ;
    DescribeBinlogFilesResponseBodyItemsBinLogFile(const DescribeBinlogFilesResponseBodyItemsBinLogFile &) = default ;
    DescribeBinlogFilesResponseBodyItemsBinLogFile(DescribeBinlogFilesResponseBodyItemsBinLogFile &&) = default ;
    DescribeBinlogFilesResponseBodyItemsBinLogFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBinlogFilesResponseBodyItemsBinLogFile() = default ;
    DescribeBinlogFilesResponseBodyItemsBinLogFile& operator=(const DescribeBinlogFilesResponseBodyItemsBinLogFile &) = default ;
    DescribeBinlogFilesResponseBodyItemsBinLogFile& operator=(DescribeBinlogFilesResponseBodyItemsBinLogFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checksum_ == nullptr
        && return this->downloadLink_ == nullptr && return this->fileSize_ == nullptr && return this->hostInstanceID_ == nullptr && return this->intranetDownloadLink_ == nullptr && return this->linkExpiredTime_ == nullptr
        && return this->logBeginTime_ == nullptr && return this->logEndTime_ == nullptr && return this->logFileName_ == nullptr && return this->remoteStatus_ == nullptr; };
    // checksum Field Functions 
    bool hasChecksum() const { return this->checksum_ != nullptr;};
    void deleteChecksum() { this->checksum_ = nullptr;};
    inline string checksum() const { DARABONBA_PTR_GET_DEFAULT(checksum_, "") };
    inline DescribeBinlogFilesResponseBodyItemsBinLogFile& setChecksum(string checksum) { DARABONBA_PTR_SET_VALUE(checksum_, checksum) };


    // downloadLink Field Functions 
    bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
    void deleteDownloadLink() { this->downloadLink_ = nullptr;};
    inline string downloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
    inline DescribeBinlogFilesResponseBodyItemsBinLogFile& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline DescribeBinlogFilesResponseBodyItemsBinLogFile& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // hostInstanceID Field Functions 
    bool hasHostInstanceID() const { return this->hostInstanceID_ != nullptr;};
    void deleteHostInstanceID() { this->hostInstanceID_ = nullptr;};
    inline string hostInstanceID() const { DARABONBA_PTR_GET_DEFAULT(hostInstanceID_, "") };
    inline DescribeBinlogFilesResponseBodyItemsBinLogFile& setHostInstanceID(string hostInstanceID) { DARABONBA_PTR_SET_VALUE(hostInstanceID_, hostInstanceID) };


    // intranetDownloadLink Field Functions 
    bool hasIntranetDownloadLink() const { return this->intranetDownloadLink_ != nullptr;};
    void deleteIntranetDownloadLink() { this->intranetDownloadLink_ = nullptr;};
    inline string intranetDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(intranetDownloadLink_, "") };
    inline DescribeBinlogFilesResponseBodyItemsBinLogFile& setIntranetDownloadLink(string intranetDownloadLink) { DARABONBA_PTR_SET_VALUE(intranetDownloadLink_, intranetDownloadLink) };


    // linkExpiredTime Field Functions 
    bool hasLinkExpiredTime() const { return this->linkExpiredTime_ != nullptr;};
    void deleteLinkExpiredTime() { this->linkExpiredTime_ = nullptr;};
    inline string linkExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(linkExpiredTime_, "") };
    inline DescribeBinlogFilesResponseBodyItemsBinLogFile& setLinkExpiredTime(string linkExpiredTime) { DARABONBA_PTR_SET_VALUE(linkExpiredTime_, linkExpiredTime) };


    // logBeginTime Field Functions 
    bool hasLogBeginTime() const { return this->logBeginTime_ != nullptr;};
    void deleteLogBeginTime() { this->logBeginTime_ = nullptr;};
    inline string logBeginTime() const { DARABONBA_PTR_GET_DEFAULT(logBeginTime_, "") };
    inline DescribeBinlogFilesResponseBodyItemsBinLogFile& setLogBeginTime(string logBeginTime) { DARABONBA_PTR_SET_VALUE(logBeginTime_, logBeginTime) };


    // logEndTime Field Functions 
    bool hasLogEndTime() const { return this->logEndTime_ != nullptr;};
    void deleteLogEndTime() { this->logEndTime_ = nullptr;};
    inline string logEndTime() const { DARABONBA_PTR_GET_DEFAULT(logEndTime_, "") };
    inline DescribeBinlogFilesResponseBodyItemsBinLogFile& setLogEndTime(string logEndTime) { DARABONBA_PTR_SET_VALUE(logEndTime_, logEndTime) };


    // logFileName Field Functions 
    bool hasLogFileName() const { return this->logFileName_ != nullptr;};
    void deleteLogFileName() { this->logFileName_ = nullptr;};
    inline string logFileName() const { DARABONBA_PTR_GET_DEFAULT(logFileName_, "") };
    inline DescribeBinlogFilesResponseBodyItemsBinLogFile& setLogFileName(string logFileName) { DARABONBA_PTR_SET_VALUE(logFileName_, logFileName) };


    // remoteStatus Field Functions 
    bool hasRemoteStatus() const { return this->remoteStatus_ != nullptr;};
    void deleteRemoteStatus() { this->remoteStatus_ = nullptr;};
    inline string remoteStatus() const { DARABONBA_PTR_GET_DEFAULT(remoteStatus_, "") };
    inline DescribeBinlogFilesResponseBodyItemsBinLogFile& setRemoteStatus(string remoteStatus) { DARABONBA_PTR_SET_VALUE(remoteStatus_, remoteStatus) };


  protected:
    // The checksum. The value of this parameter is calculated by using the CRC64 algorithm.
    std::shared_ptr<string> checksum_ = nullptr;
    // The HTTP-based download URL of the log file. If the return value of this parameter is NULL, ApsaraDB RDS does not provide a download URL for the log file.
    std::shared_ptr<string> downloadLink_ = nullptr;
    // The size of the log file.
    // 
    // Unit: bytes.
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    // The ID of the instance to which the log file belongs. This parameter helps determine whether the log file is generated on the primary instance or the secondary instance.
    // 
    // >  You can log on to the ApsaraDB RDS console and go to the instance details page. In the left-side navigation pane, click **Service Availability** to view the values of **Primary Instance No.** and **Secondary Instance No.**.
    std::shared_ptr<string> hostInstanceID_ = nullptr;
    // The URL that is used to download files over an internal network.
    std::shared_ptr<string> intranetDownloadLink_ = nullptr;
    // The expiration time of the URL.
    // 
    // The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> linkExpiredTime_ = nullptr;
    // The beginning of the time range to query.
    // 
    // The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> logBeginTime_ = nullptr;
    // The end of the time range to query.
    // 
    // The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> logEndTime_ = nullptr;
    // The log file name.
    std::shared_ptr<string> logFileName_ = nullptr;
    // The status of the log file that is stored in the Object Storage Service (OSS) bucket.
    // 
    // Valid values:
    // 
    // *   **Uploading**
    // *   **Completed**
    std::shared_ptr<string> remoteStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

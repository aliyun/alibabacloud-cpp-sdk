// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPLOGSRESPONSEBODYITEMSBACKUPLOG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPLOGSRESPONSEBODYITEMSBACKUPLOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBackupLogsResponseBodyItemsBackupLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupLogsResponseBodyItemsBackupLog& obj) { 
      DARABONBA_PTR_TO_JSON(BackupLogEndTime, backupLogEndTime_);
      DARABONBA_PTR_TO_JSON(BackupLogId, backupLogId_);
      DARABONBA_PTR_TO_JSON(BackupLogName, backupLogName_);
      DARABONBA_PTR_TO_JSON(BackupLogSize, backupLogSize_);
      DARABONBA_PTR_TO_JSON(BackupLogStartTime, backupLogStartTime_);
      DARABONBA_PTR_TO_JSON(DownloadLink, downloadLink_);
      DARABONBA_PTR_TO_JSON(IntranetDownloadLink, intranetDownloadLink_);
      DARABONBA_PTR_TO_JSON(LinkExpiredTime, linkExpiredTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupLogsResponseBodyItemsBackupLog& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupLogEndTime, backupLogEndTime_);
      DARABONBA_PTR_FROM_JSON(BackupLogId, backupLogId_);
      DARABONBA_PTR_FROM_JSON(BackupLogName, backupLogName_);
      DARABONBA_PTR_FROM_JSON(BackupLogSize, backupLogSize_);
      DARABONBA_PTR_FROM_JSON(BackupLogStartTime, backupLogStartTime_);
      DARABONBA_PTR_FROM_JSON(DownloadLink, downloadLink_);
      DARABONBA_PTR_FROM_JSON(IntranetDownloadLink, intranetDownloadLink_);
      DARABONBA_PTR_FROM_JSON(LinkExpiredTime, linkExpiredTime_);
    };
    DescribeBackupLogsResponseBodyItemsBackupLog() = default ;
    DescribeBackupLogsResponseBodyItemsBackupLog(const DescribeBackupLogsResponseBodyItemsBackupLog &) = default ;
    DescribeBackupLogsResponseBodyItemsBackupLog(DescribeBackupLogsResponseBodyItemsBackupLog &&) = default ;
    DescribeBackupLogsResponseBodyItemsBackupLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupLogsResponseBodyItemsBackupLog() = default ;
    DescribeBackupLogsResponseBodyItemsBackupLog& operator=(const DescribeBackupLogsResponseBodyItemsBackupLog &) = default ;
    DescribeBackupLogsResponseBodyItemsBackupLog& operator=(DescribeBackupLogsResponseBodyItemsBackupLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupLogEndTime_ != nullptr
        && this->backupLogId_ != nullptr && this->backupLogName_ != nullptr && this->backupLogSize_ != nullptr && this->backupLogStartTime_ != nullptr && this->downloadLink_ != nullptr
        && this->intranetDownloadLink_ != nullptr && this->linkExpiredTime_ != nullptr; };
    // backupLogEndTime Field Functions 
    bool hasBackupLogEndTime() const { return this->backupLogEndTime_ != nullptr;};
    void deleteBackupLogEndTime() { this->backupLogEndTime_ = nullptr;};
    inline string backupLogEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupLogEndTime_, "") };
    inline DescribeBackupLogsResponseBodyItemsBackupLog& setBackupLogEndTime(string backupLogEndTime) { DARABONBA_PTR_SET_VALUE(backupLogEndTime_, backupLogEndTime) };


    // backupLogId Field Functions 
    bool hasBackupLogId() const { return this->backupLogId_ != nullptr;};
    void deleteBackupLogId() { this->backupLogId_ = nullptr;};
    inline string backupLogId() const { DARABONBA_PTR_GET_DEFAULT(backupLogId_, "") };
    inline DescribeBackupLogsResponseBodyItemsBackupLog& setBackupLogId(string backupLogId) { DARABONBA_PTR_SET_VALUE(backupLogId_, backupLogId) };


    // backupLogName Field Functions 
    bool hasBackupLogName() const { return this->backupLogName_ != nullptr;};
    void deleteBackupLogName() { this->backupLogName_ = nullptr;};
    inline string backupLogName() const { DARABONBA_PTR_GET_DEFAULT(backupLogName_, "") };
    inline DescribeBackupLogsResponseBodyItemsBackupLog& setBackupLogName(string backupLogName) { DARABONBA_PTR_SET_VALUE(backupLogName_, backupLogName) };


    // backupLogSize Field Functions 
    bool hasBackupLogSize() const { return this->backupLogSize_ != nullptr;};
    void deleteBackupLogSize() { this->backupLogSize_ = nullptr;};
    inline string backupLogSize() const { DARABONBA_PTR_GET_DEFAULT(backupLogSize_, "") };
    inline DescribeBackupLogsResponseBodyItemsBackupLog& setBackupLogSize(string backupLogSize) { DARABONBA_PTR_SET_VALUE(backupLogSize_, backupLogSize) };


    // backupLogStartTime Field Functions 
    bool hasBackupLogStartTime() const { return this->backupLogStartTime_ != nullptr;};
    void deleteBackupLogStartTime() { this->backupLogStartTime_ = nullptr;};
    inline string backupLogStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupLogStartTime_, "") };
    inline DescribeBackupLogsResponseBodyItemsBackupLog& setBackupLogStartTime(string backupLogStartTime) { DARABONBA_PTR_SET_VALUE(backupLogStartTime_, backupLogStartTime) };


    // downloadLink Field Functions 
    bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
    void deleteDownloadLink() { this->downloadLink_ = nullptr;};
    inline string downloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
    inline DescribeBackupLogsResponseBodyItemsBackupLog& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


    // intranetDownloadLink Field Functions 
    bool hasIntranetDownloadLink() const { return this->intranetDownloadLink_ != nullptr;};
    void deleteIntranetDownloadLink() { this->intranetDownloadLink_ = nullptr;};
    inline string intranetDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(intranetDownloadLink_, "") };
    inline DescribeBackupLogsResponseBodyItemsBackupLog& setIntranetDownloadLink(string intranetDownloadLink) { DARABONBA_PTR_SET_VALUE(intranetDownloadLink_, intranetDownloadLink) };


    // linkExpiredTime Field Functions 
    bool hasLinkExpiredTime() const { return this->linkExpiredTime_ != nullptr;};
    void deleteLinkExpiredTime() { this->linkExpiredTime_ = nullptr;};
    inline string linkExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(linkExpiredTime_, "") };
    inline DescribeBackupLogsResponseBodyItemsBackupLog& setLinkExpiredTime(string linkExpiredTime) { DARABONBA_PTR_SET_VALUE(linkExpiredTime_, linkExpiredTime) };


  protected:
    // The time when the backup task ended. The time follows the ISO 8601 standard in the `YYYY-MM-DD\\"T\\"HH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> backupLogEndTime_ = nullptr;
    // The ID of the backup log.
    std::shared_ptr<string> backupLogId_ = nullptr;
    // The name of the backup log.
    std::shared_ptr<string> backupLogName_ = nullptr;
    // The size of the backup log. Unit: bytes.
    std::shared_ptr<string> backupLogSize_ = nullptr;
    // The time when the backup task started. The time follows the ISO 8601 standard in the `YYYY-MM-DD\\"T\\"HH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> backupLogStartTime_ = nullptr;
    // The public URL used to download the backup log.
    std::shared_ptr<string> downloadLink_ = nullptr;
    // The internal URL used to download the backup log.
    std::shared_ptr<string> intranetDownloadLink_ = nullptr;
    // The time when the download URL expires.
    std::shared_ptr<string> linkExpiredTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

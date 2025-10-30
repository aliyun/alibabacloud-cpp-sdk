// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGBACKUPSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGBACKUPSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeLogBackupsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogBackupsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(LogFileName, logFileName_);
      DARABONBA_PTR_TO_JSON(LogFileSize, logFileSize_);
      DARABONBA_PTR_TO_JSON(LogTime, logTime_);
      DARABONBA_PTR_TO_JSON(SegmentName, segmentName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogBackupsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(LogFileName, logFileName_);
      DARABONBA_PTR_FROM_JSON(LogFileSize, logFileSize_);
      DARABONBA_PTR_FROM_JSON(LogTime, logTime_);
      DARABONBA_PTR_FROM_JSON(SegmentName, segmentName_);
    };
    DescribeLogBackupsResponseBodyItems() = default ;
    DescribeLogBackupsResponseBodyItems(const DescribeLogBackupsResponseBodyItems &) = default ;
    DescribeLogBackupsResponseBodyItems(DescribeLogBackupsResponseBodyItems &&) = default ;
    DescribeLogBackupsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogBackupsResponseBodyItems() = default ;
    DescribeLogBackupsResponseBodyItems& operator=(const DescribeLogBackupsResponseBodyItems &) = default ;
    DescribeLogBackupsResponseBodyItems& operator=(DescribeLogBackupsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupId_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->logFileName_ == nullptr && return this->logFileSize_ == nullptr && return this->logTime_ == nullptr && return this->segmentName_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline DescribeLogBackupsResponseBodyItems& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeLogBackupsResponseBodyItems& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // logFileName Field Functions 
    bool hasLogFileName() const { return this->logFileName_ != nullptr;};
    void deleteLogFileName() { this->logFileName_ = nullptr;};
    inline string logFileName() const { DARABONBA_PTR_GET_DEFAULT(logFileName_, "") };
    inline DescribeLogBackupsResponseBodyItems& setLogFileName(string logFileName) { DARABONBA_PTR_SET_VALUE(logFileName_, logFileName) };


    // logFileSize Field Functions 
    bool hasLogFileSize() const { return this->logFileSize_ != nullptr;};
    void deleteLogFileSize() { this->logFileSize_ = nullptr;};
    inline int64_t logFileSize() const { DARABONBA_PTR_GET_DEFAULT(logFileSize_, 0L) };
    inline DescribeLogBackupsResponseBodyItems& setLogFileSize(int64_t logFileSize) { DARABONBA_PTR_SET_VALUE(logFileSize_, logFileSize) };


    // logTime Field Functions 
    bool hasLogTime() const { return this->logTime_ != nullptr;};
    void deleteLogTime() { this->logTime_ = nullptr;};
    inline string logTime() const { DARABONBA_PTR_GET_DEFAULT(logTime_, "") };
    inline DescribeLogBackupsResponseBodyItems& setLogTime(string logTime) { DARABONBA_PTR_SET_VALUE(logTime_, logTime) };


    // segmentName Field Functions 
    bool hasSegmentName() const { return this->segmentName_ != nullptr;};
    void deleteSegmentName() { this->segmentName_ = nullptr;};
    inline string segmentName() const { DARABONBA_PTR_GET_DEFAULT(segmentName_, "") };
    inline DescribeLogBackupsResponseBodyItems& setSegmentName(string segmentName) { DARABONBA_PTR_SET_VALUE(segmentName_, segmentName) };


  protected:
    // The ID of the backup set.
    std::shared_ptr<string> backupId_ = nullptr;
    // The ID of the coordinator node.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The name of the log backup set that is stored in Object Storage Service (OSS).
    std::shared_ptr<string> logFileName_ = nullptr;
    // The size of the log backup set. Unit: bytes.
    std::shared_ptr<int64_t> logFileSize_ = nullptr;
    // The timestamp of the log.
    std::shared_ptr<string> logTime_ = nullptr;
    // The name of the compute node.
    std::shared_ptr<string> segmentName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

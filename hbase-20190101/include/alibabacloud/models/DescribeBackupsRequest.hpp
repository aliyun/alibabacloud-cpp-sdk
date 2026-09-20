// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeBackupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndTimeUTC, endTimeUTC_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StartTimeUTC, startTimeUTC_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndTimeUTC, endTimeUTC_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StartTimeUTC, startTimeUTC_);
    };
    DescribeBackupsRequest() = default ;
    DescribeBackupsRequest(const DescribeBackupsRequest &) = default ;
    DescribeBackupsRequest(DescribeBackupsRequest &&) = default ;
    DescribeBackupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupsRequest() = default ;
    DescribeBackupsRequest& operator=(const DescribeBackupsRequest &) = default ;
    DescribeBackupsRequest& operator=(DescribeBackupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupId_ == nullptr
        && this->clusterId_ == nullptr && this->endTime_ == nullptr && this->endTimeUTC_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->startTime_ == nullptr && this->startTimeUTC_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline DescribeBackupsRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeBackupsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeBackupsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endTimeUTC Field Functions 
    bool hasEndTimeUTC() const { return this->endTimeUTC_ != nullptr;};
    void deleteEndTimeUTC() { this->endTimeUTC_ = nullptr;};
    inline string getEndTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(endTimeUTC_, "") };
    inline DescribeBackupsRequest& setEndTimeUTC(string endTimeUTC) { DARABONBA_PTR_SET_VALUE(endTimeUTC_, endTimeUTC) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeBackupsRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeBackupsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeBackupsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimeUTC Field Functions 
    bool hasStartTimeUTC() const { return this->startTimeUTC_ != nullptr;};
    void deleteStartTimeUTC() { this->startTimeUTC_ = nullptr;};
    inline string getStartTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(startTimeUTC_, "") };
    inline DescribeBackupsRequest& setStartTimeUTC(string startTimeUTC) { DARABONBA_PTR_SET_VALUE(startTimeUTC_, startTimeUTC) };


  protected:
    // The ID of the backup to query.
    shared_ptr<string> backupId_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The end time of the backup query. Format: yyyy-MM-dd HH:mm.
    shared_ptr<string> endTime_ {};
    // The end time of the backup query in UTC. The end time must be later than the start time. Format: yyyy-MM-ddTHH:mmZ.
    shared_ptr<string> endTimeUTC_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The page size.
    shared_ptr<string> pageSize_ {};
    // The start time of the backup query. Format: yyyy-MM-dd HH:mm.
    shared_ptr<string> startTime_ {};
    // The start time of the backup query in UTC. Format: yyyy-MM-ddTHH:mmZ.
    shared_ptr<string> startTimeUTC_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif

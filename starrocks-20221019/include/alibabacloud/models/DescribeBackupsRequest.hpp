// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeBackupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupTaskId, backupTaskId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
      DARABONBA_PTR_TO_JSON(TimePeriodEndTime, timePeriodEndTime_);
      DARABONBA_PTR_TO_JSON(TimePeriodStartTime, timePeriodStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupTaskId, backupTaskId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
      DARABONBA_PTR_FROM_JSON(TimePeriodEndTime, timePeriodEndTime_);
      DARABONBA_PTR_FROM_JSON(TimePeriodStartTime, timePeriodStartTime_);
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
    virtual bool empty() const override { return this->backupTaskId_ == nullptr
        && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->statuses_ == nullptr
        && this->timePeriodEndTime_ == nullptr && this->timePeriodStartTime_ == nullptr; };
    // backupTaskId Field Functions 
    bool hasBackupTaskId() const { return this->backupTaskId_ != nullptr;};
    void deleteBackupTaskId() { this->backupTaskId_ = nullptr;};
    inline string getBackupTaskId() const { DARABONBA_PTR_GET_DEFAULT(backupTaskId_, "") };
    inline DescribeBackupsRequest& setBackupTaskId(string backupTaskId) { DARABONBA_PTR_SET_VALUE(backupTaskId_, backupTaskId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeBackupsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBackupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeBackupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline string getStatuses() const { DARABONBA_PTR_GET_DEFAULT(statuses_, "") };
    inline DescribeBackupsRequest& setStatuses(string statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };


    // timePeriodEndTime Field Functions 
    bool hasTimePeriodEndTime() const { return this->timePeriodEndTime_ != nullptr;};
    void deleteTimePeriodEndTime() { this->timePeriodEndTime_ = nullptr;};
    inline int64_t getTimePeriodEndTime() const { DARABONBA_PTR_GET_DEFAULT(timePeriodEndTime_, 0L) };
    inline DescribeBackupsRequest& setTimePeriodEndTime(int64_t timePeriodEndTime) { DARABONBA_PTR_SET_VALUE(timePeriodEndTime_, timePeriodEndTime) };


    // timePeriodStartTime Field Functions 
    bool hasTimePeriodStartTime() const { return this->timePeriodStartTime_ != nullptr;};
    void deleteTimePeriodStartTime() { this->timePeriodStartTime_ = nullptr;};
    inline int64_t getTimePeriodStartTime() const { DARABONBA_PTR_GET_DEFAULT(timePeriodStartTime_, 0L) };
    inline DescribeBackupsRequest& setTimePeriodStartTime(int64_t timePeriodStartTime) { DARABONBA_PTR_SET_VALUE(timePeriodStartTime_, timePeriodStartTime) };


  protected:
    shared_ptr<string> backupTaskId_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> statuses_ {};
    shared_ptr<int64_t> timePeriodEndTime_ {};
    shared_ptr<int64_t> timePeriodStartTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif

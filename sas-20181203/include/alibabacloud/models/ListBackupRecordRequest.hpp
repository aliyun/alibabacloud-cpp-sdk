// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBACKUPRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBACKUPRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListBackupRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBackupRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(MachineRemark, machineRemark_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
    };
    friend void from_json(const Darabonba::Json& j, ListBackupRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(MachineRemark, machineRemark_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
    };
    ListBackupRecordRequest() = default ;
    ListBackupRecordRequest(const ListBackupRecordRequest &) = default ;
    ListBackupRecordRequest(ListBackupRecordRequest &&) = default ;
    ListBackupRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBackupRecordRequest() = default ;
    ListBackupRecordRequest& operator=(const ListBackupRecordRequest &) = default ;
    ListBackupRecordRequest& operator=(ListBackupRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupEndTime_ == nullptr
        && this->backupStartTime_ == nullptr && this->currentPage_ == nullptr && this->machineRemark_ == nullptr && this->pageSize_ == nullptr && this->statusList_ == nullptr; };
    // backupEndTime Field Functions 
    bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
    void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
    inline int64_t getBackupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, 0L) };
    inline ListBackupRecordRequest& setBackupEndTime(int64_t backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


    // backupStartTime Field Functions 
    bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
    void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
    inline int64_t getBackupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, 0L) };
    inline ListBackupRecordRequest& setBackupStartTime(int64_t backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListBackupRecordRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // machineRemark Field Functions 
    bool hasMachineRemark() const { return this->machineRemark_ != nullptr;};
    void deleteMachineRemark() { this->machineRemark_ = nullptr;};
    inline string getMachineRemark() const { DARABONBA_PTR_GET_DEFAULT(machineRemark_, "") };
    inline ListBackupRecordRequest& setMachineRemark(string machineRemark) { DARABONBA_PTR_SET_VALUE(machineRemark_, machineRemark) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBackupRecordRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline ListBackupRecordRequest& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline ListBackupRecordRequest& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


  protected:
    // The timestamp when the backup task ended. Unit: milliseconds.
    shared_ptr<int64_t> backupEndTime_ {};
    // The timestamp when the backup task started. Unit: milliseconds.
    shared_ptr<int64_t> backupStartTime_ {};
    // The page number. Default value: **1**. Pages start from page 1.
    shared_ptr<int32_t> currentPage_ {};
    // The information that you want to use to identify the servers protected by the anti-ransomware policy. You can enter the IP address or ID of a server.
    shared_ptr<string> machineRemark_ {};
    // The number of entries per page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    shared_ptr<int32_t> pageSize_ {};
    // The backup task status. Valid values:
    // 
    // *   **BACKUP_COMPLETE**: The backup task is successful.
    // *   **BACKUP_FAILED**: The backup task failed.
    // *   **PARTIAL_COMPLETE**: The backup task is partially successful.
    shared_ptr<vector<string>> statusList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

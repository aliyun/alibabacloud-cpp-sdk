// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNIBACKUPRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUNIBACKUPRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListUniBackupRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUniBackupRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupRegionId, backupRegionId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(MachineRemark, machineRemark_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListUniBackupRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupRegionId, backupRegionId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(MachineRemark, machineRemark_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ListUniBackupRecordRequest() = default ;
    ListUniBackupRecordRequest(const ListUniBackupRecordRequest &) = default ;
    ListUniBackupRecordRequest(ListUniBackupRecordRequest &&) = default ;
    ListUniBackupRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUniBackupRecordRequest() = default ;
    ListUniBackupRecordRequest& operator=(const ListUniBackupRecordRequest &) = default ;
    ListUniBackupRecordRequest& operator=(ListUniBackupRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupRegionId_ == nullptr
        && return this->currentPage_ == nullptr && return this->machineRemark_ == nullptr && return this->pageSize_ == nullptr && return this->state_ == nullptr; };
    // backupRegionId Field Functions 
    bool hasBackupRegionId() const { return this->backupRegionId_ != nullptr;};
    void deleteBackupRegionId() { this->backupRegionId_ = nullptr;};
    inline string backupRegionId() const { DARABONBA_PTR_GET_DEFAULT(backupRegionId_, "") };
    inline ListUniBackupRecordRequest& setBackupRegionId(string backupRegionId) { DARABONBA_PTR_SET_VALUE(backupRegionId_, backupRegionId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListUniBackupRecordRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // machineRemark Field Functions 
    bool hasMachineRemark() const { return this->machineRemark_ != nullptr;};
    void deleteMachineRemark() { this->machineRemark_ = nullptr;};
    inline string machineRemark() const { DARABONBA_PTR_GET_DEFAULT(machineRemark_, "") };
    inline ListUniBackupRecordRequest& setMachineRemark(string machineRemark) { DARABONBA_PTR_SET_VALUE(machineRemark_, machineRemark) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUniBackupRecordRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListUniBackupRecordRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The region where the anti-ransomware backup service is located.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupRegionId_ = nullptr;
    // When performing a paginated query, set the page number for the current page. The default value is **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The identification information of the server protected by the anti-ransomware policy. You can enter the IP address or instance ID of the server.
    std::shared_ptr<string> machineRemark_ = nullptr;
    // The maximum number of data entries to display per page in a paginated query.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Backup status. Values:
    // - **completed**: Success
    // - **error**: Failure
    // - **canceled**: Closed
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

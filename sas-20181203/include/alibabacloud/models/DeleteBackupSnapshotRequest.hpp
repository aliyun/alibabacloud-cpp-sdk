// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBACKUPSNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBACKUPSNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteBackupSnapshotRequestBackupSnapshotList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteBackupSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBackupSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupRegionIdList, backupRegionIdList_);
      DARABONBA_PTR_TO_JSON(BackupSnapshotList, backupSnapshotList_);
      DARABONBA_PTR_TO_JSON(RetainLatestSnapshot, retainLatestSnapshot_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBackupSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupRegionIdList, backupRegionIdList_);
      DARABONBA_PTR_FROM_JSON(BackupSnapshotList, backupSnapshotList_);
      DARABONBA_PTR_FROM_JSON(RetainLatestSnapshot, retainLatestSnapshot_);
    };
    DeleteBackupSnapshotRequest() = default ;
    DeleteBackupSnapshotRequest(const DeleteBackupSnapshotRequest &) = default ;
    DeleteBackupSnapshotRequest(DeleteBackupSnapshotRequest &&) = default ;
    DeleteBackupSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBackupSnapshotRequest() = default ;
    DeleteBackupSnapshotRequest& operator=(const DeleteBackupSnapshotRequest &) = default ;
    DeleteBackupSnapshotRequest& operator=(DeleteBackupSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupRegionIdList_ == nullptr
        && return this->backupSnapshotList_ == nullptr && return this->retainLatestSnapshot_ == nullptr; };
    // backupRegionIdList Field Functions 
    bool hasBackupRegionIdList() const { return this->backupRegionIdList_ != nullptr;};
    void deleteBackupRegionIdList() { this->backupRegionIdList_ = nullptr;};
    inline const vector<string> & backupRegionIdList() const { DARABONBA_PTR_GET_CONST(backupRegionIdList_, vector<string>) };
    inline vector<string> backupRegionIdList() { DARABONBA_PTR_GET(backupRegionIdList_, vector<string>) };
    inline DeleteBackupSnapshotRequest& setBackupRegionIdList(const vector<string> & backupRegionIdList) { DARABONBA_PTR_SET_VALUE(backupRegionIdList_, backupRegionIdList) };
    inline DeleteBackupSnapshotRequest& setBackupRegionIdList(vector<string> && backupRegionIdList) { DARABONBA_PTR_SET_RVALUE(backupRegionIdList_, backupRegionIdList) };


    // backupSnapshotList Field Functions 
    bool hasBackupSnapshotList() const { return this->backupSnapshotList_ != nullptr;};
    void deleteBackupSnapshotList() { this->backupSnapshotList_ = nullptr;};
    inline const vector<DeleteBackupSnapshotRequestBackupSnapshotList> & backupSnapshotList() const { DARABONBA_PTR_GET_CONST(backupSnapshotList_, vector<DeleteBackupSnapshotRequestBackupSnapshotList>) };
    inline vector<DeleteBackupSnapshotRequestBackupSnapshotList> backupSnapshotList() { DARABONBA_PTR_GET(backupSnapshotList_, vector<DeleteBackupSnapshotRequestBackupSnapshotList>) };
    inline DeleteBackupSnapshotRequest& setBackupSnapshotList(const vector<DeleteBackupSnapshotRequestBackupSnapshotList> & backupSnapshotList) { DARABONBA_PTR_SET_VALUE(backupSnapshotList_, backupSnapshotList) };
    inline DeleteBackupSnapshotRequest& setBackupSnapshotList(vector<DeleteBackupSnapshotRequestBackupSnapshotList> && backupSnapshotList) { DARABONBA_PTR_SET_RVALUE(backupSnapshotList_, backupSnapshotList) };


    // retainLatestSnapshot Field Functions 
    bool hasRetainLatestSnapshot() const { return this->retainLatestSnapshot_ != nullptr;};
    void deleteRetainLatestSnapshot() { this->retainLatestSnapshot_ = nullptr;};
    inline bool retainLatestSnapshot() const { DARABONBA_PTR_GET_DEFAULT(retainLatestSnapshot_, false) };
    inline DeleteBackupSnapshotRequest& setRetainLatestSnapshot(bool retainLatestSnapshot) { DARABONBA_PTR_SET_VALUE(retainLatestSnapshot_, retainLatestSnapshot) };


  protected:
    // The regions for backup.
    std::shared_ptr<vector<string>> backupRegionIdList_ = nullptr;
    // The backup snapshots.
    std::shared_ptr<vector<DeleteBackupSnapshotRequestBackupSnapshotList>> backupSnapshotList_ = nullptr;
    // Specifies whether to retain the latest snapshot. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> retainLatestSnapshot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

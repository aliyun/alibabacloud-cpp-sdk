// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERCSNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERCSNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DeleteRCSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRCSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRCSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
    };
    DeleteRCSnapshotRequest() = default ;
    DeleteRCSnapshotRequest(const DeleteRCSnapshotRequest &) = default ;
    DeleteRCSnapshotRequest(DeleteRCSnapshotRequest &&) = default ;
    DeleteRCSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRCSnapshotRequest() = default ;
    DeleteRCSnapshotRequest& operator=(const DeleteRCSnapshotRequest &) = default ;
    DeleteRCSnapshotRequest& operator=(DeleteRCSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->force_ == nullptr
        && this->regionId_ == nullptr && this->snapshotId_ == nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteRCSnapshotRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteRCSnapshotRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DeleteRCSnapshotRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    // Specifies whether to forcefully delete the snapshot that is used to create cloud disks. Valid values:
    // 
    // *   **true**: forcefully deletes the snapshot After the snapshot is forcefully deleted, the cloud disks created from the snapshot cannot be re-initialized.
    // *   **false**(default): does not forcefully delete the snapshot.
    shared_ptr<bool> force_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The snapshot ID.
    // 
    // This parameter is required.
    shared_ptr<string> snapshotId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

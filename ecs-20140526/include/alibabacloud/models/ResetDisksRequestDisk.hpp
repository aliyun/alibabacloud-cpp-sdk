// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETDISKSREQUESTDISK_HPP_
#define ALIBABACLOUD_MODELS_RESETDISKSREQUESTDISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ResetDisksRequestDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetDisksRequestDisk& obj) { 
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetDisksRequestDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
    };
    ResetDisksRequestDisk() = default ;
    ResetDisksRequestDisk(const ResetDisksRequestDisk &) = default ;
    ResetDisksRequestDisk(ResetDisksRequestDisk &&) = default ;
    ResetDisksRequestDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetDisksRequestDisk() = default ;
    ResetDisksRequestDisk& operator=(const ResetDisksRequestDisk &) = default ;
    ResetDisksRequestDisk& operator=(ResetDisksRequestDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskId_ != nullptr
        && this->snapshotId_ != nullptr; };
    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline ResetDisksRequestDisk& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline ResetDisksRequestDisk& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    // The ID of the disk that you want to roll back. You can specify up to 10 disk IDs.
    std::shared_ptr<string> diskId_ = nullptr;
    // The ID of the disk snapshot that is contained in the instance snapshot. You can specify up to 10 disk snapshot IDs.
    std::shared_ptr<string> snapshotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

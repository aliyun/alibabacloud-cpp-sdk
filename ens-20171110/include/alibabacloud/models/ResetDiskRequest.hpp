// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETDISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETDISKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ResetDiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetDiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetDiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
    };
    ResetDiskRequest() = default ;
    ResetDiskRequest(const ResetDiskRequest &) = default ;
    ResetDiskRequest(ResetDiskRequest &&) = default ;
    ResetDiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetDiskRequest() = default ;
    ResetDiskRequest& operator=(const ResetDiskRequest &) = default ;
    ResetDiskRequest& operator=(ResetDiskRequest &&) = default ;
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
    inline ResetDiskRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline ResetDiskRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    // The ID of the disk that you want to roll back.
    // 
    // This parameter is required.
    std::shared_ptr<string> diskId_ = nullptr;
    // The ID of the snapshot that you want to use to roll back the disk.
    // 
    // This parameter is required.
    std::shared_ptr<string> snapshotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

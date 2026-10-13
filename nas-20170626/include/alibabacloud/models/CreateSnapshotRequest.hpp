// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
    };
    CreateSnapshotRequest() = default ;
    CreateSnapshotRequest(const CreateSnapshotRequest &) = default ;
    CreateSnapshotRequest(CreateSnapshotRequest &&) = default ;
    CreateSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSnapshotRequest() = default ;
    CreateSnapshotRequest& operator=(const CreateSnapshotRequest &) = default ;
    CreateSnapshotRequest& operator=(CreateSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->fileSystemId_ == nullptr && this->retentionDays_ == nullptr && this->snapshotName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSnapshotRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateSnapshotRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int32_t getRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
    inline CreateSnapshotRequest& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // snapshotName Field Functions 
    bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
    void deleteSnapshotName() { this->snapshotName_ = nullptr;};
    inline string getSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
    inline CreateSnapshotRequest& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


  protected:
    // The snapshot description.
    // 
    // Limits:
    // 
    // - The description must be 2 to 256 characters in length.
    // - The description cannot start with `http://` or `https://`.
    // - Default value: empty.
    shared_ptr<string> description_ {};
    // The ID of the Advanced Extreme NAS file system. The value must start with `extreme-`, such as `extreme-01dd****`.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The retention period of the snapshot.
    // 
    // Unit: days.
    // 
    // Valid values:
    // 
    // - -1 (default): The snapshot is permanently retained and is automatically deleted when the snapshot quota is reached.
    // - 1 to 65536: The snapshot is retained for the specified number of days. The snapshot is subject to automatic release after the retention period expires.
    shared_ptr<int32_t> retentionDays_ {};
    // The snapshot name.
    // 
    // Limits:
    // 
    // - The name must be 2 to 128 characters in length and can contain letters and digits. The name must start with a letter and cannot start with `http://` or `https://`.
    // - The name can contain digits, colons (:), underscores (_), or hyphens (-).
    // - The name cannot start with auto to avoid conflicts with automatic snapshot names.
    shared_ptr<string> snapshotName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif

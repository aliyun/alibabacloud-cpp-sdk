// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIFECYCLEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIFECYCLEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ModifyLifecyclePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLifecyclePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(LifecyclePolicyId, lifecyclePolicyId_);
      DARABONBA_PTR_TO_JSON(LifecyclePolicyName, lifecyclePolicyName_);
      DARABONBA_PTR_TO_JSON(LifecycleRuleName, lifecycleRuleName_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLifecyclePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(LifecyclePolicyId, lifecyclePolicyId_);
      DARABONBA_PTR_FROM_JSON(LifecyclePolicyName, lifecyclePolicyName_);
      DARABONBA_PTR_FROM_JSON(LifecycleRuleName, lifecycleRuleName_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    ModifyLifecyclePolicyRequest() = default ;
    ModifyLifecyclePolicyRequest(const ModifyLifecyclePolicyRequest &) = default ;
    ModifyLifecyclePolicyRequest(ModifyLifecyclePolicyRequest &&) = default ;
    ModifyLifecyclePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLifecyclePolicyRequest() = default ;
    ModifyLifecyclePolicyRequest& operator=(const ModifyLifecyclePolicyRequest &) = default ;
    ModifyLifecyclePolicyRequest& operator=(ModifyLifecyclePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->lifecyclePolicyId_ == nullptr && this->lifecyclePolicyName_ == nullptr && this->lifecycleRuleName_ == nullptr && this->path_ == nullptr && this->storageType_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyLifecyclePolicyRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // lifecyclePolicyId Field Functions 
    bool hasLifecyclePolicyId() const { return this->lifecyclePolicyId_ != nullptr;};
    void deleteLifecyclePolicyId() { this->lifecyclePolicyId_ = nullptr;};
    inline string getLifecyclePolicyId() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePolicyId_, "") };
    inline ModifyLifecyclePolicyRequest& setLifecyclePolicyId(string lifecyclePolicyId) { DARABONBA_PTR_SET_VALUE(lifecyclePolicyId_, lifecyclePolicyId) };


    // lifecyclePolicyName Field Functions 
    bool hasLifecyclePolicyName() const { return this->lifecyclePolicyName_ != nullptr;};
    void deleteLifecyclePolicyName() { this->lifecyclePolicyName_ = nullptr;};
    inline string getLifecyclePolicyName() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePolicyName_, "") };
    inline ModifyLifecyclePolicyRequest& setLifecyclePolicyName(string lifecyclePolicyName) { DARABONBA_PTR_SET_VALUE(lifecyclePolicyName_, lifecyclePolicyName) };


    // lifecycleRuleName Field Functions 
    bool hasLifecycleRuleName() const { return this->lifecycleRuleName_ != nullptr;};
    void deleteLifecycleRuleName() { this->lifecycleRuleName_ = nullptr;};
    inline string getLifecycleRuleName() const { DARABONBA_PTR_GET_DEFAULT(lifecycleRuleName_, "") };
    inline ModifyLifecyclePolicyRequest& setLifecycleRuleName(string lifecycleRuleName) { DARABONBA_PTR_SET_VALUE(lifecycleRuleName_, lifecycleRuleName) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ModifyLifecyclePolicyRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ModifyLifecyclePolicyRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // The file system ID.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The ID of the lifecycle policy.
    shared_ptr<string> lifecyclePolicyId_ {};
    // The Policy Name of the lifecycle management policy.
    // 
    // The name must be 3 to 64 characters in length, must start with an uppercase letter or lowercase letter, and can contain letters, digits, underscores (_), or hyphens (-).
    shared_ptr<string> lifecyclePolicyName_ {};
    // The management rule associated with the lifecycle management policy.
    // 
    // Valid values:
    // 
    // - DEFAULT_ATIME_14: files that have not been accessed for 14 days.
    // - DEFAULT_ATIME_30: files that have not been accessed for 30 days.
    // - DEFAULT_ATIME_60: files that have not been accessed for 60 days.
    // - DEFAULT_ATIME_90: files that have not been accessed for 90 days.
    // - DEFAULT_ATIME_180: files that have not been accessed for 180 days. DEFAULT_ATIME_180 is supported only when StorageType is set to Archive.
    // > If an IA storage class policy has already been configured for the directory, the time period specified for the archive policy must be longer than that of the IA storage class policy.
    shared_ptr<string> lifecycleRuleName_ {};
    // The absolute path of a single directory configured in the lifecycle management policy.
    // 
    // The path must start with a forward slash (/) and must be an existing path in the mount target.
    shared_ptr<string> path_ {};
    // The storage type.
    // - InfrequentAccess: IA storage class.
    // - Archive: Archive storage class.
    shared_ptr<string> storageType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif

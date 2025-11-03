// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEPOLICIESRESPONSEBODYLIFECYCLEPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEPOLICIESRESPONSEBODYLIFECYCLEPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeLifecyclePoliciesResponseBodyLifecyclePolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLifecyclePoliciesResponseBodyLifecyclePolicies& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(LifecyclePolicyName, lifecyclePolicyName_);
      DARABONBA_PTR_TO_JSON(LifecycleRuleName, lifecycleRuleName_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLifecyclePoliciesResponseBodyLifecyclePolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(LifecyclePolicyName, lifecyclePolicyName_);
      DARABONBA_PTR_FROM_JSON(LifecycleRuleName, lifecycleRuleName_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    DescribeLifecyclePoliciesResponseBodyLifecyclePolicies() = default ;
    DescribeLifecyclePoliciesResponseBodyLifecyclePolicies(const DescribeLifecyclePoliciesResponseBodyLifecyclePolicies &) = default ;
    DescribeLifecyclePoliciesResponseBodyLifecyclePolicies(DescribeLifecyclePoliciesResponseBodyLifecyclePolicies &&) = default ;
    DescribeLifecyclePoliciesResponseBodyLifecyclePolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLifecyclePoliciesResponseBodyLifecyclePolicies() = default ;
    DescribeLifecyclePoliciesResponseBodyLifecyclePolicies& operator=(const DescribeLifecyclePoliciesResponseBodyLifecyclePolicies &) = default ;
    DescribeLifecyclePoliciesResponseBodyLifecyclePolicies& operator=(DescribeLifecyclePoliciesResponseBodyLifecyclePolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->fileSystemId_ == nullptr && return this->lifecyclePolicyName_ == nullptr && return this->lifecycleRuleName_ == nullptr && return this->path_ == nullptr && return this->paths_ == nullptr
        && return this->storageType_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeLifecyclePoliciesResponseBodyLifecyclePolicies& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeLifecyclePoliciesResponseBodyLifecyclePolicies& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // lifecyclePolicyName Field Functions 
    bool hasLifecyclePolicyName() const { return this->lifecyclePolicyName_ != nullptr;};
    void deleteLifecyclePolicyName() { this->lifecyclePolicyName_ = nullptr;};
    inline string lifecyclePolicyName() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePolicyName_, "") };
    inline DescribeLifecyclePoliciesResponseBodyLifecyclePolicies& setLifecyclePolicyName(string lifecyclePolicyName) { DARABONBA_PTR_SET_VALUE(lifecyclePolicyName_, lifecyclePolicyName) };


    // lifecycleRuleName Field Functions 
    bool hasLifecycleRuleName() const { return this->lifecycleRuleName_ != nullptr;};
    void deleteLifecycleRuleName() { this->lifecycleRuleName_ = nullptr;};
    inline string lifecycleRuleName() const { DARABONBA_PTR_GET_DEFAULT(lifecycleRuleName_, "") };
    inline DescribeLifecyclePoliciesResponseBodyLifecyclePolicies& setLifecycleRuleName(string lifecycleRuleName) { DARABONBA_PTR_SET_VALUE(lifecycleRuleName_, lifecycleRuleName) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeLifecyclePoliciesResponseBodyLifecyclePolicies& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<string> & paths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
    inline vector<string> paths() { DARABONBA_PTR_GET(paths_, vector<string>) };
    inline DescribeLifecyclePoliciesResponseBodyLifecyclePolicies& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline DescribeLifecyclePoliciesResponseBodyLifecyclePolicies& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeLifecyclePoliciesResponseBodyLifecyclePolicies& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // The time when the lifecycle policy was created.
    // 
    // The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The name of the lifecycle policy.
    std::shared_ptr<string> lifecyclePolicyName_ = nullptr;
    // The management rule that is associated with the lifecycle policy.
    // 
    // Valid values:
    // 
    // *   DEFAULT_ATIME_14: Files that are not accessed in the last 14 days are dumped to the IA storage medium.
    // *   DEFAULT_ATIME_30: Files that are not accessed in the last 30 days are dumped to the IA storage medium.
    // *   DEFAULT_ATIME_60: Files that are not accessed in the last 60 days are dumped to the IA storage medium.
    // *   DEFAULT_ATIME_90: Files that are not accessed in the last 90 days are dumped to the IA storage medium.
    std::shared_ptr<string> lifecycleRuleName_ = nullptr;
    // The absolute path of a directory with which the lifecycle policy is associated.
    std::shared_ptr<string> path_ = nullptr;
    // The absolute paths to multiple directories associated with the lifecycle policy.
    std::shared_ptr<vector<string>> paths_ = nullptr;
    // The storage type of the data that is dumped to the IA storage medium.
    // 
    // Default value: InfrequentAccess (IA).
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif

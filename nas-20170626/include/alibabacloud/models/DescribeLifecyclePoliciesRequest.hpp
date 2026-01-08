// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeLifecyclePoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLifecyclePoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(LifecyclePolicyId, lifecyclePolicyId_);
      DARABONBA_PTR_TO_JSON(LifecyclePolicyName, lifecyclePolicyName_);
      DARABONBA_PTR_TO_JSON(LifecyclePolicyType, lifecyclePolicyType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLifecyclePoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(LifecyclePolicyId, lifecyclePolicyId_);
      DARABONBA_PTR_FROM_JSON(LifecyclePolicyName, lifecyclePolicyName_);
      DARABONBA_PTR_FROM_JSON(LifecyclePolicyType, lifecyclePolicyType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    DescribeLifecyclePoliciesRequest() = default ;
    DescribeLifecyclePoliciesRequest(const DescribeLifecyclePoliciesRequest &) = default ;
    DescribeLifecyclePoliciesRequest(DescribeLifecyclePoliciesRequest &&) = default ;
    DescribeLifecyclePoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLifecyclePoliciesRequest() = default ;
    DescribeLifecyclePoliciesRequest& operator=(const DescribeLifecyclePoliciesRequest &) = default ;
    DescribeLifecyclePoliciesRequest& operator=(DescribeLifecyclePoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->fileSystemId_ == nullptr && this->lifecyclePolicyId_ == nullptr && this->lifecyclePolicyName_ == nullptr && this->lifecyclePolicyType_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->path_ == nullptr && this->storageType_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLifecyclePoliciesRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeLifecyclePoliciesRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // lifecyclePolicyId Field Functions 
    bool hasLifecyclePolicyId() const { return this->lifecyclePolicyId_ != nullptr;};
    void deleteLifecyclePolicyId() { this->lifecyclePolicyId_ = nullptr;};
    inline string getLifecyclePolicyId() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePolicyId_, "") };
    inline DescribeLifecyclePoliciesRequest& setLifecyclePolicyId(string lifecyclePolicyId) { DARABONBA_PTR_SET_VALUE(lifecyclePolicyId_, lifecyclePolicyId) };


    // lifecyclePolicyName Field Functions 
    bool hasLifecyclePolicyName() const { return this->lifecyclePolicyName_ != nullptr;};
    void deleteLifecyclePolicyName() { this->lifecyclePolicyName_ = nullptr;};
    inline string getLifecyclePolicyName() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePolicyName_, "") };
    inline DescribeLifecyclePoliciesRequest& setLifecyclePolicyName(string lifecyclePolicyName) { DARABONBA_PTR_SET_VALUE(lifecyclePolicyName_, lifecyclePolicyName) };


    // lifecyclePolicyType Field Functions 
    bool hasLifecyclePolicyType() const { return this->lifecyclePolicyType_ != nullptr;};
    void deleteLifecyclePolicyType() { this->lifecyclePolicyType_ = nullptr;};
    inline string getLifecyclePolicyType() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePolicyType_, "") };
    inline DescribeLifecyclePoliciesRequest& setLifecyclePolicyType(string lifecyclePolicyType) { DARABONBA_PTR_SET_VALUE(lifecyclePolicyType_, lifecyclePolicyType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLifecyclePoliciesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLifecyclePoliciesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeLifecyclePoliciesRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeLifecyclePoliciesRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    shared_ptr<string> description_ {};
    // The ID of the file system.
    shared_ptr<string> fileSystemId_ {};
    shared_ptr<string> lifecyclePolicyId_ {};
    // The name of the lifecycle policy. The name must meet the following conventions:
    // 
    // The name must be 3 to 64 characters in length and must start with a letter. It can contain letters, digits, underscores (_), and hyphens (-).
    shared_ptr<string> lifecyclePolicyName_ {};
    shared_ptr<string> lifecyclePolicyType_ {};
    // The page number.
    // 
    // Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> path_ {};
    // The storage class.
    // 
    // *   InfrequentAccess: the Infrequent Access (IA) storage class.
    // *   Archive: the Archive storage class.
    // 
    // >  If the StorageType parameter is not specified, data retrieval tasks of all types are returned.
    shared_ptr<string> storageType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif

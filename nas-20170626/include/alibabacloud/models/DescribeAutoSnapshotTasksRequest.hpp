// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAutoSnapshotTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoSnapshotTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyIds, autoSnapshotPolicyIds_);
      DARABONBA_PTR_TO_JSON(FileSystemIds, fileSystemIds_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoSnapshotTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyIds, autoSnapshotPolicyIds_);
      DARABONBA_PTR_FROM_JSON(FileSystemIds, fileSystemIds_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeAutoSnapshotTasksRequest() = default ;
    DescribeAutoSnapshotTasksRequest(const DescribeAutoSnapshotTasksRequest &) = default ;
    DescribeAutoSnapshotTasksRequest(DescribeAutoSnapshotTasksRequest &&) = default ;
    DescribeAutoSnapshotTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoSnapshotTasksRequest() = default ;
    DescribeAutoSnapshotTasksRequest& operator=(const DescribeAutoSnapshotTasksRequest &) = default ;
    DescribeAutoSnapshotTasksRequest& operator=(DescribeAutoSnapshotTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoSnapshotPolicyIds_ == nullptr
        && this->fileSystemIds_ == nullptr && this->fileSystemType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // autoSnapshotPolicyIds Field Functions 
    bool hasAutoSnapshotPolicyIds() const { return this->autoSnapshotPolicyIds_ != nullptr;};
    void deleteAutoSnapshotPolicyIds() { this->autoSnapshotPolicyIds_ = nullptr;};
    inline string getAutoSnapshotPolicyIds() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyIds_, "") };
    inline DescribeAutoSnapshotTasksRequest& setAutoSnapshotPolicyIds(string autoSnapshotPolicyIds) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyIds_, autoSnapshotPolicyIds) };


    // fileSystemIds Field Functions 
    bool hasFileSystemIds() const { return this->fileSystemIds_ != nullptr;};
    void deleteFileSystemIds() { this->fileSystemIds_ = nullptr;};
    inline string getFileSystemIds() const { DARABONBA_PTR_GET_DEFAULT(fileSystemIds_, "") };
    inline DescribeAutoSnapshotTasksRequest& setFileSystemIds(string fileSystemIds) { DARABONBA_PTR_SET_VALUE(fileSystemIds_, fileSystemIds) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string getFileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline DescribeAutoSnapshotTasksRequest& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAutoSnapshotTasksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAutoSnapshotTasksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The IDs of automatic snapshot policies.
    // 
    // You can specify a maximum of 100 policy IDs. If you want to query the tasks of multiple automatic snapshot policies, you must separate the policy IDs with commas (,).
    shared_ptr<string> autoSnapshotPolicyIds_ {};
    // The ID of the file system.
    // 
    // You can specify a maximum of 100 file system IDs. If you want to query the snapshots of multiple file systems, you must separate the file system IDs with commas (,).
    shared_ptr<string> fileSystemIds_ {};
    // The type of the file system.
    // 
    // Valid value: extreme, which indicates Extreme NAS file systems.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemType_ {};
    // The number of entries per page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageNumber_ {};
    // The page number.
    // 
    // Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif

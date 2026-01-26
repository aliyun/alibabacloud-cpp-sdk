// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAccessGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(UseUTCDateTime, useUTCDateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(UseUTCDateTime, useUTCDateTime_);
    };
    DescribeAccessGroupsRequest() = default ;
    DescribeAccessGroupsRequest(const DescribeAccessGroupsRequest &) = default ;
    DescribeAccessGroupsRequest(DescribeAccessGroupsRequest &&) = default ;
    DescribeAccessGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessGroupsRequest() = default ;
    DescribeAccessGroupsRequest& operator=(const DescribeAccessGroupsRequest &) = default ;
    DescribeAccessGroupsRequest& operator=(DescribeAccessGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupName_ == nullptr
        && this->fileSystemType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->useUTCDateTime_ == nullptr; };
    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string getAccessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline DescribeAccessGroupsRequest& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string getFileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline DescribeAccessGroupsRequest& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAccessGroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAccessGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // useUTCDateTime Field Functions 
    bool hasUseUTCDateTime() const { return this->useUTCDateTime_ != nullptr;};
    void deleteUseUTCDateTime() { this->useUTCDateTime_ = nullptr;};
    inline bool getUseUTCDateTime() const { DARABONBA_PTR_GET_DEFAULT(useUTCDateTime_, false) };
    inline DescribeAccessGroupsRequest& setUseUTCDateTime(bool useUTCDateTime) { DARABONBA_PTR_SET_VALUE(useUTCDateTime_, useUTCDateTime) };


  protected:
    // The name of the permission group.
    // 
    // Limits:
    // 
    // *   The name must be 3 to 64 characters in length.
    // *   The name must start with a letter and can contain letters, digits, underscores (_), and hyphens (-).
    shared_ptr<string> accessGroupName_ {};
    // The type of the file system.
    // 
    // Valid values:
    // 
    // *   standard: General-purpose NAS
    // *   extreme: Extreme NAS
    // *   cpfs: CPFS
    shared_ptr<string> fileSystemType_ {};
    // The page number.
    // 
    // Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of permission groups returned per page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // Specifies whether the time to return is displayed in UTC.
    // 
    // Valid values:
    // 
    // *   true (default): The time is displayed in UTC.
    // *   false: The time is not displayed in UTC.
    shared_ptr<bool> useUTCDateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif

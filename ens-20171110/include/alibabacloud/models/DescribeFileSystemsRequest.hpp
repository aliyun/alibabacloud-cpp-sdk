// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeFileSystemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FileSystemName, fileSystemName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FileSystemName, fileSystemName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeFileSystemsRequest() = default ;
    DescribeFileSystemsRequest(const DescribeFileSystemsRequest &) = default ;
    DescribeFileSystemsRequest(DescribeFileSystemsRequest &&) = default ;
    DescribeFileSystemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsRequest() = default ;
    DescribeFileSystemsRequest& operator=(const DescribeFileSystemsRequest &) = default ;
    DescribeFileSystemsRequest& operator=(DescribeFileSystemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ensRegionId_ == nullptr
        && this->fileSystemId_ == nullptr && this->fileSystemName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeFileSystemsRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeFileSystemsRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fileSystemName Field Functions 
    bool hasFileSystemName() const { return this->fileSystemName_ != nullptr;};
    void deleteFileSystemName() { this->fileSystemName_ = nullptr;};
    inline string getFileSystemName() const { DARABONBA_PTR_GET_DEFAULT(fileSystemName_, "") };
    inline DescribeFileSystemsRequest& setFileSystemName(string fileSystemName) { DARABONBA_PTR_SET_VALUE(fileSystemName_, fileSystemName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeFileSystemsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeFileSystemsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the region.
    shared_ptr<string> ensRegionId_ {};
    // The ID of the file system.
    shared_ptr<string> fileSystemId_ {};
    // The name of the file system.
    shared_ptr<string> fileSystemName_ {};
    // The page number. Pages start from page **1**. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Maximum value: **100**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

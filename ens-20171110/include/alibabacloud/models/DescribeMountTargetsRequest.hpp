// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeMountTargetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountTargetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(MountTargetName, mountTargetName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountTargetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(MountTargetName, mountTargetName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeMountTargetsRequest() = default ;
    DescribeMountTargetsRequest(const DescribeMountTargetsRequest &) = default ;
    DescribeMountTargetsRequest(DescribeMountTargetsRequest &&) = default ;
    DescribeMountTargetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountTargetsRequest() = default ;
    DescribeMountTargetsRequest& operator=(const DescribeMountTargetsRequest &) = default ;
    DescribeMountTargetsRequest& operator=(DescribeMountTargetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensRegionId_ != nullptr
        && this->fileSystemId_ != nullptr && this->mountTargetName_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeMountTargetsRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeMountTargetsRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // mountTargetName Field Functions 
    bool hasMountTargetName() const { return this->mountTargetName_ != nullptr;};
    void deleteMountTargetName() { this->mountTargetName_ = nullptr;};
    inline string mountTargetName() const { DARABONBA_PTR_GET_DEFAULT(mountTargetName_, "") };
    inline DescribeMountTargetsRequest& setMountTargetName(string mountTargetName) { DARABONBA_PTR_SET_VALUE(mountTargetName_, mountTargetName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMountTargetsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMountTargetsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The ID of the file system.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The name of the mount target.
    std::shared_ptr<string> mountTargetName_ = nullptr;
    // The number of the page to return. Pages start from page 1. Default value: 1
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page. Maximum value: 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

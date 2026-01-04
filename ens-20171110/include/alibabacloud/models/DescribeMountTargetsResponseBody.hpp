// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeMountTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MountTargets, mountTargets_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MountTargets, mountTargets_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeMountTargetsResponseBody() = default ;
    DescribeMountTargetsResponseBody(const DescribeMountTargetsResponseBody &) = default ;
    DescribeMountTargetsResponseBody(DescribeMountTargetsResponseBody &&) = default ;
    DescribeMountTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountTargetsResponseBody() = default ;
    DescribeMountTargetsResponseBody& operator=(const DescribeMountTargetsResponseBody &) = default ;
    DescribeMountTargetsResponseBody& operator=(DescribeMountTargetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MountTargets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MountTargets& obj) { 
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
        DARABONBA_PTR_TO_JSON(MountTargetName, mountTargetName_);
        DARABONBA_PTR_TO_JSON(NetWorkId, netWorkId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, MountTargets& obj) { 
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_FROM_JSON(MountTargetDomain, mountTargetDomain_);
        DARABONBA_PTR_FROM_JSON(MountTargetName, mountTargetName_);
        DARABONBA_PTR_FROM_JSON(NetWorkId, netWorkId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      MountTargets() = default ;
      MountTargets(const MountTargets &) = default ;
      MountTargets(MountTargets &&) = default ;
      MountTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MountTargets() = default ;
      MountTargets& operator=(const MountTargets &) = default ;
      MountTargets& operator=(MountTargets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ensRegionId_ == nullptr
        && this->fileSystemId_ == nullptr && this->mountTargetDomain_ == nullptr && this->mountTargetName_ == nullptr && this->netWorkId_ == nullptr && this->status_ == nullptr; };
      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline MountTargets& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline MountTargets& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // mountTargetDomain Field Functions 
      bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
      void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
      inline string getMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
      inline MountTargets& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


      // mountTargetName Field Functions 
      bool hasMountTargetName() const { return this->mountTargetName_ != nullptr;};
      void deleteMountTargetName() { this->mountTargetName_ = nullptr;};
      inline string getMountTargetName() const { DARABONBA_PTR_GET_DEFAULT(mountTargetName_, "") };
      inline MountTargets& setMountTargetName(string mountTargetName) { DARABONBA_PTR_SET_VALUE(mountTargetName_, mountTargetName) };


      // netWorkId Field Functions 
      bool hasNetWorkId() const { return this->netWorkId_ != nullptr;};
      void deleteNetWorkId() { this->netWorkId_ = nullptr;};
      inline string getNetWorkId() const { DARABONBA_PTR_GET_DEFAULT(netWorkId_, "") };
      inline MountTargets& setNetWorkId(string netWorkId) { DARABONBA_PTR_SET_VALUE(netWorkId_, netWorkId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline MountTargets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the region.
      shared_ptr<string> ensRegionId_ {};
      // The ID of the file system.
      shared_ptr<string> fileSystemId_ {};
      // The path of the mount target.
      shared_ptr<string> mountTargetDomain_ {};
      // The name of the mount target.
      shared_ptr<string> mountTargetName_ {};
      // The ID of the network.
      shared_ptr<string> netWorkId_ {};
      // The state of the mount target. Valid values:
      // 
      // *   active: The mount target is available.
      // *   inactive: The mount target is unavailable.
      // *   pending: A task is being queued for the mount target.
      // *   deleting: The mount target is being deleted.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->mountTargets_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // mountTargets Field Functions 
    bool hasMountTargets() const { return this->mountTargets_ != nullptr;};
    void deleteMountTargets() { this->mountTargets_ = nullptr;};
    inline const vector<DescribeMountTargetsResponseBody::MountTargets> & getMountTargets() const { DARABONBA_PTR_GET_CONST(mountTargets_, vector<DescribeMountTargetsResponseBody::MountTargets>) };
    inline vector<DescribeMountTargetsResponseBody::MountTargets> getMountTargets() { DARABONBA_PTR_GET(mountTargets_, vector<DescribeMountTargetsResponseBody::MountTargets>) };
    inline DescribeMountTargetsResponseBody& setMountTargets(const vector<DescribeMountTargetsResponseBody::MountTargets> & mountTargets) { DARABONBA_PTR_SET_VALUE(mountTargets_, mountTargets) };
    inline DescribeMountTargetsResponseBody& setMountTargets(vector<DescribeMountTargetsResponseBody::MountTargets> && mountTargets) { DARABONBA_PTR_SET_RVALUE(mountTargets_, mountTargets) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMountTargetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMountTargetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMountTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeMountTargetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about mount targets.
    shared_ptr<vector<DescribeMountTargetsResponseBody::MountTargets>> mountTargets_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of mount targets.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

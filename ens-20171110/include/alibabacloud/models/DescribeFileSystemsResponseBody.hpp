// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODY_HPP_
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
  class DescribeFileSystemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystems, fileSystems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystems, fileSystems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeFileSystemsResponseBody() = default ;
    DescribeFileSystemsResponseBody(const DescribeFileSystemsResponseBody &) = default ;
    DescribeFileSystemsResponseBody(DescribeFileSystemsResponseBody &&) = default ;
    DescribeFileSystemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsResponseBody() = default ;
    DescribeFileSystemsResponseBody& operator=(const DescribeFileSystemsResponseBody &) = default ;
    DescribeFileSystemsResponseBody& operator=(DescribeFileSystemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FileSystems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileSystems& obj) { 
        DARABONBA_PTR_TO_JSON(Capacity, capacity_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_TO_JSON(FileSystemName, fileSystemName_);
        DARABONBA_PTR_TO_JSON(MeteredSize, meteredSize_);
        DARABONBA_PTR_TO_JSON(MountTargets, mountTargets_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      };
      friend void from_json(const Darabonba::Json& j, FileSystems& obj) { 
        DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_FROM_JSON(FileSystemName, fileSystemName_);
        DARABONBA_PTR_FROM_JSON(MeteredSize, meteredSize_);
        DARABONBA_PTR_FROM_JSON(MountTargets, mountTargets_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      };
      FileSystems() = default ;
      FileSystems(const FileSystems &) = default ;
      FileSystems(FileSystems &&) = default ;
      FileSystems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileSystems() = default ;
      FileSystems& operator=(const FileSystems &) = default ;
      FileSystems& operator=(FileSystems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MountTargets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MountTargets& obj) { 
          DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
          DARABONBA_PTR_TO_JSON(MountTargetName, mountTargetName_);
          DARABONBA_PTR_TO_JSON(NetWorkId, netWorkId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, MountTargets& obj) { 
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
        virtual bool empty() const override { return this->mountTargetDomain_ == nullptr
        && this->mountTargetName_ == nullptr && this->netWorkId_ == nullptr && this->status_ == nullptr; };
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
        // The path of the mount target.
        shared_ptr<string> mountTargetDomain_ {};
        // The name of the mount target.
        shared_ptr<string> mountTargetName_ {};
        // The ID of the network.
        shared_ptr<string> netWorkId_ {};
        // The status of the mount target. Valid values:
        // 
        // *   active: The mount target is available.
        // *   inactive: The mount target is unavailable.
        // *   pending: The task is running.
        // *   deleting: The mount target is being deleted.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->capacity_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->ensRegionId_ == nullptr && this->fileSystemId_ == nullptr && this->fileSystemName_ == nullptr
        && this->meteredSize_ == nullptr && this->mountTargets_ == nullptr && this->payType_ == nullptr && this->protocolType_ == nullptr && this->status_ == nullptr
        && this->storageType_ == nullptr; };
      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
      inline FileSystems& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline FileSystems& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline FileSystems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline FileSystems& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline FileSystems& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // fileSystemName Field Functions 
      bool hasFileSystemName() const { return this->fileSystemName_ != nullptr;};
      void deleteFileSystemName() { this->fileSystemName_ = nullptr;};
      inline string getFileSystemName() const { DARABONBA_PTR_GET_DEFAULT(fileSystemName_, "") };
      inline FileSystems& setFileSystemName(string fileSystemName) { DARABONBA_PTR_SET_VALUE(fileSystemName_, fileSystemName) };


      // meteredSize Field Functions 
      bool hasMeteredSize() const { return this->meteredSize_ != nullptr;};
      void deleteMeteredSize() { this->meteredSize_ = nullptr;};
      inline int64_t getMeteredSize() const { DARABONBA_PTR_GET_DEFAULT(meteredSize_, 0L) };
      inline FileSystems& setMeteredSize(int64_t meteredSize) { DARABONBA_PTR_SET_VALUE(meteredSize_, meteredSize) };


      // mountTargets Field Functions 
      bool hasMountTargets() const { return this->mountTargets_ != nullptr;};
      void deleteMountTargets() { this->mountTargets_ = nullptr;};
      inline const vector<FileSystems::MountTargets> & getMountTargets() const { DARABONBA_PTR_GET_CONST(mountTargets_, vector<FileSystems::MountTargets>) };
      inline vector<FileSystems::MountTargets> getMountTargets() { DARABONBA_PTR_GET(mountTargets_, vector<FileSystems::MountTargets>) };
      inline FileSystems& setMountTargets(const vector<FileSystems::MountTargets> & mountTargets) { DARABONBA_PTR_SET_VALUE(mountTargets_, mountTargets) };
      inline FileSystems& setMountTargets(vector<FileSystems::MountTargets> && mountTargets) { DARABONBA_PTR_SET_RVALUE(mountTargets_, mountTargets) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline FileSystems& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline FileSystems& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline FileSystems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline FileSystems& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    protected:
      // The capacity of the file system. Unit: MiB.
      shared_ptr<int64_t> capacity_ {};
      // The time when the file system was created.
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> description_ {};
      // The ID of the region.
      shared_ptr<string> ensRegionId_ {};
      // The ID of the file system.
      shared_ptr<string> fileSystemId_ {};
      // The name of the file system.
      shared_ptr<string> fileSystemName_ {};
      // The storage usage of the file system. The value of this parameter is the maximum storage usage of the file system over the last hour. Unit: bytes.
      shared_ptr<int64_t> meteredSize_ {};
      // The information about mount targets.
      shared_ptr<vector<FileSystems::MountTargets>> mountTargets_ {};
      // The billing method. PostPaid is returned. PostPaid indicates the pay-as-you-go billing method.
      shared_ptr<string> payType_ {};
      // The protocol type of the file system. Valid values:
      // 
      // *   NFS: Network File System (NFS)
      // *   SMB: Server Message Block (SMB)
      shared_ptr<string> protocolType_ {};
      // The status of the file system. Valid values:
      // 
      // *   pending: The file system is being created or modified.
      // *   running: The file system is available. Before you create a mount target for the file system, make sure that the file system is in the running state.
      // *   stopped: The file system is unavailable.
      // *   extending: The file system is being scaled out.
      // *   stopping: The file system is being disabled.
      // *   deleting: The file system is being deleted.
      shared_ptr<string> status_ {};
      // The storage type. Valid values:
      // 
      // *   capacity: Capacity NAS file systems
      // *   performance: Performance NAS file systems
      shared_ptr<string> storageType_ {};
    };

    virtual bool empty() const override { return this->fileSystems_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // fileSystems Field Functions 
    bool hasFileSystems() const { return this->fileSystems_ != nullptr;};
    void deleteFileSystems() { this->fileSystems_ = nullptr;};
    inline const vector<DescribeFileSystemsResponseBody::FileSystems> & getFileSystems() const { DARABONBA_PTR_GET_CONST(fileSystems_, vector<DescribeFileSystemsResponseBody::FileSystems>) };
    inline vector<DescribeFileSystemsResponseBody::FileSystems> getFileSystems() { DARABONBA_PTR_GET(fileSystems_, vector<DescribeFileSystemsResponseBody::FileSystems>) };
    inline DescribeFileSystemsResponseBody& setFileSystems(const vector<DescribeFileSystemsResponseBody::FileSystems> & fileSystems) { DARABONBA_PTR_SET_VALUE(fileSystems_, fileSystems) };
    inline DescribeFileSystemsResponseBody& setFileSystems(vector<DescribeFileSystemsResponseBody::FileSystems> && fileSystems) { DARABONBA_PTR_SET_RVALUE(fileSystems_, fileSystems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeFileSystemsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeFileSystemsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFileSystemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeFileSystemsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the file systems.
    shared_ptr<vector<DescribeFileSystemsResponseBody::FileSystems>> fileSystems_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

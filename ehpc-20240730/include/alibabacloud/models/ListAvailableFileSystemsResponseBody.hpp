// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEFILESYSTEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEFILESYSTEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListAvailableFileSystemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableFileSystemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemList, fileSystemList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableFileSystemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemList, fileSystemList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAvailableFileSystemsResponseBody() = default ;
    ListAvailableFileSystemsResponseBody(const ListAvailableFileSystemsResponseBody &) = default ;
    ListAvailableFileSystemsResponseBody(ListAvailableFileSystemsResponseBody &&) = default ;
    ListAvailableFileSystemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableFileSystemsResponseBody() = default ;
    ListAvailableFileSystemsResponseBody& operator=(const ListAvailableFileSystemsResponseBody &) = default ;
    ListAvailableFileSystemsResponseBody& operator=(ListAvailableFileSystemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FileSystemList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileSystemList& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
        DARABONBA_PTR_TO_JSON(MountTargetList, mountTargetList_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, FileSystemList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
        DARABONBA_PTR_FROM_JSON(MountTargetList, mountTargetList_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      FileSystemList() = default ;
      FileSystemList(const FileSystemList &) = default ;
      FileSystemList(FileSystemList &&) = default ;
      FileSystemList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileSystemList() = default ;
      FileSystemList& operator=(const FileSystemList &) = default ;
      FileSystemList& operator=(FileSystemList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MountTargetList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MountTargetList& obj) { 
          DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, MountTargetList& obj) { 
          DARABONBA_PTR_FROM_JSON(MountTargetDomain, mountTargetDomain_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        MountTargetList() = default ;
        MountTargetList(const MountTargetList &) = default ;
        MountTargetList(MountTargetList &&) = default ;
        MountTargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MountTargetList() = default ;
        MountTargetList& operator=(const MountTargetList &) = default ;
        MountTargetList& operator=(MountTargetList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mountTargetDomain_ == nullptr
        && this->networkType_ == nullptr && this->status_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
        // mountTargetDomain Field Functions 
        bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
        void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
        inline string getMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
        inline MountTargetList& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline MountTargetList& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline MountTargetList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline MountTargetList& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline MountTargetList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The address of the mount target.
        shared_ptr<string> mountTargetDomain_ {};
        // The network type. Valid values: Valid values:
        // 
        // *   vpc
        shared_ptr<string> networkType_ {};
        // The state of the mount target. Valid values:
        // 
        // *   Active: The mount target is available.
        // *   Inactive: The mount target is unavailable.
        // *   Pending: The mount target is being mounted.
        // *   Deleting: The mount target is being deleted.
        shared_ptr<string> status_ {};
        // The vSwitch ID.
        shared_ptr<string> vSwitchId_ {};
        // The virtual private cloud (VPC) ID.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->fileSystemId_ == nullptr && this->fileSystemType_ == nullptr && this->mountTargetList_ == nullptr && this->protocolType_ == nullptr && this->status_ == nullptr
        && this->storageType_ == nullptr && this->vpcId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline FileSystemList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline FileSystemList& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // fileSystemType Field Functions 
      bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
      void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
      inline string getFileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
      inline FileSystemList& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


      // mountTargetList Field Functions 
      bool hasMountTargetList() const { return this->mountTargetList_ != nullptr;};
      void deleteMountTargetList() { this->mountTargetList_ = nullptr;};
      inline const vector<FileSystemList::MountTargetList> & getMountTargetList() const { DARABONBA_PTR_GET_CONST(mountTargetList_, vector<FileSystemList::MountTargetList>) };
      inline vector<FileSystemList::MountTargetList> getMountTargetList() { DARABONBA_PTR_GET(mountTargetList_, vector<FileSystemList::MountTargetList>) };
      inline FileSystemList& setMountTargetList(const vector<FileSystemList::MountTargetList> & mountTargetList) { DARABONBA_PTR_SET_VALUE(mountTargetList_, mountTargetList) };
      inline FileSystemList& setMountTargetList(vector<FileSystemList::MountTargetList> && mountTargetList) { DARABONBA_PTR_SET_RVALUE(mountTargetList_, mountTargetList) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline FileSystemList& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline FileSystemList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline FileSystemList& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline FileSystemList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The time when the file system was created.
      shared_ptr<string> createTime_ {};
      // The ID of the file system.
      shared_ptr<string> fileSystemId_ {};
      // The type of the file system. Valid values:
      // 
      // *   standard: general-purpose network-attached storage (NAS) file system
      // *   extreme: extreme NAS file system
      shared_ptr<string> fileSystemType_ {};
      // The mount targets of the file system.
      shared_ptr<vector<FileSystemList::MountTargetList>> mountTargetList_ {};
      // The protocol type of the file system. Valid values:
      // 
      // *   nfs
      // *   smb
      // *   cpfs
      shared_ptr<string> protocolType_ {};
      // The state of the file system. Valid values:
      // 
      // *   Pending: The file system is processing a task.
      // *   Running: The file system is available. You can perform subsequent operations, such as creating a mount target, only when the file system is in the Running state.
      // *   Stopped: The file system is unavailable.
      // *   Extending: The file system is being scaled out.
      // *   Stopping: The file system is being stopped.
      // *   Deleting: The file system is being deleted.
      shared_ptr<string> status_ {};
      // The storage type of the file system.
      // 
      // *   Valid values if FileSystemType is set to standard: Capacity and Performance.
      // *   Valid values if FileSystemType is set to extreme: standard and advance.
      shared_ptr<string> storageType_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->fileSystemList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // fileSystemList Field Functions 
    bool hasFileSystemList() const { return this->fileSystemList_ != nullptr;};
    void deleteFileSystemList() { this->fileSystemList_ = nullptr;};
    inline const vector<ListAvailableFileSystemsResponseBody::FileSystemList> & getFileSystemList() const { DARABONBA_PTR_GET_CONST(fileSystemList_, vector<ListAvailableFileSystemsResponseBody::FileSystemList>) };
    inline vector<ListAvailableFileSystemsResponseBody::FileSystemList> getFileSystemList() { DARABONBA_PTR_GET(fileSystemList_, vector<ListAvailableFileSystemsResponseBody::FileSystemList>) };
    inline ListAvailableFileSystemsResponseBody& setFileSystemList(const vector<ListAvailableFileSystemsResponseBody::FileSystemList> & fileSystemList) { DARABONBA_PTR_SET_VALUE(fileSystemList_, fileSystemList) };
    inline ListAvailableFileSystemsResponseBody& setFileSystemList(vector<ListAvailableFileSystemsResponseBody::FileSystemList> && fileSystemList) { DARABONBA_PTR_SET_RVALUE(fileSystemList_, fileSystemList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAvailableFileSystemsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAvailableFileSystemsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAvailableFileSystemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAvailableFileSystemsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The file systems.
    shared_ptr<vector<ListAvailableFileSystemsResponseBody::FileSystemList>> fileSystemList_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif

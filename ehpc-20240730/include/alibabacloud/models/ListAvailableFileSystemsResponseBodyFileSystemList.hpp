// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEFILESYSTEMSRESPONSEBODYFILESYSTEMLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEFILESYSTEMSRESPONSEBODYFILESYSTEMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListAvailableFileSystemsResponseBodyFileSystemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableFileSystemsResponseBodyFileSystemList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_TO_JSON(MountTargetList, mountTargetList_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableFileSystemsResponseBodyFileSystemList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_FROM_JSON(MountTargetList, mountTargetList_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListAvailableFileSystemsResponseBodyFileSystemList() = default ;
    ListAvailableFileSystemsResponseBodyFileSystemList(const ListAvailableFileSystemsResponseBodyFileSystemList &) = default ;
    ListAvailableFileSystemsResponseBodyFileSystemList(ListAvailableFileSystemsResponseBodyFileSystemList &&) = default ;
    ListAvailableFileSystemsResponseBodyFileSystemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableFileSystemsResponseBodyFileSystemList() = default ;
    ListAvailableFileSystemsResponseBodyFileSystemList& operator=(const ListAvailableFileSystemsResponseBodyFileSystemList &) = default ;
    ListAvailableFileSystemsResponseBodyFileSystemList& operator=(ListAvailableFileSystemsResponseBodyFileSystemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->fileSystemId_ == nullptr && return this->fileSystemType_ == nullptr && return this->mountTargetList_ == nullptr && return this->protocolType_ == nullptr && return this->status_ == nullptr
        && return this->storageType_ == nullptr && return this->vpcId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAvailableFileSystemsResponseBodyFileSystemList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ListAvailableFileSystemsResponseBodyFileSystemList& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string fileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline ListAvailableFileSystemsResponseBodyFileSystemList& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // mountTargetList Field Functions 
    bool hasMountTargetList() const { return this->mountTargetList_ != nullptr;};
    void deleteMountTargetList() { this->mountTargetList_ = nullptr;};
    inline const vector<Models::ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList> & mountTargetList() const { DARABONBA_PTR_GET_CONST(mountTargetList_, vector<Models::ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList>) };
    inline vector<Models::ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList> mountTargetList() { DARABONBA_PTR_GET(mountTargetList_, vector<Models::ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList>) };
    inline ListAvailableFileSystemsResponseBodyFileSystemList& setMountTargetList(const vector<Models::ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList> & mountTargetList) { DARABONBA_PTR_SET_VALUE(mountTargetList_, mountTargetList) };
    inline ListAvailableFileSystemsResponseBodyFileSystemList& setMountTargetList(vector<Models::ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList> && mountTargetList) { DARABONBA_PTR_SET_RVALUE(mountTargetList_, mountTargetList) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline ListAvailableFileSystemsResponseBodyFileSystemList& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAvailableFileSystemsResponseBodyFileSystemList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ListAvailableFileSystemsResponseBodyFileSystemList& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListAvailableFileSystemsResponseBodyFileSystemList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The time when the file system was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The type of the file system. Valid values:
    // 
    // *   standard: general-purpose network-attached storage (NAS) file system
    // *   extreme: extreme NAS file system
    std::shared_ptr<string> fileSystemType_ = nullptr;
    // The mount targets of the file system.
    std::shared_ptr<vector<Models::ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList>> mountTargetList_ = nullptr;
    // The protocol type of the file system. Valid values:
    // 
    // *   nfs
    // *   smb
    // *   cpfs
    std::shared_ptr<string> protocolType_ = nullptr;
    // The state of the file system. Valid values:
    // 
    // *   Pending: The file system is processing a task.
    // *   Running: The file system is available. You can perform subsequent operations, such as creating a mount target, only when the file system is in the Running state.
    // *   Stopped: The file system is unavailable.
    // *   Extending: The file system is being scaled out.
    // *   Stopping: The file system is being stopped.
    // *   Deleting: The file system is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The storage type of the file system.
    // 
    // *   Valid values if FileSystemType is set to standard: Capacity and Performance.
    // *   Valid values if FileSystemType is set to extreme: standard and advance.
    std::shared_ptr<string> storageType_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif

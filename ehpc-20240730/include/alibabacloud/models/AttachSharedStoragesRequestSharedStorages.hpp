// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHSHAREDSTORAGESREQUESTSHAREDSTORAGES_HPP_
#define ALIBABACLOUD_MODELS_ATTACHSHAREDSTORAGESREQUESTSHAREDSTORAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class AttachSharedStoragesRequestSharedStorages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachSharedStoragesRequestSharedStorages& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(MountDirectory, mountDirectory_);
      DARABONBA_PTR_TO_JSON(MountOptions, mountOptions_);
      DARABONBA_PTR_TO_JSON(MountTarget, mountTarget_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(StorageDirectory, storageDirectory_);
      DARABONBA_PTR_TO_JSON(VolumeType, volumeType_);
    };
    friend void from_json(const Darabonba::Json& j, AttachSharedStoragesRequestSharedStorages& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(MountDirectory, mountDirectory_);
      DARABONBA_PTR_FROM_JSON(MountOptions, mountOptions_);
      DARABONBA_PTR_FROM_JSON(MountTarget, mountTarget_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(StorageDirectory, storageDirectory_);
      DARABONBA_PTR_FROM_JSON(VolumeType, volumeType_);
    };
    AttachSharedStoragesRequestSharedStorages() = default ;
    AttachSharedStoragesRequestSharedStorages(const AttachSharedStoragesRequestSharedStorages &) = default ;
    AttachSharedStoragesRequestSharedStorages(AttachSharedStoragesRequestSharedStorages &&) = default ;
    AttachSharedStoragesRequestSharedStorages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachSharedStoragesRequestSharedStorages() = default ;
    AttachSharedStoragesRequestSharedStorages& operator=(const AttachSharedStoragesRequestSharedStorages &) = default ;
    AttachSharedStoragesRequestSharedStorages& operator=(AttachSharedStoragesRequestSharedStorages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && return this->location_ == nullptr && return this->mountDirectory_ == nullptr && return this->mountOptions_ == nullptr && return this->mountTarget_ == nullptr && return this->protocolType_ == nullptr
        && return this->storageDirectory_ == nullptr && return this->volumeType_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline AttachSharedStoragesRequestSharedStorages& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline AttachSharedStoragesRequestSharedStorages& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // mountDirectory Field Functions 
    bool hasMountDirectory() const { return this->mountDirectory_ != nullptr;};
    void deleteMountDirectory() { this->mountDirectory_ = nullptr;};
    inline string mountDirectory() const { DARABONBA_PTR_GET_DEFAULT(mountDirectory_, "") };
    inline AttachSharedStoragesRequestSharedStorages& setMountDirectory(string mountDirectory) { DARABONBA_PTR_SET_VALUE(mountDirectory_, mountDirectory) };


    // mountOptions Field Functions 
    bool hasMountOptions() const { return this->mountOptions_ != nullptr;};
    void deleteMountOptions() { this->mountOptions_ = nullptr;};
    inline string mountOptions() const { DARABONBA_PTR_GET_DEFAULT(mountOptions_, "") };
    inline AttachSharedStoragesRequestSharedStorages& setMountOptions(string mountOptions) { DARABONBA_PTR_SET_VALUE(mountOptions_, mountOptions) };


    // mountTarget Field Functions 
    bool hasMountTarget() const { return this->mountTarget_ != nullptr;};
    void deleteMountTarget() { this->mountTarget_ = nullptr;};
    inline string mountTarget() const { DARABONBA_PTR_GET_DEFAULT(mountTarget_, "") };
    inline AttachSharedStoragesRequestSharedStorages& setMountTarget(string mountTarget) { DARABONBA_PTR_SET_VALUE(mountTarget_, mountTarget) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline AttachSharedStoragesRequestSharedStorages& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // storageDirectory Field Functions 
    bool hasStorageDirectory() const { return this->storageDirectory_ != nullptr;};
    void deleteStorageDirectory() { this->storageDirectory_ = nullptr;};
    inline string storageDirectory() const { DARABONBA_PTR_GET_DEFAULT(storageDirectory_, "") };
    inline AttachSharedStoragesRequestSharedStorages& setStorageDirectory(string storageDirectory) { DARABONBA_PTR_SET_VALUE(storageDirectory_, storageDirectory) };


    // volumeType Field Functions 
    bool hasVolumeType() const { return this->volumeType_ != nullptr;};
    void deleteVolumeType() { this->volumeType_ = nullptr;};
    inline string volumeType() const { DARABONBA_PTR_GET_DEFAULT(volumeType_, "") };
    inline AttachSharedStoragesRequestSharedStorages& setVolumeType(string volumeType) { DARABONBA_PTR_SET_VALUE(volumeType_, volumeType) };


  protected:
    // The ID of the file system to be attached.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The storage location of the file system to be attached. Valid values:
    // 
    // *   OnPremise: The file system is deployed on a hybrid cloud.
    // *   PublicCloud: The file system is deployed on a public cloud.
    std::shared_ptr<string> location_ = nullptr;
    // The local mount directory of the file system that you want to attach.
    // 
    // This parameter is required.
    std::shared_ptr<string> mountDirectory_ = nullptr;
    // The attaching options of the file system to be attached. Valid values:
    // 
    // *   \\-t nfs -o vers=3,nolock,proto=tcp,noresvport
    // *   \\-t nfs -o vers=4.0,noresvport
    // 
    // Default value:-t nfs -o vers=3,nolock,proto=tcp,noresvport
    // 
    // >  The v3 version is recommended for higher performance if multiple Elastic Compute Service (ECS) instances do not edit the same file at the same time.
    std::shared_ptr<string> mountOptions_ = nullptr;
    // The address of the mount point of the file system to be attached.
    // 
    // This parameter is required.
    std::shared_ptr<string> mountTarget_ = nullptr;
    // The protocol type of the file system to be attached. Valid values:
    // 
    // *   NFS
    // *   SMB
    // 
    // This parameter is required.
    std::shared_ptr<string> protocolType_ = nullptr;
    // The storage directory of the file system. You can mount any directory in the file system to the specified cluster directory.
    // 
    // This parameter is required.
    std::shared_ptr<string> storageDirectory_ = nullptr;
    // The type of the file system to be attached. Valid values:
    // 
    // *   nas
    // *   cpfs
    // 
    // This parameter is required.
    std::shared_ptr<string> volumeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHSHAREDSTORAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHSHAREDSTORAGESREQUEST_HPP_
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
  class AttachSharedStoragesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachSharedStoragesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(SharedStorages, sharedStorages_);
    };
    friend void from_json(const Darabonba::Json& j, AttachSharedStoragesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(SharedStorages, sharedStorages_);
    };
    AttachSharedStoragesRequest() = default ;
    AttachSharedStoragesRequest(const AttachSharedStoragesRequest &) = default ;
    AttachSharedStoragesRequest(AttachSharedStoragesRequest &&) = default ;
    AttachSharedStoragesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachSharedStoragesRequest() = default ;
    AttachSharedStoragesRequest& operator=(const AttachSharedStoragesRequest &) = default ;
    AttachSharedStoragesRequest& operator=(AttachSharedStoragesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SharedStorages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SharedStorages& obj) { 
        DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(MountDirectory, mountDirectory_);
        DARABONBA_PTR_TO_JSON(MountOptions, mountOptions_);
        DARABONBA_PTR_TO_JSON(MountTarget, mountTarget_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(StorageDirectory, storageDirectory_);
        DARABONBA_PTR_TO_JSON(VolumeType, volumeType_);
      };
      friend void from_json(const Darabonba::Json& j, SharedStorages& obj) { 
        DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(MountDirectory, mountDirectory_);
        DARABONBA_PTR_FROM_JSON(MountOptions, mountOptions_);
        DARABONBA_PTR_FROM_JSON(MountTarget, mountTarget_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(StorageDirectory, storageDirectory_);
        DARABONBA_PTR_FROM_JSON(VolumeType, volumeType_);
      };
      SharedStorages() = default ;
      SharedStorages(const SharedStorages &) = default ;
      SharedStorages(SharedStorages &&) = default ;
      SharedStorages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SharedStorages() = default ;
      SharedStorages& operator=(const SharedStorages &) = default ;
      SharedStorages& operator=(SharedStorages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->location_ == nullptr && this->mountDirectory_ == nullptr && this->mountOptions_ == nullptr && this->mountTarget_ == nullptr && this->protocolType_ == nullptr
        && this->storageDirectory_ == nullptr && this->volumeType_ == nullptr; };
      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline SharedStorages& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline SharedStorages& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // mountDirectory Field Functions 
      bool hasMountDirectory() const { return this->mountDirectory_ != nullptr;};
      void deleteMountDirectory() { this->mountDirectory_ = nullptr;};
      inline string getMountDirectory() const { DARABONBA_PTR_GET_DEFAULT(mountDirectory_, "") };
      inline SharedStorages& setMountDirectory(string mountDirectory) { DARABONBA_PTR_SET_VALUE(mountDirectory_, mountDirectory) };


      // mountOptions Field Functions 
      bool hasMountOptions() const { return this->mountOptions_ != nullptr;};
      void deleteMountOptions() { this->mountOptions_ = nullptr;};
      inline string getMountOptions() const { DARABONBA_PTR_GET_DEFAULT(mountOptions_, "") };
      inline SharedStorages& setMountOptions(string mountOptions) { DARABONBA_PTR_SET_VALUE(mountOptions_, mountOptions) };


      // mountTarget Field Functions 
      bool hasMountTarget() const { return this->mountTarget_ != nullptr;};
      void deleteMountTarget() { this->mountTarget_ = nullptr;};
      inline string getMountTarget() const { DARABONBA_PTR_GET_DEFAULT(mountTarget_, "") };
      inline SharedStorages& setMountTarget(string mountTarget) { DARABONBA_PTR_SET_VALUE(mountTarget_, mountTarget) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline SharedStorages& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // storageDirectory Field Functions 
      bool hasStorageDirectory() const { return this->storageDirectory_ != nullptr;};
      void deleteStorageDirectory() { this->storageDirectory_ = nullptr;};
      inline string getStorageDirectory() const { DARABONBA_PTR_GET_DEFAULT(storageDirectory_, "") };
      inline SharedStorages& setStorageDirectory(string storageDirectory) { DARABONBA_PTR_SET_VALUE(storageDirectory_, storageDirectory) };


      // volumeType Field Functions 
      bool hasVolumeType() const { return this->volumeType_ != nullptr;};
      void deleteVolumeType() { this->volumeType_ = nullptr;};
      inline string getVolumeType() const { DARABONBA_PTR_GET_DEFAULT(volumeType_, "") };
      inline SharedStorages& setVolumeType(string volumeType) { DARABONBA_PTR_SET_VALUE(volumeType_, volumeType) };


    protected:
      // The ID of the file system to be attached.
      // 
      // This parameter is required.
      shared_ptr<string> fileSystemId_ {};
      // The storage location of the file system to be attached. Valid values:
      // 
      // *   OnPremise: The file system is deployed on a hybrid cloud.
      // *   PublicCloud: The file system is deployed on a public cloud.
      shared_ptr<string> location_ {};
      // The local mount directory of the file system that you want to attach.
      // 
      // This parameter is required.
      shared_ptr<string> mountDirectory_ {};
      // The attaching options of the file system to be attached. Valid values:
      // 
      // *   \\-t nfs -o vers=3,nolock,proto=tcp,noresvport
      // *   \\-t nfs -o vers=4.0,noresvport
      // 
      // Default value:-t nfs -o vers=3,nolock,proto=tcp,noresvport
      // 
      // >  The v3 version is recommended for higher performance if multiple Elastic Compute Service (ECS) instances do not edit the same file at the same time.
      shared_ptr<string> mountOptions_ {};
      // The address of the mount point of the file system to be attached.
      // 
      // This parameter is required.
      shared_ptr<string> mountTarget_ {};
      // The protocol type of the file system to be attached. Valid values:
      // 
      // *   NFS
      // *   SMB
      // 
      // This parameter is required.
      shared_ptr<string> protocolType_ {};
      // The storage directory of the file system. You can mount any directory in the file system to the specified cluster directory.
      // 
      // This parameter is required.
      shared_ptr<string> storageDirectory_ {};
      // The type of the file system to be attached. Valid values:
      // 
      // *   nas
      // *   cpfs
      // 
      // This parameter is required.
      shared_ptr<string> volumeType_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->sharedStorages_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline AttachSharedStoragesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // sharedStorages Field Functions 
    bool hasSharedStorages() const { return this->sharedStorages_ != nullptr;};
    void deleteSharedStorages() { this->sharedStorages_ = nullptr;};
    inline const vector<AttachSharedStoragesRequest::SharedStorages> & getSharedStorages() const { DARABONBA_PTR_GET_CONST(sharedStorages_, vector<AttachSharedStoragesRequest::SharedStorages>) };
    inline vector<AttachSharedStoragesRequest::SharedStorages> getSharedStorages() { DARABONBA_PTR_GET(sharedStorages_, vector<AttachSharedStoragesRequest::SharedStorages>) };
    inline AttachSharedStoragesRequest& setSharedStorages(const vector<AttachSharedStoragesRequest::SharedStorages> & sharedStorages) { DARABONBA_PTR_SET_VALUE(sharedStorages_, sharedStorages) };
    inline AttachSharedStoragesRequest& setSharedStorages(vector<AttachSharedStoragesRequest::SharedStorages> && sharedStorages) { DARABONBA_PTR_SET_RVALUE(sharedStorages_, sharedStorages) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The information about the shared storage resources that you want to attach to the cluster.
    // 
    // This parameter is required.
    shared_ptr<vector<AttachSharedStoragesRequest::SharedStorages>> sharedStorages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHAREDSTORAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSHAREDSTORAGESRESPONSEBODY_HPP_
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
  class ListSharedStoragesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSharedStoragesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SharedStorages, sharedStorages_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSharedStoragesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SharedStorages, sharedStorages_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSharedStoragesResponseBody() = default ;
    ListSharedStoragesResponseBody(const ListSharedStoragesResponseBody &) = default ;
    ListSharedStoragesResponseBody(ListSharedStoragesResponseBody &&) = default ;
    ListSharedStoragesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSharedStoragesResponseBody() = default ;
    ListSharedStoragesResponseBody& operator=(const ListSharedStoragesResponseBody &) = default ;
    ListSharedStoragesResponseBody& operator=(ListSharedStoragesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SharedStorages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SharedStorages& obj) { 
        DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_TO_JSON(FileSystemProtocol, fileSystemProtocol_);
        DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
        DARABONBA_PTR_TO_JSON(MountInfo, mountInfo_);
      };
      friend void from_json(const Darabonba::Json& j, SharedStorages& obj) { 
        DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_FROM_JSON(FileSystemProtocol, fileSystemProtocol_);
        DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
        DARABONBA_PTR_FROM_JSON(MountInfo, mountInfo_);
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
      class MountInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MountInfo& obj) { 
          DARABONBA_PTR_TO_JSON(MountDirectory, mountDirectory_);
          DARABONBA_PTR_TO_JSON(MountOptions, mountOptions_);
          DARABONBA_PTR_TO_JSON(MountTarget, mountTarget_);
          DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
          DARABONBA_PTR_TO_JSON(StorageDirectory, storageDirectory_);
        };
        friend void from_json(const Darabonba::Json& j, MountInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(MountDirectory, mountDirectory_);
          DARABONBA_PTR_FROM_JSON(MountOptions, mountOptions_);
          DARABONBA_PTR_FROM_JSON(MountTarget, mountTarget_);
          DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
          DARABONBA_PTR_FROM_JSON(StorageDirectory, storageDirectory_);
        };
        MountInfo() = default ;
        MountInfo(const MountInfo &) = default ;
        MountInfo(MountInfo &&) = default ;
        MountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MountInfo() = default ;
        MountInfo& operator=(const MountInfo &) = default ;
        MountInfo& operator=(MountInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mountDirectory_ == nullptr
        && this->mountOptions_ == nullptr && this->mountTarget_ == nullptr && this->protocolType_ == nullptr && this->storageDirectory_ == nullptr; };
        // mountDirectory Field Functions 
        bool hasMountDirectory() const { return this->mountDirectory_ != nullptr;};
        void deleteMountDirectory() { this->mountDirectory_ = nullptr;};
        inline string getMountDirectory() const { DARABONBA_PTR_GET_DEFAULT(mountDirectory_, "") };
        inline MountInfo& setMountDirectory(string mountDirectory) { DARABONBA_PTR_SET_VALUE(mountDirectory_, mountDirectory) };


        // mountOptions Field Functions 
        bool hasMountOptions() const { return this->mountOptions_ != nullptr;};
        void deleteMountOptions() { this->mountOptions_ = nullptr;};
        inline string getMountOptions() const { DARABONBA_PTR_GET_DEFAULT(mountOptions_, "") };
        inline MountInfo& setMountOptions(string mountOptions) { DARABONBA_PTR_SET_VALUE(mountOptions_, mountOptions) };


        // mountTarget Field Functions 
        bool hasMountTarget() const { return this->mountTarget_ != nullptr;};
        void deleteMountTarget() { this->mountTarget_ = nullptr;};
        inline string getMountTarget() const { DARABONBA_PTR_GET_DEFAULT(mountTarget_, "") };
        inline MountInfo& setMountTarget(string mountTarget) { DARABONBA_PTR_SET_VALUE(mountTarget_, mountTarget) };


        // protocolType Field Functions 
        bool hasProtocolType() const { return this->protocolType_ != nullptr;};
        void deleteProtocolType() { this->protocolType_ = nullptr;};
        inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
        inline MountInfo& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


        // storageDirectory Field Functions 
        bool hasStorageDirectory() const { return this->storageDirectory_ != nullptr;};
        void deleteStorageDirectory() { this->storageDirectory_ = nullptr;};
        inline string getStorageDirectory() const { DARABONBA_PTR_GET_DEFAULT(storageDirectory_, "") };
        inline MountInfo& setStorageDirectory(string storageDirectory) { DARABONBA_PTR_SET_VALUE(storageDirectory_, storageDirectory) };


      protected:
        // The local mount directory of the attached file system.
        shared_ptr<string> mountDirectory_ {};
        // The mount options for the attached file system. Valid values:
        // 
        // *   \\-t nfs -o vers=3,nolock,proto=tcp,noresvport
        // *   \\-t nfs -o vers=4.0,noresvport
        shared_ptr<string> mountOptions_ {};
        // The mount target of the attached file system.
        shared_ptr<string> mountTarget_ {};
        // The protocol used by the mount target of the attached file system. Valid values:
        // 
        // *   nfs3
        // *   nfs4
        // *   cpfs
        shared_ptr<string> protocolType_ {};
        // The storage directory of the attached file system.
        shared_ptr<string> storageDirectory_ {};
      };

      virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->fileSystemProtocol_ == nullptr && this->fileSystemType_ == nullptr && this->mountInfo_ == nullptr; };
      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline SharedStorages& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // fileSystemProtocol Field Functions 
      bool hasFileSystemProtocol() const { return this->fileSystemProtocol_ != nullptr;};
      void deleteFileSystemProtocol() { this->fileSystemProtocol_ = nullptr;};
      inline string getFileSystemProtocol() const { DARABONBA_PTR_GET_DEFAULT(fileSystemProtocol_, "") };
      inline SharedStorages& setFileSystemProtocol(string fileSystemProtocol) { DARABONBA_PTR_SET_VALUE(fileSystemProtocol_, fileSystemProtocol) };


      // fileSystemType Field Functions 
      bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
      void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
      inline string getFileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
      inline SharedStorages& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


      // mountInfo Field Functions 
      bool hasMountInfo() const { return this->mountInfo_ != nullptr;};
      void deleteMountInfo() { this->mountInfo_ = nullptr;};
      inline const vector<SharedStorages::MountInfo> & getMountInfo() const { DARABONBA_PTR_GET_CONST(mountInfo_, vector<SharedStorages::MountInfo>) };
      inline vector<SharedStorages::MountInfo> getMountInfo() { DARABONBA_PTR_GET(mountInfo_, vector<SharedStorages::MountInfo>) };
      inline SharedStorages& setMountInfo(const vector<SharedStorages::MountInfo> & mountInfo) { DARABONBA_PTR_SET_VALUE(mountInfo_, mountInfo) };
      inline SharedStorages& setMountInfo(vector<SharedStorages::MountInfo> && mountInfo) { DARABONBA_PTR_SET_RVALUE(mountInfo_, mountInfo) };


    protected:
      // The ID of the attached file system.
      shared_ptr<string> fileSystemId_ {};
      // The protocol used by the attached file system. Valid values:
      // 
      // *   nfs3
      // *   nfs4
      // *   cpfs
      shared_ptr<string> fileSystemProtocol_ {};
      // The type of the attached file system. Valid values:
      // 
      // *   nas
      // *   cpfs
      shared_ptr<string> fileSystemType_ {};
      // The mount information.
      shared_ptr<vector<SharedStorages::MountInfo>> mountInfo_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sharedStorages_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSharedStoragesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sharedStorages Field Functions 
    bool hasSharedStorages() const { return this->sharedStorages_ != nullptr;};
    void deleteSharedStorages() { this->sharedStorages_ = nullptr;};
    inline const vector<ListSharedStoragesResponseBody::SharedStorages> & getSharedStorages() const { DARABONBA_PTR_GET_CONST(sharedStorages_, vector<ListSharedStoragesResponseBody::SharedStorages>) };
    inline vector<ListSharedStoragesResponseBody::SharedStorages> getSharedStorages() { DARABONBA_PTR_GET(sharedStorages_, vector<ListSharedStoragesResponseBody::SharedStorages>) };
    inline ListSharedStoragesResponseBody& setSharedStorages(const vector<ListSharedStoragesResponseBody::SharedStorages> & sharedStorages) { DARABONBA_PTR_SET_VALUE(sharedStorages_, sharedStorages) };
    inline ListSharedStoragesResponseBody& setSharedStorages(vector<ListSharedStoragesResponseBody::SharedStorages> && sharedStorages) { DARABONBA_PTR_SET_RVALUE(sharedStorages_, sharedStorages) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ListSharedStoragesResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the attached shared storage.
    shared_ptr<vector<ListSharedStoragesResponseBody::SharedStorages>> sharedStorages_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHAREDSTORAGESRESPONSEBODYSHAREDSTORAGESMOUNTINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTSHAREDSTORAGESRESPONSEBODYSHAREDSTORAGESMOUNTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListSharedStoragesResponseBodySharedStoragesMountInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSharedStoragesResponseBodySharedStoragesMountInfo& obj) { 
      DARABONBA_PTR_TO_JSON(MountDirectory, mountDirectory_);
      DARABONBA_PTR_TO_JSON(MountOptions, mountOptions_);
      DARABONBA_PTR_TO_JSON(MountTarget, mountTarget_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(StorageDirectory, storageDirectory_);
    };
    friend void from_json(const Darabonba::Json& j, ListSharedStoragesResponseBodySharedStoragesMountInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(MountDirectory, mountDirectory_);
      DARABONBA_PTR_FROM_JSON(MountOptions, mountOptions_);
      DARABONBA_PTR_FROM_JSON(MountTarget, mountTarget_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(StorageDirectory, storageDirectory_);
    };
    ListSharedStoragesResponseBodySharedStoragesMountInfo() = default ;
    ListSharedStoragesResponseBodySharedStoragesMountInfo(const ListSharedStoragesResponseBodySharedStoragesMountInfo &) = default ;
    ListSharedStoragesResponseBodySharedStoragesMountInfo(ListSharedStoragesResponseBodySharedStoragesMountInfo &&) = default ;
    ListSharedStoragesResponseBodySharedStoragesMountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSharedStoragesResponseBodySharedStoragesMountInfo() = default ;
    ListSharedStoragesResponseBodySharedStoragesMountInfo& operator=(const ListSharedStoragesResponseBodySharedStoragesMountInfo &) = default ;
    ListSharedStoragesResponseBodySharedStoragesMountInfo& operator=(ListSharedStoragesResponseBodySharedStoragesMountInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountDirectory_ == nullptr
        && return this->mountOptions_ == nullptr && return this->mountTarget_ == nullptr && return this->protocolType_ == nullptr && return this->storageDirectory_ == nullptr; };
    // mountDirectory Field Functions 
    bool hasMountDirectory() const { return this->mountDirectory_ != nullptr;};
    void deleteMountDirectory() { this->mountDirectory_ = nullptr;};
    inline string mountDirectory() const { DARABONBA_PTR_GET_DEFAULT(mountDirectory_, "") };
    inline ListSharedStoragesResponseBodySharedStoragesMountInfo& setMountDirectory(string mountDirectory) { DARABONBA_PTR_SET_VALUE(mountDirectory_, mountDirectory) };


    // mountOptions Field Functions 
    bool hasMountOptions() const { return this->mountOptions_ != nullptr;};
    void deleteMountOptions() { this->mountOptions_ = nullptr;};
    inline string mountOptions() const { DARABONBA_PTR_GET_DEFAULT(mountOptions_, "") };
    inline ListSharedStoragesResponseBodySharedStoragesMountInfo& setMountOptions(string mountOptions) { DARABONBA_PTR_SET_VALUE(mountOptions_, mountOptions) };


    // mountTarget Field Functions 
    bool hasMountTarget() const { return this->mountTarget_ != nullptr;};
    void deleteMountTarget() { this->mountTarget_ = nullptr;};
    inline string mountTarget() const { DARABONBA_PTR_GET_DEFAULT(mountTarget_, "") };
    inline ListSharedStoragesResponseBodySharedStoragesMountInfo& setMountTarget(string mountTarget) { DARABONBA_PTR_SET_VALUE(mountTarget_, mountTarget) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline ListSharedStoragesResponseBodySharedStoragesMountInfo& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // storageDirectory Field Functions 
    bool hasStorageDirectory() const { return this->storageDirectory_ != nullptr;};
    void deleteStorageDirectory() { this->storageDirectory_ = nullptr;};
    inline string storageDirectory() const { DARABONBA_PTR_GET_DEFAULT(storageDirectory_, "") };
    inline ListSharedStoragesResponseBodySharedStoragesMountInfo& setStorageDirectory(string storageDirectory) { DARABONBA_PTR_SET_VALUE(storageDirectory_, storageDirectory) };


  protected:
    // The local mount directory of the attached file system.
    std::shared_ptr<string> mountDirectory_ = nullptr;
    // The mount options for the attached file system. Valid values:
    // 
    // *   \\-t nfs -o vers=3,nolock,proto=tcp,noresvport
    // *   \\-t nfs -o vers=4.0,noresvport
    std::shared_ptr<string> mountOptions_ = nullptr;
    // The mount target of the attached file system.
    std::shared_ptr<string> mountTarget_ = nullptr;
    // The protocol used by the mount target of the attached file system. Valid values:
    // 
    // *   nfs3
    // *   nfs4
    // *   cpfs
    std::shared_ptr<string> protocolType_ = nullptr;
    // The storage directory of the attached file system.
    std::shared_ptr<string> storageDirectory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif

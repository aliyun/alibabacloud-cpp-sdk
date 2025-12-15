// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHAREDSTORAGESRESPONSEBODYSHAREDSTORAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTSHAREDSTORAGESRESPONSEBODYSHAREDSTORAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSharedStoragesResponseBodySharedStoragesMountInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListSharedStoragesResponseBodySharedStorages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSharedStoragesResponseBodySharedStorages& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FileSystemProtocol, fileSystemProtocol_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_TO_JSON(MountInfo, mountInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListSharedStoragesResponseBodySharedStorages& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FileSystemProtocol, fileSystemProtocol_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_FROM_JSON(MountInfo, mountInfo_);
    };
    ListSharedStoragesResponseBodySharedStorages() = default ;
    ListSharedStoragesResponseBodySharedStorages(const ListSharedStoragesResponseBodySharedStorages &) = default ;
    ListSharedStoragesResponseBodySharedStorages(ListSharedStoragesResponseBodySharedStorages &&) = default ;
    ListSharedStoragesResponseBodySharedStorages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSharedStoragesResponseBodySharedStorages() = default ;
    ListSharedStoragesResponseBodySharedStorages& operator=(const ListSharedStoragesResponseBodySharedStorages &) = default ;
    ListSharedStoragesResponseBodySharedStorages& operator=(ListSharedStoragesResponseBodySharedStorages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && return this->fileSystemProtocol_ == nullptr && return this->fileSystemType_ == nullptr && return this->mountInfo_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ListSharedStoragesResponseBodySharedStorages& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fileSystemProtocol Field Functions 
    bool hasFileSystemProtocol() const { return this->fileSystemProtocol_ != nullptr;};
    void deleteFileSystemProtocol() { this->fileSystemProtocol_ = nullptr;};
    inline string fileSystemProtocol() const { DARABONBA_PTR_GET_DEFAULT(fileSystemProtocol_, "") };
    inline ListSharedStoragesResponseBodySharedStorages& setFileSystemProtocol(string fileSystemProtocol) { DARABONBA_PTR_SET_VALUE(fileSystemProtocol_, fileSystemProtocol) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string fileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline ListSharedStoragesResponseBodySharedStorages& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // mountInfo Field Functions 
    bool hasMountInfo() const { return this->mountInfo_ != nullptr;};
    void deleteMountInfo() { this->mountInfo_ = nullptr;};
    inline const vector<Models::ListSharedStoragesResponseBodySharedStoragesMountInfo> & mountInfo() const { DARABONBA_PTR_GET_CONST(mountInfo_, vector<Models::ListSharedStoragesResponseBodySharedStoragesMountInfo>) };
    inline vector<Models::ListSharedStoragesResponseBodySharedStoragesMountInfo> mountInfo() { DARABONBA_PTR_GET(mountInfo_, vector<Models::ListSharedStoragesResponseBodySharedStoragesMountInfo>) };
    inline ListSharedStoragesResponseBodySharedStorages& setMountInfo(const vector<Models::ListSharedStoragesResponseBodySharedStoragesMountInfo> & mountInfo) { DARABONBA_PTR_SET_VALUE(mountInfo_, mountInfo) };
    inline ListSharedStoragesResponseBodySharedStorages& setMountInfo(vector<Models::ListSharedStoragesResponseBodySharedStoragesMountInfo> && mountInfo) { DARABONBA_PTR_SET_RVALUE(mountInfo_, mountInfo) };


  protected:
    // The ID of the attached file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The protocol used by the attached file system. Valid values:
    // 
    // *   nfs3
    // *   nfs4
    // *   cpfs
    std::shared_ptr<string> fileSystemProtocol_ = nullptr;
    // The type of the attached file system. Valid values:
    // 
    // *   nas
    // *   cpfs
    std::shared_ptr<string> fileSystemType_ = nullptr;
    // The mount information.
    std::shared_ptr<vector<Models::ListSharedStoragesResponseBodySharedStoragesMountInfo>> mountInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif

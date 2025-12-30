// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHAREDSTORAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSHAREDSTORAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListSharedStoragesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSharedStoragesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
    };
    friend void from_json(const Darabonba::Json& j, ListSharedStoragesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
    };
    ListSharedStoragesRequest() = default ;
    ListSharedStoragesRequest(const ListSharedStoragesRequest &) = default ;
    ListSharedStoragesRequest(ListSharedStoragesRequest &&) = default ;
    ListSharedStoragesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSharedStoragesRequest() = default ;
    ListSharedStoragesRequest& operator=(const ListSharedStoragesRequest &) = default ;
    ListSharedStoragesRequest& operator=(ListSharedStoragesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->fileSystemId_ == nullptr && this->fileSystemType_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListSharedStoragesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ListSharedStoragesRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string getFileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline ListSharedStoragesRequest& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The ID of the attached file system.
    shared_ptr<string> fileSystemId_ {};
    // The type of the attached file system. Valid values:
    // 
    // *   nas
    // *   cpfs
    shared_ptr<string> fileSystemType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif

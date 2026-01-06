// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEACCESSGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEACCESSGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DeleteAccessGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAccessGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAccessGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
    };
    DeleteAccessGroupRequest() = default ;
    DeleteAccessGroupRequest(const DeleteAccessGroupRequest &) = default ;
    DeleteAccessGroupRequest(DeleteAccessGroupRequest &&) = default ;
    DeleteAccessGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAccessGroupRequest() = default ;
    DeleteAccessGroupRequest& operator=(const DeleteAccessGroupRequest &) = default ;
    DeleteAccessGroupRequest& operator=(DeleteAccessGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupName_ == nullptr
        && this->fileSystemType_ == nullptr; };
    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string getAccessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline DeleteAccessGroupRequest& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string getFileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline DeleteAccessGroupRequest& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


  protected:
    // The name of the permission group to be deleted.
    // 
    // This parameter is required.
    shared_ptr<string> accessGroupName_ {};
    // The type of the file system.
    // 
    // Valid values:
    // 
    // *   standard (default): General-purpose NAS file system
    // *   extreme: Extreme NAS file system
    shared_ptr<string> fileSystemType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif

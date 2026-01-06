// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateDirRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDirRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(OwnerGroupId, ownerGroupId_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(Permission, permission_);
      DARABONBA_PTR_TO_JSON(Recursion, recursion_);
      DARABONBA_PTR_TO_JSON(RootDirectory, rootDirectory_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDirRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(OwnerGroupId, ownerGroupId_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
      DARABONBA_PTR_FROM_JSON(Recursion, recursion_);
      DARABONBA_PTR_FROM_JSON(RootDirectory, rootDirectory_);
    };
    CreateDirRequest() = default ;
    CreateDirRequest(const CreateDirRequest &) = default ;
    CreateDirRequest(CreateDirRequest &&) = default ;
    CreateDirRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDirRequest() = default ;
    CreateDirRequest& operator=(const CreateDirRequest &) = default ;
    CreateDirRequest& operator=(CreateDirRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->ownerGroupId_ == nullptr && this->ownerUserId_ == nullptr && this->permission_ == nullptr && this->recursion_ == nullptr && this->rootDirectory_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateDirRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // ownerGroupId Field Functions 
    bool hasOwnerGroupId() const { return this->ownerGroupId_ != nullptr;};
    void deleteOwnerGroupId() { this->ownerGroupId_ = nullptr;};
    inline int32_t getOwnerGroupId() const { DARABONBA_PTR_GET_DEFAULT(ownerGroupId_, 0) };
    inline CreateDirRequest& setOwnerGroupId(int32_t ownerGroupId) { DARABONBA_PTR_SET_VALUE(ownerGroupId_, ownerGroupId) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline int32_t getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, 0) };
    inline CreateDirRequest& setOwnerUserId(int32_t ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline CreateDirRequest& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // recursion Field Functions 
    bool hasRecursion() const { return this->recursion_ != nullptr;};
    void deleteRecursion() { this->recursion_ = nullptr;};
    inline bool getRecursion() const { DARABONBA_PTR_GET_DEFAULT(recursion_, false) };
    inline CreateDirRequest& setRecursion(bool recursion) { DARABONBA_PTR_SET_VALUE(recursion_, recursion) };


    // rootDirectory Field Functions 
    bool hasRootDirectory() const { return this->rootDirectory_ != nullptr;};
    void deleteRootDirectory() { this->rootDirectory_ = nullptr;};
    inline string getRootDirectory() const { DARABONBA_PTR_GET_DEFAULT(rootDirectory_, "") };
    inline CreateDirRequest& setRootDirectory(string rootDirectory) { DARABONBA_PTR_SET_VALUE(rootDirectory_, rootDirectory) };


  protected:
    // The ID of the file system.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The ID of the owner group for the directory. Valid values: 0 to 4294967295.
    // 
    // This parameter is required.
    shared_ptr<int32_t> ownerGroupId_ {};
    // The owner ID for the directory. Valid values: 0 to 4294967295.
    // 
    // This parameter is required.
    shared_ptr<int32_t> ownerUserId_ {};
    // The Portable Operating System Interface (POSIX) permissions applied to the root directory. The value is a valid octal number, such as 0755.
    // 
    // This parameter is required.
    shared_ptr<string> permission_ {};
    // Specifies whether to create a multi-level directory. Valid values:
    // 
    // *   true (default): If no multi-level directory exists, directories are created level by level.
    // *   false: Only the last level of directory is created. An error message is returned because the parent directory does not exist.
    shared_ptr<bool> recursion_ {};
    // The directory name.
    // 
    // *   The directory must start with a forward slash (/).
    // *   The directory can contain digits and letters.
    // *   The directory can contain underscores (_), hyphens (-), and periods (.).
    // *   The directory cannot contain symbolic links, such as the current directory (.), the upper-level directory (..), and other symbolic links.
    // 
    // > *   If the root directory does not exist, configure the information for directory creation. The system then automatically creates the specified root directory based on your settings.
    // > *  If the root directory exists, you do not need to configure the information for directory creation. The configurations for directory creation are ignored even if you configure the information.
    // 
    // This parameter is required.
    shared_ptr<string> rootDirectory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif

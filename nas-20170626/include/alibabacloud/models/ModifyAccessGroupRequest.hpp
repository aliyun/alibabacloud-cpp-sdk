// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCESSGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCESSGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ModifyAccessGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccessGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccessGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
    };
    ModifyAccessGroupRequest() = default ;
    ModifyAccessGroupRequest(const ModifyAccessGroupRequest &) = default ;
    ModifyAccessGroupRequest(ModifyAccessGroupRequest &&) = default ;
    ModifyAccessGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccessGroupRequest() = default ;
    ModifyAccessGroupRequest& operator=(const ModifyAccessGroupRequest &) = default ;
    ModifyAccessGroupRequest& operator=(ModifyAccessGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupName_ == nullptr
        && return this->description_ == nullptr && return this->fileSystemType_ == nullptr; };
    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string accessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline ModifyAccessGroupRequest& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyAccessGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string fileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline ModifyAccessGroupRequest& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


  protected:
    // The name of the permission group.
    // 
    // Limits:
    // 
    // *   The name must be 3 to 64 characters in length.
    // *   The name must start with a letter and can contain letters, digits, underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> accessGroupName_ = nullptr;
    // The description of the permission group.
    // 
    // Limits:
    // 
    // *   By default, the description of the permission group is the same as the name of the permission group. The description must be 2 to 128 characters in length.
    // *   The description must start with a letter and cannot start with `http://` or `https://`.
    // *   The description can contain digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> description_ = nullptr;
    // The type of the file system.
    // 
    // Valid values:
    // 
    // *   standard (default): General-purpose NAS file system
    // *   extreme: Extreme NAS file system
    std::shared_ptr<string> fileSystemType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif

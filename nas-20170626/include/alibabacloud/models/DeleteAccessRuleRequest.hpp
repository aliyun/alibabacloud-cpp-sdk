// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEACCESSRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEACCESSRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DeleteAccessRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAccessRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_TO_JSON(AccessRuleId, accessRuleId_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAccessRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_FROM_JSON(AccessRuleId, accessRuleId_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
    };
    DeleteAccessRuleRequest() = default ;
    DeleteAccessRuleRequest(const DeleteAccessRuleRequest &) = default ;
    DeleteAccessRuleRequest(DeleteAccessRuleRequest &&) = default ;
    DeleteAccessRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAccessRuleRequest() = default ;
    DeleteAccessRuleRequest& operator=(const DeleteAccessRuleRequest &) = default ;
    DeleteAccessRuleRequest& operator=(DeleteAccessRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupName_ == nullptr
        && return this->accessRuleId_ == nullptr && return this->fileSystemType_ == nullptr; };
    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string accessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline DeleteAccessRuleRequest& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // accessRuleId Field Functions 
    bool hasAccessRuleId() const { return this->accessRuleId_ != nullptr;};
    void deleteAccessRuleId() { this->accessRuleId_ = nullptr;};
    inline string accessRuleId() const { DARABONBA_PTR_GET_DEFAULT(accessRuleId_, "") };
    inline DeleteAccessRuleRequest& setAccessRuleId(string accessRuleId) { DARABONBA_PTR_SET_VALUE(accessRuleId_, accessRuleId) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string fileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline DeleteAccessRuleRequest& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


  protected:
    // The name of the permission group.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessGroupName_ = nullptr;
    // The rule ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessRuleId_ = nullptr;
    // The type of the file system.
    // 
    // Valid values:
    // 
    // *   standard (default): General-purpose NAS file system.
    // *   extreme: Extreme NAS file system.
    std::shared_ptr<string> fileSystemType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif

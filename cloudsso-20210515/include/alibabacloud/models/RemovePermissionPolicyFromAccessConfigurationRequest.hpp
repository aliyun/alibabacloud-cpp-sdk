// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEPERMISSIONPOLICYFROMACCESSCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEPERMISSIONPOLICYFROMACCESSCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class RemovePermissionPolicyFromAccessConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemovePermissionPolicyFromAccessConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(PermissionPolicyName, permissionPolicyName_);
      DARABONBA_PTR_TO_JSON(PermissionPolicyType, permissionPolicyType_);
    };
    friend void from_json(const Darabonba::Json& j, RemovePermissionPolicyFromAccessConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(PermissionPolicyName, permissionPolicyName_);
      DARABONBA_PTR_FROM_JSON(PermissionPolicyType, permissionPolicyType_);
    };
    RemovePermissionPolicyFromAccessConfigurationRequest() = default ;
    RemovePermissionPolicyFromAccessConfigurationRequest(const RemovePermissionPolicyFromAccessConfigurationRequest &) = default ;
    RemovePermissionPolicyFromAccessConfigurationRequest(RemovePermissionPolicyFromAccessConfigurationRequest &&) = default ;
    RemovePermissionPolicyFromAccessConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemovePermissionPolicyFromAccessConfigurationRequest() = default ;
    RemovePermissionPolicyFromAccessConfigurationRequest& operator=(const RemovePermissionPolicyFromAccessConfigurationRequest &) = default ;
    RemovePermissionPolicyFromAccessConfigurationRequest& operator=(RemovePermissionPolicyFromAccessConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessConfigurationId_ == nullptr
        && this->directoryId_ == nullptr && this->permissionPolicyName_ == nullptr && this->permissionPolicyType_ == nullptr; };
    // accessConfigurationId Field Functions 
    bool hasAccessConfigurationId() const { return this->accessConfigurationId_ != nullptr;};
    void deleteAccessConfigurationId() { this->accessConfigurationId_ = nullptr;};
    inline string getAccessConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationId_, "") };
    inline RemovePermissionPolicyFromAccessConfigurationRequest& setAccessConfigurationId(string accessConfigurationId) { DARABONBA_PTR_SET_VALUE(accessConfigurationId_, accessConfigurationId) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline RemovePermissionPolicyFromAccessConfigurationRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // permissionPolicyName Field Functions 
    bool hasPermissionPolicyName() const { return this->permissionPolicyName_ != nullptr;};
    void deletePermissionPolicyName() { this->permissionPolicyName_ = nullptr;};
    inline string getPermissionPolicyName() const { DARABONBA_PTR_GET_DEFAULT(permissionPolicyName_, "") };
    inline RemovePermissionPolicyFromAccessConfigurationRequest& setPermissionPolicyName(string permissionPolicyName) { DARABONBA_PTR_SET_VALUE(permissionPolicyName_, permissionPolicyName) };


    // permissionPolicyType Field Functions 
    bool hasPermissionPolicyType() const { return this->permissionPolicyType_ != nullptr;};
    void deletePermissionPolicyType() { this->permissionPolicyType_ = nullptr;};
    inline string getPermissionPolicyType() const { DARABONBA_PTR_GET_DEFAULT(permissionPolicyType_, "") };
    inline RemovePermissionPolicyFromAccessConfigurationRequest& setPermissionPolicyType(string permissionPolicyType) { DARABONBA_PTR_SET_VALUE(permissionPolicyType_, permissionPolicyType) };


  protected:
    // The ID of the access configuration.
    shared_ptr<string> accessConfigurationId_ {};
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // The name of the policy.
    shared_ptr<string> permissionPolicyName_ {};
    // The type of the policy. Valid values:
    // 
    // - System: system policy.
    // 
    // - Inline: inline policy.
    shared_ptr<string> permissionPolicyType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONPOLICIESINACCESSCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONPOLICIESINACCESSCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class ListPermissionPoliciesInAccessConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionPoliciesInAccessConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(PermissionPolicyType, permissionPolicyType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionPoliciesInAccessConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(PermissionPolicyType, permissionPolicyType_);
    };
    ListPermissionPoliciesInAccessConfigurationRequest() = default ;
    ListPermissionPoliciesInAccessConfigurationRequest(const ListPermissionPoliciesInAccessConfigurationRequest &) = default ;
    ListPermissionPoliciesInAccessConfigurationRequest(ListPermissionPoliciesInAccessConfigurationRequest &&) = default ;
    ListPermissionPoliciesInAccessConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionPoliciesInAccessConfigurationRequest() = default ;
    ListPermissionPoliciesInAccessConfigurationRequest& operator=(const ListPermissionPoliciesInAccessConfigurationRequest &) = default ;
    ListPermissionPoliciesInAccessConfigurationRequest& operator=(ListPermissionPoliciesInAccessConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessConfigurationId_ == nullptr
        && this->directoryId_ == nullptr && this->permissionPolicyType_ == nullptr; };
    // accessConfigurationId Field Functions 
    bool hasAccessConfigurationId() const { return this->accessConfigurationId_ != nullptr;};
    void deleteAccessConfigurationId() { this->accessConfigurationId_ = nullptr;};
    inline string getAccessConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationId_, "") };
    inline ListPermissionPoliciesInAccessConfigurationRequest& setAccessConfigurationId(string accessConfigurationId) { DARABONBA_PTR_SET_VALUE(accessConfigurationId_, accessConfigurationId) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline ListPermissionPoliciesInAccessConfigurationRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // permissionPolicyType Field Functions 
    bool hasPermissionPolicyType() const { return this->permissionPolicyType_ != nullptr;};
    void deletePermissionPolicyType() { this->permissionPolicyType_ = nullptr;};
    inline string getPermissionPolicyType() const { DARABONBA_PTR_GET_DEFAULT(permissionPolicyType_, "") };
    inline ListPermissionPoliciesInAccessConfigurationRequest& setPermissionPolicyType(string permissionPolicyType) { DARABONBA_PTR_SET_VALUE(permissionPolicyType_, permissionPolicyType) };


  protected:
    // The ID of the access configuration.
    shared_ptr<string> accessConfigurationId_ {};
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // The type of the policy. The type can be used to filter policies. Valid values:
    // 
    // *   System: system policy.
    // *   Inline: inline policy.
    // 
    // If you do not specify this parameter, all types of policies are queried.
    shared_ptr<string> permissionPolicyType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif

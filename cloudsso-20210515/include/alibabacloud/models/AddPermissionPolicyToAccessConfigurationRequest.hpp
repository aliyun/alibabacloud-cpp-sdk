// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPERMISSIONPOLICYTOACCESSCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPERMISSIONPOLICYTOACCESSCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class AddPermissionPolicyToAccessConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPermissionPolicyToAccessConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(InlinePolicyDocument, inlinePolicyDocument_);
      DARABONBA_PTR_TO_JSON(PermissionPolicyName, permissionPolicyName_);
      DARABONBA_PTR_TO_JSON(PermissionPolicyType, permissionPolicyType_);
    };
    friend void from_json(const Darabonba::Json& j, AddPermissionPolicyToAccessConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(InlinePolicyDocument, inlinePolicyDocument_);
      DARABONBA_PTR_FROM_JSON(PermissionPolicyName, permissionPolicyName_);
      DARABONBA_PTR_FROM_JSON(PermissionPolicyType, permissionPolicyType_);
    };
    AddPermissionPolicyToAccessConfigurationRequest() = default ;
    AddPermissionPolicyToAccessConfigurationRequest(const AddPermissionPolicyToAccessConfigurationRequest &) = default ;
    AddPermissionPolicyToAccessConfigurationRequest(AddPermissionPolicyToAccessConfigurationRequest &&) = default ;
    AddPermissionPolicyToAccessConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPermissionPolicyToAccessConfigurationRequest() = default ;
    AddPermissionPolicyToAccessConfigurationRequest& operator=(const AddPermissionPolicyToAccessConfigurationRequest &) = default ;
    AddPermissionPolicyToAccessConfigurationRequest& operator=(AddPermissionPolicyToAccessConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessConfigurationId_ == nullptr
        && this->directoryId_ == nullptr && this->inlinePolicyDocument_ == nullptr && this->permissionPolicyName_ == nullptr && this->permissionPolicyType_ == nullptr; };
    // accessConfigurationId Field Functions 
    bool hasAccessConfigurationId() const { return this->accessConfigurationId_ != nullptr;};
    void deleteAccessConfigurationId() { this->accessConfigurationId_ = nullptr;};
    inline string getAccessConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationId_, "") };
    inline AddPermissionPolicyToAccessConfigurationRequest& setAccessConfigurationId(string accessConfigurationId) { DARABONBA_PTR_SET_VALUE(accessConfigurationId_, accessConfigurationId) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline AddPermissionPolicyToAccessConfigurationRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // inlinePolicyDocument Field Functions 
    bool hasInlinePolicyDocument() const { return this->inlinePolicyDocument_ != nullptr;};
    void deleteInlinePolicyDocument() { this->inlinePolicyDocument_ = nullptr;};
    inline string getInlinePolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(inlinePolicyDocument_, "") };
    inline AddPermissionPolicyToAccessConfigurationRequest& setInlinePolicyDocument(string inlinePolicyDocument) { DARABONBA_PTR_SET_VALUE(inlinePolicyDocument_, inlinePolicyDocument) };


    // permissionPolicyName Field Functions 
    bool hasPermissionPolicyName() const { return this->permissionPolicyName_ != nullptr;};
    void deletePermissionPolicyName() { this->permissionPolicyName_ = nullptr;};
    inline string getPermissionPolicyName() const { DARABONBA_PTR_GET_DEFAULT(permissionPolicyName_, "") };
    inline AddPermissionPolicyToAccessConfigurationRequest& setPermissionPolicyName(string permissionPolicyName) { DARABONBA_PTR_SET_VALUE(permissionPolicyName_, permissionPolicyName) };


    // permissionPolicyType Field Functions 
    bool hasPermissionPolicyType() const { return this->permissionPolicyType_ != nullptr;};
    void deletePermissionPolicyType() { this->permissionPolicyType_ = nullptr;};
    inline string getPermissionPolicyType() const { DARABONBA_PTR_GET_DEFAULT(permissionPolicyType_, "") };
    inline AddPermissionPolicyToAccessConfigurationRequest& setPermissionPolicyType(string permissionPolicyType) { DARABONBA_PTR_SET_VALUE(permissionPolicyType_, permissionPolicyType) };


  protected:
    // The access configuration ID.
    shared_ptr<string> accessConfigurationId_ {};
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // The content of the inline policy.
    // 
    // The maximum length is 4,096 characters.
    // 
    // If PermissionPolicyType is set to Inline, this parameter is required. For more information about the syntax and structure of access policies, see [Access policy syntax and structure](https://help.aliyun.com/document_detail/93739.html).
    shared_ptr<string> inlinePolicyDocument_ {};
    // The name of the access policy. 
    // - If PermissionPolicyType is set to System, this parameter specifies the name of the system policy. Because RAM system policies are reused, you must obtain the system policy name from RAM.
    // - If PermissionPolicyType is set to Inline, this parameter specifies the name of the inline policy. You can customize the name. The name can be up to 32 characters in length.
    shared_ptr<string> permissionPolicyName_ {};
    // The type of the access policy. Valid values:
    // 
    // - System: system policy. Reuses the system policies of Resource Access Management (RAM).
    // - Inline: inline policy. A custom policy written based on the syntax and structure of RAM policies.
    shared_ptr<string> permissionPolicyType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif

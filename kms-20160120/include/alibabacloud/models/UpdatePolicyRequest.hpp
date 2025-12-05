// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class UpdatePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessControlRules, accessControlRules_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessControlRules, accessControlRules_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    UpdatePolicyRequest() = default ;
    UpdatePolicyRequest(const UpdatePolicyRequest &) = default ;
    UpdatePolicyRequest(UpdatePolicyRequest &&) = default ;
    UpdatePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolicyRequest() = default ;
    UpdatePolicyRequest& operator=(const UpdatePolicyRequest &) = default ;
    UpdatePolicyRequest& operator=(UpdatePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessControlRules_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->permissions_ == nullptr && return this->resources_ == nullptr; };
    // accessControlRules Field Functions 
    bool hasAccessControlRules() const { return this->accessControlRules_ != nullptr;};
    void deleteAccessControlRules() { this->accessControlRules_ = nullptr;};
    inline string accessControlRules() const { DARABONBA_PTR_GET_DEFAULT(accessControlRules_, "") };
    inline UpdatePolicyRequest& setAccessControlRules(string accessControlRules) { DARABONBA_PTR_SET_VALUE(accessControlRules_, accessControlRules) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdatePolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdatePolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline string permissions() const { DARABONBA_PTR_GET_DEFAULT(permissions_, "") };
    inline UpdatePolicyRequest& setPermissions(string permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string resources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline UpdatePolicyRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


  protected:
    // The access control rule.
    // 
    // > For more information about how to query created access control rules, see [ListNetworkRules](https://help.aliyun.com/document_detail/2539433.html).
    std::shared_ptr<string> accessControlRules_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the permission policy that you want to update.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The operations that are supported by the updated policy. Valid values:
    // 
    // *   RbacPermission/Template/CryptoServiceKeyUser: allows you to perform cryptographic operations.
    // *   RbacPermission/Template/CryptoServiceSecretUser: allows you to perform secret-related operations.
    // 
    // You can select both.
    std::shared_ptr<string> permissions_ = nullptr;
    // The key and secret that are allowed to access after the update.
    // 
    // *   Key: Enter a key in the `key/${KeyId}` format. To allow access to all keys of a KMS instance, enter key/\\*.
    // *   Secret: Enter a secret in the `secret/${SecretName}` format. To allow access to all secrets of a KMS instance, enter secret/\\*.
    std::shared_ptr<string> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif

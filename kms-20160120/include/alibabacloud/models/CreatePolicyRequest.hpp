// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CreatePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessControlRules, accessControlRules_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KmsInstance, kmsInstance_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessControlRules, accessControlRules_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KmsInstance, kmsInstance_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    CreatePolicyRequest() = default ;
    CreatePolicyRequest(const CreatePolicyRequest &) = default ;
    CreatePolicyRequest(CreatePolicyRequest &&) = default ;
    CreatePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyRequest() = default ;
    CreatePolicyRequest& operator=(const CreatePolicyRequest &) = default ;
    CreatePolicyRequest& operator=(CreatePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessControlRules_ == nullptr
        && this->description_ == nullptr && this->kmsInstance_ == nullptr && this->name_ == nullptr && this->permissions_ == nullptr && this->resources_ == nullptr; };
    // accessControlRules Field Functions 
    bool hasAccessControlRules() const { return this->accessControlRules_ != nullptr;};
    void deleteAccessControlRules() { this->accessControlRules_ = nullptr;};
    inline string getAccessControlRules() const { DARABONBA_PTR_GET_DEFAULT(accessControlRules_, "") };
    inline CreatePolicyRequest& setAccessControlRules(string accessControlRules) { DARABONBA_PTR_SET_VALUE(accessControlRules_, accessControlRules) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // kmsInstance Field Functions 
    bool hasKmsInstance() const { return this->kmsInstance_ != nullptr;};
    void deleteKmsInstance() { this->kmsInstance_ = nullptr;};
    inline string getKmsInstance() const { DARABONBA_PTR_GET_DEFAULT(kmsInstance_, "") };
    inline CreatePolicyRequest& setKmsInstance(string kmsInstance) { DARABONBA_PTR_SET_VALUE(kmsInstance_, kmsInstance) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline string getPermissions() const { DARABONBA_PTR_GET_DEFAULT(permissions_, "") };
    inline CreatePolicyRequest& setPermissions(string permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string getResources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline CreatePolicyRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


  protected:
    // The name of the access control rule.
    // 
    // > For more information about how to query created access control rules, see [ListNetworkRules](https://help.aliyun.com/document_detail/2539433.html).
    shared_ptr<string> accessControlRules_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The scope of the permission policy. You need to specify the KMS instance that you want to access.
    shared_ptr<string> kmsInstance_ {};
    // The name of the permission policy.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The operations that can be performed. Valid values:
    // 
    // *   RbacPermission/Template/CryptoServiceKeyUser: allows you to perform cryptographic operations.
    // *   RbacPermission/Template/CryptoServiceSecretUser: allows you to perform secret-related operations.
    // 
    // You can select both.
    // 
    // This parameter is required.
    shared_ptr<string> permissions_ {};
    // The key and secret that are allowed to access.
    // 
    // *   Key: Enter a key in the `key/${KeyId}` format. To allow access to all keys of a KMS instance, enter key/\\*.
    // *   Secret: Enter a secret in the `secret/${SecretName}` format. To allow access to all secrets of a KMS instance, enter secret/\\*.
    // 
    // This parameter is required.
    shared_ptr<string> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif

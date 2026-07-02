// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CreatePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessControlRules, accessControlRules_);
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KmsInstance, kmsInstance_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessControlRules, accessControlRules_);
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KmsInstance, kmsInstance_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    CreatePolicyResponseBody() = default ;
    CreatePolicyResponseBody(const CreatePolicyResponseBody &) = default ;
    CreatePolicyResponseBody(CreatePolicyResponseBody &&) = default ;
    CreatePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyResponseBody() = default ;
    CreatePolicyResponseBody& operator=(const CreatePolicyResponseBody &) = default ;
    CreatePolicyResponseBody& operator=(CreatePolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessControlRules_ == nullptr
        && this->arn_ == nullptr && this->description_ == nullptr && this->kmsInstance_ == nullptr && this->name_ == nullptr && this->permissions_ == nullptr
        && this->requestId_ == nullptr && this->resources_ == nullptr; };
    // accessControlRules Field Functions 
    bool hasAccessControlRules() const { return this->accessControlRules_ != nullptr;};
    void deleteAccessControlRules() { this->accessControlRules_ = nullptr;};
    inline string getAccessControlRules() const { DARABONBA_PTR_GET_DEFAULT(accessControlRules_, "") };
    inline CreatePolicyResponseBody& setAccessControlRules(string accessControlRules) { DARABONBA_PTR_SET_VALUE(accessControlRules_, accessControlRules) };


    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline CreatePolicyResponseBody& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePolicyResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // kmsInstance Field Functions 
    bool hasKmsInstance() const { return this->kmsInstance_ != nullptr;};
    void deleteKmsInstance() { this->kmsInstance_ = nullptr;};
    inline string getKmsInstance() const { DARABONBA_PTR_GET_DEFAULT(kmsInstance_, "") };
    inline CreatePolicyResponseBody& setKmsInstance(string kmsInstance) { DARABONBA_PTR_SET_VALUE(kmsInstance_, kmsInstance) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePolicyResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline string getPermissions() const { DARABONBA_PTR_GET_DEFAULT(permissions_, "") };
    inline CreatePolicyResponseBody& setPermissions(string permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string getResources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline CreatePolicyResponseBody& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


  protected:
    // The name of the access control rule.
    shared_ptr<string> accessControlRules_ {};
    // The ARN of the permission policy.
    shared_ptr<string> arn_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The scope of the permission policy.
    shared_ptr<string> kmsInstance_ {};
    // The name of the permission policy.
    shared_ptr<string> name_ {};
    // The operations that can be performed.
    shared_ptr<string> permissions_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The key and secret that are allowed to access.
    // 
    // *   `key/*` indicates that all keys of the KMS instance can be accessed.
    // *   `secret/*` indicates all secrets of the KMS instance can be accessed.
    shared_ptr<string> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif

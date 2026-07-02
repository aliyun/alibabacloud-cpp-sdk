// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DescribePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessControlRules, accessControlRules_);
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KmsInstance, kmsInstance_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessControlRules, accessControlRules_);
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KmsInstance, kmsInstance_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    DescribePolicyResponseBody() = default ;
    DescribePolicyResponseBody(const DescribePolicyResponseBody &) = default ;
    DescribePolicyResponseBody(DescribePolicyResponseBody &&) = default ;
    DescribePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyResponseBody() = default ;
    DescribePolicyResponseBody& operator=(const DescribePolicyResponseBody &) = default ;
    DescribePolicyResponseBody& operator=(DescribePolicyResponseBody &&) = default ;
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
    inline DescribePolicyResponseBody& setAccessControlRules(string accessControlRules) { DARABONBA_PTR_SET_VALUE(accessControlRules_, accessControlRules) };


    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline DescribePolicyResponseBody& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePolicyResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // kmsInstance Field Functions 
    bool hasKmsInstance() const { return this->kmsInstance_ != nullptr;};
    void deleteKmsInstance() { this->kmsInstance_ = nullptr;};
    inline string getKmsInstance() const { DARABONBA_PTR_GET_DEFAULT(kmsInstance_, "") };
    inline DescribePolicyResponseBody& setKmsInstance(string kmsInstance) { DARABONBA_PTR_SET_VALUE(kmsInstance_, kmsInstance) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePolicyResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<string> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<string>) };
    inline vector<string> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<string>) };
    inline DescribePolicyResponseBody& setPermissions(const vector<string> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline DescribePolicyResponseBody& setPermissions(vector<string> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<string> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
    inline vector<string> getResources() { DARABONBA_PTR_GET(resources_, vector<string>) };
    inline DescribePolicyResponseBody& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribePolicyResponseBody& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The network access rule that is associated with the permission policy.
    shared_ptr<string> accessControlRules_ {};
    // The Alibaba Cloud Resource Name (ARN) of the permission policy.
    shared_ptr<string> arn_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The scope of the permission policy.
    shared_ptr<string> kmsInstance_ {};
    // The name of the permission policy.
    shared_ptr<string> name_ {};
    // A list of operations that can be performed.
    shared_ptr<vector<string>> permissions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // A list of keys and secrets that are allowed to access.
    shared_ptr<vector<string>> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif

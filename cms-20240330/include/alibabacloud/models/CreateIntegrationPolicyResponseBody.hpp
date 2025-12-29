// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTEGRATIONPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTEGRATIONPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateIntegrationPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntegrationPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(policy, policy_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntegrationPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(policy, policy_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateIntegrationPolicyResponseBody() = default ;
    CreateIntegrationPolicyResponseBody(const CreateIntegrationPolicyResponseBody &) = default ;
    CreateIntegrationPolicyResponseBody(CreateIntegrationPolicyResponseBody &&) = default ;
    CreateIntegrationPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntegrationPolicyResponseBody() = default ;
    CreateIntegrationPolicyResponseBody& operator=(const CreateIntegrationPolicyResponseBody &) = default ;
    CreateIntegrationPolicyResponseBody& operator=(CreateIntegrationPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policy& obj) { 
        DARABONBA_PTR_TO_JSON(entityGroupId, entityGroupId_);
        DARABONBA_PTR_TO_JSON(policyId, policyId_);
        DARABONBA_PTR_TO_JSON(policyName, policyName_);
        DARABONBA_PTR_TO_JSON(policyType, policyType_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, Policy& obj) { 
        DARABONBA_PTR_FROM_JSON(entityGroupId, entityGroupId_);
        DARABONBA_PTR_FROM_JSON(policyId, policyId_);
        DARABONBA_PTR_FROM_JSON(policyName, policyName_);
        DARABONBA_PTR_FROM_JSON(policyType, policyType_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      };
      Policy() = default ;
      Policy(const Policy &) = default ;
      Policy(Policy &&) = default ;
      Policy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policy() = default ;
      Policy& operator=(const Policy &) = default ;
      Policy& operator=(Policy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->entityGroupId_ == nullptr
        && this->policyId_ == nullptr && this->policyName_ == nullptr && this->policyType_ == nullptr && this->regionId_ == nullptr && this->userId_ == nullptr
        && this->workspace_ == nullptr; };
      // entityGroupId Field Functions 
      bool hasEntityGroupId() const { return this->entityGroupId_ != nullptr;};
      void deleteEntityGroupId() { this->entityGroupId_ = nullptr;};
      inline string getEntityGroupId() const { DARABONBA_PTR_GET_DEFAULT(entityGroupId_, "") };
      inline Policy& setEntityGroupId(string entityGroupId) { DARABONBA_PTR_SET_VALUE(entityGroupId_, entityGroupId) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Policy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline Policy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline Policy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Policy& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Policy& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Policy& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // Entity group ID.
      shared_ptr<string> entityGroupId_ {};
      // Policy ID.
      shared_ptr<string> policyId_ {};
      // Policy name.
      shared_ptr<string> policyName_ {};
      // Policy type.
      shared_ptr<string> policyType_ {};
      // Region ID.
      shared_ptr<string> regionId_ {};
      // User ID.
      shared_ptr<string> userId_ {};
      // The workspace where the Policy resides.
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->created_ == nullptr
        && this->policy_ == nullptr && this->requestId_ == nullptr; };
    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline bool getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, false) };
    inline CreateIntegrationPolicyResponseBody& setCreated(bool created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const CreateIntegrationPolicyResponseBody::Policy & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, CreateIntegrationPolicyResponseBody::Policy) };
    inline CreateIntegrationPolicyResponseBody::Policy getPolicy() { DARABONBA_PTR_GET(policy_, CreateIntegrationPolicyResponseBody::Policy) };
    inline CreateIntegrationPolicyResponseBody& setPolicy(const CreateIntegrationPolicyResponseBody::Policy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline CreateIntegrationPolicyResponseBody& setPolicy(CreateIntegrationPolicyResponseBody::Policy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIntegrationPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Whether it is created.
    shared_ptr<bool> created_ {};
    // Uploaded policy.
    shared_ptr<CreateIntegrationPolicyResponseBody::Policy> policy_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

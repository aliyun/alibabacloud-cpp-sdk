// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class CreatePolicySetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicySetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolicySet, policySet_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicySetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicySet, policySet_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePolicySetResponseBody() = default ;
    CreatePolicySetResponseBody(const CreatePolicySetResponseBody &) = default ;
    CreatePolicySetResponseBody(CreatePolicySetResponseBody &&) = default ;
    CreatePolicySetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicySetResponseBody() = default ;
    CreatePolicySetResponseBody& operator=(const CreatePolicySetResponseBody &) = default ;
    CreatePolicySetResponseBody& operator=(CreatePolicySetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicySet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicySet& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(PolicySetArn, policySetArn_);
        DARABONBA_PTR_TO_JSON(PolicySetName, policySetName_);
      };
      friend void from_json(const Darabonba::Json& j, PolicySet& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(PolicySetArn, policySetArn_);
        DARABONBA_PTR_FROM_JSON(PolicySetName, policySetName_);
      };
      PolicySet() = default ;
      PolicySet(const PolicySet &) = default ;
      PolicySet(PolicySet &&) = default ;
      PolicySet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicySet() = default ;
      PolicySet& operator=(const PolicySet &) = default ;
      PolicySet& operator=(PolicySet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->policySetArn_ == nullptr && this->policySetName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline PolicySet& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PolicySet& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // policySetArn Field Functions 
      bool hasPolicySetArn() const { return this->policySetArn_ != nullptr;};
      void deletePolicySetArn() { this->policySetArn_ = nullptr;};
      inline string getPolicySetArn() const { DARABONBA_PTR_GET_DEFAULT(policySetArn_, "") };
      inline PolicySet& setPolicySetArn(string policySetArn) { DARABONBA_PTR_SET_VALUE(policySetArn_, policySetArn) };


      // policySetName Field Functions 
      bool hasPolicySetName() const { return this->policySetName_ != nullptr;};
      void deletePolicySetName() { this->policySetName_ = nullptr;};
      inline string getPolicySetName() const { DARABONBA_PTR_GET_DEFAULT(policySetName_, "") };
      inline PolicySet& setPolicySetName(string policySetName) { DARABONBA_PTR_SET_VALUE(policySetName_, policySetName) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> policySetArn_ {};
      shared_ptr<string> policySetName_ {};
    };

    virtual bool empty() const override { return this->policySet_ == nullptr
        && this->requestId_ == nullptr; };
    // policySet Field Functions 
    bool hasPolicySet() const { return this->policySet_ != nullptr;};
    void deletePolicySet() { this->policySet_ = nullptr;};
    inline const CreatePolicySetResponseBody::PolicySet & getPolicySet() const { DARABONBA_PTR_GET_CONST(policySet_, CreatePolicySetResponseBody::PolicySet) };
    inline CreatePolicySetResponseBody::PolicySet getPolicySet() { DARABONBA_PTR_GET(policySet_, CreatePolicySetResponseBody::PolicySet) };
    inline CreatePolicySetResponseBody& setPolicySet(const CreatePolicySetResponseBody::PolicySet & policySet) { DARABONBA_PTR_SET_VALUE(policySet_, policySet) };
    inline CreatePolicySetResponseBody& setPolicySet(CreatePolicySetResponseBody::PolicySet && policySet) { DARABONBA_PTR_SET_RVALUE(policySet_, policySet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePolicySetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreatePolicySetResponseBody::PolicySet> policySet_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif

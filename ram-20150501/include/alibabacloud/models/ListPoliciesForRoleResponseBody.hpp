// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICIESFORROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICIESFORROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class ListPoliciesForRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoliciesForRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoliciesForRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPoliciesForRoleResponseBody() = default ;
    ListPoliciesForRoleResponseBody(const ListPoliciesForRoleResponseBody &) = default ;
    ListPoliciesForRoleResponseBody(ListPoliciesForRoleResponseBody &&) = default ;
    ListPoliciesForRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPoliciesForRoleResponseBody() = default ;
    ListPoliciesForRoleResponseBody& operator=(const ListPoliciesForRoleResponseBody &) = default ;
    ListPoliciesForRoleResponseBody& operator=(ListPoliciesForRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policies& obj) { 
        DARABONBA_PTR_TO_JSON(Policy, policy_);
      };
      friend void from_json(const Darabonba::Json& j, Policies& obj) { 
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
      };
      Policies() = default ;
      Policies(const Policies &) = default ;
      Policies(Policies &&) = default ;
      Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policies() = default ;
      Policies& operator=(const Policies &) = default ;
      Policies& operator=(Policies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Policy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Policy& obj) { 
          DARABONBA_PTR_TO_JSON(AttachDate, attachDate_);
          DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
          DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        };
        friend void from_json(const Darabonba::Json& j, Policy& obj) { 
          DARABONBA_PTR_FROM_JSON(AttachDate, attachDate_);
          DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
          DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
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
        virtual bool empty() const override { return this->attachDate_ == nullptr
        && this->defaultVersion_ == nullptr && this->description_ == nullptr && this->policyName_ == nullptr && this->policyType_ == nullptr; };
        // attachDate Field Functions 
        bool hasAttachDate() const { return this->attachDate_ != nullptr;};
        void deleteAttachDate() { this->attachDate_ = nullptr;};
        inline string getAttachDate() const { DARABONBA_PTR_GET_DEFAULT(attachDate_, "") };
        inline Policy& setAttachDate(string attachDate) { DARABONBA_PTR_SET_VALUE(attachDate_, attachDate) };


        // defaultVersion Field Functions 
        bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
        void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
        inline string getDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, "") };
        inline Policy& setDefaultVersion(string defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Policy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


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


      protected:
        shared_ptr<string> attachDate_ {};
        shared_ptr<string> defaultVersion_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> policyName_ {};
        shared_ptr<string> policyType_ {};
      };

      virtual bool empty() const override { return this->policy_ == nullptr; };
      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline const vector<Policies::Policy> & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, vector<Policies::Policy>) };
      inline vector<Policies::Policy> getPolicy() { DARABONBA_PTR_GET(policy_, vector<Policies::Policy>) };
      inline Policies& setPolicy(const vector<Policies::Policy> & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
      inline Policies& setPolicy(vector<Policies::Policy> && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    protected:
      shared_ptr<vector<Policies::Policy>> policy_ {};
    };

    virtual bool empty() const override { return this->policies_ == nullptr
        && this->requestId_ == nullptr; };
    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const ListPoliciesForRoleResponseBody::Policies & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, ListPoliciesForRoleResponseBody::Policies) };
    inline ListPoliciesForRoleResponseBody::Policies getPolicies() { DARABONBA_PTR_GET(policies_, ListPoliciesForRoleResponseBody::Policies) };
    inline ListPoliciesForRoleResponseBody& setPolicies(const ListPoliciesForRoleResponseBody::Policies & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline ListPoliciesForRoleResponseBody& setPolicies(ListPoliciesForRoleResponseBody::Policies && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPoliciesForRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListPoliciesForRoleResponseBody::Policies> policies_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif

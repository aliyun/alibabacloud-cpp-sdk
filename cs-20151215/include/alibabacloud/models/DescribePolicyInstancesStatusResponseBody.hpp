// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYINSTANCESSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYINSTANCESSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyInstancesStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyInstancesStatusResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(instances_severity_count, instancesSeverityCount_);
      DARABONBA_PTR_TO_JSON(policy_instances, policyInstances_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyInstancesStatusResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(instances_severity_count, instancesSeverityCount_);
      DARABONBA_PTR_FROM_JSON(policy_instances, policyInstances_);
    };
    DescribePolicyInstancesStatusResponseBody() = default ;
    DescribePolicyInstancesStatusResponseBody(const DescribePolicyInstancesStatusResponseBody &) = default ;
    DescribePolicyInstancesStatusResponseBody(DescribePolicyInstancesStatusResponseBody &&) = default ;
    DescribePolicyInstancesStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyInstancesStatusResponseBody() = default ;
    DescribePolicyInstancesStatusResponseBody& operator=(const DescribePolicyInstancesStatusResponseBody &) = default ;
    DescribePolicyInstancesStatusResponseBody& operator=(DescribePolicyInstancesStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicyInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyInstances& obj) { 
        DARABONBA_PTR_TO_JSON(policy_category, policyCategory_);
        DARABONBA_PTR_TO_JSON(policy_description, policyDescription_);
        DARABONBA_PTR_TO_JSON(policy_instances_count, policyInstancesCount_);
        DARABONBA_PTR_TO_JSON(policy_name, policyName_);
        DARABONBA_PTR_TO_JSON(policy_severity, policySeverity_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(policy_category, policyCategory_);
        DARABONBA_PTR_FROM_JSON(policy_description, policyDescription_);
        DARABONBA_PTR_FROM_JSON(policy_instances_count, policyInstancesCount_);
        DARABONBA_PTR_FROM_JSON(policy_name, policyName_);
        DARABONBA_PTR_FROM_JSON(policy_severity, policySeverity_);
      };
      PolicyInstances() = default ;
      PolicyInstances(const PolicyInstances &) = default ;
      PolicyInstances(PolicyInstances &&) = default ;
      PolicyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyInstances() = default ;
      PolicyInstances& operator=(const PolicyInstances &) = default ;
      PolicyInstances& operator=(PolicyInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->policyCategory_ == nullptr
        && this->policyDescription_ == nullptr && this->policyInstancesCount_ == nullptr && this->policyName_ == nullptr && this->policySeverity_ == nullptr; };
      // policyCategory Field Functions 
      bool hasPolicyCategory() const { return this->policyCategory_ != nullptr;};
      void deletePolicyCategory() { this->policyCategory_ = nullptr;};
      inline string getPolicyCategory() const { DARABONBA_PTR_GET_DEFAULT(policyCategory_, "") };
      inline PolicyInstances& setPolicyCategory(string policyCategory) { DARABONBA_PTR_SET_VALUE(policyCategory_, policyCategory) };


      // policyDescription Field Functions 
      bool hasPolicyDescription() const { return this->policyDescription_ != nullptr;};
      void deletePolicyDescription() { this->policyDescription_ = nullptr;};
      inline string getPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(policyDescription_, "") };
      inline PolicyInstances& setPolicyDescription(string policyDescription) { DARABONBA_PTR_SET_VALUE(policyDescription_, policyDescription) };


      // policyInstancesCount Field Functions 
      bool hasPolicyInstancesCount() const { return this->policyInstancesCount_ != nullptr;};
      void deletePolicyInstancesCount() { this->policyInstancesCount_ = nullptr;};
      inline int64_t getPolicyInstancesCount() const { DARABONBA_PTR_GET_DEFAULT(policyInstancesCount_, 0L) };
      inline PolicyInstances& setPolicyInstancesCount(int64_t policyInstancesCount) { DARABONBA_PTR_SET_VALUE(policyInstancesCount_, policyInstancesCount) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline PolicyInstances& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // policySeverity Field Functions 
      bool hasPolicySeverity() const { return this->policySeverity_ != nullptr;};
      void deletePolicySeverity() { this->policySeverity_ = nullptr;};
      inline string getPolicySeverity() const { DARABONBA_PTR_GET_DEFAULT(policySeverity_, "") };
      inline PolicyInstances& setPolicySeverity(string policySeverity) { DARABONBA_PTR_SET_VALUE(policySeverity_, policySeverity) };


    protected:
      // The type of the policy. For more information about different types of policies and their descriptions, see [Predefined security policies of ACK](https://help.aliyun.com/document_detail/359819.html).
      shared_ptr<string> policyCategory_ {};
      // The description of the policy.
      shared_ptr<string> policyDescription_ {};
      // The number of policy instances that are deployed. If this parameter is empty, no policy instance is deployed.
      shared_ptr<int64_t> policyInstancesCount_ {};
      // The name of the policy.
      shared_ptr<string> policyName_ {};
      // The severity level of the policy.
      shared_ptr<string> policySeverity_ {};
    };

    virtual bool empty() const override { return this->instancesSeverityCount_ == nullptr
        && this->policyInstances_ == nullptr; };
    // instancesSeverityCount Field Functions 
    bool hasInstancesSeverityCount() const { return this->instancesSeverityCount_ != nullptr;};
    void deleteInstancesSeverityCount() { this->instancesSeverityCount_ = nullptr;};
    inline     const Darabonba::Json & getInstancesSeverityCount() const { DARABONBA_GET(instancesSeverityCount_) };
    Darabonba::Json & getInstancesSeverityCount() { DARABONBA_GET(instancesSeverityCount_) };
    inline DescribePolicyInstancesStatusResponseBody& setInstancesSeverityCount(const Darabonba::Json & instancesSeverityCount) { DARABONBA_SET_VALUE(instancesSeverityCount_, instancesSeverityCount) };
    inline DescribePolicyInstancesStatusResponseBody& setInstancesSeverityCount(Darabonba::Json && instancesSeverityCount) { DARABONBA_SET_RVALUE(instancesSeverityCount_, instancesSeverityCount) };


    // policyInstances Field Functions 
    bool hasPolicyInstances() const { return this->policyInstances_ != nullptr;};
    void deletePolicyInstances() { this->policyInstances_ = nullptr;};
    inline const vector<DescribePolicyInstancesStatusResponseBody::PolicyInstances> & getPolicyInstances() const { DARABONBA_PTR_GET_CONST(policyInstances_, vector<DescribePolicyInstancesStatusResponseBody::PolicyInstances>) };
    inline vector<DescribePolicyInstancesStatusResponseBody::PolicyInstances> getPolicyInstances() { DARABONBA_PTR_GET(policyInstances_, vector<DescribePolicyInstancesStatusResponseBody::PolicyInstances>) };
    inline DescribePolicyInstancesStatusResponseBody& setPolicyInstances(const vector<DescribePolicyInstancesStatusResponseBody::PolicyInstances> & policyInstances) { DARABONBA_PTR_SET_VALUE(policyInstances_, policyInstances) };
    inline DescribePolicyInstancesStatusResponseBody& setPolicyInstances(vector<DescribePolicyInstancesStatusResponseBody::PolicyInstances> && policyInstances) { DARABONBA_PTR_SET_RVALUE(policyInstances_, policyInstances) };


  protected:
    // The number of policy instances that are deployed in the cluster at different severity levels.
    Darabonba::Json instancesSeverityCount_ {};
    // The number of policy instances of each policy type.
    shared_ptr<vector<DescribePolicyInstancesStatusResponseBody::PolicyInstances>> policyInstances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif

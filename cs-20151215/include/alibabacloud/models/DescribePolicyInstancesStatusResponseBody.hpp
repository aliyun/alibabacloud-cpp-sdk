// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYINSTANCESSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYINSTANCESSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePolicyInstancesStatusResponseBodyPolicyInstances.hpp>
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
    virtual bool empty() const override { this->instancesSeverityCount_ != nullptr
        && this->policyInstances_ != nullptr; };
    // instancesSeverityCount Field Functions 
    bool hasInstancesSeverityCount() const { return this->instancesSeverityCount_ != nullptr;};
    void deleteInstancesSeverityCount() { this->instancesSeverityCount_ = nullptr;};
    inline     const Darabonba::Json & instancesSeverityCount() const { DARABONBA_GET(instancesSeverityCount_) };
    Darabonba::Json & instancesSeverityCount() { DARABONBA_GET(instancesSeverityCount_) };
    inline DescribePolicyInstancesStatusResponseBody& setInstancesSeverityCount(const Darabonba::Json & instancesSeverityCount) { DARABONBA_SET_VALUE(instancesSeverityCount_, instancesSeverityCount) };
    inline DescribePolicyInstancesStatusResponseBody& setInstancesSeverityCount(Darabonba::Json & instancesSeverityCount) { DARABONBA_SET_RVALUE(instancesSeverityCount_, instancesSeverityCount) };


    // policyInstances Field Functions 
    bool hasPolicyInstances() const { return this->policyInstances_ != nullptr;};
    void deletePolicyInstances() { this->policyInstances_ = nullptr;};
    inline const vector<DescribePolicyInstancesStatusResponseBodyPolicyInstances> & policyInstances() const { DARABONBA_PTR_GET_CONST(policyInstances_, vector<DescribePolicyInstancesStatusResponseBodyPolicyInstances>) };
    inline vector<DescribePolicyInstancesStatusResponseBodyPolicyInstances> policyInstances() { DARABONBA_PTR_GET(policyInstances_, vector<DescribePolicyInstancesStatusResponseBodyPolicyInstances>) };
    inline DescribePolicyInstancesStatusResponseBody& setPolicyInstances(const vector<DescribePolicyInstancesStatusResponseBodyPolicyInstances> & policyInstances) { DARABONBA_PTR_SET_VALUE(policyInstances_, policyInstances) };
    inline DescribePolicyInstancesStatusResponseBody& setPolicyInstances(vector<DescribePolicyInstancesStatusResponseBodyPolicyInstances> && policyInstances) { DARABONBA_PTR_SET_RVALUE(policyInstances_, policyInstances) };


  protected:
    // The number of policy instances that are deployed in the cluster at different severity levels.
    Darabonba::Json instancesSeverityCount_ = nullptr;
    // The number of policy instances of each policy type.
    std::shared_ptr<vector<DescribePolicyInstancesStatusResponseBodyPolicyInstances>> policyInstances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif

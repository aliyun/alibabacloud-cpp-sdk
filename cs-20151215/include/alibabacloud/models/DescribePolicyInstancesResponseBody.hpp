// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ali_uid, aliUid_);
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(instance_name, instanceName_);
      DARABONBA_PTR_TO_JSON(policy_name, policyName_);
      DARABONBA_PTR_TO_JSON(policy_category, policyCategory_);
      DARABONBA_PTR_TO_JSON(policy_description, policyDescription_);
      DARABONBA_PTR_TO_JSON(policy_parameters, policyParameters_);
      DARABONBA_PTR_TO_JSON(policy_severity, policySeverity_);
      DARABONBA_PTR_TO_JSON(policy_scope, policyScope_);
      DARABONBA_PTR_TO_JSON(policy_action, policyAction_);
      DARABONBA_PTR_TO_JSON(Created, created_);
      DARABONBA_PTR_TO_JSON(Updated, updated_);
      DARABONBA_PTR_TO_JSON(resource_id, resourceId_);
      DARABONBA_PTR_TO_JSON(total_violations, totalViolations_);
      DARABONBA_PTR_TO_JSON(is_deleted, isDeleted_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ali_uid, aliUid_);
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(instance_name, instanceName_);
      DARABONBA_PTR_FROM_JSON(policy_name, policyName_);
      DARABONBA_PTR_FROM_JSON(policy_category, policyCategory_);
      DARABONBA_PTR_FROM_JSON(policy_description, policyDescription_);
      DARABONBA_PTR_FROM_JSON(policy_parameters, policyParameters_);
      DARABONBA_PTR_FROM_JSON(policy_severity, policySeverity_);
      DARABONBA_PTR_FROM_JSON(policy_scope, policyScope_);
      DARABONBA_PTR_FROM_JSON(policy_action, policyAction_);
      DARABONBA_PTR_FROM_JSON(Created, created_);
      DARABONBA_PTR_FROM_JSON(Updated, updated_);
      DARABONBA_PTR_FROM_JSON(resource_id, resourceId_);
      DARABONBA_PTR_FROM_JSON(total_violations, totalViolations_);
      DARABONBA_PTR_FROM_JSON(is_deleted, isDeleted_);
    };
    DescribePolicyInstancesResponseBody() = default ;
    DescribePolicyInstancesResponseBody(const DescribePolicyInstancesResponseBody &) = default ;
    DescribePolicyInstancesResponseBody(DescribePolicyInstancesResponseBody &&) = default ;
    DescribePolicyInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyInstancesResponseBody() = default ;
    DescribePolicyInstancesResponseBody& operator=(const DescribePolicyInstancesResponseBody &) = default ;
    DescribePolicyInstancesResponseBody& operator=(DescribePolicyInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->clusterId_ != nullptr && this->instanceName_ != nullptr && this->policyName_ != nullptr && this->policyCategory_ != nullptr && this->policyDescription_ != nullptr
        && this->policyParameters_ != nullptr && this->policySeverity_ != nullptr && this->policyScope_ != nullptr && this->policyAction_ != nullptr && this->created_ != nullptr
        && this->updated_ != nullptr && this->resourceId_ != nullptr && this->totalViolations_ != nullptr && this->isDeleted_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline DescribePolicyInstancesResponseBody& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribePolicyInstancesResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribePolicyInstancesResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DescribePolicyInstancesResponseBody& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyCategory Field Functions 
    bool hasPolicyCategory() const { return this->policyCategory_ != nullptr;};
    void deletePolicyCategory() { this->policyCategory_ = nullptr;};
    inline string policyCategory() const { DARABONBA_PTR_GET_DEFAULT(policyCategory_, "") };
    inline DescribePolicyInstancesResponseBody& setPolicyCategory(string policyCategory) { DARABONBA_PTR_SET_VALUE(policyCategory_, policyCategory) };


    // policyDescription Field Functions 
    bool hasPolicyDescription() const { return this->policyDescription_ != nullptr;};
    void deletePolicyDescription() { this->policyDescription_ = nullptr;};
    inline string policyDescription() const { DARABONBA_PTR_GET_DEFAULT(policyDescription_, "") };
    inline DescribePolicyInstancesResponseBody& setPolicyDescription(string policyDescription) { DARABONBA_PTR_SET_VALUE(policyDescription_, policyDescription) };


    // policyParameters Field Functions 
    bool hasPolicyParameters() const { return this->policyParameters_ != nullptr;};
    void deletePolicyParameters() { this->policyParameters_ = nullptr;};
    inline string policyParameters() const { DARABONBA_PTR_GET_DEFAULT(policyParameters_, "") };
    inline DescribePolicyInstancesResponseBody& setPolicyParameters(string policyParameters) { DARABONBA_PTR_SET_VALUE(policyParameters_, policyParameters) };


    // policySeverity Field Functions 
    bool hasPolicySeverity() const { return this->policySeverity_ != nullptr;};
    void deletePolicySeverity() { this->policySeverity_ = nullptr;};
    inline string policySeverity() const { DARABONBA_PTR_GET_DEFAULT(policySeverity_, "") };
    inline DescribePolicyInstancesResponseBody& setPolicySeverity(string policySeverity) { DARABONBA_PTR_SET_VALUE(policySeverity_, policySeverity) };


    // policyScope Field Functions 
    bool hasPolicyScope() const { return this->policyScope_ != nullptr;};
    void deletePolicyScope() { this->policyScope_ = nullptr;};
    inline string policyScope() const { DARABONBA_PTR_GET_DEFAULT(policyScope_, "") };
    inline DescribePolicyInstancesResponseBody& setPolicyScope(string policyScope) { DARABONBA_PTR_SET_VALUE(policyScope_, policyScope) };


    // policyAction Field Functions 
    bool hasPolicyAction() const { return this->policyAction_ != nullptr;};
    void deletePolicyAction() { this->policyAction_ = nullptr;};
    inline string policyAction() const { DARABONBA_PTR_GET_DEFAULT(policyAction_, "") };
    inline DescribePolicyInstancesResponseBody& setPolicyAction(string policyAction) { DARABONBA_PTR_SET_VALUE(policyAction_, policyAction) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline DescribePolicyInstancesResponseBody& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline string updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
    inline DescribePolicyInstancesResponseBody& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribePolicyInstancesResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // totalViolations Field Functions 
    bool hasTotalViolations() const { return this->totalViolations_ != nullptr;};
    void deleteTotalViolations() { this->totalViolations_ = nullptr;};
    inline int64_t totalViolations() const { DARABONBA_PTR_GET_DEFAULT(totalViolations_, 0L) };
    inline DescribePolicyInstancesResponseBody& setTotalViolations(int64_t totalViolations) { DARABONBA_PTR_SET_VALUE(totalViolations_, totalViolations) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline int64_t isDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, 0L) };
    inline DescribePolicyInstancesResponseBody& setIsDeleted(int64_t isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


  protected:
    // The UID of the Alibaba Cloud account that is used to deploy the policy instance.
    std::shared_ptr<string> aliUid_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the policy instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The name of the policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The type of the policy.
    std::shared_ptr<string> policyCategory_ = nullptr;
    // The description of the policy template.
    std::shared_ptr<string> policyDescription_ = nullptr;
    // The parameters of the policy instance.
    std::shared_ptr<string> policyParameters_ = nullptr;
    // The severity level of the policy instance.
    std::shared_ptr<string> policySeverity_ = nullptr;
    // The applicable scope of the policy instance.
    // 
    // A value of \\* indicates all namespaces in the cluster. This is the default value.
    // 
    // Multiple namespaces are separated by commas (,).
    std::shared_ptr<string> policyScope_ = nullptr;
    // The action of the policy. Valid values:
    // 
    // *   `deny`: Deployments that match the policy are denied.
    // *   `warn`: Alerts are generated for deployments that match the policy.
    std::shared_ptr<string> policyAction_ = nullptr;
    // The creation time of the instance. This parameter is deprecated.
    std::shared_ptr<string> created_ = nullptr;
    // The update time of the instance. This parameter is deprecated.
    std::shared_ptr<string> updated_ = nullptr;
    // The ID of the resource. This parameter is deprecated.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The number of violations processed in the cluster. This parameter is deprecated.
    std::shared_ptr<int64_t> totalViolations_ = nullptr;
    // The status of the deletion. This parameter is deprecated.
    std::shared_ptr<int64_t> isDeleted_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif

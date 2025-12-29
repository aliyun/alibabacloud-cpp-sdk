// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYINSTANCESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYINSTANCESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyInstancesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyInstancesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyInstancesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribePolicyInstancesResponse() = default ;
    DescribePolicyInstancesResponse(const DescribePolicyInstancesResponse &) = default ;
    DescribePolicyInstancesResponse(DescribePolicyInstancesResponse &&) = default ;
    DescribePolicyInstancesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyInstancesResponse() = default ;
    DescribePolicyInstancesResponse& operator=(const DescribePolicyInstancesResponse &) = default ;
    DescribePolicyInstancesResponse& operator=(DescribePolicyInstancesResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
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
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->clusterId_ == nullptr && this->instanceName_ == nullptr && this->policyName_ == nullptr && this->policyCategory_ == nullptr && this->policyDescription_ == nullptr
        && this->policyParameters_ == nullptr && this->policySeverity_ == nullptr && this->policyScope_ == nullptr && this->policyAction_ == nullptr && this->created_ == nullptr
        && this->updated_ == nullptr && this->resourceId_ == nullptr && this->totalViolations_ == nullptr && this->isDeleted_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
      inline Body& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Body& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Body& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline Body& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // policyCategory Field Functions 
      bool hasPolicyCategory() const { return this->policyCategory_ != nullptr;};
      void deletePolicyCategory() { this->policyCategory_ = nullptr;};
      inline string getPolicyCategory() const { DARABONBA_PTR_GET_DEFAULT(policyCategory_, "") };
      inline Body& setPolicyCategory(string policyCategory) { DARABONBA_PTR_SET_VALUE(policyCategory_, policyCategory) };


      // policyDescription Field Functions 
      bool hasPolicyDescription() const { return this->policyDescription_ != nullptr;};
      void deletePolicyDescription() { this->policyDescription_ = nullptr;};
      inline string getPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(policyDescription_, "") };
      inline Body& setPolicyDescription(string policyDescription) { DARABONBA_PTR_SET_VALUE(policyDescription_, policyDescription) };


      // policyParameters Field Functions 
      bool hasPolicyParameters() const { return this->policyParameters_ != nullptr;};
      void deletePolicyParameters() { this->policyParameters_ = nullptr;};
      inline string getPolicyParameters() const { DARABONBA_PTR_GET_DEFAULT(policyParameters_, "") };
      inline Body& setPolicyParameters(string policyParameters) { DARABONBA_PTR_SET_VALUE(policyParameters_, policyParameters) };


      // policySeverity Field Functions 
      bool hasPolicySeverity() const { return this->policySeverity_ != nullptr;};
      void deletePolicySeverity() { this->policySeverity_ = nullptr;};
      inline string getPolicySeverity() const { DARABONBA_PTR_GET_DEFAULT(policySeverity_, "") };
      inline Body& setPolicySeverity(string policySeverity) { DARABONBA_PTR_SET_VALUE(policySeverity_, policySeverity) };


      // policyScope Field Functions 
      bool hasPolicyScope() const { return this->policyScope_ != nullptr;};
      void deletePolicyScope() { this->policyScope_ = nullptr;};
      inline string getPolicyScope() const { DARABONBA_PTR_GET_DEFAULT(policyScope_, "") };
      inline Body& setPolicyScope(string policyScope) { DARABONBA_PTR_SET_VALUE(policyScope_, policyScope) };


      // policyAction Field Functions 
      bool hasPolicyAction() const { return this->policyAction_ != nullptr;};
      void deletePolicyAction() { this->policyAction_ = nullptr;};
      inline string getPolicyAction() const { DARABONBA_PTR_GET_DEFAULT(policyAction_, "") };
      inline Body& setPolicyAction(string policyAction) { DARABONBA_PTR_SET_VALUE(policyAction_, policyAction) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
      inline Body& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline string getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
      inline Body& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Body& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // totalViolations Field Functions 
      bool hasTotalViolations() const { return this->totalViolations_ != nullptr;};
      void deleteTotalViolations() { this->totalViolations_ = nullptr;};
      inline int64_t getTotalViolations() const { DARABONBA_PTR_GET_DEFAULT(totalViolations_, 0L) };
      inline Body& setTotalViolations(int64_t totalViolations) { DARABONBA_PTR_SET_VALUE(totalViolations_, totalViolations) };


      // isDeleted Field Functions 
      bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
      void deleteIsDeleted() { this->isDeleted_ = nullptr;};
      inline int64_t getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, 0L) };
      inline Body& setIsDeleted(int64_t isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    protected:
      // The UID of the Alibaba Cloud account that is used to deploy the policy instance.
      shared_ptr<string> aliUid_ {};
      // The ID of the cluster.
      shared_ptr<string> clusterId_ {};
      // The name of the policy instance.
      shared_ptr<string> instanceName_ {};
      // The name of the policy.
      shared_ptr<string> policyName_ {};
      // The type of the policy.
      shared_ptr<string> policyCategory_ {};
      // The description of the policy template.
      shared_ptr<string> policyDescription_ {};
      // The parameters of the policy instance.
      shared_ptr<string> policyParameters_ {};
      // The severity level of the policy instance.
      shared_ptr<string> policySeverity_ {};
      // The applicable scope of the policy instance.
      // 
      // A value of \\* indicates all namespaces in the cluster. This is the default value.
      // 
      // Multiple namespaces are separated by commas (,).
      shared_ptr<string> policyScope_ {};
      // The action of the policy. Valid values:
      // 
      // *   `deny`: Deployments that match the policy are denied.
      // *   `warn`: Alerts are generated for deployments that match the policy.
      shared_ptr<string> policyAction_ {};
      // The creation time of the instance. This parameter is deprecated.
      shared_ptr<string> created_ {};
      // The update time of the instance. This parameter is deprecated.
      shared_ptr<string> updated_ {};
      // The ID of the resource. This parameter is deprecated.
      shared_ptr<string> resourceId_ {};
      // The number of violations processed in the cluster. This parameter is deprecated.
      shared_ptr<int64_t> totalViolations_ {};
      // The status of the deletion. This parameter is deprecated.
      shared_ptr<int64_t> isDeleted_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline DescribePolicyInstancesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribePolicyInstancesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribePolicyInstancesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<DescribePolicyInstancesResponse::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<DescribePolicyInstancesResponse::Body>) };
    inline vector<DescribePolicyInstancesResponse::Body> getBody() { DARABONBA_PTR_GET(body_, vector<DescribePolicyInstancesResponse::Body>) };
    inline DescribePolicyInstancesResponse& setBody(const vector<DescribePolicyInstancesResponse::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribePolicyInstancesResponse& setBody(vector<DescribePolicyInstancesResponse::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<vector<DescribePolicyInstancesResponse::Body>> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif

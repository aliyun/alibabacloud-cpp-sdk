// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYASSETSCOPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYASSETSCOPEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SetPolicyAssetScopeRequestDatabases.hpp>
#include <alibabacloud/models/SetPolicyAssetScopeRequestHostGroups.hpp>
#include <alibabacloud/models/SetPolicyAssetScopeRequestHosts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyAssetScopeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyAssetScopeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(HostGroups, hostGroups_);
      DARABONBA_PTR_TO_JSON(Hosts, hosts_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyAssetScopeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(HostGroups, hostGroups_);
      DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
    };
    SetPolicyAssetScopeRequest() = default ;
    SetPolicyAssetScopeRequest(const SetPolicyAssetScopeRequest &) = default ;
    SetPolicyAssetScopeRequest(SetPolicyAssetScopeRequest &&) = default ;
    SetPolicyAssetScopeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyAssetScopeRequest() = default ;
    SetPolicyAssetScopeRequest& operator=(const SetPolicyAssetScopeRequest &) = default ;
    SetPolicyAssetScopeRequest& operator=(SetPolicyAssetScopeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databases_ != nullptr
        && this->hostGroups_ != nullptr && this->hosts_ != nullptr && this->instanceId_ != nullptr && this->policyId_ != nullptr && this->regionId_ != nullptr
        && this->scopeType_ != nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<SetPolicyAssetScopeRequestDatabases> & databases() const { DARABONBA_PTR_GET_CONST(databases_, vector<SetPolicyAssetScopeRequestDatabases>) };
    inline vector<SetPolicyAssetScopeRequestDatabases> databases() { DARABONBA_PTR_GET(databases_, vector<SetPolicyAssetScopeRequestDatabases>) };
    inline SetPolicyAssetScopeRequest& setDatabases(const vector<SetPolicyAssetScopeRequestDatabases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline SetPolicyAssetScopeRequest& setDatabases(vector<SetPolicyAssetScopeRequestDatabases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // hostGroups Field Functions 
    bool hasHostGroups() const { return this->hostGroups_ != nullptr;};
    void deleteHostGroups() { this->hostGroups_ = nullptr;};
    inline const vector<SetPolicyAssetScopeRequestHostGroups> & hostGroups() const { DARABONBA_PTR_GET_CONST(hostGroups_, vector<SetPolicyAssetScopeRequestHostGroups>) };
    inline vector<SetPolicyAssetScopeRequestHostGroups> hostGroups() { DARABONBA_PTR_GET(hostGroups_, vector<SetPolicyAssetScopeRequestHostGroups>) };
    inline SetPolicyAssetScopeRequest& setHostGroups(const vector<SetPolicyAssetScopeRequestHostGroups> & hostGroups) { DARABONBA_PTR_SET_VALUE(hostGroups_, hostGroups) };
    inline SetPolicyAssetScopeRequest& setHostGroups(vector<SetPolicyAssetScopeRequestHostGroups> && hostGroups) { DARABONBA_PTR_SET_RVALUE(hostGroups_, hostGroups) };


    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const vector<SetPolicyAssetScopeRequestHosts> & hosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<SetPolicyAssetScopeRequestHosts>) };
    inline vector<SetPolicyAssetScopeRequestHosts> hosts() { DARABONBA_PTR_GET(hosts_, vector<SetPolicyAssetScopeRequestHosts>) };
    inline SetPolicyAssetScopeRequest& setHosts(const vector<SetPolicyAssetScopeRequestHosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline SetPolicyAssetScopeRequest& setHosts(vector<SetPolicyAssetScopeRequestHosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPolicyAssetScopeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline SetPolicyAssetScopeRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetPolicyAssetScopeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string scopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline SetPolicyAssetScopeRequest& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


  protected:
    // The databases to which the control policy applies.
    // 
    // >  This parameter is required if ScopeType is set to Database. You can specify up to 500 databases.
    std::shared_ptr<vector<SetPolicyAssetScopeRequestDatabases>> databases_ = nullptr;
    // The asset groups to which the control policy applies.
    // 
    // > This parameter is required if ScopeType is set to HostGroup. You can specify up to 100 asset groups.
    std::shared_ptr<vector<SetPolicyAssetScopeRequestHostGroups>> hostGroups_ = nullptr;
    // The hosts to which the control policy applies.
    // 
    // > This parameter is required if ScopeType is set to Host. You can specify up to 500 hosts.
    std::shared_ptr<vector<SetPolicyAssetScopeRequestHosts>> hosts_ = nullptr;
    // The bastion host ID.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the control policy that you want to modify.
    // 
    // >  You can call the [ListPolicies](https://help.aliyun.com/document_detail/2758876.html) operation to query the control policy ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
    // The region ID of the bastion host.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The scope of assets to which the control policy applies. Valid values:
    // 
    // * **All**: The control policy applies to all assets.
    // * **Host**: The control policy applies to specified hosts.
    // * **Database**: The control policy applies to specified databases.
    // * **HostGroup**: The control policy applies to specified asset groups.
    // 
    // This parameter is required.
    std::shared_ptr<string> scopeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif

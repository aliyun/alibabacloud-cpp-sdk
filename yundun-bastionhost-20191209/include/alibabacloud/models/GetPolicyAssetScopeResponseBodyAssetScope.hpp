// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYASSETSCOPERESPONSEBODYASSETSCOPE_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYASSETSCOPERESPONSEBODYASSETSCOPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPolicyAssetScopeResponseBodyAssetScopeDatabases.hpp>
#include <alibabacloud/models/GetPolicyAssetScopeResponseBodyAssetScopeHostGroups.hpp>
#include <alibabacloud/models/GetPolicyAssetScopeResponseBodyAssetScopeHosts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetPolicyAssetScopeResponseBodyAssetScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyAssetScopeResponseBodyAssetScope& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(HostGroups, hostGroups_);
      DARABONBA_PTR_TO_JSON(Hosts, hosts_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyAssetScopeResponseBodyAssetScope& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(HostGroups, hostGroups_);
      DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
    };
    GetPolicyAssetScopeResponseBodyAssetScope() = default ;
    GetPolicyAssetScopeResponseBodyAssetScope(const GetPolicyAssetScopeResponseBodyAssetScope &) = default ;
    GetPolicyAssetScopeResponseBodyAssetScope(GetPolicyAssetScopeResponseBodyAssetScope &&) = default ;
    GetPolicyAssetScopeResponseBodyAssetScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyAssetScopeResponseBodyAssetScope() = default ;
    GetPolicyAssetScopeResponseBodyAssetScope& operator=(const GetPolicyAssetScopeResponseBodyAssetScope &) = default ;
    GetPolicyAssetScopeResponseBodyAssetScope& operator=(GetPolicyAssetScopeResponseBodyAssetScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databases_ != nullptr
        && this->hostGroups_ != nullptr && this->hosts_ != nullptr && this->scopeType_ != nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeDatabases> & databases() const { DARABONBA_PTR_GET_CONST(databases_, vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeDatabases>) };
    inline vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeDatabases> databases() { DARABONBA_PTR_GET(databases_, vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeDatabases>) };
    inline GetPolicyAssetScopeResponseBodyAssetScope& setDatabases(const vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeDatabases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline GetPolicyAssetScopeResponseBodyAssetScope& setDatabases(vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeDatabases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // hostGroups Field Functions 
    bool hasHostGroups() const { return this->hostGroups_ != nullptr;};
    void deleteHostGroups() { this->hostGroups_ = nullptr;};
    inline const vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeHostGroups> & hostGroups() const { DARABONBA_PTR_GET_CONST(hostGroups_, vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeHostGroups>) };
    inline vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeHostGroups> hostGroups() { DARABONBA_PTR_GET(hostGroups_, vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeHostGroups>) };
    inline GetPolicyAssetScopeResponseBodyAssetScope& setHostGroups(const vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeHostGroups> & hostGroups) { DARABONBA_PTR_SET_VALUE(hostGroups_, hostGroups) };
    inline GetPolicyAssetScopeResponseBodyAssetScope& setHostGroups(vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeHostGroups> && hostGroups) { DARABONBA_PTR_SET_RVALUE(hostGroups_, hostGroups) };


    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeHosts> & hosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeHosts>) };
    inline vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeHosts> hosts() { DARABONBA_PTR_GET(hosts_, vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeHosts>) };
    inline GetPolicyAssetScopeResponseBodyAssetScope& setHosts(const vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeHosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline GetPolicyAssetScopeResponseBodyAssetScope& setHosts(vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeHosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string scopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline GetPolicyAssetScopeResponseBodyAssetScope& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


  protected:
    // The databases and database accounts to which the control policy applies.
    std::shared_ptr<vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeDatabases>> databases_ = nullptr;
    // The asset groups and asset accounts to which the control policy applies.
    std::shared_ptr<vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeHostGroups>> hostGroups_ = nullptr;
    // The hosts and host accounts to which the control policy applies.
    std::shared_ptr<vector<Models::GetPolicyAssetScopeResponseBodyAssetScopeHosts>> hosts_ = nullptr;
    // The scope of assets to which the control policy applies.
    // 
    // *   If **All** is returned for this parameter, the control policy applies to all assets.
    // 
    // *   If no value is returned for this parameter, the control policy applies to the assets specified in the return values of Databases, HostGroups, and Hosts.
    std::shared_ptr<string> scopeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYASSETSCOPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYASSETSCOPEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Hosts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Hosts& obj) { 
        DARABONBA_PTR_TO_JSON(AccountScopeType, accountScopeType_);
        DARABONBA_PTR_TO_JSON(HostAccountIds, hostAccountIds_);
        DARABONBA_PTR_TO_JSON(HostId, hostId_);
      };
      friend void from_json(const Darabonba::Json& j, Hosts& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountScopeType, accountScopeType_);
        DARABONBA_PTR_FROM_JSON(HostAccountIds, hostAccountIds_);
        DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      };
      Hosts() = default ;
      Hosts(const Hosts &) = default ;
      Hosts(Hosts &&) = default ;
      Hosts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Hosts() = default ;
      Hosts& operator=(const Hosts &) = default ;
      Hosts& operator=(Hosts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountScopeType_ == nullptr
        && this->hostAccountIds_ == nullptr && this->hostId_ == nullptr; };
      // accountScopeType Field Functions 
      bool hasAccountScopeType() const { return this->accountScopeType_ != nullptr;};
      void deleteAccountScopeType() { this->accountScopeType_ = nullptr;};
      inline string getAccountScopeType() const { DARABONBA_PTR_GET_DEFAULT(accountScopeType_, "") };
      inline Hosts& setAccountScopeType(string accountScopeType) { DARABONBA_PTR_SET_VALUE(accountScopeType_, accountScopeType) };


      // hostAccountIds Field Functions 
      bool hasHostAccountIds() const { return this->hostAccountIds_ != nullptr;};
      void deleteHostAccountIds() { this->hostAccountIds_ = nullptr;};
      inline const vector<string> & getHostAccountIds() const { DARABONBA_PTR_GET_CONST(hostAccountIds_, vector<string>) };
      inline vector<string> getHostAccountIds() { DARABONBA_PTR_GET(hostAccountIds_, vector<string>) };
      inline Hosts& setHostAccountIds(const vector<string> & hostAccountIds) { DARABONBA_PTR_SET_VALUE(hostAccountIds_, hostAccountIds) };
      inline Hosts& setHostAccountIds(vector<string> && hostAccountIds) { DARABONBA_PTR_SET_RVALUE(hostAccountIds_, hostAccountIds) };


      // hostId Field Functions 
      bool hasHostId() const { return this->hostId_ != nullptr;};
      void deleteHostId() { this->hostId_ = nullptr;};
      inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
      inline Hosts& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    protected:
      // The scope of host accounts to which the control policy applies. Valid values:
      // 
      // * **All**: The control policy applies to all accounts of the host.
      // * **AccountId**: The control policy applies specified accounts of the host.
      shared_ptr<string> accountScopeType_ {};
      // The host accounts to which the control policy applies.
      // 
      // > This parameter is required if AccountScopeType is set to AccountId.
      shared_ptr<vector<string>> hostAccountIds_ {};
      // The host ID.
      shared_ptr<string> hostId_ {};
    };

    class HostGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HostGroups& obj) { 
        DARABONBA_PTR_TO_JSON(AccountNames, accountNames_);
        DARABONBA_PTR_TO_JSON(AccountScopeType, accountScopeType_);
        DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, HostGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountNames, accountNames_);
        DARABONBA_PTR_FROM_JSON(AccountScopeType, accountScopeType_);
        DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
      };
      HostGroups() = default ;
      HostGroups(const HostGroups &) = default ;
      HostGroups(HostGroups &&) = default ;
      HostGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HostGroups() = default ;
      HostGroups& operator=(const HostGroups &) = default ;
      HostGroups& operator=(HostGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountNames_ == nullptr
        && this->accountScopeType_ == nullptr && this->hostGroupId_ == nullptr; };
      // accountNames Field Functions 
      bool hasAccountNames() const { return this->accountNames_ != nullptr;};
      void deleteAccountNames() { this->accountNames_ = nullptr;};
      inline const vector<string> & getAccountNames() const { DARABONBA_PTR_GET_CONST(accountNames_, vector<string>) };
      inline vector<string> getAccountNames() { DARABONBA_PTR_GET(accountNames_, vector<string>) };
      inline HostGroups& setAccountNames(const vector<string> & accountNames) { DARABONBA_PTR_SET_VALUE(accountNames_, accountNames) };
      inline HostGroups& setAccountNames(vector<string> && accountNames) { DARABONBA_PTR_SET_RVALUE(accountNames_, accountNames) };


      // accountScopeType Field Functions 
      bool hasAccountScopeType() const { return this->accountScopeType_ != nullptr;};
      void deleteAccountScopeType() { this->accountScopeType_ = nullptr;};
      inline string getAccountScopeType() const { DARABONBA_PTR_GET_DEFAULT(accountScopeType_, "") };
      inline HostGroups& setAccountScopeType(string accountScopeType) { DARABONBA_PTR_SET_VALUE(accountScopeType_, accountScopeType) };


      // hostGroupId Field Functions 
      bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
      void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
      inline string getHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
      inline HostGroups& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


    protected:
      // The asset accounts to which the control policy applies.
      // 
      // > This parameter is required if AccountScopeType is set to AccountName.
      shared_ptr<vector<string>> accountNames_ {};
      // The scope of asset accounts to which the control policy applies. Valid values:
      // 
      // * **All**: The control policy applies to all accounts in the asset group.
      // * **AccountName**: The control policy applies to specified accounts in the asset group.
      shared_ptr<string> accountScopeType_ {};
      // The asset group ID.
      shared_ptr<string> hostGroupId_ {};
    };

    class Databases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Databases& obj) { 
        DARABONBA_PTR_TO_JSON(AccountScopeType, accountScopeType_);
        DARABONBA_PTR_TO_JSON(DatabaseAccountIds, databaseAccountIds_);
        DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      };
      friend void from_json(const Darabonba::Json& j, Databases& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountScopeType, accountScopeType_);
        DARABONBA_PTR_FROM_JSON(DatabaseAccountIds, databaseAccountIds_);
        DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      };
      Databases() = default ;
      Databases(const Databases &) = default ;
      Databases(Databases &&) = default ;
      Databases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Databases() = default ;
      Databases& operator=(const Databases &) = default ;
      Databases& operator=(Databases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountScopeType_ == nullptr
        && this->databaseAccountIds_ == nullptr && this->databaseId_ == nullptr; };
      // accountScopeType Field Functions 
      bool hasAccountScopeType() const { return this->accountScopeType_ != nullptr;};
      void deleteAccountScopeType() { this->accountScopeType_ = nullptr;};
      inline string getAccountScopeType() const { DARABONBA_PTR_GET_DEFAULT(accountScopeType_, "") };
      inline Databases& setAccountScopeType(string accountScopeType) { DARABONBA_PTR_SET_VALUE(accountScopeType_, accountScopeType) };


      // databaseAccountIds Field Functions 
      bool hasDatabaseAccountIds() const { return this->databaseAccountIds_ != nullptr;};
      void deleteDatabaseAccountIds() { this->databaseAccountIds_ = nullptr;};
      inline const vector<string> & getDatabaseAccountIds() const { DARABONBA_PTR_GET_CONST(databaseAccountIds_, vector<string>) };
      inline vector<string> getDatabaseAccountIds() { DARABONBA_PTR_GET(databaseAccountIds_, vector<string>) };
      inline Databases& setDatabaseAccountIds(const vector<string> & databaseAccountIds) { DARABONBA_PTR_SET_VALUE(databaseAccountIds_, databaseAccountIds) };
      inline Databases& setDatabaseAccountIds(vector<string> && databaseAccountIds) { DARABONBA_PTR_SET_RVALUE(databaseAccountIds_, databaseAccountIds) };


      // databaseId Field Functions 
      bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
      void deleteDatabaseId() { this->databaseId_ = nullptr;};
      inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
      inline Databases& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    protected:
      // The scope of database accounts to which the control policy applies. Valid values:
      // 
      // *   **All**: The control policy applies to all database accounts of the database.
      // *   **AccountId**: The control policy applies to specified database accounts of the database.
      shared_ptr<string> accountScopeType_ {};
      // The database accounts to which the control policy applies.
      // 
      // >  This parameter is required if AccountScopeType is set to AccountId.
      shared_ptr<vector<string>> databaseAccountIds_ {};
      // The database ID.
      shared_ptr<string> databaseId_ {};
    };

    virtual bool empty() const override { return this->databases_ == nullptr
        && this->hostGroups_ == nullptr && this->hosts_ == nullptr && this->instanceId_ == nullptr && this->policyId_ == nullptr && this->regionId_ == nullptr
        && this->scopeType_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<SetPolicyAssetScopeRequest::Databases> & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, vector<SetPolicyAssetScopeRequest::Databases>) };
    inline vector<SetPolicyAssetScopeRequest::Databases> getDatabases() { DARABONBA_PTR_GET(databases_, vector<SetPolicyAssetScopeRequest::Databases>) };
    inline SetPolicyAssetScopeRequest& setDatabases(const vector<SetPolicyAssetScopeRequest::Databases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline SetPolicyAssetScopeRequest& setDatabases(vector<SetPolicyAssetScopeRequest::Databases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // hostGroups Field Functions 
    bool hasHostGroups() const { return this->hostGroups_ != nullptr;};
    void deleteHostGroups() { this->hostGroups_ = nullptr;};
    inline const vector<SetPolicyAssetScopeRequest::HostGroups> & getHostGroups() const { DARABONBA_PTR_GET_CONST(hostGroups_, vector<SetPolicyAssetScopeRequest::HostGroups>) };
    inline vector<SetPolicyAssetScopeRequest::HostGroups> getHostGroups() { DARABONBA_PTR_GET(hostGroups_, vector<SetPolicyAssetScopeRequest::HostGroups>) };
    inline SetPolicyAssetScopeRequest& setHostGroups(const vector<SetPolicyAssetScopeRequest::HostGroups> & hostGroups) { DARABONBA_PTR_SET_VALUE(hostGroups_, hostGroups) };
    inline SetPolicyAssetScopeRequest& setHostGroups(vector<SetPolicyAssetScopeRequest::HostGroups> && hostGroups) { DARABONBA_PTR_SET_RVALUE(hostGroups_, hostGroups) };


    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const vector<SetPolicyAssetScopeRequest::Hosts> & getHosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<SetPolicyAssetScopeRequest::Hosts>) };
    inline vector<SetPolicyAssetScopeRequest::Hosts> getHosts() { DARABONBA_PTR_GET(hosts_, vector<SetPolicyAssetScopeRequest::Hosts>) };
    inline SetPolicyAssetScopeRequest& setHosts(const vector<SetPolicyAssetScopeRequest::Hosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline SetPolicyAssetScopeRequest& setHosts(vector<SetPolicyAssetScopeRequest::Hosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPolicyAssetScopeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline SetPolicyAssetScopeRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetPolicyAssetScopeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline SetPolicyAssetScopeRequest& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


  protected:
    // The databases to which the control policy applies.
    // 
    // >  This parameter is required if ScopeType is set to Database. You can specify up to 500 databases.
    shared_ptr<vector<SetPolicyAssetScopeRequest::Databases>> databases_ {};
    // The asset groups to which the control policy applies.
    // 
    // > This parameter is required if ScopeType is set to HostGroup. You can specify up to 100 asset groups.
    shared_ptr<vector<SetPolicyAssetScopeRequest::HostGroups>> hostGroups_ {};
    // The hosts to which the control policy applies.
    // 
    // > This parameter is required if ScopeType is set to Host. You can specify up to 500 hosts.
    shared_ptr<vector<SetPolicyAssetScopeRequest::Hosts>> hosts_ {};
    // The bastion host ID.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the control policy that you want to modify.
    // 
    // >  You can call the [ListPolicies](https://help.aliyun.com/document_detail/2758876.html) operation to query the control policy ID.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
    // The region ID of the bastion host.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The scope of assets to which the control policy applies. Valid values:
    // 
    // * **All**: The control policy applies to all assets.
    // * **Host**: The control policy applies to specified hosts.
    // * **Database**: The control policy applies to specified databases.
    // * **HostGroup**: The control policy applies to specified asset groups.
    // 
    // This parameter is required.
    shared_ptr<string> scopeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif

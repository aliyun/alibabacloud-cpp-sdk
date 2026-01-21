// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYASSETSCOPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYASSETSCOPERESPONSEBODY_HPP_
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
  class GetPolicyAssetScopeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyAssetScopeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetScope, assetScope_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyAssetScopeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetScope, assetScope_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPolicyAssetScopeResponseBody() = default ;
    GetPolicyAssetScopeResponseBody(const GetPolicyAssetScopeResponseBody &) = default ;
    GetPolicyAssetScopeResponseBody(GetPolicyAssetScopeResponseBody &&) = default ;
    GetPolicyAssetScopeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyAssetScopeResponseBody() = default ;
    GetPolicyAssetScopeResponseBody& operator=(const GetPolicyAssetScopeResponseBody &) = default ;
    GetPolicyAssetScopeResponseBody& operator=(GetPolicyAssetScopeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssetScope : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssetScope& obj) { 
        DARABONBA_PTR_TO_JSON(Databases, databases_);
        DARABONBA_PTR_TO_JSON(HostGroups, hostGroups_);
        DARABONBA_PTR_TO_JSON(Hosts, hosts_);
        DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
      };
      friend void from_json(const Darabonba::Json& j, AssetScope& obj) { 
        DARABONBA_PTR_FROM_JSON(Databases, databases_);
        DARABONBA_PTR_FROM_JSON(HostGroups, hostGroups_);
        DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
        DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
      };
      AssetScope() = default ;
      AssetScope(const AssetScope &) = default ;
      AssetScope(AssetScope &&) = default ;
      AssetScope(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssetScope() = default ;
      AssetScope& operator=(const AssetScope &) = default ;
      AssetScope& operator=(AssetScope &&) = default ;
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
        // *   **All**: The control policy applies to all accounts of the host.
        // *   **AccountId**: The control policy applies to specified accounts of the host.
        shared_ptr<string> accountScopeType_ {};
        // The host accounts to which the control policy applies.
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
        shared_ptr<vector<string>> accountNames_ {};
        // The scope of asset accounts to which the control policy applies. Valid values:
        // 
        // *   **All**: The control policy applies to all accounts in the asset group.
        // *   **AccountName**: The control policy applies to specified accounts in the asset group.
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
        // The IDs of database accounts to which the control policy applies.
        shared_ptr<vector<string>> databaseAccountIds_ {};
        // The database ID.
        shared_ptr<string> databaseId_ {};
      };

      virtual bool empty() const override { return this->databases_ == nullptr
        && this->hostGroups_ == nullptr && this->hosts_ == nullptr && this->scopeType_ == nullptr; };
      // databases Field Functions 
      bool hasDatabases() const { return this->databases_ != nullptr;};
      void deleteDatabases() { this->databases_ = nullptr;};
      inline const vector<AssetScope::Databases> & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, vector<AssetScope::Databases>) };
      inline vector<AssetScope::Databases> getDatabases() { DARABONBA_PTR_GET(databases_, vector<AssetScope::Databases>) };
      inline AssetScope& setDatabases(const vector<AssetScope::Databases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
      inline AssetScope& setDatabases(vector<AssetScope::Databases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


      // hostGroups Field Functions 
      bool hasHostGroups() const { return this->hostGroups_ != nullptr;};
      void deleteHostGroups() { this->hostGroups_ = nullptr;};
      inline const vector<AssetScope::HostGroups> & getHostGroups() const { DARABONBA_PTR_GET_CONST(hostGroups_, vector<AssetScope::HostGroups>) };
      inline vector<AssetScope::HostGroups> getHostGroups() { DARABONBA_PTR_GET(hostGroups_, vector<AssetScope::HostGroups>) };
      inline AssetScope& setHostGroups(const vector<AssetScope::HostGroups> & hostGroups) { DARABONBA_PTR_SET_VALUE(hostGroups_, hostGroups) };
      inline AssetScope& setHostGroups(vector<AssetScope::HostGroups> && hostGroups) { DARABONBA_PTR_SET_RVALUE(hostGroups_, hostGroups) };


      // hosts Field Functions 
      bool hasHosts() const { return this->hosts_ != nullptr;};
      void deleteHosts() { this->hosts_ = nullptr;};
      inline const vector<AssetScope::Hosts> & getHosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<AssetScope::Hosts>) };
      inline vector<AssetScope::Hosts> getHosts() { DARABONBA_PTR_GET(hosts_, vector<AssetScope::Hosts>) };
      inline AssetScope& setHosts(const vector<AssetScope::Hosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
      inline AssetScope& setHosts(vector<AssetScope::Hosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


      // scopeType Field Functions 
      bool hasScopeType() const { return this->scopeType_ != nullptr;};
      void deleteScopeType() { this->scopeType_ = nullptr;};
      inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
      inline AssetScope& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    protected:
      // The databases and database accounts to which the control policy applies.
      shared_ptr<vector<AssetScope::Databases>> databases_ {};
      // The asset groups and asset accounts to which the control policy applies.
      shared_ptr<vector<AssetScope::HostGroups>> hostGroups_ {};
      // The hosts and host accounts to which the control policy applies.
      shared_ptr<vector<AssetScope::Hosts>> hosts_ {};
      // The scope of assets to which the control policy applies.
      // 
      // *   If **All** is returned for this parameter, the control policy applies to all assets.
      // 
      // *   If no value is returned for this parameter, the control policy applies to the assets specified in the return values of Databases, HostGroups, and Hosts.
      shared_ptr<string> scopeType_ {};
    };

    virtual bool empty() const override { return this->assetScope_ == nullptr
        && this->requestId_ == nullptr; };
    // assetScope Field Functions 
    bool hasAssetScope() const { return this->assetScope_ != nullptr;};
    void deleteAssetScope() { this->assetScope_ = nullptr;};
    inline const GetPolicyAssetScopeResponseBody::AssetScope & getAssetScope() const { DARABONBA_PTR_GET_CONST(assetScope_, GetPolicyAssetScopeResponseBody::AssetScope) };
    inline GetPolicyAssetScopeResponseBody::AssetScope getAssetScope() { DARABONBA_PTR_GET(assetScope_, GetPolicyAssetScopeResponseBody::AssetScope) };
    inline GetPolicyAssetScopeResponseBody& setAssetScope(const GetPolicyAssetScopeResponseBody::AssetScope & assetScope) { DARABONBA_PTR_SET_VALUE(assetScope_, assetScope) };
    inline GetPolicyAssetScopeResponseBody& setAssetScope(GetPolicyAssetScopeResponseBody::AssetScope && assetScope) { DARABONBA_PTR_SET_RVALUE(assetScope_, assetScope) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPolicyAssetScopeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The assets to which the control policy applies.
    shared_ptr<GetPolicyAssetScopeResponseBody::AssetScope> assetScope_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif

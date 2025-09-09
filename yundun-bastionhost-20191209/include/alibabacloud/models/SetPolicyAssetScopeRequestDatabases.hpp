// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYASSETSCOPEREQUESTDATABASES_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYASSETSCOPEREQUESTDATABASES_HPP_
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
  class SetPolicyAssetScopeRequestDatabases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyAssetScopeRequestDatabases& obj) { 
      DARABONBA_PTR_TO_JSON(AccountScopeType, accountScopeType_);
      DARABONBA_PTR_TO_JSON(DatabaseAccountIds, databaseAccountIds_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyAssetScopeRequestDatabases& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountScopeType, accountScopeType_);
      DARABONBA_PTR_FROM_JSON(DatabaseAccountIds, databaseAccountIds_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
    };
    SetPolicyAssetScopeRequestDatabases() = default ;
    SetPolicyAssetScopeRequestDatabases(const SetPolicyAssetScopeRequestDatabases &) = default ;
    SetPolicyAssetScopeRequestDatabases(SetPolicyAssetScopeRequestDatabases &&) = default ;
    SetPolicyAssetScopeRequestDatabases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyAssetScopeRequestDatabases() = default ;
    SetPolicyAssetScopeRequestDatabases& operator=(const SetPolicyAssetScopeRequestDatabases &) = default ;
    SetPolicyAssetScopeRequestDatabases& operator=(SetPolicyAssetScopeRequestDatabases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountScopeType_ != nullptr
        && this->databaseAccountIds_ != nullptr && this->databaseId_ != nullptr; };
    // accountScopeType Field Functions 
    bool hasAccountScopeType() const { return this->accountScopeType_ != nullptr;};
    void deleteAccountScopeType() { this->accountScopeType_ = nullptr;};
    inline string accountScopeType() const { DARABONBA_PTR_GET_DEFAULT(accountScopeType_, "") };
    inline SetPolicyAssetScopeRequestDatabases& setAccountScopeType(string accountScopeType) { DARABONBA_PTR_SET_VALUE(accountScopeType_, accountScopeType) };


    // databaseAccountIds Field Functions 
    bool hasDatabaseAccountIds() const { return this->databaseAccountIds_ != nullptr;};
    void deleteDatabaseAccountIds() { this->databaseAccountIds_ = nullptr;};
    inline const vector<string> & databaseAccountIds() const { DARABONBA_PTR_GET_CONST(databaseAccountIds_, vector<string>) };
    inline vector<string> databaseAccountIds() { DARABONBA_PTR_GET(databaseAccountIds_, vector<string>) };
    inline SetPolicyAssetScopeRequestDatabases& setDatabaseAccountIds(const vector<string> & databaseAccountIds) { DARABONBA_PTR_SET_VALUE(databaseAccountIds_, databaseAccountIds) };
    inline SetPolicyAssetScopeRequestDatabases& setDatabaseAccountIds(vector<string> && databaseAccountIds) { DARABONBA_PTR_SET_RVALUE(databaseAccountIds_, databaseAccountIds) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline SetPolicyAssetScopeRequestDatabases& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


  protected:
    // The scope of database accounts to which the control policy applies. Valid values:
    // 
    // *   **All**: The control policy applies to all database accounts of the database.
    // *   **AccountId**: The control policy applies to specified database accounts of the database.
    std::shared_ptr<string> accountScopeType_ = nullptr;
    // The database accounts to which the control policy applies.
    // 
    // >  This parameter is required if AccountScopeType is set to AccountId.
    std::shared_ptr<vector<string>> databaseAccountIds_ = nullptr;
    // The database ID.
    std::shared_ptr<string> databaseId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif

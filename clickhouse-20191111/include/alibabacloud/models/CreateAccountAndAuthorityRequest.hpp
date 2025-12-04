// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCOUNTANDAUTHORITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCOUNTANDAUTHORITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class CreateAccountAndAuthorityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccountAndAuthorityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_TO_JSON(AllowDatabases, allowDatabases_);
      DARABONBA_PTR_TO_JSON(AllowDictionaries, allowDictionaries_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DdlAuthority, ddlAuthority_);
      DARABONBA_PTR_TO_JSON(DmlAuthority, dmlAuthority_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TotalDatabases, totalDatabases_);
      DARABONBA_PTR_TO_JSON(TotalDictionaries, totalDictionaries_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccountAndAuthorityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(AllowDatabases, allowDatabases_);
      DARABONBA_PTR_FROM_JSON(AllowDictionaries, allowDictionaries_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DdlAuthority, ddlAuthority_);
      DARABONBA_PTR_FROM_JSON(DmlAuthority, dmlAuthority_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TotalDatabases, totalDatabases_);
      DARABONBA_PTR_FROM_JSON(TotalDictionaries, totalDictionaries_);
    };
    CreateAccountAndAuthorityRequest() = default ;
    CreateAccountAndAuthorityRequest(const CreateAccountAndAuthorityRequest &) = default ;
    CreateAccountAndAuthorityRequest(CreateAccountAndAuthorityRequest &&) = default ;
    CreateAccountAndAuthorityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccountAndAuthorityRequest() = default ;
    CreateAccountAndAuthorityRequest& operator=(const CreateAccountAndAuthorityRequest &) = default ;
    CreateAccountAndAuthorityRequest& operator=(CreateAccountAndAuthorityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountDescription_ == nullptr
        && return this->accountName_ == nullptr && return this->accountPassword_ == nullptr && return this->allowDatabases_ == nullptr && return this->allowDictionaries_ == nullptr && return this->DBClusterId_ == nullptr
        && return this->ddlAuthority_ == nullptr && return this->dmlAuthority_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->totalDatabases_ == nullptr && return this->totalDictionaries_ == nullptr; };
    // accountDescription Field Functions 
    bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
    void deleteAccountDescription() { this->accountDescription_ = nullptr;};
    inline string accountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
    inline CreateAccountAndAuthorityRequest& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateAccountAndAuthorityRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPassword Field Functions 
    bool hasAccountPassword() const { return this->accountPassword_ != nullptr;};
    void deleteAccountPassword() { this->accountPassword_ = nullptr;};
    inline string accountPassword() const { DARABONBA_PTR_GET_DEFAULT(accountPassword_, "") };
    inline CreateAccountAndAuthorityRequest& setAccountPassword(string accountPassword) { DARABONBA_PTR_SET_VALUE(accountPassword_, accountPassword) };


    // allowDatabases Field Functions 
    bool hasAllowDatabases() const { return this->allowDatabases_ != nullptr;};
    void deleteAllowDatabases() { this->allowDatabases_ = nullptr;};
    inline string allowDatabases() const { DARABONBA_PTR_GET_DEFAULT(allowDatabases_, "") };
    inline CreateAccountAndAuthorityRequest& setAllowDatabases(string allowDatabases) { DARABONBA_PTR_SET_VALUE(allowDatabases_, allowDatabases) };


    // allowDictionaries Field Functions 
    bool hasAllowDictionaries() const { return this->allowDictionaries_ != nullptr;};
    void deleteAllowDictionaries() { this->allowDictionaries_ = nullptr;};
    inline string allowDictionaries() const { DARABONBA_PTR_GET_DEFAULT(allowDictionaries_, "") };
    inline CreateAccountAndAuthorityRequest& setAllowDictionaries(string allowDictionaries) { DARABONBA_PTR_SET_VALUE(allowDictionaries_, allowDictionaries) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateAccountAndAuthorityRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // ddlAuthority Field Functions 
    bool hasDdlAuthority() const { return this->ddlAuthority_ != nullptr;};
    void deleteDdlAuthority() { this->ddlAuthority_ = nullptr;};
    inline bool ddlAuthority() const { DARABONBA_PTR_GET_DEFAULT(ddlAuthority_, false) };
    inline CreateAccountAndAuthorityRequest& setDdlAuthority(bool ddlAuthority) { DARABONBA_PTR_SET_VALUE(ddlAuthority_, ddlAuthority) };


    // dmlAuthority Field Functions 
    bool hasDmlAuthority() const { return this->dmlAuthority_ != nullptr;};
    void deleteDmlAuthority() { this->dmlAuthority_ = nullptr;};
    inline string dmlAuthority() const { DARABONBA_PTR_GET_DEFAULT(dmlAuthority_, "") };
    inline CreateAccountAndAuthorityRequest& setDmlAuthority(string dmlAuthority) { DARABONBA_PTR_SET_VALUE(dmlAuthority_, dmlAuthority) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateAccountAndAuthorityRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateAccountAndAuthorityRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAccountAndAuthorityRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateAccountAndAuthorityRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateAccountAndAuthorityRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // totalDatabases Field Functions 
    bool hasTotalDatabases() const { return this->totalDatabases_ != nullptr;};
    void deleteTotalDatabases() { this->totalDatabases_ = nullptr;};
    inline string totalDatabases() const { DARABONBA_PTR_GET_DEFAULT(totalDatabases_, "") };
    inline CreateAccountAndAuthorityRequest& setTotalDatabases(string totalDatabases) { DARABONBA_PTR_SET_VALUE(totalDatabases_, totalDatabases) };


    // totalDictionaries Field Functions 
    bool hasTotalDictionaries() const { return this->totalDictionaries_ != nullptr;};
    void deleteTotalDictionaries() { this->totalDictionaries_ = nullptr;};
    inline string totalDictionaries() const { DARABONBA_PTR_GET_DEFAULT(totalDictionaries_, "") };
    inline CreateAccountAndAuthorityRequest& setTotalDictionaries(string totalDictionaries) { DARABONBA_PTR_SET_VALUE(totalDictionaries_, totalDictionaries) };


  protected:
    // The description of the database account.
    // 
    // *   The description cannot start with http:// or https://.
    // *   The description must be 0 to 256 characters in length.
    std::shared_ptr<string> accountDescription_ = nullptr;
    // The database account.
    // 
    // *   The name must be unique within the cluster.
    // *   The name can contain lowercase letters, digits, and underscores (_).
    // *   The name must start with a lowercase letter and end with a lowercase letter or digit.
    // *   The name must be 2 to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountName_ = nullptr;
    // The password of your database account.
    // 
    // > 
    // 
    // *   The password contains at least three types of the following characters: uppercase letters, lowercase letters, digits, and special characters.
    // 
    // *   The password can contain the following special characters: ! @ # $ % ^ & \\* ( ) _ + - =
    // *   The password must be 8 to 32 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountPassword_ = nullptr;
    // The databases to which you want to grant permissions. Separate databases with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> allowDatabases_ = nullptr;
    // The dictionaries to which you want to grant permissions. Separate dictionaries with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> allowDictionaries_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Specifies whether to grant the DDL permissions to the database account. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // This parameter is required.
    std::shared_ptr<bool> ddlAuthority_ = nullptr;
    // Specifies whether to grant DML permissions to the database account. Valid values:
    // 
    // *   **all**
    // *   **readOnly,modify**
    // 
    // This parameter is required.
    std::shared_ptr<string> dmlAuthority_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID You can call the [DescribeRegions](https://help.aliyun.com/document_detail/170875.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // All databases. Separate databases with commas (,).
    std::shared_ptr<string> totalDatabases_ = nullptr;
    // All dictionaries. Separate dictionaries with commas (,).
    std::shared_ptr<string> totalDictionaries_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOSTGRESEXTENSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOSTGRESEXTENSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreatePostgresExtensionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePostgresExtensionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBNames, DBNames_);
      DARABONBA_PTR_TO_JSON(Extensions, extensions_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RiskConfirmed, riskConfirmed_);
      DARABONBA_PTR_TO_JSON(SourceDatabase, sourceDatabase_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePostgresExtensionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBNames, DBNames_);
      DARABONBA_PTR_FROM_JSON(Extensions, extensions_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RiskConfirmed, riskConfirmed_);
      DARABONBA_PTR_FROM_JSON(SourceDatabase, sourceDatabase_);
    };
    CreatePostgresExtensionsRequest() = default ;
    CreatePostgresExtensionsRequest(const CreatePostgresExtensionsRequest &) = default ;
    CreatePostgresExtensionsRequest(CreatePostgresExtensionsRequest &&) = default ;
    CreatePostgresExtensionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePostgresExtensionsRequest() = default ;
    CreatePostgresExtensionsRequest& operator=(const CreatePostgresExtensionsRequest &) = default ;
    CreatePostgresExtensionsRequest& operator=(CreatePostgresExtensionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && return this->clientToken_ == nullptr && return this->DBInstanceId_ == nullptr && return this->DBNames_ == nullptr && return this->extensions_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->riskConfirmed_ == nullptr
        && return this->sourceDatabase_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreatePostgresExtensionsRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreatePostgresExtensionsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreatePostgresExtensionsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBNames Field Functions 
    bool hasDBNames() const { return this->DBNames_ != nullptr;};
    void deleteDBNames() { this->DBNames_ = nullptr;};
    inline string DBNames() const { DARABONBA_PTR_GET_DEFAULT(DBNames_, "") };
    inline CreatePostgresExtensionsRequest& setDBNames(string DBNames) { DARABONBA_PTR_SET_VALUE(DBNames_, DBNames) };


    // extensions Field Functions 
    bool hasExtensions() const { return this->extensions_ != nullptr;};
    void deleteExtensions() { this->extensions_ = nullptr;};
    inline string extensions() const { DARABONBA_PTR_GET_DEFAULT(extensions_, "") };
    inline CreatePostgresExtensionsRequest& setExtensions(string extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreatePostgresExtensionsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreatePostgresExtensionsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreatePostgresExtensionsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreatePostgresExtensionsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreatePostgresExtensionsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // riskConfirmed Field Functions 
    bool hasRiskConfirmed() const { return this->riskConfirmed_ != nullptr;};
    void deleteRiskConfirmed() { this->riskConfirmed_ = nullptr;};
    inline bool riskConfirmed() const { DARABONBA_PTR_GET_DEFAULT(riskConfirmed_, false) };
    inline CreatePostgresExtensionsRequest& setRiskConfirmed(bool riskConfirmed) { DARABONBA_PTR_SET_VALUE(riskConfirmed_, riskConfirmed) };


    // sourceDatabase Field Functions 
    bool hasSourceDatabase() const { return this->sourceDatabase_ != nullptr;};
    void deleteSourceDatabase() { this->sourceDatabase_ = nullptr;};
    inline string sourceDatabase() const { DARABONBA_PTR_GET_DEFAULT(sourceDatabase_, "") };
    inline CreatePostgresExtensionsRequest& setSourceDatabase(string sourceDatabase) { DARABONBA_PTR_SET_VALUE(sourceDatabase_, sourceDatabase) };


  protected:
    // The account of the user who owns the extension. Only privileged accounts are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountName_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the generated token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The database name. You can call the DescribeDatabases operation to query the database name.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBNames_ = nullptr;
    // The extension that you want to install. If you want to install multiple extensions, separate them with commas (,). If you do not specify the **SourceDatabase** parameter, you must specify this parameter.
    std::shared_ptr<string> extensions_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The risk description that you need to confirm. If your instance runs an outdated minor engine version, installing specific extensions on the instance poses security risks. Proceed with the installation only after you acknowledge these risks. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  For more information about the risks, see [Limits on extension creation for ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/2587815.html).
    std::shared_ptr<bool> riskConfirmed_ = nullptr;
    // The source database from which you want to synchronize the extension to the destination database. If you do not specify the **Extensions** parameter, you must specify this parameter.
    std::shared_ptr<string> sourceDatabase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

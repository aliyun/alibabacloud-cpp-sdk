// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONNECTIONSTRINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONNECTIONSTRINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBInstanceConnectionStringRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceConnectionStringRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BabelfishPort, babelfishPort_);
      DARABONBA_PTR_TO_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_TO_JSON(CurrentConnectionString, currentConnectionString_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(GeneralGroupName, generalGroupName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PGBouncerPort, PGBouncerPort_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RetainVip, retainVip_);
      DARABONBA_PTR_TO_JSON(TargetDBInstanceId, targetDBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceConnectionStringRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BabelfishPort, babelfishPort_);
      DARABONBA_PTR_FROM_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_FROM_JSON(CurrentConnectionString, currentConnectionString_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(GeneralGroupName, generalGroupName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PGBouncerPort, PGBouncerPort_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RetainVip, retainVip_);
      DARABONBA_PTR_FROM_JSON(TargetDBInstanceId, targetDBInstanceId_);
    };
    ModifyDBInstanceConnectionStringRequest() = default ;
    ModifyDBInstanceConnectionStringRequest(const ModifyDBInstanceConnectionStringRequest &) = default ;
    ModifyDBInstanceConnectionStringRequest(ModifyDBInstanceConnectionStringRequest &&) = default ;
    ModifyDBInstanceConnectionStringRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceConnectionStringRequest() = default ;
    ModifyDBInstanceConnectionStringRequest& operator=(const ModifyDBInstanceConnectionStringRequest &) = default ;
    ModifyDBInstanceConnectionStringRequest& operator=(ModifyDBInstanceConnectionStringRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->babelfishPort_ == nullptr
        && return this->connectionStringPrefix_ == nullptr && return this->currentConnectionString_ == nullptr && return this->DBInstanceId_ == nullptr && return this->generalGroupName_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->PGBouncerPort_ == nullptr && return this->port_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->retainVip_ == nullptr && return this->targetDBInstanceId_ == nullptr; };
    // babelfishPort Field Functions 
    bool hasBabelfishPort() const { return this->babelfishPort_ != nullptr;};
    void deleteBabelfishPort() { this->babelfishPort_ = nullptr;};
    inline string babelfishPort() const { DARABONBA_PTR_GET_DEFAULT(babelfishPort_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setBabelfishPort(string babelfishPort) { DARABONBA_PTR_SET_VALUE(babelfishPort_, babelfishPort) };


    // connectionStringPrefix Field Functions 
    bool hasConnectionStringPrefix() const { return this->connectionStringPrefix_ != nullptr;};
    void deleteConnectionStringPrefix() { this->connectionStringPrefix_ = nullptr;};
    inline string connectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionStringPrefix_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setConnectionStringPrefix(string connectionStringPrefix) { DARABONBA_PTR_SET_VALUE(connectionStringPrefix_, connectionStringPrefix) };


    // currentConnectionString Field Functions 
    bool hasCurrentConnectionString() const { return this->currentConnectionString_ != nullptr;};
    void deleteCurrentConnectionString() { this->currentConnectionString_ = nullptr;};
    inline string currentConnectionString() const { DARABONBA_PTR_GET_DEFAULT(currentConnectionString_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setCurrentConnectionString(string currentConnectionString) { DARABONBA_PTR_SET_VALUE(currentConnectionString_, currentConnectionString) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // generalGroupName Field Functions 
    bool hasGeneralGroupName() const { return this->generalGroupName_ != nullptr;};
    void deleteGeneralGroupName() { this->generalGroupName_ = nullptr;};
    inline string generalGroupName() const { DARABONBA_PTR_GET_DEFAULT(generalGroupName_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setGeneralGroupName(string generalGroupName) { DARABONBA_PTR_SET_VALUE(generalGroupName_, generalGroupName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBInstanceConnectionStringRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // PGBouncerPort Field Functions 
    bool hasPGBouncerPort() const { return this->PGBouncerPort_ != nullptr;};
    void deletePGBouncerPort() { this->PGBouncerPort_ = nullptr;};
    inline string PGBouncerPort() const { DARABONBA_PTR_GET_DEFAULT(PGBouncerPort_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setPGBouncerPort(string PGBouncerPort) { DARABONBA_PTR_SET_VALUE(PGBouncerPort_, PGBouncerPort) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBInstanceConnectionStringRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // retainVip Field Functions 
    bool hasRetainVip() const { return this->retainVip_ != nullptr;};
    void deleteRetainVip() { this->retainVip_ = nullptr;};
    inline bool retainVip() const { DARABONBA_PTR_GET_DEFAULT(retainVip_, false) };
    inline ModifyDBInstanceConnectionStringRequest& setRetainVip(bool retainVip) { DARABONBA_PTR_SET_VALUE(retainVip_, retainVip) };


    // targetDBInstanceId Field Functions 
    bool hasTargetDBInstanceId() const { return this->targetDBInstanceId_ != nullptr;};
    void deleteTargetDBInstanceId() { this->targetDBInstanceId_ = nullptr;};
    inline string targetDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetDBInstanceId_, "") };
    inline ModifyDBInstanceConnectionStringRequest& setTargetDBInstanceId(string targetDBInstanceId) { DARABONBA_PTR_SET_VALUE(targetDBInstanceId_, targetDBInstanceId) };


  protected:
    // The Tabular Data Stream (TDS) port of the instance for which Babelfish is enabled.
    // 
    // > This parameter applies only to ApsaraDB RDS for PostgreSQL instances. For more information about Babelfish for ApsaraDB RDS for PostgreSQL, see [Introduction to Babelfish](https://help.aliyun.com/document_detail/428613.html).
    std::shared_ptr<string> babelfishPort_ = nullptr;
    // The prefix of the endpoint after the change. Only the prefix of the value of **CurrentConnectionString** can be changed.
    // 
    // > The value must be 8 to 64 characters in length and can contain letters, digits, and hyphens (-). The value cannot contain any of the following special characters: ! # % ^ & \\* = + | {} ; : \\" " ,<> / ?
    // 
    // This parameter is required.
    std::shared_ptr<string> connectionStringPrefix_ = nullptr;
    // The endpoint of the instance. It can be an internal endpoint, a public endpoint, or a classic network endpoint in hybrid access mode.
    // 
    // > The read/write splitting endpoint cannot be changed.
    // 
    // This parameter is required.
    std::shared_ptr<string> currentConnectionString_ = nullptr;
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The name of the dedicated cluster to which the instance belongs. This parameter is returned only when the instance is created in an ApsaraDB MyBase cluster that runs MySQL on Standard Edition.
    std::shared_ptr<string> generalGroupName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The PgBouncer port.
    // 
    // > This parameter is suitable only for ApsaraDB RDS for PostgreSQL instances. If you enable PgBouncer for your instance, you can change the PgBouncer port of the instance.
    std::shared_ptr<string> PGBouncerPort_ = nullptr;
    // The port number after the change.
    // 
    // This parameter is required.
    std::shared_ptr<string> port_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<bool> retainVip_ = nullptr;
    std::shared_ptr<string> targetDBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

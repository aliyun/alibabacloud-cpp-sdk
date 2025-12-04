// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERDSTOCLICKHOUSEDBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERDSTOCLICKHOUSEDBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class CreateRDSToClickhouseDbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRDSToClickhouseDbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CkPassword, ckPassword_);
      DARABONBA_PTR_TO_JSON(CkUserName, ckUserName_);
      DARABONBA_PTR_TO_JSON(ClickhousePort, clickhousePort_);
      DARABONBA_PTR_TO_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_TO_JSON(LimitUpper, limitUpper_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RdsId, rdsId_);
      DARABONBA_PTR_TO_JSON(RdsPassword, rdsPassword_);
      DARABONBA_PTR_TO_JSON(RdsPort, rdsPort_);
      DARABONBA_PTR_TO_JSON(RdsUserName, rdsUserName_);
      DARABONBA_PTR_TO_JSON(RdsVpcId, rdsVpcId_);
      DARABONBA_PTR_TO_JSON(RdsVpcUrl, rdsVpcUrl_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SkipUnsupported, skipUnsupported_);
      DARABONBA_PTR_TO_JSON(SynDbTables, synDbTables_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRDSToClickhouseDbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CkPassword, ckPassword_);
      DARABONBA_PTR_FROM_JSON(CkUserName, ckUserName_);
      DARABONBA_PTR_FROM_JSON(ClickhousePort, clickhousePort_);
      DARABONBA_PTR_FROM_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_FROM_JSON(LimitUpper, limitUpper_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RdsId, rdsId_);
      DARABONBA_PTR_FROM_JSON(RdsPassword, rdsPassword_);
      DARABONBA_PTR_FROM_JSON(RdsPort, rdsPort_);
      DARABONBA_PTR_FROM_JSON(RdsUserName, rdsUserName_);
      DARABONBA_PTR_FROM_JSON(RdsVpcId, rdsVpcId_);
      DARABONBA_PTR_FROM_JSON(RdsVpcUrl, rdsVpcUrl_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SkipUnsupported, skipUnsupported_);
      DARABONBA_PTR_FROM_JSON(SynDbTables, synDbTables_);
    };
    CreateRDSToClickhouseDbRequest() = default ;
    CreateRDSToClickhouseDbRequest(const CreateRDSToClickhouseDbRequest &) = default ;
    CreateRDSToClickhouseDbRequest(CreateRDSToClickhouseDbRequest &&) = default ;
    CreateRDSToClickhouseDbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRDSToClickhouseDbRequest() = default ;
    CreateRDSToClickhouseDbRequest& operator=(const CreateRDSToClickhouseDbRequest &) = default ;
    CreateRDSToClickhouseDbRequest& operator=(CreateRDSToClickhouseDbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ckPassword_ == nullptr
        && return this->ckUserName_ == nullptr && return this->clickhousePort_ == nullptr && return this->dbClusterId_ == nullptr && return this->limitUpper_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->rdsId_ == nullptr && return this->rdsPassword_ == nullptr && return this->rdsPort_ == nullptr && return this->rdsUserName_ == nullptr
        && return this->rdsVpcId_ == nullptr && return this->rdsVpcUrl_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->skipUnsupported_ == nullptr
        && return this->synDbTables_ == nullptr; };
    // ckPassword Field Functions 
    bool hasCkPassword() const { return this->ckPassword_ != nullptr;};
    void deleteCkPassword() { this->ckPassword_ = nullptr;};
    inline string ckPassword() const { DARABONBA_PTR_GET_DEFAULT(ckPassword_, "") };
    inline CreateRDSToClickhouseDbRequest& setCkPassword(string ckPassword) { DARABONBA_PTR_SET_VALUE(ckPassword_, ckPassword) };


    // ckUserName Field Functions 
    bool hasCkUserName() const { return this->ckUserName_ != nullptr;};
    void deleteCkUserName() { this->ckUserName_ = nullptr;};
    inline string ckUserName() const { DARABONBA_PTR_GET_DEFAULT(ckUserName_, "") };
    inline CreateRDSToClickhouseDbRequest& setCkUserName(string ckUserName) { DARABONBA_PTR_SET_VALUE(ckUserName_, ckUserName) };


    // clickhousePort Field Functions 
    bool hasClickhousePort() const { return this->clickhousePort_ != nullptr;};
    void deleteClickhousePort() { this->clickhousePort_ = nullptr;};
    inline int64_t clickhousePort() const { DARABONBA_PTR_GET_DEFAULT(clickhousePort_, 0L) };
    inline CreateRDSToClickhouseDbRequest& setClickhousePort(int64_t clickhousePort) { DARABONBA_PTR_SET_VALUE(clickhousePort_, clickhousePort) };


    // dbClusterId Field Functions 
    bool hasDbClusterId() const { return this->dbClusterId_ != nullptr;};
    void deleteDbClusterId() { this->dbClusterId_ = nullptr;};
    inline string dbClusterId() const { DARABONBA_PTR_GET_DEFAULT(dbClusterId_, "") };
    inline CreateRDSToClickhouseDbRequest& setDbClusterId(string dbClusterId) { DARABONBA_PTR_SET_VALUE(dbClusterId_, dbClusterId) };


    // limitUpper Field Functions 
    bool hasLimitUpper() const { return this->limitUpper_ != nullptr;};
    void deleteLimitUpper() { this->limitUpper_ = nullptr;};
    inline int64_t limitUpper() const { DARABONBA_PTR_GET_DEFAULT(limitUpper_, 0L) };
    inline CreateRDSToClickhouseDbRequest& setLimitUpper(int64_t limitUpper) { DARABONBA_PTR_SET_VALUE(limitUpper_, limitUpper) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateRDSToClickhouseDbRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateRDSToClickhouseDbRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // rdsId Field Functions 
    bool hasRdsId() const { return this->rdsId_ != nullptr;};
    void deleteRdsId() { this->rdsId_ = nullptr;};
    inline string rdsId() const { DARABONBA_PTR_GET_DEFAULT(rdsId_, "") };
    inline CreateRDSToClickhouseDbRequest& setRdsId(string rdsId) { DARABONBA_PTR_SET_VALUE(rdsId_, rdsId) };


    // rdsPassword Field Functions 
    bool hasRdsPassword() const { return this->rdsPassword_ != nullptr;};
    void deleteRdsPassword() { this->rdsPassword_ = nullptr;};
    inline string rdsPassword() const { DARABONBA_PTR_GET_DEFAULT(rdsPassword_, "") };
    inline CreateRDSToClickhouseDbRequest& setRdsPassword(string rdsPassword) { DARABONBA_PTR_SET_VALUE(rdsPassword_, rdsPassword) };


    // rdsPort Field Functions 
    bool hasRdsPort() const { return this->rdsPort_ != nullptr;};
    void deleteRdsPort() { this->rdsPort_ = nullptr;};
    inline int64_t rdsPort() const { DARABONBA_PTR_GET_DEFAULT(rdsPort_, 0L) };
    inline CreateRDSToClickhouseDbRequest& setRdsPort(int64_t rdsPort) { DARABONBA_PTR_SET_VALUE(rdsPort_, rdsPort) };


    // rdsUserName Field Functions 
    bool hasRdsUserName() const { return this->rdsUserName_ != nullptr;};
    void deleteRdsUserName() { this->rdsUserName_ = nullptr;};
    inline string rdsUserName() const { DARABONBA_PTR_GET_DEFAULT(rdsUserName_, "") };
    inline CreateRDSToClickhouseDbRequest& setRdsUserName(string rdsUserName) { DARABONBA_PTR_SET_VALUE(rdsUserName_, rdsUserName) };


    // rdsVpcId Field Functions 
    bool hasRdsVpcId() const { return this->rdsVpcId_ != nullptr;};
    void deleteRdsVpcId() { this->rdsVpcId_ = nullptr;};
    inline string rdsVpcId() const { DARABONBA_PTR_GET_DEFAULT(rdsVpcId_, "") };
    inline CreateRDSToClickhouseDbRequest& setRdsVpcId(string rdsVpcId) { DARABONBA_PTR_SET_VALUE(rdsVpcId_, rdsVpcId) };


    // rdsVpcUrl Field Functions 
    bool hasRdsVpcUrl() const { return this->rdsVpcUrl_ != nullptr;};
    void deleteRdsVpcUrl() { this->rdsVpcUrl_ = nullptr;};
    inline string rdsVpcUrl() const { DARABONBA_PTR_GET_DEFAULT(rdsVpcUrl_, "") };
    inline CreateRDSToClickhouseDbRequest& setRdsVpcUrl(string rdsVpcUrl) { DARABONBA_PTR_SET_VALUE(rdsVpcUrl_, rdsVpcUrl) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateRDSToClickhouseDbRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateRDSToClickhouseDbRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // skipUnsupported Field Functions 
    bool hasSkipUnsupported() const { return this->skipUnsupported_ != nullptr;};
    void deleteSkipUnsupported() { this->skipUnsupported_ = nullptr;};
    inline bool skipUnsupported() const { DARABONBA_PTR_GET_DEFAULT(skipUnsupported_, false) };
    inline CreateRDSToClickhouseDbRequest& setSkipUnsupported(bool skipUnsupported) { DARABONBA_PTR_SET_VALUE(skipUnsupported_, skipUnsupported) };


    // synDbTables Field Functions 
    bool hasSynDbTables() const { return this->synDbTables_ != nullptr;};
    void deleteSynDbTables() { this->synDbTables_ = nullptr;};
    inline string synDbTables() const { DARABONBA_PTR_GET_DEFAULT(synDbTables_, "") };
    inline CreateRDSToClickhouseDbRequest& setSynDbTables(string synDbTables) { DARABONBA_PTR_SET_VALUE(synDbTables_, synDbTables) };


  protected:
    // The password of the account that is used to log on to the database in the ApsaraDB for ClickHouse cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> ckPassword_ = nullptr;
    // The account that is used to log on to the database in the ApsaraDB for ClickHouse cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> ckUserName_ = nullptr;
    // The port number of the ApsaraDB for ClickHouse cluster.
    std::shared_ptr<int64_t> clickhousePort_ = nullptr;
    // The ID of the ApsaraDB for ClickHouse cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbClusterId_ = nullptr;
    // The maximum number of rows that can be synchronized per second.
    std::shared_ptr<int64_t> limitUpper_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the ApsaraDB RDS for MySQL instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> rdsId_ = nullptr;
    // The password of the account that is used to log on to the ApsaraDB RDS for MySQL instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> rdsPassword_ = nullptr;
    // The port number of the ApsaraDB RDS for MySQL instance.
    std::shared_ptr<int64_t> rdsPort_ = nullptr;
    // The account that is used to log on to the database in the ApsaraDB RDS for MySQL instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> rdsUserName_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the ApsaraDB RDS for MySQL instance belongs.
    std::shared_ptr<string> rdsVpcId_ = nullptr;
    // The private endpoint of the ApsaraDB RDS for MySQL instance.
    std::shared_ptr<string> rdsVpcUrl_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Specifies whether to ignore the table schemas that do not support synchronization. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // This parameter is required.
    std::shared_ptr<bool> skipUnsupported_ = nullptr;
    // The tables whose data you want to synchronize.
    // 
    // This parameter is required.
    std::shared_ptr<string> synDbTables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif

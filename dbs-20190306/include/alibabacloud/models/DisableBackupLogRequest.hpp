// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEBACKUPLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEBACKUPLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DisableBackupLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableBackupLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DisableMysqlPhysicalBackupBinlogOnly, disableMysqlPhysicalBackupBinlogOnly_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableBackupLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DisableMysqlPhysicalBackupBinlogOnly, disableMysqlPhysicalBackupBinlogOnly_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    DisableBackupLogRequest() = default ;
    DisableBackupLogRequest(const DisableBackupLogRequest &) = default ;
    DisableBackupLogRequest(DisableBackupLogRequest &&) = default ;
    DisableBackupLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableBackupLogRequest() = default ;
    DisableBackupLogRequest& operator=(const DisableBackupLogRequest &) = default ;
    DisableBackupLogRequest& operator=(DisableBackupLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupPlanId_ == nullptr
        && this->clientToken_ == nullptr && this->disableMysqlPhysicalBackupBinlogOnly_ == nullptr && this->ownerId_ == nullptr; };
    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline DisableBackupLogRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DisableBackupLogRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // disableMysqlPhysicalBackupBinlogOnly Field Functions 
    bool hasDisableMysqlPhysicalBackupBinlogOnly() const { return this->disableMysqlPhysicalBackupBinlogOnly_ != nullptr;};
    void deleteDisableMysqlPhysicalBackupBinlogOnly() { this->disableMysqlPhysicalBackupBinlogOnly_ = nullptr;};
    inline string getDisableMysqlPhysicalBackupBinlogOnly() const { DARABONBA_PTR_GET_DEFAULT(disableMysqlPhysicalBackupBinlogOnly_, "") };
    inline DisableBackupLogRequest& setDisableMysqlPhysicalBackupBinlogOnly(string disableMysqlPhysicalBackupBinlogOnly) { DARABONBA_PTR_SET_VALUE(disableMysqlPhysicalBackupBinlogOnly_, disableMysqlPhysicalBackupBinlogOnly) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DisableBackupLogRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // The ID of the backup plan. Call [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) to query it.
    // 
    // This parameter is required.
    shared_ptr<string> backupPlanId_ {};
    // Ensures idempotence and prevents duplicate requests.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> disableMysqlPhysicalBackupBinlogOnly_ {};
    shared_ptr<string> ownerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif

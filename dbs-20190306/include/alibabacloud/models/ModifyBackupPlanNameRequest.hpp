// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPLANNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPLANNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class ModifyBackupPlanNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPlanNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(BackupPlanName, backupPlanName_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPlanNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(BackupPlanName, backupPlanName_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    ModifyBackupPlanNameRequest() = default ;
    ModifyBackupPlanNameRequest(const ModifyBackupPlanNameRequest &) = default ;
    ModifyBackupPlanNameRequest(ModifyBackupPlanNameRequest &&) = default ;
    ModifyBackupPlanNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupPlanNameRequest() = default ;
    ModifyBackupPlanNameRequest& operator=(const ModifyBackupPlanNameRequest &) = default ;
    ModifyBackupPlanNameRequest& operator=(ModifyBackupPlanNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupPlanId_ == nullptr
        && return this->backupPlanName_ == nullptr && return this->clientToken_ == nullptr && return this->ownerId_ == nullptr; };
    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string backupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline ModifyBackupPlanNameRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // backupPlanName Field Functions 
    bool hasBackupPlanName() const { return this->backupPlanName_ != nullptr;};
    void deleteBackupPlanName() { this->backupPlanName_ = nullptr;};
    inline string backupPlanName() const { DARABONBA_PTR_GET_DEFAULT(backupPlanName_, "") };
    inline ModifyBackupPlanNameRequest& setBackupPlanName(string backupPlanName) { DARABONBA_PTR_SET_VALUE(backupPlanName_, backupPlanName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyBackupPlanNameRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ModifyBackupPlanNameRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // The ID of the backup schedule.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupPlanId_ = nullptr;
    // The name of the backup schedule.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupPlanName_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPSETDOWNLOADRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPSETDOWNLOADRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class ModifyBackupSetDownloadRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupSetDownloadRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadDir, backupSetDownloadDir_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadTargetType, backupSetDownloadTargetType_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadTargetTypeLocation, backupSetDownloadTargetTypeLocation_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(FullDataFormat, fullDataFormat_);
      DARABONBA_PTR_TO_JSON(IncrementDataFormat, incrementDataFormat_);
      DARABONBA_PTR_TO_JSON(OpenAutoDownload, openAutoDownload_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupSetDownloadRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadDir, backupSetDownloadDir_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadTargetType, backupSetDownloadTargetType_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadTargetTypeLocation, backupSetDownloadTargetTypeLocation_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(FullDataFormat, fullDataFormat_);
      DARABONBA_PTR_FROM_JSON(IncrementDataFormat, incrementDataFormat_);
      DARABONBA_PTR_FROM_JSON(OpenAutoDownload, openAutoDownload_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    ModifyBackupSetDownloadRulesRequest() = default ;
    ModifyBackupSetDownloadRulesRequest(const ModifyBackupSetDownloadRulesRequest &) = default ;
    ModifyBackupSetDownloadRulesRequest(ModifyBackupSetDownloadRulesRequest &&) = default ;
    ModifyBackupSetDownloadRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupSetDownloadRulesRequest() = default ;
    ModifyBackupSetDownloadRulesRequest& operator=(const ModifyBackupSetDownloadRulesRequest &) = default ;
    ModifyBackupSetDownloadRulesRequest& operator=(ModifyBackupSetDownloadRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupGatewayId_ == nullptr
        && return this->backupPlanId_ == nullptr && return this->backupSetDownloadDir_ == nullptr && return this->backupSetDownloadTargetType_ == nullptr && return this->backupSetDownloadTargetTypeLocation_ == nullptr && return this->clientToken_ == nullptr
        && return this->fullDataFormat_ == nullptr && return this->incrementDataFormat_ == nullptr && return this->openAutoDownload_ == nullptr && return this->ownerId_ == nullptr; };
    // backupGatewayId Field Functions 
    bool hasBackupGatewayId() const { return this->backupGatewayId_ != nullptr;};
    void deleteBackupGatewayId() { this->backupGatewayId_ = nullptr;};
    inline int64_t backupGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayId_, 0L) };
    inline ModifyBackupSetDownloadRulesRequest& setBackupGatewayId(int64_t backupGatewayId) { DARABONBA_PTR_SET_VALUE(backupGatewayId_, backupGatewayId) };


    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string backupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline ModifyBackupSetDownloadRulesRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // backupSetDownloadDir Field Functions 
    bool hasBackupSetDownloadDir() const { return this->backupSetDownloadDir_ != nullptr;};
    void deleteBackupSetDownloadDir() { this->backupSetDownloadDir_ = nullptr;};
    inline string backupSetDownloadDir() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadDir_, "") };
    inline ModifyBackupSetDownloadRulesRequest& setBackupSetDownloadDir(string backupSetDownloadDir) { DARABONBA_PTR_SET_VALUE(backupSetDownloadDir_, backupSetDownloadDir) };


    // backupSetDownloadTargetType Field Functions 
    bool hasBackupSetDownloadTargetType() const { return this->backupSetDownloadTargetType_ != nullptr;};
    void deleteBackupSetDownloadTargetType() { this->backupSetDownloadTargetType_ = nullptr;};
    inline string backupSetDownloadTargetType() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadTargetType_, "") };
    inline ModifyBackupSetDownloadRulesRequest& setBackupSetDownloadTargetType(string backupSetDownloadTargetType) { DARABONBA_PTR_SET_VALUE(backupSetDownloadTargetType_, backupSetDownloadTargetType) };


    // backupSetDownloadTargetTypeLocation Field Functions 
    bool hasBackupSetDownloadTargetTypeLocation() const { return this->backupSetDownloadTargetTypeLocation_ != nullptr;};
    void deleteBackupSetDownloadTargetTypeLocation() { this->backupSetDownloadTargetTypeLocation_ = nullptr;};
    inline string backupSetDownloadTargetTypeLocation() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadTargetTypeLocation_, "") };
    inline ModifyBackupSetDownloadRulesRequest& setBackupSetDownloadTargetTypeLocation(string backupSetDownloadTargetTypeLocation) { DARABONBA_PTR_SET_VALUE(backupSetDownloadTargetTypeLocation_, backupSetDownloadTargetTypeLocation) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyBackupSetDownloadRulesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // fullDataFormat Field Functions 
    bool hasFullDataFormat() const { return this->fullDataFormat_ != nullptr;};
    void deleteFullDataFormat() { this->fullDataFormat_ = nullptr;};
    inline string fullDataFormat() const { DARABONBA_PTR_GET_DEFAULT(fullDataFormat_, "") };
    inline ModifyBackupSetDownloadRulesRequest& setFullDataFormat(string fullDataFormat) { DARABONBA_PTR_SET_VALUE(fullDataFormat_, fullDataFormat) };


    // incrementDataFormat Field Functions 
    bool hasIncrementDataFormat() const { return this->incrementDataFormat_ != nullptr;};
    void deleteIncrementDataFormat() { this->incrementDataFormat_ = nullptr;};
    inline string incrementDataFormat() const { DARABONBA_PTR_GET_DEFAULT(incrementDataFormat_, "") };
    inline ModifyBackupSetDownloadRulesRequest& setIncrementDataFormat(string incrementDataFormat) { DARABONBA_PTR_SET_VALUE(incrementDataFormat_, incrementDataFormat) };


    // openAutoDownload Field Functions 
    bool hasOpenAutoDownload() const { return this->openAutoDownload_ != nullptr;};
    void deleteOpenAutoDownload() { this->openAutoDownload_ = nullptr;};
    inline bool openAutoDownload() const { DARABONBA_PTR_GET_DEFAULT(openAutoDownload_, false) };
    inline ModifyBackupSetDownloadRulesRequest& setOpenAutoDownload(bool openAutoDownload) { DARABONBA_PTR_SET_VALUE(openAutoDownload_, openAutoDownload) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ModifyBackupSetDownloadRulesRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // The ID of the backup gateway that is used to download the backup set.
    std::shared_ptr<int64_t> backupGatewayId_ = nullptr;
    // The ID of the backup schedule.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupPlanId_ = nullptr;
    // The server directory to which the backup set is downloaded.
    std::shared_ptr<string> backupSetDownloadDir_ = nullptr;
    // The type of the destination server to which the backup set is downloaded.
    // 
    // > Set the value to agent, which indicates a server on which a backup gateway is installed.
    std::shared_ptr<string> backupSetDownloadTargetType_ = nullptr;
    // The type of the destination directory to which the backup set is downloaded. This parameter is required if the automatic download feature is enabled. Valid values:
    // 
    // *   local
    // *   nas
    // *   ftp
    // *   minio
    // 
    // > Default value: local.
    std::shared_ptr<string> backupSetDownloadTargetTypeLocation_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The format in which the full backup set is downloaded. Valid values:
    // 
    // *   Native
    // *   SQL
    // *   CSV
    // *   JSON
    // 
    // > Default value: CSV.
    std::shared_ptr<string> fullDataFormat_ = nullptr;
    // The format in which the incremental backup set is downloaded. Valid values:
    // 
    // *   Native
    // *   SQL
    // *   CSV
    // *   JSON
    // 
    // > Default value: Native.
    std::shared_ptr<string> incrementDataFormat_ = nullptr;
    // Specifies whether to enable the automatic download feature. Default value: false.
    std::shared_ptr<bool> openAutoDownload_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif

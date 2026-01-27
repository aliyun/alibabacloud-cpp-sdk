// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGUREBACKUPSETINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGUREBACKUPSETINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class ConfigureBackupSetInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureBackupSetInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(BackupSetName, backupSetName_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(CheckSum, checkSum_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(ExtraMeta, extraMeta_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UploadStatus, uploadStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureBackupSetInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(BackupSetName, backupSetName_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(CheckSum, checkSum_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(ExtraMeta, extraMeta_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UploadStatus, uploadStatus_);
    };
    ConfigureBackupSetInfoRequest() = default ;
    ConfigureBackupSetInfoRequest(const ConfigureBackupSetInfoRequest &) = default ;
    ConfigureBackupSetInfoRequest(ConfigureBackupSetInfoRequest &&) = default ;
    ConfigureBackupSetInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureBackupSetInfoRequest() = default ;
    ConfigureBackupSetInfoRequest& operator=(const ConfigureBackupSetInfoRequest &) = default ;
    ConfigureBackupSetInfoRequest& operator=(ConfigureBackupSetInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupMethod_ == nullptr
        && this->backupMode_ == nullptr && this->backupSetId_ == nullptr && this->backupSetName_ == nullptr && this->backupType_ == nullptr && this->checkSum_ == nullptr
        && this->clientToken_ == nullptr && this->dataSourceId_ == nullptr && this->extraMeta_ == nullptr && this->regionCode_ == nullptr && this->regionId_ == nullptr
        && this->uploadStatus_ == nullptr; };
    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string getBackupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline ConfigureBackupSetInfoRequest& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string getBackupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline ConfigureBackupSetInfoRequest& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string getBackupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline ConfigureBackupSetInfoRequest& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // backupSetName Field Functions 
    bool hasBackupSetName() const { return this->backupSetName_ != nullptr;};
    void deleteBackupSetName() { this->backupSetName_ = nullptr;};
    inline string getBackupSetName() const { DARABONBA_PTR_GET_DEFAULT(backupSetName_, "") };
    inline ConfigureBackupSetInfoRequest& setBackupSetName(string backupSetName) { DARABONBA_PTR_SET_VALUE(backupSetName_, backupSetName) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline ConfigureBackupSetInfoRequest& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // checkSum Field Functions 
    bool hasCheckSum() const { return this->checkSum_ != nullptr;};
    void deleteCheckSum() { this->checkSum_ = nullptr;};
    inline string getCheckSum() const { DARABONBA_PTR_GET_DEFAULT(checkSum_, "") };
    inline ConfigureBackupSetInfoRequest& setCheckSum(string checkSum) { DARABONBA_PTR_SET_VALUE(checkSum_, checkSum) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ConfigureBackupSetInfoRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline ConfigureBackupSetInfoRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // extraMeta Field Functions 
    bool hasExtraMeta() const { return this->extraMeta_ != nullptr;};
    void deleteExtraMeta() { this->extraMeta_ = nullptr;};
    inline string getExtraMeta() const { DARABONBA_PTR_GET_DEFAULT(extraMeta_, "") };
    inline ConfigureBackupSetInfoRequest& setExtraMeta(string extraMeta) { DARABONBA_PTR_SET_VALUE(extraMeta_, extraMeta) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline ConfigureBackupSetInfoRequest& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigureBackupSetInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // uploadStatus Field Functions 
    bool hasUploadStatus() const { return this->uploadStatus_ != nullptr;};
    void deleteUploadStatus() { this->uploadStatus_ = nullptr;};
    inline string getUploadStatus() const { DARABONBA_PTR_GET_DEFAULT(uploadStatus_, "") };
    inline ConfigureBackupSetInfoRequest& setUploadStatus(string uploadStatus) { DARABONBA_PTR_SET_VALUE(uploadStatus_, uploadStatus) };


  protected:
    // This parameter is required.
    shared_ptr<string> backupMethod_ {};
    // This parameter is required.
    shared_ptr<string> backupMode_ {};
    shared_ptr<string> backupSetId_ {};
    // This parameter is required.
    shared_ptr<string> backupSetName_ {};
    // This parameter is required.
    shared_ptr<string> backupType_ {};
    shared_ptr<string> checkSum_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> dataSourceId_ {};
    shared_ptr<string> extraMeta_ {};
    // This parameter is required.
    shared_ptr<string> regionCode_ {};
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> uploadStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif

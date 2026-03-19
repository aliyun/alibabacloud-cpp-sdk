// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSTORAGESTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSTORAGESTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class ModifyStorageStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyStorageStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(BackupStorageEncryptMethod, backupStorageEncryptMethod_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DuplicationArchivePeriod, duplicationArchivePeriod_);
      DARABONBA_PTR_TO_JSON(DuplicationInfrequentAccessPeriod, duplicationInfrequentAccessPeriod_);
      DARABONBA_PTR_TO_JSON(IncrementBackupRetentionPeriod, incrementBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(IncrementDuplicationArchivePeriod, incrementDuplicationArchivePeriod_);
      DARABONBA_PTR_TO_JSON(IncrementDuplicationInfrequentAccessPeriod, incrementDuplicationInfrequentAccessPeriod_);
      DARABONBA_PTR_TO_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(LogDuplicationArchivePeriod, logDuplicationArchivePeriod_);
      DARABONBA_PTR_TO_JSON(LogDuplicationInfrequentAccessPeriod, logDuplicationInfrequentAccessPeriod_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyStorageStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(BackupStorageEncryptMethod, backupStorageEncryptMethod_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DuplicationArchivePeriod, duplicationArchivePeriod_);
      DARABONBA_PTR_FROM_JSON(DuplicationInfrequentAccessPeriod, duplicationInfrequentAccessPeriod_);
      DARABONBA_PTR_FROM_JSON(IncrementBackupRetentionPeriod, incrementBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(IncrementDuplicationArchivePeriod, incrementDuplicationArchivePeriod_);
      DARABONBA_PTR_FROM_JSON(IncrementDuplicationInfrequentAccessPeriod, incrementDuplicationInfrequentAccessPeriod_);
      DARABONBA_PTR_FROM_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(LogDuplicationArchivePeriod, logDuplicationArchivePeriod_);
      DARABONBA_PTR_FROM_JSON(LogDuplicationInfrequentAccessPeriod, logDuplicationInfrequentAccessPeriod_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    ModifyStorageStrategyRequest() = default ;
    ModifyStorageStrategyRequest(const ModifyStorageStrategyRequest &) = default ;
    ModifyStorageStrategyRequest(ModifyStorageStrategyRequest &&) = default ;
    ModifyStorageStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyStorageStrategyRequest() = default ;
    ModifyStorageStrategyRequest& operator=(const ModifyStorageStrategyRequest &) = default ;
    ModifyStorageStrategyRequest& operator=(ModifyStorageStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupPlanId_ == nullptr
        && this->backupRetentionPeriod_ == nullptr && this->backupStorageEncryptMethod_ == nullptr && this->clientToken_ == nullptr && this->duplicationArchivePeriod_ == nullptr && this->duplicationInfrequentAccessPeriod_ == nullptr
        && this->incrementBackupRetentionPeriod_ == nullptr && this->incrementDuplicationArchivePeriod_ == nullptr && this->incrementDuplicationInfrequentAccessPeriod_ == nullptr && this->logBackupRetentionPeriod_ == nullptr && this->logDuplicationArchivePeriod_ == nullptr
        && this->logDuplicationInfrequentAccessPeriod_ == nullptr && this->ownerId_ == nullptr; };
    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline ModifyStorageStrategyRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int32_t getBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0) };
    inline ModifyStorageStrategyRequest& setBackupRetentionPeriod(int32_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // backupStorageEncryptMethod Field Functions 
    bool hasBackupStorageEncryptMethod() const { return this->backupStorageEncryptMethod_ != nullptr;};
    void deleteBackupStorageEncryptMethod() { this->backupStorageEncryptMethod_ = nullptr;};
    inline string getBackupStorageEncryptMethod() const { DARABONBA_PTR_GET_DEFAULT(backupStorageEncryptMethod_, "") };
    inline ModifyStorageStrategyRequest& setBackupStorageEncryptMethod(string backupStorageEncryptMethod) { DARABONBA_PTR_SET_VALUE(backupStorageEncryptMethod_, backupStorageEncryptMethod) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyStorageStrategyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // duplicationArchivePeriod Field Functions 
    bool hasDuplicationArchivePeriod() const { return this->duplicationArchivePeriod_ != nullptr;};
    void deleteDuplicationArchivePeriod() { this->duplicationArchivePeriod_ = nullptr;};
    inline int32_t getDuplicationArchivePeriod() const { DARABONBA_PTR_GET_DEFAULT(duplicationArchivePeriod_, 0) };
    inline ModifyStorageStrategyRequest& setDuplicationArchivePeriod(int32_t duplicationArchivePeriod) { DARABONBA_PTR_SET_VALUE(duplicationArchivePeriod_, duplicationArchivePeriod) };


    // duplicationInfrequentAccessPeriod Field Functions 
    bool hasDuplicationInfrequentAccessPeriod() const { return this->duplicationInfrequentAccessPeriod_ != nullptr;};
    void deleteDuplicationInfrequentAccessPeriod() { this->duplicationInfrequentAccessPeriod_ = nullptr;};
    inline int32_t getDuplicationInfrequentAccessPeriod() const { DARABONBA_PTR_GET_DEFAULT(duplicationInfrequentAccessPeriod_, 0) };
    inline ModifyStorageStrategyRequest& setDuplicationInfrequentAccessPeriod(int32_t duplicationInfrequentAccessPeriod) { DARABONBA_PTR_SET_VALUE(duplicationInfrequentAccessPeriod_, duplicationInfrequentAccessPeriod) };


    // incrementBackupRetentionPeriod Field Functions 
    bool hasIncrementBackupRetentionPeriod() const { return this->incrementBackupRetentionPeriod_ != nullptr;};
    void deleteIncrementBackupRetentionPeriod() { this->incrementBackupRetentionPeriod_ = nullptr;};
    inline string getIncrementBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(incrementBackupRetentionPeriod_, "") };
    inline ModifyStorageStrategyRequest& setIncrementBackupRetentionPeriod(string incrementBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(incrementBackupRetentionPeriod_, incrementBackupRetentionPeriod) };


    // incrementDuplicationArchivePeriod Field Functions 
    bool hasIncrementDuplicationArchivePeriod() const { return this->incrementDuplicationArchivePeriod_ != nullptr;};
    void deleteIncrementDuplicationArchivePeriod() { this->incrementDuplicationArchivePeriod_ = nullptr;};
    inline string getIncrementDuplicationArchivePeriod() const { DARABONBA_PTR_GET_DEFAULT(incrementDuplicationArchivePeriod_, "") };
    inline ModifyStorageStrategyRequest& setIncrementDuplicationArchivePeriod(string incrementDuplicationArchivePeriod) { DARABONBA_PTR_SET_VALUE(incrementDuplicationArchivePeriod_, incrementDuplicationArchivePeriod) };


    // incrementDuplicationInfrequentAccessPeriod Field Functions 
    bool hasIncrementDuplicationInfrequentAccessPeriod() const { return this->incrementDuplicationInfrequentAccessPeriod_ != nullptr;};
    void deleteIncrementDuplicationInfrequentAccessPeriod() { this->incrementDuplicationInfrequentAccessPeriod_ = nullptr;};
    inline string getIncrementDuplicationInfrequentAccessPeriod() const { DARABONBA_PTR_GET_DEFAULT(incrementDuplicationInfrequentAccessPeriod_, "") };
    inline ModifyStorageStrategyRequest& setIncrementDuplicationInfrequentAccessPeriod(string incrementDuplicationInfrequentAccessPeriod) { DARABONBA_PTR_SET_VALUE(incrementDuplicationInfrequentAccessPeriod_, incrementDuplicationInfrequentAccessPeriod) };


    // logBackupRetentionPeriod Field Functions 
    bool hasLogBackupRetentionPeriod() const { return this->logBackupRetentionPeriod_ != nullptr;};
    void deleteLogBackupRetentionPeriod() { this->logBackupRetentionPeriod_ = nullptr;};
    inline string getLogBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupRetentionPeriod_, "") };
    inline ModifyStorageStrategyRequest& setLogBackupRetentionPeriod(string logBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupRetentionPeriod_, logBackupRetentionPeriod) };


    // logDuplicationArchivePeriod Field Functions 
    bool hasLogDuplicationArchivePeriod() const { return this->logDuplicationArchivePeriod_ != nullptr;};
    void deleteLogDuplicationArchivePeriod() { this->logDuplicationArchivePeriod_ = nullptr;};
    inline string getLogDuplicationArchivePeriod() const { DARABONBA_PTR_GET_DEFAULT(logDuplicationArchivePeriod_, "") };
    inline ModifyStorageStrategyRequest& setLogDuplicationArchivePeriod(string logDuplicationArchivePeriod) { DARABONBA_PTR_SET_VALUE(logDuplicationArchivePeriod_, logDuplicationArchivePeriod) };


    // logDuplicationInfrequentAccessPeriod Field Functions 
    bool hasLogDuplicationInfrequentAccessPeriod() const { return this->logDuplicationInfrequentAccessPeriod_ != nullptr;};
    void deleteLogDuplicationInfrequentAccessPeriod() { this->logDuplicationInfrequentAccessPeriod_ = nullptr;};
    inline string getLogDuplicationInfrequentAccessPeriod() const { DARABONBA_PTR_GET_DEFAULT(logDuplicationInfrequentAccessPeriod_, "") };
    inline ModifyStorageStrategyRequest& setLogDuplicationInfrequentAccessPeriod(string logDuplicationInfrequentAccessPeriod) { DARABONBA_PTR_SET_VALUE(logDuplicationInfrequentAccessPeriod_, logDuplicationInfrequentAccessPeriod) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ModifyStorageStrategyRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // Backup plan ID. Obtain this parameter\\"s value by calling the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) API.
    // 
    // This parameter is required.
    shared_ptr<string> backupPlanId_ {};
    // Backup data retention period, in days. Valid values: 0 to 1825.
    // 
    // > Default value: 730 days.
    // 
    // This parameter is required.
    shared_ptr<int32_t> backupRetentionPeriod_ {};
    shared_ptr<string> backupStorageEncryptMethod_ {};
    // An arbitrary string used to ensure the idempotence of the request and prevent duplicate submissions.
    shared_ptr<string> clientToken_ {};
    // Time to convert to Archive Storage. This value must be less than the backup data retention period (BackupRetentionPeriod parameter). For more information about Archive Storage, see [Storage Type Overview](https://help.aliyun.com/document_detail/51374.html).
    // 
    // > Default value: 365 days.
    // 
    // This parameter is required.
    shared_ptr<int32_t> duplicationArchivePeriod_ {};
    // Time to convert to Infrequent Access storage. This value must be less than the Archive Storage period (DuplicationArchivePeriod parameter). For more information about Infrequent Access storage, see [Storage Type Overview](https://help.aliyun.com/document_detail/51374.html).
    // 
    // > Default value: 180 days.
    // 
    // This parameter is required.
    shared_ptr<int32_t> duplicationInfrequentAccessPeriod_ {};
    shared_ptr<string> incrementBackupRetentionPeriod_ {};
    shared_ptr<string> incrementDuplicationArchivePeriod_ {};
    shared_ptr<string> incrementDuplicationInfrequentAccessPeriod_ {};
    shared_ptr<string> logBackupRetentionPeriod_ {};
    shared_ptr<string> logDuplicationArchivePeriod_ {};
    shared_ptr<string> logDuplicationInfrequentAccessPeriod_ {};
    shared_ptr<string> ownerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif

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
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DuplicationArchivePeriod, duplicationArchivePeriod_);
      DARABONBA_PTR_TO_JSON(DuplicationInfrequentAccessPeriod, duplicationInfrequentAccessPeriod_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyStorageStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DuplicationArchivePeriod, duplicationArchivePeriod_);
      DARABONBA_PTR_FROM_JSON(DuplicationInfrequentAccessPeriod, duplicationInfrequentAccessPeriod_);
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
        && return this->backupRetentionPeriod_ == nullptr && return this->clientToken_ == nullptr && return this->duplicationArchivePeriod_ == nullptr && return this->duplicationInfrequentAccessPeriod_ == nullptr && return this->ownerId_ == nullptr; };
    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string backupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline ModifyStorageStrategyRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int32_t backupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0) };
    inline ModifyStorageStrategyRequest& setBackupRetentionPeriod(int32_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyStorageStrategyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // duplicationArchivePeriod Field Functions 
    bool hasDuplicationArchivePeriod() const { return this->duplicationArchivePeriod_ != nullptr;};
    void deleteDuplicationArchivePeriod() { this->duplicationArchivePeriod_ = nullptr;};
    inline int32_t duplicationArchivePeriod() const { DARABONBA_PTR_GET_DEFAULT(duplicationArchivePeriod_, 0) };
    inline ModifyStorageStrategyRequest& setDuplicationArchivePeriod(int32_t duplicationArchivePeriod) { DARABONBA_PTR_SET_VALUE(duplicationArchivePeriod_, duplicationArchivePeriod) };


    // duplicationInfrequentAccessPeriod Field Functions 
    bool hasDuplicationInfrequentAccessPeriod() const { return this->duplicationInfrequentAccessPeriod_ != nullptr;};
    void deleteDuplicationInfrequentAccessPeriod() { this->duplicationInfrequentAccessPeriod_ = nullptr;};
    inline int32_t duplicationInfrequentAccessPeriod() const { DARABONBA_PTR_GET_DEFAULT(duplicationInfrequentAccessPeriod_, 0) };
    inline ModifyStorageStrategyRequest& setDuplicationInfrequentAccessPeriod(int32_t duplicationInfrequentAccessPeriod) { DARABONBA_PTR_SET_VALUE(duplicationInfrequentAccessPeriod_, duplicationInfrequentAccessPeriod) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ModifyStorageStrategyRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // The ID of the backup schedule. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupPlanId_ = nullptr;
    // The number of days for which the backup data is retained. Valid values: 0 to 1825.
    // 
    // > Default value: 730.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> backupRetentionPeriod_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The number of days after which the storage class of the backup data is changed to Archive. The value of this parameter must be smaller than the value of the BackupRetentionPeriod parameter. For more information about the Archive storage class, see [Storage class overview](https://help.aliyun.com/document_detail/51374.html).
    // 
    // > Default value: 365.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> duplicationArchivePeriod_ = nullptr;
    // The number of days after which the storage class of the backup data is changed to Infrequent Access (IA). The value of this parameter must be smaller than the value of the DuplicationArchivePeriod parameter. For more information about the IA storage class, see [Storage class overview](https://help.aliyun.com/document_detail/51374.html).
    // 
    // > Default value: 180.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> duplicationInfrequentAccessPeriod_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif

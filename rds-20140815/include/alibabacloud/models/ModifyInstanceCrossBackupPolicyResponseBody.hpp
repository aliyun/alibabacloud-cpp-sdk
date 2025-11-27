// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCECROSSBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCECROSSBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyInstanceCrossBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceCrossBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupEnabled, backupEnabled_);
      DARABONBA_PTR_TO_JSON(CrossBackupRegion, crossBackupRegion_);
      DARABONBA_PTR_TO_JSON(CrossBackupType, crossBackupType_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(LogBackupEnabled, logBackupEnabled_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetentType, retentType_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceCrossBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupEnabled, backupEnabled_);
      DARABONBA_PTR_FROM_JSON(CrossBackupRegion, crossBackupRegion_);
      DARABONBA_PTR_FROM_JSON(CrossBackupType, crossBackupType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(LogBackupEnabled, logBackupEnabled_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetentType, retentType_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
    };
    ModifyInstanceCrossBackupPolicyResponseBody() = default ;
    ModifyInstanceCrossBackupPolicyResponseBody(const ModifyInstanceCrossBackupPolicyResponseBody &) = default ;
    ModifyInstanceCrossBackupPolicyResponseBody(ModifyInstanceCrossBackupPolicyResponseBody &&) = default ;
    ModifyInstanceCrossBackupPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceCrossBackupPolicyResponseBody() = default ;
    ModifyInstanceCrossBackupPolicyResponseBody& operator=(const ModifyInstanceCrossBackupPolicyResponseBody &) = default ;
    ModifyInstanceCrossBackupPolicyResponseBody& operator=(ModifyInstanceCrossBackupPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupEnabled_ == nullptr
        && return this->crossBackupRegion_ == nullptr && return this->crossBackupType_ == nullptr && return this->DBInstanceId_ == nullptr && return this->logBackupEnabled_ == nullptr && return this->regionId_ == nullptr
        && return this->requestId_ == nullptr && return this->retentType_ == nullptr && return this->retention_ == nullptr; };
    // backupEnabled Field Functions 
    bool hasBackupEnabled() const { return this->backupEnabled_ != nullptr;};
    void deleteBackupEnabled() { this->backupEnabled_ = nullptr;};
    inline string backupEnabled() const { DARABONBA_PTR_GET_DEFAULT(backupEnabled_, "") };
    inline ModifyInstanceCrossBackupPolicyResponseBody& setBackupEnabled(string backupEnabled) { DARABONBA_PTR_SET_VALUE(backupEnabled_, backupEnabled) };


    // crossBackupRegion Field Functions 
    bool hasCrossBackupRegion() const { return this->crossBackupRegion_ != nullptr;};
    void deleteCrossBackupRegion() { this->crossBackupRegion_ = nullptr;};
    inline string crossBackupRegion() const { DARABONBA_PTR_GET_DEFAULT(crossBackupRegion_, "") };
    inline ModifyInstanceCrossBackupPolicyResponseBody& setCrossBackupRegion(string crossBackupRegion) { DARABONBA_PTR_SET_VALUE(crossBackupRegion_, crossBackupRegion) };


    // crossBackupType Field Functions 
    bool hasCrossBackupType() const { return this->crossBackupType_ != nullptr;};
    void deleteCrossBackupType() { this->crossBackupType_ = nullptr;};
    inline string crossBackupType() const { DARABONBA_PTR_GET_DEFAULT(crossBackupType_, "") };
    inline ModifyInstanceCrossBackupPolicyResponseBody& setCrossBackupType(string crossBackupType) { DARABONBA_PTR_SET_VALUE(crossBackupType_, crossBackupType) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyInstanceCrossBackupPolicyResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // logBackupEnabled Field Functions 
    bool hasLogBackupEnabled() const { return this->logBackupEnabled_ != nullptr;};
    void deleteLogBackupEnabled() { this->logBackupEnabled_ = nullptr;};
    inline string logBackupEnabled() const { DARABONBA_PTR_GET_DEFAULT(logBackupEnabled_, "") };
    inline ModifyInstanceCrossBackupPolicyResponseBody& setLogBackupEnabled(string logBackupEnabled) { DARABONBA_PTR_SET_VALUE(logBackupEnabled_, logBackupEnabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstanceCrossBackupPolicyResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyInstanceCrossBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retentType Field Functions 
    bool hasRetentType() const { return this->retentType_ != nullptr;};
    void deleteRetentType() { this->retentType_ = nullptr;};
    inline int32_t retentType() const { DARABONBA_PTR_GET_DEFAULT(retentType_, 0) };
    inline ModifyInstanceCrossBackupPolicyResponseBody& setRetentType(int32_t retentType) { DARABONBA_PTR_SET_VALUE(retentType_, retentType) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int32_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0) };
    inline ModifyInstanceCrossBackupPolicyResponseBody& setRetention(int32_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


  protected:
    // The status of the cross-region backup feature on the instance. Valid values:
    // 
    // *   **Disable**
    // *   **Enable**
    std::shared_ptr<string> backupEnabled_ = nullptr;
    // The ID of the region in which the cross-region backup files of the instance are stored.
    std::shared_ptr<string> crossBackupRegion_ = nullptr;
    // The policy that is used to save the cross-region backup files of the instance. Default value: **1**. The value 1 indicates that all cross-region backup files are saved.
    std::shared_ptr<string> crossBackupType_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The status of the cross-region log backup feature on the instance. Valid values:
    // 
    // *   **Disable**
    // *   **Enable**
    std::shared_ptr<string> logBackupEnabled_ = nullptr;
    // The region ID of the source instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/26243.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The policy that is used to retain the cross-region backup files of the instance. Default value: **1**. The value 1 indicates that the cross-region backup files of the instance are retained based on the specified retention period.
    std::shared_ptr<int32_t> retentType_ = nullptr;
    // The number of days for which the cross-region backup files of the instance are retained. Valid values: **7 to 1825**.
    std::shared_ptr<int32_t> retention_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompressType, compressType_);
      DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_TO_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_TO_JSON(HighSpaceUsageProtection, highSpaceUsageProtection_);
      DARABONBA_PTR_TO_JSON(LocalLogRetentionHours, localLogRetentionHours_);
      DARABONBA_PTR_TO_JSON(LocalLogRetentionSpace, localLogRetentionSpace_);
      DARABONBA_PTR_TO_JSON(LogBackupLocalRetentionNumber, logBackupLocalRetentionNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompressType, compressType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_FROM_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_FROM_JSON(HighSpaceUsageProtection, highSpaceUsageProtection_);
      DARABONBA_PTR_FROM_JSON(LocalLogRetentionHours, localLogRetentionHours_);
      DARABONBA_PTR_FROM_JSON(LocalLogRetentionSpace, localLogRetentionSpace_);
      DARABONBA_PTR_FROM_JSON(LogBackupLocalRetentionNumber, logBackupLocalRetentionNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyBackupPolicyResponseBody() = default ;
    ModifyBackupPolicyResponseBody(const ModifyBackupPolicyResponseBody &) = default ;
    ModifyBackupPolicyResponseBody(ModifyBackupPolicyResponseBody &&) = default ;
    ModifyBackupPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupPolicyResponseBody() = default ;
    ModifyBackupPolicyResponseBody& operator=(const ModifyBackupPolicyResponseBody &) = default ;
    ModifyBackupPolicyResponseBody& operator=(ModifyBackupPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compressType_ == nullptr
        && return this->DBInstanceID_ == nullptr && return this->enableBackupLog_ == nullptr && return this->highSpaceUsageProtection_ == nullptr && return this->localLogRetentionHours_ == nullptr && return this->localLogRetentionSpace_ == nullptr
        && return this->logBackupLocalRetentionNumber_ == nullptr && return this->requestId_ == nullptr; };
    // compressType Field Functions 
    bool hasCompressType() const { return this->compressType_ != nullptr;};
    void deleteCompressType() { this->compressType_ = nullptr;};
    inline string compressType() const { DARABONBA_PTR_GET_DEFAULT(compressType_, "") };
    inline ModifyBackupPolicyResponseBody& setCompressType(string compressType) { DARABONBA_PTR_SET_VALUE(compressType_, compressType) };


    // DBInstanceID Field Functions 
    bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
    void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
    inline string DBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, "") };
    inline ModifyBackupPolicyResponseBody& setDBInstanceID(string DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


    // enableBackupLog Field Functions 
    bool hasEnableBackupLog() const { return this->enableBackupLog_ != nullptr;};
    void deleteEnableBackupLog() { this->enableBackupLog_ = nullptr;};
    inline string enableBackupLog() const { DARABONBA_PTR_GET_DEFAULT(enableBackupLog_, "") };
    inline ModifyBackupPolicyResponseBody& setEnableBackupLog(string enableBackupLog) { DARABONBA_PTR_SET_VALUE(enableBackupLog_, enableBackupLog) };


    // highSpaceUsageProtection Field Functions 
    bool hasHighSpaceUsageProtection() const { return this->highSpaceUsageProtection_ != nullptr;};
    void deleteHighSpaceUsageProtection() { this->highSpaceUsageProtection_ = nullptr;};
    inline string highSpaceUsageProtection() const { DARABONBA_PTR_GET_DEFAULT(highSpaceUsageProtection_, "") };
    inline ModifyBackupPolicyResponseBody& setHighSpaceUsageProtection(string highSpaceUsageProtection) { DARABONBA_PTR_SET_VALUE(highSpaceUsageProtection_, highSpaceUsageProtection) };


    // localLogRetentionHours Field Functions 
    bool hasLocalLogRetentionHours() const { return this->localLogRetentionHours_ != nullptr;};
    void deleteLocalLogRetentionHours() { this->localLogRetentionHours_ = nullptr;};
    inline int32_t localLogRetentionHours() const { DARABONBA_PTR_GET_DEFAULT(localLogRetentionHours_, 0) };
    inline ModifyBackupPolicyResponseBody& setLocalLogRetentionHours(int32_t localLogRetentionHours) { DARABONBA_PTR_SET_VALUE(localLogRetentionHours_, localLogRetentionHours) };


    // localLogRetentionSpace Field Functions 
    bool hasLocalLogRetentionSpace() const { return this->localLogRetentionSpace_ != nullptr;};
    void deleteLocalLogRetentionSpace() { this->localLogRetentionSpace_ = nullptr;};
    inline string localLogRetentionSpace() const { DARABONBA_PTR_GET_DEFAULT(localLogRetentionSpace_, "") };
    inline ModifyBackupPolicyResponseBody& setLocalLogRetentionSpace(string localLogRetentionSpace) { DARABONBA_PTR_SET_VALUE(localLogRetentionSpace_, localLogRetentionSpace) };


    // logBackupLocalRetentionNumber Field Functions 
    bool hasLogBackupLocalRetentionNumber() const { return this->logBackupLocalRetentionNumber_ != nullptr;};
    void deleteLogBackupLocalRetentionNumber() { this->logBackupLocalRetentionNumber_ = nullptr;};
    inline int32_t logBackupLocalRetentionNumber() const { DARABONBA_PTR_GET_DEFAULT(logBackupLocalRetentionNumber_, 0) };
    inline ModifyBackupPolicyResponseBody& setLogBackupLocalRetentionNumber(int32_t logBackupLocalRetentionNumber) { DARABONBA_PTR_SET_VALUE(logBackupLocalRetentionNumber_, logBackupLocalRetentionNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The method that is used to compress backups. Valid values:
    // 
    // *   **0:** Backups are not compressed.
    // *   **1**: Backups are compressed by using the zlib tool.
    // *   **2**: Backups are compressed in parallel by using the zlib tool.
    // *   **4**: Backups are compressed by using the QuickLZ tool and can be used to restore individual databases and tables.
    // *   **8**: Backups are compressed by using the QuickLZ tool but cannot be used to restore individual databases or tables. This value is supported only for instances that run MySQL 8.0.
    std::shared_ptr<string> compressType_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceID_ = nullptr;
    // Indicates whether the log backup feature is enabled. Valid values:
    // 
    // *   **1**: The feature is enabled.
    // *   **0**: The feature is disabled.
    std::shared_ptr<string> enableBackupLog_ = nullptr;
    // Specifies whether to forcefully delete log backup files from the instance when the storage usage of the instance exceeds 80% or the amount of remaining storage on the instance is less than 5 GB.
    std::shared_ptr<string> highSpaceUsageProtection_ = nullptr;
    // The number of hours for which log backup files are retained on the instance.
    std::shared_ptr<int32_t> localLogRetentionHours_ = nullptr;
    // The maximum storage usage that is allowed for log backup files on the instance.
    std::shared_ptr<string> localLogRetentionSpace_ = nullptr;
    // The number of binary log files on the instance.
    std::shared_ptr<int32_t> logBackupLocalRetentionNumber_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

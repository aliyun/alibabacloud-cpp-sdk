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
      DARABONBA_PTR_TO_JSON(EnableIncrementDataBackup, enableIncrementDataBackup_);
      DARABONBA_PTR_TO_JSON(EnablePitrProtection, enablePitrProtection_);
      DARABONBA_PTR_TO_JSON(HighSpaceUsageProtection, highSpaceUsageProtection_);
      DARABONBA_PTR_TO_JSON(IncBackupInterval, incBackupInterval_);
      DARABONBA_PTR_TO_JSON(LocalLogRetentionHours, localLogRetentionHours_);
      DARABONBA_PTR_TO_JSON(LocalLogRetentionSpace, localLogRetentionSpace_);
      DARABONBA_PTR_TO_JSON(LogBackupLocalRetentionNumber, logBackupLocalRetentionNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompressType, compressType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_FROM_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_FROM_JSON(EnableIncrementDataBackup, enableIncrementDataBackup_);
      DARABONBA_PTR_FROM_JSON(EnablePitrProtection, enablePitrProtection_);
      DARABONBA_PTR_FROM_JSON(HighSpaceUsageProtection, highSpaceUsageProtection_);
      DARABONBA_PTR_FROM_JSON(IncBackupInterval, incBackupInterval_);
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
        && this->DBInstanceID_ == nullptr && this->enableBackupLog_ == nullptr && this->enableIncrementDataBackup_ == nullptr && this->enablePitrProtection_ == nullptr && this->highSpaceUsageProtection_ == nullptr
        && this->incBackupInterval_ == nullptr && this->localLogRetentionHours_ == nullptr && this->localLogRetentionSpace_ == nullptr && this->logBackupLocalRetentionNumber_ == nullptr && this->requestId_ == nullptr; };
    // compressType Field Functions 
    bool hasCompressType() const { return this->compressType_ != nullptr;};
    void deleteCompressType() { this->compressType_ = nullptr;};
    inline string getCompressType() const { DARABONBA_PTR_GET_DEFAULT(compressType_, "") };
    inline ModifyBackupPolicyResponseBody& setCompressType(string compressType) { DARABONBA_PTR_SET_VALUE(compressType_, compressType) };


    // DBInstanceID Field Functions 
    bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
    void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
    inline string getDBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, "") };
    inline ModifyBackupPolicyResponseBody& setDBInstanceID(string DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


    // enableBackupLog Field Functions 
    bool hasEnableBackupLog() const { return this->enableBackupLog_ != nullptr;};
    void deleteEnableBackupLog() { this->enableBackupLog_ = nullptr;};
    inline string getEnableBackupLog() const { DARABONBA_PTR_GET_DEFAULT(enableBackupLog_, "") };
    inline ModifyBackupPolicyResponseBody& setEnableBackupLog(string enableBackupLog) { DARABONBA_PTR_SET_VALUE(enableBackupLog_, enableBackupLog) };


    // enableIncrementDataBackup Field Functions 
    bool hasEnableIncrementDataBackup() const { return this->enableIncrementDataBackup_ != nullptr;};
    void deleteEnableIncrementDataBackup() { this->enableIncrementDataBackup_ = nullptr;};
    inline bool getEnableIncrementDataBackup() const { DARABONBA_PTR_GET_DEFAULT(enableIncrementDataBackup_, false) };
    inline ModifyBackupPolicyResponseBody& setEnableIncrementDataBackup(bool enableIncrementDataBackup) { DARABONBA_PTR_SET_VALUE(enableIncrementDataBackup_, enableIncrementDataBackup) };


    // enablePitrProtection Field Functions 
    bool hasEnablePitrProtection() const { return this->enablePitrProtection_ != nullptr;};
    void deleteEnablePitrProtection() { this->enablePitrProtection_ = nullptr;};
    inline bool getEnablePitrProtection() const { DARABONBA_PTR_GET_DEFAULT(enablePitrProtection_, false) };
    inline ModifyBackupPolicyResponseBody& setEnablePitrProtection(bool enablePitrProtection) { DARABONBA_PTR_SET_VALUE(enablePitrProtection_, enablePitrProtection) };


    // highSpaceUsageProtection Field Functions 
    bool hasHighSpaceUsageProtection() const { return this->highSpaceUsageProtection_ != nullptr;};
    void deleteHighSpaceUsageProtection() { this->highSpaceUsageProtection_ = nullptr;};
    inline string getHighSpaceUsageProtection() const { DARABONBA_PTR_GET_DEFAULT(highSpaceUsageProtection_, "") };
    inline ModifyBackupPolicyResponseBody& setHighSpaceUsageProtection(string highSpaceUsageProtection) { DARABONBA_PTR_SET_VALUE(highSpaceUsageProtection_, highSpaceUsageProtection) };


    // incBackupInterval Field Functions 
    bool hasIncBackupInterval() const { return this->incBackupInterval_ != nullptr;};
    void deleteIncBackupInterval() { this->incBackupInterval_ = nullptr;};
    inline int32_t getIncBackupInterval() const { DARABONBA_PTR_GET_DEFAULT(incBackupInterval_, 0) };
    inline ModifyBackupPolicyResponseBody& setIncBackupInterval(int32_t incBackupInterval) { DARABONBA_PTR_SET_VALUE(incBackupInterval_, incBackupInterval) };


    // localLogRetentionHours Field Functions 
    bool hasLocalLogRetentionHours() const { return this->localLogRetentionHours_ != nullptr;};
    void deleteLocalLogRetentionHours() { this->localLogRetentionHours_ = nullptr;};
    inline int32_t getLocalLogRetentionHours() const { DARABONBA_PTR_GET_DEFAULT(localLogRetentionHours_, 0) };
    inline ModifyBackupPolicyResponseBody& setLocalLogRetentionHours(int32_t localLogRetentionHours) { DARABONBA_PTR_SET_VALUE(localLogRetentionHours_, localLogRetentionHours) };


    // localLogRetentionSpace Field Functions 
    bool hasLocalLogRetentionSpace() const { return this->localLogRetentionSpace_ != nullptr;};
    void deleteLocalLogRetentionSpace() { this->localLogRetentionSpace_ = nullptr;};
    inline string getLocalLogRetentionSpace() const { DARABONBA_PTR_GET_DEFAULT(localLogRetentionSpace_, "") };
    inline ModifyBackupPolicyResponseBody& setLocalLogRetentionSpace(string localLogRetentionSpace) { DARABONBA_PTR_SET_VALUE(localLogRetentionSpace_, localLogRetentionSpace) };


    // logBackupLocalRetentionNumber Field Functions 
    bool hasLogBackupLocalRetentionNumber() const { return this->logBackupLocalRetentionNumber_ != nullptr;};
    void deleteLogBackupLocalRetentionNumber() { this->logBackupLocalRetentionNumber_ = nullptr;};
    inline int32_t getLogBackupLocalRetentionNumber() const { DARABONBA_PTR_GET_DEFAULT(logBackupLocalRetentionNumber_, 0) };
    inline ModifyBackupPolicyResponseBody& setLogBackupLocalRetentionNumber(int32_t logBackupLocalRetentionNumber) { DARABONBA_PTR_SET_VALUE(logBackupLocalRetentionNumber_, logBackupLocalRetentionNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The backup compression method. Valid values:
    // * **0**: not compressed.
    // * **1**: zlib compression.
    // * **2**: parallel zlib compression.
    // * **4**: quicklz compression with database and table restoration enabled.
    // * **8**: MySQL 8.0 quicklz compression without database and table restoration support.
    shared_ptr<string> compressType_ {};
    // The instance ID.
    shared_ptr<string> DBInstanceID_ {};
    // Indicates whether instance log backup is enabled. Valid values:
    // * **1**: enabled.
    // * **0**: disabled.
    // 
    // 
    // > Instance log backup for SQL Server instances is enabled by default and cannot be disabled.
    shared_ptr<string> enableBackupLog_ {};
    shared_ptr<bool> enableIncrementDataBackup_ {};
    shared_ptr<bool> enablePitrProtection_ {};
    // Indicates whether binary logs are unconditionally cleaned up when the storage usage of a **MySQL** instance exceeds 80% or the remaining storage is less than 5 GB.
    shared_ptr<string> highSpaceUsageProtection_ {};
    shared_ptr<int32_t> incBackupInterval_ {};
    // The number of hours for which instance log backups are retained on the local storage of a **MySQL** instance.
    shared_ptr<int32_t> localLogRetentionHours_ {};
    // The maximum loop space usage of binary logs for a **MySQL** instance.
    shared_ptr<string> localLogRetentionSpace_ {};
    // The number of binary logs retained locally for a **MySQL** instance.
    shared_ptr<int32_t> logBackupLocalRetentionNumber_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

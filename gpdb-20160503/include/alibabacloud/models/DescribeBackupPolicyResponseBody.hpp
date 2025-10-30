// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(EnableRecoveryPoint, enableRecoveryPoint_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(RecoveryPointPeriod, recoveryPointPeriod_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(EnableRecoveryPoint, enableRecoveryPoint_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(RecoveryPointPeriod, recoveryPointPeriod_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupPolicyResponseBody() = default ;
    DescribeBackupPolicyResponseBody(const DescribeBackupPolicyResponseBody &) = default ;
    DescribeBackupPolicyResponseBody(DescribeBackupPolicyResponseBody &&) = default ;
    DescribeBackupPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPolicyResponseBody() = default ;
    DescribeBackupPolicyResponseBody& operator=(const DescribeBackupPolicyResponseBody &) = default ;
    DescribeBackupPolicyResponseBody& operator=(DescribeBackupPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupRetentionPeriod_ == nullptr
        && return this->enableRecoveryPoint_ == nullptr && return this->preferredBackupPeriod_ == nullptr && return this->preferredBackupTime_ == nullptr && return this->recoveryPointPeriod_ == nullptr && return this->requestId_ == nullptr; };
    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int32_t backupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0) };
    inline DescribeBackupPolicyResponseBody& setBackupRetentionPeriod(int32_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // enableRecoveryPoint Field Functions 
    bool hasEnableRecoveryPoint() const { return this->enableRecoveryPoint_ != nullptr;};
    void deleteEnableRecoveryPoint() { this->enableRecoveryPoint_ = nullptr;};
    inline bool enableRecoveryPoint() const { DARABONBA_PTR_GET_DEFAULT(enableRecoveryPoint_, false) };
    inline DescribeBackupPolicyResponseBody& setEnableRecoveryPoint(bool enableRecoveryPoint) { DARABONBA_PTR_SET_VALUE(enableRecoveryPoint_, enableRecoveryPoint) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string preferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string preferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline DescribeBackupPolicyResponseBody& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // recoveryPointPeriod Field Functions 
    bool hasRecoveryPointPeriod() const { return this->recoveryPointPeriod_ != nullptr;};
    void deleteRecoveryPointPeriod() { this->recoveryPointPeriod_ = nullptr;};
    inline string recoveryPointPeriod() const { DARABONBA_PTR_GET_DEFAULT(recoveryPointPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setRecoveryPointPeriod(string recoveryPointPeriod) { DARABONBA_PTR_SET_VALUE(recoveryPointPeriod_, recoveryPointPeriod) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of days for which data backup files are retained.
    std::shared_ptr<int32_t> backupRetentionPeriod_ = nullptr;
    // Indicates whether automatic point-in-time backup is enabled. Valid values:
    // 
    // *   **true**: Automatic point-in-time backup is enabled.
    // *   **false**: Automatic point-in-time backup is disabled.
    std::shared_ptr<bool> enableRecoveryPoint_ = nullptr;
    // The cycle based on which backups are performed. If more than one day of the week is specified, the days of the week are separated by commas (,). Valid values:
    // 
    // *   **Monday**
    // *   **Tuesday**
    // *   **Wednesday**
    // *   **Thursday**
    // *   **Friday**
    // *   **Saturday**
    // *   **Sunday**
    std::shared_ptr<string> preferredBackupPeriod_ = nullptr;
    // The backup time. The time is in the HH:mmZ-HH:mmZ format. The time is displayed in UTC.
    std::shared_ptr<string> preferredBackupTime_ = nullptr;
    // The frequency of the point-in-time backup. Valid values:
    // 
    // *   **1**: per hour
    // *   **2**: per 2 hours
    // *   **4**: per 4 hours
    // *   **8**: per 8 hours
    std::shared_ptr<string> recoveryPointPeriod_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

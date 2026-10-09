// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUPABASEBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUPABASEBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeSupabaseBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSupabaseBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupInterval, backupInterval_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(EnableRecoveryPoint, enableRecoveryPoint_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(RecoveryPointPeriod, recoveryPointPeriod_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSupabaseBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupInterval, backupInterval_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(EnableRecoveryPoint, enableRecoveryPoint_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(RecoveryPointPeriod, recoveryPointPeriod_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSupabaseBackupPolicyResponseBody() = default ;
    DescribeSupabaseBackupPolicyResponseBody(const DescribeSupabaseBackupPolicyResponseBody &) = default ;
    DescribeSupabaseBackupPolicyResponseBody(DescribeSupabaseBackupPolicyResponseBody &&) = default ;
    DescribeSupabaseBackupPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSupabaseBackupPolicyResponseBody() = default ;
    DescribeSupabaseBackupPolicyResponseBody& operator=(const DescribeSupabaseBackupPolicyResponseBody &) = default ;
    DescribeSupabaseBackupPolicyResponseBody& operator=(DescribeSupabaseBackupPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupInterval_ == nullptr
        && this->backupRetentionPeriod_ == nullptr && this->enableRecoveryPoint_ == nullptr && this->preferredBackupPeriod_ == nullptr && this->preferredBackupTime_ == nullptr && this->recoveryPointPeriod_ == nullptr
        && this->requestId_ == nullptr; };
    // backupInterval Field Functions 
    bool hasBackupInterval() const { return this->backupInterval_ != nullptr;};
    void deleteBackupInterval() { this->backupInterval_ = nullptr;};
    inline int32_t getBackupInterval() const { DARABONBA_PTR_GET_DEFAULT(backupInterval_, 0) };
    inline DescribeSupabaseBackupPolicyResponseBody& setBackupInterval(int32_t backupInterval) { DARABONBA_PTR_SET_VALUE(backupInterval_, backupInterval) };


    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int32_t getBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0) };
    inline DescribeSupabaseBackupPolicyResponseBody& setBackupRetentionPeriod(int32_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // enableRecoveryPoint Field Functions 
    bool hasEnableRecoveryPoint() const { return this->enableRecoveryPoint_ != nullptr;};
    void deleteEnableRecoveryPoint() { this->enableRecoveryPoint_ = nullptr;};
    inline bool getEnableRecoveryPoint() const { DARABONBA_PTR_GET_DEFAULT(enableRecoveryPoint_, false) };
    inline DescribeSupabaseBackupPolicyResponseBody& setEnableRecoveryPoint(bool enableRecoveryPoint) { DARABONBA_PTR_SET_VALUE(enableRecoveryPoint_, enableRecoveryPoint) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string getPreferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline DescribeSupabaseBackupPolicyResponseBody& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string getPreferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline DescribeSupabaseBackupPolicyResponseBody& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // recoveryPointPeriod Field Functions 
    bool hasRecoveryPointPeriod() const { return this->recoveryPointPeriod_ != nullptr;};
    void deleteRecoveryPointPeriod() { this->recoveryPointPeriod_ = nullptr;};
    inline string getRecoveryPointPeriod() const { DARABONBA_PTR_GET_DEFAULT(recoveryPointPeriod_, "") };
    inline DescribeSupabaseBackupPolicyResponseBody& setRecoveryPointPeriod(string recoveryPointPeriod) { DARABONBA_PTR_SET_VALUE(recoveryPointPeriod_, recoveryPointPeriod) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSupabaseBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The interval between automatic recovery points, in minutes. A value greater than 0 indicates that automatic recovery points are enabled. If the feature is disabled, -1 is returned.
    shared_ptr<int32_t> backupInterval_ {};
    // The data backup retention period, in days.
    shared_ptr<int32_t> backupRetentionPeriod_ {};
    // Indicates whether automatic recovery points are enabled. Valid values:
    // - true: Enabled.
    // - false: Disabled.
    shared_ptr<bool> enableRecoveryPoint_ {};
    // The data backup cycle. Separate multiple values with commas (,). Valid values: Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, and Sunday.
    shared_ptr<string> preferredBackupPeriod_ {};
    // The data backup time window in UTC. The format is HH:mmZ-HH:mmZ.
    shared_ptr<string> preferredBackupTime_ {};
    // The interval for the automatic creation of recovery points, in hours. Valid values: 1/6 (10 minutes), 1/2 (30 minutes), 1, 2, 4, and 8. This value is valid only when EnableRecoveryPoint is set to true. If automatic recovery points are shutdown, 0 is returned.
    shared_ptr<string> recoveryPointPeriod_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

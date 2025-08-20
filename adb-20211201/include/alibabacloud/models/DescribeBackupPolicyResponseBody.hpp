// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_TO_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_FROM_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
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
    virtual bool empty() const override { this->backupRetentionPeriod_ != nullptr
        && this->enableBackupLog_ != nullptr && this->logBackupRetentionPeriod_ != nullptr && this->preferredBackupPeriod_ != nullptr && this->preferredBackupTime_ != nullptr && this->requestId_ != nullptr; };
    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int32_t backupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0) };
    inline DescribeBackupPolicyResponseBody& setBackupRetentionPeriod(int32_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // enableBackupLog Field Functions 
    bool hasEnableBackupLog() const { return this->enableBackupLog_ != nullptr;};
    void deleteEnableBackupLog() { this->enableBackupLog_ = nullptr;};
    inline string enableBackupLog() const { DARABONBA_PTR_GET_DEFAULT(enableBackupLog_, "") };
    inline DescribeBackupPolicyResponseBody& setEnableBackupLog(string enableBackupLog) { DARABONBA_PTR_SET_VALUE(enableBackupLog_, enableBackupLog) };


    // logBackupRetentionPeriod Field Functions 
    bool hasLogBackupRetentionPeriod() const { return this->logBackupRetentionPeriod_ != nullptr;};
    void deleteLogBackupRetentionPeriod() { this->logBackupRetentionPeriod_ = nullptr;};
    inline int32_t logBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupRetentionPeriod_, 0) };
    inline DescribeBackupPolicyResponseBody& setLogBackupRetentionPeriod(int32_t logBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupRetentionPeriod_, logBackupRetentionPeriod) };


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


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of days for which data backup files are retained.
    std::shared_ptr<int32_t> backupRetentionPeriod_ = nullptr;
    // Indicates whether log backup is enabled. Valid values:
    // 
    // *   **Enable**
    // *   **Disable**
    std::shared_ptr<string> enableBackupLog_ = nullptr;
    // The number of days for which the log backup files are retained.
    std::shared_ptr<int32_t> logBackupRetentionPeriod_ = nullptr;
    // The cycle based on which backups are performed. If more than one day of the week is specified, the days of the week are separated by commas (,). Valid value:
    // 
    // *   Monday
    // *   Tuesday
    // *   Wednesday
    // *   Thursday
    // *   Friday
    // *   Saturday
    // *   Sunday
    std::shared_ptr<string> preferredBackupPeriod_ = nullptr;
    // The data backup time. The time is in the HH:mmZ-HH:mmZ format. The time is displayed in UTC.
    std::shared_ptr<string> preferredBackupTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif

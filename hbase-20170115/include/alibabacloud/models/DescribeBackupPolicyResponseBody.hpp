// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupEndTimeUTC, preferredBackupEndTimeUTC_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupStartTimeUTC, preferredBackupStartTimeUTC_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupEndTimeUTC, preferredBackupEndTimeUTC_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupStartTimeUTC, preferredBackupStartTimeUTC_);
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
    virtual bool empty() const override { return this->backupRetentionPeriod_ == nullptr
        && return this->preferredBackupEndTimeUTC_ == nullptr && return this->preferredBackupPeriod_ == nullptr && return this->preferredBackupStartTimeUTC_ == nullptr && return this->preferredBackupTime_ == nullptr && return this->requestId_ == nullptr; };
    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline string backupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setBackupRetentionPeriod(string backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // preferredBackupEndTimeUTC Field Functions 
    bool hasPreferredBackupEndTimeUTC() const { return this->preferredBackupEndTimeUTC_ != nullptr;};
    void deletePreferredBackupEndTimeUTC() { this->preferredBackupEndTimeUTC_ = nullptr;};
    inline string preferredBackupEndTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupEndTimeUTC_, "") };
    inline DescribeBackupPolicyResponseBody& setPreferredBackupEndTimeUTC(string preferredBackupEndTimeUTC) { DARABONBA_PTR_SET_VALUE(preferredBackupEndTimeUTC_, preferredBackupEndTimeUTC) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string preferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupStartTimeUTC Field Functions 
    bool hasPreferredBackupStartTimeUTC() const { return this->preferredBackupStartTimeUTC_ != nullptr;};
    void deletePreferredBackupStartTimeUTC() { this->preferredBackupStartTimeUTC_ = nullptr;};
    inline string preferredBackupStartTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupStartTimeUTC_, "") };
    inline DescribeBackupPolicyResponseBody& setPreferredBackupStartTimeUTC(string preferredBackupStartTimeUTC) { DARABONBA_PTR_SET_VALUE(preferredBackupStartTimeUTC_, preferredBackupStartTimeUTC) };


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
    std::shared_ptr<string> backupRetentionPeriod_ = nullptr;
    std::shared_ptr<string> preferredBackupEndTimeUTC_ = nullptr;
    std::shared_ptr<string> preferredBackupPeriod_ = nullptr;
    std::shared_ptr<string> preferredBackupStartTimeUTC_ = nullptr;
    std::shared_ptr<string> preferredBackupTime_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif

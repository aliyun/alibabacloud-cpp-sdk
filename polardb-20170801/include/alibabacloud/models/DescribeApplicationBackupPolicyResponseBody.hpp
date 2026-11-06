// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupRetentionPeriod, preferredBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupRetentionPeriod, preferredBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApplicationBackupPolicyResponseBody() = default ;
    DescribeApplicationBackupPolicyResponseBody(const DescribeApplicationBackupPolicyResponseBody &) = default ;
    DescribeApplicationBackupPolicyResponseBody(DescribeApplicationBackupPolicyResponseBody &&) = default ;
    DescribeApplicationBackupPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationBackupPolicyResponseBody() = default ;
    DescribeApplicationBackupPolicyResponseBody& operator=(const DescribeApplicationBackupPolicyResponseBody &) = default ;
    DescribeApplicationBackupPolicyResponseBody& operator=(DescribeApplicationBackupPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationType_ == nullptr && this->preferredBackupPeriod_ == nullptr && this->preferredBackupRetentionPeriod_ == nullptr && this->preferredBackupTime_ == nullptr && this->requestId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationBackupPolicyResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline DescribeApplicationBackupPolicyResponseBody& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string getPreferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline DescribeApplicationBackupPolicyResponseBody& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupRetentionPeriod Field Functions 
    bool hasPreferredBackupRetentionPeriod() const { return this->preferredBackupRetentionPeriod_ != nullptr;};
    void deletePreferredBackupRetentionPeriod() { this->preferredBackupRetentionPeriod_ = nullptr;};
    inline int32_t getPreferredBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupRetentionPeriod_, 0) };
    inline DescribeApplicationBackupPolicyResponseBody& setPreferredBackupRetentionPeriod(int32_t preferredBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupRetentionPeriod_, preferredBackupRetentionPeriod) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string getPreferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline DescribeApplicationBackupPolicyResponseBody& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the application.
    shared_ptr<string> applicationId_ {};
    // The application type, such as polarclaw.
    shared_ptr<string> applicationType_ {};
    // The days of the week when automatic backups are performed. Separate multiple values with commas. Valid values: Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, and Sunday.
    shared_ptr<string> preferredBackupPeriod_ {};
    // The retention period of level-1 backups, in days.
    shared_ptr<int32_t> preferredBackupRetentionPeriod_ {};
    // The time window when automatic backups are performed. The time follows the HH:mmZ-HH:mmZ format in UTC.
    shared_ptr<string> preferredBackupTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

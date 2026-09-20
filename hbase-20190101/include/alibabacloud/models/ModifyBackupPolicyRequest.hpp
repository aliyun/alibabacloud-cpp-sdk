// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class ModifyBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(PreferredBackupEndTimeUTC, preferredBackupEndTimeUTC_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupStartTimeUTC, preferredBackupStartTimeUTC_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupEndTimeUTC, preferredBackupEndTimeUTC_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupStartTimeUTC, preferredBackupStartTimeUTC_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
    };
    ModifyBackupPolicyRequest() = default ;
    ModifyBackupPolicyRequest(const ModifyBackupPolicyRequest &) = default ;
    ModifyBackupPolicyRequest(ModifyBackupPolicyRequest &&) = default ;
    ModifyBackupPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupPolicyRequest() = default ;
    ModifyBackupPolicyRequest& operator=(const ModifyBackupPolicyRequest &) = default ;
    ModifyBackupPolicyRequest& operator=(ModifyBackupPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->preferredBackupEndTimeUTC_ == nullptr && this->preferredBackupPeriod_ == nullptr && this->preferredBackupStartTimeUTC_ == nullptr && this->preferredBackupTime_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyBackupPolicyRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // preferredBackupEndTimeUTC Field Functions 
    bool hasPreferredBackupEndTimeUTC() const { return this->preferredBackupEndTimeUTC_ != nullptr;};
    void deletePreferredBackupEndTimeUTC() { this->preferredBackupEndTimeUTC_ = nullptr;};
    inline string getPreferredBackupEndTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupEndTimeUTC_, "") };
    inline ModifyBackupPolicyRequest& setPreferredBackupEndTimeUTC(string preferredBackupEndTimeUTC) { DARABONBA_PTR_SET_VALUE(preferredBackupEndTimeUTC_, preferredBackupEndTimeUTC) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string getPreferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline ModifyBackupPolicyRequest& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupStartTimeUTC Field Functions 
    bool hasPreferredBackupStartTimeUTC() const { return this->preferredBackupStartTimeUTC_ != nullptr;};
    void deletePreferredBackupStartTimeUTC() { this->preferredBackupStartTimeUTC_ = nullptr;};
    inline string getPreferredBackupStartTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupStartTimeUTC_, "") };
    inline ModifyBackupPolicyRequest& setPreferredBackupStartTimeUTC(string preferredBackupStartTimeUTC) { DARABONBA_PTR_SET_VALUE(preferredBackupStartTimeUTC_, preferredBackupStartTimeUTC) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string getPreferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline ModifyBackupPolicyRequest& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The UTC time when the backup ends.
    shared_ptr<string> preferredBackupEndTimeUTC_ {};
    // The backup cycle. Valid values:
    // - Monday: performs backup every Monday.
    // - Tuesday: performs backup every Tuesday.
    // - Wednesday: performs backup every Wednesday.
    // - Thursday: performs backup every Thursday.
    // - Friday: performs backup every Friday.
    // - Saturday: performs backup every Saturday.
    // - Sunday: performs backup every Sunday.
    // 
    // This parameter is required.
    shared_ptr<string> preferredBackupPeriod_ {};
    // The UTC time when the backup starts.
    shared_ptr<string> preferredBackupStartTimeUTC_ {};
    // The backup time range in the current time zone. The interval is 1 hour.
    // 
    // This parameter is required.
    shared_ptr<string> preferredBackupTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif

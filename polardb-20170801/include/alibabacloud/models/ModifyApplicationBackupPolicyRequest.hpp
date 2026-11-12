// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLICATIONBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLICATIONBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyApplicationBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApplicationBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupRetentionPeriod, preferredBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApplicationBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupRetentionPeriod, preferredBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyApplicationBackupPolicyRequest() = default ;
    ModifyApplicationBackupPolicyRequest(const ModifyApplicationBackupPolicyRequest &) = default ;
    ModifyApplicationBackupPolicyRequest(ModifyApplicationBackupPolicyRequest &&) = default ;
    ModifyApplicationBackupPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApplicationBackupPolicyRequest() = default ;
    ModifyApplicationBackupPolicyRequest& operator=(const ModifyApplicationBackupPolicyRequest &) = default ;
    ModifyApplicationBackupPolicyRequest& operator=(ModifyApplicationBackupPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationType_ == nullptr && this->preferredBackupPeriod_ == nullptr && this->preferredBackupRetentionPeriod_ == nullptr && this->preferredBackupTime_ == nullptr && this->regionId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ModifyApplicationBackupPolicyRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline ModifyApplicationBackupPolicyRequest& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string getPreferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline ModifyApplicationBackupPolicyRequest& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupRetentionPeriod Field Functions 
    bool hasPreferredBackupRetentionPeriod() const { return this->preferredBackupRetentionPeriod_ != nullptr;};
    void deletePreferredBackupRetentionPeriod() { this->preferredBackupRetentionPeriod_ = nullptr;};
    inline string getPreferredBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupRetentionPeriod_, "") };
    inline ModifyApplicationBackupPolicyRequest& setPreferredBackupRetentionPeriod(string preferredBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupRetentionPeriod_, preferredBackupRetentionPeriod) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string getPreferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline ModifyApplicationBackupPolicyRequest& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyApplicationBackupPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The application type, such as polarclaw. This parameter is required. If it is not provided, the service returns InvalidApplicationType.Malformed. Valid values: polarclaw, supabase, and polarclawsaas. Note: The ApplicationType field in the DescribeApplications response contains the polardb_ prefix (such as polardb_polarclaw). When you call this operation, remove the prefix and use the short format.
    shared_ptr<string> applicationType_ {};
    // The days of the week when automatic backups are performed. Separate multiple values with commas. Valid values: Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, and Sunday.
    shared_ptr<string> preferredBackupPeriod_ {};
    // The retention period of level-1 backups. Unit: days.
    shared_ptr<string> preferredBackupRetentionPeriod_ {};
    // The time window when automatic backups are performed. Specify the time in the HH:mmZ-HH:mmZ format in UTC. The start time and end time must be on the hour and exactly one hour apart.
    shared_ptr<string> preferredBackupTime_ {};
    // The region ID of the application.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETINSTANCEPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETINSTANCEPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ResetInstancePasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetInstancePasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DashboardPassword, dashboardPassword_);
      DARABONBA_PTR_TO_JSON(DatabasePassword, databasePassword_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetInstancePasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DashboardPassword, dashboardPassword_);
      DARABONBA_PTR_FROM_JSON(DatabasePassword, databasePassword_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ResetInstancePasswordRequest() = default ;
    ResetInstancePasswordRequest(const ResetInstancePasswordRequest &) = default ;
    ResetInstancePasswordRequest(ResetInstancePasswordRequest &&) = default ;
    ResetInstancePasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetInstancePasswordRequest() = default ;
    ResetInstancePasswordRequest& operator=(const ResetInstancePasswordRequest &) = default ;
    ResetInstancePasswordRequest& operator=(ResetInstancePasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dashboardPassword_ == nullptr
        && this->databasePassword_ == nullptr && this->instanceName_ == nullptr && this->regionId_ == nullptr; };
    // dashboardPassword Field Functions 
    bool hasDashboardPassword() const { return this->dashboardPassword_ != nullptr;};
    void deleteDashboardPassword() { this->dashboardPassword_ = nullptr;};
    inline string getDashboardPassword() const { DARABONBA_PTR_GET_DEFAULT(dashboardPassword_, "") };
    inline ResetInstancePasswordRequest& setDashboardPassword(string dashboardPassword) { DARABONBA_PTR_SET_VALUE(dashboardPassword_, dashboardPassword) };


    // databasePassword Field Functions 
    bool hasDatabasePassword() const { return this->databasePassword_ != nullptr;};
    void deleteDatabasePassword() { this->databasePassword_ = nullptr;};
    inline string getDatabasePassword() const { DARABONBA_PTR_GET_DEFAULT(databasePassword_, "") };
    inline ResetInstancePasswordRequest& setDatabasePassword(string databasePassword) { DARABONBA_PTR_SET_VALUE(databasePassword_, databasePassword) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ResetInstancePasswordRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResetInstancePasswordRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the RDS Supabase instance.
    shared_ptr<string> dashboardPassword_ {};
    // The Supabase Dashboard password.
    // 
    // The password must be 8 to 32 characters in length and must contain at least three of the following types: uppercase letters, lowercase letters, digits, and underscores (_).
    shared_ptr<string> databasePassword_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The operation that you want to perform. Set the value to **ResetInstancePassword**.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif

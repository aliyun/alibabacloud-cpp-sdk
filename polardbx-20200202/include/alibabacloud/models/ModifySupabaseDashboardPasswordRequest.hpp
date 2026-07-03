// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSUPABASEDASHBOARDPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSUPABASEDASHBOARDPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifySupabaseDashboardPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySupabaseDashboardPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(NewPassword, newPassword_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySupabaseDashboardPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(NewPassword, newPassword_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifySupabaseDashboardPasswordRequest() = default ;
    ModifySupabaseDashboardPasswordRequest(const ModifySupabaseDashboardPasswordRequest &) = default ;
    ModifySupabaseDashboardPasswordRequest(ModifySupabaseDashboardPasswordRequest &&) = default ;
    ModifySupabaseDashboardPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySupabaseDashboardPasswordRequest() = default ;
    ModifySupabaseDashboardPasswordRequest& operator=(const ModifySupabaseDashboardPasswordRequest &) = default ;
    ModifySupabaseDashboardPasswordRequest& operator=(ModifySupabaseDashboardPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->newPassword_ == nullptr && this->regionId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifySupabaseDashboardPasswordRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // newPassword Field Functions 
    bool hasNewPassword() const { return this->newPassword_ != nullptr;};
    void deleteNewPassword() { this->newPassword_ = nullptr;};
    inline string getNewPassword() const { DARABONBA_PTR_GET_DEFAULT(newPassword_, "") };
    inline ModifySupabaseDashboardPasswordRequest& setNewPassword(string newPassword) { DARABONBA_PTR_SET_VALUE(newPassword_, newPassword) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySupabaseDashboardPasswordRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance name.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The new password.
    // 
    // This parameter is required.
    shared_ptr<string> newPassword_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif

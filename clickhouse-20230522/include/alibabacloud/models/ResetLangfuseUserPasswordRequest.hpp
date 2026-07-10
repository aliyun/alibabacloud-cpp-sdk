// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETLANGFUSEUSERPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETLANGFUSEUSERPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ResetLangfuseUserPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetLangfuseUserPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(NewPassword, newPassword_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetLangfuseUserPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(NewPassword, newPassword_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ResetLangfuseUserPasswordRequest() = default ;
    ResetLangfuseUserPasswordRequest(const ResetLangfuseUserPasswordRequest &) = default ;
    ResetLangfuseUserPasswordRequest(ResetLangfuseUserPasswordRequest &&) = default ;
    ResetLangfuseUserPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetLangfuseUserPasswordRequest() = default ;
    ResetLangfuseUserPasswordRequest& operator=(const ResetLangfuseUserPasswordRequest &) = default ;
    ResetLangfuseUserPasswordRequest& operator=(ResetLangfuseUserPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->email_ == nullptr && this->newPassword_ == nullptr && this->regionId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ResetLangfuseUserPasswordRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ResetLangfuseUserPasswordRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // newPassword Field Functions 
    bool hasNewPassword() const { return this->newPassword_ != nullptr;};
    void deleteNewPassword() { this->newPassword_ = nullptr;};
    inline string getNewPassword() const { DARABONBA_PTR_GET_DEFAULT(newPassword_, "") };
    inline ResetLangfuseUserPasswordRequest& setNewPassword(string newPassword) { DARABONBA_PTR_SET_VALUE(newPassword_, newPassword) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResetLangfuseUserPasswordRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The Langfuse instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The email address of the user.
    // 
    // This parameter is required.
    shared_ptr<string> email_ {};
    // The new user password. The password must meet the following rules:
    // 
    // The password must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // 
    // The supported special characters are !@#$%^&*()_+-=.
    // 
    // The password must be 8 to 32 characters in length.
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
} // namespace Clickhouse20230522
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUNIRESTOREPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUNIRESTOREPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateUniRestorePlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUniRestorePlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(InstanceUuid, instanceUuid_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(ResetScn, resetScn_);
      DARABONBA_PTR_TO_JSON(ResetTime, resetTime_);
      DARABONBA_PTR_TO_JSON(RestoreInfo, restoreInfo_);
      DARABONBA_PTR_TO_JSON(TimePoint, timePoint_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUniRestorePlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(InstanceUuid, instanceUuid_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(ResetScn, resetScn_);
      DARABONBA_PTR_FROM_JSON(ResetTime, resetTime_);
      DARABONBA_PTR_FROM_JSON(RestoreInfo, restoreInfo_);
      DARABONBA_PTR_FROM_JSON(TimePoint, timePoint_);
    };
    CreateUniRestorePlanRequest() = default ;
    CreateUniRestorePlanRequest(const CreateUniRestorePlanRequest &) = default ;
    CreateUniRestorePlanRequest(CreateUniRestorePlanRequest &&) = default ;
    CreateUniRestorePlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUniRestorePlanRequest() = default ;
    CreateUniRestorePlanRequest& operator=(const CreateUniRestorePlanRequest &) = default ;
    CreateUniRestorePlanRequest& operator=(CreateUniRestorePlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->database_ == nullptr
        && this->instanceUuid_ == nullptr && this->policyId_ == nullptr && this->resetScn_ == nullptr && this->resetTime_ == nullptr && this->restoreInfo_ == nullptr
        && this->timePoint_ == nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline CreateUniRestorePlanRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // instanceUuid Field Functions 
    bool hasInstanceUuid() const { return this->instanceUuid_ != nullptr;};
    void deleteInstanceUuid() { this->instanceUuid_ = nullptr;};
    inline string getInstanceUuid() const { DARABONBA_PTR_GET_DEFAULT(instanceUuid_, "") };
    inline CreateUniRestorePlanRequest& setInstanceUuid(string instanceUuid) { DARABONBA_PTR_SET_VALUE(instanceUuid_, instanceUuid) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline CreateUniRestorePlanRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // resetScn Field Functions 
    bool hasResetScn() const { return this->resetScn_ != nullptr;};
    void deleteResetScn() { this->resetScn_ = nullptr;};
    inline string getResetScn() const { DARABONBA_PTR_GET_DEFAULT(resetScn_, "") };
    inline CreateUniRestorePlanRequest& setResetScn(string resetScn) { DARABONBA_PTR_SET_VALUE(resetScn_, resetScn) };


    // resetTime Field Functions 
    bool hasResetTime() const { return this->resetTime_ != nullptr;};
    void deleteResetTime() { this->resetTime_ = nullptr;};
    inline string getResetTime() const { DARABONBA_PTR_GET_DEFAULT(resetTime_, "") };
    inline CreateUniRestorePlanRequest& setResetTime(string resetTime) { DARABONBA_PTR_SET_VALUE(resetTime_, resetTime) };


    // restoreInfo Field Functions 
    bool hasRestoreInfo() const { return this->restoreInfo_ != nullptr;};
    void deleteRestoreInfo() { this->restoreInfo_ = nullptr;};
    inline string getRestoreInfo() const { DARABONBA_PTR_GET_DEFAULT(restoreInfo_, "") };
    inline CreateUniRestorePlanRequest& setRestoreInfo(string restoreInfo) { DARABONBA_PTR_SET_VALUE(restoreInfo_, restoreInfo) };


    // timePoint Field Functions 
    bool hasTimePoint() const { return this->timePoint_ != nullptr;};
    void deleteTimePoint() { this->timePoint_ = nullptr;};
    inline int64_t getTimePoint() const { DARABONBA_PTR_GET_DEFAULT(timePoint_, 0L) };
    inline CreateUniRestorePlanRequest& setTimePoint(int64_t timePoint) { DARABONBA_PTR_SET_VALUE(timePoint_, timePoint) };


  protected:
    // The name of the database.
    shared_ptr<string> database_ {};
    // The unique identifier of the database backup client on the destination server for restoration.
    // >Call the [DescribeUniBackupDatabase](~~DescribeUniBackupDatabase~~) operation to obtain this parameter.
    shared_ptr<string> instanceUuid_ {};
    // The ID of the database anti-ransomware backup policy.
    // >Call the [DescribeUniBackupPolicies](~~DescribeUniBackupPolicies~~) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> policyId_ {};
    // The **reset_scn** value of the selected record from the recoverable points in time when you query backups for an Oracle database.
    // >Call the [DescribeUniRecoverableList](~~DescribeUniRecoverableList~~) operation to obtain this parameter.
    shared_ptr<string> resetScn_ {};
    // The **reset_time** value of the selected record from the recoverable points in time when you query backups for an Oracle database.
    // >Call the [DescribeUniRecoverableList](~~DescribeUniRecoverableList~~) operation to obtain this parameter.
    shared_ptr<string> resetTime_ {};
    // The database restoration information when the database type is MSSQL. The value is a JSON string. Valid values:
    // - **name**: the name of the database.
    // - **files**: the file path of the database.
    // >Call the [DescribeUniRecoverableList](~~DescribeUniRecoverableList~~) operation to obtain this parameter.
    shared_ptr<string> restoreInfo_ {};
    // The point in time to which you want to restore the database.
    // >Call the [DescribeRestorePlans](~~DescribeRestorePlans~~) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> timePoint_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

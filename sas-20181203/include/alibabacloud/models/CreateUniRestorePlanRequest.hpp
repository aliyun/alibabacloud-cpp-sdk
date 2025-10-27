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
        && return this->instanceUuid_ == nullptr && return this->policyId_ == nullptr && return this->resetScn_ == nullptr && return this->resetTime_ == nullptr && return this->restoreInfo_ == nullptr
        && return this->timePoint_ == nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline CreateUniRestorePlanRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // instanceUuid Field Functions 
    bool hasInstanceUuid() const { return this->instanceUuid_ != nullptr;};
    void deleteInstanceUuid() { this->instanceUuid_ = nullptr;};
    inline string instanceUuid() const { DARABONBA_PTR_GET_DEFAULT(instanceUuid_, "") };
    inline CreateUniRestorePlanRequest& setInstanceUuid(string instanceUuid) { DARABONBA_PTR_SET_VALUE(instanceUuid_, instanceUuid) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline CreateUniRestorePlanRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // resetScn Field Functions 
    bool hasResetScn() const { return this->resetScn_ != nullptr;};
    void deleteResetScn() { this->resetScn_ = nullptr;};
    inline string resetScn() const { DARABONBA_PTR_GET_DEFAULT(resetScn_, "") };
    inline CreateUniRestorePlanRequest& setResetScn(string resetScn) { DARABONBA_PTR_SET_VALUE(resetScn_, resetScn) };


    // resetTime Field Functions 
    bool hasResetTime() const { return this->resetTime_ != nullptr;};
    void deleteResetTime() { this->resetTime_ = nullptr;};
    inline string resetTime() const { DARABONBA_PTR_GET_DEFAULT(resetTime_, "") };
    inline CreateUniRestorePlanRequest& setResetTime(string resetTime) { DARABONBA_PTR_SET_VALUE(resetTime_, resetTime) };


    // restoreInfo Field Functions 
    bool hasRestoreInfo() const { return this->restoreInfo_ != nullptr;};
    void deleteRestoreInfo() { this->restoreInfo_ = nullptr;};
    inline string restoreInfo() const { DARABONBA_PTR_GET_DEFAULT(restoreInfo_, "") };
    inline CreateUniRestorePlanRequest& setRestoreInfo(string restoreInfo) { DARABONBA_PTR_SET_VALUE(restoreInfo_, restoreInfo) };


    // timePoint Field Functions 
    bool hasTimePoint() const { return this->timePoint_ != nullptr;};
    void deleteTimePoint() { this->timePoint_ = nullptr;};
    inline int64_t timePoint() const { DARABONBA_PTR_GET_DEFAULT(timePoint_, 0L) };
    inline CreateUniRestorePlanRequest& setTimePoint(int64_t timePoint) { DARABONBA_PTR_SET_VALUE(timePoint_, timePoint) };


  protected:
    // The name of the database.
    std::shared_ptr<string> database_ = nullptr;
    // The UUID of the Hybrid Backup Recovery (HBR) agent that is used to restore the data of the database on your server.
    // 
    // >  You can call the [DescribeUniBackupDatabase](~~DescribeUniBackupDatabase~~) operation to query the UUID.
    std::shared_ptr<string> instanceUuid_ = nullptr;
    // The ID of the anti-ransomware policy.
    // 
    // >  You can call the [DescribeUniBackupPolicies](~~DescribeUniBackupPolicies~~) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // The identifier of the point in time for restoration in the backup version that you want to use. The database is an Oracle database.****
    // 
    // >  You can call the [DescribeUniRecoverableList](~~DescribeUniRecoverableList~~) operation to query the value.
    std::shared_ptr<string> resetScn_ = nullptr;
    // The point in time for restoration in the backup version that you want to use. The database is an Oracle database.****
    // 
    // >  You can call the [DescribeUniRecoverableList](~~DescribeUniRecoverableList~~) operation to query the value.
    std::shared_ptr<string> resetTime_ = nullptr;
    // The information about the database. This parameter is available when the database is a Microsoft SQL Server (MSSQL) database. The value is a JSON string. Valid values:
    // 
    // *   **name**: the name of the database
    // *   **files**: the path to the database files
    // 
    // >  You can call the [DescribeUniRecoverableList](~~DescribeUniRecoverableList~~) operation to query the information.
    std::shared_ptr<string> restoreInfo_ = nullptr;
    // The point in time to which you want to restore data.
    // 
    // >  You can call the [DescribeRestorePlans](~~DescribeRestorePlans~~) operation to query the point in time.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> timePoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

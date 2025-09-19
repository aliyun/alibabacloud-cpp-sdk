// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREPLANSRESPONSEBODYRESTOREPLANS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREPLANSRESPONSEBODYRESTOREPLANS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRestorePlansResponseBodyRestorePlans : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestorePlansResponseBodyRestorePlans& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(RestorePoint, restorePoint_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetDatabaseName, targetDatabaseName_);
      DARABONBA_PTR_TO_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_TO_JSON(TargetInstanceName, targetInstanceName_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestorePlansResponseBodyRestorePlans& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(RestorePoint, restorePoint_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetDatabaseName, targetDatabaseName_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceName, targetInstanceName_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
    };
    DescribeRestorePlansResponseBodyRestorePlans() = default ;
    DescribeRestorePlansResponseBodyRestorePlans(const DescribeRestorePlansResponseBodyRestorePlans &) = default ;
    DescribeRestorePlansResponseBodyRestorePlans(DescribeRestorePlansResponseBodyRestorePlans &&) = default ;
    DescribeRestorePlansResponseBodyRestorePlans(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestorePlansResponseBodyRestorePlans() = default ;
    DescribeRestorePlansResponseBodyRestorePlans& operator=(const DescribeRestorePlansResponseBodyRestorePlans &) = default ;
    DescribeRestorePlansResponseBodyRestorePlans& operator=(DescribeRestorePlansResponseBodyRestorePlans &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdTime_ != nullptr
        && this->databaseName_ != nullptr && this->instanceName_ != nullptr && this->policyId_ != nullptr && this->policyName_ != nullptr && this->restorePoint_ != nullptr
        && this->status_ != nullptr && this->targetDatabaseName_ != nullptr && this->targetInstanceId_ != nullptr && this->targetInstanceName_ != nullptr && this->updatedTime_ != nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline DescribeRestorePlansResponseBodyRestorePlans& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeRestorePlansResponseBodyRestorePlans& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeRestorePlansResponseBodyRestorePlans& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline DescribeRestorePlansResponseBodyRestorePlans& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DescribeRestorePlansResponseBodyRestorePlans& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // restorePoint Field Functions 
    bool hasRestorePoint() const { return this->restorePoint_ != nullptr;};
    void deleteRestorePoint() { this->restorePoint_ = nullptr;};
    inline int64_t restorePoint() const { DARABONBA_PTR_GET_DEFAULT(restorePoint_, 0L) };
    inline DescribeRestorePlansResponseBodyRestorePlans& setRestorePoint(int64_t restorePoint) { DARABONBA_PTR_SET_VALUE(restorePoint_, restorePoint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRestorePlansResponseBodyRestorePlans& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetDatabaseName Field Functions 
    bool hasTargetDatabaseName() const { return this->targetDatabaseName_ != nullptr;};
    void deleteTargetDatabaseName() { this->targetDatabaseName_ = nullptr;};
    inline string targetDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(targetDatabaseName_, "") };
    inline DescribeRestorePlansResponseBodyRestorePlans& setTargetDatabaseName(string targetDatabaseName) { DARABONBA_PTR_SET_VALUE(targetDatabaseName_, targetDatabaseName) };


    // targetInstanceId Field Functions 
    bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
    void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
    inline string targetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
    inline DescribeRestorePlansResponseBodyRestorePlans& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


    // targetInstanceName Field Functions 
    bool hasTargetInstanceName() const { return this->targetInstanceName_ != nullptr;};
    void deleteTargetInstanceName() { this->targetInstanceName_ = nullptr;};
    inline string targetInstanceName() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceName_, "") };
    inline DescribeRestorePlansResponseBodyRestorePlans& setTargetInstanceName(string targetInstanceName) { DARABONBA_PTR_SET_VALUE(targetInstanceName_, targetInstanceName) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline DescribeRestorePlansResponseBodyRestorePlans& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


  protected:
    // The timestamp when the restoration task was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The name of the server on which the database resides.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The ID of the anti-ransomware policy.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // The name of the anti-ransomware policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The point in time to which data is restored.
    std::shared_ptr<int64_t> restorePoint_ = nullptr;
    // The status of the restoration task. Valid values:
    // 
    // *   **init**: initializing
    // *   **created**: creating
    // *   **running**: running
    // *   **completed**: complete
    // *   **error**: failed
    // *   **restoring**: restoring
    std::shared_ptr<string> status_ = nullptr;
    // The name of the destination database.
    std::shared_ptr<string> targetDatabaseName_ = nullptr;
    // The ID of the destination server.
    std::shared_ptr<string> targetInstanceId_ = nullptr;
    // The name of the destination server.
    std::shared_ptr<string> targetInstanceName_ = nullptr;
    // The timestamp when the restoration task was last updated. Unit: milliseconds.
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

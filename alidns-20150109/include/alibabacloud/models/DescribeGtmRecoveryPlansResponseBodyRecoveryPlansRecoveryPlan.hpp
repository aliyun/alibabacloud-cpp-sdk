// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANSRESPONSEBODYRECOVERYPLANSRECOVERYPLAN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANSRESPONSEBODYRECOVERYPLANSRECOVERYPLAN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(FaultAddrPoolNum, faultAddrPoolNum_);
      DARABONBA_PTR_TO_JSON(LastExecuteTime, lastExecuteTime_);
      DARABONBA_PTR_TO_JSON(LastExecuteTimestamp, lastExecuteTimestamp_);
      DARABONBA_PTR_TO_JSON(LastRollbackTime, lastRollbackTime_);
      DARABONBA_PTR_TO_JSON(LastRollbackTimestamp, lastRollbackTimestamp_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecoveryPlanId, recoveryPlanId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(FaultAddrPoolNum, faultAddrPoolNum_);
      DARABONBA_PTR_FROM_JSON(LastExecuteTime, lastExecuteTime_);
      DARABONBA_PTR_FROM_JSON(LastExecuteTimestamp, lastExecuteTimestamp_);
      DARABONBA_PTR_FROM_JSON(LastRollbackTime, lastRollbackTime_);
      DARABONBA_PTR_FROM_JSON(LastRollbackTimestamp, lastRollbackTimestamp_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecoveryPlanId, recoveryPlanId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
    };
    DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan() = default ;
    DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan(const DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan &) = default ;
    DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan(DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan &&) = default ;
    DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan() = default ;
    DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan& operator=(const DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan &) = default ;
    DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan& operator=(DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createTimestamp_ != nullptr && this->faultAddrPoolNum_ != nullptr && this->lastExecuteTime_ != nullptr && this->lastExecuteTimestamp_ != nullptr && this->lastRollbackTime_ != nullptr
        && this->lastRollbackTimestamp_ != nullptr && this->name_ != nullptr && this->recoveryPlanId_ != nullptr && this->remark_ != nullptr && this->status_ != nullptr
        && this->updateTime_ != nullptr && this->updateTimestamp_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // faultAddrPoolNum Field Functions 
    bool hasFaultAddrPoolNum() const { return this->faultAddrPoolNum_ != nullptr;};
    void deleteFaultAddrPoolNum() { this->faultAddrPoolNum_ = nullptr;};
    inline int32_t faultAddrPoolNum() const { DARABONBA_PTR_GET_DEFAULT(faultAddrPoolNum_, 0) };
    inline DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan& setFaultAddrPoolNum(int32_t faultAddrPoolNum) { DARABONBA_PTR_SET_VALUE(faultAddrPoolNum_, faultAddrPoolNum) };


    // lastExecuteTime Field Functions 
    bool hasLastExecuteTime() const { return this->lastExecuteTime_ != nullptr;};
    void deleteLastExecuteTime() { this->lastExecuteTime_ = nullptr;};
    inline string lastExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(lastExecuteTime_, "") };
    inline DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan& setLastExecuteTime(string lastExecuteTime) { DARABONBA_PTR_SET_VALUE(lastExecuteTime_, lastExecuteTime) };


    // lastExecuteTimestamp Field Functions 
    bool hasLastExecuteTimestamp() const { return this->lastExecuteTimestamp_ != nullptr;};
    void deleteLastExecuteTimestamp() { this->lastExecuteTimestamp_ = nullptr;};
    inline int64_t lastExecuteTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastExecuteTimestamp_, 0L) };
    inline DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan& setLastExecuteTimestamp(int64_t lastExecuteTimestamp) { DARABONBA_PTR_SET_VALUE(lastExecuteTimestamp_, lastExecuteTimestamp) };


    // lastRollbackTime Field Functions 
    bool hasLastRollbackTime() const { return this->lastRollbackTime_ != nullptr;};
    void deleteLastRollbackTime() { this->lastRollbackTime_ = nullptr;};
    inline string lastRollbackTime() const { DARABONBA_PTR_GET_DEFAULT(lastRollbackTime_, "") };
    inline DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan& setLastRollbackTime(string lastRollbackTime) { DARABONBA_PTR_SET_VALUE(lastRollbackTime_, lastRollbackTime) };


    // lastRollbackTimestamp Field Functions 
    bool hasLastRollbackTimestamp() const { return this->lastRollbackTimestamp_ != nullptr;};
    void deleteLastRollbackTimestamp() { this->lastRollbackTimestamp_ = nullptr;};
    inline int64_t lastRollbackTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastRollbackTimestamp_, 0L) };
    inline DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan& setLastRollbackTimestamp(int64_t lastRollbackTimestamp) { DARABONBA_PTR_SET_VALUE(lastRollbackTimestamp_, lastRollbackTimestamp) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recoveryPlanId Field Functions 
    bool hasRecoveryPlanId() const { return this->recoveryPlanId_ != nullptr;};
    void deleteRecoveryPlanId() { this->recoveryPlanId_ = nullptr;};
    inline int64_t recoveryPlanId() const { DARABONBA_PTR_GET_DEFAULT(recoveryPlanId_, 0L) };
    inline DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan& setRecoveryPlanId(int64_t recoveryPlanId) { DARABONBA_PTR_SET_VALUE(recoveryPlanId_, recoveryPlanId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // The time when the disaster recovery plan was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The UNIX timestamp that indicates when the disaster recovery plan was created.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The number of faulty address pools.
    std::shared_ptr<int32_t> faultAddrPoolNum_ = nullptr;
    // The last time when the disaster recovery plan was executed.
    std::shared_ptr<string> lastExecuteTime_ = nullptr;
    // The UNIX timestamp that indicates the last time when the disaster recovery plan was executed.
    std::shared_ptr<int64_t> lastExecuteTimestamp_ = nullptr;
    // The last time when the disaster recovery plan was rolled back.
    std::shared_ptr<string> lastRollbackTime_ = nullptr;
    // The UNIX timestamp that indicates the last time when the disaster recovery plan was rolled back.
    std::shared_ptr<int64_t> lastRollbackTimestamp_ = nullptr;
    // The name of the disaster recovery plan.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the disaster recovery plan.
    std::shared_ptr<int64_t> recoveryPlanId_ = nullptr;
    // The remarks about the disaster recovery plan.
    std::shared_ptr<string> remark_ = nullptr;
    // The status of the disaster recovery plan. Valid values:
    // 
    // *   **UNEXECUTED**: The plan is not executed.
    // *   **EXECUTED**: The plan is executed.
    // *   **ROLLED_BACK**: The plan is rolled back.
    std::shared_ptr<string> status_ = nullptr;
    // The last time when the disaster recovery plan was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The UNIX timestamp that indicates the last time when the disaster recovery plan was updated.
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

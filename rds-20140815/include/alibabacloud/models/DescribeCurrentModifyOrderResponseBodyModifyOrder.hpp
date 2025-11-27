// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECURRENTMODIFYORDERRESPONSEBODYMODIFYORDER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECURRENTMODIFYORDERRESPONSEBODYMODIFYORDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCurrentModifyOrderResponseBodyModifyOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCurrentModifyOrderResponseBodyModifyOrder& obj) { 
      DARABONBA_PTR_TO_JSON(ClassGroup, classGroup_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(Mark, mark_);
      DARABONBA_PTR_TO_JSON(MemoryClass, memoryClass_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
      DARABONBA_PTR_TO_JSON(TargetDBInstanceClass, targetDBInstanceClass_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCurrentModifyOrderResponseBodyModifyOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassGroup, classGroup_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(Mark, mark_);
      DARABONBA_PTR_FROM_JSON(MemoryClass, memoryClass_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
      DARABONBA_PTR_FROM_JSON(TargetDBInstanceClass, targetDBInstanceClass_);
    };
    DescribeCurrentModifyOrderResponseBodyModifyOrder() = default ;
    DescribeCurrentModifyOrderResponseBodyModifyOrder(const DescribeCurrentModifyOrderResponseBodyModifyOrder &) = default ;
    DescribeCurrentModifyOrderResponseBodyModifyOrder(DescribeCurrentModifyOrderResponseBodyModifyOrder &&) = default ;
    DescribeCurrentModifyOrderResponseBodyModifyOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCurrentModifyOrderResponseBodyModifyOrder() = default ;
    DescribeCurrentModifyOrderResponseBodyModifyOrder& operator=(const DescribeCurrentModifyOrderResponseBodyModifyOrder &) = default ;
    DescribeCurrentModifyOrderResponseBodyModifyOrder& operator=(DescribeCurrentModifyOrderResponseBodyModifyOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classGroup_ == nullptr
        && return this->cpu_ == nullptr && return this->dbInstanceId_ == nullptr && return this->effectiveTime_ == nullptr && return this->mark_ == nullptr && return this->memoryClass_ == nullptr
        && return this->status_ == nullptr && return this->storage_ == nullptr && return this->targetDBInstanceClass_ == nullptr; };
    // classGroup Field Functions 
    bool hasClassGroup() const { return this->classGroup_ != nullptr;};
    void deleteClassGroup() { this->classGroup_ = nullptr;};
    inline string classGroup() const { DARABONBA_PTR_GET_DEFAULT(classGroup_, "") };
    inline DescribeCurrentModifyOrderResponseBodyModifyOrder& setClassGroup(string classGroup) { DARABONBA_PTR_SET_VALUE(classGroup_, classGroup) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline DescribeCurrentModifyOrderResponseBodyModifyOrder& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline DescribeCurrentModifyOrderResponseBodyModifyOrder& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline DescribeCurrentModifyOrderResponseBodyModifyOrder& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // mark Field Functions 
    bool hasMark() const { return this->mark_ != nullptr;};
    void deleteMark() { this->mark_ = nullptr;};
    inline string mark() const { DARABONBA_PTR_GET_DEFAULT(mark_, "") };
    inline DescribeCurrentModifyOrderResponseBodyModifyOrder& setMark(string mark) { DARABONBA_PTR_SET_VALUE(mark_, mark) };


    // memoryClass Field Functions 
    bool hasMemoryClass() const { return this->memoryClass_ != nullptr;};
    void deleteMemoryClass() { this->memoryClass_ = nullptr;};
    inline string memoryClass() const { DARABONBA_PTR_GET_DEFAULT(memoryClass_, "") };
    inline DescribeCurrentModifyOrderResponseBodyModifyOrder& setMemoryClass(string memoryClass) { DARABONBA_PTR_SET_VALUE(memoryClass_, memoryClass) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCurrentModifyOrderResponseBodyModifyOrder& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline string storage() const { DARABONBA_PTR_GET_DEFAULT(storage_, "") };
    inline DescribeCurrentModifyOrderResponseBodyModifyOrder& setStorage(string storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    // targetDBInstanceClass Field Functions 
    bool hasTargetDBInstanceClass() const { return this->targetDBInstanceClass_ != nullptr;};
    void deleteTargetDBInstanceClass() { this->targetDBInstanceClass_ = nullptr;};
    inline string targetDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(targetDBInstanceClass_, "") };
    inline DescribeCurrentModifyOrderResponseBodyModifyOrder& setTargetDBInstanceClass(string targetDBInstanceClass) { DARABONBA_PTR_SET_VALUE(targetDBInstanceClass_, targetDBInstanceClass) };


  protected:
    // The instance family of the instance.
    std::shared_ptr<string> classGroup_ = nullptr;
    // The number of CPU cores that are supported by the instance type. Unit: cores.
    std::shared_ptr<string> cpu_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> dbInstanceId_ = nullptr;
    // The effective time. Valid values:
    // 
    // *   **Immediate**: This is the default value.
    // *   **MaintainTime**: The effective time is within the maintenance window. For more information, see [ModifyDBInstanceMaintainTime](https://help.aliyun.com/document_detail/610402.html).
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> mark_ = nullptr;
    // The memory capacity that is supported by the instance type. Unit: GB.
    std::shared_ptr<string> memoryClass_ = nullptr;
    // The status of the task.
    std::shared_ptr<string> status_ = nullptr;
    // The storage capacity of the instance.
    std::shared_ptr<string> storage_ = nullptr;
    // The new instance type of the instance. Valid values:
    std::shared_ptr<string> targetDBInstanceClass_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

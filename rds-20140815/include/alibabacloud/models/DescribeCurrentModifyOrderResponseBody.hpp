// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECURRENTMODIFYORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECURRENTMODIFYORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCurrentModifyOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCurrentModifyOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModifyOrder, modifyOrder_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCurrentModifyOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModifyOrder, modifyOrder_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCurrentModifyOrderResponseBody() = default ;
    DescribeCurrentModifyOrderResponseBody(const DescribeCurrentModifyOrderResponseBody &) = default ;
    DescribeCurrentModifyOrderResponseBody(DescribeCurrentModifyOrderResponseBody &&) = default ;
    DescribeCurrentModifyOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCurrentModifyOrderResponseBody() = default ;
    DescribeCurrentModifyOrderResponseBody& operator=(const DescribeCurrentModifyOrderResponseBody &) = default ;
    DescribeCurrentModifyOrderResponseBody& operator=(DescribeCurrentModifyOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModifyOrder : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModifyOrder& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ModifyOrder& obj) { 
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
      ModifyOrder() = default ;
      ModifyOrder(const ModifyOrder &) = default ;
      ModifyOrder(ModifyOrder &&) = default ;
      ModifyOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModifyOrder() = default ;
      ModifyOrder& operator=(const ModifyOrder &) = default ;
      ModifyOrder& operator=(ModifyOrder &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->classGroup_ == nullptr
        && this->cpu_ == nullptr && this->dbInstanceId_ == nullptr && this->effectiveTime_ == nullptr && this->mark_ == nullptr && this->memoryClass_ == nullptr
        && this->status_ == nullptr && this->storage_ == nullptr && this->targetDBInstanceClass_ == nullptr; };
      // classGroup Field Functions 
      bool hasClassGroup() const { return this->classGroup_ != nullptr;};
      void deleteClassGroup() { this->classGroup_ = nullptr;};
      inline string getClassGroup() const { DARABONBA_PTR_GET_DEFAULT(classGroup_, "") };
      inline ModifyOrder& setClassGroup(string classGroup) { DARABONBA_PTR_SET_VALUE(classGroup_, classGroup) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
      inline ModifyOrder& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // dbInstanceId Field Functions 
      bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
      void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
      inline string getDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
      inline ModifyOrder& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


      // effectiveTime Field Functions 
      bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
      void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
      inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
      inline ModifyOrder& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


      // mark Field Functions 
      bool hasMark() const { return this->mark_ != nullptr;};
      void deleteMark() { this->mark_ = nullptr;};
      inline string getMark() const { DARABONBA_PTR_GET_DEFAULT(mark_, "") };
      inline ModifyOrder& setMark(string mark) { DARABONBA_PTR_SET_VALUE(mark_, mark) };


      // memoryClass Field Functions 
      bool hasMemoryClass() const { return this->memoryClass_ != nullptr;};
      void deleteMemoryClass() { this->memoryClass_ = nullptr;};
      inline string getMemoryClass() const { DARABONBA_PTR_GET_DEFAULT(memoryClass_, "") };
      inline ModifyOrder& setMemoryClass(string memoryClass) { DARABONBA_PTR_SET_VALUE(memoryClass_, memoryClass) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ModifyOrder& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storage Field Functions 
      bool hasStorage() const { return this->storage_ != nullptr;};
      void deleteStorage() { this->storage_ = nullptr;};
      inline string getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, "") };
      inline ModifyOrder& setStorage(string storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


      // targetDBInstanceClass Field Functions 
      bool hasTargetDBInstanceClass() const { return this->targetDBInstanceClass_ != nullptr;};
      void deleteTargetDBInstanceClass() { this->targetDBInstanceClass_ = nullptr;};
      inline string getTargetDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(targetDBInstanceClass_, "") };
      inline ModifyOrder& setTargetDBInstanceClass(string targetDBInstanceClass) { DARABONBA_PTR_SET_VALUE(targetDBInstanceClass_, targetDBInstanceClass) };


    protected:
      // The instance family of the instance.
      shared_ptr<string> classGroup_ {};
      // The number of CPU cores that are supported by the instance type. Unit: cores.
      shared_ptr<string> cpu_ {};
      // The instance ID.
      shared_ptr<string> dbInstanceId_ {};
      // The effective time. Valid values:
      // 
      // *   **Immediate**: This is the default value.
      // *   **MaintainTime**: The effective time is within the maintenance window. For more information, see [ModifyDBInstanceMaintainTime](https://help.aliyun.com/document_detail/610402.html).
      shared_ptr<string> effectiveTime_ {};
      // The description of the instance.
      shared_ptr<string> mark_ {};
      // The memory capacity that is supported by the instance type. Unit: GB.
      shared_ptr<string> memoryClass_ {};
      // The status of the task.
      shared_ptr<string> status_ {};
      // The storage capacity of the instance.
      shared_ptr<string> storage_ {};
      // The new instance type of the instance. Valid values:
      shared_ptr<string> targetDBInstanceClass_ {};
    };

    virtual bool empty() const override { return this->modifyOrder_ == nullptr
        && this->requestId_ == nullptr; };
    // modifyOrder Field Functions 
    bool hasModifyOrder() const { return this->modifyOrder_ != nullptr;};
    void deleteModifyOrder() { this->modifyOrder_ = nullptr;};
    inline const vector<DescribeCurrentModifyOrderResponseBody::ModifyOrder> & getModifyOrder() const { DARABONBA_PTR_GET_CONST(modifyOrder_, vector<DescribeCurrentModifyOrderResponseBody::ModifyOrder>) };
    inline vector<DescribeCurrentModifyOrderResponseBody::ModifyOrder> getModifyOrder() { DARABONBA_PTR_GET(modifyOrder_, vector<DescribeCurrentModifyOrderResponseBody::ModifyOrder>) };
    inline DescribeCurrentModifyOrderResponseBody& setModifyOrder(const vector<DescribeCurrentModifyOrderResponseBody::ModifyOrder> & modifyOrder) { DARABONBA_PTR_SET_VALUE(modifyOrder_, modifyOrder) };
    inline DescribeCurrentModifyOrderResponseBody& setModifyOrder(vector<DescribeCurrentModifyOrderResponseBody::ModifyOrder> && modifyOrder) { DARABONBA_PTR_SET_RVALUE(modifyOrder_, modifyOrder) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCurrentModifyOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The specification change order.
    shared_ptr<vector<DescribeCurrentModifyOrderResponseBody::ModifyOrder>> modifyOrder_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

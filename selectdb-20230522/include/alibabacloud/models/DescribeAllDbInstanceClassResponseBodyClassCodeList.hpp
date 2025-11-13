// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLDBINSTANCECLASSRESPONSEBODYCLASSCODELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLDBINSTANCECLASSRESPONSEBODYCLASSCODELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeAllDBInstanceClassResponseBodyClassCodeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllDBInstanceClassResponseBodyClassCodeList& obj) { 
      DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
      DARABONBA_PTR_TO_JSON(CpuCores, cpuCores_);
      DARABONBA_PTR_TO_JSON(DefaultStorageInGB, defaultStorageInGB_);
      DARABONBA_PTR_TO_JSON(MaxStorageInGB, maxStorageInGB_);
      DARABONBA_PTR_TO_JSON(MemoryInGB, memoryInGB_);
      DARABONBA_PTR_TO_JSON(MinStorageInGB, minStorageInGB_);
      DARABONBA_PTR_TO_JSON(StepStorageInGB, stepStorageInGB_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllDBInstanceClassResponseBodyClassCodeList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
      DARABONBA_PTR_FROM_JSON(CpuCores, cpuCores_);
      DARABONBA_PTR_FROM_JSON(DefaultStorageInGB, defaultStorageInGB_);
      DARABONBA_PTR_FROM_JSON(MaxStorageInGB, maxStorageInGB_);
      DARABONBA_PTR_FROM_JSON(MemoryInGB, memoryInGB_);
      DARABONBA_PTR_FROM_JSON(MinStorageInGB, minStorageInGB_);
      DARABONBA_PTR_FROM_JSON(StepStorageInGB, stepStorageInGB_);
    };
    DescribeAllDBInstanceClassResponseBodyClassCodeList() = default ;
    DescribeAllDBInstanceClassResponseBodyClassCodeList(const DescribeAllDBInstanceClassResponseBodyClassCodeList &) = default ;
    DescribeAllDBInstanceClassResponseBodyClassCodeList(DescribeAllDBInstanceClassResponseBodyClassCodeList &&) = default ;
    DescribeAllDBInstanceClassResponseBodyClassCodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllDBInstanceClassResponseBodyClassCodeList() = default ;
    DescribeAllDBInstanceClassResponseBodyClassCodeList& operator=(const DescribeAllDBInstanceClassResponseBodyClassCodeList &) = default ;
    DescribeAllDBInstanceClassResponseBodyClassCodeList& operator=(DescribeAllDBInstanceClassResponseBodyClassCodeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classCode_ == nullptr
        && return this->cpuCores_ == nullptr && return this->defaultStorageInGB_ == nullptr && return this->maxStorageInGB_ == nullptr && return this->memoryInGB_ == nullptr && return this->minStorageInGB_ == nullptr
        && return this->stepStorageInGB_ == nullptr; };
    // classCode Field Functions 
    bool hasClassCode() const { return this->classCode_ != nullptr;};
    void deleteClassCode() { this->classCode_ = nullptr;};
    inline string classCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
    inline DescribeAllDBInstanceClassResponseBodyClassCodeList& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


    // cpuCores Field Functions 
    bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
    void deleteCpuCores() { this->cpuCores_ = nullptr;};
    inline int64_t cpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, 0L) };
    inline DescribeAllDBInstanceClassResponseBodyClassCodeList& setCpuCores(int64_t cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


    // defaultStorageInGB Field Functions 
    bool hasDefaultStorageInGB() const { return this->defaultStorageInGB_ != nullptr;};
    void deleteDefaultStorageInGB() { this->defaultStorageInGB_ = nullptr;};
    inline int64_t defaultStorageInGB() const { DARABONBA_PTR_GET_DEFAULT(defaultStorageInGB_, 0L) };
    inline DescribeAllDBInstanceClassResponseBodyClassCodeList& setDefaultStorageInGB(int64_t defaultStorageInGB) { DARABONBA_PTR_SET_VALUE(defaultStorageInGB_, defaultStorageInGB) };


    // maxStorageInGB Field Functions 
    bool hasMaxStorageInGB() const { return this->maxStorageInGB_ != nullptr;};
    void deleteMaxStorageInGB() { this->maxStorageInGB_ = nullptr;};
    inline int64_t maxStorageInGB() const { DARABONBA_PTR_GET_DEFAULT(maxStorageInGB_, 0L) };
    inline DescribeAllDBInstanceClassResponseBodyClassCodeList& setMaxStorageInGB(int64_t maxStorageInGB) { DARABONBA_PTR_SET_VALUE(maxStorageInGB_, maxStorageInGB) };


    // memoryInGB Field Functions 
    bool hasMemoryInGB() const { return this->memoryInGB_ != nullptr;};
    void deleteMemoryInGB() { this->memoryInGB_ = nullptr;};
    inline int64_t memoryInGB() const { DARABONBA_PTR_GET_DEFAULT(memoryInGB_, 0L) };
    inline DescribeAllDBInstanceClassResponseBodyClassCodeList& setMemoryInGB(int64_t memoryInGB) { DARABONBA_PTR_SET_VALUE(memoryInGB_, memoryInGB) };


    // minStorageInGB Field Functions 
    bool hasMinStorageInGB() const { return this->minStorageInGB_ != nullptr;};
    void deleteMinStorageInGB() { this->minStorageInGB_ = nullptr;};
    inline int64_t minStorageInGB() const { DARABONBA_PTR_GET_DEFAULT(minStorageInGB_, 0L) };
    inline DescribeAllDBInstanceClassResponseBodyClassCodeList& setMinStorageInGB(int64_t minStorageInGB) { DARABONBA_PTR_SET_VALUE(minStorageInGB_, minStorageInGB) };


    // stepStorageInGB Field Functions 
    bool hasStepStorageInGB() const { return this->stepStorageInGB_ != nullptr;};
    void deleteStepStorageInGB() { this->stepStorageInGB_ = nullptr;};
    inline int64_t stepStorageInGB() const { DARABONBA_PTR_GET_DEFAULT(stepStorageInGB_, 0L) };
    inline DescribeAllDBInstanceClassResponseBodyClassCodeList& setStepStorageInGB(int64_t stepStorageInGB) { DARABONBA_PTR_SET_VALUE(stepStorageInGB_, stepStorageInGB) };


  protected:
    std::shared_ptr<string> classCode_ = nullptr;
    std::shared_ptr<int64_t> cpuCores_ = nullptr;
    std::shared_ptr<int64_t> defaultStorageInGB_ = nullptr;
    std::shared_ptr<int64_t> maxStorageInGB_ = nullptr;
    // The memory size.
    std::shared_ptr<int64_t> memoryInGB_ = nullptr;
    std::shared_ptr<int64_t> minStorageInGB_ = nullptr;
    std::shared_ptr<int64_t> stepStorageInGB_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif

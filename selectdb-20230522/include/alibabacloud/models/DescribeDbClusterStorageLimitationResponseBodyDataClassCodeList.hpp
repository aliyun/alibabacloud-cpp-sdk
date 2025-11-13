// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSTORAGELIMITATIONRESPONSEBODYDATACLASSCODELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSTORAGELIMITATIONRESPONSEBODYDATACLASSCODELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList& obj) { 
      DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
      DARABONBA_PTR_TO_JSON(CpuCores, cpuCores_);
      DARABONBA_PTR_TO_JSON(DefaultStorageInGB, defaultStorageInGB_);
      DARABONBA_PTR_TO_JSON(MaxStorageInGB, maxStorageInGB_);
      DARABONBA_PTR_TO_JSON(MemoryInGB, memoryInGB_);
      DARABONBA_PTR_TO_JSON(MinStorageInGB, minStorageInGB_);
      DARABONBA_PTR_TO_JSON(StepStorageInGB, stepStorageInGB_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
      DARABONBA_PTR_FROM_JSON(CpuCores, cpuCores_);
      DARABONBA_PTR_FROM_JSON(DefaultStorageInGB, defaultStorageInGB_);
      DARABONBA_PTR_FROM_JSON(MaxStorageInGB, maxStorageInGB_);
      DARABONBA_PTR_FROM_JSON(MemoryInGB, memoryInGB_);
      DARABONBA_PTR_FROM_JSON(MinStorageInGB, minStorageInGB_);
      DARABONBA_PTR_FROM_JSON(StepStorageInGB, stepStorageInGB_);
    };
    DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList() = default ;
    DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList(const DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList &) = default ;
    DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList(DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList &&) = default ;
    DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList() = default ;
    DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList& operator=(const DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList &) = default ;
    DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList& operator=(DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList &&) = default ;
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
    inline DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


    // cpuCores Field Functions 
    bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
    void deleteCpuCores() { this->cpuCores_ = nullptr;};
    inline int32_t cpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, 0) };
    inline DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList& setCpuCores(int32_t cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


    // defaultStorageInGB Field Functions 
    bool hasDefaultStorageInGB() const { return this->defaultStorageInGB_ != nullptr;};
    void deleteDefaultStorageInGB() { this->defaultStorageInGB_ = nullptr;};
    inline int32_t defaultStorageInGB() const { DARABONBA_PTR_GET_DEFAULT(defaultStorageInGB_, 0) };
    inline DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList& setDefaultStorageInGB(int32_t defaultStorageInGB) { DARABONBA_PTR_SET_VALUE(defaultStorageInGB_, defaultStorageInGB) };


    // maxStorageInGB Field Functions 
    bool hasMaxStorageInGB() const { return this->maxStorageInGB_ != nullptr;};
    void deleteMaxStorageInGB() { this->maxStorageInGB_ = nullptr;};
    inline int32_t maxStorageInGB() const { DARABONBA_PTR_GET_DEFAULT(maxStorageInGB_, 0) };
    inline DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList& setMaxStorageInGB(int32_t maxStorageInGB) { DARABONBA_PTR_SET_VALUE(maxStorageInGB_, maxStorageInGB) };


    // memoryInGB Field Functions 
    bool hasMemoryInGB() const { return this->memoryInGB_ != nullptr;};
    void deleteMemoryInGB() { this->memoryInGB_ = nullptr;};
    inline int32_t memoryInGB() const { DARABONBA_PTR_GET_DEFAULT(memoryInGB_, 0) };
    inline DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList& setMemoryInGB(int32_t memoryInGB) { DARABONBA_PTR_SET_VALUE(memoryInGB_, memoryInGB) };


    // minStorageInGB Field Functions 
    bool hasMinStorageInGB() const { return this->minStorageInGB_ != nullptr;};
    void deleteMinStorageInGB() { this->minStorageInGB_ = nullptr;};
    inline int32_t minStorageInGB() const { DARABONBA_PTR_GET_DEFAULT(minStorageInGB_, 0) };
    inline DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList& setMinStorageInGB(int32_t minStorageInGB) { DARABONBA_PTR_SET_VALUE(minStorageInGB_, minStorageInGB) };


    // stepStorageInGB Field Functions 
    bool hasStepStorageInGB() const { return this->stepStorageInGB_ != nullptr;};
    void deleteStepStorageInGB() { this->stepStorageInGB_ = nullptr;};
    inline int32_t stepStorageInGB() const { DARABONBA_PTR_GET_DEFAULT(stepStorageInGB_, 0) };
    inline DescribeDBClusterStorageLimitationResponseBodyDataClassCodeList& setStepStorageInGB(int32_t stepStorageInGB) { DARABONBA_PTR_SET_VALUE(stepStorageInGB_, stepStorageInGB) };


  protected:
    std::shared_ptr<string> classCode_ = nullptr;
    std::shared_ptr<int32_t> cpuCores_ = nullptr;
    std::shared_ptr<int32_t> defaultStorageInGB_ = nullptr;
    std::shared_ptr<int32_t> maxStorageInGB_ = nullptr;
    std::shared_ptr<int32_t> memoryInGB_ = nullptr;
    std::shared_ptr<int32_t> minStorageInGB_ = nullptr;
    std::shared_ptr<int32_t> stepStorageInGB_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif

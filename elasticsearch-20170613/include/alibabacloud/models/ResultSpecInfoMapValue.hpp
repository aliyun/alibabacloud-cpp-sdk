// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESULTSPECINFOMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_RESULTSPECINFOMAPVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ResultSpecInfoMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResultSpecInfoMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(cpuCount, cpuCount_);
      DARABONBA_PTR_TO_JSON(memorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
      DARABONBA_PTR_TO_JSON(specGroupType, specGroupType_);
      DARABONBA_PTR_TO_JSON(disk, disk_);
      DARABONBA_PTR_TO_JSON(diskType, diskType_);
    };
    friend void from_json(const Darabonba::Json& j, ResultSpecInfoMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(cpuCount, cpuCount_);
      DARABONBA_PTR_FROM_JSON(memorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
      DARABONBA_PTR_FROM_JSON(specGroupType, specGroupType_);
      DARABONBA_PTR_FROM_JSON(disk, disk_);
      DARABONBA_PTR_FROM_JSON(diskType, diskType_);
    };
    ResultSpecInfoMapValue() = default ;
    ResultSpecInfoMapValue(const ResultSpecInfoMapValue &) = default ;
    ResultSpecInfoMapValue(ResultSpecInfoMapValue &&) = default ;
    ResultSpecInfoMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResultSpecInfoMapValue() = default ;
    ResultSpecInfoMapValue& operator=(const ResultSpecInfoMapValue &) = default ;
    ResultSpecInfoMapValue& operator=(ResultSpecInfoMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuCount_ == nullptr
        && this->memorySize_ == nullptr && this->enable_ == nullptr && this->spec_ == nullptr && this->specGroupType_ == nullptr && this->disk_ == nullptr
        && this->diskType_ == nullptr; };
    // cpuCount Field Functions 
    bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
    void deleteCpuCount() { this->cpuCount_ = nullptr;};
    inline string getCpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, "") };
    inline ResultSpecInfoMapValue& setCpuCount(string cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline string getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, "") };
    inline ResultSpecInfoMapValue& setMemorySize(string memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline ResultSpecInfoMapValue& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline ResultSpecInfoMapValue& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // specGroupType Field Functions 
    bool hasSpecGroupType() const { return this->specGroupType_ != nullptr;};
    void deleteSpecGroupType() { this->specGroupType_ = nullptr;};
    inline string getSpecGroupType() const { DARABONBA_PTR_GET_DEFAULT(specGroupType_, "") };
    inline ResultSpecInfoMapValue& setSpecGroupType(string specGroupType) { DARABONBA_PTR_SET_VALUE(specGroupType_, specGroupType) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline string getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, "") };
    inline ResultSpecInfoMapValue& setDisk(string disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline ResultSpecInfoMapValue& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


  protected:
    shared_ptr<string> cpuCount_ {};
    shared_ptr<string> memorySize_ {};
    shared_ptr<string> enable_ {};
    shared_ptr<string> spec_ {};
    shared_ptr<string> specGroupType_ {};
    shared_ptr<string> disk_ {};
    shared_ptr<string> diskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

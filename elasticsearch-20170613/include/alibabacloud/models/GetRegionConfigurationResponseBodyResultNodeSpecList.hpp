// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONRESPONSEBODYRESULTNODESPECLIST_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONRESPONSEBODYRESULTNODESPECLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetRegionConfigurationResponseBodyResultNodeSpecList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionConfigurationResponseBodyResultNodeSpecList& obj) { 
      DARABONBA_PTR_TO_JSON(cpuCount, cpuCount_);
      DARABONBA_PTR_TO_JSON(disk, disk_);
      DARABONBA_PTR_TO_JSON(diskType, diskType_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(memorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
      DARABONBA_PTR_TO_JSON(specGroupType, specGroupType_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionConfigurationResponseBodyResultNodeSpecList& obj) { 
      DARABONBA_PTR_FROM_JSON(cpuCount, cpuCount_);
      DARABONBA_PTR_FROM_JSON(disk, disk_);
      DARABONBA_PTR_FROM_JSON(diskType, diskType_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(memorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
      DARABONBA_PTR_FROM_JSON(specGroupType, specGroupType_);
    };
    GetRegionConfigurationResponseBodyResultNodeSpecList() = default ;
    GetRegionConfigurationResponseBodyResultNodeSpecList(const GetRegionConfigurationResponseBodyResultNodeSpecList &) = default ;
    GetRegionConfigurationResponseBodyResultNodeSpecList(GetRegionConfigurationResponseBodyResultNodeSpecList &&) = default ;
    GetRegionConfigurationResponseBodyResultNodeSpecList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionConfigurationResponseBodyResultNodeSpecList() = default ;
    GetRegionConfigurationResponseBodyResultNodeSpecList& operator=(const GetRegionConfigurationResponseBodyResultNodeSpecList &) = default ;
    GetRegionConfigurationResponseBodyResultNodeSpecList& operator=(GetRegionConfigurationResponseBodyResultNodeSpecList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpuCount_ != nullptr
        && this->disk_ != nullptr && this->diskType_ != nullptr && this->enable_ != nullptr && this->memorySize_ != nullptr && this->spec_ != nullptr
        && this->specGroupType_ != nullptr; };
    // cpuCount Field Functions 
    bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
    void deleteCpuCount() { this->cpuCount_ = nullptr;};
    inline int32_t cpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, 0) };
    inline GetRegionConfigurationResponseBodyResultNodeSpecList& setCpuCount(int32_t cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline int32_t disk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
    inline GetRegionConfigurationResponseBodyResultNodeSpecList& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline GetRegionConfigurationResponseBodyResultNodeSpecList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetRegionConfigurationResponseBodyResultNodeSpecList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline int32_t memorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
    inline GetRegionConfigurationResponseBodyResultNodeSpecList& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline GetRegionConfigurationResponseBodyResultNodeSpecList& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // specGroupType Field Functions 
    bool hasSpecGroupType() const { return this->specGroupType_ != nullptr;};
    void deleteSpecGroupType() { this->specGroupType_ = nullptr;};
    inline string specGroupType() const { DARABONBA_PTR_GET_DEFAULT(specGroupType_, "") };
    inline GetRegionConfigurationResponseBodyResultNodeSpecList& setSpecGroupType(string specGroupType) { DARABONBA_PTR_SET_VALUE(specGroupType_, specGroupType) };


  protected:
    std::shared_ptr<int32_t> cpuCount_ = nullptr;
    std::shared_ptr<int32_t> disk_ = nullptr;
    std::shared_ptr<string> diskType_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<int32_t> memorySize_ = nullptr;
    std::shared_ptr<string> spec_ = nullptr;
    std::shared_ptr<string> specGroupType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

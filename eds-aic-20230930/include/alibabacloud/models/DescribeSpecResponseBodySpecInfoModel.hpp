// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPECRESPONSEBODYSPECINFOMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPECRESPONSEBODYSPECINFOMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeSpecResponseBodySpecInfoModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpecResponseBodySpecInfoModel& obj) { 
      DARABONBA_PTR_TO_JSON(Core, core_);
      DARABONBA_PTR_TO_JSON(MaxPhoneCount, maxPhoneCount_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(MinPhoneCount, minPhoneCount_);
      DARABONBA_PTR_TO_JSON(PhoneCount, phoneCount_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(SpecId, specId_);
      DARABONBA_PTR_TO_JSON(SpecStatus, specStatus_);
      DARABONBA_PTR_TO_JSON(SpecType, specType_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpecResponseBodySpecInfoModel& obj) { 
      DARABONBA_PTR_FROM_JSON(Core, core_);
      DARABONBA_PTR_FROM_JSON(MaxPhoneCount, maxPhoneCount_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(MinPhoneCount, minPhoneCount_);
      DARABONBA_PTR_FROM_JSON(PhoneCount, phoneCount_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(SpecId, specId_);
      DARABONBA_PTR_FROM_JSON(SpecStatus, specStatus_);
      DARABONBA_PTR_FROM_JSON(SpecType, specType_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
    };
    DescribeSpecResponseBodySpecInfoModel() = default ;
    DescribeSpecResponseBodySpecInfoModel(const DescribeSpecResponseBodySpecInfoModel &) = default ;
    DescribeSpecResponseBodySpecInfoModel(DescribeSpecResponseBodySpecInfoModel &&) = default ;
    DescribeSpecResponseBodySpecInfoModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpecResponseBodySpecInfoModel() = default ;
    DescribeSpecResponseBodySpecInfoModel& operator=(const DescribeSpecResponseBodySpecInfoModel &) = default ;
    DescribeSpecResponseBodySpecInfoModel& operator=(DescribeSpecResponseBodySpecInfoModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->core_ == nullptr
        && return this->maxPhoneCount_ == nullptr && return this->memory_ == nullptr && return this->minPhoneCount_ == nullptr && return this->phoneCount_ == nullptr && return this->resolution_ == nullptr
        && return this->specId_ == nullptr && return this->specStatus_ == nullptr && return this->specType_ == nullptr && return this->systemDiskSize_ == nullptr; };
    // core Field Functions 
    bool hasCore() const { return this->core_ != nullptr;};
    void deleteCore() { this->core_ = nullptr;};
    inline int32_t core() const { DARABONBA_PTR_GET_DEFAULT(core_, 0) };
    inline DescribeSpecResponseBodySpecInfoModel& setCore(int32_t core) { DARABONBA_PTR_SET_VALUE(core_, core) };


    // maxPhoneCount Field Functions 
    bool hasMaxPhoneCount() const { return this->maxPhoneCount_ != nullptr;};
    void deleteMaxPhoneCount() { this->maxPhoneCount_ = nullptr;};
    inline string maxPhoneCount() const { DARABONBA_PTR_GET_DEFAULT(maxPhoneCount_, "") };
    inline DescribeSpecResponseBodySpecInfoModel& setMaxPhoneCount(string maxPhoneCount) { DARABONBA_PTR_SET_VALUE(maxPhoneCount_, maxPhoneCount) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeSpecResponseBodySpecInfoModel& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // minPhoneCount Field Functions 
    bool hasMinPhoneCount() const { return this->minPhoneCount_ != nullptr;};
    void deleteMinPhoneCount() { this->minPhoneCount_ = nullptr;};
    inline string minPhoneCount() const { DARABONBA_PTR_GET_DEFAULT(minPhoneCount_, "") };
    inline DescribeSpecResponseBodySpecInfoModel& setMinPhoneCount(string minPhoneCount) { DARABONBA_PTR_SET_VALUE(minPhoneCount_, minPhoneCount) };


    // phoneCount Field Functions 
    bool hasPhoneCount() const { return this->phoneCount_ != nullptr;};
    void deletePhoneCount() { this->phoneCount_ = nullptr;};
    inline string phoneCount() const { DARABONBA_PTR_GET_DEFAULT(phoneCount_, "") };
    inline DescribeSpecResponseBodySpecInfoModel& setPhoneCount(string phoneCount) { DARABONBA_PTR_SET_VALUE(phoneCount_, phoneCount) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string resolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline DescribeSpecResponseBodySpecInfoModel& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // specId Field Functions 
    bool hasSpecId() const { return this->specId_ != nullptr;};
    void deleteSpecId() { this->specId_ = nullptr;};
    inline string specId() const { DARABONBA_PTR_GET_DEFAULT(specId_, "") };
    inline DescribeSpecResponseBodySpecInfoModel& setSpecId(string specId) { DARABONBA_PTR_SET_VALUE(specId_, specId) };


    // specStatus Field Functions 
    bool hasSpecStatus() const { return this->specStatus_ != nullptr;};
    void deleteSpecStatus() { this->specStatus_ = nullptr;};
    inline string specStatus() const { DARABONBA_PTR_GET_DEFAULT(specStatus_, "") };
    inline DescribeSpecResponseBodySpecInfoModel& setSpecStatus(string specStatus) { DARABONBA_PTR_SET_VALUE(specStatus_, specStatus) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string specType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline DescribeSpecResponseBodySpecInfoModel& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline DescribeSpecResponseBodySpecInfoModel& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


  protected:
    // Number of CPU cores.
    std::shared_ptr<int32_t> core_ = nullptr;
    // The maximum number of cloud phone instances.
    std::shared_ptr<string> maxPhoneCount_ = nullptr;
    // Memory size.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // The minimum number of cloud phone instances.
    std::shared_ptr<string> minPhoneCount_ = nullptr;
    std::shared_ptr<string> phoneCount_ = nullptr;
    std::shared_ptr<string> resolution_ = nullptr;
    // Specification ID.
    std::shared_ptr<string> specId_ = nullptr;
    // Specification status.
    std::shared_ptr<string> specStatus_ = nullptr;
    // Specification type.
    std::shared_ptr<string> specType_ = nullptr;
    // System disk size, in GB.
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif

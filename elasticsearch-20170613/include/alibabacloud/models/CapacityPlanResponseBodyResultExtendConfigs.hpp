// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CAPACITYPLANRESPONSEBODYRESULTEXTENDCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_CAPACITYPLANRESPONSEBODYRESULTEXTENDCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CapacityPlanResponseBodyResultExtendConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CapacityPlanResponseBodyResultExtendConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(Disk, disk_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
    };
    friend void from_json(const Darabonba::Json& j, CapacityPlanResponseBodyResultExtendConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(Disk, disk_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
    };
    CapacityPlanResponseBodyResultExtendConfigs() = default ;
    CapacityPlanResponseBodyResultExtendConfigs(const CapacityPlanResponseBodyResultExtendConfigs &) = default ;
    CapacityPlanResponseBodyResultExtendConfigs(CapacityPlanResponseBodyResultExtendConfigs &&) = default ;
    CapacityPlanResponseBodyResultExtendConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CapacityPlanResponseBodyResultExtendConfigs() = default ;
    CapacityPlanResponseBodyResultExtendConfigs& operator=(const CapacityPlanResponseBodyResultExtendConfigs &) = default ;
    CapacityPlanResponseBodyResultExtendConfigs& operator=(CapacityPlanResponseBodyResultExtendConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configType_ != nullptr
        && this->disk_ != nullptr && this->diskType_ != nullptr; };
    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline CapacityPlanResponseBodyResultExtendConfigs& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline int64_t disk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0L) };
    inline CapacityPlanResponseBodyResultExtendConfigs& setDisk(int64_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CapacityPlanResponseBodyResultExtendConfigs& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


  protected:
    // Configuration type, with a single value: sharedDisk.
    // 
    // > This extendConfigs attribute may appear when the planned instance type is Advanced.
    std::shared_ptr<string> configType_ = nullptr;
    // Disk size, in GiB.
    std::shared_ptr<int64_t> disk_ = nullptr;
    // Disk type, with a single value: CPFS_PREMIUM.
    // 
    // > This extendConfigs attribute may appear when the planned instance type is Advanced.
    std::shared_ptr<string> diskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

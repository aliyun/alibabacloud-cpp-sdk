// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSASSETRESPONSEBODYASSETLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSASSETRESPONSEBODYASSETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAgentlessAssetResponseBodyAssetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentlessAssetResponseBodyAssetList& obj) { 
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentlessAssetResponseBodyAssetList& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ListAgentlessAssetResponseBodyAssetList() = default ;
    ListAgentlessAssetResponseBodyAssetList(const ListAgentlessAssetResponseBodyAssetList &) = default ;
    ListAgentlessAssetResponseBodyAssetList(ListAgentlessAssetResponseBodyAssetList &&) = default ;
    ListAgentlessAssetResponseBodyAssetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentlessAssetResponseBodyAssetList() = default ;
    ListAgentlessAssetResponseBodyAssetList& operator=(const ListAgentlessAssetResponseBodyAssetList &) = default ;
    ListAgentlessAssetResponseBodyAssetList& operator=(ListAgentlessAssetResponseBodyAssetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskType_ != nullptr
        && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->platform_ != nullptr && this->regionId_ != nullptr && this->targetType_ != nullptr; };
    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline ListAgentlessAssetResponseBodyAssetList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAgentlessAssetResponseBodyAssetList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListAgentlessAssetResponseBodyAssetList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ListAgentlessAssetResponseBodyAssetList& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAgentlessAssetResponseBodyAssetList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline int32_t targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
    inline ListAgentlessAssetResponseBodyAssetList& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The type of the cloud disk. Values:
    // 
    // - system: System disk.
    // 
    // - data: Data disk.
    std::shared_ptr<string> diskType_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Operating system type.
    std::shared_ptr<string> platform_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the asset. Values:
    // 
    // - **3**: User snapshot
    // 
    // - **4**: User-defined image
    std::shared_ptr<int32_t> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCEINFOS_HPP_
#define ALIBABACLOUD_MODELS_RESOURCEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ResourceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(GpuCardType, gpuCardType_);
      DARABONBA_PTR_TO_JSON(MachineModel, machineModel_);
      DARABONBA_PTR_TO_JSON(MaxQuota, maxQuota_);
      DARABONBA_PTR_TO_JSON(NetworkPodId, networkPodId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UsedQuota, usedQuota_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(GpuCardType, gpuCardType_);
      DARABONBA_PTR_FROM_JSON(MachineModel, machineModel_);
      DARABONBA_PTR_FROM_JSON(MaxQuota, maxQuota_);
      DARABONBA_PTR_FROM_JSON(NetworkPodId, networkPodId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UsedQuota, usedQuota_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ResourceInfos() = default ;
    ResourceInfos(const ResourceInfos &) = default ;
    ResourceInfos(ResourceInfos &&) = default ;
    ResourceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceInfos() = default ;
    ResourceInfos& operator=(const ResourceInfos &) = default ;
    ResourceInfos& operator=(ResourceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->ecsSpec_ == nullptr && return this->gpuCardType_ == nullptr && return this->machineModel_ == nullptr && return this->maxQuota_ == nullptr && return this->networkPodId_ == nullptr
        && return this->regionId_ == nullptr && return this->usedQuota_ == nullptr && return this->userId_ == nullptr && return this->userName_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ResourceInfos& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline string ecsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
    inline ResourceInfos& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


    // gpuCardType Field Functions 
    bool hasGpuCardType() const { return this->gpuCardType_ != nullptr;};
    void deleteGpuCardType() { this->gpuCardType_ = nullptr;};
    inline string gpuCardType() const { DARABONBA_PTR_GET_DEFAULT(gpuCardType_, "") };
    inline ResourceInfos& setGpuCardType(string gpuCardType) { DARABONBA_PTR_SET_VALUE(gpuCardType_, gpuCardType) };


    // machineModel Field Functions 
    bool hasMachineModel() const { return this->machineModel_ != nullptr;};
    void deleteMachineModel() { this->machineModel_ = nullptr;};
    inline string machineModel() const { DARABONBA_PTR_GET_DEFAULT(machineModel_, "") };
    inline ResourceInfos& setMachineModel(string machineModel) { DARABONBA_PTR_SET_VALUE(machineModel_, machineModel) };


    // maxQuota Field Functions 
    bool hasMaxQuota() const { return this->maxQuota_ != nullptr;};
    void deleteMaxQuota() { this->maxQuota_ = nullptr;};
    inline int64_t maxQuota() const { DARABONBA_PTR_GET_DEFAULT(maxQuota_, 0L) };
    inline ResourceInfos& setMaxQuota(int64_t maxQuota) { DARABONBA_PTR_SET_VALUE(maxQuota_, maxQuota) };


    // networkPodId Field Functions 
    bool hasNetworkPodId() const { return this->networkPodId_ != nullptr;};
    void deleteNetworkPodId() { this->networkPodId_ = nullptr;};
    inline string networkPodId() const { DARABONBA_PTR_GET_DEFAULT(networkPodId_, "") };
    inline ResourceInfos& setNetworkPodId(string networkPodId) { DARABONBA_PTR_SET_VALUE(networkPodId_, networkPodId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResourceInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // usedQuota Field Functions 
    bool hasUsedQuota() const { return this->usedQuota_ != nullptr;};
    void deleteUsedQuota() { this->usedQuota_ = nullptr;};
    inline int64_t usedQuota() const { DARABONBA_PTR_GET_DEFAULT(usedQuota_, 0L) };
    inline ResourceInfos& setUsedQuota(int64_t usedQuota) { DARABONBA_PTR_SET_VALUE(usedQuota_, usedQuota) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ResourceInfos& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ResourceInfos& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> ecsSpec_ = nullptr;
    std::shared_ptr<string> gpuCardType_ = nullptr;
    std::shared_ptr<string> machineModel_ = nullptr;
    std::shared_ptr<int64_t> maxQuota_ = nullptr;
    std::shared_ptr<string> networkPodId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> usedQuota_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif

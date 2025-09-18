// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SCALINGGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScalingGroupConfigInstanceTypeList.hpp>
#include <alibabacloud/models/ScalingGroupConfigMultiAvailablePolicy.hpp>
#include <alibabacloud/models/ScalingGroupConfigNodeOfflinePolicy.hpp>
#include <alibabacloud/models/ScalingGroupConfigPrivatePoolOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ScalingGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DataDiskCategory, dataDiskCategory_);
      DARABONBA_PTR_TO_JSON(DataDiskCount, dataDiskCount_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(DefaultCoolDownTime, defaultCoolDownTime_);
      DARABONBA_PTR_TO_JSON(InstanceTypeList, instanceTypeList_);
      DARABONBA_PTR_TO_JSON(MultiAvailablePolicy, multiAvailablePolicy_);
      DARABONBA_PTR_TO_JSON(NodeOfflinePolicy, nodeOfflinePolicy_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_TO_JSON(ScalingMaxSize, scalingMaxSize_);
      DARABONBA_PTR_TO_JSON(ScalingMinSize, scalingMinSize_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(SysDiskCategory, sysDiskCategory_);
      DARABONBA_PTR_TO_JSON(SysDiskSize, sysDiskSize_);
      DARABONBA_PTR_TO_JSON(TriggerMode, triggerMode_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDiskCategory, dataDiskCategory_);
      DARABONBA_PTR_FROM_JSON(DataDiskCount, dataDiskCount_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(DefaultCoolDownTime, defaultCoolDownTime_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeList, instanceTypeList_);
      DARABONBA_PTR_FROM_JSON(MultiAvailablePolicy, multiAvailablePolicy_);
      DARABONBA_PTR_FROM_JSON(NodeOfflinePolicy, nodeOfflinePolicy_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_FROM_JSON(ScalingMaxSize, scalingMaxSize_);
      DARABONBA_PTR_FROM_JSON(ScalingMinSize, scalingMinSize_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(SysDiskCategory, sysDiskCategory_);
      DARABONBA_PTR_FROM_JSON(SysDiskSize, sysDiskSize_);
      DARABONBA_PTR_FROM_JSON(TriggerMode, triggerMode_);
    };
    ScalingGroupConfig() = default ;
    ScalingGroupConfig(const ScalingGroupConfig &) = default ;
    ScalingGroupConfig(ScalingGroupConfig &&) = default ;
    ScalingGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingGroupConfig() = default ;
    ScalingGroupConfig& operator=(const ScalingGroupConfig &) = default ;
    ScalingGroupConfig& operator=(ScalingGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataDiskCategory_ != nullptr
        && this->dataDiskCount_ != nullptr && this->dataDiskSize_ != nullptr && this->defaultCoolDownTime_ != nullptr && this->instanceTypeList_ != nullptr && this->multiAvailablePolicy_ != nullptr
        && this->nodeOfflinePolicy_ != nullptr && this->privatePoolOptions_ != nullptr && this->scalingMaxSize_ != nullptr && this->scalingMinSize_ != nullptr && this->spotStrategy_ != nullptr
        && this->sysDiskCategory_ != nullptr && this->sysDiskSize_ != nullptr && this->triggerMode_ != nullptr; };
    // dataDiskCategory Field Functions 
    bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
    void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
    inline string dataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
    inline ScalingGroupConfig& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


    // dataDiskCount Field Functions 
    bool hasDataDiskCount() const { return this->dataDiskCount_ != nullptr;};
    void deleteDataDiskCount() { this->dataDiskCount_ = nullptr;};
    inline int32_t dataDiskCount() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCount_, 0) };
    inline ScalingGroupConfig& setDataDiskCount(int32_t dataDiskCount) { DARABONBA_PTR_SET_VALUE(dataDiskCount_, dataDiskCount) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int64_t dataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0L) };
    inline ScalingGroupConfig& setDataDiskSize(int64_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // defaultCoolDownTime Field Functions 
    bool hasDefaultCoolDownTime() const { return this->defaultCoolDownTime_ != nullptr;};
    void deleteDefaultCoolDownTime() { this->defaultCoolDownTime_ = nullptr;};
    inline int64_t defaultCoolDownTime() const { DARABONBA_PTR_GET_DEFAULT(defaultCoolDownTime_, 0L) };
    inline ScalingGroupConfig& setDefaultCoolDownTime(int64_t defaultCoolDownTime) { DARABONBA_PTR_SET_VALUE(defaultCoolDownTime_, defaultCoolDownTime) };


    // instanceTypeList Field Functions 
    bool hasInstanceTypeList() const { return this->instanceTypeList_ != nullptr;};
    void deleteInstanceTypeList() { this->instanceTypeList_ = nullptr;};
    inline const vector<ScalingGroupConfigInstanceTypeList> & instanceTypeList() const { DARABONBA_PTR_GET_CONST(instanceTypeList_, vector<ScalingGroupConfigInstanceTypeList>) };
    inline vector<ScalingGroupConfigInstanceTypeList> instanceTypeList() { DARABONBA_PTR_GET(instanceTypeList_, vector<ScalingGroupConfigInstanceTypeList>) };
    inline ScalingGroupConfig& setInstanceTypeList(const vector<ScalingGroupConfigInstanceTypeList> & instanceTypeList) { DARABONBA_PTR_SET_VALUE(instanceTypeList_, instanceTypeList) };
    inline ScalingGroupConfig& setInstanceTypeList(vector<ScalingGroupConfigInstanceTypeList> && instanceTypeList) { DARABONBA_PTR_SET_RVALUE(instanceTypeList_, instanceTypeList) };


    // multiAvailablePolicy Field Functions 
    bool hasMultiAvailablePolicy() const { return this->multiAvailablePolicy_ != nullptr;};
    void deleteMultiAvailablePolicy() { this->multiAvailablePolicy_ = nullptr;};
    inline const ScalingGroupConfigMultiAvailablePolicy & multiAvailablePolicy() const { DARABONBA_PTR_GET_CONST(multiAvailablePolicy_, ScalingGroupConfigMultiAvailablePolicy) };
    inline ScalingGroupConfigMultiAvailablePolicy multiAvailablePolicy() { DARABONBA_PTR_GET(multiAvailablePolicy_, ScalingGroupConfigMultiAvailablePolicy) };
    inline ScalingGroupConfig& setMultiAvailablePolicy(const ScalingGroupConfigMultiAvailablePolicy & multiAvailablePolicy) { DARABONBA_PTR_SET_VALUE(multiAvailablePolicy_, multiAvailablePolicy) };
    inline ScalingGroupConfig& setMultiAvailablePolicy(ScalingGroupConfigMultiAvailablePolicy && multiAvailablePolicy) { DARABONBA_PTR_SET_RVALUE(multiAvailablePolicy_, multiAvailablePolicy) };


    // nodeOfflinePolicy Field Functions 
    bool hasNodeOfflinePolicy() const { return this->nodeOfflinePolicy_ != nullptr;};
    void deleteNodeOfflinePolicy() { this->nodeOfflinePolicy_ = nullptr;};
    inline const ScalingGroupConfigNodeOfflinePolicy & nodeOfflinePolicy() const { DARABONBA_PTR_GET_CONST(nodeOfflinePolicy_, ScalingGroupConfigNodeOfflinePolicy) };
    inline ScalingGroupConfigNodeOfflinePolicy nodeOfflinePolicy() { DARABONBA_PTR_GET(nodeOfflinePolicy_, ScalingGroupConfigNodeOfflinePolicy) };
    inline ScalingGroupConfig& setNodeOfflinePolicy(const ScalingGroupConfigNodeOfflinePolicy & nodeOfflinePolicy) { DARABONBA_PTR_SET_VALUE(nodeOfflinePolicy_, nodeOfflinePolicy) };
    inline ScalingGroupConfig& setNodeOfflinePolicy(ScalingGroupConfigNodeOfflinePolicy && nodeOfflinePolicy) { DARABONBA_PTR_SET_RVALUE(nodeOfflinePolicy_, nodeOfflinePolicy) };


    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const ScalingGroupConfigPrivatePoolOptions & privatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, ScalingGroupConfigPrivatePoolOptions) };
    inline ScalingGroupConfigPrivatePoolOptions privatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, ScalingGroupConfigPrivatePoolOptions) };
    inline ScalingGroupConfig& setPrivatePoolOptions(const ScalingGroupConfigPrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline ScalingGroupConfig& setPrivatePoolOptions(ScalingGroupConfigPrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // scalingMaxSize Field Functions 
    bool hasScalingMaxSize() const { return this->scalingMaxSize_ != nullptr;};
    void deleteScalingMaxSize() { this->scalingMaxSize_ = nullptr;};
    inline int32_t scalingMaxSize() const { DARABONBA_PTR_GET_DEFAULT(scalingMaxSize_, 0) };
    inline ScalingGroupConfig& setScalingMaxSize(int32_t scalingMaxSize) { DARABONBA_PTR_SET_VALUE(scalingMaxSize_, scalingMaxSize) };


    // scalingMinSize Field Functions 
    bool hasScalingMinSize() const { return this->scalingMinSize_ != nullptr;};
    void deleteScalingMinSize() { this->scalingMinSize_ = nullptr;};
    inline int32_t scalingMinSize() const { DARABONBA_PTR_GET_DEFAULT(scalingMinSize_, 0) };
    inline ScalingGroupConfig& setScalingMinSize(int32_t scalingMinSize) { DARABONBA_PTR_SET_VALUE(scalingMinSize_, scalingMinSize) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline ScalingGroupConfig& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // sysDiskCategory Field Functions 
    bool hasSysDiskCategory() const { return this->sysDiskCategory_ != nullptr;};
    void deleteSysDiskCategory() { this->sysDiskCategory_ = nullptr;};
    inline string sysDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(sysDiskCategory_, "") };
    inline ScalingGroupConfig& setSysDiskCategory(string sysDiskCategory) { DARABONBA_PTR_SET_VALUE(sysDiskCategory_, sysDiskCategory) };


    // sysDiskSize Field Functions 
    bool hasSysDiskSize() const { return this->sysDiskSize_ != nullptr;};
    void deleteSysDiskSize() { this->sysDiskSize_ = nullptr;};
    inline int64_t sysDiskSize() const { DARABONBA_PTR_GET_DEFAULT(sysDiskSize_, 0L) };
    inline ScalingGroupConfig& setSysDiskSize(int64_t sysDiskSize) { DARABONBA_PTR_SET_VALUE(sysDiskSize_, sysDiskSize) };


    // triggerMode Field Functions 
    bool hasTriggerMode() const { return this->triggerMode_ != nullptr;};
    void deleteTriggerMode() { this->triggerMode_ = nullptr;};
    inline string triggerMode() const { DARABONBA_PTR_GET_DEFAULT(triggerMode_, "") };
    inline ScalingGroupConfig& setTriggerMode(string triggerMode) { DARABONBA_PTR_SET_VALUE(triggerMode_, triggerMode) };


  protected:
    // 数据盘类型。
    std::shared_ptr<string> dataDiskCategory_ = nullptr;
    // 数据盘个数。
    std::shared_ptr<int32_t> dataDiskCount_ = nullptr;
    // 数据盘大小,单位GB。
    std::shared_ptr<int64_t> dataDiskSize_ = nullptr;
    // 默认冷却时间。
    std::shared_ptr<int64_t> defaultCoolDownTime_ = nullptr;
    // 抢占实例列表。
    std::shared_ptr<vector<ScalingGroupConfigInstanceTypeList>> instanceTypeList_ = nullptr;
    // 资源可用性策略(成本优化参数)。
    std::shared_ptr<ScalingGroupConfigMultiAvailablePolicy> multiAvailablePolicy_ = nullptr;
    // 节点下线策略。
    std::shared_ptr<ScalingGroupConfigNodeOfflinePolicy> nodeOfflinePolicy_ = nullptr;
    // 私有池选项	。
    std::shared_ptr<ScalingGroupConfigPrivatePoolOptions> privatePoolOptions_ = nullptr;
    // 伸缩组节点最大个数。
    std::shared_ptr<int32_t> scalingMaxSize_ = nullptr;
    // 伸缩组节点最小个数。
    std::shared_ptr<int32_t> scalingMinSize_ = nullptr;
    // 抢占式Spot实例策略。
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // 系统盘类型。
    std::shared_ptr<string> sysDiskCategory_ = nullptr;
    // 系统盘大小,单位GB。
    std::shared_ptr<int64_t> sysDiskSize_ = nullptr;
    // 伸缩活动触发模式。
    std::shared_ptr<string> triggerMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SCALINGGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class PrivatePoolOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrivatePoolOptions& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MatchCriteria, matchCriteria_);
      };
      friend void from_json(const Darabonba::Json& j, PrivatePoolOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MatchCriteria, matchCriteria_);
      };
      PrivatePoolOptions() = default ;
      PrivatePoolOptions(const PrivatePoolOptions &) = default ;
      PrivatePoolOptions(PrivatePoolOptions &&) = default ;
      PrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrivatePoolOptions() = default ;
      PrivatePoolOptions& operator=(const PrivatePoolOptions &) = default ;
      PrivatePoolOptions& operator=(PrivatePoolOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->matchCriteria_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline PrivatePoolOptions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // matchCriteria Field Functions 
      bool hasMatchCriteria() const { return this->matchCriteria_ != nullptr;};
      void deleteMatchCriteria() { this->matchCriteria_ = nullptr;};
      inline string getMatchCriteria() const { DARABONBA_PTR_GET_DEFAULT(matchCriteria_, "") };
      inline PrivatePoolOptions& setMatchCriteria(string matchCriteria) { DARABONBA_PTR_SET_VALUE(matchCriteria_, matchCriteria) };


    protected:
      // 私有池id。
      shared_ptr<string> id_ {};
      // 实例启动的私有池容量选项。。
      shared_ptr<string> matchCriteria_ {};
    };

    class NodeOfflinePolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeOfflinePolicy& obj) { 
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(TimeoutMs, timeoutMs_);
      };
      friend void from_json(const Darabonba::Json& j, NodeOfflinePolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(TimeoutMs, timeoutMs_);
      };
      NodeOfflinePolicy() = default ;
      NodeOfflinePolicy(const NodeOfflinePolicy &) = default ;
      NodeOfflinePolicy(NodeOfflinePolicy &&) = default ;
      NodeOfflinePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeOfflinePolicy() = default ;
      NodeOfflinePolicy& operator=(const NodeOfflinePolicy &) = default ;
      NodeOfflinePolicy& operator=(NodeOfflinePolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mode_ == nullptr
        && this->timeoutMs_ == nullptr; };
      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline NodeOfflinePolicy& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // timeoutMs Field Functions 
      bool hasTimeoutMs() const { return this->timeoutMs_ != nullptr;};
      void deleteTimeoutMs() { this->timeoutMs_ = nullptr;};
      inline int64_t getTimeoutMs() const { DARABONBA_PTR_GET_DEFAULT(timeoutMs_, 0L) };
      inline NodeOfflinePolicy& setTimeoutMs(int64_t timeoutMs) { DARABONBA_PTR_SET_VALUE(timeoutMs_, timeoutMs) };


    protected:
      // 下线模式,是否为优雅下线。
      shared_ptr<string> mode_ {};
      // 下线超时时间,单位毫秒。
      shared_ptr<int64_t> timeoutMs_ {};
    };

    class MultiAvailablePolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MultiAvailablePolicy& obj) { 
        DARABONBA_PTR_TO_JSON(PolicyParam, policyParam_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, MultiAvailablePolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(PolicyParam, policyParam_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      MultiAvailablePolicy() = default ;
      MultiAvailablePolicy(const MultiAvailablePolicy &) = default ;
      MultiAvailablePolicy(MultiAvailablePolicy &&) = default ;
      MultiAvailablePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MultiAvailablePolicy() = default ;
      MultiAvailablePolicy& operator=(const MultiAvailablePolicy &) = default ;
      MultiAvailablePolicy& operator=(MultiAvailablePolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PolicyParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PolicyParam& obj) { 
          DARABONBA_PTR_TO_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
          DARABONBA_PTR_TO_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
          DARABONBA_PTR_TO_JSON(SpotInstancePools, spotInstancePools_);
          DARABONBA_PTR_TO_JSON(SpotInstanceRemedy, spotInstanceRemedy_);
        };
        friend void from_json(const Darabonba::Json& j, PolicyParam& obj) { 
          DARABONBA_PTR_FROM_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
          DARABONBA_PTR_FROM_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
          DARABONBA_PTR_FROM_JSON(SpotInstancePools, spotInstancePools_);
          DARABONBA_PTR_FROM_JSON(SpotInstanceRemedy, spotInstanceRemedy_);
        };
        PolicyParam() = default ;
        PolicyParam(const PolicyParam &) = default ;
        PolicyParam(PolicyParam &&) = default ;
        PolicyParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PolicyParam() = default ;
        PolicyParam& operator=(const PolicyParam &) = default ;
        PolicyParam& operator=(PolicyParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->onDemandBaseCapacity_ == nullptr
        && this->onDemandPercentageAboveBaseCapacity_ == nullptr && this->spotInstancePools_ == nullptr && this->spotInstanceRemedy_ == nullptr; };
        // onDemandBaseCapacity Field Functions 
        bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
        void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
        inline int32_t getOnDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0) };
        inline PolicyParam& setOnDemandBaseCapacity(int32_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


        // onDemandPercentageAboveBaseCapacity Field Functions 
        bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
        void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
        inline int32_t getOnDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0) };
        inline PolicyParam& setOnDemandPercentageAboveBaseCapacity(int32_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


        // spotInstancePools Field Functions 
        bool hasSpotInstancePools() const { return this->spotInstancePools_ != nullptr;};
        void deleteSpotInstancePools() { this->spotInstancePools_ = nullptr;};
        inline int32_t getSpotInstancePools() const { DARABONBA_PTR_GET_DEFAULT(spotInstancePools_, 0) };
        inline PolicyParam& setSpotInstancePools(int32_t spotInstancePools) { DARABONBA_PTR_SET_VALUE(spotInstancePools_, spotInstancePools) };


        // spotInstanceRemedy Field Functions 
        bool hasSpotInstanceRemedy() const { return this->spotInstanceRemedy_ != nullptr;};
        void deleteSpotInstanceRemedy() { this->spotInstanceRemedy_ = nullptr;};
        inline bool getSpotInstanceRemedy() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceRemedy_, false) };
        inline PolicyParam& setSpotInstanceRemedy(bool spotInstanceRemedy) { DARABONBA_PTR_SET_VALUE(spotInstanceRemedy_, spotInstanceRemedy) };


      protected:
        // 按需实例最小个数。
        shared_ptr<int32_t> onDemandBaseCapacity_ {};
        // 按需实例百分比。
        shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ {};
        // 抢占实例类型池规模。
        shared_ptr<int32_t> spotInstancePools_ {};
        // 是否使用按量补偿。
        shared_ptr<bool> spotInstanceRemedy_ {};
      };

      virtual bool empty() const override { return this->policyParam_ == nullptr
        && this->policyType_ == nullptr; };
      // policyParam Field Functions 
      bool hasPolicyParam() const { return this->policyParam_ != nullptr;};
      void deletePolicyParam() { this->policyParam_ = nullptr;};
      inline const MultiAvailablePolicy::PolicyParam & getPolicyParam() const { DARABONBA_PTR_GET_CONST(policyParam_, MultiAvailablePolicy::PolicyParam) };
      inline MultiAvailablePolicy::PolicyParam getPolicyParam() { DARABONBA_PTR_GET(policyParam_, MultiAvailablePolicy::PolicyParam) };
      inline MultiAvailablePolicy& setPolicyParam(const MultiAvailablePolicy::PolicyParam & policyParam) { DARABONBA_PTR_SET_VALUE(policyParam_, policyParam) };
      inline MultiAvailablePolicy& setPolicyParam(MultiAvailablePolicy::PolicyParam && policyParam) { DARABONBA_PTR_SET_RVALUE(policyParam_, policyParam) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline MultiAvailablePolicy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      // 资源可用性策略(成本优化参数)。
      shared_ptr<MultiAvailablePolicy::PolicyParam> policyParam_ {};
      // 策略类型。
      shared_ptr<string> policyType_ {};
    };

    class InstanceTypeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceTypeList& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceTypeList& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      };
      InstanceTypeList() = default ;
      InstanceTypeList(const InstanceTypeList &) = default ;
      InstanceTypeList(InstanceTypeList &&) = default ;
      InstanceTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceTypeList() = default ;
      InstanceTypeList& operator=(const InstanceTypeList &) = default ;
      InstanceTypeList& operator=(InstanceTypeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceType_ == nullptr
        && this->spotPriceLimit_ == nullptr; };
      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline InstanceTypeList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // spotPriceLimit Field Functions 
      bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
      void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
      inline float getSpotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
      inline InstanceTypeList& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    protected:
      // Ecs类型。
      shared_ptr<string> instanceType_ {};
      // 抢占价格上限,可空。
      shared_ptr<float> spotPriceLimit_ {};
    };

    virtual bool empty() const override { return this->dataDiskCategory_ == nullptr
        && this->dataDiskCount_ == nullptr && this->dataDiskSize_ == nullptr && this->defaultCoolDownTime_ == nullptr && this->instanceTypeList_ == nullptr && this->multiAvailablePolicy_ == nullptr
        && this->nodeOfflinePolicy_ == nullptr && this->privatePoolOptions_ == nullptr && this->scalingMaxSize_ == nullptr && this->scalingMinSize_ == nullptr && this->spotStrategy_ == nullptr
        && this->sysDiskCategory_ == nullptr && this->sysDiskSize_ == nullptr && this->triggerMode_ == nullptr; };
    // dataDiskCategory Field Functions 
    bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
    void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
    inline string getDataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
    inline ScalingGroupConfig& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


    // dataDiskCount Field Functions 
    bool hasDataDiskCount() const { return this->dataDiskCount_ != nullptr;};
    void deleteDataDiskCount() { this->dataDiskCount_ = nullptr;};
    inline int32_t getDataDiskCount() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCount_, 0) };
    inline ScalingGroupConfig& setDataDiskCount(int32_t dataDiskCount) { DARABONBA_PTR_SET_VALUE(dataDiskCount_, dataDiskCount) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int64_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0L) };
    inline ScalingGroupConfig& setDataDiskSize(int64_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // defaultCoolDownTime Field Functions 
    bool hasDefaultCoolDownTime() const { return this->defaultCoolDownTime_ != nullptr;};
    void deleteDefaultCoolDownTime() { this->defaultCoolDownTime_ = nullptr;};
    inline int64_t getDefaultCoolDownTime() const { DARABONBA_PTR_GET_DEFAULT(defaultCoolDownTime_, 0L) };
    inline ScalingGroupConfig& setDefaultCoolDownTime(int64_t defaultCoolDownTime) { DARABONBA_PTR_SET_VALUE(defaultCoolDownTime_, defaultCoolDownTime) };


    // instanceTypeList Field Functions 
    bool hasInstanceTypeList() const { return this->instanceTypeList_ != nullptr;};
    void deleteInstanceTypeList() { this->instanceTypeList_ = nullptr;};
    inline const vector<ScalingGroupConfig::InstanceTypeList> & getInstanceTypeList() const { DARABONBA_PTR_GET_CONST(instanceTypeList_, vector<ScalingGroupConfig::InstanceTypeList>) };
    inline vector<ScalingGroupConfig::InstanceTypeList> getInstanceTypeList() { DARABONBA_PTR_GET(instanceTypeList_, vector<ScalingGroupConfig::InstanceTypeList>) };
    inline ScalingGroupConfig& setInstanceTypeList(const vector<ScalingGroupConfig::InstanceTypeList> & instanceTypeList) { DARABONBA_PTR_SET_VALUE(instanceTypeList_, instanceTypeList) };
    inline ScalingGroupConfig& setInstanceTypeList(vector<ScalingGroupConfig::InstanceTypeList> && instanceTypeList) { DARABONBA_PTR_SET_RVALUE(instanceTypeList_, instanceTypeList) };


    // multiAvailablePolicy Field Functions 
    bool hasMultiAvailablePolicy() const { return this->multiAvailablePolicy_ != nullptr;};
    void deleteMultiAvailablePolicy() { this->multiAvailablePolicy_ = nullptr;};
    inline const ScalingGroupConfig::MultiAvailablePolicy & getMultiAvailablePolicy() const { DARABONBA_PTR_GET_CONST(multiAvailablePolicy_, ScalingGroupConfig::MultiAvailablePolicy) };
    inline ScalingGroupConfig::MultiAvailablePolicy getMultiAvailablePolicy() { DARABONBA_PTR_GET(multiAvailablePolicy_, ScalingGroupConfig::MultiAvailablePolicy) };
    inline ScalingGroupConfig& setMultiAvailablePolicy(const ScalingGroupConfig::MultiAvailablePolicy & multiAvailablePolicy) { DARABONBA_PTR_SET_VALUE(multiAvailablePolicy_, multiAvailablePolicy) };
    inline ScalingGroupConfig& setMultiAvailablePolicy(ScalingGroupConfig::MultiAvailablePolicy && multiAvailablePolicy) { DARABONBA_PTR_SET_RVALUE(multiAvailablePolicy_, multiAvailablePolicy) };


    // nodeOfflinePolicy Field Functions 
    bool hasNodeOfflinePolicy() const { return this->nodeOfflinePolicy_ != nullptr;};
    void deleteNodeOfflinePolicy() { this->nodeOfflinePolicy_ = nullptr;};
    inline const ScalingGroupConfig::NodeOfflinePolicy & getNodeOfflinePolicy() const { DARABONBA_PTR_GET_CONST(nodeOfflinePolicy_, ScalingGroupConfig::NodeOfflinePolicy) };
    inline ScalingGroupConfig::NodeOfflinePolicy getNodeOfflinePolicy() { DARABONBA_PTR_GET(nodeOfflinePolicy_, ScalingGroupConfig::NodeOfflinePolicy) };
    inline ScalingGroupConfig& setNodeOfflinePolicy(const ScalingGroupConfig::NodeOfflinePolicy & nodeOfflinePolicy) { DARABONBA_PTR_SET_VALUE(nodeOfflinePolicy_, nodeOfflinePolicy) };
    inline ScalingGroupConfig& setNodeOfflinePolicy(ScalingGroupConfig::NodeOfflinePolicy && nodeOfflinePolicy) { DARABONBA_PTR_SET_RVALUE(nodeOfflinePolicy_, nodeOfflinePolicy) };


    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const ScalingGroupConfig::PrivatePoolOptions & getPrivatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, ScalingGroupConfig::PrivatePoolOptions) };
    inline ScalingGroupConfig::PrivatePoolOptions getPrivatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, ScalingGroupConfig::PrivatePoolOptions) };
    inline ScalingGroupConfig& setPrivatePoolOptions(const ScalingGroupConfig::PrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline ScalingGroupConfig& setPrivatePoolOptions(ScalingGroupConfig::PrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // scalingMaxSize Field Functions 
    bool hasScalingMaxSize() const { return this->scalingMaxSize_ != nullptr;};
    void deleteScalingMaxSize() { this->scalingMaxSize_ = nullptr;};
    inline int32_t getScalingMaxSize() const { DARABONBA_PTR_GET_DEFAULT(scalingMaxSize_, 0) };
    inline ScalingGroupConfig& setScalingMaxSize(int32_t scalingMaxSize) { DARABONBA_PTR_SET_VALUE(scalingMaxSize_, scalingMaxSize) };


    // scalingMinSize Field Functions 
    bool hasScalingMinSize() const { return this->scalingMinSize_ != nullptr;};
    void deleteScalingMinSize() { this->scalingMinSize_ = nullptr;};
    inline int32_t getScalingMinSize() const { DARABONBA_PTR_GET_DEFAULT(scalingMinSize_, 0) };
    inline ScalingGroupConfig& setScalingMinSize(int32_t scalingMinSize) { DARABONBA_PTR_SET_VALUE(scalingMinSize_, scalingMinSize) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline ScalingGroupConfig& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // sysDiskCategory Field Functions 
    bool hasSysDiskCategory() const { return this->sysDiskCategory_ != nullptr;};
    void deleteSysDiskCategory() { this->sysDiskCategory_ = nullptr;};
    inline string getSysDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(sysDiskCategory_, "") };
    inline ScalingGroupConfig& setSysDiskCategory(string sysDiskCategory) { DARABONBA_PTR_SET_VALUE(sysDiskCategory_, sysDiskCategory) };


    // sysDiskSize Field Functions 
    bool hasSysDiskSize() const { return this->sysDiskSize_ != nullptr;};
    void deleteSysDiskSize() { this->sysDiskSize_ = nullptr;};
    inline int64_t getSysDiskSize() const { DARABONBA_PTR_GET_DEFAULT(sysDiskSize_, 0L) };
    inline ScalingGroupConfig& setSysDiskSize(int64_t sysDiskSize) { DARABONBA_PTR_SET_VALUE(sysDiskSize_, sysDiskSize) };


    // triggerMode Field Functions 
    bool hasTriggerMode() const { return this->triggerMode_ != nullptr;};
    void deleteTriggerMode() { this->triggerMode_ = nullptr;};
    inline string getTriggerMode() const { DARABONBA_PTR_GET_DEFAULT(triggerMode_, "") };
    inline ScalingGroupConfig& setTriggerMode(string triggerMode) { DARABONBA_PTR_SET_VALUE(triggerMode_, triggerMode) };


  protected:
    // 数据盘类型。
    shared_ptr<string> dataDiskCategory_ {};
    // 数据盘个数。
    shared_ptr<int32_t> dataDiskCount_ {};
    // 数据盘大小,单位GB。
    shared_ptr<int64_t> dataDiskSize_ {};
    // 默认冷却时间。
    shared_ptr<int64_t> defaultCoolDownTime_ {};
    // 抢占实例列表。
    shared_ptr<vector<ScalingGroupConfig::InstanceTypeList>> instanceTypeList_ {};
    // 资源可用性策略(成本优化参数)。
    shared_ptr<ScalingGroupConfig::MultiAvailablePolicy> multiAvailablePolicy_ {};
    // 节点下线策略。
    shared_ptr<ScalingGroupConfig::NodeOfflinePolicy> nodeOfflinePolicy_ {};
    // 私有池选项	。
    shared_ptr<ScalingGroupConfig::PrivatePoolOptions> privatePoolOptions_ {};
    // 伸缩组节点最大个数。
    shared_ptr<int32_t> scalingMaxSize_ {};
    // 伸缩组节点最小个数。
    shared_ptr<int32_t> scalingMinSize_ {};
    // 抢占式Spot实例策略。
    shared_ptr<string> spotStrategy_ {};
    // 系统盘类型。
    shared_ptr<string> sysDiskCategory_ {};
    // 系统盘大小,单位GB。
    shared_ptr<int64_t> sysDiskSize_ {};
    // 伸缩活动触发模式。
    shared_ptr<string> triggerMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif

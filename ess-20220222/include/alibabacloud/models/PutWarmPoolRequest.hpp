// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTWARMPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTWARMPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class PutWarmPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutWarmPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CapacityOptions, capacityOptions_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceReusePolicy, instanceReusePolicy_);
      DARABONBA_PTR_TO_JSON(PoolState, poolState_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, PutWarmPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CapacityOptions, capacityOptions_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceReusePolicy, instanceReusePolicy_);
      DARABONBA_PTR_FROM_JSON(PoolState, poolState_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    PutWarmPoolRequest() = default ;
    PutWarmPoolRequest(const PutWarmPoolRequest &) = default ;
    PutWarmPoolRequest(PutWarmPoolRequest &&) = default ;
    PutWarmPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutWarmPoolRequest() = default ;
    PutWarmPoolRequest& operator=(const PutWarmPoolRequest &) = default ;
    PutWarmPoolRequest& operator=(PutWarmPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceReusePolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceReusePolicy& obj) { 
        DARABONBA_PTR_TO_JSON(ReuseOnScaleIn, reuseOnScaleIn_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceReusePolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(ReuseOnScaleIn, reuseOnScaleIn_);
      };
      InstanceReusePolicy() = default ;
      InstanceReusePolicy(const InstanceReusePolicy &) = default ;
      InstanceReusePolicy(InstanceReusePolicy &&) = default ;
      InstanceReusePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceReusePolicy() = default ;
      InstanceReusePolicy& operator=(const InstanceReusePolicy &) = default ;
      InstanceReusePolicy& operator=(InstanceReusePolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->reuseOnScaleIn_ == nullptr; };
      // reuseOnScaleIn Field Functions 
      bool hasReuseOnScaleIn() const { return this->reuseOnScaleIn_ != nullptr;};
      void deleteReuseOnScaleIn() { this->reuseOnScaleIn_ = nullptr;};
      inline bool getReuseOnScaleIn() const { DARABONBA_PTR_GET_DEFAULT(reuseOnScaleIn_, false) };
      inline InstanceReusePolicy& setReuseOnScaleIn(bool reuseOnScaleIn) { DARABONBA_PTR_SET_VALUE(reuseOnScaleIn_, reuseOnScaleIn) };


    protected:
      // Specifies whether instances are reclaimed to the warm pool when the scaling group scales in. Valid values:
      // 
      // - true: Instances are reclaimed to the warm pool.
      // - false: Instances are not reclaimed to the warm pool.
      // 
      // Default value: false.
      shared_ptr<bool> reuseOnScaleIn_ {};
    };

    class CapacityOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CapacityOptions& obj) { 
        DARABONBA_PTR_TO_JSON(DesiredGroupPreparedCapacity, desiredGroupPreparedCapacity_);
        DARABONBA_PTR_TO_JSON(MinCapacity, minCapacity_);
      };
      friend void from_json(const Darabonba::Json& j, CapacityOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(DesiredGroupPreparedCapacity, desiredGroupPreparedCapacity_);
        DARABONBA_PTR_FROM_JSON(MinCapacity, minCapacity_);
      };
      CapacityOptions() = default ;
      CapacityOptions(const CapacityOptions &) = default ;
      CapacityOptions(CapacityOptions &&) = default ;
      CapacityOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CapacityOptions() = default ;
      CapacityOptions& operator=(const CapacityOptions &) = default ;
      CapacityOptions& operator=(CapacityOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desiredGroupPreparedCapacity_ == nullptr
        && this->minCapacity_ == nullptr; };
      // desiredGroupPreparedCapacity Field Functions 
      bool hasDesiredGroupPreparedCapacity() const { return this->desiredGroupPreparedCapacity_ != nullptr;};
      void deleteDesiredGroupPreparedCapacity() { this->desiredGroupPreparedCapacity_ = nullptr;};
      inline int32_t getDesiredGroupPreparedCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredGroupPreparedCapacity_, 0) };
      inline CapacityOptions& setDesiredGroupPreparedCapacity(int32_t desiredGroupPreparedCapacity) { DARABONBA_PTR_SET_VALUE(desiredGroupPreparedCapacity_, desiredGroupPreparedCapacity) };


      // minCapacity Field Functions 
      bool hasMinCapacity() const { return this->minCapacity_ != nullptr;};
      void deleteMinCapacity() { this->minCapacity_ = nullptr;};
      inline int32_t getMinCapacity() const { DARABONBA_PTR_GET_DEFAULT(minCapacity_, 0) };
      inline CapacityOptions& setMinCapacity(int32_t minCapacity) { DARABONBA_PTR_SET_VALUE(minCapacity_, minCapacity) };


    protected:
      // The expected number of instances to be warmed. The system maintains the sum of the current number of instances in the scaling group and the number of instances in the warm pool at this value. Instances that exceed the current number of instances in the scaling group are scaled out into the warm pool in advance. When traffic peaks occur, instances can be quickly added from the warm pool, avoiding the wait time caused by creating instances on demand.
      // 
      // Default value: the maximum number of instances in the scaling group, which is specified by `MaxSize`.
      // > The value of `DesiredGroupPreparedCapacity` must be less than or equal to the maximum number of instances in the scaling group, which is specified by `MaxSize`.
      shared_ptr<int32_t> desiredGroupPreparedCapacity_ {};
      // The minimum number of instances in the warm pool. The system always keeps at least this number of warmed instances in the warm pool to ensure that instances can be quickly added from the warm pool during scale-out.
      // 
      // Default value: 0.
      // 
      // > The value of `MinCapacity` must be less than or equal to the value of `DesiredGroupPreparedCapacity`.
      shared_ptr<int32_t> minCapacity_ {};
    };

    virtual bool empty() const override { return this->capacityOptions_ == nullptr
        && this->clientToken_ == nullptr && this->instanceReusePolicy_ == nullptr && this->poolState_ == nullptr && this->regionId_ == nullptr && this->scalingGroupId_ == nullptr; };
    // capacityOptions Field Functions 
    bool hasCapacityOptions() const { return this->capacityOptions_ != nullptr;};
    void deleteCapacityOptions() { this->capacityOptions_ = nullptr;};
    inline const PutWarmPoolRequest::CapacityOptions & getCapacityOptions() const { DARABONBA_PTR_GET_CONST(capacityOptions_, PutWarmPoolRequest::CapacityOptions) };
    inline PutWarmPoolRequest::CapacityOptions getCapacityOptions() { DARABONBA_PTR_GET(capacityOptions_, PutWarmPoolRequest::CapacityOptions) };
    inline PutWarmPoolRequest& setCapacityOptions(const PutWarmPoolRequest::CapacityOptions & capacityOptions) { DARABONBA_PTR_SET_VALUE(capacityOptions_, capacityOptions) };
    inline PutWarmPoolRequest& setCapacityOptions(PutWarmPoolRequest::CapacityOptions && capacityOptions) { DARABONBA_PTR_SET_RVALUE(capacityOptions_, capacityOptions) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline PutWarmPoolRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceReusePolicy Field Functions 
    bool hasInstanceReusePolicy() const { return this->instanceReusePolicy_ != nullptr;};
    void deleteInstanceReusePolicy() { this->instanceReusePolicy_ = nullptr;};
    inline const PutWarmPoolRequest::InstanceReusePolicy & getInstanceReusePolicy() const { DARABONBA_PTR_GET_CONST(instanceReusePolicy_, PutWarmPoolRequest::InstanceReusePolicy) };
    inline PutWarmPoolRequest::InstanceReusePolicy getInstanceReusePolicy() { DARABONBA_PTR_GET(instanceReusePolicy_, PutWarmPoolRequest::InstanceReusePolicy) };
    inline PutWarmPoolRequest& setInstanceReusePolicy(const PutWarmPoolRequest::InstanceReusePolicy & instanceReusePolicy) { DARABONBA_PTR_SET_VALUE(instanceReusePolicy_, instanceReusePolicy) };
    inline PutWarmPoolRequest& setInstanceReusePolicy(PutWarmPoolRequest::InstanceReusePolicy && instanceReusePolicy) { DARABONBA_PTR_SET_RVALUE(instanceReusePolicy_, instanceReusePolicy) };


    // poolState Field Functions 
    bool hasPoolState() const { return this->poolState_ != nullptr;};
    void deletePoolState() { this->poolState_ = nullptr;};
    inline string getPoolState() const { DARABONBA_PTR_GET_DEFAULT(poolState_, "") };
    inline PutWarmPoolRequest& setPoolState(string poolState) { DARABONBA_PTR_SET_VALUE(poolState_, poolState) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutWarmPoolRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline PutWarmPoolRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The capacity options for the warm pool.
    shared_ptr<PutWarmPoolRequest::CapacityOptions> capacityOptions_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must ensure that it is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    shared_ptr<string> clientToken_ {};
    // The instance reclaim policy.
    shared_ptr<PutWarmPoolRequest::InstanceReusePolicy> instanceReusePolicy_ {};
    // The state of instances in the warm pool. Valid values:
    // 
    // - Running: The instances are in the running state. This state allows faster scale-out, but you are charged for the full cost of the instances.
    // - Stopped: The instances are in the economical mode. You are charged only for resources such as cloud disks, elastic IP addresses (EIPs), and snapshots of the instances. However, instance startup may fail during scale-out due to insufficient inventory.
    // 
    // Default value: Stopped.
    shared_ptr<string> poolState_ {};
    // The region ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COSTOPTIMIZEDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_COSTOPTIMIZEDCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class CostOptimizedConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CostOptimizedConfig& obj) { 
      DARABONBA_PTR_TO_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
      DARABONBA_PTR_TO_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
      DARABONBA_PTR_TO_JSON(SpotInstancePools, spotInstancePools_);
    };
    friend void from_json(const Darabonba::Json& j, CostOptimizedConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
      DARABONBA_PTR_FROM_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
      DARABONBA_PTR_FROM_JSON(SpotInstancePools, spotInstancePools_);
    };
    CostOptimizedConfig() = default ;
    CostOptimizedConfig(const CostOptimizedConfig &) = default ;
    CostOptimizedConfig(CostOptimizedConfig &&) = default ;
    CostOptimizedConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CostOptimizedConfig() = default ;
    CostOptimizedConfig& operator=(const CostOptimizedConfig &) = default ;
    CostOptimizedConfig& operator=(CostOptimizedConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->onDemandBaseCapacity_ != nullptr
        && this->onDemandPercentageAboveBaseCapacity_ != nullptr && this->spotInstancePools_ != nullptr; };
    // onDemandBaseCapacity Field Functions 
    bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
    void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
    inline int32_t onDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0) };
    inline CostOptimizedConfig& setOnDemandBaseCapacity(int32_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


    // onDemandPercentageAboveBaseCapacity Field Functions 
    bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
    void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
    inline int32_t onDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0) };
    inline CostOptimizedConfig& setOnDemandPercentageAboveBaseCapacity(int32_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


    // spotInstancePools Field Functions 
    bool hasSpotInstancePools() const { return this->spotInstancePools_ != nullptr;};
    void deleteSpotInstancePools() { this->spotInstancePools_ = nullptr;};
    inline int32_t spotInstancePools() const { DARABONBA_PTR_GET_DEFAULT(spotInstancePools_, 0) };
    inline CostOptimizedConfig& setSpotInstancePools(int32_t spotInstancePools) { DARABONBA_PTR_SET_VALUE(spotInstancePools_, spotInstancePools) };


  protected:
    // 按量实例个数的最小值。节点组所需要按量实例个数的最小值，取值范围：0~1000。当按量实例个数少于该值时，将优先创建按量实例。
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> onDemandBaseCapacity_ = nullptr;
    // 节点组满足最小按量实例OnDemandBaseCapacity要求后，超出的实例中按量实例应占的比例，取值范围：0～100。
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ = nullptr;
    // 指定可用实例规格的个数，伸缩组将按成本最低的多个规格均衡创建抢占式实例。取值范围：0~10。
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> spotInstancePools_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTSCALINGGROUPSPOTPRICELIMIT_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTSCALINGGROUPSPOTPRICELIMIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit& obj) { 
      DARABONBA_PTR_TO_JSON(instance_type, instanceType_);
      DARABONBA_PTR_TO_JSON(price_limit, priceLimit_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit& obj) { 
      DARABONBA_PTR_FROM_JSON(instance_type, instanceType_);
      DARABONBA_PTR_FROM_JSON(price_limit, priceLimit_);
    };
    ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit() = default ;
    ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit(const ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit &) = default ;
    ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit(ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit &&) = default ;
    ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit() = default ;
    ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit& operator=(const ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit &) = default ;
    ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit& operator=(ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceType_ != nullptr
        && this->priceLimit_ != nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // priceLimit Field Functions 
    bool hasPriceLimit() const { return this->priceLimit_ != nullptr;};
    void deletePriceLimit() { this->priceLimit_ = nullptr;};
    inline string priceLimit() const { DARABONBA_PTR_GET_DEFAULT(priceLimit_, "") };
    inline ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit& setPriceLimit(string priceLimit) { DARABONBA_PTR_SET_VALUE(priceLimit_, priceLimit) };


  protected:
    // The instance type of preemptible instances.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The price cap of a preemptible instance.
    // 
    // Unit: USD/hour.
    std::shared_ptr<string> priceLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif

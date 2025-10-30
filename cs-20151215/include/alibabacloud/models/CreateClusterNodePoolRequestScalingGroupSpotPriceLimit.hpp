// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTSCALINGGROUPSPOTPRICELIMIT_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTSCALINGGROUPSPOTPRICELIMIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterNodePoolRequestScalingGroupSpotPriceLimit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterNodePoolRequestScalingGroupSpotPriceLimit& obj) { 
      DARABONBA_PTR_TO_JSON(instance_type, instanceType_);
      DARABONBA_PTR_TO_JSON(price_limit, priceLimit_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterNodePoolRequestScalingGroupSpotPriceLimit& obj) { 
      DARABONBA_PTR_FROM_JSON(instance_type, instanceType_);
      DARABONBA_PTR_FROM_JSON(price_limit, priceLimit_);
    };
    CreateClusterNodePoolRequestScalingGroupSpotPriceLimit() = default ;
    CreateClusterNodePoolRequestScalingGroupSpotPriceLimit(const CreateClusterNodePoolRequestScalingGroupSpotPriceLimit &) = default ;
    CreateClusterNodePoolRequestScalingGroupSpotPriceLimit(CreateClusterNodePoolRequestScalingGroupSpotPriceLimit &&) = default ;
    CreateClusterNodePoolRequestScalingGroupSpotPriceLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterNodePoolRequestScalingGroupSpotPriceLimit() = default ;
    CreateClusterNodePoolRequestScalingGroupSpotPriceLimit& operator=(const CreateClusterNodePoolRequestScalingGroupSpotPriceLimit &) = default ;
    CreateClusterNodePoolRequestScalingGroupSpotPriceLimit& operator=(CreateClusterNodePoolRequestScalingGroupSpotPriceLimit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceType_ == nullptr
        && return this->priceLimit_ == nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateClusterNodePoolRequestScalingGroupSpotPriceLimit& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // priceLimit Field Functions 
    bool hasPriceLimit() const { return this->priceLimit_ != nullptr;};
    void deletePriceLimit() { this->priceLimit_ = nullptr;};
    inline string priceLimit() const { DARABONBA_PTR_GET_DEFAULT(priceLimit_, "") };
    inline CreateClusterNodePoolRequestScalingGroupSpotPriceLimit& setPriceLimit(string priceLimit) { DARABONBA_PTR_SET_VALUE(priceLimit_, priceLimit) };


  protected:
    // The instance type of preemptible instances.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The price cap of a preemptible instance of the type.
    std::shared_ptr<string> priceLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOADBALANCERREQUESTRANDOMSTEERING_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOADBALANCERREQUESTRANDOMSTEERING_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateLoadBalancerRequestRandomSteering : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLoadBalancerRequestRandomSteering& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultWeight, defaultWeight_);
      DARABONBA_PTR_TO_JSON(PoolWeights, poolWeights_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLoadBalancerRequestRandomSteering& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultWeight, defaultWeight_);
      DARABONBA_PTR_FROM_JSON(PoolWeights, poolWeights_);
    };
    UpdateLoadBalancerRequestRandomSteering() = default ;
    UpdateLoadBalancerRequestRandomSteering(const UpdateLoadBalancerRequestRandomSteering &) = default ;
    UpdateLoadBalancerRequestRandomSteering(UpdateLoadBalancerRequestRandomSteering &&) = default ;
    UpdateLoadBalancerRequestRandomSteering(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLoadBalancerRequestRandomSteering() = default ;
    UpdateLoadBalancerRequestRandomSteering& operator=(const UpdateLoadBalancerRequestRandomSteering &) = default ;
    UpdateLoadBalancerRequestRandomSteering& operator=(UpdateLoadBalancerRequestRandomSteering &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultWeight_ != nullptr
        && this->poolWeights_ != nullptr; };
    // defaultWeight Field Functions 
    bool hasDefaultWeight() const { return this->defaultWeight_ != nullptr;};
    void deleteDefaultWeight() { this->defaultWeight_ = nullptr;};
    inline int32_t defaultWeight() const { DARABONBA_PTR_GET_DEFAULT(defaultWeight_, 0) };
    inline UpdateLoadBalancerRequestRandomSteering& setDefaultWeight(int32_t defaultWeight) { DARABONBA_PTR_SET_VALUE(defaultWeight_, defaultWeight) };


    // poolWeights Field Functions 
    bool hasPoolWeights() const { return this->poolWeights_ != nullptr;};
    void deletePoolWeights() { this->poolWeights_ = nullptr;};
    inline const map<string, int32_t> & poolWeights() const { DARABONBA_PTR_GET_CONST(poolWeights_, map<string, int32_t>) };
    inline map<string, int32_t> poolWeights() { DARABONBA_PTR_GET(poolWeights_, map<string, int32_t>) };
    inline UpdateLoadBalancerRequestRandomSteering& setPoolWeights(const map<string, int32_t> & poolWeights) { DARABONBA_PTR_SET_VALUE(poolWeights_, poolWeights) };
    inline UpdateLoadBalancerRequestRandomSteering& setPoolWeights(map<string, int32_t> && poolWeights) { DARABONBA_PTR_SET_RVALUE(poolWeights_, poolWeights) };


  protected:
    // Default round-robin weight, used for all pools that do not have a separately specified weight. Value range: integers between 0-100.
    std::shared_ptr<int32_t> defaultWeight_ = nullptr;
    // Weight configuration for each backend server pool, where the key is the pool ID and the value is the weight factor. The weight factor represents the proportion of relative traffic distribution.
    std::shared_ptr<map<string, int32_t>> poolWeights_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

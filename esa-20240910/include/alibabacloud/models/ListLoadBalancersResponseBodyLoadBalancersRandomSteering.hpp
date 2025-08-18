// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERSRANDOMSTEERING_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERSRANDOMSTEERING_HPP_
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
  class ListLoadBalancersResponseBodyLoadBalancersRandomSteering : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancersResponseBodyLoadBalancersRandomSteering& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultWeight, defaultWeight_);
      DARABONBA_PTR_TO_JSON(PoolWeights, poolWeights_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancersResponseBodyLoadBalancersRandomSteering& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultWeight, defaultWeight_);
      DARABONBA_PTR_FROM_JSON(PoolWeights, poolWeights_);
    };
    ListLoadBalancersResponseBodyLoadBalancersRandomSteering() = default ;
    ListLoadBalancersResponseBodyLoadBalancersRandomSteering(const ListLoadBalancersResponseBodyLoadBalancersRandomSteering &) = default ;
    ListLoadBalancersResponseBodyLoadBalancersRandomSteering(ListLoadBalancersResponseBodyLoadBalancersRandomSteering &&) = default ;
    ListLoadBalancersResponseBodyLoadBalancersRandomSteering(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancersResponseBodyLoadBalancersRandomSteering() = default ;
    ListLoadBalancersResponseBodyLoadBalancersRandomSteering& operator=(const ListLoadBalancersResponseBodyLoadBalancersRandomSteering &) = default ;
    ListLoadBalancersResponseBodyLoadBalancersRandomSteering& operator=(ListLoadBalancersResponseBodyLoadBalancersRandomSteering &&) = default ;
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
    inline ListLoadBalancersResponseBodyLoadBalancersRandomSteering& setDefaultWeight(int32_t defaultWeight) { DARABONBA_PTR_SET_VALUE(defaultWeight_, defaultWeight) };


    // poolWeights Field Functions 
    bool hasPoolWeights() const { return this->poolWeights_ != nullptr;};
    void deletePoolWeights() { this->poolWeights_ = nullptr;};
    inline const map<string, int32_t> & poolWeights() const { DARABONBA_PTR_GET_CONST(poolWeights_, map<string, int32_t>) };
    inline map<string, int32_t> poolWeights() { DARABONBA_PTR_GET(poolWeights_, map<string, int32_t>) };
    inline ListLoadBalancersResponseBodyLoadBalancersRandomSteering& setPoolWeights(const map<string, int32_t> & poolWeights) { DARABONBA_PTR_SET_VALUE(poolWeights_, poolWeights) };
    inline ListLoadBalancersResponseBodyLoadBalancersRandomSteering& setPoolWeights(map<string, int32_t> && poolWeights) { DARABONBA_PTR_SET_RVALUE(poolWeights_, poolWeights) };


  protected:
    // Weight configuration for each backend server pool, where the key is the pool ID and the value is the weight coefficient. The weight coefficient represents the proportion of relative traffic distribution.
    std::shared_ptr<int32_t> defaultWeight_ = nullptr;
    // Weight configuration for each backend server pool, where the key is the pool ID and the value is the weight coefficient.
    std::shared_ptr<map<string, int32_t>> poolWeights_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEDICATEDHOSTSCHARGETYPERESPONSEBODYFEEOFINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEDICATEDHOSTSCHARGETYPERESPONSEBODYFEEOFINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances& obj) { 
      DARABONBA_PTR_TO_JSON(FeeOfInstance, feeOfInstance_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(FeeOfInstance, feeOfInstance_);
    };
    ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances() = default ;
    ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances(const ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances &) = default ;
    ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances(ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances &&) = default ;
    ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances() = default ;
    ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances& operator=(const ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances &) = default ;
    ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances& operator=(ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->feeOfInstance_ == nullptr; };
    // feeOfInstance Field Functions 
    bool hasFeeOfInstance() const { return this->feeOfInstance_ != nullptr;};
    void deleteFeeOfInstance() { this->feeOfInstance_ = nullptr;};
    inline const vector<Models::ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance> & feeOfInstance() const { DARABONBA_PTR_GET_CONST(feeOfInstance_, vector<Models::ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance>) };
    inline vector<Models::ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance> feeOfInstance() { DARABONBA_PTR_GET(feeOfInstance_, vector<Models::ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance>) };
    inline ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances& setFeeOfInstance(const vector<Models::ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance> & feeOfInstance) { DARABONBA_PTR_SET_VALUE(feeOfInstance_, feeOfInstance) };
    inline ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances& setFeeOfInstance(vector<Models::ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance> && feeOfInstance) { DARABONBA_PTR_SET_RVALUE(feeOfInstance_, feeOfInstance) };


  protected:
    std::shared_ptr<vector<Models::ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance>> feeOfInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCECHARGETYPERESPONSEBODYFEEOFINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCECHARGETYPERESPONSEBODYFEEOFINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInstanceChargeTypeResponseBodyFeeOfInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceChargeTypeResponseBodyFeeOfInstances& obj) { 
      DARABONBA_PTR_TO_JSON(FeeOfInstance, feeOfInstance_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceChargeTypeResponseBodyFeeOfInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(FeeOfInstance, feeOfInstance_);
    };
    ModifyInstanceChargeTypeResponseBodyFeeOfInstances() = default ;
    ModifyInstanceChargeTypeResponseBodyFeeOfInstances(const ModifyInstanceChargeTypeResponseBodyFeeOfInstances &) = default ;
    ModifyInstanceChargeTypeResponseBodyFeeOfInstances(ModifyInstanceChargeTypeResponseBodyFeeOfInstances &&) = default ;
    ModifyInstanceChargeTypeResponseBodyFeeOfInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceChargeTypeResponseBodyFeeOfInstances() = default ;
    ModifyInstanceChargeTypeResponseBodyFeeOfInstances& operator=(const ModifyInstanceChargeTypeResponseBodyFeeOfInstances &) = default ;
    ModifyInstanceChargeTypeResponseBodyFeeOfInstances& operator=(ModifyInstanceChargeTypeResponseBodyFeeOfInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->feeOfInstance_ == nullptr; };
    // feeOfInstance Field Functions 
    bool hasFeeOfInstance() const { return this->feeOfInstance_ != nullptr;};
    void deleteFeeOfInstance() { this->feeOfInstance_ = nullptr;};
    inline const vector<Models::ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance> & feeOfInstance() const { DARABONBA_PTR_GET_CONST(feeOfInstance_, vector<Models::ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance>) };
    inline vector<Models::ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance> feeOfInstance() { DARABONBA_PTR_GET(feeOfInstance_, vector<Models::ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance>) };
    inline ModifyInstanceChargeTypeResponseBodyFeeOfInstances& setFeeOfInstance(const vector<Models::ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance> & feeOfInstance) { DARABONBA_PTR_SET_VALUE(feeOfInstance_, feeOfInstance) };
    inline ModifyInstanceChargeTypeResponseBodyFeeOfInstances& setFeeOfInstance(vector<Models::ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance> && feeOfInstance) { DARABONBA_PTR_SET_RVALUE(feeOfInstance_, feeOfInstance) };


  protected:
    std::shared_ptr<vector<Models::ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance>> feeOfInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

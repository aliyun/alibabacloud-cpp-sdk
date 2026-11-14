// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWARMPOOLINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWARMPOOLINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WarmPoolCapacityPolicyInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class UpdateWarmPoolInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWarmPoolInput& obj) { 
      DARABONBA_PTR_TO_JSON(capacityPolicy, capacityPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWarmPoolInput& obj) { 
      DARABONBA_PTR_FROM_JSON(capacityPolicy, capacityPolicy_);
    };
    UpdateWarmPoolInput() = default ;
    UpdateWarmPoolInput(const UpdateWarmPoolInput &) = default ;
    UpdateWarmPoolInput(UpdateWarmPoolInput &&) = default ;
    UpdateWarmPoolInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWarmPoolInput() = default ;
    UpdateWarmPoolInput& operator=(const UpdateWarmPoolInput &) = default ;
    UpdateWarmPoolInput& operator=(UpdateWarmPoolInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacityPolicy_ == nullptr; };
    // capacityPolicy Field Functions 
    bool hasCapacityPolicy() const { return this->capacityPolicy_ != nullptr;};
    void deleteCapacityPolicy() { this->capacityPolicy_ = nullptr;};
    inline const WarmPoolCapacityPolicyInput & getCapacityPolicy() const { DARABONBA_PTR_GET_CONST(capacityPolicy_, WarmPoolCapacityPolicyInput) };
    inline WarmPoolCapacityPolicyInput getCapacityPolicy() { DARABONBA_PTR_GET(capacityPolicy_, WarmPoolCapacityPolicyInput) };
    inline UpdateWarmPoolInput& setCapacityPolicy(const WarmPoolCapacityPolicyInput & capacityPolicy) { DARABONBA_PTR_SET_VALUE(capacityPolicy_, capacityPolicy) };
    inline UpdateWarmPoolInput& setCapacityPolicy(WarmPoolCapacityPolicyInput && capacityPolicy) { DARABONBA_PTR_SET_RVALUE(capacityPolicy_, capacityPolicy) };


  protected:
    // The warm pool capacity policy, which includes the base target capacity and optional scheduled rules.
    // 
    // This parameter is required.
    shared_ptr<WarmPoolCapacityPolicyInput> capacityPolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif

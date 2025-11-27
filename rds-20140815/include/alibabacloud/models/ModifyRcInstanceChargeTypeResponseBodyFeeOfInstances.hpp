// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRCINSTANCECHARGETYPERESPONSEBODYFEEOFINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRCINSTANCECHARGETYPERESPONSEBODYFEEOFINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(Fee, fee_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(Fee, fee_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances() = default ;
    ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances(const ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances &) = default ;
    ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances(ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances &&) = default ;
    ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances() = default ;
    ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances& operator=(const ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances &) = default ;
    ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances& operator=(ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currency_ == nullptr
        && return this->fee_ == nullptr && return this->instanceId_ == nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // fee Field Functions 
    bool hasFee() const { return this->fee_ != nullptr;};
    void deleteFee() { this->fee_ = nullptr;};
    inline string fee() const { DARABONBA_PTR_GET_DEFAULT(fee_, "") };
    inline ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances& setFee(string fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> currency_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> fee_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

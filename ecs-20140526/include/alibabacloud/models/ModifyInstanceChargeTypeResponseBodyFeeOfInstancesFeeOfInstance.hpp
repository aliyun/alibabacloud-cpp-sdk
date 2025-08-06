// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCECHARGETYPERESPONSEBODYFEEOFINSTANCESFEEOFINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCECHARGETYPERESPONSEBODYFEEOFINSTANCESFEEOFINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(Fee, fee_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(Fee, fee_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance() = default ;
    ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance(const ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance &) = default ;
    ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance(ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance &&) = default ;
    ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance() = default ;
    ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance& operator=(const ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance &) = default ;
    ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance& operator=(ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currency_ != nullptr
        && this->fee_ != nullptr && this->instanceId_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // fee Field Functions 
    bool hasFee() const { return this->fee_ != nullptr;};
    void deleteFee() { this->fee_ = nullptr;};
    inline string fee() const { DARABONBA_PTR_GET_DEFAULT(fee_, "") };
    inline ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance& setFee(string fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceChargeTypeResponseBodyFeeOfInstancesFeeOfInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The unit of currency for the bill.
    // 
    // Alibaba Cloud China site (aliyun.com): CNY.
    // 
    // Alibaba Cloud International site (alibabacloud.com): USD.
    std::shared_ptr<string> currency_ = nullptr;
    // The cost value.
    std::shared_ptr<string> fee_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

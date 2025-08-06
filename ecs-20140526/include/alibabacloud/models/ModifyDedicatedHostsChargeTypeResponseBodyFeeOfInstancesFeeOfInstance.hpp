// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEDICATEDHOSTSCHARGETYPERESPONSEBODYFEEOFINSTANCESFEEOFINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEDICATEDHOSTSCHARGETYPERESPONSEBODYFEEOFINSTANCESFEEOFINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(Fee, fee_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(Fee, fee_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance() = default ;
    ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance(const ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance &) = default ;
    ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance(ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance &&) = default ;
    ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance() = default ;
    ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance& operator=(const ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance &) = default ;
    ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance& operator=(ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance &&) = default ;
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
    inline ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // fee Field Functions 
    bool hasFee() const { return this->fee_ != nullptr;};
    void deleteFee() { this->fee_ = nullptr;};
    inline string fee() const { DARABONBA_PTR_GET_DEFAULT(fee_, "") };
    inline ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance& setFee(string fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstancesFeeOfInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The unit of currency for the bill.
    // 
    // Alibaba Cloud China site (aliyun.com): CNY
    // 
    // Alibaba Cloud International site (alibabacloud.com): USD
    std::shared_ptr<string> currency_ = nullptr;
    // The charged amount.
    std::shared_ptr<string> fee_ = nullptr;
    // The IDs of the dedicated hosts.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

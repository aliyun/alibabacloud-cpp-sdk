// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMULTIORDERSHRINKREQUESTORDERITEMS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMULTIORDERSHRINKREQUESTORDERITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMultiOrderShrinkRequestOrderItemsComponents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class CreateMultiOrderShrinkRequestOrderItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMultiOrderShrinkRequestOrderItems& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BuyChange, buyChange_);
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMultiOrderShrinkRequestOrderItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BuyChange, buyChange_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    CreateMultiOrderShrinkRequestOrderItems() = default ;
    CreateMultiOrderShrinkRequestOrderItems(const CreateMultiOrderShrinkRequestOrderItems &) = default ;
    CreateMultiOrderShrinkRequestOrderItems(CreateMultiOrderShrinkRequestOrderItems &&) = default ;
    CreateMultiOrderShrinkRequestOrderItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMultiOrderShrinkRequestOrderItems() = default ;
    CreateMultiOrderShrinkRequestOrderItems& operator=(const CreateMultiOrderShrinkRequestOrderItems &) = default ;
    CreateMultiOrderShrinkRequestOrderItems& operator=(CreateMultiOrderShrinkRequestOrderItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->autoPay_ != nullptr && this->autoRenew_ != nullptr && this->buyChange_ != nullptr && this->components_ != nullptr && this->period_ != nullptr
        && this->periodUnit_ != nullptr && this->promotionId_ != nullptr && this->resourceIds_ != nullptr && this->resourceType_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateMultiOrderShrinkRequestOrderItems& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateMultiOrderShrinkRequestOrderItems& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateMultiOrderShrinkRequestOrderItems& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // buyChange Field Functions 
    bool hasBuyChange() const { return this->buyChange_ != nullptr;};
    void deleteBuyChange() { this->buyChange_ = nullptr;};
    inline bool buyChange() const { DARABONBA_PTR_GET_DEFAULT(buyChange_, false) };
    inline CreateMultiOrderShrinkRequestOrderItems& setBuyChange(bool buyChange) { DARABONBA_PTR_SET_VALUE(buyChange_, buyChange) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<Models::CreateMultiOrderShrinkRequestOrderItemsComponents> & components() const { DARABONBA_PTR_GET_CONST(components_, vector<Models::CreateMultiOrderShrinkRequestOrderItemsComponents>) };
    inline vector<Models::CreateMultiOrderShrinkRequestOrderItemsComponents> components() { DARABONBA_PTR_GET(components_, vector<Models::CreateMultiOrderShrinkRequestOrderItemsComponents>) };
    inline CreateMultiOrderShrinkRequestOrderItems& setComponents(const vector<Models::CreateMultiOrderShrinkRequestOrderItemsComponents> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline CreateMultiOrderShrinkRequestOrderItems& setComponents(vector<Models::CreateMultiOrderShrinkRequestOrderItemsComponents> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateMultiOrderShrinkRequestOrderItems& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateMultiOrderShrinkRequestOrderItems& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateMultiOrderShrinkRequestOrderItems& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & resourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> resourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline CreateMultiOrderShrinkRequestOrderItems& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline CreateMultiOrderShrinkRequestOrderItems& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateMultiOrderShrinkRequestOrderItems& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<int32_t> amount_ = nullptr;
    std::shared_ptr<bool> autoPay_ = nullptr;
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<bool> buyChange_ = nullptr;
    std::shared_ptr<vector<Models::CreateMultiOrderShrinkRequestOrderItemsComponents>> components_ = nullptr;
    std::shared_ptr<int32_t> period_ = nullptr;
    std::shared_ptr<string> periodUnit_ = nullptr;
    std::shared_ptr<string> promotionId_ = nullptr;
    std::shared_ptr<vector<string>> resourceIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDGEMOBILEAGENTPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDGEMOBILEAGENTPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateEdgeMobileAgentPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEdgeMobileAgentPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeviceClass, deviceClass_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEdgeMobileAgentPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeviceClass, deviceClass_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
    };
    CreateEdgeMobileAgentPackageRequest() = default ;
    CreateEdgeMobileAgentPackageRequest(const CreateEdgeMobileAgentPackageRequest &) = default ;
    CreateEdgeMobileAgentPackageRequest(CreateEdgeMobileAgentPackageRequest &&) = default ;
    CreateEdgeMobileAgentPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEdgeMobileAgentPackageRequest() = default ;
    CreateEdgeMobileAgentPackageRequest& operator=(const CreateEdgeMobileAgentPackageRequest &) = default ;
    CreateEdgeMobileAgentPackageRequest& operator=(CreateEdgeMobileAgentPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->bizRegionId_ == nullptr && this->clientToken_ == nullptr && this->deviceClass_ == nullptr && this->period_ == nullptr
        && this->periodUnit_ == nullptr && this->promotionId_ == nullptr && this->quantity_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateEdgeMobileAgentPackageRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateEdgeMobileAgentPackageRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline CreateEdgeMobileAgentPackageRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEdgeMobileAgentPackageRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deviceClass Field Functions 
    bool hasDeviceClass() const { return this->deviceClass_ != nullptr;};
    void deleteDeviceClass() { this->deviceClass_ = nullptr;};
    inline string getDeviceClass() const { DARABONBA_PTR_GET_DEFAULT(deviceClass_, "") };
    inline CreateEdgeMobileAgentPackageRequest& setDeviceClass(string deviceClass) { DARABONBA_PTR_SET_VALUE(deviceClass_, deviceClass) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateEdgeMobileAgentPackageRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateEdgeMobileAgentPackageRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateEdgeMobileAgentPackageRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline CreateEdgeMobileAgentPackageRequest& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


  protected:
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // - **true**: enables automatic payment. Make sure that your account balance is sufficient.
    // - **false** (default): generates the order without charging the account.
    // 
    // 
    // 
    // 
    // > If your payment method has an insufficient balance, set this parameter to false. An unpaid order is generated. You can then log on to the Cloud Phone console to complete the payment.
    // >
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal. Valid values:
    // 
    // * **true**: enables auto-renewal.
    // * **false** (default): disables auto-renewal.
    shared_ptr<bool> autoRenew_ {};
    // The region where the agent is located.
    // 
    // This parameter is required.
    shared_ptr<string> bizRegionId_ {};
    // The idempotency token.
    shared_ptr<string> clientToken_ {};
    // The device form factor.
    shared_ptr<string> deviceClass_ {};
    // The subscription duration of the resource. The unit is specified by PeriodUnit.
    // 
    // This parameter is required.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription duration. Valid values:
    // 
    // - **Month**: month.
    // - **Year**: year.
    // 
    // This parameter is required.
    shared_ptr<string> periodUnit_ {};
    // The ID of the promotional activity.
    shared_ptr<string> promotionId_ {};
    // The number of packages.
    // 
    // This parameter is required.
    shared_ptr<int32_t> quantity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif

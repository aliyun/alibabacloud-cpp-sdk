// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRCDISKCHARGETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRCDISKCHARGETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyRCDiskChargeTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRCDiskChargeTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRCDiskChargeTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyRCDiskChargeTypeRequest() = default ;
    ModifyRCDiskChargeTypeRequest(const ModifyRCDiskChargeTypeRequest &) = default ;
    ModifyRCDiskChargeTypeRequest(ModifyRCDiskChargeTypeRequest &&) = default ;
    ModifyRCDiskChargeTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRCDiskChargeTypeRequest() = default ;
    ModifyRCDiskChargeTypeRequest& operator=(const ModifyRCDiskChargeTypeRequest &) = default ;
    ModifyRCDiskChargeTypeRequest& operator=(ModifyRCDiskChargeTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && return this->autoUseCoupon_ == nullptr && return this->businessInfo_ == nullptr && return this->clientToken_ == nullptr && return this->instanceId_ == nullptr && return this->payType_ == nullptr
        && return this->promotionCode_ == nullptr && return this->regionId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline ModifyRCDiskChargeTypeRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool autoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline ModifyRCDiskChargeTypeRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string businessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline ModifyRCDiskChargeTypeRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyRCDiskChargeTypeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyRCDiskChargeTypeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline ModifyRCDiskChargeTypeRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string promotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline ModifyRCDiskChargeTypeRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRCDiskChargeTypeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> autoRenew_ = nullptr;
    std::shared_ptr<bool> autoUseCoupon_ = nullptr;
    std::shared_ptr<string> businessInfo_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> promotionCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMARTACCESSGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESMARTACCESSGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class CreateSmartAccessGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmartAccessGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlreadyHaveSag, alreadyHaveSag_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(BuyerMessage, buyerMessage_);
      DARABONBA_PTR_TO_JSON(CPEVersion, CPEVersion_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HaType, haType_);
      DARABONBA_PTR_TO_JSON(HardWareSpec, hardWareSpec_);
      DARABONBA_PTR_TO_JSON(MaxBandWidth, maxBandWidth_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(ReceiverAddress, receiverAddress_);
      DARABONBA_PTR_TO_JSON(ReceiverCity, receiverCity_);
      DARABONBA_PTR_TO_JSON(ReceiverCountry, receiverCountry_);
      DARABONBA_PTR_TO_JSON(ReceiverDistrict, receiverDistrict_);
      DARABONBA_PTR_TO_JSON(ReceiverEmail, receiverEmail_);
      DARABONBA_PTR_TO_JSON(ReceiverMobile, receiverMobile_);
      DARABONBA_PTR_TO_JSON(ReceiverName, receiverName_);
      DARABONBA_PTR_TO_JSON(ReceiverPhone, receiverPhone_);
      DARABONBA_PTR_TO_JSON(ReceiverState, receiverState_);
      DARABONBA_PTR_TO_JSON(ReceiverTown, receiverTown_);
      DARABONBA_PTR_TO_JSON(ReceiverZip, receiverZip_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmartAccessGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlreadyHaveSag, alreadyHaveSag_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(BuyerMessage, buyerMessage_);
      DARABONBA_PTR_FROM_JSON(CPEVersion, CPEVersion_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HaType, haType_);
      DARABONBA_PTR_FROM_JSON(HardWareSpec, hardWareSpec_);
      DARABONBA_PTR_FROM_JSON(MaxBandWidth, maxBandWidth_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(ReceiverAddress, receiverAddress_);
      DARABONBA_PTR_FROM_JSON(ReceiverCity, receiverCity_);
      DARABONBA_PTR_FROM_JSON(ReceiverCountry, receiverCountry_);
      DARABONBA_PTR_FROM_JSON(ReceiverDistrict, receiverDistrict_);
      DARABONBA_PTR_FROM_JSON(ReceiverEmail, receiverEmail_);
      DARABONBA_PTR_FROM_JSON(ReceiverMobile, receiverMobile_);
      DARABONBA_PTR_FROM_JSON(ReceiverName, receiverName_);
      DARABONBA_PTR_FROM_JSON(ReceiverPhone, receiverPhone_);
      DARABONBA_PTR_FROM_JSON(ReceiverState, receiverState_);
      DARABONBA_PTR_FROM_JSON(ReceiverTown, receiverTown_);
      DARABONBA_PTR_FROM_JSON(ReceiverZip, receiverZip_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateSmartAccessGatewayRequest() = default ;
    CreateSmartAccessGatewayRequest(const CreateSmartAccessGatewayRequest &) = default ;
    CreateSmartAccessGatewayRequest(CreateSmartAccessGatewayRequest &&) = default ;
    CreateSmartAccessGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmartAccessGatewayRequest() = default ;
    CreateSmartAccessGatewayRequest& operator=(const CreateSmartAccessGatewayRequest &) = default ;
    CreateSmartAccessGatewayRequest& operator=(CreateSmartAccessGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alreadyHaveSag_ == nullptr
        && this->autoPay_ == nullptr && this->buyerMessage_ == nullptr && this->CPEVersion_ == nullptr && this->chargeType_ == nullptr && this->description_ == nullptr
        && this->haType_ == nullptr && this->hardWareSpec_ == nullptr && this->maxBandWidth_ == nullptr && this->name_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->period_ == nullptr && this->receiverAddress_ == nullptr && this->receiverCity_ == nullptr && this->receiverCountry_ == nullptr
        && this->receiverDistrict_ == nullptr && this->receiverEmail_ == nullptr && this->receiverMobile_ == nullptr && this->receiverName_ == nullptr && this->receiverPhone_ == nullptr
        && this->receiverState_ == nullptr && this->receiverTown_ == nullptr && this->receiverZip_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // alreadyHaveSag Field Functions 
    bool hasAlreadyHaveSag() const { return this->alreadyHaveSag_ != nullptr;};
    void deleteAlreadyHaveSag() { this->alreadyHaveSag_ = nullptr;};
    inline bool getAlreadyHaveSag() const { DARABONBA_PTR_GET_DEFAULT(alreadyHaveSag_, false) };
    inline CreateSmartAccessGatewayRequest& setAlreadyHaveSag(bool alreadyHaveSag) { DARABONBA_PTR_SET_VALUE(alreadyHaveSag_, alreadyHaveSag) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateSmartAccessGatewayRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // buyerMessage Field Functions 
    bool hasBuyerMessage() const { return this->buyerMessage_ != nullptr;};
    void deleteBuyerMessage() { this->buyerMessage_ = nullptr;};
    inline string getBuyerMessage() const { DARABONBA_PTR_GET_DEFAULT(buyerMessage_, "") };
    inline CreateSmartAccessGatewayRequest& setBuyerMessage(string buyerMessage) { DARABONBA_PTR_SET_VALUE(buyerMessage_, buyerMessage) };


    // CPEVersion Field Functions 
    bool hasCPEVersion() const { return this->CPEVersion_ != nullptr;};
    void deleteCPEVersion() { this->CPEVersion_ = nullptr;};
    inline string getCPEVersion() const { DARABONBA_PTR_GET_DEFAULT(CPEVersion_, "") };
    inline CreateSmartAccessGatewayRequest& setCPEVersion(string CPEVersion) { DARABONBA_PTR_SET_VALUE(CPEVersion_, CPEVersion) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateSmartAccessGatewayRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSmartAccessGatewayRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // haType Field Functions 
    bool hasHaType() const { return this->haType_ != nullptr;};
    void deleteHaType() { this->haType_ = nullptr;};
    inline string getHaType() const { DARABONBA_PTR_GET_DEFAULT(haType_, "") };
    inline CreateSmartAccessGatewayRequest& setHaType(string haType) { DARABONBA_PTR_SET_VALUE(haType_, haType) };


    // hardWareSpec Field Functions 
    bool hasHardWareSpec() const { return this->hardWareSpec_ != nullptr;};
    void deleteHardWareSpec() { this->hardWareSpec_ = nullptr;};
    inline string getHardWareSpec() const { DARABONBA_PTR_GET_DEFAULT(hardWareSpec_, "") };
    inline CreateSmartAccessGatewayRequest& setHardWareSpec(string hardWareSpec) { DARABONBA_PTR_SET_VALUE(hardWareSpec_, hardWareSpec) };


    // maxBandWidth Field Functions 
    bool hasMaxBandWidth() const { return this->maxBandWidth_ != nullptr;};
    void deleteMaxBandWidth() { this->maxBandWidth_ = nullptr;};
    inline int32_t getMaxBandWidth() const { DARABONBA_PTR_GET_DEFAULT(maxBandWidth_, 0) };
    inline CreateSmartAccessGatewayRequest& setMaxBandWidth(int32_t maxBandWidth) { DARABONBA_PTR_SET_VALUE(maxBandWidth_, maxBandWidth) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSmartAccessGatewayRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateSmartAccessGatewayRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSmartAccessGatewayRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateSmartAccessGatewayRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // receiverAddress Field Functions 
    bool hasReceiverAddress() const { return this->receiverAddress_ != nullptr;};
    void deleteReceiverAddress() { this->receiverAddress_ = nullptr;};
    inline string getReceiverAddress() const { DARABONBA_PTR_GET_DEFAULT(receiverAddress_, "") };
    inline CreateSmartAccessGatewayRequest& setReceiverAddress(string receiverAddress) { DARABONBA_PTR_SET_VALUE(receiverAddress_, receiverAddress) };


    // receiverCity Field Functions 
    bool hasReceiverCity() const { return this->receiverCity_ != nullptr;};
    void deleteReceiverCity() { this->receiverCity_ = nullptr;};
    inline string getReceiverCity() const { DARABONBA_PTR_GET_DEFAULT(receiverCity_, "") };
    inline CreateSmartAccessGatewayRequest& setReceiverCity(string receiverCity) { DARABONBA_PTR_SET_VALUE(receiverCity_, receiverCity) };


    // receiverCountry Field Functions 
    bool hasReceiverCountry() const { return this->receiverCountry_ != nullptr;};
    void deleteReceiverCountry() { this->receiverCountry_ = nullptr;};
    inline string getReceiverCountry() const { DARABONBA_PTR_GET_DEFAULT(receiverCountry_, "") };
    inline CreateSmartAccessGatewayRequest& setReceiverCountry(string receiverCountry) { DARABONBA_PTR_SET_VALUE(receiverCountry_, receiverCountry) };


    // receiverDistrict Field Functions 
    bool hasReceiverDistrict() const { return this->receiverDistrict_ != nullptr;};
    void deleteReceiverDistrict() { this->receiverDistrict_ = nullptr;};
    inline string getReceiverDistrict() const { DARABONBA_PTR_GET_DEFAULT(receiverDistrict_, "") };
    inline CreateSmartAccessGatewayRequest& setReceiverDistrict(string receiverDistrict) { DARABONBA_PTR_SET_VALUE(receiverDistrict_, receiverDistrict) };


    // receiverEmail Field Functions 
    bool hasReceiverEmail() const { return this->receiverEmail_ != nullptr;};
    void deleteReceiverEmail() { this->receiverEmail_ = nullptr;};
    inline string getReceiverEmail() const { DARABONBA_PTR_GET_DEFAULT(receiverEmail_, "") };
    inline CreateSmartAccessGatewayRequest& setReceiverEmail(string receiverEmail) { DARABONBA_PTR_SET_VALUE(receiverEmail_, receiverEmail) };


    // receiverMobile Field Functions 
    bool hasReceiverMobile() const { return this->receiverMobile_ != nullptr;};
    void deleteReceiverMobile() { this->receiverMobile_ = nullptr;};
    inline string getReceiverMobile() const { DARABONBA_PTR_GET_DEFAULT(receiverMobile_, "") };
    inline CreateSmartAccessGatewayRequest& setReceiverMobile(string receiverMobile) { DARABONBA_PTR_SET_VALUE(receiverMobile_, receiverMobile) };


    // receiverName Field Functions 
    bool hasReceiverName() const { return this->receiverName_ != nullptr;};
    void deleteReceiverName() { this->receiverName_ = nullptr;};
    inline string getReceiverName() const { DARABONBA_PTR_GET_DEFAULT(receiverName_, "") };
    inline CreateSmartAccessGatewayRequest& setReceiverName(string receiverName) { DARABONBA_PTR_SET_VALUE(receiverName_, receiverName) };


    // receiverPhone Field Functions 
    bool hasReceiverPhone() const { return this->receiverPhone_ != nullptr;};
    void deleteReceiverPhone() { this->receiverPhone_ = nullptr;};
    inline string getReceiverPhone() const { DARABONBA_PTR_GET_DEFAULT(receiverPhone_, "") };
    inline CreateSmartAccessGatewayRequest& setReceiverPhone(string receiverPhone) { DARABONBA_PTR_SET_VALUE(receiverPhone_, receiverPhone) };


    // receiverState Field Functions 
    bool hasReceiverState() const { return this->receiverState_ != nullptr;};
    void deleteReceiverState() { this->receiverState_ = nullptr;};
    inline string getReceiverState() const { DARABONBA_PTR_GET_DEFAULT(receiverState_, "") };
    inline CreateSmartAccessGatewayRequest& setReceiverState(string receiverState) { DARABONBA_PTR_SET_VALUE(receiverState_, receiverState) };


    // receiverTown Field Functions 
    bool hasReceiverTown() const { return this->receiverTown_ != nullptr;};
    void deleteReceiverTown() { this->receiverTown_ = nullptr;};
    inline string getReceiverTown() const { DARABONBA_PTR_GET_DEFAULT(receiverTown_, "") };
    inline CreateSmartAccessGatewayRequest& setReceiverTown(string receiverTown) { DARABONBA_PTR_SET_VALUE(receiverTown_, receiverTown) };


    // receiverZip Field Functions 
    bool hasReceiverZip() const { return this->receiverZip_ != nullptr;};
    void deleteReceiverZip() { this->receiverZip_ = nullptr;};
    inline string getReceiverZip() const { DARABONBA_PTR_GET_DEFAULT(receiverZip_, "") };
    inline CreateSmartAccessGatewayRequest& setReceiverZip(string receiverZip) { DARABONBA_PTR_SET_VALUE(receiverZip_, receiverZip) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSmartAccessGatewayRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSmartAccessGatewayRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSmartAccessGatewayRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Specifies whether you already have an SAG device. Valid values:
    // 
    // *   **true**: yes
    // *   **false** (default): no
    shared_ptr<bool> alreadyHaveSag_ {};
    // Specifies whether to enable auto-payment for the instance. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // If you set the parameter to false, go to Billing Management to complete the payment after you call this operation. After you complete the payment, the instance can be created.
    // 
    // This parameter is required.
    shared_ptr<bool> autoPay_ {};
    // The remarks left by the buyer.
    // 
    // This parameter is required.
    shared_ptr<string> buyerMessage_ {};
    // The edition of SAG when you create an SAG vCPE instance.
    // 
    // Set the value to **basic**, which specifies Basic Edition.
    shared_ptr<string> CPEVersion_ {};
    // The billing method of the SAG instance.
    // 
    // Set the value to **PREPAY**, which specifies the subscription billing method.
    // 
    // This parameter is required.
    shared_ptr<string> chargeType_ {};
    // The description of the SAG instance.
    // 
    // The description must be 2 to 256 characters in length, and can contain digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
    shared_ptr<string> description_ {};
    // The deployment mode. Valid values:
    // 
    // *   **no_backup**: You buy only one SAG device to connect private networks to Alibaba Cloud.
    // *   **cold_backup**: You buy two SAG devices in active-standby mode. One SAG device serves as an active device and the other serves as a standby device. Only the active device is connected to Alibaba Cloud. If the active device is not working as expected, you must manually perform a switchover.
    // *   **warm_backup**: You buy two SAG devices in active-active mode. Both SAG devices are connected to Alibaba Cloud. If an active device is not working as expected, a failover is automatically performed.
    // 
    // >  If you want to create an SAG vCPE instance, set the value to **warm_backup**.
    // 
    // This parameter is required.
    shared_ptr<string> haType_ {};
    // The type of the SAG instance. Valid values:
    // 
    // *   **sag-100wm**
    // *   **sag-1000**
    // *   **sag-vcpe**
    // 
    // This parameter is required.
    shared_ptr<string> hardWareSpec_ {};
    // The bandwidth of the SAG instance.
    // 
    // *   If you want to create an SAG CPE instance and the model is **sag-100wm**, valid values of this parameter are **2** to **50**. Unit: Mbit/s.
    // *   If you want to create an SAG CPE instance and the model is **sag-1000**, valid values of this parameter are **10** to **500**. Unit: Mbit/s.
    // *   If you want to create an SAG vCPE instance, valid values of this parameter are **10** to **1000**. Unit: Mbit/s.
    shared_ptr<int32_t> maxBandWidth_ {};
    // The name of the SAG instance.
    // 
    // The name must be 2 to 128 characters in length and can contain digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The subscription period of the SAG instance. Unit: months.
    // 
    // Valid values: **1** to **9**, **12**, **24**, and **36**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> period_ {};
    // The detailed address of the recipient.
    // 
    // This parameter is required.
    shared_ptr<string> receiverAddress_ {};
    // The city of the recipient address.
    // 
    // This parameter is required.
    shared_ptr<string> receiverCity_ {};
    // The country of the recipient address.
    // 
    // This parameter is required.
    shared_ptr<string> receiverCountry_ {};
    // The district of the recipient address.
    // 
    // This parameter is required.
    shared_ptr<string> receiverDistrict_ {};
    // The email address of the recipient.
    // 
    // This parameter is required.
    shared_ptr<string> receiverEmail_ {};
    // The mobile phone number of the recipient.
    // 
    // This parameter is required.
    shared_ptr<string> receiverMobile_ {};
    // The name of the recipient.
    // 
    // This parameter is required.
    shared_ptr<string> receiverName_ {};
    // The landline phone number of the recipient.
    shared_ptr<string> receiverPhone_ {};
    // The province of the recipient address.
    // 
    // This parameter is required.
    shared_ptr<string> receiverState_ {};
    // The town of the recipient address.
    // 
    // This parameter is required.
    shared_ptr<string> receiverTown_ {};
    // The postcode of the recipient address.
    // 
    // This parameter is required.
    shared_ptr<string> receiverZip_ {};
    // The ID of the region where you want to deploy the SAG instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif

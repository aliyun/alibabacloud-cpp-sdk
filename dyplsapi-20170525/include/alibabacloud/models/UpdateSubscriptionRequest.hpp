// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUBSCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUBSCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class UpdateSubscriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSubscriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ASRModelId, ASRModelId_);
      DARABONBA_PTR_TO_JSON(ASRStatus, ASRStatus_);
      DARABONBA_PTR_TO_JSON(CallDisplayType, callDisplayType_);
      DARABONBA_PTR_TO_JSON(CallRestrict, callRestrict_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(IsRecordingEnabled, isRecordingEnabled_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNoA, phoneNoA_);
      DARABONBA_PTR_TO_JSON(PhoneNoB, phoneNoB_);
      DARABONBA_PTR_TO_JSON(PhoneNoX, phoneNoX_);
      DARABONBA_PTR_TO_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RingConfig, ringConfig_);
      DARABONBA_PTR_TO_JSON(SubsId, subsId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSubscriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ASRModelId, ASRModelId_);
      DARABONBA_PTR_FROM_JSON(ASRStatus, ASRStatus_);
      DARABONBA_PTR_FROM_JSON(CallDisplayType, callDisplayType_);
      DARABONBA_PTR_FROM_JSON(CallRestrict, callRestrict_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(IsRecordingEnabled, isRecordingEnabled_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNoA, phoneNoA_);
      DARABONBA_PTR_FROM_JSON(PhoneNoB, phoneNoB_);
      DARABONBA_PTR_FROM_JSON(PhoneNoX, phoneNoX_);
      DARABONBA_PTR_FROM_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RingConfig, ringConfig_);
      DARABONBA_PTR_FROM_JSON(SubsId, subsId_);
    };
    UpdateSubscriptionRequest() = default ;
    UpdateSubscriptionRequest(const UpdateSubscriptionRequest &) = default ;
    UpdateSubscriptionRequest(UpdateSubscriptionRequest &&) = default ;
    UpdateSubscriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSubscriptionRequest() = default ;
    UpdateSubscriptionRequest& operator=(const UpdateSubscriptionRequest &) = default ;
    UpdateSubscriptionRequest& operator=(UpdateSubscriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ASRModelId_ == nullptr
        && return this->ASRStatus_ == nullptr && return this->callDisplayType_ == nullptr && return this->callRestrict_ == nullptr && return this->expiration_ == nullptr && return this->groupId_ == nullptr
        && return this->isRecordingEnabled_ == nullptr && return this->operateType_ == nullptr && return this->outId_ == nullptr && return this->ownerId_ == nullptr && return this->phoneNoA_ == nullptr
        && return this->phoneNoB_ == nullptr && return this->phoneNoX_ == nullptr && return this->poolKey_ == nullptr && return this->productType_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->ringConfig_ == nullptr && return this->subsId_ == nullptr; };
    // ASRModelId Field Functions 
    bool hasASRModelId() const { return this->ASRModelId_ != nullptr;};
    void deleteASRModelId() { this->ASRModelId_ = nullptr;};
    inline string ASRModelId() const { DARABONBA_PTR_GET_DEFAULT(ASRModelId_, "") };
    inline UpdateSubscriptionRequest& setASRModelId(string ASRModelId) { DARABONBA_PTR_SET_VALUE(ASRModelId_, ASRModelId) };


    // ASRStatus Field Functions 
    bool hasASRStatus() const { return this->ASRStatus_ != nullptr;};
    void deleteASRStatus() { this->ASRStatus_ = nullptr;};
    inline bool ASRStatus() const { DARABONBA_PTR_GET_DEFAULT(ASRStatus_, false) };
    inline UpdateSubscriptionRequest& setASRStatus(bool ASRStatus) { DARABONBA_PTR_SET_VALUE(ASRStatus_, ASRStatus) };


    // callDisplayType Field Functions 
    bool hasCallDisplayType() const { return this->callDisplayType_ != nullptr;};
    void deleteCallDisplayType() { this->callDisplayType_ = nullptr;};
    inline int32_t callDisplayType() const { DARABONBA_PTR_GET_DEFAULT(callDisplayType_, 0) };
    inline UpdateSubscriptionRequest& setCallDisplayType(int32_t callDisplayType) { DARABONBA_PTR_SET_VALUE(callDisplayType_, callDisplayType) };


    // callRestrict Field Functions 
    bool hasCallRestrict() const { return this->callRestrict_ != nullptr;};
    void deleteCallRestrict() { this->callRestrict_ = nullptr;};
    inline string callRestrict() const { DARABONBA_PTR_GET_DEFAULT(callRestrict_, "") };
    inline UpdateSubscriptionRequest& setCallRestrict(string callRestrict) { DARABONBA_PTR_SET_VALUE(callRestrict_, callRestrict) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline UpdateSubscriptionRequest& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateSubscriptionRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // isRecordingEnabled Field Functions 
    bool hasIsRecordingEnabled() const { return this->isRecordingEnabled_ != nullptr;};
    void deleteIsRecordingEnabled() { this->isRecordingEnabled_ = nullptr;};
    inline bool isRecordingEnabled() const { DARABONBA_PTR_GET_DEFAULT(isRecordingEnabled_, false) };
    inline UpdateSubscriptionRequest& setIsRecordingEnabled(bool isRecordingEnabled) { DARABONBA_PTR_SET_VALUE(isRecordingEnabled_, isRecordingEnabled) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline UpdateSubscriptionRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline UpdateSubscriptionRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateSubscriptionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNoA Field Functions 
    bool hasPhoneNoA() const { return this->phoneNoA_ != nullptr;};
    void deletePhoneNoA() { this->phoneNoA_ = nullptr;};
    inline string phoneNoA() const { DARABONBA_PTR_GET_DEFAULT(phoneNoA_, "") };
    inline UpdateSubscriptionRequest& setPhoneNoA(string phoneNoA) { DARABONBA_PTR_SET_VALUE(phoneNoA_, phoneNoA) };


    // phoneNoB Field Functions 
    bool hasPhoneNoB() const { return this->phoneNoB_ != nullptr;};
    void deletePhoneNoB() { this->phoneNoB_ = nullptr;};
    inline string phoneNoB() const { DARABONBA_PTR_GET_DEFAULT(phoneNoB_, "") };
    inline UpdateSubscriptionRequest& setPhoneNoB(string phoneNoB) { DARABONBA_PTR_SET_VALUE(phoneNoB_, phoneNoB) };


    // phoneNoX Field Functions 
    bool hasPhoneNoX() const { return this->phoneNoX_ != nullptr;};
    void deletePhoneNoX() { this->phoneNoX_ = nullptr;};
    inline string phoneNoX() const { DARABONBA_PTR_GET_DEFAULT(phoneNoX_, "") };
    inline UpdateSubscriptionRequest& setPhoneNoX(string phoneNoX) { DARABONBA_PTR_SET_VALUE(phoneNoX_, phoneNoX) };


    // poolKey Field Functions 
    bool hasPoolKey() const { return this->poolKey_ != nullptr;};
    void deletePoolKey() { this->poolKey_ = nullptr;};
    inline string poolKey() const { DARABONBA_PTR_GET_DEFAULT(poolKey_, "") };
    inline UpdateSubscriptionRequest& setPoolKey(string poolKey) { DARABONBA_PTR_SET_VALUE(poolKey_, poolKey) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline UpdateSubscriptionRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateSubscriptionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateSubscriptionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // ringConfig Field Functions 
    bool hasRingConfig() const { return this->ringConfig_ != nullptr;};
    void deleteRingConfig() { this->ringConfig_ = nullptr;};
    inline string ringConfig() const { DARABONBA_PTR_GET_DEFAULT(ringConfig_, "") };
    inline UpdateSubscriptionRequest& setRingConfig(string ringConfig) { DARABONBA_PTR_SET_VALUE(ringConfig_, ringConfig) };


    // subsId Field Functions 
    bool hasSubsId() const { return this->subsId_ != nullptr;};
    void deleteSubsId() { this->subsId_ = nullptr;};
    inline string subsId() const { DARABONBA_PTR_GET_DEFAULT(subsId_, "") };
    inline UpdateSubscriptionRequest& setSubsId(string subsId) { DARABONBA_PTR_SET_VALUE(subsId_, subsId) };


  protected:
    // The ID of the ASR model.
    std::shared_ptr<string> ASRModelId_ = nullptr;
    // Specifies whether to enable automatic speech recognition (ASR). Valid values:
    // 
    // *   **false** (default): disables ASR.
    // *   **true**: enables ASR.
    std::shared_ptr<bool> ASRStatus_ = nullptr;
    // Re-sets the phone number display logic in the phone number binding. Fixed value: **1**, indicating that phone number X is displayed on both the calling phone and the called phone.
    // 
    // >  Due to the regulatory restrictions imposed by carriers, the setting to display real phone numbers during calls does not take effect.
    std::shared_ptr<int32_t> callDisplayType_ = nullptr;
    // One-way call restrictions. Valid values:
    // 
    // *   **CONTROL_AX_DISABLE**: Phone number A cannot be used to call phone number X.
    // *   **CONTROL_BX_DISABLE**: Phone number B cannot be used to call phone number X.
    // *   **CONTROL_CLEAR_DISABLE**: The call restrictions are cleared.
    // 
    // >  This parameter is required when **OperateType** is set to **updateCallRestrict**.
    std::shared_ptr<string> callRestrict_ = nullptr;
    // Re-sets the expiration time of the phone number binding.
    // 
    // > 
    // 
    // *   This parameter is required when **OperateType** is set to **updateExpire**.
    // 
    // *   The expiration time must be more than 1 minute later than the time when you call this API operation.
    std::shared_ptr<string> expiration_ = nullptr;
    // The ID of number group G in the phone number binding.
    // 
    // >  This parameter is required when **OperateType** is set to **updateAxgGroup**.
    std::shared_ptr<string> groupId_ = nullptr;
    // Re-sets the recording status in the phone number binding.
    // 
    // >  This parameter does not have a default value. If you do not specify this parameter, the value of the corresponding field is not updated.
    std::shared_ptr<bool> isRecordingEnabled_ = nullptr;
    // The operation to modify the phone number binding. Valid values:
    // 
    // *   **updateNoA**: modifies phone number A.
    // *   **updateNoB**: modifies phone number B.
    // *   **updateExpire**: modifies the validity period of the binding.
    // *   **updateAxgGroup**: modifies number group G.
    // *   **updateCallRestrict**: modifies one-way call restrictions.
    // *   **updateCallDisplayType**: updates the number display logic for calls.
    // *   **updateOutId**: updates the value of the OutId parameter.
    // *   **updateIsRecordingEnabled**: updates the status of the recording feature in the binding.
    // 
    // This parameter is required.
    std::shared_ptr<string> operateType_ = nullptr;
    // Re-sets the value of the OutId parameter in the phone number binding.
    std::shared_ptr<string> outId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Phone number A in the phone number binding.
    // 
    // >  This parameter is required when **OperateType** is set to **updateNoA**.
    std::shared_ptr<string> phoneNoA_ = nullptr;
    // Phone number B in the phone number binding.
    // 
    // >  This parameter is required when **OperateType** is set to **updateNoB**.
    std::shared_ptr<string> phoneNoB_ = nullptr;
    // Phone number X in the phone number binding.
    // 
    // This parameter is required.
    std::shared_ptr<string> phoneNoX_ = nullptr;
    // The key of the phone number pool.
    // 
    // Log on to the [Phone Number Protection console](https://dypls.console.aliyun.com/dypls.htm#/account) and view the key of the phone number pool on the **Number Pool Management** page.
    // 
    // >  This parameter is required when **ProductType** is left empty.
    std::shared_ptr<string> poolKey_ = nullptr;
    // The product type. Valid values:
    // 
    // *   **AXB_170**
    // *   **AXN_170**
    // *   **AXN_95**
    // *   **AXN_EXTENSION_REUSE**
    // 
    // > 
    // 
    // *   This parameter is applicable to the original key accounts of Alibaba Cloud. This parameter can be ignored for Alibaba Cloud users.
    // 
    // *   This parameter is required when **PoolKey** is left empty.
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Updates the ringtone code for enterprise Color Ring Back Tone (CRBT) in the phone number binding.
    // 
    // AXB product:
    // 
    // *   Ringtone setting when phone number A is used to call phone number X in the AXB binding: AXBRing_A
    // *   Ringtone setting when phone number B is used to call phone number X in the AXB binding: AXBRing_B
    // 
    // AXN product:
    // 
    // *   Ringtone setting (with a callback number) when phone number A is used to call phone number X in the AXN extension binding: AXNRing_AB
    // *   Ringtone setting (without a callback number) when phone number A is used to call phone number X in the AXN extension binding: AXNRing_A
    // *   Ringtone setting when phone number N is used to call phone number X in the AXN extension binding: AXNRing_N
    // 
    // AXG product:
    // 
    // *   Ringtone setting (with a callback number) when phone number A is used to call phone number X in the AXG binding: AXGRing_AB
    // *   Ringtone setting (without a callback number) when phone number A is used to call phone number X in the AXG binding: AXGRing_A
    // *   Ringtone setting when a phone number in number group G is used to call phone number X in the AXG binding: AXGRing_G
    // 
    // Enterprise CRBT codes: Enterprise CRBT codes can be queried in the [Phone Number Protection console](https://dypls.console.aliyun.com/dypls.htm#/account). You can choose **Number Pool Management** > **Enterprise CRBT Management** to view and manage enterprise CRBT codes. You can also upload, delete, or perform other operations on enterprise CRBT codes.
    // 
    // >  The bound enterprise CRBTs are preferentially used. If no enterprise CRBT is set or the setting does not take effect, the enterprise CRBTs at the phone number pool level are used.
    std::shared_ptr<string> ringConfig_ = nullptr;
    // The binding ID.
    // 
    // Log on to the [Phone Number Protection console](https://dypls.console.aliyun.com/dypls.htm#/account), choose **Number and Number Pool** > **Number Management**. On the Number Management page, select the desired record and click Details to view the binding ID. Alternatively, you can view the value of the **SubsId** parameter returned by an API operation for a phone number binding such as BindAxb. The value of this parameter indicates a binding ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> subsId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif

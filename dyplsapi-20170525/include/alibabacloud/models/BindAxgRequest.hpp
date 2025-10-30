// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAXGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDAXGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindAxgRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAxgRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ASRModelId, ASRModelId_);
      DARABONBA_PTR_TO_JSON(ASRStatus, ASRStatus_);
      DARABONBA_PTR_TO_JSON(CallDisplayType, callDisplayType_);
      DARABONBA_PTR_TO_JSON(CallRestrict, callRestrict_);
      DARABONBA_PTR_TO_JSON(ExpectCity, expectCity_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(IsRecordingEnabled, isRecordingEnabled_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OutOrderId, outOrderId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNoA, phoneNoA_);
      DARABONBA_PTR_TO_JSON(PhoneNoB, phoneNoB_);
      DARABONBA_PTR_TO_JSON(PhoneNoX, phoneNoX_);
      DARABONBA_PTR_TO_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RingConfig, ringConfig_);
    };
    friend void from_json(const Darabonba::Json& j, BindAxgRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ASRModelId, ASRModelId_);
      DARABONBA_PTR_FROM_JSON(ASRStatus, ASRStatus_);
      DARABONBA_PTR_FROM_JSON(CallDisplayType, callDisplayType_);
      DARABONBA_PTR_FROM_JSON(CallRestrict, callRestrict_);
      DARABONBA_PTR_FROM_JSON(ExpectCity, expectCity_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(IsRecordingEnabled, isRecordingEnabled_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OutOrderId, outOrderId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNoA, phoneNoA_);
      DARABONBA_PTR_FROM_JSON(PhoneNoB, phoneNoB_);
      DARABONBA_PTR_FROM_JSON(PhoneNoX, phoneNoX_);
      DARABONBA_PTR_FROM_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RingConfig, ringConfig_);
    };
    BindAxgRequest() = default ;
    BindAxgRequest(const BindAxgRequest &) = default ;
    BindAxgRequest(BindAxgRequest &&) = default ;
    BindAxgRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAxgRequest() = default ;
    BindAxgRequest& operator=(const BindAxgRequest &) = default ;
    BindAxgRequest& operator=(BindAxgRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ASRModelId_ == nullptr
        && return this->ASRStatus_ == nullptr && return this->callDisplayType_ == nullptr && return this->callRestrict_ == nullptr && return this->expectCity_ == nullptr && return this->expiration_ == nullptr
        && return this->groupId_ == nullptr && return this->isRecordingEnabled_ == nullptr && return this->outId_ == nullptr && return this->outOrderId_ == nullptr && return this->ownerId_ == nullptr
        && return this->phoneNoA_ == nullptr && return this->phoneNoB_ == nullptr && return this->phoneNoX_ == nullptr && return this->poolKey_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->ringConfig_ == nullptr; };
    // ASRModelId Field Functions 
    bool hasASRModelId() const { return this->ASRModelId_ != nullptr;};
    void deleteASRModelId() { this->ASRModelId_ = nullptr;};
    inline string ASRModelId() const { DARABONBA_PTR_GET_DEFAULT(ASRModelId_, "") };
    inline BindAxgRequest& setASRModelId(string ASRModelId) { DARABONBA_PTR_SET_VALUE(ASRModelId_, ASRModelId) };


    // ASRStatus Field Functions 
    bool hasASRStatus() const { return this->ASRStatus_ != nullptr;};
    void deleteASRStatus() { this->ASRStatus_ = nullptr;};
    inline bool ASRStatus() const { DARABONBA_PTR_GET_DEFAULT(ASRStatus_, false) };
    inline BindAxgRequest& setASRStatus(bool ASRStatus) { DARABONBA_PTR_SET_VALUE(ASRStatus_, ASRStatus) };


    // callDisplayType Field Functions 
    bool hasCallDisplayType() const { return this->callDisplayType_ != nullptr;};
    void deleteCallDisplayType() { this->callDisplayType_ = nullptr;};
    inline int32_t callDisplayType() const { DARABONBA_PTR_GET_DEFAULT(callDisplayType_, 0) };
    inline BindAxgRequest& setCallDisplayType(int32_t callDisplayType) { DARABONBA_PTR_SET_VALUE(callDisplayType_, callDisplayType) };


    // callRestrict Field Functions 
    bool hasCallRestrict() const { return this->callRestrict_ != nullptr;};
    void deleteCallRestrict() { this->callRestrict_ = nullptr;};
    inline string callRestrict() const { DARABONBA_PTR_GET_DEFAULT(callRestrict_, "") };
    inline BindAxgRequest& setCallRestrict(string callRestrict) { DARABONBA_PTR_SET_VALUE(callRestrict_, callRestrict) };


    // expectCity Field Functions 
    bool hasExpectCity() const { return this->expectCity_ != nullptr;};
    void deleteExpectCity() { this->expectCity_ = nullptr;};
    inline string expectCity() const { DARABONBA_PTR_GET_DEFAULT(expectCity_, "") };
    inline BindAxgRequest& setExpectCity(string expectCity) { DARABONBA_PTR_SET_VALUE(expectCity_, expectCity) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline BindAxgRequest& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline BindAxgRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // isRecordingEnabled Field Functions 
    bool hasIsRecordingEnabled() const { return this->isRecordingEnabled_ != nullptr;};
    void deleteIsRecordingEnabled() { this->isRecordingEnabled_ = nullptr;};
    inline bool isRecordingEnabled() const { DARABONBA_PTR_GET_DEFAULT(isRecordingEnabled_, false) };
    inline BindAxgRequest& setIsRecordingEnabled(bool isRecordingEnabled) { DARABONBA_PTR_SET_VALUE(isRecordingEnabled_, isRecordingEnabled) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline BindAxgRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline BindAxgRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BindAxgRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNoA Field Functions 
    bool hasPhoneNoA() const { return this->phoneNoA_ != nullptr;};
    void deletePhoneNoA() { this->phoneNoA_ = nullptr;};
    inline string phoneNoA() const { DARABONBA_PTR_GET_DEFAULT(phoneNoA_, "") };
    inline BindAxgRequest& setPhoneNoA(string phoneNoA) { DARABONBA_PTR_SET_VALUE(phoneNoA_, phoneNoA) };


    // phoneNoB Field Functions 
    bool hasPhoneNoB() const { return this->phoneNoB_ != nullptr;};
    void deletePhoneNoB() { this->phoneNoB_ = nullptr;};
    inline string phoneNoB() const { DARABONBA_PTR_GET_DEFAULT(phoneNoB_, "") };
    inline BindAxgRequest& setPhoneNoB(string phoneNoB) { DARABONBA_PTR_SET_VALUE(phoneNoB_, phoneNoB) };


    // phoneNoX Field Functions 
    bool hasPhoneNoX() const { return this->phoneNoX_ != nullptr;};
    void deletePhoneNoX() { this->phoneNoX_ = nullptr;};
    inline string phoneNoX() const { DARABONBA_PTR_GET_DEFAULT(phoneNoX_, "") };
    inline BindAxgRequest& setPhoneNoX(string phoneNoX) { DARABONBA_PTR_SET_VALUE(phoneNoX_, phoneNoX) };


    // poolKey Field Functions 
    bool hasPoolKey() const { return this->poolKey_ != nullptr;};
    void deletePoolKey() { this->poolKey_ = nullptr;};
    inline string poolKey() const { DARABONBA_PTR_GET_DEFAULT(poolKey_, "") };
    inline BindAxgRequest& setPoolKey(string poolKey) { DARABONBA_PTR_SET_VALUE(poolKey_, poolKey) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BindAxgRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BindAxgRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // ringConfig Field Functions 
    bool hasRingConfig() const { return this->ringConfig_ != nullptr;};
    void deleteRingConfig() { this->ringConfig_ = nullptr;};
    inline string ringConfig() const { DARABONBA_PTR_GET_DEFAULT(ringConfig_, "") };
    inline BindAxgRequest& setRingConfig(string ringConfig) { DARABONBA_PTR_SET_VALUE(ringConfig_, ringConfig) };


  protected:
    // The ID of the ASR model.
    std::shared_ptr<string> ASRModelId_ = nullptr;
    // Specifies whether to enable automatic speech recognition (ASR). Valid values:
    // 
    // *   **False** (default): disables ASR.
    // *   **True**: enables ASR.
    std::shared_ptr<bool> ASRStatus_ = nullptr;
    // Re-sets the phone number display logic in the AXG binding. Fixed value: **1**, indicating that phone number X is displayed on both the calling phone and the called phone.
    // 
    // >  Due to the regulatory restrictions imposed by carriers, the setting to display real phone numbers during calls does not take effect.
    std::shared_ptr<int32_t> callDisplayType_ = nullptr;
    // The status of call restrictions. Valid values:
    // 
    // *   **CONTROL_AX_DISABLE**: Phone number A cannot be used to call phone number X.
    // *   **CONTROL_BX_DISABLE**: Phone number B cannot be used to call phone number X.
    std::shared_ptr<string> callRestrict_ = nullptr;
    // Specifies the city to which phone number X to be selected belongs.
    // 
    // *   If no phone number for the specified city is available in the current phone number pool or this parameter is not specified, a phone number that belongs to another city is randomly selected from the current phone number pool and assigned as phone number X.
    // *   If Number X Assignment Mode is set to Strict Matching Mode and no phone number meets the requirement, the system displays an allocation error.
    std::shared_ptr<string> expectCity_ = nullptr;
    // The expiration time of the AXG binding. The value is accurate to seconds.
    // 
    // >  The expiration time must be more than 1 minute later than the time when you call this API operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> expiration_ = nullptr;
    // The group ID in the AXG binding. You can view the group ID by using either of the following methods:
    // 
    // *   On the **Number Pool Management** page in the [Phone Number Protection console](https://dypls.console.aliyun.com/dypls.htm#/account), filter AXG privacy numbers and click **Number Group G Management** to view the group IDs of number groups G.****
    // *   If the [CreateAxgGroup](https://help.aliyun.com/document_detail/110250.html) operation is called to create number group G, the value of **GroupId** in the response of the CreateAxgGroup operation is specified as the value of the request parameter **GroupId** of the BindAxg operation.
    // 
    // >  Number group G must have one or more phone numbers.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // Specifies whether to record all calls made by the bound phone numbers.
    std::shared_ptr<bool> isRecordingEnabled_ = nullptr;
    // The extension field for the external business. This parameter is returned in a call record receipt.
    std::shared_ptr<string> outId_ = nullptr;
    // The ID of the external business.
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Phone number A in the AXG binding. Phone number A can be set to a mobile phone number or a landline phone number. The landline phone number must be added with an area code, and no hyphen is required between the area code and the landline phone number.
    // 
    // This parameter is required.
    std::shared_ptr<string> phoneNoA_ = nullptr;
    // Phone number B in the AXG binding. If phone number A is used to call phone number X, the call is forwarded to phone number B. If you need to update phone number B, call the [UpdateSubscription](https://help.aliyun.com/document_detail/110253.html) operation.
    // 
    // Phone number B can be set to a mobile phone number or a landline phone number. The landline phone number must be added with an area code, and no hyphen is required between the area code and the landline phone number.
    std::shared_ptr<string> phoneNoB_ = nullptr;
    // Phone number X in the AXG binding. If you do not specify this parameter, a random phone number is selected from the phone number pool based on the value of the **ExpectCity** parameter and is used as phone number X.
    // 
    // >  Phone number X is the phone number that you purchased in the Phone Number Protection console or by using the [BuySecretNo](https://help.aliyun.com/document_detail/110266.html) operation before you bind a phone number. Phone number X is used to forward calls.
    std::shared_ptr<string> phoneNoX_ = nullptr;
    // The key of the phone number pool. Log on to the [Phone Number Protection console](https://dypls.console.aliyun.com/dypls.htm#/account) and view the key of the phone number pool on the **Number Pool Management** page.
    std::shared_ptr<string> poolKey_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Sets the ringtone for enterprise Color Ring Back Tone (CRBT) in the AXG binding.
    // 
    // *   Ringtone setting (with a callback number) when phone number A is used to call phone number X in the AXG binding: AXGRing_AB
    // *   Ringtone setting (without a callback number) when phone number A is used to call phone number X in the AXG binding: AXGRing_A
    // *   Ringtone setting when a phone number in number group G is used to call phone number X in the AXG binding: AXGRing_G
    // *   Enterprise CRBT codes: Enterprise CRBT codes can be queried in the Phone Number Protection console. You can choose **Number Pool Management > Enterprise CRBT Management** to view and manage enterprise CRBT codes. You can also upload, delete, or perform other operations on enterprise CRBT codes.
    // 
    // >  The bound enterprise CRBTs are preferentially used. If no enterprise CRBT is set or the setting does not take effect, the enterprise CRBTs at the phone number pool level are used.
    std::shared_ptr<string> ringConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAXNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDAXNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindAxnRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAxnRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ASRModelId, ASRModelId_);
      DARABONBA_PTR_TO_JSON(ASRStatus, ASRStatus_);
      DARABONBA_PTR_TO_JSON(CallDisplayType, callDisplayType_);
      DARABONBA_PTR_TO_JSON(CallRestrict, callRestrict_);
      DARABONBA_PTR_TO_JSON(CallTimeout, callTimeout_);
      DARABONBA_PTR_TO_JSON(ExpectCity, expectCity_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(IsRecordingEnabled, isRecordingEnabled_);
      DARABONBA_PTR_TO_JSON(NoType, noType_);
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
    friend void from_json(const Darabonba::Json& j, BindAxnRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ASRModelId, ASRModelId_);
      DARABONBA_PTR_FROM_JSON(ASRStatus, ASRStatus_);
      DARABONBA_PTR_FROM_JSON(CallDisplayType, callDisplayType_);
      DARABONBA_PTR_FROM_JSON(CallRestrict, callRestrict_);
      DARABONBA_PTR_FROM_JSON(CallTimeout, callTimeout_);
      DARABONBA_PTR_FROM_JSON(ExpectCity, expectCity_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(IsRecordingEnabled, isRecordingEnabled_);
      DARABONBA_PTR_FROM_JSON(NoType, noType_);
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
    BindAxnRequest() = default ;
    BindAxnRequest(const BindAxnRequest &) = default ;
    BindAxnRequest(BindAxnRequest &&) = default ;
    BindAxnRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAxnRequest() = default ;
    BindAxnRequest& operator=(const BindAxnRequest &) = default ;
    BindAxnRequest& operator=(BindAxnRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ASRModelId_ == nullptr
        && this->ASRStatus_ == nullptr && this->callDisplayType_ == nullptr && this->callRestrict_ == nullptr && this->callTimeout_ == nullptr && this->expectCity_ == nullptr
        && this->expiration_ == nullptr && this->extend_ == nullptr && this->isRecordingEnabled_ == nullptr && this->noType_ == nullptr && this->outId_ == nullptr
        && this->outOrderId_ == nullptr && this->ownerId_ == nullptr && this->phoneNoA_ == nullptr && this->phoneNoB_ == nullptr && this->phoneNoX_ == nullptr
        && this->poolKey_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->ringConfig_ == nullptr; };
    // ASRModelId Field Functions 
    bool hasASRModelId() const { return this->ASRModelId_ != nullptr;};
    void deleteASRModelId() { this->ASRModelId_ = nullptr;};
    inline string getASRModelId() const { DARABONBA_PTR_GET_DEFAULT(ASRModelId_, "") };
    inline BindAxnRequest& setASRModelId(string ASRModelId) { DARABONBA_PTR_SET_VALUE(ASRModelId_, ASRModelId) };


    // ASRStatus Field Functions 
    bool hasASRStatus() const { return this->ASRStatus_ != nullptr;};
    void deleteASRStatus() { this->ASRStatus_ = nullptr;};
    inline bool getASRStatus() const { DARABONBA_PTR_GET_DEFAULT(ASRStatus_, false) };
    inline BindAxnRequest& setASRStatus(bool ASRStatus) { DARABONBA_PTR_SET_VALUE(ASRStatus_, ASRStatus) };


    // callDisplayType Field Functions 
    bool hasCallDisplayType() const { return this->callDisplayType_ != nullptr;};
    void deleteCallDisplayType() { this->callDisplayType_ = nullptr;};
    inline int32_t getCallDisplayType() const { DARABONBA_PTR_GET_DEFAULT(callDisplayType_, 0) };
    inline BindAxnRequest& setCallDisplayType(int32_t callDisplayType) { DARABONBA_PTR_SET_VALUE(callDisplayType_, callDisplayType) };


    // callRestrict Field Functions 
    bool hasCallRestrict() const { return this->callRestrict_ != nullptr;};
    void deleteCallRestrict() { this->callRestrict_ = nullptr;};
    inline string getCallRestrict() const { DARABONBA_PTR_GET_DEFAULT(callRestrict_, "") };
    inline BindAxnRequest& setCallRestrict(string callRestrict) { DARABONBA_PTR_SET_VALUE(callRestrict_, callRestrict) };


    // callTimeout Field Functions 
    bool hasCallTimeout() const { return this->callTimeout_ != nullptr;};
    void deleteCallTimeout() { this->callTimeout_ = nullptr;};
    inline int32_t getCallTimeout() const { DARABONBA_PTR_GET_DEFAULT(callTimeout_, 0) };
    inline BindAxnRequest& setCallTimeout(int32_t callTimeout) { DARABONBA_PTR_SET_VALUE(callTimeout_, callTimeout) };


    // expectCity Field Functions 
    bool hasExpectCity() const { return this->expectCity_ != nullptr;};
    void deleteExpectCity() { this->expectCity_ = nullptr;};
    inline string getExpectCity() const { DARABONBA_PTR_GET_DEFAULT(expectCity_, "") };
    inline BindAxnRequest& setExpectCity(string expectCity) { DARABONBA_PTR_SET_VALUE(expectCity_, expectCity) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline BindAxnRequest& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline BindAxnRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // isRecordingEnabled Field Functions 
    bool hasIsRecordingEnabled() const { return this->isRecordingEnabled_ != nullptr;};
    void deleteIsRecordingEnabled() { this->isRecordingEnabled_ = nullptr;};
    inline bool getIsRecordingEnabled() const { DARABONBA_PTR_GET_DEFAULT(isRecordingEnabled_, false) };
    inline BindAxnRequest& setIsRecordingEnabled(bool isRecordingEnabled) { DARABONBA_PTR_SET_VALUE(isRecordingEnabled_, isRecordingEnabled) };


    // noType Field Functions 
    bool hasNoType() const { return this->noType_ != nullptr;};
    void deleteNoType() { this->noType_ = nullptr;};
    inline string getNoType() const { DARABONBA_PTR_GET_DEFAULT(noType_, "") };
    inline BindAxnRequest& setNoType(string noType) { DARABONBA_PTR_SET_VALUE(noType_, noType) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline BindAxnRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline BindAxnRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BindAxnRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNoA Field Functions 
    bool hasPhoneNoA() const { return this->phoneNoA_ != nullptr;};
    void deletePhoneNoA() { this->phoneNoA_ = nullptr;};
    inline string getPhoneNoA() const { DARABONBA_PTR_GET_DEFAULT(phoneNoA_, "") };
    inline BindAxnRequest& setPhoneNoA(string phoneNoA) { DARABONBA_PTR_SET_VALUE(phoneNoA_, phoneNoA) };


    // phoneNoB Field Functions 
    bool hasPhoneNoB() const { return this->phoneNoB_ != nullptr;};
    void deletePhoneNoB() { this->phoneNoB_ = nullptr;};
    inline string getPhoneNoB() const { DARABONBA_PTR_GET_DEFAULT(phoneNoB_, "") };
    inline BindAxnRequest& setPhoneNoB(string phoneNoB) { DARABONBA_PTR_SET_VALUE(phoneNoB_, phoneNoB) };


    // phoneNoX Field Functions 
    bool hasPhoneNoX() const { return this->phoneNoX_ != nullptr;};
    void deletePhoneNoX() { this->phoneNoX_ = nullptr;};
    inline string getPhoneNoX() const { DARABONBA_PTR_GET_DEFAULT(phoneNoX_, "") };
    inline BindAxnRequest& setPhoneNoX(string phoneNoX) { DARABONBA_PTR_SET_VALUE(phoneNoX_, phoneNoX) };


    // poolKey Field Functions 
    bool hasPoolKey() const { return this->poolKey_ != nullptr;};
    void deletePoolKey() { this->poolKey_ = nullptr;};
    inline string getPoolKey() const { DARABONBA_PTR_GET_DEFAULT(poolKey_, "") };
    inline BindAxnRequest& setPoolKey(string poolKey) { DARABONBA_PTR_SET_VALUE(poolKey_, poolKey) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BindAxnRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BindAxnRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // ringConfig Field Functions 
    bool hasRingConfig() const { return this->ringConfig_ != nullptr;};
    void deleteRingConfig() { this->ringConfig_ = nullptr;};
    inline string getRingConfig() const { DARABONBA_PTR_GET_DEFAULT(ringConfig_, "") };
    inline BindAxnRequest& setRingConfig(string ringConfig) { DARABONBA_PTR_SET_VALUE(ringConfig_, ringConfig) };


  protected:
    // The ASR model ID. Valid values:
    // 
    // - 7ee372834d2f4cc7ac0d0ab2d0ae1aac: General-Telephone-Mandarin Chinese model.
    // 
    // - 9b4afe3d224e4fa3bf963697113e2f77: General-Telephone-Cantonese model.
    // 
    // - 3655a6cb94764145a1f9a38a3c3b3b4b: General-Telephone-Regional accent model.
    shared_ptr<string> ASRModelId_ {};
    // The ASR status. Valid values:
    // 
    // - **false**: Disabled. This is the default value.
    // - **true**: Enabled.
    shared_ptr<bool> ASRStatus_ {};
    // Resets the number display logic in the binding relationship. Set the value to **1**, which indicates that the intermediate Number X is displayed for both the caller and the callee.
    // 
    // > Due to carrier regulatory restrictions, the setting to display the real number during a call does not take effect.
    shared_ptr<int32_t> callDisplayType_ {};
    // The single-call restriction status. Valid values:
    // 
    // - **CONTROL_AX_DISABLE**: Number A cannot call Number X.
    // - **CONTROL_BX_DISABLE**: Number B cannot call Number X.
    shared_ptr<string> callRestrict_ {};
    // The ring duration. Unit: seconds.
    shared_ptr<int32_t> callTimeout_ {};
    // The city specified for selecting Number X.
    // 
    // > - If no available numbers in the specified city exist in the current number pool, or if this parameter is not specified, a number from another city is randomly assigned from the current number pool as Number X.
    // > - If the **Number X allocation mode** is set to **strict match mode**, the system returns an allocation error when no eligible numbers are available.
    shared_ptr<string> expectCity_ {};
    // The expiration time of the binding relationship. Unit: seconds.
    // 
    // > The expiration time must be at least 60 seconds later than the current time.
    // 
    // This parameter is required.
    shared_ptr<string> expiration_ {};
    shared_ptr<string> extend_ {};
    // Specifies whether to record all calls generated for this binding relationship. Valid values:
    // 
    // - **true**: Records calls.
    // - **false**: Does not record calls. This is the default value.
    shared_ptr<bool> isRecordingEnabled_ {};
    // The number type.
    // 
    // > This parameter applies to former Alibaba Dayu customers. Alibaba Cloud users can ignore this parameter.
    shared_ptr<string> noType_ {};
    // The external business extension field. This parameter is returned in the call record receipt message.
    shared_ptr<string> outId_ {};
    // The external business ID.
    shared_ptr<string> outOrderId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Number A of the AXN privacy number. Number A can be a mobile phone number or a landline number. If it is a landline number, the area code must be included, and no hyphen is required between the area code and the phone number.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNoA_ {};
    // Number B of the AXN privacy number.
    // 
    // Number B can be a mobile phone number or a landline number. If it is a landline number, the area code must be included, and no hyphen is required between the area code and the phone number.
    // > - When Number A dials Number X, the call is forwarded to Number B by default. If Number B is not set, the call cannot be connected.
    // > - When Number A dials Number X, the call is forwarded to Number B only when the **callback mode for Number A** is set to **default mode**. Otherwise, the call cannot be connected.
    // > - To modify the **callback mode for Number A**, go to [Number Pool Management](https://dyplsnext.console.aliyun.com/number-pool?resType=1) > filter **AXN privacy number** > **Number Pool Management** > **Callback mode for Number A** > **Adjust Configuration**.
    // > - To update Number B, call the [UpdateSubscription](https://www.alibabacloud.com/help/en/pnp/developer-reference/api-dyplsapi-2017-05-25-updatesubscription) operation.
    shared_ptr<string> phoneNoB_ {};
    // Number X of the AXN privacy number.
    // 
    // Number X is a privacy number that you have [purchased](https://dyplsnext.console.aliyun.com/numberbuy?spm=a2c4g.11186623.0.0.7e6449bbtiHP8m) in the console.
    // 
    // > If Number X is not specified, a number is randomly selected from the specified number pool based on the ExpectCity parameter as Number X.
    shared_ptr<string> phoneNoX_ {};
    // The key of the number pool. You can obtain the **number pool key** on the [Number Pool Management](https://dyplsnext.console.aliyun.com/number-pool?spm=a2c4g.11186623.0.0.7e6449bbtiHP8m) page in the Privacy Protection console.
    shared_ptr<string> poolKey_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Sets the corporate color ringback tone (CRBT) played during a dial-up to Number X after the AXN privacy number is attached.
    // 
    // Specify the **ringtone field** and **CRBT encoding** for this parameter.
    // 
    // **Ringtone field** valid values:
    // - AXNRing_AB: The ringtone Settings before Number A dials Number X and the call is connected (with a callback number) in AXN mode.
    // - AXNRing_A: The ringtone Settings before Number A dials Number X and the call is connected (without a callback number) in AXN mode.
    // - AXNRing_N: The ringtone Settings before Number N dials Number X and the call is connected in AXN mode.
    // - AXNRing_A_PICKUP: The ringtone Settings after Number A dials Number X and the call is connected in AXN mode.
    // - AXNRing_N_PICKUP: The ringtone Settings after Number N dials Number X and the call is connected in AXN mode.
    // 
    // **CRBT encoding**:
    // 
    // You can obtain the corporate CRBT encoding on the [Corporate CRBT Management](https://dyplsnext.console.aliyun.com/number-pool/ringtone?resType=1) page in the Privacy Protection console.
    // 
    // **Example**:
    // 
    // To set the ringtone played before Number A dials Number X and the call is connected (without a callback number), enter "AXNRing_A": "1000****1".
    // 
    // > The corporate CRBT configured at the attachment level takes precedence. If it is not set or does not take effect, the CRBT configured at the number pool level is used.
    shared_ptr<string> ringConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif

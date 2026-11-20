// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDGXB700REQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDGXB700REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindGxb700Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindGxb700Request& obj) { 
      DARABONBA_PTR_TO_JSON(AsrModelId, asrModelId_);
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(CallRestrict, callRestrict_);
      DARABONBA_PTR_TO_JSON(CallTimeout, callTimeout_);
      DARABONBA_PTR_TO_JSON(DefaultA, defaultA_);
      DARABONBA_PTR_TO_JSON(DtmfConfig, dtmfConfig_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(IndustrialId, industrialId_);
      DARABONBA_PTR_TO_JSON(NeedAsr, needAsr_);
      DARABONBA_PTR_TO_JSON(NeedRecord, needRecord_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OutOrderId, outOrderId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_TO_JSON(RecType, recType_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TelB, telB_);
      DARABONBA_PTR_TO_JSON(TelX, telX_);
    };
    friend void from_json(const Darabonba::Json& j, BindGxb700Request& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrModelId, asrModelId_);
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(CallRestrict, callRestrict_);
      DARABONBA_PTR_FROM_JSON(CallTimeout, callTimeout_);
      DARABONBA_PTR_FROM_JSON(DefaultA, defaultA_);
      DARABONBA_PTR_FROM_JSON(DtmfConfig, dtmfConfig_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(IndustrialId, industrialId_);
      DARABONBA_PTR_FROM_JSON(NeedAsr, needAsr_);
      DARABONBA_PTR_FROM_JSON(NeedRecord, needRecord_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OutOrderId, outOrderId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_FROM_JSON(RecType, recType_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TelB, telB_);
      DARABONBA_PTR_FROM_JSON(TelX, telX_);
    };
    BindGxb700Request() = default ;
    BindGxb700Request(const BindGxb700Request &) = default ;
    BindGxb700Request(BindGxb700Request &&) = default ;
    BindGxb700Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindGxb700Request() = default ;
    BindGxb700Request& operator=(const BindGxb700Request &) = default ;
    BindGxb700Request& operator=(BindGxb700Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asrModelId_ == nullptr
        && this->audio_ == nullptr && this->callRestrict_ == nullptr && this->callTimeout_ == nullptr && this->defaultA_ == nullptr && this->dtmfConfig_ == nullptr
        && this->expiration_ == nullptr && this->groupId_ == nullptr && this->industrialId_ == nullptr && this->needAsr_ == nullptr && this->needRecord_ == nullptr
        && this->orderId_ == nullptr && this->outId_ == nullptr && this->outOrderId_ == nullptr && this->ownerId_ == nullptr && this->poolKey_ == nullptr
        && this->recType_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->telB_ == nullptr && this->telX_ == nullptr; };
    // asrModelId Field Functions 
    bool hasAsrModelId() const { return this->asrModelId_ != nullptr;};
    void deleteAsrModelId() { this->asrModelId_ = nullptr;};
    inline string getAsrModelId() const { DARABONBA_PTR_GET_DEFAULT(asrModelId_, "") };
    inline BindGxb700Request& setAsrModelId(string asrModelId) { DARABONBA_PTR_SET_VALUE(asrModelId_, asrModelId) };


    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline string getAudio() const { DARABONBA_PTR_GET_DEFAULT(audio_, "") };
    inline BindGxb700Request& setAudio(string audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };


    // callRestrict Field Functions 
    bool hasCallRestrict() const { return this->callRestrict_ != nullptr;};
    void deleteCallRestrict() { this->callRestrict_ = nullptr;};
    inline string getCallRestrict() const { DARABONBA_PTR_GET_DEFAULT(callRestrict_, "") };
    inline BindGxb700Request& setCallRestrict(string callRestrict) { DARABONBA_PTR_SET_VALUE(callRestrict_, callRestrict) };


    // callTimeout Field Functions 
    bool hasCallTimeout() const { return this->callTimeout_ != nullptr;};
    void deleteCallTimeout() { this->callTimeout_ = nullptr;};
    inline int64_t getCallTimeout() const { DARABONBA_PTR_GET_DEFAULT(callTimeout_, 0L) };
    inline BindGxb700Request& setCallTimeout(int64_t callTimeout) { DARABONBA_PTR_SET_VALUE(callTimeout_, callTimeout) };


    // defaultA Field Functions 
    bool hasDefaultA() const { return this->defaultA_ != nullptr;};
    void deleteDefaultA() { this->defaultA_ = nullptr;};
    inline string getDefaultA() const { DARABONBA_PTR_GET_DEFAULT(defaultA_, "") };
    inline BindGxb700Request& setDefaultA(string defaultA) { DARABONBA_PTR_SET_VALUE(defaultA_, defaultA) };


    // dtmfConfig Field Functions 
    bool hasDtmfConfig() const { return this->dtmfConfig_ != nullptr;};
    void deleteDtmfConfig() { this->dtmfConfig_ = nullptr;};
    inline string getDtmfConfig() const { DARABONBA_PTR_GET_DEFAULT(dtmfConfig_, "") };
    inline BindGxb700Request& setDtmfConfig(string dtmfConfig) { DARABONBA_PTR_SET_VALUE(dtmfConfig_, dtmfConfig) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline BindGxb700Request& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline BindGxb700Request& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // industrialId Field Functions 
    bool hasIndustrialId() const { return this->industrialId_ != nullptr;};
    void deleteIndustrialId() { this->industrialId_ = nullptr;};
    inline string getIndustrialId() const { DARABONBA_PTR_GET_DEFAULT(industrialId_, "") };
    inline BindGxb700Request& setIndustrialId(string industrialId) { DARABONBA_PTR_SET_VALUE(industrialId_, industrialId) };


    // needAsr Field Functions 
    bool hasNeedAsr() const { return this->needAsr_ != nullptr;};
    void deleteNeedAsr() { this->needAsr_ = nullptr;};
    inline bool getNeedAsr() const { DARABONBA_PTR_GET_DEFAULT(needAsr_, false) };
    inline BindGxb700Request& setNeedAsr(bool needAsr) { DARABONBA_PTR_SET_VALUE(needAsr_, needAsr) };


    // needRecord Field Functions 
    bool hasNeedRecord() const { return this->needRecord_ != nullptr;};
    void deleteNeedRecord() { this->needRecord_ = nullptr;};
    inline bool getNeedRecord() const { DARABONBA_PTR_GET_DEFAULT(needRecord_, false) };
    inline BindGxb700Request& setNeedRecord(bool needRecord) { DARABONBA_PTR_SET_VALUE(needRecord_, needRecord) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline BindGxb700Request& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline BindGxb700Request& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline BindGxb700Request& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BindGxb700Request& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // poolKey Field Functions 
    bool hasPoolKey() const { return this->poolKey_ != nullptr;};
    void deletePoolKey() { this->poolKey_ = nullptr;};
    inline string getPoolKey() const { DARABONBA_PTR_GET_DEFAULT(poolKey_, "") };
    inline BindGxb700Request& setPoolKey(string poolKey) { DARABONBA_PTR_SET_VALUE(poolKey_, poolKey) };


    // recType Field Functions 
    bool hasRecType() const { return this->recType_ != nullptr;};
    void deleteRecType() { this->recType_ = nullptr;};
    inline string getRecType() const { DARABONBA_PTR_GET_DEFAULT(recType_, "") };
    inline BindGxb700Request& setRecType(string recType) { DARABONBA_PTR_SET_VALUE(recType_, recType) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BindGxb700Request& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BindGxb700Request& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // telB Field Functions 
    bool hasTelB() const { return this->telB_ != nullptr;};
    void deleteTelB() { this->telB_ = nullptr;};
    inline string getTelB() const { DARABONBA_PTR_GET_DEFAULT(telB_, "") };
    inline BindGxb700Request& setTelB(string telB) { DARABONBA_PTR_SET_VALUE(telB_, telB) };


    // telX Field Functions 
    bool hasTelX() const { return this->telX_ != nullptr;};
    void deleteTelX() { this->telX_ = nullptr;};
    inline string getTelX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
    inline BindGxb700Request& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


  protected:
    // The ASR model ID. Valid values: 
    // 
    // - General-Phone-Chinese Mandarin model ID: 7ee372834d2f4cc7ac0d0ab2d0ae1aac 
    // - General-Phone-Chinese Cantonese model ID: 9b4afe3d224e4fa3bf963697113e2f77 
    // - General-Phone-Regional Accent model ID: 3655a6cb94764145a1f9a38a3c3b3b4b.
    shared_ptr<string> asrModelId_ {};
    // The audio prompt code.
    // 
    // 
    // - GCallX_Gpre: the audio prompt code played to the caller before the call is connected when a number in group G calls number X.
    // - GCallX_Gin: the audio prompt code played to the caller after the call is connected when a number in group G calls number X.
    // - GCallX_Bin: the audio prompt code played to user B after the call is connected when a number in group G calls number X.
    // - BCallX_Bpre: the audio prompt code played to user B before the call is connected when user B calls number X.
    // - BCallX_Gin: the audio prompt code played to the callee after the call is connected when number X is called.
    // - BCallX_Bin: the audio prompt code played to user B after the call is connected when user B calls number X.
    shared_ptr<string> audio_ {};
    // The one-way call restriction logic. Valid values:
    // 
    // - CONTROL_BX_DISABLE: number B cannot call number X.
    // - CONTROL_GX_DISABLE: numbers in number group G cannot call number X.
    shared_ptr<string> callRestrict_ {};
    // The sequential ringing duration. Unit: seconds. Valid values: 5 to 20.
    shared_ptr<int64_t> callTimeout_ {};
    // Phone number A.
    // The DefaultA number for the GXB private number.
    // 
    // > Note
    // The callback mode can be configured at the number pool level. When the callback mode is set to default, this field takes effect. When user B calls number X, the call is forwarded to this A number by default. If number A is not configured, the call cannot be connected.
    // To update number A, call the number binding modification operation.
    shared_ptr<string> defaultA_ {};
    // The DTMF key configuration, used when setting up AXB intermediate number binding. The following items can be configured:
    // 
    // - endCallIvrPhoneNo: the party to play the audio prompt to, A or B. 
    // - waitingDtmfTime: the maximum wait time after the first audio prompt is played. Maximum value: 30 seconds. 
    // - maxLoop dtmf: the maximum number of times the first audio file is played in a loop when the key input does not match. Maximum value: 5. 
    // - step1File: the name of the first audio file. 
    // - step2File: the name of the second audio file.
    // - validKey: the valid key values, such as 1,2. Only two valid key values can be configured, separated by ",". 
    // - waitingEndCall: the carrier hang-up wait time. Maximum value: 10 seconds.
    shared_ptr<string> dtmfConfig_ {};
    // The expiration time of the number binding.
    // 
    // > Note
    // The expiration time must be at least 1 minute later than the current binding time, accurate to the second.
    // You can manually unbind the number at any time before the binding expires.
    // If you unbind a number that is in an active call, the current call is not affected.
    // 
    // This parameter is required.
    shared_ptr<string> expiration_ {};
    // The ID of number group G.
    // 
    // Number group G is created by using the "Create G Number Group" message.
    shared_ptr<string> groupId_ {};
    // - The Industrial Internet identifier code, which has a one-to-one mapping with OrderID.
    // 
    // - The code supports characters such as "." and "/" as domain separators. The code must not contain non-printable characters such as spaces or line breaks.
    // 
    // - This field is required when the business user generates the Industrial Internet identifier code independently.
    shared_ptr<string> industrialId_ {};
    // Specifies whether to enable the ASR service. Valid values: 
    // 
    // - false: Disabled (default value).
    // 
    // - true: Enabled.
    shared_ptr<bool> needAsr_ {};
    // Specifies whether the business user requires all call media files generated by this number binding relationship. Valid values:
    // 
    // - true: Enable recording.
    // - false: Disable recording (default value).
    shared_ptr<bool> needRecord_ {};
    // The business order code.
    // 
    // - This code has a one-to-one mapping with the actual business order and must be unique.
    // 
    // - The code supports characters such as "." and "/" as domain separators. The code must not contain non-printable characters such as spaces or line breaks.
    // 
    // - This field is required when the business user submits a business order code and the platform generates an Industrial Internet identifier code.
    shared_ptr<string> orderId_ {};
    // An external business extension field. This parameter is returned in the call record receipt message.
    shared_ptr<string> outId_ {};
    // The external business ID.
    shared_ptr<string> outOrderId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The key of the China 700 number pool.
    // 
    // This parameter is required.
    shared_ptr<string> poolKey_ {};
    // The recording type. Valid values: mp3 and wav.
    shared_ptr<string> recType_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Phone number of user B.
    // 
    // This parameter is required.
    shared_ptr<string> telB_ {};
    // The intermediate number X. If the business user does not specify an X number, the platform assigns a number from the number pool as the X number.
    shared_ptr<string> telX_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif

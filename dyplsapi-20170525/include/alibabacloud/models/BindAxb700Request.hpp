// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAXB700REQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDAXB700REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindAxb700Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAxb700Request& obj) { 
      DARABONBA_PTR_TO_JSON(AsrModelId, asrModelId_);
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(CallRestrict, callRestrict_);
      DARABONBA_PTR_TO_JSON(CallTimeout, callTimeout_);
      DARABONBA_PTR_TO_JSON(DtmfConfig, dtmfConfig_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
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
      DARABONBA_PTR_TO_JSON(TelA, telA_);
      DARABONBA_PTR_TO_JSON(TelB, telB_);
      DARABONBA_PTR_TO_JSON(TelX, telX_);
    };
    friend void from_json(const Darabonba::Json& j, BindAxb700Request& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrModelId, asrModelId_);
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(CallRestrict, callRestrict_);
      DARABONBA_PTR_FROM_JSON(CallTimeout, callTimeout_);
      DARABONBA_PTR_FROM_JSON(DtmfConfig, dtmfConfig_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
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
      DARABONBA_PTR_FROM_JSON(TelA, telA_);
      DARABONBA_PTR_FROM_JSON(TelB, telB_);
      DARABONBA_PTR_FROM_JSON(TelX, telX_);
    };
    BindAxb700Request() = default ;
    BindAxb700Request(const BindAxb700Request &) = default ;
    BindAxb700Request(BindAxb700Request &&) = default ;
    BindAxb700Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAxb700Request() = default ;
    BindAxb700Request& operator=(const BindAxb700Request &) = default ;
    BindAxb700Request& operator=(BindAxb700Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asrModelId_ == nullptr
        && this->audio_ == nullptr && this->callRestrict_ == nullptr && this->callTimeout_ == nullptr && this->dtmfConfig_ == nullptr && this->expiration_ == nullptr
        && this->industrialId_ == nullptr && this->needAsr_ == nullptr && this->needRecord_ == nullptr && this->orderId_ == nullptr && this->outId_ == nullptr
        && this->outOrderId_ == nullptr && this->ownerId_ == nullptr && this->poolKey_ == nullptr && this->recType_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->telA_ == nullptr && this->telB_ == nullptr && this->telX_ == nullptr; };
    // asrModelId Field Functions 
    bool hasAsrModelId() const { return this->asrModelId_ != nullptr;};
    void deleteAsrModelId() { this->asrModelId_ = nullptr;};
    inline string getAsrModelId() const { DARABONBA_PTR_GET_DEFAULT(asrModelId_, "") };
    inline BindAxb700Request& setAsrModelId(string asrModelId) { DARABONBA_PTR_SET_VALUE(asrModelId_, asrModelId) };


    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline string getAudio() const { DARABONBA_PTR_GET_DEFAULT(audio_, "") };
    inline BindAxb700Request& setAudio(string audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };


    // callRestrict Field Functions 
    bool hasCallRestrict() const { return this->callRestrict_ != nullptr;};
    void deleteCallRestrict() { this->callRestrict_ = nullptr;};
    inline string getCallRestrict() const { DARABONBA_PTR_GET_DEFAULT(callRestrict_, "") };
    inline BindAxb700Request& setCallRestrict(string callRestrict) { DARABONBA_PTR_SET_VALUE(callRestrict_, callRestrict) };


    // callTimeout Field Functions 
    bool hasCallTimeout() const { return this->callTimeout_ != nullptr;};
    void deleteCallTimeout() { this->callTimeout_ = nullptr;};
    inline int64_t getCallTimeout() const { DARABONBA_PTR_GET_DEFAULT(callTimeout_, 0L) };
    inline BindAxb700Request& setCallTimeout(int64_t callTimeout) { DARABONBA_PTR_SET_VALUE(callTimeout_, callTimeout) };


    // dtmfConfig Field Functions 
    bool hasDtmfConfig() const { return this->dtmfConfig_ != nullptr;};
    void deleteDtmfConfig() { this->dtmfConfig_ = nullptr;};
    inline string getDtmfConfig() const { DARABONBA_PTR_GET_DEFAULT(dtmfConfig_, "") };
    inline BindAxb700Request& setDtmfConfig(string dtmfConfig) { DARABONBA_PTR_SET_VALUE(dtmfConfig_, dtmfConfig) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline BindAxb700Request& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // industrialId Field Functions 
    bool hasIndustrialId() const { return this->industrialId_ != nullptr;};
    void deleteIndustrialId() { this->industrialId_ = nullptr;};
    inline string getIndustrialId() const { DARABONBA_PTR_GET_DEFAULT(industrialId_, "") };
    inline BindAxb700Request& setIndustrialId(string industrialId) { DARABONBA_PTR_SET_VALUE(industrialId_, industrialId) };


    // needAsr Field Functions 
    bool hasNeedAsr() const { return this->needAsr_ != nullptr;};
    void deleteNeedAsr() { this->needAsr_ = nullptr;};
    inline bool getNeedAsr() const { DARABONBA_PTR_GET_DEFAULT(needAsr_, false) };
    inline BindAxb700Request& setNeedAsr(bool needAsr) { DARABONBA_PTR_SET_VALUE(needAsr_, needAsr) };


    // needRecord Field Functions 
    bool hasNeedRecord() const { return this->needRecord_ != nullptr;};
    void deleteNeedRecord() { this->needRecord_ = nullptr;};
    inline bool getNeedRecord() const { DARABONBA_PTR_GET_DEFAULT(needRecord_, false) };
    inline BindAxb700Request& setNeedRecord(bool needRecord) { DARABONBA_PTR_SET_VALUE(needRecord_, needRecord) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline BindAxb700Request& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline BindAxb700Request& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline BindAxb700Request& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BindAxb700Request& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // poolKey Field Functions 
    bool hasPoolKey() const { return this->poolKey_ != nullptr;};
    void deletePoolKey() { this->poolKey_ = nullptr;};
    inline string getPoolKey() const { DARABONBA_PTR_GET_DEFAULT(poolKey_, "") };
    inline BindAxb700Request& setPoolKey(string poolKey) { DARABONBA_PTR_SET_VALUE(poolKey_, poolKey) };


    // recType Field Functions 
    bool hasRecType() const { return this->recType_ != nullptr;};
    void deleteRecType() { this->recType_ = nullptr;};
    inline string getRecType() const { DARABONBA_PTR_GET_DEFAULT(recType_, "") };
    inline BindAxb700Request& setRecType(string recType) { DARABONBA_PTR_SET_VALUE(recType_, recType) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BindAxb700Request& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BindAxb700Request& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // telA Field Functions 
    bool hasTelA() const { return this->telA_ != nullptr;};
    void deleteTelA() { this->telA_ = nullptr;};
    inline string getTelA() const { DARABONBA_PTR_GET_DEFAULT(telA_, "") };
    inline BindAxb700Request& setTelA(string telA) { DARABONBA_PTR_SET_VALUE(telA_, telA) };


    // telB Field Functions 
    bool hasTelB() const { return this->telB_ != nullptr;};
    void deleteTelB() { this->telB_ = nullptr;};
    inline string getTelB() const { DARABONBA_PTR_GET_DEFAULT(telB_, "") };
    inline BindAxb700Request& setTelB(string telB) { DARABONBA_PTR_SET_VALUE(telB_, telB) };


    // telX Field Functions 
    bool hasTelX() const { return this->telX_ != nullptr;};
    void deleteTelX() { this->telX_ = nullptr;};
    inline string getTelX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
    inline BindAxb700Request& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


  protected:
    // Optional. The ASR model ID. Valid values:
    // 
    // - General-Phone-Mandarin model ID: 7ee372834d2f4cc7ac0d0ab2d0ae1aac
    // - General-Phone-Cantonese model ID: 9b4afe3d224e4fa3bf963697113e2f77
    // - General-Phone-Regional Accent model ID: 3655a6cb94764145a1f9a38a3c3b3b4b.
    shared_ptr<string> asrModelId_ {};
    // The audio prompt encoding.
    // 
    // - ACallX_Apre: The audio prompt encoding played to A before the call is connected when A calls X.
    // - ACallX_Ain: The audio prompt encoding played to A after the call is connected when A calls X.
    // - ACallX_Bin: The audio prompt encoding played to B after the call is connected when A calls X.
    // - BCallX_Bpre: The audio prompt encoding played to B before the call is connected when B calls X.
    // - BCallX_Ain: The audio prompt encoding played to A after the call is connected when B calls X.
    // - BCallX_Bin: The audio prompt encoding played to B after the call is connected when B calls X.
    shared_ptr<string> audio_ {};
    // The one-way call restriction logic. Valid values:
    // 
    // - CONTROL_AX_DISABLE: Number A cannot call number X.
    // 
    // - CONTROL_BX_DISABLE: Number B cannot call number X.
    shared_ptr<string> callRestrict_ {};
    // The sequential ringing duration. Unit: seconds. Valid values: 5 to 20.
    shared_ptr<int64_t> callTimeout_ {};
    // Optional. The DTMF key configuration for 700AXB number binding. The following items can be configured:
    // 
    // - endCallIvrPhoneNo: The audio playback target, A or B.
    // - waitingDtmfTime: The maximum wait time after the first audio file is played. Maximum value: 30 seconds.
    // - maxLoop dtmf: The maximum number of times the first audio file is replayed when a key press does not match. Maximum value: 5.
    // - step1File: The name of the first audio file.
    // - step2File: The name of the second audio file.
    // - validKey: The valid key values, such as 1,2. Only two valid key values can be configured, separated by commas (,).
    // - waitingEndCall: The carrier hang-up wait time. Maximum value: 10 seconds.
    shared_ptr<string> dtmfConfig_ {};
    // The expiration time of the number binding.
    // 
    // > - The expiration time must be at least 1 minute later than the current binding time, accurate to the second.
    // >- You can manually unbind the number at any time before the binding expires.
    // >- If you unbind a number that is in an active call, the current call is not affected.
    // 
    // This parameter is required.
    shared_ptr<string> expiration_ {};
    // The industrial Internet identifier code, which has a one-to-one mapping with OrderId.
    // 
    // The code supports characters such as "." and "/" as domain separators. The code must not contain non-printable characters such as spaces or line breaks.
    // 
    // This field is required when the caller generates the industrial Internet identifier code independently.
    // 
    // > 
    // > - Either OrderId or IndustrialId is required depending on the business scenario.
    shared_ptr<string> industrialId_ {};
    // Specifies whether to enable the ASR service. Valid values:
    // 
    // - false: Disable (default).
    // 
    // - true: Enable.
    shared_ptr<bool> needAsr_ {};
    // Specifies whether call recording files are required for all calls made through this number binding. Valid values:
    // 
    // - true: Enable recording.
    // 
    // - false: Disable recording (default).
    shared_ptr<bool> needRecord_ {};
    // The business order code.
    // 
    // - This code has a one-to-one mapping with the actual business order and must be unique.
    // 
    // - The code supports characters such as "." and "/" as domain separators. The code must not contain non-printable characters such as spaces or line breaks.
    // 
    // - This field is required when the caller submits a business order code and the platform generates an industrial Internet identifier code.
    // > 
    // > - Either OrderId or IndustrialId is required depending on the business scenario.
    shared_ptr<string> orderId_ {};
    // The external business extension field. This parameter is returned in the call record receipt message.
    shared_ptr<string> outId_ {};
    // The external business ID.
    shared_ptr<string> outOrderId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The key of the China 700 number pool.
    // 
    // This parameter is required.
    shared_ptr<string> poolKey_ {};
    // The recording file format. Valid values: mp3 and wav.
    shared_ptr<string> recType_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The phone number of user A.
    // 
    // This parameter is required.
    shared_ptr<string> telA_ {};
    // The phone number of user B.
    // 
    // This parameter is required.
    shared_ptr<string> telB_ {};
    // Optional. The intermediate number X.
    // > - If the caller does not specify an X number,
    // > - the platform assigns a number from the number pool as the X number.
    shared_ptr<string> telX_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUBS700REQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUBS700REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class UpdateSubs700Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSubs700Request& obj) { 
      DARABONBA_PTR_TO_JSON(AsrModelId, asrModelId_);
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(CallRestrict, callRestrict_);
      DARABONBA_PTR_TO_JSON(DefaultA, defaultA_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(IndustrialId, industrialId_);
      DARABONBA_PTR_TO_JSON(NeedAsr, needAsr_);
      DARABONBA_PTR_TO_JSON(NeedRecord, needRecord_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SubsId, subsId_);
      DARABONBA_PTR_TO_JSON(TelA, telA_);
      DARABONBA_PTR_TO_JSON(TelB, telB_);
      DARABONBA_PTR_TO_JSON(TelX, telX_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSubs700Request& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrModelId, asrModelId_);
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(CallRestrict, callRestrict_);
      DARABONBA_PTR_FROM_JSON(DefaultA, defaultA_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(IndustrialId, industrialId_);
      DARABONBA_PTR_FROM_JSON(NeedAsr, needAsr_);
      DARABONBA_PTR_FROM_JSON(NeedRecord, needRecord_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SubsId, subsId_);
      DARABONBA_PTR_FROM_JSON(TelA, telA_);
      DARABONBA_PTR_FROM_JSON(TelB, telB_);
      DARABONBA_PTR_FROM_JSON(TelX, telX_);
    };
    UpdateSubs700Request() = default ;
    UpdateSubs700Request(const UpdateSubs700Request &) = default ;
    UpdateSubs700Request(UpdateSubs700Request &&) = default ;
    UpdateSubs700Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSubs700Request() = default ;
    UpdateSubs700Request& operator=(const UpdateSubs700Request &) = default ;
    UpdateSubs700Request& operator=(UpdateSubs700Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asrModelId_ == nullptr
        && this->audio_ == nullptr && this->callRestrict_ == nullptr && this->defaultA_ == nullptr && this->expiration_ == nullptr && this->groupId_ == nullptr
        && this->industrialId_ == nullptr && this->needAsr_ == nullptr && this->needRecord_ == nullptr && this->operateType_ == nullptr && this->orderId_ == nullptr
        && this->outId_ == nullptr && this->ownerId_ == nullptr && this->poolKey_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->subsId_ == nullptr && this->telA_ == nullptr && this->telB_ == nullptr && this->telX_ == nullptr; };
    // asrModelId Field Functions 
    bool hasAsrModelId() const { return this->asrModelId_ != nullptr;};
    void deleteAsrModelId() { this->asrModelId_ = nullptr;};
    inline string getAsrModelId() const { DARABONBA_PTR_GET_DEFAULT(asrModelId_, "") };
    inline UpdateSubs700Request& setAsrModelId(string asrModelId) { DARABONBA_PTR_SET_VALUE(asrModelId_, asrModelId) };


    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline string getAudio() const { DARABONBA_PTR_GET_DEFAULT(audio_, "") };
    inline UpdateSubs700Request& setAudio(string audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };


    // callRestrict Field Functions 
    bool hasCallRestrict() const { return this->callRestrict_ != nullptr;};
    void deleteCallRestrict() { this->callRestrict_ = nullptr;};
    inline string getCallRestrict() const { DARABONBA_PTR_GET_DEFAULT(callRestrict_, "") };
    inline UpdateSubs700Request& setCallRestrict(string callRestrict) { DARABONBA_PTR_SET_VALUE(callRestrict_, callRestrict) };


    // defaultA Field Functions 
    bool hasDefaultA() const { return this->defaultA_ != nullptr;};
    void deleteDefaultA() { this->defaultA_ = nullptr;};
    inline string getDefaultA() const { DARABONBA_PTR_GET_DEFAULT(defaultA_, "") };
    inline UpdateSubs700Request& setDefaultA(string defaultA) { DARABONBA_PTR_SET_VALUE(defaultA_, defaultA) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline UpdateSubs700Request& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateSubs700Request& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // industrialId Field Functions 
    bool hasIndustrialId() const { return this->industrialId_ != nullptr;};
    void deleteIndustrialId() { this->industrialId_ = nullptr;};
    inline string getIndustrialId() const { DARABONBA_PTR_GET_DEFAULT(industrialId_, "") };
    inline UpdateSubs700Request& setIndustrialId(string industrialId) { DARABONBA_PTR_SET_VALUE(industrialId_, industrialId) };


    // needAsr Field Functions 
    bool hasNeedAsr() const { return this->needAsr_ != nullptr;};
    void deleteNeedAsr() { this->needAsr_ = nullptr;};
    inline bool getNeedAsr() const { DARABONBA_PTR_GET_DEFAULT(needAsr_, false) };
    inline UpdateSubs700Request& setNeedAsr(bool needAsr) { DARABONBA_PTR_SET_VALUE(needAsr_, needAsr) };


    // needRecord Field Functions 
    bool hasNeedRecord() const { return this->needRecord_ != nullptr;};
    void deleteNeedRecord() { this->needRecord_ = nullptr;};
    inline bool getNeedRecord() const { DARABONBA_PTR_GET_DEFAULT(needRecord_, false) };
    inline UpdateSubs700Request& setNeedRecord(bool needRecord) { DARABONBA_PTR_SET_VALUE(needRecord_, needRecord) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline UpdateSubs700Request& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline UpdateSubs700Request& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline UpdateSubs700Request& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateSubs700Request& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // poolKey Field Functions 
    bool hasPoolKey() const { return this->poolKey_ != nullptr;};
    void deletePoolKey() { this->poolKey_ = nullptr;};
    inline string getPoolKey() const { DARABONBA_PTR_GET_DEFAULT(poolKey_, "") };
    inline UpdateSubs700Request& setPoolKey(string poolKey) { DARABONBA_PTR_SET_VALUE(poolKey_, poolKey) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateSubs700Request& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateSubs700Request& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // subsId Field Functions 
    bool hasSubsId() const { return this->subsId_ != nullptr;};
    void deleteSubsId() { this->subsId_ = nullptr;};
    inline int64_t getSubsId() const { DARABONBA_PTR_GET_DEFAULT(subsId_, 0L) };
    inline UpdateSubs700Request& setSubsId(int64_t subsId) { DARABONBA_PTR_SET_VALUE(subsId_, subsId) };


    // telA Field Functions 
    bool hasTelA() const { return this->telA_ != nullptr;};
    void deleteTelA() { this->telA_ = nullptr;};
    inline string getTelA() const { DARABONBA_PTR_GET_DEFAULT(telA_, "") };
    inline UpdateSubs700Request& setTelA(string telA) { DARABONBA_PTR_SET_VALUE(telA_, telA) };


    // telB Field Functions 
    bool hasTelB() const { return this->telB_ != nullptr;};
    void deleteTelB() { this->telB_ = nullptr;};
    inline string getTelB() const { DARABONBA_PTR_GET_DEFAULT(telB_, "") };
    inline UpdateSubs700Request& setTelB(string telB) { DARABONBA_PTR_SET_VALUE(telB_, telB) };


    // telX Field Functions 
    bool hasTelX() const { return this->telX_ != nullptr;};
    void deleteTelX() { this->telX_ = nullptr;};
    inline string getTelX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
    inline UpdateSubs700Request& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


  protected:
    // The ASR model ID. Valid values:
    // - General-telephone-Mandarin Chinese model ID: 7ee372834d2f4cc7ac0d0ab2d0ae1aac.
    // - General-telephone-Cantonese model ID: 9b4afe3d224e4fa3bf963697113e2f77.
    // - General-telephone-regional accent model ID: 3655a6cb94764145a1f9a38a3c3b3b4b.
    shared_ptr<string> asrModelId_ {};
    // Optional. The audio playback code.
    // - AXB mode:
    // ACallX_Apre: The audio playback code for the voice prompt played to Number A before the call is connected when Number A calls Number X.
    // ACallX_Ain: The audio playback code for the voice prompt played to Number A after the call is connected when Number A calls Number X.
    // ACallX_Bin: The audio playback code for the voice prompt played to Number B after the call is connected when Number A calls Number X.
    // BCallX_Bpre: The audio playback code for the voice prompt played to Number B before the call is connected when Number B calls Number X.
    // BCallX_Ain: The audio playback code for the voice prompt played to Number A after the call is connected when Number B calls Number X.
    // BCallX_Bin: The audio playback code for the voice prompt played to Number B after the call is connected when Number B calls Number X.
    // - GXB mode:
    // GCallX_Gpre: The audio playback code for the voice prompt played to the caller before the call is connected when a number in Group G calls Number X.
    // GCallX_Gin: The audio playback code for the voice prompt played to the caller after the call is connected when a number in Group G calls Number X.
    // GCallX_Bin: The audio playback code for the voice prompt played to Number B after the call is connected when a number in Group G calls Number X.
    // BCallX_Bpre: The audio playback code for the voice prompt played to Number B before the call is connected when Number B calls Number X.
    // BCallX_Gin: The audio playback code for the voice prompt played to the callee after the call is connected when Number B calls Number X.
    // BCallX_Bin: The audio playback code for the voice prompt played to Number B after the call is connected when Number B calls Number X.
    shared_ptr<string> audio_ {};
    // The new single-call restriction logic.
    shared_ptr<string> callRestrict_ {};
    // The default Number A for the GXB private number. Note: The callback mode can be set at the number pool level. When the callback mode is set to the default mode, this field takes effect. When Number B calls Number X, the call is forwarded to this Number A by default. If Number A is not set, the call cannot be connected. To update Number A, call the number binding modification API.
    shared_ptr<string> defaultA_ {};
    // The new expiration time of the binding relationship.
    shared_ptr<string> expiration_ {};
    // The new group ID in the binding relationship.
    shared_ptr<string> groupId_ {};
    // Optional. The Industrial Internet identification code, which has a one-to-one mapping with the OrderId. The code supports characters such as periods (.) and forward slashes (/) to separate code domains. The code must not contain non-printable characters, such as spaces and line breaks. This field is required when the business user generates the Industrial Internet identification code.
    shared_ptr<string> industrialId_ {};
    // Specifies whether to enable the ASR feature. Valid values:
    // - false: Disables the feature. This is the default value.
    // - true: Enables the feature.
    shared_ptr<bool> needAsr_ {};
    // The new media selection in the binding relationship.
    shared_ptr<bool> needRecord_ {};
    // The operation type. Valid values:
    // - updateNoA: Updates Number A.
    // - updateNoB: Updates Number B.
    // - updateExpire: Updates the validity period of the binding relationship.
    // - updateGroup: Updates the Number G group.
    // - updateNoDefaultA: Updates the default callback Number A in GXB mode.
    // - updateCallRestrict: Sets the single-call restriction.
    // - updateOutId: Updates the OutId field.
    // - updateIsRecordingEnabled: Updates the recording status in the binding.
    // - updateAsr: Updates the ASR status in the binding.
    // - updateAudio: Updates the ringtone configuration in the binding.
    // 
    // This parameter is required.
    shared_ptr<string> operateType_ {};
    // The order ID. This parameter is required in practice. Encrypt the order ID for reporting to the regulatory platform.
    shared_ptr<string> orderId_ {};
    // The external business extension field. This parameter is returned in the call record receipt message.
    shared_ptr<string> outId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The key of the number pool.
    // 
    // This parameter is required.
    shared_ptr<string> poolKey_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the binding relationship, which uniquely identifies the number binding relationship.
    // 
    // This parameter is required.
    shared_ptr<int64_t> subsId_ {};
    // The new Number A in the binding relationship.
    shared_ptr<string> telA_ {};
    // The new Number B in the binding relationship.
    shared_ptr<string> telB_ {};
    // The intermediate Number X. If the business user does not specify Number X, the application platform assigns a number from the number pool as Number X.
    // 
    // This parameter is required.
    shared_ptr<string> telX_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif

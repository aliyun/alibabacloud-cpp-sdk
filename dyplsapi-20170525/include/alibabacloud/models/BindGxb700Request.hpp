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
        && return this->audio_ == nullptr && return this->callRestrict_ == nullptr && return this->callTimeout_ == nullptr && return this->defaultA_ == nullptr && return this->dtmfConfig_ == nullptr
        && return this->expiration_ == nullptr && return this->groupId_ == nullptr && return this->industrialId_ == nullptr && return this->needAsr_ == nullptr && return this->needRecord_ == nullptr
        && return this->orderId_ == nullptr && return this->outId_ == nullptr && return this->outOrderId_ == nullptr && return this->ownerId_ == nullptr && return this->poolKey_ == nullptr
        && return this->recType_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->telB_ == nullptr && return this->telX_ == nullptr; };
    // asrModelId Field Functions 
    bool hasAsrModelId() const { return this->asrModelId_ != nullptr;};
    void deleteAsrModelId() { this->asrModelId_ = nullptr;};
    inline string asrModelId() const { DARABONBA_PTR_GET_DEFAULT(asrModelId_, "") };
    inline BindGxb700Request& setAsrModelId(string asrModelId) { DARABONBA_PTR_SET_VALUE(asrModelId_, asrModelId) };


    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline string audio() const { DARABONBA_PTR_GET_DEFAULT(audio_, "") };
    inline BindGxb700Request& setAudio(string audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };


    // callRestrict Field Functions 
    bool hasCallRestrict() const { return this->callRestrict_ != nullptr;};
    void deleteCallRestrict() { this->callRestrict_ = nullptr;};
    inline string callRestrict() const { DARABONBA_PTR_GET_DEFAULT(callRestrict_, "") };
    inline BindGxb700Request& setCallRestrict(string callRestrict) { DARABONBA_PTR_SET_VALUE(callRestrict_, callRestrict) };


    // callTimeout Field Functions 
    bool hasCallTimeout() const { return this->callTimeout_ != nullptr;};
    void deleteCallTimeout() { this->callTimeout_ = nullptr;};
    inline int64_t callTimeout() const { DARABONBA_PTR_GET_DEFAULT(callTimeout_, 0L) };
    inline BindGxb700Request& setCallTimeout(int64_t callTimeout) { DARABONBA_PTR_SET_VALUE(callTimeout_, callTimeout) };


    // defaultA Field Functions 
    bool hasDefaultA() const { return this->defaultA_ != nullptr;};
    void deleteDefaultA() { this->defaultA_ = nullptr;};
    inline string defaultA() const { DARABONBA_PTR_GET_DEFAULT(defaultA_, "") };
    inline BindGxb700Request& setDefaultA(string defaultA) { DARABONBA_PTR_SET_VALUE(defaultA_, defaultA) };


    // dtmfConfig Field Functions 
    bool hasDtmfConfig() const { return this->dtmfConfig_ != nullptr;};
    void deleteDtmfConfig() { this->dtmfConfig_ = nullptr;};
    inline string dtmfConfig() const { DARABONBA_PTR_GET_DEFAULT(dtmfConfig_, "") };
    inline BindGxb700Request& setDtmfConfig(string dtmfConfig) { DARABONBA_PTR_SET_VALUE(dtmfConfig_, dtmfConfig) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline BindGxb700Request& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline BindGxb700Request& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // industrialId Field Functions 
    bool hasIndustrialId() const { return this->industrialId_ != nullptr;};
    void deleteIndustrialId() { this->industrialId_ = nullptr;};
    inline string industrialId() const { DARABONBA_PTR_GET_DEFAULT(industrialId_, "") };
    inline BindGxb700Request& setIndustrialId(string industrialId) { DARABONBA_PTR_SET_VALUE(industrialId_, industrialId) };


    // needAsr Field Functions 
    bool hasNeedAsr() const { return this->needAsr_ != nullptr;};
    void deleteNeedAsr() { this->needAsr_ = nullptr;};
    inline bool needAsr() const { DARABONBA_PTR_GET_DEFAULT(needAsr_, false) };
    inline BindGxb700Request& setNeedAsr(bool needAsr) { DARABONBA_PTR_SET_VALUE(needAsr_, needAsr) };


    // needRecord Field Functions 
    bool hasNeedRecord() const { return this->needRecord_ != nullptr;};
    void deleteNeedRecord() { this->needRecord_ = nullptr;};
    inline bool needRecord() const { DARABONBA_PTR_GET_DEFAULT(needRecord_, false) };
    inline BindGxb700Request& setNeedRecord(bool needRecord) { DARABONBA_PTR_SET_VALUE(needRecord_, needRecord) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline BindGxb700Request& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline BindGxb700Request& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline BindGxb700Request& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BindGxb700Request& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // poolKey Field Functions 
    bool hasPoolKey() const { return this->poolKey_ != nullptr;};
    void deletePoolKey() { this->poolKey_ = nullptr;};
    inline string poolKey() const { DARABONBA_PTR_GET_DEFAULT(poolKey_, "") };
    inline BindGxb700Request& setPoolKey(string poolKey) { DARABONBA_PTR_SET_VALUE(poolKey_, poolKey) };


    // recType Field Functions 
    bool hasRecType() const { return this->recType_ != nullptr;};
    void deleteRecType() { this->recType_ = nullptr;};
    inline string recType() const { DARABONBA_PTR_GET_DEFAULT(recType_, "") };
    inline BindGxb700Request& setRecType(string recType) { DARABONBA_PTR_SET_VALUE(recType_, recType) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BindGxb700Request& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BindGxb700Request& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // telB Field Functions 
    bool hasTelB() const { return this->telB_ != nullptr;};
    void deleteTelB() { this->telB_ = nullptr;};
    inline string telB() const { DARABONBA_PTR_GET_DEFAULT(telB_, "") };
    inline BindGxb700Request& setTelB(string telB) { DARABONBA_PTR_SET_VALUE(telB_, telB) };


    // telX Field Functions 
    bool hasTelX() const { return this->telX_ != nullptr;};
    void deleteTelX() { this->telX_ = nullptr;};
    inline string telX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
    inline BindGxb700Request& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


  protected:
    std::shared_ptr<string> asrModelId_ = nullptr;
    std::shared_ptr<string> audio_ = nullptr;
    std::shared_ptr<string> callRestrict_ = nullptr;
    std::shared_ptr<int64_t> callTimeout_ = nullptr;
    std::shared_ptr<string> defaultA_ = nullptr;
    std::shared_ptr<string> dtmfConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> expiration_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> industrialId_ = nullptr;
    std::shared_ptr<bool> needAsr_ = nullptr;
    std::shared_ptr<bool> needRecord_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> outId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> poolKey_ = nullptr;
    std::shared_ptr<string> recType_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> telB_ = nullptr;
    std::shared_ptr<string> telX_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAXNBINDFIXEDLINESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAXNBINDFIXEDLINESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class UpdateAxnBindFixedLineShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAxnBindFixedLineShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Anucode, anucode_);
      DARABONBA_PTR_TO_JSON(Anucodecalled, anucodecalled_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(Extra, extraShrink_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SubId, subId_);
      DARABONBA_PTR_TO_JSON(Subts, subts_);
      DARABONBA_PTR_TO_JSON(TAnucodeConnect, TAnucodeConnect_);
      DARABONBA_PTR_TO_JSON(TelA, telA_);
      DARABONBA_PTR_TO_JSON(TelB, telB_);
      DARABONBA_PTR_TO_JSON(Ts, ts_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAxnBindFixedLineShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Anucode, anucode_);
      DARABONBA_PTR_FROM_JSON(Anucodecalled, anucodecalled_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(Extra, extraShrink_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SubId, subId_);
      DARABONBA_PTR_FROM_JSON(Subts, subts_);
      DARABONBA_PTR_FROM_JSON(TAnucodeConnect, TAnucodeConnect_);
      DARABONBA_PTR_FROM_JSON(TelA, telA_);
      DARABONBA_PTR_FROM_JSON(TelB, telB_);
      DARABONBA_PTR_FROM_JSON(Ts, ts_);
    };
    UpdateAxnBindFixedLineShrinkRequest() = default ;
    UpdateAxnBindFixedLineShrinkRequest(const UpdateAxnBindFixedLineShrinkRequest &) = default ;
    UpdateAxnBindFixedLineShrinkRequest(UpdateAxnBindFixedLineShrinkRequest &&) = default ;
    UpdateAxnBindFixedLineShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAxnBindFixedLineShrinkRequest() = default ;
    UpdateAxnBindFixedLineShrinkRequest& operator=(const UpdateAxnBindFixedLineShrinkRequest &) = default ;
    UpdateAxnBindFixedLineShrinkRequest& operator=(UpdateAxnBindFixedLineShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anucode_ == nullptr
        && this->anucodecalled_ == nullptr && this->appId_ == nullptr && this->expiration_ == nullptr && this->extraShrink_ == nullptr && this->orderId_ == nullptr
        && this->ownerId_ == nullptr && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->subId_ == nullptr
        && this->subts_ == nullptr && this->TAnucodeConnect_ == nullptr && this->telA_ == nullptr && this->telB_ == nullptr && this->ts_ == nullptr; };
    // anucode Field Functions 
    bool hasAnucode() const { return this->anucode_ != nullptr;};
    void deleteAnucode() { this->anucode_ = nullptr;};
    inline string getAnucode() const { DARABONBA_PTR_GET_DEFAULT(anucode_, "") };
    inline UpdateAxnBindFixedLineShrinkRequest& setAnucode(string anucode) { DARABONBA_PTR_SET_VALUE(anucode_, anucode) };


    // anucodecalled Field Functions 
    bool hasAnucodecalled() const { return this->anucodecalled_ != nullptr;};
    void deleteAnucodecalled() { this->anucodecalled_ = nullptr;};
    inline string getAnucodecalled() const { DARABONBA_PTR_GET_DEFAULT(anucodecalled_, "") };
    inline UpdateAxnBindFixedLineShrinkRequest& setAnucodecalled(string anucodecalled) { DARABONBA_PTR_SET_VALUE(anucodecalled_, anucodecalled) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateAxnBindFixedLineShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline UpdateAxnBindFixedLineShrinkRequest& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // extraShrink Field Functions 
    bool hasExtraShrink() const { return this->extraShrink_ != nullptr;};
    void deleteExtraShrink() { this->extraShrink_ = nullptr;};
    inline string getExtraShrink() const { DARABONBA_PTR_GET_DEFAULT(extraShrink_, "") };
    inline UpdateAxnBindFixedLineShrinkRequest& setExtraShrink(string extraShrink) { DARABONBA_PTR_SET_VALUE(extraShrink_, extraShrink) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline UpdateAxnBindFixedLineShrinkRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateAxnBindFixedLineShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateAxnBindFixedLineShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateAxnBindFixedLineShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateAxnBindFixedLineShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // subId Field Functions 
    bool hasSubId() const { return this->subId_ != nullptr;};
    void deleteSubId() { this->subId_ = nullptr;};
    inline string getSubId() const { DARABONBA_PTR_GET_DEFAULT(subId_, "") };
    inline UpdateAxnBindFixedLineShrinkRequest& setSubId(string subId) { DARABONBA_PTR_SET_VALUE(subId_, subId) };


    // subts Field Functions 
    bool hasSubts() const { return this->subts_ != nullptr;};
    void deleteSubts() { this->subts_ = nullptr;};
    inline string getSubts() const { DARABONBA_PTR_GET_DEFAULT(subts_, "") };
    inline UpdateAxnBindFixedLineShrinkRequest& setSubts(string subts) { DARABONBA_PTR_SET_VALUE(subts_, subts) };


    // TAnucodeConnect Field Functions 
    bool hasTAnucodeConnect() const { return this->TAnucodeConnect_ != nullptr;};
    void deleteTAnucodeConnect() { this->TAnucodeConnect_ = nullptr;};
    inline string getTAnucodeConnect() const { DARABONBA_PTR_GET_DEFAULT(TAnucodeConnect_, "") };
    inline UpdateAxnBindFixedLineShrinkRequest& setTAnucodeConnect(string TAnucodeConnect) { DARABONBA_PTR_SET_VALUE(TAnucodeConnect_, TAnucodeConnect) };


    // telA Field Functions 
    bool hasTelA() const { return this->telA_ != nullptr;};
    void deleteTelA() { this->telA_ = nullptr;};
    inline string getTelA() const { DARABONBA_PTR_GET_DEFAULT(telA_, "") };
    inline UpdateAxnBindFixedLineShrinkRequest& setTelA(string telA) { DARABONBA_PTR_SET_VALUE(telA_, telA) };


    // telB Field Functions 
    bool hasTelB() const { return this->telB_ != nullptr;};
    void deleteTelB() { this->telB_ = nullptr;};
    inline string getTelB() const { DARABONBA_PTR_GET_DEFAULT(telB_, "") };
    inline UpdateAxnBindFixedLineShrinkRequest& setTelB(string telB) { DARABONBA_PTR_SET_VALUE(telB_, telB) };


    // ts Field Functions 
    bool hasTs() const { return this->ts_ != nullptr;};
    void deleteTs() { this->ts_ = nullptr;};
    inline string getTs() const { DARABONBA_PTR_GET_DEFAULT(ts_, "") };
    inline UpdateAxnBindFixedLineShrinkRequest& setTs(string ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


  protected:
    // The prompt code for the caller side. This parameter is required for AXB services. The codes must include three scenarios. Enter the codes in the order of B->X, A->X, and other numbers->X, separated by commas.
    // 
    // > 1,2,3 indicates that the prompt code for B->X is 1, the prompt code for A->X is 2, and the prompt code for other numbers->X is 3.
    shared_ptr<string> anucode_ {};
    // The prompt code for the callee side after the call is connected. The codes must include two scenarios. Enter the codes in the order of A as callee and B as callee, separated by commas.
    // 
    // > 1,2 indicates that the prompt code when A is the callee is 1, and the prompt code when B is the callee is 2.
    shared_ptr<string> anucodecalled_ {};
    // The ID of the number pool.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The expiration time. Unit: seconds. Valid values:
    // 
    // - 0: Never expires.
    // 
    // - Other values: If you specify another value, such as 60, the binding is valid for 60 seconds after the number X is allocated. After 60 seconds, the binding is automatically unbound.
    shared_ptr<string> expiration_ {};
    // The extended parameters.
    shared_ptr<string> extraShrink_ {};
    // The unique identifier of the message request.
    // 
    // This parameter is required.
    shared_ptr<string> orderId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The external business extension field. This parameter is returned in the call record receipt message. The maximum length is 100 characters.
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The binding ID.
    // 
    // This parameter is required.
    shared_ptr<string> subId_ {};
    // The binding time. The format is yyyyMMddHHmmss. The time is in UTC+8 and uses a 24-hour clock.
    // 
    // This parameter is required.
    shared_ptr<string> subts_ {};
    // The prompt code for the caller side after the call is connected. The codes must include two scenarios. Enter the codes in the order of A as callee and B as callee, separated by commas.
    // 
    // > 1,2 indicates that the prompt code for the caller side when A is the callee is 1, and the prompt code for the caller side when B is the callee is 2.
    shared_ptr<string> TAnucodeConnect_ {};
    // The number A of the landline AXN privacy number.
    // 
    // > You can set number A to a mobile phone number or a landline number. If you use a landline number, you must include the area code. Do not add a hyphen between the area code and the phone number.
    shared_ptr<string> telA_ {};
    // The number N of the landline AXN privacy number.
    shared_ptr<string> telB_ {};
    // The business timestamp. The format is yyyyMMddHHmmssSSS. The time is in UTC+8 and uses a 24-hour clock, accurate to milliseconds.
    // 
    // This parameter is required.
    shared_ptr<string> ts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif

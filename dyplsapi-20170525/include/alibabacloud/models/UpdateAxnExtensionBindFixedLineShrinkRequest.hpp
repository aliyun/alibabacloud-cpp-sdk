// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAXNEXTENSIONBINDFIXEDLINESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAXNEXTENSIONBINDFIXEDLINESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class UpdateAxnExtensionBindFixedLineShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAxnExtensionBindFixedLineShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Anucode, anucode_);
      DARABONBA_PTR_TO_JSON(Anucodecalled, anucodecalled_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(Extraaxx, extraaxxShrink_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SubId, subId_);
      DARABONBA_PTR_TO_JSON(Subts, subts_);
      DARABONBA_PTR_TO_JSON(TAnucodeConnect, TAnucodeConnect_);
      DARABONBA_PTR_TO_JSON(TelA, telA_);
      DARABONBA_PTR_TO_JSON(Ts, ts_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAxnExtensionBindFixedLineShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Anucode, anucode_);
      DARABONBA_PTR_FROM_JSON(Anucodecalled, anucodecalled_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(Extraaxx, extraaxxShrink_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SubId, subId_);
      DARABONBA_PTR_FROM_JSON(Subts, subts_);
      DARABONBA_PTR_FROM_JSON(TAnucodeConnect, TAnucodeConnect_);
      DARABONBA_PTR_FROM_JSON(TelA, telA_);
      DARABONBA_PTR_FROM_JSON(Ts, ts_);
    };
    UpdateAxnExtensionBindFixedLineShrinkRequest() = default ;
    UpdateAxnExtensionBindFixedLineShrinkRequest(const UpdateAxnExtensionBindFixedLineShrinkRequest &) = default ;
    UpdateAxnExtensionBindFixedLineShrinkRequest(UpdateAxnExtensionBindFixedLineShrinkRequest &&) = default ;
    UpdateAxnExtensionBindFixedLineShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAxnExtensionBindFixedLineShrinkRequest() = default ;
    UpdateAxnExtensionBindFixedLineShrinkRequest& operator=(const UpdateAxnExtensionBindFixedLineShrinkRequest &) = default ;
    UpdateAxnExtensionBindFixedLineShrinkRequest& operator=(UpdateAxnExtensionBindFixedLineShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anucode_ == nullptr
        && this->anucodecalled_ == nullptr && this->appId_ == nullptr && this->expiration_ == nullptr && this->extraaxxShrink_ == nullptr && this->orderId_ == nullptr
        && this->ownerId_ == nullptr && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->subId_ == nullptr
        && this->subts_ == nullptr && this->TAnucodeConnect_ == nullptr && this->telA_ == nullptr && this->ts_ == nullptr; };
    // anucode Field Functions 
    bool hasAnucode() const { return this->anucode_ != nullptr;};
    void deleteAnucode() { this->anucode_ = nullptr;};
    inline string getAnucode() const { DARABONBA_PTR_GET_DEFAULT(anucode_, "") };
    inline UpdateAxnExtensionBindFixedLineShrinkRequest& setAnucode(string anucode) { DARABONBA_PTR_SET_VALUE(anucode_, anucode) };


    // anucodecalled Field Functions 
    bool hasAnucodecalled() const { return this->anucodecalled_ != nullptr;};
    void deleteAnucodecalled() { this->anucodecalled_ = nullptr;};
    inline string getAnucodecalled() const { DARABONBA_PTR_GET_DEFAULT(anucodecalled_, "") };
    inline UpdateAxnExtensionBindFixedLineShrinkRequest& setAnucodecalled(string anucodecalled) { DARABONBA_PTR_SET_VALUE(anucodecalled_, anucodecalled) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateAxnExtensionBindFixedLineShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline UpdateAxnExtensionBindFixedLineShrinkRequest& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // extraaxxShrink Field Functions 
    bool hasExtraaxxShrink() const { return this->extraaxxShrink_ != nullptr;};
    void deleteExtraaxxShrink() { this->extraaxxShrink_ = nullptr;};
    inline string getExtraaxxShrink() const { DARABONBA_PTR_GET_DEFAULT(extraaxxShrink_, "") };
    inline UpdateAxnExtensionBindFixedLineShrinkRequest& setExtraaxxShrink(string extraaxxShrink) { DARABONBA_PTR_SET_VALUE(extraaxxShrink_, extraaxxShrink) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline UpdateAxnExtensionBindFixedLineShrinkRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateAxnExtensionBindFixedLineShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateAxnExtensionBindFixedLineShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateAxnExtensionBindFixedLineShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateAxnExtensionBindFixedLineShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // subId Field Functions 
    bool hasSubId() const { return this->subId_ != nullptr;};
    void deleteSubId() { this->subId_ = nullptr;};
    inline string getSubId() const { DARABONBA_PTR_GET_DEFAULT(subId_, "") };
    inline UpdateAxnExtensionBindFixedLineShrinkRequest& setSubId(string subId) { DARABONBA_PTR_SET_VALUE(subId_, subId) };


    // subts Field Functions 
    bool hasSubts() const { return this->subts_ != nullptr;};
    void deleteSubts() { this->subts_ = nullptr;};
    inline string getSubts() const { DARABONBA_PTR_GET_DEFAULT(subts_, "") };
    inline UpdateAxnExtensionBindFixedLineShrinkRequest& setSubts(string subts) { DARABONBA_PTR_SET_VALUE(subts_, subts) };


    // TAnucodeConnect Field Functions 
    bool hasTAnucodeConnect() const { return this->TAnucodeConnect_ != nullptr;};
    void deleteTAnucodeConnect() { this->TAnucodeConnect_ = nullptr;};
    inline string getTAnucodeConnect() const { DARABONBA_PTR_GET_DEFAULT(TAnucodeConnect_, "") };
    inline UpdateAxnExtensionBindFixedLineShrinkRequest& setTAnucodeConnect(string TAnucodeConnect) { DARABONBA_PTR_SET_VALUE(TAnucodeConnect_, TAnucodeConnect) };


    // telA Field Functions 
    bool hasTelA() const { return this->telA_ != nullptr;};
    void deleteTelA() { this->telA_ = nullptr;};
    inline string getTelA() const { DARABONBA_PTR_GET_DEFAULT(telA_, "") };
    inline UpdateAxnExtensionBindFixedLineShrinkRequest& setTelA(string telA) { DARABONBA_PTR_SET_VALUE(telA_, telA) };


    // ts Field Functions 
    bool hasTs() const { return this->ts_ != nullptr;};
    void deleteTs() { this->ts_ = nullptr;};
    inline string getTs() const { DARABONBA_PTR_GET_DEFAULT(ts_, "") };
    inline UpdateAxnExtensionBindFixedLineShrinkRequest& setTs(string ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


  protected:
    // The announcement code for the caller side. This parameter is required for the AXB service. It must contain codes for three scenarios. Specify the codes in the order of "B->X, A->X, and other numbers->X", separated by commas.
    // 
    // > "1,2,3" indicates that the announcement code for B->X is 1, the announcement code for A->X is 2, and the announcement code for other numbers->X is 3.
    shared_ptr<string> anucode_ {};
    // The announcement code for the callee side after the call is connected. It must contain codes for two scenarios. Specify the codes in the order of "A as callee and B as callee", separated by commas.
    // 
    // > "1,2" indicates that the announcement code when number A answers as the callee is 1, and the announcement code when number B answers as the callee is 2.
    shared_ptr<string> anucodecalled_ {};
    // The ID of the number pool.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The expiration time. Unit: seconds. Valid values:
    // 
    // - 0: Never expires.
    // 
    // - Other values: If you specify another value, such as 60, the binding is valid for 60 seconds after number X is allocated. After 60 seconds, the binding is automatically unbound.
    shared_ptr<string> expiration_ {};
    // The extension parameters.
    shared_ptr<string> extraaxxShrink_ {};
    // The unique identifier of the message request.
    // 
    // This parameter is required.
    shared_ptr<string> orderId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The external business extension field. This parameter is returned in the call record receipt message. The value cannot exceed 100 characters in length.
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The binding ID.
    // 
    // This parameter is required.
    shared_ptr<string> subId_ {};
    // The binding time. Format: yyyyMMddHHmmss. The time is in UTC+8 and uses the 24-hour format.
    // 
    // This parameter is required.
    shared_ptr<string> subts_ {};
    // The announcement code for the caller side after the call is connected. It must contain codes for two scenarios. Specify the codes in the order of "A as callee and B as callee", separated by commas.
    // 
    // > "1,2" indicates that the announcement code for the caller side when number A is the callee is 1, and the announcement code for the caller side when number B is the callee is 2.
    shared_ptr<string> TAnucodeConnect_ {};
    // The number A of the landline AXN extension.
    // 
    // > Number A can be set to a mobile phone number or a landline number. For a landline number, the area code must be included, and no hyphen is required between the area code and the number.
    // 
    // This parameter is required.
    shared_ptr<string> telA_ {};
    // The business timestamp. Format: yyyyMMddHHmmssSSS. The time is in UTC+8 and uses the 24-hour format, accurate to milliseconds.
    // 
    // This parameter is required.
    shared_ptr<string> ts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif

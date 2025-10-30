// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAXNEXTENSIONBINDFIXEDLINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAXNEXTENSIONBINDFIXEDLINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAxnExtensionBindFixedLineRequestExtraaxx.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class UpdateAxnExtensionBindFixedLineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAxnExtensionBindFixedLineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Anucode, anucode_);
      DARABONBA_PTR_TO_JSON(Anucodecalled, anucodecalled_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(Extraaxx, extraaxx_);
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
    friend void from_json(const Darabonba::Json& j, UpdateAxnExtensionBindFixedLineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Anucode, anucode_);
      DARABONBA_PTR_FROM_JSON(Anucodecalled, anucodecalled_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(Extraaxx, extraaxx_);
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
    UpdateAxnExtensionBindFixedLineRequest() = default ;
    UpdateAxnExtensionBindFixedLineRequest(const UpdateAxnExtensionBindFixedLineRequest &) = default ;
    UpdateAxnExtensionBindFixedLineRequest(UpdateAxnExtensionBindFixedLineRequest &&) = default ;
    UpdateAxnExtensionBindFixedLineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAxnExtensionBindFixedLineRequest() = default ;
    UpdateAxnExtensionBindFixedLineRequest& operator=(const UpdateAxnExtensionBindFixedLineRequest &) = default ;
    UpdateAxnExtensionBindFixedLineRequest& operator=(UpdateAxnExtensionBindFixedLineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anucode_ == nullptr
        && return this->anucodecalled_ == nullptr && return this->appId_ == nullptr && return this->expiration_ == nullptr && return this->extraaxx_ == nullptr && return this->orderId_ == nullptr
        && return this->ownerId_ == nullptr && return this->remark_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->subId_ == nullptr
        && return this->subts_ == nullptr && return this->TAnucodeConnect_ == nullptr && return this->telA_ == nullptr && return this->ts_ == nullptr; };
    // anucode Field Functions 
    bool hasAnucode() const { return this->anucode_ != nullptr;};
    void deleteAnucode() { this->anucode_ = nullptr;};
    inline string anucode() const { DARABONBA_PTR_GET_DEFAULT(anucode_, "") };
    inline UpdateAxnExtensionBindFixedLineRequest& setAnucode(string anucode) { DARABONBA_PTR_SET_VALUE(anucode_, anucode) };


    // anucodecalled Field Functions 
    bool hasAnucodecalled() const { return this->anucodecalled_ != nullptr;};
    void deleteAnucodecalled() { this->anucodecalled_ = nullptr;};
    inline string anucodecalled() const { DARABONBA_PTR_GET_DEFAULT(anucodecalled_, "") };
    inline UpdateAxnExtensionBindFixedLineRequest& setAnucodecalled(string anucodecalled) { DARABONBA_PTR_SET_VALUE(anucodecalled_, anucodecalled) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateAxnExtensionBindFixedLineRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline UpdateAxnExtensionBindFixedLineRequest& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // extraaxx Field Functions 
    bool hasExtraaxx() const { return this->extraaxx_ != nullptr;};
    void deleteExtraaxx() { this->extraaxx_ = nullptr;};
    inline const UpdateAxnExtensionBindFixedLineRequestExtraaxx & extraaxx() const { DARABONBA_PTR_GET_CONST(extraaxx_, UpdateAxnExtensionBindFixedLineRequestExtraaxx) };
    inline UpdateAxnExtensionBindFixedLineRequestExtraaxx extraaxx() { DARABONBA_PTR_GET(extraaxx_, UpdateAxnExtensionBindFixedLineRequestExtraaxx) };
    inline UpdateAxnExtensionBindFixedLineRequest& setExtraaxx(const UpdateAxnExtensionBindFixedLineRequestExtraaxx & extraaxx) { DARABONBA_PTR_SET_VALUE(extraaxx_, extraaxx) };
    inline UpdateAxnExtensionBindFixedLineRequest& setExtraaxx(UpdateAxnExtensionBindFixedLineRequestExtraaxx && extraaxx) { DARABONBA_PTR_SET_RVALUE(extraaxx_, extraaxx) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline UpdateAxnExtensionBindFixedLineRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateAxnExtensionBindFixedLineRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateAxnExtensionBindFixedLineRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateAxnExtensionBindFixedLineRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateAxnExtensionBindFixedLineRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // subId Field Functions 
    bool hasSubId() const { return this->subId_ != nullptr;};
    void deleteSubId() { this->subId_ = nullptr;};
    inline string subId() const { DARABONBA_PTR_GET_DEFAULT(subId_, "") };
    inline UpdateAxnExtensionBindFixedLineRequest& setSubId(string subId) { DARABONBA_PTR_SET_VALUE(subId_, subId) };


    // subts Field Functions 
    bool hasSubts() const { return this->subts_ != nullptr;};
    void deleteSubts() { this->subts_ = nullptr;};
    inline string subts() const { DARABONBA_PTR_GET_DEFAULT(subts_, "") };
    inline UpdateAxnExtensionBindFixedLineRequest& setSubts(string subts) { DARABONBA_PTR_SET_VALUE(subts_, subts) };


    // TAnucodeConnect Field Functions 
    bool hasTAnucodeConnect() const { return this->TAnucodeConnect_ != nullptr;};
    void deleteTAnucodeConnect() { this->TAnucodeConnect_ = nullptr;};
    inline string TAnucodeConnect() const { DARABONBA_PTR_GET_DEFAULT(TAnucodeConnect_, "") };
    inline UpdateAxnExtensionBindFixedLineRequest& setTAnucodeConnect(string TAnucodeConnect) { DARABONBA_PTR_SET_VALUE(TAnucodeConnect_, TAnucodeConnect) };


    // telA Field Functions 
    bool hasTelA() const { return this->telA_ != nullptr;};
    void deleteTelA() { this->telA_ = nullptr;};
    inline string telA() const { DARABONBA_PTR_GET_DEFAULT(telA_, "") };
    inline UpdateAxnExtensionBindFixedLineRequest& setTelA(string telA) { DARABONBA_PTR_SET_VALUE(telA_, telA) };


    // ts Field Functions 
    bool hasTs() const { return this->ts_ != nullptr;};
    void deleteTs() { this->ts_ = nullptr;};
    inline string ts() const { DARABONBA_PTR_GET_DEFAULT(ts_, "") };
    inline UpdateAxnExtensionBindFixedLineRequest& setTs(string ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


  protected:
    // 放音编码必须包含3个场景的编码。按照“B->X,A->X,其他号码->X”的顺序填写编码，编码之间以逗号分隔。  AXN分机号业务的放音编码,B->X和其他号码->X的编码一致  比如：“1,2,3”表示B->X放音编号为1，A->X放音编号为2， 其他号码->X放音编号为3
    std::shared_ptr<string> anucode_ = nullptr;
    // 被叫侧放音编码  被叫放音编码必须包含2个场景的编码。按照“A被叫,其他号码被叫”的顺序填写编码，编码之间以逗号分隔。  比如：“1,2”表示A号码为被叫侧接听时的放音编号为1，其他号码为被叫侧接听时的放音编号为2
    std::shared_ptr<string> anucodecalled_ = nullptr;
    // 号池ID
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // 单位：秒，必须为数字 0：不会自动解绑 非0：自动解绑周期
    std::shared_ptr<string> expiration_ = nullptr;
    // AXx的扩展参数项
    std::shared_ptr<UpdateAxnExtensionBindFixedLineRequestExtraaxx> extraaxx_ = nullptr;
    // 消息请求唯一标识。
    // 
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // 接入商自有字段，最大250字符长度
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // 绑定id
    // 
    // This parameter is required.
    std::shared_ptr<string> subId_ = nullptr;
    // 格式为yyyyMMddHHmmss。时间采用北京时间，24小时制。
    // 
    // This parameter is required.
    std::shared_ptr<string> subts_ = nullptr;
    // 接通后主叫侧放音编码  接通后主叫侧放音编码必须包含2个场景的编码。按照“A被叫,其他号码被叫”的顺序填写编码，编码之间以逗号分隔。  比如：“1,2”表示A号码为被叫时主叫侧的放音编号为1，其他号码为被叫时主叫侧的放音编号为2
    std::shared_ptr<string> TAnucodeConnect_ = nullptr;
    // A号码
    // 
    // This parameter is required.
    std::shared_ptr<string> telA_ = nullptr;
    // 格式yyyyMMddHHmmssSSS，时间采用北京时间，24小时制，精确至毫秒
    // 
    // This parameter is required.
    std::shared_ptr<string> ts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif

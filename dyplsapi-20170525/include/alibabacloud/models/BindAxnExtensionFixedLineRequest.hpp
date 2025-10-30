// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAXNEXTENSIONFIXEDLINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDAXNEXTENSIONFIXEDLINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BindAxnExtensionFixedLineRequestExtraaxx.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindAxnExtensionFixedLineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAxnExtensionFixedLineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Anucode, anucode_);
      DARABONBA_PTR_TO_JSON(Anucodecalled, anucodecalled_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Areacode, areacode_);
      DARABONBA_PTR_TO_JSON(BindType, bindType_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(Extraaxx, extraaxx_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Subts, subts_);
      DARABONBA_PTR_TO_JSON(TAnucodeConnect, TAnucodeConnect_);
      DARABONBA_PTR_TO_JSON(TelA, telA_);
      DARABONBA_PTR_TO_JSON(TelX, telX_);
      DARABONBA_PTR_TO_JSON(TelXext, telXext_);
      DARABONBA_PTR_TO_JSON(Ts, ts_);
    };
    friend void from_json(const Darabonba::Json& j, BindAxnExtensionFixedLineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Anucode, anucode_);
      DARABONBA_PTR_FROM_JSON(Anucodecalled, anucodecalled_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Areacode, areacode_);
      DARABONBA_PTR_FROM_JSON(BindType, bindType_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(Extraaxx, extraaxx_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Subts, subts_);
      DARABONBA_PTR_FROM_JSON(TAnucodeConnect, TAnucodeConnect_);
      DARABONBA_PTR_FROM_JSON(TelA, telA_);
      DARABONBA_PTR_FROM_JSON(TelX, telX_);
      DARABONBA_PTR_FROM_JSON(TelXext, telXext_);
      DARABONBA_PTR_FROM_JSON(Ts, ts_);
    };
    BindAxnExtensionFixedLineRequest() = default ;
    BindAxnExtensionFixedLineRequest(const BindAxnExtensionFixedLineRequest &) = default ;
    BindAxnExtensionFixedLineRequest(BindAxnExtensionFixedLineRequest &&) = default ;
    BindAxnExtensionFixedLineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAxnExtensionFixedLineRequest() = default ;
    BindAxnExtensionFixedLineRequest& operator=(const BindAxnExtensionFixedLineRequest &) = default ;
    BindAxnExtensionFixedLineRequest& operator=(BindAxnExtensionFixedLineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anucode_ == nullptr
        && return this->anucodecalled_ == nullptr && return this->appId_ == nullptr && return this->areacode_ == nullptr && return this->bindType_ == nullptr && return this->expiration_ == nullptr
        && return this->extraaxx_ == nullptr && return this->orderId_ == nullptr && return this->ownerId_ == nullptr && return this->remark_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->subts_ == nullptr && return this->TAnucodeConnect_ == nullptr && return this->telA_ == nullptr && return this->telX_ == nullptr
        && return this->telXext_ == nullptr && return this->ts_ == nullptr; };
    // anucode Field Functions 
    bool hasAnucode() const { return this->anucode_ != nullptr;};
    void deleteAnucode() { this->anucode_ = nullptr;};
    inline string anucode() const { DARABONBA_PTR_GET_DEFAULT(anucode_, "") };
    inline BindAxnExtensionFixedLineRequest& setAnucode(string anucode) { DARABONBA_PTR_SET_VALUE(anucode_, anucode) };


    // anucodecalled Field Functions 
    bool hasAnucodecalled() const { return this->anucodecalled_ != nullptr;};
    void deleteAnucodecalled() { this->anucodecalled_ = nullptr;};
    inline string anucodecalled() const { DARABONBA_PTR_GET_DEFAULT(anucodecalled_, "") };
    inline BindAxnExtensionFixedLineRequest& setAnucodecalled(string anucodecalled) { DARABONBA_PTR_SET_VALUE(anucodecalled_, anucodecalled) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline BindAxnExtensionFixedLineRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // areacode Field Functions 
    bool hasAreacode() const { return this->areacode_ != nullptr;};
    void deleteAreacode() { this->areacode_ = nullptr;};
    inline string areacode() const { DARABONBA_PTR_GET_DEFAULT(areacode_, "") };
    inline BindAxnExtensionFixedLineRequest& setAreacode(string areacode) { DARABONBA_PTR_SET_VALUE(areacode_, areacode) };


    // bindType Field Functions 
    bool hasBindType() const { return this->bindType_ != nullptr;};
    void deleteBindType() { this->bindType_ = nullptr;};
    inline string bindType() const { DARABONBA_PTR_GET_DEFAULT(bindType_, "") };
    inline BindAxnExtensionFixedLineRequest& setBindType(string bindType) { DARABONBA_PTR_SET_VALUE(bindType_, bindType) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline BindAxnExtensionFixedLineRequest& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // extraaxx Field Functions 
    bool hasExtraaxx() const { return this->extraaxx_ != nullptr;};
    void deleteExtraaxx() { this->extraaxx_ = nullptr;};
    inline const BindAxnExtensionFixedLineRequestExtraaxx & extraaxx() const { DARABONBA_PTR_GET_CONST(extraaxx_, BindAxnExtensionFixedLineRequestExtraaxx) };
    inline BindAxnExtensionFixedLineRequestExtraaxx extraaxx() { DARABONBA_PTR_GET(extraaxx_, BindAxnExtensionFixedLineRequestExtraaxx) };
    inline BindAxnExtensionFixedLineRequest& setExtraaxx(const BindAxnExtensionFixedLineRequestExtraaxx & extraaxx) { DARABONBA_PTR_SET_VALUE(extraaxx_, extraaxx) };
    inline BindAxnExtensionFixedLineRequest& setExtraaxx(BindAxnExtensionFixedLineRequestExtraaxx && extraaxx) { DARABONBA_PTR_SET_RVALUE(extraaxx_, extraaxx) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline BindAxnExtensionFixedLineRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BindAxnExtensionFixedLineRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline BindAxnExtensionFixedLineRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BindAxnExtensionFixedLineRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BindAxnExtensionFixedLineRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // subts Field Functions 
    bool hasSubts() const { return this->subts_ != nullptr;};
    void deleteSubts() { this->subts_ = nullptr;};
    inline string subts() const { DARABONBA_PTR_GET_DEFAULT(subts_, "") };
    inline BindAxnExtensionFixedLineRequest& setSubts(string subts) { DARABONBA_PTR_SET_VALUE(subts_, subts) };


    // TAnucodeConnect Field Functions 
    bool hasTAnucodeConnect() const { return this->TAnucodeConnect_ != nullptr;};
    void deleteTAnucodeConnect() { this->TAnucodeConnect_ = nullptr;};
    inline string TAnucodeConnect() const { DARABONBA_PTR_GET_DEFAULT(TAnucodeConnect_, "") };
    inline BindAxnExtensionFixedLineRequest& setTAnucodeConnect(string TAnucodeConnect) { DARABONBA_PTR_SET_VALUE(TAnucodeConnect_, TAnucodeConnect) };


    // telA Field Functions 
    bool hasTelA() const { return this->telA_ != nullptr;};
    void deleteTelA() { this->telA_ = nullptr;};
    inline string telA() const { DARABONBA_PTR_GET_DEFAULT(telA_, "") };
    inline BindAxnExtensionFixedLineRequest& setTelA(string telA) { DARABONBA_PTR_SET_VALUE(telA_, telA) };


    // telX Field Functions 
    bool hasTelX() const { return this->telX_ != nullptr;};
    void deleteTelX() { this->telX_ = nullptr;};
    inline string telX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
    inline BindAxnExtensionFixedLineRequest& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


    // telXext Field Functions 
    bool hasTelXext() const { return this->telXext_ != nullptr;};
    void deleteTelXext() { this->telXext_ = nullptr;};
    inline string telXext() const { DARABONBA_PTR_GET_DEFAULT(telXext_, "") };
    inline BindAxnExtensionFixedLineRequest& setTelXext(string telXext) { DARABONBA_PTR_SET_VALUE(telXext_, telXext) };


    // ts Field Functions 
    bool hasTs() const { return this->ts_ != nullptr;};
    void deleteTs() { this->ts_ = nullptr;};
    inline string ts() const { DARABONBA_PTR_GET_DEFAULT(ts_, "") };
    inline BindAxnExtensionFixedLineRequest& setTs(string ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> anucode_ = nullptr;
    // 被叫侧放音编码  被叫放音编码必须包含2个场景的编码。按照“A被叫,其他号码被叫”的顺序填写编码，编码之间以逗号分隔。  比如：“1,2”表示A号码为被叫侧接听时的放音编号为1，其他号码为被叫侧接听时的放音编号为2
    std::shared_ptr<string> anucodecalled_ = nullptr;
    // 号池ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // 去掉“0” 例如：北京（10）；在平台分配X号码模式中，平台从号码池中分配该地区的X号码，避免产生呼叫长途费
    std::shared_ptr<string> areacode_ = nullptr;
    // 绑定类型，值如下： mode101：客户携带X号码 mode102：平台分配X号码
    // 
    // This parameter is required.
    std::shared_ptr<string> bindType_ = nullptr;
    // 单位：秒，必须为数字 0：不会自动解绑 非0：自动解绑周期
    // 
    // This parameter is required.
    std::shared_ptr<string> expiration_ = nullptr;
    // 额外字段
    std::shared_ptr<BindAxnExtensionFixedLineRequestExtraaxx> extraaxx_ = nullptr;
    // 消息请求唯一标识
    // 
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // 接入商自有字段，最大250字符长度
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
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
    // X号码；平台分配号码模式下，该参数可不带，系统忽略该参数
    std::shared_ptr<string> telX_ = nullptr;
    // 分机号；平台分配号码模式下，该参数可不带，系统忽略该参数
    std::shared_ptr<string> telXext_ = nullptr;
    // 格式yyyyMMddHHmmssSSS，时间采用北京时间，24小时制，精确至毫秒
    // 
    // This parameter is required.
    std::shared_ptr<string> ts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif

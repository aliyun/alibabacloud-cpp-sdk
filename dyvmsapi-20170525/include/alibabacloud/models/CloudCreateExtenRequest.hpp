// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDCREATEEXTENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDCREATEEXTENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudCreateExtenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudCreateExtenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Allow, allow_);
      DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
      DARABONBA_PTR_TO_JSON(CallPower, callPower_);
      DARABONBA_PTR_TO_JSON(Denoise, denoise_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(Exten, exten_);
      DARABONBA_PTR_TO_JSON(IadName, iadName_);
      DARABONBA_PTR_TO_JSON(IbRecord, ibRecord_);
      DARABONBA_PTR_TO_JSON(IsDirect, isDirect_);
      DARABONBA_PTR_TO_JSON(IsOb, isOb_);
      DARABONBA_PTR_TO_JSON(JitterBuffer, jitterBuffer_);
      DARABONBA_PTR_TO_JSON(ObRecord, obRecord_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CloudCreateExtenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Allow, allow_);
      DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
      DARABONBA_PTR_FROM_JSON(CallPower, callPower_);
      DARABONBA_PTR_FROM_JSON(Denoise, denoise_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(Exten, exten_);
      DARABONBA_PTR_FROM_JSON(IadName, iadName_);
      DARABONBA_PTR_FROM_JSON(IbRecord, ibRecord_);
      DARABONBA_PTR_FROM_JSON(IsDirect, isDirect_);
      DARABONBA_PTR_FROM_JSON(IsOb, isOb_);
      DARABONBA_PTR_FROM_JSON(JitterBuffer, jitterBuffer_);
      DARABONBA_PTR_FROM_JSON(ObRecord, obRecord_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CloudCreateExtenRequest() = default ;
    CloudCreateExtenRequest(const CloudCreateExtenRequest &) = default ;
    CloudCreateExtenRequest(CloudCreateExtenRequest &&) = default ;
    CloudCreateExtenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudCreateExtenRequest() = default ;
    CloudCreateExtenRequest& operator=(const CloudCreateExtenRequest &) = default ;
    CloudCreateExtenRequest& operator=(CloudCreateExtenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allow_ == nullptr
        && this->areaCode_ == nullptr && this->callPower_ == nullptr && this->denoise_ == nullptr && this->enterpriseId_ == nullptr && this->exten_ == nullptr
        && this->iadName_ == nullptr && this->ibRecord_ == nullptr && this->isDirect_ == nullptr && this->isOb_ == nullptr && this->jitterBuffer_ == nullptr
        && this->obRecord_ == nullptr && this->ownerId_ == nullptr && this->password_ == nullptr && this->property_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->type_ == nullptr; };
    // allow Field Functions 
    bool hasAllow() const { return this->allow_ != nullptr;};
    void deleteAllow() { this->allow_ = nullptr;};
    inline string getAllow() const { DARABONBA_PTR_GET_DEFAULT(allow_, "") };
    inline CloudCreateExtenRequest& setAllow(string allow) { DARABONBA_PTR_SET_VALUE(allow_, allow) };


    // areaCode Field Functions 
    bool hasAreaCode() const { return this->areaCode_ != nullptr;};
    void deleteAreaCode() { this->areaCode_ = nullptr;};
    inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
    inline CloudCreateExtenRequest& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


    // callPower Field Functions 
    bool hasCallPower() const { return this->callPower_ != nullptr;};
    void deleteCallPower() { this->callPower_ = nullptr;};
    inline string getCallPower() const { DARABONBA_PTR_GET_DEFAULT(callPower_, "") };
    inline CloudCreateExtenRequest& setCallPower(string callPower) { DARABONBA_PTR_SET_VALUE(callPower_, callPower) };


    // denoise Field Functions 
    bool hasDenoise() const { return this->denoise_ != nullptr;};
    void deleteDenoise() { this->denoise_ = nullptr;};
    inline string getDenoise() const { DARABONBA_PTR_GET_DEFAULT(denoise_, "") };
    inline CloudCreateExtenRequest& setDenoise(string denoise) { DARABONBA_PTR_SET_VALUE(denoise_, denoise) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudCreateExtenRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // exten Field Functions 
    bool hasExten() const { return this->exten_ != nullptr;};
    void deleteExten() { this->exten_ = nullptr;};
    inline string getExten() const { DARABONBA_PTR_GET_DEFAULT(exten_, "") };
    inline CloudCreateExtenRequest& setExten(string exten) { DARABONBA_PTR_SET_VALUE(exten_, exten) };


    // iadName Field Functions 
    bool hasIadName() const { return this->iadName_ != nullptr;};
    void deleteIadName() { this->iadName_ = nullptr;};
    inline string getIadName() const { DARABONBA_PTR_GET_DEFAULT(iadName_, "") };
    inline CloudCreateExtenRequest& setIadName(string iadName) { DARABONBA_PTR_SET_VALUE(iadName_, iadName) };


    // ibRecord Field Functions 
    bool hasIbRecord() const { return this->ibRecord_ != nullptr;};
    void deleteIbRecord() { this->ibRecord_ = nullptr;};
    inline int64_t getIbRecord() const { DARABONBA_PTR_GET_DEFAULT(ibRecord_, 0L) };
    inline CloudCreateExtenRequest& setIbRecord(int64_t ibRecord) { DARABONBA_PTR_SET_VALUE(ibRecord_, ibRecord) };


    // isDirect Field Functions 
    bool hasIsDirect() const { return this->isDirect_ != nullptr;};
    void deleteIsDirect() { this->isDirect_ = nullptr;};
    inline int64_t getIsDirect() const { DARABONBA_PTR_GET_DEFAULT(isDirect_, 0L) };
    inline CloudCreateExtenRequest& setIsDirect(int64_t isDirect) { DARABONBA_PTR_SET_VALUE(isDirect_, isDirect) };


    // isOb Field Functions 
    bool hasIsOb() const { return this->isOb_ != nullptr;};
    void deleteIsOb() { this->isOb_ = nullptr;};
    inline string getIsOb() const { DARABONBA_PTR_GET_DEFAULT(isOb_, "") };
    inline CloudCreateExtenRequest& setIsOb(string isOb) { DARABONBA_PTR_SET_VALUE(isOb_, isOb) };


    // jitterBuffer Field Functions 
    bool hasJitterBuffer() const { return this->jitterBuffer_ != nullptr;};
    void deleteJitterBuffer() { this->jitterBuffer_ = nullptr;};
    inline int64_t getJitterBuffer() const { DARABONBA_PTR_GET_DEFAULT(jitterBuffer_, 0L) };
    inline CloudCreateExtenRequest& setJitterBuffer(int64_t jitterBuffer) { DARABONBA_PTR_SET_VALUE(jitterBuffer_, jitterBuffer) };


    // obRecord Field Functions 
    bool hasObRecord() const { return this->obRecord_ != nullptr;};
    void deleteObRecord() { this->obRecord_ = nullptr;};
    inline int64_t getObRecord() const { DARABONBA_PTR_GET_DEFAULT(obRecord_, 0L) };
    inline CloudCreateExtenRequest& setObRecord(int64_t obRecord) { DARABONBA_PTR_SET_VALUE(obRecord_, obRecord) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CloudCreateExtenRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CloudCreateExtenRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline string getProperty() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
    inline CloudCreateExtenRequest& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CloudCreateExtenRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CloudCreateExtenRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline CloudCreateExtenRequest& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // 允许的语音编码,支持格式: 1. g729 2. g729,alaw,ulaw 3. alaw,ulaw,g729 4. alaw,ulaw 5. myopus,alaw,ulaw5. myopus,alaw,ulaw6. myopus,g729,alaw,ulaw 7. myopus,g729 公网+远程话机支持配置1/2/3;专线+远程话机支持配置1/2;公网+软电话支持配置4;专线+软电话支持配置5;
    shared_ptr<string> allow_ {};
    // 区号
    // 
    // This parameter is required.
    shared_ptr<string> areaCode_ {};
    // 呼叫权限；0：无限制，1：国内长途，2：国内本市，3：内部呼叫，默认无限制
    shared_ptr<string> callPower_ {};
    // 降噪开关；0:关闭 1:开启 (该参数只有在类型为注册到webrtc才有效)
    shared_ptr<string> denoise_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 分机号,3-11位
    // 
    // This parameter is required.
    shared_ptr<string> exten_ {};
    // iad网关；该参数只有在类型为，注册到IAD分机，才有效
    shared_ptr<string> iadName_ {};
    // 呼入是否录音；0：不录用，1：录音，默认录音
    shared_ptr<int64_t> ibRecord_ {};
    // 是否允许摘机外呼，0：不允许，1：可以，默认允许
    shared_ptr<int64_t> isDirect_ {};
    // 是否允许外呼；0：不允许，1：可以，默认允许
    shared_ptr<string> isOb_ {};
    // 网络防抖；0：关闭，1：开启，默认关闭
    shared_ptr<int64_t> jitterBuffer_ {};
    // 外呼是否录音；0：不录音，1：录音，默认录音
    shared_ptr<int64_t> obRecord_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 密码
    // 
    // This parameter is required.
    shared_ptr<string> password_ {};
    // 属性
    shared_ptr<string> property_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 类型；1. 注册到IAD分机 2.注册到webrtc 3.注册到远程话机
    // 
    // This parameter is required.
    shared_ptr<int64_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif

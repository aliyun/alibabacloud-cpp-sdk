// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDCREATEEXTENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDCREATEEXTENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudCreateExtenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudCreateExtenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudCreateExtenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudCreateExtenResponseBody() = default ;
    CloudCreateExtenResponseBody(const CloudCreateExtenResponseBody &) = default ;
    CloudCreateExtenResponseBody(CloudCreateExtenResponseBody &&) = default ;
    CloudCreateExtenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudCreateExtenResponseBody() = default ;
    CloudCreateExtenResponseBody& operator=(const CloudCreateExtenResponseBody &) = default ;
    CloudCreateExtenResponseBody& operator=(CloudCreateExtenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Allow, allow_);
        DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
        DARABONBA_PTR_TO_JSON(BindGatewayId, bindGatewayId_);
        DARABONBA_PTR_TO_JSON(CallPower, callPower_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Denoise, denoise_);
        DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
        DARABONBA_PTR_TO_JSON(Exten, exten_);
        DARABONBA_PTR_TO_JSON(IbRecord, ibRecord_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsDirect, isDirect_);
        DARABONBA_PTR_TO_JSON(IsOb, isOb_);
        DARABONBA_PTR_TO_JSON(ObRecord, obRecord_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Allow, allow_);
        DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
        DARABONBA_PTR_FROM_JSON(BindGatewayId, bindGatewayId_);
        DARABONBA_PTR_FROM_JSON(CallPower, callPower_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Denoise, denoise_);
        DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
        DARABONBA_PTR_FROM_JSON(Exten, exten_);
        DARABONBA_PTR_FROM_JSON(IbRecord, ibRecord_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsDirect, isDirect_);
        DARABONBA_PTR_FROM_JSON(IsOb, isOb_);
        DARABONBA_PTR_FROM_JSON(ObRecord, obRecord_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allow_ == nullptr
        && this->areaCode_ == nullptr && this->bindGatewayId_ == nullptr && this->callPower_ == nullptr && this->createTime_ == nullptr && this->denoise_ == nullptr
        && this->enterpriseId_ == nullptr && this->exten_ == nullptr && this->ibRecord_ == nullptr && this->id_ == nullptr && this->isDirect_ == nullptr
        && this->isOb_ == nullptr && this->obRecord_ == nullptr && this->password_ == nullptr && this->type_ == nullptr; };
      // allow Field Functions 
      bool hasAllow() const { return this->allow_ != nullptr;};
      void deleteAllow() { this->allow_ = nullptr;};
      inline string getAllow() const { DARABONBA_PTR_GET_DEFAULT(allow_, "") };
      inline Data& setAllow(string allow) { DARABONBA_PTR_SET_VALUE(allow_, allow) };


      // areaCode Field Functions 
      bool hasAreaCode() const { return this->areaCode_ != nullptr;};
      void deleteAreaCode() { this->areaCode_ = nullptr;};
      inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
      inline Data& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


      // bindGatewayId Field Functions 
      bool hasBindGatewayId() const { return this->bindGatewayId_ != nullptr;};
      void deleteBindGatewayId() { this->bindGatewayId_ = nullptr;};
      inline int64_t getBindGatewayId() const { DARABONBA_PTR_GET_DEFAULT(bindGatewayId_, 0L) };
      inline Data& setBindGatewayId(int64_t bindGatewayId) { DARABONBA_PTR_SET_VALUE(bindGatewayId_, bindGatewayId) };


      // callPower Field Functions 
      bool hasCallPower() const { return this->callPower_ != nullptr;};
      void deleteCallPower() { this->callPower_ = nullptr;};
      inline string getCallPower() const { DARABONBA_PTR_GET_DEFAULT(callPower_, "") };
      inline Data& setCallPower(string callPower) { DARABONBA_PTR_SET_VALUE(callPower_, callPower) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // denoise Field Functions 
      bool hasDenoise() const { return this->denoise_ != nullptr;};
      void deleteDenoise() { this->denoise_ = nullptr;};
      inline int64_t getDenoise() const { DARABONBA_PTR_GET_DEFAULT(denoise_, 0L) };
      inline Data& setDenoise(int64_t denoise) { DARABONBA_PTR_SET_VALUE(denoise_, denoise) };


      // enterpriseId Field Functions 
      bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
      void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
      inline string getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, "") };
      inline Data& setEnterpriseId(string enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


      // exten Field Functions 
      bool hasExten() const { return this->exten_ != nullptr;};
      void deleteExten() { this->exten_ = nullptr;};
      inline string getExten() const { DARABONBA_PTR_GET_DEFAULT(exten_, "") };
      inline Data& setExten(string exten) { DARABONBA_PTR_SET_VALUE(exten_, exten) };


      // ibRecord Field Functions 
      bool hasIbRecord() const { return this->ibRecord_ != nullptr;};
      void deleteIbRecord() { this->ibRecord_ = nullptr;};
      inline int64_t getIbRecord() const { DARABONBA_PTR_GET_DEFAULT(ibRecord_, 0L) };
      inline Data& setIbRecord(int64_t ibRecord) { DARABONBA_PTR_SET_VALUE(ibRecord_, ibRecord) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isDirect Field Functions 
      bool hasIsDirect() const { return this->isDirect_ != nullptr;};
      void deleteIsDirect() { this->isDirect_ = nullptr;};
      inline int64_t getIsDirect() const { DARABONBA_PTR_GET_DEFAULT(isDirect_, 0L) };
      inline Data& setIsDirect(int64_t isDirect) { DARABONBA_PTR_SET_VALUE(isDirect_, isDirect) };


      // isOb Field Functions 
      bool hasIsOb() const { return this->isOb_ != nullptr;};
      void deleteIsOb() { this->isOb_ = nullptr;};
      inline string getIsOb() const { DARABONBA_PTR_GET_DEFAULT(isOb_, "") };
      inline Data& setIsOb(string isOb) { DARABONBA_PTR_SET_VALUE(isOb_, isOb) };


      // obRecord Field Functions 
      bool hasObRecord() const { return this->obRecord_ != nullptr;};
      void deleteObRecord() { this->obRecord_ = nullptr;};
      inline int64_t getObRecord() const { DARABONBA_PTR_GET_DEFAULT(obRecord_, 0L) };
      inline Data& setObRecord(int64_t obRecord) { DARABONBA_PTR_SET_VALUE(obRecord_, obRecord) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline Data& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
      inline Data& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // 语音编码
      shared_ptr<string> allow_ {};
      // 区号
      shared_ptr<string> areaCode_ {};
      // 绑定的agent-gateway
      shared_ptr<int64_t> bindGatewayId_ {};
      // 呼叫权限，0：无限制，1：国内长途，2：国内本市，3：内部呼叫，默认无限制
      shared_ptr<string> callPower_ {};
      // 创建时间
      shared_ptr<string> createTime_ {};
      // 降噪开关 0:关闭 1:开启 默认关闭(该参数只有在类型为注册到webrtc才有效)
      shared_ptr<int64_t> denoise_ {};
      // 企业编号
      shared_ptr<string> enterpriseId_ {};
      // 分机号,3-11位
      shared_ptr<string> exten_ {};
      // 呼入是否录音，0：不录用，1：录音，默认录音
      shared_ptr<int64_t> ibRecord_ {};
      // 分机号id
      shared_ptr<int64_t> id_ {};
      // 是否允许摘机外呼，0：不允许，1：可以，默认允许
      shared_ptr<int64_t> isDirect_ {};
      // 是否允许外呼，0：不允许，1：可以，默认允许
      shared_ptr<string> isOb_ {};
      // 外呼是否录音，0：不录音，1：录音，默认录音
      shared_ptr<int64_t> obRecord_ {};
      // 密码
      shared_ptr<string> password_ {};
      // 类型，1. 注册到IAD分机 2.注册到webrtc 3.注册到远程话机
      shared_ptr<int64_t> type_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudCreateExtenResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudCreateExtenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudCreateExtenResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudCreateExtenResponseBody::Data) };
    inline CloudCreateExtenResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudCreateExtenResponseBody::Data) };
    inline CloudCreateExtenResponseBody& setData(const CloudCreateExtenResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudCreateExtenResponseBody& setData(CloudCreateExtenResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudCreateExtenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudCreateExtenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudCreateExtenResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif

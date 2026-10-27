// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERSERVICEPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERSERVICEPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetIdentityProviderServiceProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderServiceProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderServiceProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetIdentityProviderServiceProviderResponseBody() = default ;
    GetIdentityProviderServiceProviderResponseBody(const GetIdentityProviderServiceProviderResponseBody &) = default ;
    GetIdentityProviderServiceProviderResponseBody(GetIdentityProviderServiceProviderResponseBody &&) = default ;
    GetIdentityProviderServiceProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderServiceProviderResponseBody() = default ;
    GetIdentityProviderServiceProviderResponseBody& operator=(const GetIdentityProviderServiceProviderResponseBody &) = default ;
    GetIdentityProviderServiceProviderResponseBody& operator=(GetIdentityProviderServiceProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(acsUrl, acsUrl_);
        DARABONBA_PTR_TO_JSON(entityId, entityId_);
        DARABONBA_PTR_TO_JSON(metadataXml, metadataXml_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(acsUrl, acsUrl_);
        DARABONBA_PTR_FROM_JSON(entityId, entityId_);
        DARABONBA_PTR_FROM_JSON(metadataXml, metadataXml_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
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
      virtual bool empty() const override { return this->acsUrl_ == nullptr
        && this->entityId_ == nullptr && this->metadataXml_ == nullptr && this->protocol_ == nullptr; };
      // acsUrl Field Functions 
      bool hasAcsUrl() const { return this->acsUrl_ != nullptr;};
      void deleteAcsUrl() { this->acsUrl_ = nullptr;};
      inline string getAcsUrl() const { DARABONBA_PTR_GET_DEFAULT(acsUrl_, "") };
      inline Data& setAcsUrl(string acsUrl) { DARABONBA_PTR_SET_VALUE(acsUrl_, acsUrl) };


      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
      inline Data& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // metadataXml Field Functions 
      bool hasMetadataXml() const { return this->metadataXml_ != nullptr;};
      void deleteMetadataXml() { this->metadataXml_ = nullptr;};
      inline string getMetadataXml() const { DARABONBA_PTR_GET_DEFAULT(metadataXml_, "") };
      inline Data& setMetadataXml(string metadataXml) { DARABONBA_PTR_SET_VALUE(metadataXml_, metadataXml) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Data& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      // 我方 SAML 断言消费地址，配置到外部 IdP。
      shared_ptr<string> acsUrl_ {};
      // 我方 SP 的实体标识，配置到外部 IdP；不是外部 IdP Entity ID。
      shared_ptr<string> entityId_ {};
      // 我方 SP Metadata XML，供外部 IdP 导入；不能作为 IdP XML 提交 SAML 配置。
      shared_ptr<string> metadataXml_ {};
      // 查询参数必填，仅支持精确值 SAML；响应返回 SAML。
      shared_ptr<string> protocol_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetIdentityProviderServiceProviderResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetIdentityProviderServiceProviderResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetIdentityProviderServiceProviderResponseBody::Data) };
    inline GetIdentityProviderServiceProviderResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetIdentityProviderServiceProviderResponseBody::Data) };
    inline GetIdentityProviderServiceProviderResponseBody& setData(const GetIdentityProviderServiceProviderResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetIdentityProviderServiceProviderResponseBody& setData(GetIdentityProviderServiceProviderResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetIdentityProviderServiceProviderResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetIdentityProviderServiceProviderResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIdentityProviderServiceProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetIdentityProviderServiceProviderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // 失败时结合 HTTP 状态及 message 处理。
    shared_ptr<string> code_ {};
    // 结果结构见本接口返回字段；异步写接口的返回表示受理，不保证后台任务已完成。
    shared_ptr<GetIdentityProviderServiceProviderResponseBody::Data> data_ {};
    // 本次请求的处理状态，不等同后台任务最终结果。
    shared_ptr<int32_t> httpStatusCode_ {};
    // 请求受理或错误消息；异步任务结果需按对应查询接口核对。
    shared_ptr<string> message_ {};
    // 用于关联本次调用与排障，失败时请保留。
    shared_ptr<string> requestId_ {};
    // true 表示本次请求处理成功；异步写入仍需继续查询任务结果。
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif

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
      // The SAML assertion consumer service (ACS) URL of the SP. Configure this URL in the external IdP.
      shared_ptr<string> acsUrl_ {};
      // The entity ID of the SP. Configure this ID in the external IdP. This is not the entity ID of the external IdP.
      shared_ptr<string> entityId_ {};
      // The SP metadata XML for the external IdP to import. You cannot submit this XML as the IdP XML for SAML configuration.
      shared_ptr<string> metadataXml_ {};
      // The query parameter is required and only supports the exact value SAML. The response returns SAML.
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
    // If the request fails, handle the error based on the HTTP status code and the message.
    shared_ptr<string> code_ {};
    // For the result structure, see the response fields of this operation. The response of an asynchronous write operation indicates that the request is accepted, but does not guarantee that the background task is completed.
    shared_ptr<GetIdentityProviderServiceProviderResponseBody::Data> data_ {};
    // The processing status of the current request. This is not equivalent to the final result of the background task.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request acceptance or error message. For the result of an asynchronous task, check the corresponding query operation.
    shared_ptr<string> message_ {};
    // The ID used to associate the current call with troubleshooting. Keep this ID if the request fails.
    shared_ptr<string> requestId_ {};
    // A value of true indicates that the current request is processed successfully. For asynchronous writes, you must continue to query the task result.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif

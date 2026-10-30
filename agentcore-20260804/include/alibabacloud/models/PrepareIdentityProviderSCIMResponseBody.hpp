// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREPAREIDENTITYPROVIDERSCIMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREPAREIDENTITYPROVIDERSCIMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class PrepareIdentityProviderSCIMResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrepareIdentityProviderSCIMResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PrepareIdentityProviderSCIMResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    PrepareIdentityProviderSCIMResponseBody() = default ;
    PrepareIdentityProviderSCIMResponseBody(const PrepareIdentityProviderSCIMResponseBody &) = default ;
    PrepareIdentityProviderSCIMResponseBody(PrepareIdentityProviderSCIMResponseBody &&) = default ;
    PrepareIdentityProviderSCIMResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrepareIdentityProviderSCIMResponseBody() = default ;
    PrepareIdentityProviderSCIMResponseBody& operator=(const PrepareIdentityProviderSCIMResponseBody &) = default ;
    PrepareIdentityProviderSCIMResponseBody& operator=(PrepareIdentityProviderSCIMResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(configuration, configuration_);
        DARABONBA_PTR_TO_JSON(credential, credential_);
        DARABONBA_PTR_TO_JSON(token, token_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(configuration, configuration_);
        DARABONBA_PTR_FROM_JSON(credential, credential_);
        DARABONBA_PTR_FROM_JSON(token, token_);
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
      class Credential : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Credential& obj) { 
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(credentialId, credentialId_);
          DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Credential& obj) { 
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(credentialId, credentialId_);
          DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        Credential() = default ;
        Credential(const Credential &) = default ;
        Credential(Credential &&) = default ;
        Credential(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Credential() = default ;
        Credential& operator=(const Credential &) = default ;
        Credential& operator=(Credential &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->credentialId_ == nullptr && this->expireTime_ == nullptr && this->status_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Credential& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // credentialId Field Functions 
        bool hasCredentialId() const { return this->credentialId_ != nullptr;};
        void deleteCredentialId() { this->credentialId_ = nullptr;};
        inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
        inline Credential& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline Credential& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Credential& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The creation time returned by AgentIdentity.
        shared_ptr<string> createTime_ {};
        // The credential ID. This parameter is required and cannot be empty when you delete a credential. Use the ID returned in the credential list, not the plaintext token.
        shared_ptr<string> credentialId_ {};
        // The expiration time returned by AgentIdentity. Only credentials that are in the Enabled state and have not expired are considered available.
        shared_ptr<string> expireTime_ {};
        // The credential status of AgentIdentity. Only credentials that are in the Enabled state and have not expired are considered available. This field is not the operationStatus of a SCIM task.
        shared_ptr<string> status_ {};
      };

      class Configuration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Configuration& obj) { 
          DARABONBA_PTR_TO_JSON(baseUrl, baseUrl_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Configuration& obj) { 
          DARABONBA_PTR_FROM_JSON(baseUrl, baseUrl_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        Configuration() = default ;
        Configuration(const Configuration &) = default ;
        Configuration(Configuration &&) = default ;
        Configuration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Configuration() = default ;
        Configuration& operator=(const Configuration &) = default ;
        Configuration& operator=(Configuration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->baseUrl_ == nullptr
        && this->status_ == nullptr; };
        // baseUrl Field Functions 
        bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
        void deleteBaseUrl() { this->baseUrl_ = nullptr;};
        inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
        inline Configuration& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Configuration& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The URL configured for the external provisioning system. The presence of a URL does not indicate that the external configuration is completed or that access control synchronization is enabled.
        shared_ptr<string> baseUrl_ {};
        // The receiving status of AgentIdentity. Enabled indicates that SCIM receiving is enabled, and Disabled indicates that it is disabled. This status is not equivalent to the expected value of syncEnabled for access control.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->configuration_ == nullptr
        && this->credential_ == nullptr && this->token_ == nullptr; };
      // configuration Field Functions 
      bool hasConfiguration() const { return this->configuration_ != nullptr;};
      void deleteConfiguration() { this->configuration_ = nullptr;};
      inline const Data::Configuration & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, Data::Configuration) };
      inline Data::Configuration getConfiguration() { DARABONBA_PTR_GET(configuration_, Data::Configuration) };
      inline Data& setConfiguration(const Data::Configuration & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
      inline Data& setConfiguration(Data::Configuration && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


      // credential Field Functions 
      bool hasCredential() const { return this->credential_ != nullptr;};
      void deleteCredential() { this->credential_ = nullptr;};
      inline const Data::Credential & getCredential() const { DARABONBA_PTR_GET_CONST(credential_, Data::Credential) };
      inline Data::Credential getCredential() { DARABONBA_PTR_GET(credential_, Data::Credential) };
      inline Data& setCredential(const Data::Credential & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
      inline Data& setCredential(Data::Credential && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline Data& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    protected:
      // The actual SAML configuration is read on demand only by using GetIdentityProvider. SCIM query and prepare operations return the actual receiving status and URL.
      shared_ptr<Data::Configuration> configuration_ {};
      // The current credential summary, which includes the credentialId, status, createTime, and expireTime fields. This summary does not include the token.
      shared_ptr<Data::Credential> credential_ {};
      // The plaintext token is returned only when a new credential is created. If the prepare operation reuses a valid credential, this field is null. The token cannot be retrieved again from the list. If the response is lost, query the list first instead of automatically reissuing the token. Do not write the token to logs or persist it in frontend caches.
      shared_ptr<string> token_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PrepareIdentityProviderSCIMResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PrepareIdentityProviderSCIMResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, PrepareIdentityProviderSCIMResponseBody::Data) };
    inline PrepareIdentityProviderSCIMResponseBody::Data getData() { DARABONBA_PTR_GET(data_, PrepareIdentityProviderSCIMResponseBody::Data) };
    inline PrepareIdentityProviderSCIMResponseBody& setData(const PrepareIdentityProviderSCIMResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PrepareIdentityProviderSCIMResponseBody& setData(PrepareIdentityProviderSCIMResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline PrepareIdentityProviderSCIMResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PrepareIdentityProviderSCIMResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PrepareIdentityProviderSCIMResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PrepareIdentityProviderSCIMResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business result code. If the request fails, handle the error based on the HTTP status code and the message.
    shared_ptr<string> code_ {};
    // The operation result. For the result structure, see the response fields of this API. For asynchronous write APIs, the response indicates that the request is accepted, but does not guarantee that the background task is completed.
    shared_ptr<PrepareIdentityProviderSCIMResponseBody::Data> data_ {};
    // The processing status of the current request. This status is not equivalent to the final result of the background task.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request acceptance or error message. For asynchronous tasks, you must check the task result by using the corresponding query API.
    shared_ptr<string> message_ {};
    // The request ID. It is used to associate the current call with troubleshooting. Retain this ID if the request fails.
    shared_ptr<string> requestId_ {};
    // Indicates whether the current request is processed successfully. A value of true indicates success. For asynchronous write operations, you must continue to query the task result.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif

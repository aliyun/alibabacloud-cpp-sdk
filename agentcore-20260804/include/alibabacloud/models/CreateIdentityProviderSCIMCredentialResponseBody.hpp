// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERSCIMCREDENTIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERSCIMCREDENTIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateIdentityProviderSCIMCredentialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderSCIMCredentialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderSCIMCredentialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreateIdentityProviderSCIMCredentialResponseBody() = default ;
    CreateIdentityProviderSCIMCredentialResponseBody(const CreateIdentityProviderSCIMCredentialResponseBody &) = default ;
    CreateIdentityProviderSCIMCredentialResponseBody(CreateIdentityProviderSCIMCredentialResponseBody &&) = default ;
    CreateIdentityProviderSCIMCredentialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderSCIMCredentialResponseBody() = default ;
    CreateIdentityProviderSCIMCredentialResponseBody& operator=(const CreateIdentityProviderSCIMCredentialResponseBody &) = default ;
    CreateIdentityProviderSCIMCredentialResponseBody& operator=(CreateIdentityProviderSCIMCredentialResponseBody &&) = default ;
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
        // The credential ID. It must be non-empty when deleting a credential. Use the ID returned in the credential list, not the plaintext token.
        shared_ptr<string> credentialId_ {};
        // The expiration time returned by AgentIdentity. Only credentials that are Enabled and have not expired are considered available.
        shared_ptr<string> expireTime_ {};
        // The AgentIdentity credential status. Only credentials that are Enabled and have not expired are considered available. This field is not the operationStatus of a SCIM task.
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
        // The URL configured for the external provisioning system. The presence of an address does not mean that the external configuration is completed or AC synchronization is enabled.
        shared_ptr<string> baseUrl_ {};
        // The AgentIdentity reception status. Enabled indicates that SCIM reception is enabled, and Disabled indicates that it is disabled. This is not equivalent to the expected value of syncEnabled in AC.
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
      // The AgentIdentity reception configuration. The actual SAML configuration is read back on demand only in GetIdentityProvider. SCIM queries and preparations return the actual reception status and URL.
      shared_ptr<Data::Configuration> configuration_ {};
      // The current credential summary, including credentialId, status, createTime, and expireTime. It does not include the token, which cannot be retrieved repeatedly.
      shared_ptr<Data::Credential> credential_ {};
      // The token. The plaintext is returned only when a new credential is created. It is null when prepare reuses a valid credential. It cannot be retrieved again from the list. If the response is lost, query the list first instead of automatically re-issuing it. Do not write it to logs or frontend persistent cache.
      shared_ptr<string> token_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateIdentityProviderSCIMCredentialResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateIdentityProviderSCIMCredentialResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateIdentityProviderSCIMCredentialResponseBody::Data) };
    inline CreateIdentityProviderSCIMCredentialResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateIdentityProviderSCIMCredentialResponseBody::Data) };
    inline CreateIdentityProviderSCIMCredentialResponseBody& setData(const CreateIdentityProviderSCIMCredentialResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateIdentityProviderSCIMCredentialResponseBody& setData(CreateIdentityProviderSCIMCredentialResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateIdentityProviderSCIMCredentialResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateIdentityProviderSCIMCredentialResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIdentityProviderSCIMCredentialResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateIdentityProviderSCIMCredentialResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business result code. Combine it with the HTTP status and message for handling upon failure.
    shared_ptr<string> code_ {};
    // The operation result. For the result structure, see the response fields of this operation. The response of an asynchronous write operation indicates that the request is accepted, but does not guarantee that the background task is completed.
    shared_ptr<CreateIdentityProviderSCIMCredentialResponseBody::Data> data_ {};
    // The HTTP status code of the current request. It is not equivalent to the final result of the background task.
    shared_ptr<int32_t> httpStatusCode_ {};
    // Task result message, indicating request acceptance or an error. For asynchronous tasks, check task results by using the corresponding query operation.
    shared_ptr<string> message_ {};
    // The request ID. It is used to associate the current call with troubleshooting. Keep it when a failure occurs.
    shared_ptr<string> requestId_ {};
    // Indicates whether the current request is successful. A value of true indicates that the request is processed successfully. For asynchronous writes, you still need to continue querying the task results.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif

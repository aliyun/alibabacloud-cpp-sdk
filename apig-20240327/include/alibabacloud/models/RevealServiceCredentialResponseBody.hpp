// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVEALSERVICECREDENTIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REVEALSERVICECREDENTIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class RevealServiceCredentialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevealServiceCredentialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RevealServiceCredentialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    RevealServiceCredentialResponseBody() = default ;
    RevealServiceCredentialResponseBody(const RevealServiceCredentialResponseBody &) = default ;
    RevealServiceCredentialResponseBody(RevealServiceCredentialResponseBody &&) = default ;
    RevealServiceCredentialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevealServiceCredentialResponseBody() = default ;
    RevealServiceCredentialResponseBody& operator=(const RevealServiceCredentialResponseBody &) = default ;
    RevealServiceCredentialResponseBody& operator=(RevealServiceCredentialResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(configRevision, configRevision_);
        DARABONBA_PTR_TO_JSON(credential, credential_);
        DARABONBA_PTR_TO_JSON(credentialType, credentialType_);
        DARABONBA_PTR_TO_JSON(provider, provider_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(configRevision, configRevision_);
        DARABONBA_PTR_FROM_JSON(credential, credential_);
        DARABONBA_PTR_FROM_JSON(credentialType, credentialType_);
        DARABONBA_PTR_FROM_JSON(provider, provider_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
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
          DARABONBA_PTR_TO_JSON(apiKeyGenerateMode, apiKeyGenerateMode_);
          DARABONBA_PTR_TO_JSON(apiKeyReferences, apiKeyReferences_);
          DARABONBA_PTR_TO_JSON(apiKeys, apiKeys_);
          DARABONBA_PTR_TO_JSON(awsAccessKey, awsAccessKey_);
          DARABONBA_PTR_TO_JSON(awsRegion, awsRegion_);
          DARABONBA_PTR_TO_JSON(awsSecretKey, awsSecretKey_);
          DARABONBA_PTR_TO_JSON(credentialSource, credentialSource_);
          DARABONBA_PTR_TO_JSON(endpointMode, endpointMode_);
          DARABONBA_PTR_TO_JSON(klingAccessKey, klingAccessKey_);
          DARABONBA_PTR_TO_JSON(klingSecretKey, klingSecretKey_);
          DARABONBA_PTR_TO_JSON(vertexAuthKey, vertexAuthKey_);
          DARABONBA_PTR_TO_JSON(vertexProjectId, vertexProjectId_);
          DARABONBA_PTR_TO_JSON(vertexRegion, vertexRegion_);
        };
        friend void from_json(const Darabonba::Json& j, Credential& obj) { 
          DARABONBA_PTR_FROM_JSON(apiKeyGenerateMode, apiKeyGenerateMode_);
          DARABONBA_PTR_FROM_JSON(apiKeyReferences, apiKeyReferences_);
          DARABONBA_PTR_FROM_JSON(apiKeys, apiKeys_);
          DARABONBA_PTR_FROM_JSON(awsAccessKey, awsAccessKey_);
          DARABONBA_PTR_FROM_JSON(awsRegion, awsRegion_);
          DARABONBA_PTR_FROM_JSON(awsSecretKey, awsSecretKey_);
          DARABONBA_PTR_FROM_JSON(credentialSource, credentialSource_);
          DARABONBA_PTR_FROM_JSON(endpointMode, endpointMode_);
          DARABONBA_PTR_FROM_JSON(klingAccessKey, klingAccessKey_);
          DARABONBA_PTR_FROM_JSON(klingSecretKey, klingSecretKey_);
          DARABONBA_PTR_FROM_JSON(vertexAuthKey, vertexAuthKey_);
          DARABONBA_PTR_FROM_JSON(vertexProjectId, vertexProjectId_);
          DARABONBA_PTR_FROM_JSON(vertexRegion, vertexRegion_);
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
        virtual bool empty() const override { return this->apiKeyGenerateMode_ == nullptr
        && this->apiKeyReferences_ == nullptr && this->apiKeys_ == nullptr && this->awsAccessKey_ == nullptr && this->awsRegion_ == nullptr && this->awsSecretKey_ == nullptr
        && this->credentialSource_ == nullptr && this->endpointMode_ == nullptr && this->klingAccessKey_ == nullptr && this->klingSecretKey_ == nullptr && this->vertexAuthKey_ == nullptr
        && this->vertexProjectId_ == nullptr && this->vertexRegion_ == nullptr; };
        // apiKeyGenerateMode Field Functions 
        bool hasApiKeyGenerateMode() const { return this->apiKeyGenerateMode_ != nullptr;};
        void deleteApiKeyGenerateMode() { this->apiKeyGenerateMode_ = nullptr;};
        inline string getApiKeyGenerateMode() const { DARABONBA_PTR_GET_DEFAULT(apiKeyGenerateMode_, "") };
        inline Credential& setApiKeyGenerateMode(string apiKeyGenerateMode) { DARABONBA_PTR_SET_VALUE(apiKeyGenerateMode_, apiKeyGenerateMode) };


        // apiKeyReferences Field Functions 
        bool hasApiKeyReferences() const { return this->apiKeyReferences_ != nullptr;};
        void deleteApiKeyReferences() { this->apiKeyReferences_ = nullptr;};
        inline const vector<string> & getApiKeyReferences() const { DARABONBA_PTR_GET_CONST(apiKeyReferences_, vector<string>) };
        inline vector<string> getApiKeyReferences() { DARABONBA_PTR_GET(apiKeyReferences_, vector<string>) };
        inline Credential& setApiKeyReferences(const vector<string> & apiKeyReferences) { DARABONBA_PTR_SET_VALUE(apiKeyReferences_, apiKeyReferences) };
        inline Credential& setApiKeyReferences(vector<string> && apiKeyReferences) { DARABONBA_PTR_SET_RVALUE(apiKeyReferences_, apiKeyReferences) };


        // apiKeys Field Functions 
        bool hasApiKeys() const { return this->apiKeys_ != nullptr;};
        void deleteApiKeys() { this->apiKeys_ = nullptr;};
        inline const vector<string> & getApiKeys() const { DARABONBA_PTR_GET_CONST(apiKeys_, vector<string>) };
        inline vector<string> getApiKeys() { DARABONBA_PTR_GET(apiKeys_, vector<string>) };
        inline Credential& setApiKeys(const vector<string> & apiKeys) { DARABONBA_PTR_SET_VALUE(apiKeys_, apiKeys) };
        inline Credential& setApiKeys(vector<string> && apiKeys) { DARABONBA_PTR_SET_RVALUE(apiKeys_, apiKeys) };


        // awsAccessKey Field Functions 
        bool hasAwsAccessKey() const { return this->awsAccessKey_ != nullptr;};
        void deleteAwsAccessKey() { this->awsAccessKey_ = nullptr;};
        inline string getAwsAccessKey() const { DARABONBA_PTR_GET_DEFAULT(awsAccessKey_, "") };
        inline Credential& setAwsAccessKey(string awsAccessKey) { DARABONBA_PTR_SET_VALUE(awsAccessKey_, awsAccessKey) };


        // awsRegion Field Functions 
        bool hasAwsRegion() const { return this->awsRegion_ != nullptr;};
        void deleteAwsRegion() { this->awsRegion_ = nullptr;};
        inline string getAwsRegion() const { DARABONBA_PTR_GET_DEFAULT(awsRegion_, "") };
        inline Credential& setAwsRegion(string awsRegion) { DARABONBA_PTR_SET_VALUE(awsRegion_, awsRegion) };


        // awsSecretKey Field Functions 
        bool hasAwsSecretKey() const { return this->awsSecretKey_ != nullptr;};
        void deleteAwsSecretKey() { this->awsSecretKey_ = nullptr;};
        inline string getAwsSecretKey() const { DARABONBA_PTR_GET_DEFAULT(awsSecretKey_, "") };
        inline Credential& setAwsSecretKey(string awsSecretKey) { DARABONBA_PTR_SET_VALUE(awsSecretKey_, awsSecretKey) };


        // credentialSource Field Functions 
        bool hasCredentialSource() const { return this->credentialSource_ != nullptr;};
        void deleteCredentialSource() { this->credentialSource_ = nullptr;};
        inline string getCredentialSource() const { DARABONBA_PTR_GET_DEFAULT(credentialSource_, "") };
        inline Credential& setCredentialSource(string credentialSource) { DARABONBA_PTR_SET_VALUE(credentialSource_, credentialSource) };


        // endpointMode Field Functions 
        bool hasEndpointMode() const { return this->endpointMode_ != nullptr;};
        void deleteEndpointMode() { this->endpointMode_ = nullptr;};
        inline string getEndpointMode() const { DARABONBA_PTR_GET_DEFAULT(endpointMode_, "") };
        inline Credential& setEndpointMode(string endpointMode) { DARABONBA_PTR_SET_VALUE(endpointMode_, endpointMode) };


        // klingAccessKey Field Functions 
        bool hasKlingAccessKey() const { return this->klingAccessKey_ != nullptr;};
        void deleteKlingAccessKey() { this->klingAccessKey_ = nullptr;};
        inline string getKlingAccessKey() const { DARABONBA_PTR_GET_DEFAULT(klingAccessKey_, "") };
        inline Credential& setKlingAccessKey(string klingAccessKey) { DARABONBA_PTR_SET_VALUE(klingAccessKey_, klingAccessKey) };


        // klingSecretKey Field Functions 
        bool hasKlingSecretKey() const { return this->klingSecretKey_ != nullptr;};
        void deleteKlingSecretKey() { this->klingSecretKey_ = nullptr;};
        inline string getKlingSecretKey() const { DARABONBA_PTR_GET_DEFAULT(klingSecretKey_, "") };
        inline Credential& setKlingSecretKey(string klingSecretKey) { DARABONBA_PTR_SET_VALUE(klingSecretKey_, klingSecretKey) };


        // vertexAuthKey Field Functions 
        bool hasVertexAuthKey() const { return this->vertexAuthKey_ != nullptr;};
        void deleteVertexAuthKey() { this->vertexAuthKey_ = nullptr;};
        inline string getVertexAuthKey() const { DARABONBA_PTR_GET_DEFAULT(vertexAuthKey_, "") };
        inline Credential& setVertexAuthKey(string vertexAuthKey) { DARABONBA_PTR_SET_VALUE(vertexAuthKey_, vertexAuthKey) };


        // vertexProjectId Field Functions 
        bool hasVertexProjectId() const { return this->vertexProjectId_ != nullptr;};
        void deleteVertexProjectId() { this->vertexProjectId_ = nullptr;};
        inline string getVertexProjectId() const { DARABONBA_PTR_GET_DEFAULT(vertexProjectId_, "") };
        inline Credential& setVertexProjectId(string vertexProjectId) { DARABONBA_PTR_SET_VALUE(vertexProjectId_, vertexProjectId) };


        // vertexRegion Field Functions 
        bool hasVertexRegion() const { return this->vertexRegion_ != nullptr;};
        void deleteVertexRegion() { this->vertexRegion_ = nullptr;};
        inline string getVertexRegion() const { DARABONBA_PTR_GET_DEFAULT(vertexRegion_, "") };
        inline Credential& setVertexRegion(string vertexRegion) { DARABONBA_PTR_SET_VALUE(vertexRegion_, vertexRegion) };


      protected:
        // The API key generation mode. Valid values: Custom and Reference. Historical null values are treated as Custom.
        shared_ptr<string> apiKeyGenerateMode_ {};
        // The list of Key Management Service (KMS) reference names. This field is returned only in Reference mode. Reference values are not returned.
        shared_ptr<vector<string>> apiKeyReferences_ {};
        // The list of custom API keys. This field is returned only when apiKeyGenerateMode is set to Custom. The keys are returned in their original order without deduplication.
        shared_ptr<vector<string>> apiKeys_ {};
        // Bedrock AWS Access Key
        shared_ptr<string> awsAccessKey_ {};
        // Bedrock AWS Region
        shared_ptr<string> awsRegion_ {};
        // Bedrock AWS Secret Key
        shared_ptr<string> awsSecretKey_ {};
        // The source of the credential. When backfilled by the PAI-EAS system, the value is pai-eas.
        shared_ptr<string> credentialSource_ {};
        // The Bedrock endpoint mode. A value of runtime is returned for historical null values.
        shared_ptr<string> endpointMode_ {};
        // Kling Access Key
        shared_ptr<string> klingAccessKey_ {};
        // Kling Secret Key
        shared_ptr<string> klingSecretKey_ {};
        // The original JSON text of the Vertex service account. The text is neither parsed nor reordered.
        shared_ptr<string> vertexAuthKey_ {};
        // Vertex Project ID
        shared_ptr<string> vertexProjectId_ {};
        // Vertex Region
        shared_ptr<string> vertexRegion_ {};
      };

      virtual bool empty() const override { return this->configRevision_ == nullptr
        && this->credential_ == nullptr && this->credentialType_ == nullptr && this->provider_ == nullptr && this->serviceId_ == nullptr; };
      // configRevision Field Functions 
      bool hasConfigRevision() const { return this->configRevision_ != nullptr;};
      void deleteConfigRevision() { this->configRevision_ = nullptr;};
      inline string getConfigRevision() const { DARABONBA_PTR_GET_DEFAULT(configRevision_, "") };
      inline Data& setConfigRevision(string configRevision) { DARABONBA_PTR_SET_VALUE(configRevision_, configRevision) };


      // credential Field Functions 
      bool hasCredential() const { return this->credential_ != nullptr;};
      void deleteCredential() { this->credential_ = nullptr;};
      inline const Data::Credential & getCredential() const { DARABONBA_PTR_GET_CONST(credential_, Data::Credential) };
      inline Data::Credential getCredential() { DARABONBA_PTR_GET(credential_, Data::Credential) };
      inline Data& setCredential(const Data::Credential & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
      inline Data& setCredential(Data::Credential && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


      // credentialType Field Functions 
      bool hasCredentialType() const { return this->credentialType_ != nullptr;};
      void deleteCredentialType() { this->credentialType_ = nullptr;};
      inline string getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
      inline Data& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
      inline Data& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Data& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    protected:
      // The current configuration revision. For legacy objects, the value is legacy.
      shared_ptr<string> configRevision_ {};
      // The credential object for the currently active type. Only the fields corresponding to the credentialType are populated.
      shared_ptr<Data::Credential> credential_ {};
      // The currently active credential type. Valid values: apiKey, bedrock, vertex, and kling.
      shared_ptr<string> credentialType_ {};
      // The name of the provider, such as qwen, openai, bedrock, vertex, kling, or pai-eas.
      shared_ptr<string> provider_ {};
      // The unique ID of the service.
      shared_ptr<string> serviceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RevealServiceCredentialResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RevealServiceCredentialResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RevealServiceCredentialResponseBody::Data) };
    inline RevealServiceCredentialResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RevealServiceCredentialResponseBody::Data) };
    inline RevealServiceCredentialResponseBody& setData(const RevealServiceCredentialResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RevealServiceCredentialResponseBody& setData(RevealServiceCredentialResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RevealServiceCredentialResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RevealServiceCredentialResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code. A value of Ok indicates success.
    shared_ptr<string> code_ {};
    // The currently active credential data.
    shared_ptr<RevealServiceCredentialResponseBody::Data> data_ {};
    // The response message. A value of success indicates success.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEATTACKTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEATTACKTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class CreateAttackTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAttackTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(ConnectionConfig, connectionConfig_);
      DARABONBA_PTR_TO_JSON(ConnectionMethod, connectionMethod_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAttackTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(ConnectionConfig, connectionConfig_);
      DARABONBA_PTR_FROM_JSON(ConnectionMethod, connectionMethod_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    CreateAttackTargetRequest() = default ;
    CreateAttackTargetRequest(const CreateAttackTargetRequest &) = default ;
    CreateAttackTargetRequest(CreateAttackTargetRequest &&) = default ;
    CreateAttackTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAttackTargetRequest() = default ;
    CreateAttackTargetRequest& operator=(const CreateAttackTargetRequest &) = default ;
    CreateAttackTargetRequest& operator=(CreateAttackTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->connectionConfig_ == nullptr && this->connectionMethod_ == nullptr && this->description_ == nullptr && this->endpoint_ == nullptr && this->modelName_ == nullptr
        && this->provider_ == nullptr && this->targetName_ == nullptr && this->targetType_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline CreateAttackTargetRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // connectionConfig Field Functions 
    bool hasConnectionConfig() const { return this->connectionConfig_ != nullptr;};
    void deleteConnectionConfig() { this->connectionConfig_ = nullptr;};
    inline string getConnectionConfig() const { DARABONBA_PTR_GET_DEFAULT(connectionConfig_, "") };
    inline CreateAttackTargetRequest& setConnectionConfig(string connectionConfig) { DARABONBA_PTR_SET_VALUE(connectionConfig_, connectionConfig) };


    // connectionMethod Field Functions 
    bool hasConnectionMethod() const { return this->connectionMethod_ != nullptr;};
    void deleteConnectionMethod() { this->connectionMethod_ = nullptr;};
    inline string getConnectionMethod() const { DARABONBA_PTR_GET_DEFAULT(connectionMethod_, "") };
    inline CreateAttackTargetRequest& setConnectionMethod(string connectionMethod) { DARABONBA_PTR_SET_VALUE(connectionMethod_, connectionMethod) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAttackTargetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline CreateAttackTargetRequest& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline CreateAttackTargetRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline CreateAttackTargetRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline CreateAttackTargetRequest& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateAttackTargetRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The API key for the target model service, used to authenticate with the endpoint. The key is encrypted and stored after submission. Subsequent queries do not return the plaintext value. When ConnectionMethod is set to enterprise_relay, the actual credentials are held by the corporate internal network agent. Transmit the key over HTTPS and avoid exposing it in plaintext in logs, URLs, or client code.
    // 
    // This parameter is required.
    shared_ptr<string> apiKey_ {};
    // The advanced connection configuration in JSON string format. Common fields: authType (authentication type. custom_header: custom request header authentication. none: no authentication), customAuthHeaderName (custom authentication header name, such as X-API-Key), and requestHeaders (additional HTTP request header key-value pairs).
    // 
    // Common provider configuration templates ({{prompt}} is a prompt placeholder that you replace with the actual service value. When authType is set to bearer, the token is injected from ApiKey and the template does not contain credentials):
    // - Bailian: {"httpMethod":"POST","authType":"bearer","timeoutMs":30000,"requestTemplate":"{\\"input\\":{\\"prompt\\":\\"{{prompt}}\\"},\\"parameters\\":{\\"incremental_output\\":true},\\"debug\\":{}}","messageJsonPath":"$.output.text","requestHeaders":"{\\"X-DashScope-SSE\\": \\"enable\\" }","stream":true,"customAuthHeaderName":""}
    // - PAI: {"httpMethod":"POST","authType":"bearer","timeoutMs":60000,"requestTemplate":"{\\"inputs\\":{\\"question\\":\\"{{prompt}}\\",\\"chat_history\\":[]},\\"stream\\":true}","messageJsonPath":"$.outputs.answer","requestHeaders":"","stream":true,"customAuthHeaderName":""}
    // - Dify: {"httpMethod":"POST","authType":"bearer","timeoutMs":30000,"requestTemplate":"{\\"inputs\\":{},\\"query\\":\\"{{prompt}}\\",\\"response_mode\\":\\"streaming\\",\\"conversation_id\\":\\"\\",\\"user\\":\\"scanner\\"}","messageJsonPath":"$.answer","requestHeaders":"","stream":true,"customAuthHeaderName":""}
    // - AgentRun: {"httpMethod":"POST","authType":"custom_header","timeoutMs":30000,"requestTemplate":"{\\"messages\\":[{\\"role\\":\\"user\\",\\"content\\":\\"{{prompt}}\\"}],\\"stream\\":true}","messageJsonPath":"$.choices[0].delta.content","requestHeaders":"","customAuthHeaderName":"X-API-Key","stream":true}
    // - AgentKit: {"httpMethod":"POST","authType":"bearer","timeoutMs":30000,"requestTemplate":"{\\"messages\\":[{\\"role\\":\\"user\\",\\"content\\":\\"{{prompt}}\\"}]}","messageJsonPath":"$.content.parts[0].text","requestHeaders":"","stream":true,"customAuthHeaderName":""}
    // When ConnectionMethod is set to enterprise_relay, you can use the protocol field to specify the tunnel protocol (defaults to openai). The provider configuration templates above apply only to non-enterprise_relay connections.
    shared_ptr<string> connectionConfig_ {};
    // The connection protocol type for the target service. The system selects the corresponding protocol adapter based on this value.
    // 
    // This parameter is required.
    shared_ptr<string> connectionMethod_ {};
    // An optional description of the scan target usage.
    shared_ptr<string> description_ {};
    // The HTTP or HTTPS endpoint address of the target model service. When ConnectionMethod is set to enterprise_relay, this value is ignored and the platform uses a fixed internal endpoint.
    // 
    // This parameter is required.
    shared_ptr<string> endpoint_ {};
    // The name of the target model. When ConnectionMethod is set to openai, specify the model ID under the OpenAI compatible protocol. When ConnectionMethod is set to anthropic, specify the model ID for the Anthropic Messages API. When ConnectionMethod is set to enterprise_relay, this value is ignored and the platform uses a fixed value.
    shared_ptr<string> modelName_ {};
    // The business label of the model or agent provider, used for UI filtering and form display. This is decoupled from ConnectionMethod (technical protocol): the same Provider may use multiple protocols, and vice versa.
    shared_ptr<string> provider_ {};
    // The display name of the scan target, used for list display and filtering. Use a distinguishable name within the same tenant.
    // 
    // This parameter is required.
    shared_ptr<string> targetName_ {};
    // The type of the scan target, which determines the sampling dimension for scan tasks. Valid values:
    // - agent: agent-type samples.
    // - model: model-type samples.
    // 
    // This parameter is required.
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif

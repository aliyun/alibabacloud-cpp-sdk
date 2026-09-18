// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTCONNECTIVITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TESTCONNECTIVITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class TestConnectivityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestConnectivityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(ConnectionConfig, connectionConfig_);
      DARABONBA_PTR_TO_JSON(ConnectionMethod, connectionMethod_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
    };
    friend void from_json(const Darabonba::Json& j, TestConnectivityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(ConnectionConfig, connectionConfig_);
      DARABONBA_PTR_FROM_JSON(ConnectionMethod, connectionMethod_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
    };
    TestConnectivityRequest() = default ;
    TestConnectivityRequest(const TestConnectivityRequest &) = default ;
    TestConnectivityRequest(TestConnectivityRequest &&) = default ;
    TestConnectivityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestConnectivityRequest() = default ;
    TestConnectivityRequest& operator=(const TestConnectivityRequest &) = default ;
    TestConnectivityRequest& operator=(TestConnectivityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->checkId_ == nullptr && this->connectionConfig_ == nullptr && this->connectionMethod_ == nullptr && this->endpoint_ == nullptr && this->modelName_ == nullptr
        && this->targetId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline TestConnectivityRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
    inline TestConnectivityRequest& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // connectionConfig Field Functions 
    bool hasConnectionConfig() const { return this->connectionConfig_ != nullptr;};
    void deleteConnectionConfig() { this->connectionConfig_ = nullptr;};
    inline string getConnectionConfig() const { DARABONBA_PTR_GET_DEFAULT(connectionConfig_, "") };
    inline TestConnectivityRequest& setConnectionConfig(string connectionConfig) { DARABONBA_PTR_SET_VALUE(connectionConfig_, connectionConfig) };


    // connectionMethod Field Functions 
    bool hasConnectionMethod() const { return this->connectionMethod_ != nullptr;};
    void deleteConnectionMethod() { this->connectionMethod_ = nullptr;};
    inline string getConnectionMethod() const { DARABONBA_PTR_GET_DEFAULT(connectionMethod_, "") };
    inline TestConnectivityRequest& setConnectionMethod(string connectionMethod) { DARABONBA_PTR_SET_VALUE(connectionMethod_, connectionMethod) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline TestConnectivityRequest& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline TestConnectivityRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline TestConnectivityRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


  protected:
    // The API key for the target model service, used to authenticate with the Endpoint. If TargetId is specified, the system reads the key from the encrypted target configuration. This parameter is required if TargetId is empty. Transmit the key over HTTPS and avoid exposing it in plaintext in logs, URLs, or client code.
    shared_ptr<string> apiKey_ {};
    // The tracking identifier of the connectivity test. Do not specify this parameter for the first call. The system generates and returns it in the response. For subsequent calls, specify this value to query the latest status of the corresponding test.
    shared_ptr<string> checkId_ {};
    // The advanced connection configuration in JSON string format. Common fields: authType (authentication type. custom_header indicates custom request header authentication. none indicates no authentication), customAuthHeaderName (custom authentication header name, such as X-API-Key), and requestHeaders (additional HTTP request header key-value pairs).
    // 
    // Common provider configuration templates ({{prompt}} is the prompt placeholder. Replace it with the actual service value. When authType is set to bearer, the token is injected from ApiKey, and the template does not contain credentials):
    // - Bailian: {"httpMethod":"POST","authType":"bearer","timeoutMs":30000,"requestTemplate":"{\\"input\\":{\\"prompt\\":\\"{{prompt}}\\"},\\"parameters\\":{\\"incremental_output\\":true},\\"debug\\":{}}","messageJsonPath":"$.output.text","requestHeaders":"{\\"X-DashScope-SSE\\": \\"enable\\" }","stream":true,"customAuthHeaderName":""}
    // - PAI: {"httpMethod":"POST","authType":"bearer","timeoutMs":60000,"requestTemplate":"{\\"inputs\\":{\\"question\\":\\"{{prompt}}\\",\\"chat_history\\":[]},\\"stream\\":true}","messageJsonPath":"$.outputs.answer","requestHeaders":"","stream":true,"customAuthHeaderName":""}
    // - Dify: {"httpMethod":"POST","authType":"bearer","timeoutMs":30000,"requestTemplate":"{\\"inputs\\":{},\\"query\\":\\"{{prompt}}\\",\\"response_mode\\":\\"streaming\\",\\"conversation_id\\":\\"\\",\\"user\\":\\"scanner\\"}","messageJsonPath":"$.answer","requestHeaders":"","stream":true,"customAuthHeaderName":""}
    // - AgentRun: {"httpMethod":"POST","authType":"custom_header","timeoutMs":30000,"requestTemplate":"{\\"messages\\":[{\\"role\\":\\"user\\",\\"content\\":\\"{{prompt}}\\"}],\\"stream\\":true}","messageJsonPath":"$.choices[0].delta.content","requestHeaders":"","customAuthHeaderName":"X-API-Key","stream":true}
    // - AgentKit: {"httpMethod":"POST","authType":"bearer","timeoutMs":30000,"requestTemplate":"{\\"messages\\":[{\\"role\\":\\"user\\",\\"content\\":\\"{{prompt}}\\"}]}","messageJsonPath":"$.content.parts[0].text","requestHeaders":"","stream":true,"customAuthHeaderName":""}
    shared_ptr<string> connectionConfig_ {};
    // The connection protocol type of the target service. The system selects the corresponding protocol adapter to initiate the test based on this value. Default value: openai.
    shared_ptr<string> connectionMethod_ {};
    // The HTTP or HTTPS endpoint address of the target model service. This parameter is required if TargetId is empty.
    shared_ptr<string> endpoint_ {};
    // The name of the target model. If ConnectionMethod is set to openai, specify the model ID under the OpenAI compatible protocol. If ConnectionMethod is set to anthropic, specify the model ID for the Anthropic Messages API. This parameter is required if the scan target is a model and TargetId is empty.
    shared_ptr<string> modelName_ {};
    // The unique identifier of the attack target. If specified, the system reads Endpoint, ApiKey, ModelName, ConnectionMethod, and ConnectionConfig from the target configuration and ignores any parameters with the same names in the request. If not specified, provide the connection parameters directly in the request.
    shared_ptr<string> targetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif

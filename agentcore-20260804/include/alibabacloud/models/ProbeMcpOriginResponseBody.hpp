// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROBEMCPORIGINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PROBEMCPORIGINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ProbeMcpOriginResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProbeMcpOriginResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ProbeMcpOriginResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ProbeMcpOriginResponseBody() = default ;
    ProbeMcpOriginResponseBody(const ProbeMcpOriginResponseBody &) = default ;
    ProbeMcpOriginResponseBody(ProbeMcpOriginResponseBody &&) = default ;
    ProbeMcpOriginResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProbeMcpOriginResponseBody() = default ;
    ProbeMcpOriginResponseBody& operator=(const ProbeMcpOriginResponseBody &) = default ;
    ProbeMcpOriginResponseBody& operator=(ProbeMcpOriginResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(coverage, coverage_);
        DARABONBA_PTR_TO_JSON(error, error_);
        DARABONBA_PTR_TO_JSON(httpResult, httpResult_);
        DARABONBA_PTR_TO_JSON(observations, observations_);
        DARABONBA_PTR_TO_JSON(probeId, probeId_);
        DARABONBA_PTR_TO_JSON(probedAt, probedAt_);
        DARABONBA_PTR_TO_JSON(recommendation, recommendation_);
        DARABONBA_PTR_TO_JSON(selectedConfiguration, selectedConfiguration_);
        DARABONBA_PTR_TO_JSON(stage, stage_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(tools, tools_);
        DARABONBA_PTR_TO_JSON(toolsComplete, toolsComplete_);
        DARABONBA_PTR_TO_JSON(toolsStatus, toolsStatus_);
        DARABONBA_PTR_TO_JSON(warnings, warnings_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(coverage, coverage_);
        DARABONBA_PTR_FROM_JSON(error, error_);
        DARABONBA_PTR_FROM_JSON(httpResult, httpResult_);
        DARABONBA_PTR_FROM_JSON(observations, observations_);
        DARABONBA_PTR_FROM_JSON(probeId, probeId_);
        DARABONBA_PTR_FROM_JSON(probedAt, probedAt_);
        DARABONBA_PTR_FROM_JSON(recommendation, recommendation_);
        DARABONBA_PTR_FROM_JSON(selectedConfiguration, selectedConfiguration_);
        DARABONBA_PTR_FROM_JSON(stage, stage_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(tools, tools_);
        DARABONBA_PTR_FROM_JSON(toolsComplete, toolsComplete_);
        DARABONBA_PTR_FROM_JSON(toolsStatus, toolsStatus_);
        DARABONBA_PTR_FROM_JSON(warnings, warnings_);
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
      class Warnings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Warnings& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(message, message_);
        };
        friend void from_json(const Darabonba::Json& j, Warnings& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(message, message_);
        };
        Warnings() = default ;
        Warnings(const Warnings &) = default ;
        Warnings(Warnings &&) = default ;
        Warnings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Warnings() = default ;
        Warnings& operator=(const Warnings &) = default ;
        Warnings& operator=(Warnings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Warnings& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Warnings& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The structured identifier for the detection limitation.
        shared_ptr<string> code_ {};
        // Explains limitations such as UNKNOWN, not executed, or truncated. This excludes credentials and original responses.
        shared_ptr<string> message_ {};
      };

      class Tools : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tools& obj) { 
          DARABONBA_PTR_TO_JSON(inputSchema, inputSchema_);
          DARABONBA_PTR_TO_JSON(outputSchema, outputSchema_);
          DARABONBA_PTR_TO_JSON(toolDescription, toolDescription_);
          DARABONBA_PTR_TO_JSON(toolName, toolName_);
        };
        friend void from_json(const Darabonba::Json& j, Tools& obj) { 
          DARABONBA_PTR_FROM_JSON(inputSchema, inputSchema_);
          DARABONBA_PTR_FROM_JSON(outputSchema, outputSchema_);
          DARABONBA_PTR_FROM_JSON(toolDescription, toolDescription_);
          DARABONBA_PTR_FROM_JSON(toolName, toolName_);
        };
        Tools() = default ;
        Tools(const Tools &) = default ;
        Tools(Tools &&) = default ;
        Tools(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tools() = default ;
        Tools& operator=(const Tools &) = default ;
        Tools& operator=(Tools &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->inputSchema_ == nullptr
        && this->outputSchema_ == nullptr && this->toolDescription_ == nullptr && this->toolName_ == nullptr; };
        // inputSchema Field Functions 
        bool hasInputSchema() const { return this->inputSchema_ != nullptr;};
        void deleteInputSchema() { this->inputSchema_ = nullptr;};
        inline string getInputSchema() const { DARABONBA_PTR_GET_DEFAULT(inputSchema_, "") };
        inline Tools& setInputSchema(string inputSchema) { DARABONBA_PTR_SET_VALUE(inputSchema_, inputSchema) };


        // outputSchema Field Functions 
        bool hasOutputSchema() const { return this->outputSchema_ != nullptr;};
        void deleteOutputSchema() { this->outputSchema_ = nullptr;};
        inline string getOutputSchema() const { DARABONBA_PTR_GET_DEFAULT(outputSchema_, "") };
        inline Tools& setOutputSchema(string outputSchema) { DARABONBA_PTR_SET_VALUE(outputSchema_, outputSchema) };


        // toolDescription Field Functions 
        bool hasToolDescription() const { return this->toolDescription_ != nullptr;};
        void deleteToolDescription() { this->toolDescription_ = nullptr;};
        inline string getToolDescription() const { DARABONBA_PTR_GET_DEFAULT(toolDescription_, "") };
        inline Tools& setToolDescription(string toolDescription) { DARABONBA_PTR_SET_VALUE(toolDescription_, toolDescription) };


        // toolName Field Functions 
        bool hasToolName() const { return this->toolName_ != nullptr;};
        void deleteToolName() { this->toolName_ = nullptr;};
        inline string getToolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
        inline Tools& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


      protected:
        // The input schema defined by the protocol, represented as a JSON string.
        shared_ptr<string> inputSchema_ {};
        // The output schema defined by the protocol, represented as a JSON string.
        shared_ptr<string> outputSchema_ {};
        // The untrusted description text returned by the origin server. It is escaped when displayed and is not executed as an instruction.
        shared_ptr<string> toolDescription_ {};
        // The declared name of the tool. Only metadata is displayed.
        shared_ptr<string> toolName_ {};
      };

      class SelectedConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SelectedConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(backendMcpProtocol, backendMcpProtocol_);
          DARABONBA_PTR_TO_JSON(originProtocolVersion, originProtocolVersion_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
        };
        friend void from_json(const Darabonba::Json& j, SelectedConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(backendMcpProtocol, backendMcpProtocol_);
          DARABONBA_PTR_FROM_JSON(originProtocolVersion, originProtocolVersion_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        };
        SelectedConfiguration() = default ;
        SelectedConfiguration(const SelectedConfiguration &) = default ;
        SelectedConfiguration(SelectedConfiguration &&) = default ;
        SelectedConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SelectedConfiguration() = default ;
        SelectedConfiguration& operator=(const SelectedConfiguration &) = default ;
        SelectedConfiguration& operator=(SelectedConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backendMcpProtocol_ == nullptr
        && this->originProtocolVersion_ == nullptr && this->protocol_ == nullptr; };
        // backendMcpProtocol Field Functions 
        bool hasBackendMcpProtocol() const { return this->backendMcpProtocol_ != nullptr;};
        void deleteBackendMcpProtocol() { this->backendMcpProtocol_ = nullptr;};
        inline string getBackendMcpProtocol() const { DARABONBA_PTR_GET_DEFAULT(backendMcpProtocol_, "") };
        inline SelectedConfiguration& setBackendMcpProtocol(string backendMcpProtocol) { DARABONBA_PTR_SET_VALUE(backendMcpProtocol_, backendMcpProtocol) };


        // originProtocolVersion Field Functions 
        bool hasOriginProtocolVersion() const { return this->originProtocolVersion_ != nullptr;};
        void deleteOriginProtocolVersion() { this->originProtocolVersion_ = nullptr;};
        inline string getOriginProtocolVersion() const { DARABONBA_PTR_GET_DEFAULT(originProtocolVersion_, "") };
        inline SelectedConfiguration& setOriginProtocolVersion(string originProtocolVersion) { DARABONBA_PTR_SET_VALUE(originProtocolVersion_, originProtocolVersion) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline SelectedConfiguration& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      protected:
        // The backend MCP protocol policy. Valid values: legacy or modern.
        shared_ptr<string> backendMcpProtocol_ {};
        // The actual negotiated or selected and verified origin server MCP date version in YYYY-MM-DD format. This is null when not confirmed. It only displays the origin server protocol date metadata. It can be specified during creation and modified during updates. If omitted during an update, the current value is retained. It does not control backend requests or the external protocol of the gateway.
        shared_ptr<string> originProtocolVersion_ {};
        // The protocol. Valid values: SSE or StreamableHTTP. The modern policy is only combined with StreamableHTTP.
        shared_ptr<string> protocol_ {};
      };

      class Recommendation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Recommendation& obj) { 
          DARABONBA_PTR_TO_JSON(backendMcpProtocol, backendMcpProtocol_);
          DARABONBA_PTR_TO_JSON(originProtocolVersion, originProtocolVersion_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
        };
        friend void from_json(const Darabonba::Json& j, Recommendation& obj) { 
          DARABONBA_PTR_FROM_JSON(backendMcpProtocol, backendMcpProtocol_);
          DARABONBA_PTR_FROM_JSON(originProtocolVersion, originProtocolVersion_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        };
        Recommendation() = default ;
        Recommendation(const Recommendation &) = default ;
        Recommendation(Recommendation &&) = default ;
        Recommendation(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Recommendation() = default ;
        Recommendation& operator=(const Recommendation &) = default ;
        Recommendation& operator=(Recommendation &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backendMcpProtocol_ == nullptr
        && this->originProtocolVersion_ == nullptr && this->protocol_ == nullptr; };
        // backendMcpProtocol Field Functions 
        bool hasBackendMcpProtocol() const { return this->backendMcpProtocol_ != nullptr;};
        void deleteBackendMcpProtocol() { this->backendMcpProtocol_ = nullptr;};
        inline string getBackendMcpProtocol() const { DARABONBA_PTR_GET_DEFAULT(backendMcpProtocol_, "") };
        inline Recommendation& setBackendMcpProtocol(string backendMcpProtocol) { DARABONBA_PTR_SET_VALUE(backendMcpProtocol_, backendMcpProtocol) };


        // originProtocolVersion Field Functions 
        bool hasOriginProtocolVersion() const { return this->originProtocolVersion_ != nullptr;};
        void deleteOriginProtocolVersion() { this->originProtocolVersion_ = nullptr;};
        inline string getOriginProtocolVersion() const { DARABONBA_PTR_GET_DEFAULT(originProtocolVersion_, "") };
        inline Recommendation& setOriginProtocolVersion(string originProtocolVersion) { DARABONBA_PTR_SET_VALUE(originProtocolVersion_, originProtocolVersion) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline Recommendation& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      protected:
        // The backend MCP protocol policy. Valid values: legacy or modern.
        shared_ptr<string> backendMcpProtocol_ {};
        // The actual negotiated or selected and verified origin server MCP date version in YYYY-MM-DD format. This is null when not confirmed. It only displays the origin server protocol date metadata. It can be specified during creation and modified during updates. If omitted during an update, the current value is retained. It does not control backend requests or the external protocol of the gateway.
        shared_ptr<string> originProtocolVersion_ {};
        // The protocol. Valid values: SSE or StreamableHTTP. The modern policy is only combined with StreamableHTTP.
        shared_ptr<string> protocol_ {};
      };

      class Observations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Observations& obj) { 
          DARABONBA_PTR_TO_JSON(backendMcpProtocol, backendMcpProtocol_);
          DARABONBA_PTR_TO_JSON(declared, declared_);
          DARABONBA_PTR_TO_JSON(declaredVersions, declaredVersions_);
          DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(negotiatedVersion, negotiatedVersion_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
          DARABONBA_PTR_TO_JSON(sessionMode, sessionMode_);
          DARABONBA_PTR_TO_JSON(verificationStatus, verificationStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Observations& obj) { 
          DARABONBA_PTR_FROM_JSON(backendMcpProtocol, backendMcpProtocol_);
          DARABONBA_PTR_FROM_JSON(declared, declared_);
          DARABONBA_PTR_FROM_JSON(declaredVersions, declaredVersions_);
          DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(negotiatedVersion, negotiatedVersion_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(sessionMode, sessionMode_);
          DARABONBA_PTR_FROM_JSON(verificationStatus, verificationStatus_);
        };
        Observations() = default ;
        Observations(const Observations &) = default ;
        Observations(Observations &&) = default ;
        Observations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Observations() = default ;
        Observations& operator=(const Observations &) = default ;
        Observations& operator=(Observations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backendMcpProtocol_ == nullptr
        && this->declared_ == nullptr && this->declaredVersions_ == nullptr && this->endpoint_ == nullptr && this->negotiatedVersion_ == nullptr && this->protocol_ == nullptr
        && this->sessionMode_ == nullptr && this->verificationStatus_ == nullptr; };
        // backendMcpProtocol Field Functions 
        bool hasBackendMcpProtocol() const { return this->backendMcpProtocol_ != nullptr;};
        void deleteBackendMcpProtocol() { this->backendMcpProtocol_ = nullptr;};
        inline string getBackendMcpProtocol() const { DARABONBA_PTR_GET_DEFAULT(backendMcpProtocol_, "") };
        inline Observations& setBackendMcpProtocol(string backendMcpProtocol) { DARABONBA_PTR_SET_VALUE(backendMcpProtocol_, backendMcpProtocol) };


        // declared Field Functions 
        bool hasDeclared() const { return this->declared_ != nullptr;};
        void deleteDeclared() { this->declared_ = nullptr;};
        inline bool getDeclared() const { DARABONBA_PTR_GET_DEFAULT(declared_, false) };
        inline Observations& setDeclared(bool declared) { DARABONBA_PTR_SET_VALUE(declared_, declared) };


        // declaredVersions Field Functions 
        bool hasDeclaredVersions() const { return this->declaredVersions_ != nullptr;};
        void deleteDeclaredVersions() { this->declaredVersions_ = nullptr;};
        inline const vector<string> & getDeclaredVersions() const { DARABONBA_PTR_GET_CONST(declaredVersions_, vector<string>) };
        inline vector<string> getDeclaredVersions() { DARABONBA_PTR_GET(declaredVersions_, vector<string>) };
        inline Observations& setDeclaredVersions(const vector<string> & declaredVersions) { DARABONBA_PTR_SET_VALUE(declaredVersions_, declaredVersions) };
        inline Observations& setDeclaredVersions(vector<string> && declaredVersions) { DARABONBA_PTR_SET_RVALUE(declaredVersions_, declaredVersions) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline Observations& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // negotiatedVersion Field Functions 
        bool hasNegotiatedVersion() const { return this->negotiatedVersion_ != nullptr;};
        void deleteNegotiatedVersion() { this->negotiatedVersion_ = nullptr;};
        inline string getNegotiatedVersion() const { DARABONBA_PTR_GET_DEFAULT(negotiatedVersion_, "") };
        inline Observations& setNegotiatedVersion(string negotiatedVersion) { DARABONBA_PTR_SET_VALUE(negotiatedVersion_, negotiatedVersion) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline Observations& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // sessionMode Field Functions 
        bool hasSessionMode() const { return this->sessionMode_ != nullptr;};
        void deleteSessionMode() { this->sessionMode_ = nullptr;};
        inline string getSessionMode() const { DARABONBA_PTR_GET_DEFAULT(sessionMode_, "") };
        inline Observations& setSessionMode(string sessionMode) { DARABONBA_PTR_SET_VALUE(sessionMode_, sessionMode) };


        // verificationStatus Field Functions 
        bool hasVerificationStatus() const { return this->verificationStatus_ != nullptr;};
        void deleteVerificationStatus() { this->verificationStatus_ = nullptr;};
        inline string getVerificationStatus() const { DARABONBA_PTR_GET_DEFAULT(verificationStatus_, "") };
        inline Observations& setVerificationStatus(string verificationStatus) { DARABONBA_PTR_SET_VALUE(verificationStatus_, verificationStatus) };


      protected:
        // The backend MCP protocol policy. Valid values: legacy or modern.
        shared_ptr<string> backendMcpProtocol_ {};
        // Indicates whether the origin server declares support for this combination. This is empty when there is no declaration evidence.
        shared_ptr<bool> declared_ {};
        // The list of declared versions. It retains only the date versions actually declared by the origin server and does not infer the full set from a single negotiation.
        shared_ptr<vector<string>> declaredVersions_ {};
        // The desensitized origin server or controlled subsequent endpoint. Sensitive query parameters are not returned.
        shared_ptr<string> endpoint_ {};
        // The negotiated version. For legacy, it is the negotiated version. For modern, it is the selected and verified date version. This is empty when not confirmed.
        shared_ptr<string> negotiatedVersion_ {};
        // The protocol. Valid values: SSE or StreamableHTTP. The modern policy is only combined with StreamableHTTP.
        shared_ptr<string> protocol_ {};
        // The session mode. Valid values: STATEFUL, STATELESS, NOT_APPLICABLE, or UNKNOWN. A direct legacy connection without a session is not automatically judged as failed.
        shared_ptr<string> sessionMode_ {};
        // The protocol verification status. Valid values: VERIFIED, UNSUPPORTED, FAILED, or UNKNOWN. UNSUPPORTED requires protocol evidence.
        shared_ptr<string> verificationStatus_ {};
      };

      class HttpResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HttpResult& obj) { 
          DARABONBA_PTR_TO_JSON(connectionStatus, connectionStatus_);
          DARABONBA_PTR_TO_JSON(definitionStatus, definitionStatus_);
          DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
        };
        friend void from_json(const Darabonba::Json& j, HttpResult& obj) { 
          DARABONBA_PTR_FROM_JSON(connectionStatus, connectionStatus_);
          DARABONBA_PTR_FROM_JSON(definitionStatus, definitionStatus_);
          DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
        };
        HttpResult() = default ;
        HttpResult(const HttpResult &) = default ;
        HttpResult(HttpResult &&) = default ;
        HttpResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HttpResult() = default ;
        HttpResult& operator=(const HttpResult &) = default ;
        HttpResult& operator=(HttpResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionStatus_ == nullptr
        && this->definitionStatus_ == nullptr && this->httpStatusCode_ == nullptr; };
        // connectionStatus Field Functions 
        bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
        void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
        inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
        inline HttpResult& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


        // definitionStatus Field Functions 
        bool hasDefinitionStatus() const { return this->definitionStatus_ != nullptr;};
        void deleteDefinitionStatus() { this->definitionStatus_ = nullptr;};
        inline string getDefinitionStatus() const { DARABONBA_PTR_GET_DEFAULT(definitionStatus_, "") };
        inline HttpResult& setDefinitionStatus(string definitionStatus) { DARABONBA_PTR_SET_VALUE(definitionStatus_, definitionStatus) };


        // httpStatusCode Field Functions 
        bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
        void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
        inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
        inline HttpResult& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


      protected:
        // The connection status of the target. Valid values: PASSED, FAILED, NOT_RUN, or UNKNOWN. This is judged only based on the actual target connection evidence for this check.
        shared_ptr<string> connectionStatus_ {};
        // The check result of the API definition. Valid values: PASSED, FAILED, or NOT_RUN. The value is NOT_RUN when no OpenAPI specification is available.
        shared_ptr<string> definitionStatus_ {};
        // The actual HTTP status code received. This is empty if the request was not executed or no response was received.
        shared_ptr<int32_t> httpStatusCode_ {};
      };

      class Error : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Error& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(message, message_);
          DARABONBA_PTR_TO_JSON(retryable, retryable_);
          DARABONBA_PTR_TO_JSON(source, source_);
          DARABONBA_PTR_TO_JSON(stage, stage_);
        };
        friend void from_json(const Darabonba::Json& j, Error& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(message, message_);
          DARABONBA_PTR_FROM_JSON(retryable, retryable_);
          DARABONBA_PTR_FROM_JSON(source, source_);
          DARABONBA_PTR_FROM_JSON(stage, stage_);
        };
        Error() = default ;
        Error(const Error &) = default ;
        Error(Error &&) = default ;
        Error(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Error() = default ;
        Error& operator=(const Error &) = default ;
        Error& operator=(Error &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->retryable_ == nullptr && this->source_ == nullptr && this->stage_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Error& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Error& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // retryable Field Functions 
        bool hasRetryable() const { return this->retryable_ != nullptr;};
        void deleteRetryable() { this->retryable_ = nullptr;};
        inline bool getRetryable() const { DARABONBA_PTR_GET_DEFAULT(retryable_, false) };
        inline Error& setRetryable(bool retryable) { DARABONBA_PTR_SET_VALUE(retryable_, retryable) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline Error& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // stage Field Functions 
        bool hasStage() const { return this->stage_ != nullptr;};
        void deleteStage() { this->stage_ = nullptr;};
        inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
        inline Error& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


      protected:
        // Returns only bounded diagnostic codes. The original error body from the origin server is not returned.
        shared_ptr<string> code_ {};
        // The trimmed and redacted diagnostic information. This excludes credentials or original responses.
        shared_ptr<string> message_ {};
        // Indicates whether the operation is suitable for retry under a restricted policy. This does not trigger automatic retries.
        shared_ptr<bool> retryable_ {};
        // The error source, which can be MAGIC, ROUTER, NETWORK, ORIGIN, or UNKNOWN. This is determined solely based on actual evidence.
        shared_ptr<string> source_ {};
        // The detection or publishing stage where the error occurred.
        shared_ptr<string> stage_ {};
      };

      class Coverage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Coverage& obj) { 
          DARABONBA_PTR_TO_JSON(backendMcpProtocol, backendMcpProtocol_);
          DARABONBA_PTR_TO_JSON(headerNames, headerNames_);
          DARABONBA_PTR_TO_JSON(method, method_);
          DARABONBA_PTR_TO_JSON(path, path_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
          DARABONBA_PTR_TO_JSON(target, target_);
          DARABONBA_PTR_TO_JSON(viaGateway, viaGateway_);
        };
        friend void from_json(const Darabonba::Json& j, Coverage& obj) { 
          DARABONBA_PTR_FROM_JSON(backendMcpProtocol, backendMcpProtocol_);
          DARABONBA_PTR_FROM_JSON(headerNames, headerNames_);
          DARABONBA_PTR_FROM_JSON(method, method_);
          DARABONBA_PTR_FROM_JSON(path, path_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(target, target_);
          DARABONBA_PTR_FROM_JSON(viaGateway, viaGateway_);
        };
        Coverage() = default ;
        Coverage(const Coverage &) = default ;
        Coverage(Coverage &&) = default ;
        Coverage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Coverage() = default ;
        Coverage& operator=(const Coverage &) = default ;
        Coverage& operator=(Coverage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backendMcpProtocol_ == nullptr
        && this->headerNames_ == nullptr && this->method_ == nullptr && this->path_ == nullptr && this->protocol_ == nullptr && this->target_ == nullptr
        && this->viaGateway_ == nullptr; };
        // backendMcpProtocol Field Functions 
        bool hasBackendMcpProtocol() const { return this->backendMcpProtocol_ != nullptr;};
        void deleteBackendMcpProtocol() { this->backendMcpProtocol_ = nullptr;};
        inline string getBackendMcpProtocol() const { DARABONBA_PTR_GET_DEFAULT(backendMcpProtocol_, "") };
        inline Coverage& setBackendMcpProtocol(string backendMcpProtocol) { DARABONBA_PTR_SET_VALUE(backendMcpProtocol_, backendMcpProtocol) };


        // headerNames Field Functions 
        bool hasHeaderNames() const { return this->headerNames_ != nullptr;};
        void deleteHeaderNames() { this->headerNames_ = nullptr;};
        inline const vector<string> & getHeaderNames() const { DARABONBA_PTR_GET_CONST(headerNames_, vector<string>) };
        inline vector<string> getHeaderNames() { DARABONBA_PTR_GET(headerNames_, vector<string>) };
        inline Coverage& setHeaderNames(const vector<string> & headerNames) { DARABONBA_PTR_SET_VALUE(headerNames_, headerNames) };
        inline Coverage& setHeaderNames(vector<string> && headerNames) { DARABONBA_PTR_SET_RVALUE(headerNames_, headerNames) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline Coverage& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline Coverage& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline Coverage& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
        inline Coverage& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


        // viaGateway Field Functions 
        bool hasViaGateway() const { return this->viaGateway_ != nullptr;};
        void deleteViaGateway() { this->viaGateway_ = nullptr;};
        inline bool getViaGateway() const { DARABONBA_PTR_GET_DEFAULT(viaGateway_, false) };
        inline Coverage& setViaGateway(bool viaGateway) { DARABONBA_PTR_SET_VALUE(viaGateway_, viaGateway) };


      protected:
        // The evidence-verified legacy or modern protocol. This field is empty during HTTP interface checks.
        shared_ptr<string> backendMcpProtocol_ {};
        // Returns only non-sensitive names and excludes internal platform routing or network identities.
        shared_ptr<vector<string>> headerNames_ {};
        // The selected HTTP method for this check. This field is empty for direct connections.
        shared_ptr<string> method_ {};
        // The redacted summary of the selected HTTP path for this check. This field is empty for direct connections.
        shared_ptr<string> path_ {};
        // The evidence-verified MCP transport. This field is empty during HTTP interface checks.
        shared_ptr<string> protocol_ {};
        // The summary of the origin server target for this check. It does not contain sensitive query parameters or credentials.
        shared_ptr<string> target_ {};
        // The origin server check before creation is fixed to false, which does not indicate that the resource is ready.
        shared_ptr<bool> viaGateway_ {};
      };

      virtual bool empty() const override { return this->coverage_ == nullptr
        && this->error_ == nullptr && this->httpResult_ == nullptr && this->observations_ == nullptr && this->probeId_ == nullptr && this->probedAt_ == nullptr
        && this->recommendation_ == nullptr && this->selectedConfiguration_ == nullptr && this->stage_ == nullptr && this->status_ == nullptr && this->tools_ == nullptr
        && this->toolsComplete_ == nullptr && this->toolsStatus_ == nullptr && this->warnings_ == nullptr; };
      // coverage Field Functions 
      bool hasCoverage() const { return this->coverage_ != nullptr;};
      void deleteCoverage() { this->coverage_ = nullptr;};
      inline const Data::Coverage & getCoverage() const { DARABONBA_PTR_GET_CONST(coverage_, Data::Coverage) };
      inline Data::Coverage getCoverage() { DARABONBA_PTR_GET(coverage_, Data::Coverage) };
      inline Data& setCoverage(const Data::Coverage & coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };
      inline Data& setCoverage(Data::Coverage && coverage) { DARABONBA_PTR_SET_RVALUE(coverage_, coverage) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline const Data::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, Data::Error) };
      inline Data::Error getError() { DARABONBA_PTR_GET(error_, Data::Error) };
      inline Data& setError(const Data::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
      inline Data& setError(Data::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


      // httpResult Field Functions 
      bool hasHttpResult() const { return this->httpResult_ != nullptr;};
      void deleteHttpResult() { this->httpResult_ = nullptr;};
      inline const Data::HttpResult & getHttpResult() const { DARABONBA_PTR_GET_CONST(httpResult_, Data::HttpResult) };
      inline Data::HttpResult getHttpResult() { DARABONBA_PTR_GET(httpResult_, Data::HttpResult) };
      inline Data& setHttpResult(const Data::HttpResult & httpResult) { DARABONBA_PTR_SET_VALUE(httpResult_, httpResult) };
      inline Data& setHttpResult(Data::HttpResult && httpResult) { DARABONBA_PTR_SET_RVALUE(httpResult_, httpResult) };


      // observations Field Functions 
      bool hasObservations() const { return this->observations_ != nullptr;};
      void deleteObservations() { this->observations_ = nullptr;};
      inline const vector<Data::Observations> & getObservations() const { DARABONBA_PTR_GET_CONST(observations_, vector<Data::Observations>) };
      inline vector<Data::Observations> getObservations() { DARABONBA_PTR_GET(observations_, vector<Data::Observations>) };
      inline Data& setObservations(const vector<Data::Observations> & observations) { DARABONBA_PTR_SET_VALUE(observations_, observations) };
      inline Data& setObservations(vector<Data::Observations> && observations) { DARABONBA_PTR_SET_RVALUE(observations_, observations) };


      // probeId Field Functions 
      bool hasProbeId() const { return this->probeId_ != nullptr;};
      void deleteProbeId() { this->probeId_ = nullptr;};
      inline string getProbeId() const { DARABONBA_PTR_GET_DEFAULT(probeId_, "") };
      inline Data& setProbeId(string probeId) { DARABONBA_PTR_SET_VALUE(probeId_, probeId) };


      // probedAt Field Functions 
      bool hasProbedAt() const { return this->probedAt_ != nullptr;};
      void deleteProbedAt() { this->probedAt_ = nullptr;};
      inline string getProbedAt() const { DARABONBA_PTR_GET_DEFAULT(probedAt_, "") };
      inline Data& setProbedAt(string probedAt) { DARABONBA_PTR_SET_VALUE(probedAt_, probedAt) };


      // recommendation Field Functions 
      bool hasRecommendation() const { return this->recommendation_ != nullptr;};
      void deleteRecommendation() { this->recommendation_ = nullptr;};
      inline const Data::Recommendation & getRecommendation() const { DARABONBA_PTR_GET_CONST(recommendation_, Data::Recommendation) };
      inline Data::Recommendation getRecommendation() { DARABONBA_PTR_GET(recommendation_, Data::Recommendation) };
      inline Data& setRecommendation(const Data::Recommendation & recommendation) { DARABONBA_PTR_SET_VALUE(recommendation_, recommendation) };
      inline Data& setRecommendation(Data::Recommendation && recommendation) { DARABONBA_PTR_SET_RVALUE(recommendation_, recommendation) };


      // selectedConfiguration Field Functions 
      bool hasSelectedConfiguration() const { return this->selectedConfiguration_ != nullptr;};
      void deleteSelectedConfiguration() { this->selectedConfiguration_ = nullptr;};
      inline const Data::SelectedConfiguration & getSelectedConfiguration() const { DARABONBA_PTR_GET_CONST(selectedConfiguration_, Data::SelectedConfiguration) };
      inline Data::SelectedConfiguration getSelectedConfiguration() { DARABONBA_PTR_GET(selectedConfiguration_, Data::SelectedConfiguration) };
      inline Data& setSelectedConfiguration(const Data::SelectedConfiguration & selectedConfiguration) { DARABONBA_PTR_SET_VALUE(selectedConfiguration_, selectedConfiguration) };
      inline Data& setSelectedConfiguration(Data::SelectedConfiguration && selectedConfiguration) { DARABONBA_PTR_SET_RVALUE(selectedConfiguration_, selectedConfiguration) };


      // stage Field Functions 
      bool hasStage() const { return this->stage_ != nullptr;};
      void deleteStage() { this->stage_ = nullptr;};
      inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
      inline Data& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tools Field Functions 
      bool hasTools() const { return this->tools_ != nullptr;};
      void deleteTools() { this->tools_ = nullptr;};
      inline const vector<Data::Tools> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Data::Tools>) };
      inline vector<Data::Tools> getTools() { DARABONBA_PTR_GET(tools_, vector<Data::Tools>) };
      inline Data& setTools(const vector<Data::Tools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
      inline Data& setTools(vector<Data::Tools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


      // toolsComplete Field Functions 
      bool hasToolsComplete() const { return this->toolsComplete_ != nullptr;};
      void deleteToolsComplete() { this->toolsComplete_ = nullptr;};
      inline bool getToolsComplete() const { DARABONBA_PTR_GET_DEFAULT(toolsComplete_, false) };
      inline Data& setToolsComplete(bool toolsComplete) { DARABONBA_PTR_SET_VALUE(toolsComplete_, toolsComplete) };


      // toolsStatus Field Functions 
      bool hasToolsStatus() const { return this->toolsStatus_ != nullptr;};
      void deleteToolsStatus() { this->toolsStatus_ = nullptr;};
      inline string getToolsStatus() const { DARABONBA_PTR_GET_DEFAULT(toolsStatus_, "") };
      inline Data& setToolsStatus(string toolsStatus) { DARABONBA_PTR_SET_VALUE(toolsStatus_, toolsStatus) };


      // warnings Field Functions 
      bool hasWarnings() const { return this->warnings_ != nullptr;};
      void deleteWarnings() { this->warnings_ = nullptr;};
      inline const vector<Data::Warnings> & getWarnings() const { DARABONBA_PTR_GET_CONST(warnings_, vector<Data::Warnings>) };
      inline vector<Data::Warnings> getWarnings() { DARABONBA_PTR_GET(warnings_, vector<Data::Warnings>) };
      inline Data& setWarnings(const vector<Data::Warnings> & warnings) { DARABONBA_PTR_SET_VALUE(warnings_, warnings) };
      inline Data& setWarnings(vector<Data::Warnings> && warnings) { DARABONBA_PTR_SET_RVALUE(warnings_, warnings) };


    protected:
      // The check coverage. It describes the target, protocol, or HTTP request conditions for this check and does not prove that the formal gateway and other APIs are available.
      shared_ptr<Data::Coverage> coverage_ {};
      // Indicates origin server failures. This field is empty upon success. Origin server 401 errors or connection failures are not uniformly mapped to API exceptions.
      shared_ptr<Data::Error> error_ {};
      // The HTTP check result. This is returned only for the HTTP type. The definition and actual request status are separated. This is null for direct connections. A 2xx status code only proves the success of this request and does not prove that business functions or other APIs are available.
      shared_ptr<Data::HttpResult> httpResult_ {};
      // The declared and actual test results for controlled endpoints of a single origin server. This is an empty array for the HTTP type.
      shared_ptr<vector<Data::Observations>> observations_ {};
      // The ID used only to correlate desensitized logs. It is not used for queries, authorization, binding MCPs, or reusing check evidence.
      shared_ptr<string> probeId_ {};
      // The observation time in ISO 8601 UTC format.
      shared_ptr<string> probedAt_ {};
      // The recommended protocol combination. It only includes verified combinations that the platform can access. This is empty when no combinations are available or for the HTTP type.
      shared_ptr<Data::Recommendation> recommendation_ {};
      // The combination actually used for tool queries. Specifying this does not mean verification passed. This is empty for the HTTP type.
      shared_ptr<Data::SelectedConfiguration> selectedConfiguration_ {};
      // The stage of the check. Valid values: AUTHORIZE, VALIDATE, RATE_LIMIT, NETWORK, NETWORK_CONTEXT, CONNECT, DISCOVER, INITIALIZE, SESSION_CHECK, TOOLS_LIST, HTTP_DEFINITION, HTTP_REQUEST, CLEANUP, EXECUTION, or COMPLETE.
      shared_ptr<string> stage_ {};
      // The check result of the origin server. Valid values: SUCCESS, PARTIAL, or FAILED. SUCCESS indicates that the protocol check passed but no capabilities were declared or no tools capability exists. A completely empty tool list also passes. PARTIAL indicates that the tool query failed or was truncated. For HTTP, PARTIAL indicates that only the definition was checked or required evidence is unknown.
      shared_ptr<string> status_ {};
      // The restricted metadata list for this check. Tools are not executed. An empty array is returned if tools are not declared, the list is completely empty, or the type is HTTP. Refer to toolsStatus and toolsComplete for judgment.
      shared_ptr<vector<Data::Tools>> tools_ {};
      // Indicates whether the tool list is complete. The value is true for COMPLETE or EMPTY, and false for TRUNCATED. The value is null if not queried, not declared, or failed. Completeness cannot be determined solely by an empty array.
      shared_ptr<bool> toolsComplete_ {};
      // The tool query status. Valid values: NOT_RUN, NOT_DECLARED, EMPTY, COMPLETE, TRUNCATED, or FAILED. If tools are not declared, the value is NOT_DECLARED and tools/list is not executed. For the HTTP type, the value is NOT_RUN.
      shared_ptr<string> toolsStatus_ {};
      // The coverage and completeness limitations of this check.
      shared_ptr<vector<Data::Warnings>> warnings_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ProbeMcpOriginResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ProbeMcpOriginResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ProbeMcpOriginResponseBody::Data) };
    inline ProbeMcpOriginResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ProbeMcpOriginResponseBody::Data) };
    inline ProbeMcpOriginResponseBody& setData(const ProbeMcpOriginResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ProbeMcpOriginResponseBody& setData(ProbeMcpOriginResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ProbeMcpOriginResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ProbeMcpOriginResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ProbeMcpOriginResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ProbeMcpOriginResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code of the API operation. SUCCESS indicates that the operation completed normally. For the origin server result, see data.status.
    shared_ptr<string> code_ {};
    // The read-only, one-time, and bounded probe result. It is not persisted and is not associated with subsequently created MCPs.
    shared_ptr<ProbeMcpOriginResponseBody::Data> data_ {};
    // The HTTP status code of the POP API request.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The processing result of the API operation, excluding the original response from the origin server.
    shared_ptr<string> message_ {};
    // The ID used to correlate this API call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API operation was processed successfully. This means that authorization, parameter validation, and execution mechanisms completed normally, which does not equate to a successful origin server check.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif

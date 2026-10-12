// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRODUCTREFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRODUCTREFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateProductRefRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProductRefRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apigRefConfig, apigRefConfig_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProductRefRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apigRefConfig, apigRefConfig_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
    };
    CreateProductRefRequest() = default ;
    CreateProductRefRequest(const CreateProductRefRequest &) = default ;
    CreateProductRefRequest(CreateProductRefRequest &&) = default ;
    CreateProductRefRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProductRefRequest() = default ;
    CreateProductRefRequest& operator=(const CreateProductRefRequest &) = default ;
    CreateProductRefRequest& operator=(CreateProductRefRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApigRefConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApigRefConfig& obj) { 
        DARABONBA_PTR_TO_JSON(agentApiId, agentApiId_);
        DARABONBA_PTR_TO_JSON(agentApiName, agentApiName_);
        DARABONBA_PTR_TO_JSON(apiId, apiId_);
        DARABONBA_PTR_TO_JSON(apiName, apiName_);
        DARABONBA_PTR_TO_JSON(mcpRouteId, mcpRouteId_);
        DARABONBA_PTR_TO_JSON(mcpServerId, mcpServerId_);
        DARABONBA_PTR_TO_JSON(mcpServerName, mcpServerName_);
        DARABONBA_PTR_TO_JSON(modelApiId, modelApiId_);
        DARABONBA_PTR_TO_JSON(modelApiName, modelApiName_);
      };
      friend void from_json(const Darabonba::Json& j, ApigRefConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(agentApiId, agentApiId_);
        DARABONBA_PTR_FROM_JSON(agentApiName, agentApiName_);
        DARABONBA_PTR_FROM_JSON(apiId, apiId_);
        DARABONBA_PTR_FROM_JSON(apiName, apiName_);
        DARABONBA_PTR_FROM_JSON(mcpRouteId, mcpRouteId_);
        DARABONBA_PTR_FROM_JSON(mcpServerId, mcpServerId_);
        DARABONBA_PTR_FROM_JSON(mcpServerName, mcpServerName_);
        DARABONBA_PTR_FROM_JSON(modelApiId, modelApiId_);
        DARABONBA_PTR_FROM_JSON(modelApiName, modelApiName_);
      };
      ApigRefConfig() = default ;
      ApigRefConfig(const ApigRefConfig &) = default ;
      ApigRefConfig(ApigRefConfig &&) = default ;
      ApigRefConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApigRefConfig() = default ;
      ApigRefConfig& operator=(const ApigRefConfig &) = default ;
      ApigRefConfig& operator=(ApigRefConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentApiId_ == nullptr
        && this->agentApiName_ == nullptr && this->apiId_ == nullptr && this->apiName_ == nullptr && this->mcpRouteId_ == nullptr && this->mcpServerId_ == nullptr
        && this->mcpServerName_ == nullptr && this->modelApiId_ == nullptr && this->modelApiName_ == nullptr; };
      // agentApiId Field Functions 
      bool hasAgentApiId() const { return this->agentApiId_ != nullptr;};
      void deleteAgentApiId() { this->agentApiId_ = nullptr;};
      inline string getAgentApiId() const { DARABONBA_PTR_GET_DEFAULT(agentApiId_, "") };
      inline ApigRefConfig& setAgentApiId(string agentApiId) { DARABONBA_PTR_SET_VALUE(agentApiId_, agentApiId) };


      // agentApiName Field Functions 
      bool hasAgentApiName() const { return this->agentApiName_ != nullptr;};
      void deleteAgentApiName() { this->agentApiName_ = nullptr;};
      inline string getAgentApiName() const { DARABONBA_PTR_GET_DEFAULT(agentApiName_, "") };
      inline ApigRefConfig& setAgentApiName(string agentApiName) { DARABONBA_PTR_SET_VALUE(agentApiName_, agentApiName) };


      // apiId Field Functions 
      bool hasApiId() const { return this->apiId_ != nullptr;};
      void deleteApiId() { this->apiId_ = nullptr;};
      inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
      inline ApigRefConfig& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


      // apiName Field Functions 
      bool hasApiName() const { return this->apiName_ != nullptr;};
      void deleteApiName() { this->apiName_ = nullptr;};
      inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
      inline ApigRefConfig& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


      // mcpRouteId Field Functions 
      bool hasMcpRouteId() const { return this->mcpRouteId_ != nullptr;};
      void deleteMcpRouteId() { this->mcpRouteId_ = nullptr;};
      inline string getMcpRouteId() const { DARABONBA_PTR_GET_DEFAULT(mcpRouteId_, "") };
      inline ApigRefConfig& setMcpRouteId(string mcpRouteId) { DARABONBA_PTR_SET_VALUE(mcpRouteId_, mcpRouteId) };


      // mcpServerId Field Functions 
      bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
      void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
      inline string getMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
      inline ApigRefConfig& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


      // mcpServerName Field Functions 
      bool hasMcpServerName() const { return this->mcpServerName_ != nullptr;};
      void deleteMcpServerName() { this->mcpServerName_ = nullptr;};
      inline string getMcpServerName() const { DARABONBA_PTR_GET_DEFAULT(mcpServerName_, "") };
      inline ApigRefConfig& setMcpServerName(string mcpServerName) { DARABONBA_PTR_SET_VALUE(mcpServerName_, mcpServerName) };


      // modelApiId Field Functions 
      bool hasModelApiId() const { return this->modelApiId_ != nullptr;};
      void deleteModelApiId() { this->modelApiId_ = nullptr;};
      inline string getModelApiId() const { DARABONBA_PTR_GET_DEFAULT(modelApiId_, "") };
      inline ApigRefConfig& setModelApiId(string modelApiId) { DARABONBA_PTR_SET_VALUE(modelApiId_, modelApiId) };


      // modelApiName Field Functions 
      bool hasModelApiName() const { return this->modelApiName_ != nullptr;};
      void deleteModelApiName() { this->modelApiName_ = nullptr;};
      inline string getModelApiName() const { DARABONBA_PTR_GET_DEFAULT(modelApiName_, "") };
      inline ApigRefConfig& setModelApiName(string modelApiName) { DARABONBA_PTR_SET_VALUE(modelApiName_, modelApiName) };


    protected:
      // The ID of the associated agent API.
      shared_ptr<string> agentApiId_ {};
      // The name of the associated agent API.
      shared_ptr<string> agentApiName_ {};
      // The ID of the associated API.
      shared_ptr<string> apiId_ {};
      // The name of the associated API.
      shared_ptr<string> apiName_ {};
      // The ID of the associated MCP route.
      shared_ptr<string> mcpRouteId_ {};
      // The ID of the associated MCP server.
      shared_ptr<string> mcpServerId_ {};
      // The name of the associated MCP server.
      shared_ptr<string> mcpServerName_ {};
      // The ID of the associated model API.
      shared_ptr<string> modelApiId_ {};
      // The name of the associated model API.
      shared_ptr<string> modelApiName_ {};
    };

    virtual bool empty() const override { return this->apigRefConfig_ == nullptr
        && this->gatewayId_ == nullptr; };
    // apigRefConfig Field Functions 
    bool hasApigRefConfig() const { return this->apigRefConfig_ != nullptr;};
    void deleteApigRefConfig() { this->apigRefConfig_ = nullptr;};
    inline const CreateProductRefRequest::ApigRefConfig & getApigRefConfig() const { DARABONBA_PTR_GET_CONST(apigRefConfig_, CreateProductRefRequest::ApigRefConfig) };
    inline CreateProductRefRequest::ApigRefConfig getApigRefConfig() { DARABONBA_PTR_GET(apigRefConfig_, CreateProductRefRequest::ApigRefConfig) };
    inline CreateProductRefRequest& setApigRefConfig(const CreateProductRefRequest::ApigRefConfig & apigRefConfig) { DARABONBA_PTR_SET_VALUE(apigRefConfig_, apigRefConfig) };
    inline CreateProductRefRequest& setApigRefConfig(CreateProductRefRequest::ApigRefConfig && apigRefConfig) { DARABONBA_PTR_SET_RVALUE(apigRefConfig_, apigRefConfig) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline CreateProductRefRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


  protected:
    // The API configuration associated with the API product.
    shared_ptr<CreateProductRefRequest::ApigRefConfig> apigRefConfig_ {};
    // The ID of the gateway.
    shared_ptr<string> gatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HiMarketAgentConfig.hpp>
#include <alibabacloud/models/HiMarketProductFeature.hpp>
#include <alibabacloud/models/HiMarketIcon.hpp>
#include <alibabacloud/models/HiMarketMcpConfig.hpp>
#include <alibabacloud/models/HiMarketModelConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetProductResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetProductResponseBody() = default ;
    GetProductResponseBody(const GetProductResponseBody &) = default ;
    GetProductResponseBody(GetProductResponseBody &&) = default ;
    GetProductResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductResponseBody() = default ;
    GetProductResponseBody& operator=(const GetProductResponseBody &) = default ;
    GetProductResponseBody& operator=(GetProductResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(agentConfig, agentConfig_);
        DARABONBA_PTR_TO_JSON(autoApprove, autoApprove_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(document, document_);
        DARABONBA_PTR_TO_JSON(feature, feature_);
        DARABONBA_PTR_TO_JSON(icon, icon_);
        DARABONBA_PTR_TO_JSON(mcpConfig, mcpConfig_);
        DARABONBA_PTR_TO_JSON(modelConfig, modelConfig_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(productId, productId_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(agentConfig, agentConfig_);
        DARABONBA_PTR_FROM_JSON(autoApprove, autoApprove_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(document, document_);
        DARABONBA_PTR_FROM_JSON(feature, feature_);
        DARABONBA_PTR_FROM_JSON(icon, icon_);
        DARABONBA_PTR_FROM_JSON(mcpConfig, mcpConfig_);
        DARABONBA_PTR_FROM_JSON(modelConfig, modelConfig_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(productId, productId_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(type, type_);
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
      virtual bool empty() const override { return this->agentConfig_ == nullptr
        && this->autoApprove_ == nullptr && this->description_ == nullptr && this->document_ == nullptr && this->feature_ == nullptr && this->icon_ == nullptr
        && this->mcpConfig_ == nullptr && this->modelConfig_ == nullptr && this->name_ == nullptr && this->productId_ == nullptr && this->regionId_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
      // agentConfig Field Functions 
      bool hasAgentConfig() const { return this->agentConfig_ != nullptr;};
      void deleteAgentConfig() { this->agentConfig_ = nullptr;};
      inline const HiMarketAgentConfig & getAgentConfig() const { DARABONBA_PTR_GET_CONST(agentConfig_, HiMarketAgentConfig) };
      inline HiMarketAgentConfig getAgentConfig() { DARABONBA_PTR_GET(agentConfig_, HiMarketAgentConfig) };
      inline Data& setAgentConfig(const HiMarketAgentConfig & agentConfig) { DARABONBA_PTR_SET_VALUE(agentConfig_, agentConfig) };
      inline Data& setAgentConfig(HiMarketAgentConfig && agentConfig) { DARABONBA_PTR_SET_RVALUE(agentConfig_, agentConfig) };


      // autoApprove Field Functions 
      bool hasAutoApprove() const { return this->autoApprove_ != nullptr;};
      void deleteAutoApprove() { this->autoApprove_ = nullptr;};
      inline bool getAutoApprove() const { DARABONBA_PTR_GET_DEFAULT(autoApprove_, false) };
      inline Data& setAutoApprove(bool autoApprove) { DARABONBA_PTR_SET_VALUE(autoApprove_, autoApprove) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // document Field Functions 
      bool hasDocument() const { return this->document_ != nullptr;};
      void deleteDocument() { this->document_ = nullptr;};
      inline string getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
      inline Data& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


      // feature Field Functions 
      bool hasFeature() const { return this->feature_ != nullptr;};
      void deleteFeature() { this->feature_ = nullptr;};
      inline const HiMarketProductFeature & getFeature() const { DARABONBA_PTR_GET_CONST(feature_, HiMarketProductFeature) };
      inline HiMarketProductFeature getFeature() { DARABONBA_PTR_GET(feature_, HiMarketProductFeature) };
      inline Data& setFeature(const HiMarketProductFeature & feature) { DARABONBA_PTR_SET_VALUE(feature_, feature) };
      inline Data& setFeature(HiMarketProductFeature && feature) { DARABONBA_PTR_SET_RVALUE(feature_, feature) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline const HiMarketIcon & getIcon() const { DARABONBA_PTR_GET_CONST(icon_, HiMarketIcon) };
      inline HiMarketIcon getIcon() { DARABONBA_PTR_GET(icon_, HiMarketIcon) };
      inline Data& setIcon(const HiMarketIcon & icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };
      inline Data& setIcon(HiMarketIcon && icon) { DARABONBA_PTR_SET_RVALUE(icon_, icon) };


      // mcpConfig Field Functions 
      bool hasMcpConfig() const { return this->mcpConfig_ != nullptr;};
      void deleteMcpConfig() { this->mcpConfig_ = nullptr;};
      inline const HiMarketMcpConfig & getMcpConfig() const { DARABONBA_PTR_GET_CONST(mcpConfig_, HiMarketMcpConfig) };
      inline HiMarketMcpConfig getMcpConfig() { DARABONBA_PTR_GET(mcpConfig_, HiMarketMcpConfig) };
      inline Data& setMcpConfig(const HiMarketMcpConfig & mcpConfig) { DARABONBA_PTR_SET_VALUE(mcpConfig_, mcpConfig) };
      inline Data& setMcpConfig(HiMarketMcpConfig && mcpConfig) { DARABONBA_PTR_SET_RVALUE(mcpConfig_, mcpConfig) };


      // modelConfig Field Functions 
      bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
      void deleteModelConfig() { this->modelConfig_ = nullptr;};
      inline const HiMarketModelConfig & getModelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, HiMarketModelConfig) };
      inline HiMarketModelConfig getModelConfig() { DARABONBA_PTR_GET(modelConfig_, HiMarketModelConfig) };
      inline Data& setModelConfig(const HiMarketModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
      inline Data& setModelConfig(HiMarketModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline Data& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The Agent-related configurations of the API product. The agentAPIConfig member includes agentProtocols, which is a list of protocols supported by the agent, and routes, which is a list of routes.
      shared_ptr<HiMarketAgentConfig> agentConfig_ {};
      // Indicates whether subscription requests for the product are automatically approved.
      shared_ptr<bool> autoApprove_ {};
      // The description of the API product.
      shared_ptr<string> description_ {};
      // The documentation content of the API product.
      shared_ptr<string> document_ {};
      // The capability configurations of the API product. Currently, this includes only the modelFeature member for model capabilities, which contains model, maxTokens, temperature, streaming, webSearch, enableThinking, and enableMultiModal.
      shared_ptr<HiMarketProductFeature> feature_ {};
      // The icon configurations of the API product, which consist of two fields: type for the icon type and value for the icon information.
      shared_ptr<HiMarketIcon> icon_ {};
      // The MCP-related configurations of the API product. The members include mcpServerName for the MCP server name, tools, mcpServerConfig for the path and domains, and meta for the protocol.
      shared_ptr<HiMarketMcpConfig> mcpConfig_ {};
      // The model API-related configurations of the API product. The modelAPIConfig member includes modelCategory for the AI model category, aiProtocols for the list of AI API protocols, and routes for the list of routes.
      shared_ptr<HiMarketModelConfig> modelConfig_ {};
      // The name of the API product.
      shared_ptr<string> name_ {};
      // The ID of the API product, which is the primary ID of the API product resource. You can use this ID to locate the product in operations such as GetProduct, UpdateProduct, DeleteProduct, PublishProduct, SetProductCategories, and GetProductRef.
      shared_ptr<string> productId_ {};
      // The ID of the region to which the API product belongs.
      shared_ptr<string> regionId_ {};
      // The status of the API product. Valid values: Pending, Ready, and Published.
      shared_ptr<string> status_ {};
      // The type of the API product. The set of valid values is not declared in the API definition. Refer to the types displayed in the console.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetProductResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetProductResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetProductResponseBody::Data) };
    inline GetProductResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetProductResponseBody::Data) };
    inline GetProductResponseBody& setData(const GetProductResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetProductResponseBody& setData(GetProductResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetProductResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProductResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetProductResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

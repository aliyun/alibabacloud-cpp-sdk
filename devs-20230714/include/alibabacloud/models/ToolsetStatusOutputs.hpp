// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOOLSETSTATUSOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_TOOLSETSTATUSOUTPUTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ToolsetStatusOutputsMcpServerConfig.hpp>
#include <vector>
#include <alibabacloud/Devs20230714.hpp>
#include <alibabacloud/models/ToolsetStatusOutputsUrls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ToolsetStatusOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ToolsetStatusOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(functionArn, functionArn_);
      DARABONBA_PTR_TO_JSON(mcpServerConfig, mcpServerConfig_);
      DARABONBA_PTR_TO_JSON(openApiTools, openApiTools_);
      DARABONBA_PTR_TO_JSON(tools, tools_);
      DARABONBA_PTR_TO_JSON(urls, urls_);
    };
    friend void from_json(const Darabonba::Json& j, ToolsetStatusOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(functionArn, functionArn_);
      DARABONBA_PTR_FROM_JSON(mcpServerConfig, mcpServerConfig_);
      DARABONBA_PTR_FROM_JSON(openApiTools, openApiTools_);
      DARABONBA_PTR_FROM_JSON(tools, tools_);
      DARABONBA_PTR_FROM_JSON(urls, urls_);
    };
    ToolsetStatusOutputs() = default ;
    ToolsetStatusOutputs(const ToolsetStatusOutputs &) = default ;
    ToolsetStatusOutputs(ToolsetStatusOutputs &&) = default ;
    ToolsetStatusOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ToolsetStatusOutputs() = default ;
    ToolsetStatusOutputs& operator=(const ToolsetStatusOutputs &) = default ;
    ToolsetStatusOutputs& operator=(ToolsetStatusOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->functionArn_ != nullptr
        && this->mcpServerConfig_ != nullptr && this->openApiTools_ != nullptr && this->tools_ != nullptr && this->urls_ != nullptr; };
    // functionArn Field Functions 
    bool hasFunctionArn() const { return this->functionArn_ != nullptr;};
    void deleteFunctionArn() { this->functionArn_ = nullptr;};
    inline string functionArn() const { DARABONBA_PTR_GET_DEFAULT(functionArn_, "") };
    inline ToolsetStatusOutputs& setFunctionArn(string functionArn) { DARABONBA_PTR_SET_VALUE(functionArn_, functionArn) };


    // mcpServerConfig Field Functions 
    bool hasMcpServerConfig() const { return this->mcpServerConfig_ != nullptr;};
    void deleteMcpServerConfig() { this->mcpServerConfig_ = nullptr;};
    inline const Models::ToolsetStatusOutputsMcpServerConfig & mcpServerConfig() const { DARABONBA_PTR_GET_CONST(mcpServerConfig_, Models::ToolsetStatusOutputsMcpServerConfig) };
    inline Models::ToolsetStatusOutputsMcpServerConfig mcpServerConfig() { DARABONBA_PTR_GET(mcpServerConfig_, Models::ToolsetStatusOutputsMcpServerConfig) };
    inline ToolsetStatusOutputs& setMcpServerConfig(const Models::ToolsetStatusOutputsMcpServerConfig & mcpServerConfig) { DARABONBA_PTR_SET_VALUE(mcpServerConfig_, mcpServerConfig) };
    inline ToolsetStatusOutputs& setMcpServerConfig(Models::ToolsetStatusOutputsMcpServerConfig && mcpServerConfig) { DARABONBA_PTR_SET_RVALUE(mcpServerConfig_, mcpServerConfig) };


    // openApiTools Field Functions 
    bool hasOpenApiTools() const { return this->openApiTools_ != nullptr;};
    void deleteOpenApiTools() { this->openApiTools_ = nullptr;};
    inline const vector<Models::OpenAPIToolMeta> & openApiTools() const { DARABONBA_PTR_GET_CONST(openApiTools_, vector<Models::OpenAPIToolMeta>) };
    inline vector<Models::OpenAPIToolMeta> openApiTools() { DARABONBA_PTR_GET(openApiTools_, vector<Models::OpenAPIToolMeta>) };
    inline ToolsetStatusOutputs& setOpenApiTools(const vector<Models::OpenAPIToolMeta> & openApiTools) { DARABONBA_PTR_SET_VALUE(openApiTools_, openApiTools) };
    inline ToolsetStatusOutputs& setOpenApiTools(vector<Models::OpenAPIToolMeta> && openApiTools) { DARABONBA_PTR_SET_RVALUE(openApiTools_, openApiTools) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<Models::MCPToolMeta> & tools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Models::MCPToolMeta>) };
    inline vector<Models::MCPToolMeta> tools() { DARABONBA_PTR_GET(tools_, vector<Models::MCPToolMeta>) };
    inline ToolsetStatusOutputs& setTools(const vector<Models::MCPToolMeta> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline ToolsetStatusOutputs& setTools(vector<Models::MCPToolMeta> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    // urls Field Functions 
    bool hasUrls() const { return this->urls_ != nullptr;};
    void deleteUrls() { this->urls_ = nullptr;};
    inline const Models::ToolsetStatusOutputsUrls & urls() const { DARABONBA_PTR_GET_CONST(urls_, Models::ToolsetStatusOutputsUrls) };
    inline Models::ToolsetStatusOutputsUrls urls() { DARABONBA_PTR_GET(urls_, Models::ToolsetStatusOutputsUrls) };
    inline ToolsetStatusOutputs& setUrls(const Models::ToolsetStatusOutputsUrls & urls) { DARABONBA_PTR_SET_VALUE(urls_, urls) };
    inline ToolsetStatusOutputs& setUrls(Models::ToolsetStatusOutputsUrls && urls) { DARABONBA_PTR_SET_RVALUE(urls_, urls) };


  protected:
    std::shared_ptr<string> functionArn_ = nullptr;
    std::shared_ptr<Models::ToolsetStatusOutputsMcpServerConfig> mcpServerConfig_ = nullptr;
    std::shared_ptr<vector<Models::OpenAPIToolMeta>> openApiTools_ = nullptr;
    std::shared_ptr<vector<Models::MCPToolMeta>> tools_ = nullptr;
    std::shared_ptr<Models::ToolsetStatusOutputsUrls> urls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif

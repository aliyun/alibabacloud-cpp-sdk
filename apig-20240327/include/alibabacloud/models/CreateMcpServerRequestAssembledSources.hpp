// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCPSERVERREQUESTASSEMBLEDSOURCES_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCPSERVERREQUESTASSEMBLEDSOURCES_HPP_
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
  class CreateMcpServerRequestAssembledSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcpServerRequestAssembledSources& obj) { 
      DARABONBA_PTR_TO_JSON(mcpServerId, mcpServerId_);
      DARABONBA_PTR_TO_JSON(mcpServerName, mcpServerName_);
      DARABONBA_PTR_TO_JSON(tools, tools_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcpServerRequestAssembledSources& obj) { 
      DARABONBA_PTR_FROM_JSON(mcpServerId, mcpServerId_);
      DARABONBA_PTR_FROM_JSON(mcpServerName, mcpServerName_);
      DARABONBA_PTR_FROM_JSON(tools, tools_);
    };
    CreateMcpServerRequestAssembledSources() = default ;
    CreateMcpServerRequestAssembledSources(const CreateMcpServerRequestAssembledSources &) = default ;
    CreateMcpServerRequestAssembledSources(CreateMcpServerRequestAssembledSources &&) = default ;
    CreateMcpServerRequestAssembledSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcpServerRequestAssembledSources() = default ;
    CreateMcpServerRequestAssembledSources& operator=(const CreateMcpServerRequestAssembledSources &) = default ;
    CreateMcpServerRequestAssembledSources& operator=(CreateMcpServerRequestAssembledSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mcpServerId_ != nullptr
        && this->mcpServerName_ != nullptr && this->tools_ != nullptr; };
    // mcpServerId Field Functions 
    bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
    void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
    inline string mcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
    inline CreateMcpServerRequestAssembledSources& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


    // mcpServerName Field Functions 
    bool hasMcpServerName() const { return this->mcpServerName_ != nullptr;};
    void deleteMcpServerName() { this->mcpServerName_ = nullptr;};
    inline string mcpServerName() const { DARABONBA_PTR_GET_DEFAULT(mcpServerName_, "") };
    inline CreateMcpServerRequestAssembledSources& setMcpServerName(string mcpServerName) { DARABONBA_PTR_SET_VALUE(mcpServerName_, mcpServerName) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<string> & tools() const { DARABONBA_PTR_GET_CONST(tools_, vector<string>) };
    inline vector<string> tools() { DARABONBA_PTR_GET(tools_, vector<string>) };
    inline CreateMcpServerRequestAssembledSources& setTools(const vector<string> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline CreateMcpServerRequestAssembledSources& setTools(vector<string> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


  protected:
    // MCP Server ID
    std::shared_ptr<string> mcpServerId_ = nullptr;
    std::shared_ptr<string> mcpServerName_ = nullptr;
    std::shared_ptr<vector<string>> tools_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

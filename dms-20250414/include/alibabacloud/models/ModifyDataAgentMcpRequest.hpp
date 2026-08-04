// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATAAGENTMCPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATAAGENTMCPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ModifyDataAgentMcpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDataAgentMcpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(McpServerId, mcpServerId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NeedUidInHeader, needUidInHeader_);
      DARABONBA_PTR_TO_JSON(TransportType, transportType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDataAgentMcpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(McpServerId, mcpServerId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NeedUidInHeader, needUidInHeader_);
      DARABONBA_PTR_FROM_JSON(TransportType, transportType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ModifyDataAgentMcpRequest() = default ;
    ModifyDataAgentMcpRequest(const ModifyDataAgentMcpRequest &) = default ;
    ModifyDataAgentMcpRequest(ModifyDataAgentMcpRequest &&) = default ;
    ModifyDataAgentMcpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDataAgentMcpRequest() = default ;
    ModifyDataAgentMcpRequest& operator=(const ModifyDataAgentMcpRequest &) = default ;
    ModifyDataAgentMcpRequest& operator=(ModifyDataAgentMcpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->enable_ == nullptr && this->endpoint_ == nullptr && this->headers_ == nullptr && this->mcpServerId_ == nullptr && this->name_ == nullptr
        && this->needUidInHeader_ == nullptr && this->transportType_ == nullptr && this->workspaceId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyDataAgentMcpRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ModifyDataAgentMcpRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline ModifyDataAgentMcpRequest& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline string getHeaders() const { DARABONBA_PTR_GET_DEFAULT(headers_, "") };
    inline ModifyDataAgentMcpRequest& setHeaders(string headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };


    // mcpServerId Field Functions 
    bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
    void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
    inline string getMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
    inline ModifyDataAgentMcpRequest& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyDataAgentMcpRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // needUidInHeader Field Functions 
    bool hasNeedUidInHeader() const { return this->needUidInHeader_ != nullptr;};
    void deleteNeedUidInHeader() { this->needUidInHeader_ = nullptr;};
    inline bool getNeedUidInHeader() const { DARABONBA_PTR_GET_DEFAULT(needUidInHeader_, false) };
    inline ModifyDataAgentMcpRequest& setNeedUidInHeader(bool needUidInHeader) { DARABONBA_PTR_SET_VALUE(needUidInHeader_, needUidInHeader) };


    // transportType Field Functions 
    bool hasTransportType() const { return this->transportType_ != nullptr;};
    void deleteTransportType() { this->transportType_ = nullptr;};
    inline string getTransportType() const { DARABONBA_PTR_GET_DEFAULT(transportType_, "") };
    inline ModifyDataAgentMcpRequest& setTransportType(string transportType) { DARABONBA_PTR_SET_VALUE(transportType_, transportType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ModifyDataAgentMcpRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The brief description of the artifact. This parameter can be empty.
    shared_ptr<string> description_ {};
    // Specifies whether the MCP server is enabled.
    shared_ptr<bool> enable_ {};
    // The endpoint of the MCP instance.
    shared_ptr<string> endpoint_ {};
    // The request header settings.
    shared_ptr<string> headers_ {};
    // The ID of the MCP server.
    // 
    // This parameter is required.
    shared_ptr<string> mcpServerId_ {};
    // The MCP name.
    shared_ptr<string> name_ {};
    // Specifies whether to include the Alibaba Cloud UID in the request header.
    shared_ptr<bool> needUidInHeader_ {};
    // The transport channel type. Valid values: streamablehttp, sse.
    shared_ptr<string> transportType_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif

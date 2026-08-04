// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATAAGENTMCPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATAAGENTMCPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DeleteDataAgentMcpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataAgentMcpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(McpServerIds, mcpServerIds_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataAgentMcpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(McpServerIds, mcpServerIds_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteDataAgentMcpRequest() = default ;
    DeleteDataAgentMcpRequest(const DeleteDataAgentMcpRequest &) = default ;
    DeleteDataAgentMcpRequest(DeleteDataAgentMcpRequest &&) = default ;
    DeleteDataAgentMcpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataAgentMcpRequest() = default ;
    DeleteDataAgentMcpRequest& operator=(const DeleteDataAgentMcpRequest &) = default ;
    DeleteDataAgentMcpRequest& operator=(DeleteDataAgentMcpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mcpServerIds_ == nullptr
        && this->workspaceId_ == nullptr; };
    // mcpServerIds Field Functions 
    bool hasMcpServerIds() const { return this->mcpServerIds_ != nullptr;};
    void deleteMcpServerIds() { this->mcpServerIds_ = nullptr;};
    inline const vector<string> & getMcpServerIds() const { DARABONBA_PTR_GET_CONST(mcpServerIds_, vector<string>) };
    inline vector<string> getMcpServerIds() { DARABONBA_PTR_GET(mcpServerIds_, vector<string>) };
    inline DeleteDataAgentMcpRequest& setMcpServerIds(const vector<string> & mcpServerIds) { DARABONBA_PTR_SET_VALUE(mcpServerIds_, mcpServerIds) };
    inline DeleteDataAgentMcpRequest& setMcpServerIds(vector<string> && mcpServerIds) { DARABONBA_PTR_SET_RVALUE(mcpServerIds_, mcpServerIds) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteDataAgentMcpRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The list of MCP Server IDs to delete.
    shared_ptr<vector<string>> mcpServerIds_ {};
    // The ID of the Data Agent workspace.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif

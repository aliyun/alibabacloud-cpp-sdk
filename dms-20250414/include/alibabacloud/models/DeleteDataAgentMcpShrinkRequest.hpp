// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATAAGENTMCPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATAAGENTMCPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DeleteDataAgentMcpShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataAgentMcpShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(McpServerIds, mcpServerIdsShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataAgentMcpShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(McpServerIds, mcpServerIdsShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteDataAgentMcpShrinkRequest() = default ;
    DeleteDataAgentMcpShrinkRequest(const DeleteDataAgentMcpShrinkRequest &) = default ;
    DeleteDataAgentMcpShrinkRequest(DeleteDataAgentMcpShrinkRequest &&) = default ;
    DeleteDataAgentMcpShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataAgentMcpShrinkRequest() = default ;
    DeleteDataAgentMcpShrinkRequest& operator=(const DeleteDataAgentMcpShrinkRequest &) = default ;
    DeleteDataAgentMcpShrinkRequest& operator=(DeleteDataAgentMcpShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mcpServerIdsShrink_ == nullptr
        && this->workspaceId_ == nullptr; };
    // mcpServerIdsShrink Field Functions 
    bool hasMcpServerIdsShrink() const { return this->mcpServerIdsShrink_ != nullptr;};
    void deleteMcpServerIdsShrink() { this->mcpServerIdsShrink_ = nullptr;};
    inline string getMcpServerIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(mcpServerIdsShrink_, "") };
    inline DeleteDataAgentMcpShrinkRequest& setMcpServerIdsShrink(string mcpServerIdsShrink) { DARABONBA_PTR_SET_VALUE(mcpServerIdsShrink_, mcpServerIdsShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteDataAgentMcpShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The list of MCP Server IDs to delete.
    shared_ptr<string> mcpServerIdsShrink_ {};
    // The ID of the Data Agent workspace.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif

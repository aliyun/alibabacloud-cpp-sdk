// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITWORKSPACESYSTEMMCPSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITWORKSPACESYSTEMMCPSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class InitWorkspaceSystemMcpServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitWorkspaceSystemMcpServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, InitWorkspaceSystemMcpServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    InitWorkspaceSystemMcpServerRequest() = default ;
    InitWorkspaceSystemMcpServerRequest(const InitWorkspaceSystemMcpServerRequest &) = default ;
    InitWorkspaceSystemMcpServerRequest(InitWorkspaceSystemMcpServerRequest &&) = default ;
    InitWorkspaceSystemMcpServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitWorkspaceSystemMcpServerRequest() = default ;
    InitWorkspaceSystemMcpServerRequest& operator=(const InitWorkspaceSystemMcpServerRequest &) = default ;
    InitWorkspaceSystemMcpServerRequest& operator=(InitWorkspaceSystemMcpServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workspaceId_ == nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline InitWorkspaceSystemMcpServerRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The ID of the Data Agent workspace for which to initialize system MCP services. The caller must have at least MEMBER permissions on the workspace.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif

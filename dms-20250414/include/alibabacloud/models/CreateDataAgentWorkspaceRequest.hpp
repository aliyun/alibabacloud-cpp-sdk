// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAAGENTWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAAGENTWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateDataAgentWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataAgentWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(WorkspaceDesc, workspaceDesc_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataAgentWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(WorkspaceDesc, workspaceDesc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    CreateDataAgentWorkspaceRequest() = default ;
    CreateDataAgentWorkspaceRequest(const CreateDataAgentWorkspaceRequest &) = default ;
    CreateDataAgentWorkspaceRequest(CreateDataAgentWorkspaceRequest &&) = default ;
    CreateDataAgentWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataAgentWorkspaceRequest() = default ;
    CreateDataAgentWorkspaceRequest& operator=(const CreateDataAgentWorkspaceRequest &) = default ;
    CreateDataAgentWorkspaceRequest& operator=(CreateDataAgentWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DMSUnit_ == nullptr
        && this->workspaceDesc_ == nullptr && this->workspaceName_ == nullptr; };
    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline CreateDataAgentWorkspaceRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // workspaceDesc Field Functions 
    bool hasWorkspaceDesc() const { return this->workspaceDesc_ != nullptr;};
    void deleteWorkspaceDesc() { this->workspaceDesc_ = nullptr;};
    inline string getWorkspaceDesc() const { DARABONBA_PTR_GET_DEFAULT(workspaceDesc_, "") };
    inline CreateDataAgentWorkspaceRequest& setWorkspaceDesc(string workspaceDesc) { DARABONBA_PTR_SET_VALUE(workspaceDesc_, workspaceDesc) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline CreateDataAgentWorkspaceRequest& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    shared_ptr<string> DMSUnit_ {};
    shared_ptr<string> workspaceDesc_ {};
    shared_ptr<string> workspaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif

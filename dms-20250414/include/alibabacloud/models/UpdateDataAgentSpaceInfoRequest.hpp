// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAAGENTSPACEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAAGENTSPACEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class UpdateDataAgentSpaceInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataAgentSpaceInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(WorkspaceDesc, workspaceDesc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataAgentSpaceInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(WorkspaceDesc, workspaceDesc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    UpdateDataAgentSpaceInfoRequest() = default ;
    UpdateDataAgentSpaceInfoRequest(const UpdateDataAgentSpaceInfoRequest &) = default ;
    UpdateDataAgentSpaceInfoRequest(UpdateDataAgentSpaceInfoRequest &&) = default ;
    UpdateDataAgentSpaceInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataAgentSpaceInfoRequest() = default ;
    UpdateDataAgentSpaceInfoRequest& operator=(const UpdateDataAgentSpaceInfoRequest &) = default ;
    UpdateDataAgentSpaceInfoRequest& operator=(UpdateDataAgentSpaceInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DMSUnit_ == nullptr
        && this->workspaceDesc_ == nullptr && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr; };
    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline UpdateDataAgentSpaceInfoRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // workspaceDesc Field Functions 
    bool hasWorkspaceDesc() const { return this->workspaceDesc_ != nullptr;};
    void deleteWorkspaceDesc() { this->workspaceDesc_ = nullptr;};
    inline string getWorkspaceDesc() const { DARABONBA_PTR_GET_DEFAULT(workspaceDesc_, "") };
    inline UpdateDataAgentSpaceInfoRequest& setWorkspaceDesc(string workspaceDesc) { DARABONBA_PTR_SET_VALUE(workspaceDesc_, workspaceDesc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateDataAgentSpaceInfoRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline UpdateDataAgentSpaceInfoRequest& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    shared_ptr<string> DMSUnit_ {};
    shared_ptr<string> workspaceDesc_ {};
    shared_ptr<string> workspaceId_ {};
    shared_ptr<string> workspaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif

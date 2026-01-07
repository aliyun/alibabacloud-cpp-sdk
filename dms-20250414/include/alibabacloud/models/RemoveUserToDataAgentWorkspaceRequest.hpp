// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERTODATAAGENTWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERTODATAAGENTWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class RemoveUserToDataAgentWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUserToDataAgentWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUserToDataAgentWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RemoveUserToDataAgentWorkspaceRequest() = default ;
    RemoveUserToDataAgentWorkspaceRequest(const RemoveUserToDataAgentWorkspaceRequest &) = default ;
    RemoveUserToDataAgentWorkspaceRequest(RemoveUserToDataAgentWorkspaceRequest &&) = default ;
    RemoveUserToDataAgentWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUserToDataAgentWorkspaceRequest() = default ;
    RemoveUserToDataAgentWorkspaceRequest& operator=(const RemoveUserToDataAgentWorkspaceRequest &) = default ;
    RemoveUserToDataAgentWorkspaceRequest& operator=(RemoveUserToDataAgentWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DMSUnit_ == nullptr
        && this->memberId_ == nullptr && this->workspaceId_ == nullptr; };
    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline RemoveUserToDataAgentWorkspaceRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline RemoveUserToDataAgentWorkspaceRequest& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RemoveUserToDataAgentWorkspaceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> DMSUnit_ {};
    shared_ptr<string> memberId_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif

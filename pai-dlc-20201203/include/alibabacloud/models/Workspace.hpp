// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WORKSPACE_HPP_
#define ALIBABACLOUD_MODELS_WORKSPACE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Member.hpp>
#include <alibabacloud/models/Quota.hpp>
#include <alibabacloud/models/Resources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class Workspace : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Workspace& obj) { 
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(Quotas, quotas_);
      DARABONBA_PTR_TO_JSON(TotalResources, totalResources_);
      DARABONBA_PTR_TO_JSON(WorkspaceAdmins, workspaceAdmins_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, Workspace& obj) { 
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(Quotas, quotas_);
      DARABONBA_PTR_FROM_JSON(TotalResources, totalResources_);
      DARABONBA_PTR_FROM_JSON(WorkspaceAdmins, workspaceAdmins_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    Workspace() = default ;
    Workspace(const Workspace &) = default ;
    Workspace(Workspace &&) = default ;
    Workspace(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Workspace() = default ;
    Workspace& operator=(const Workspace &) = default ;
    Workspace& operator=(Workspace &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creator_ != nullptr
        && this->gmtCreateTime_ != nullptr && this->gmtModifyTime_ != nullptr && this->members_ != nullptr && this->quotas_ != nullptr && this->totalResources_ != nullptr
        && this->workspaceAdmins_ != nullptr && this->workspaceId_ != nullptr && this->workspaceName_ != nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline Workspace& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline Workspace& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifyTime Field Functions 
    bool hasGmtModifyTime() const { return this->gmtModifyTime_ != nullptr;};
    void deleteGmtModifyTime() { this->gmtModifyTime_ = nullptr;};
    inline string gmtModifyTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifyTime_, "") };
    inline Workspace& setGmtModifyTime(string gmtModifyTime) { DARABONBA_PTR_SET_VALUE(gmtModifyTime_, gmtModifyTime) };


    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<Member> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<Member>) };
    inline vector<Member> members() { DARABONBA_PTR_GET(members_, vector<Member>) };
    inline Workspace& setMembers(const vector<Member> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline Workspace& setMembers(vector<Member> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const vector<Quota> & quotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<Quota>) };
    inline vector<Quota> quotas() { DARABONBA_PTR_GET(quotas_, vector<Quota>) };
    inline Workspace& setQuotas(const vector<Quota> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline Workspace& setQuotas(vector<Quota> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


    // totalResources Field Functions 
    bool hasTotalResources() const { return this->totalResources_ != nullptr;};
    void deleteTotalResources() { this->totalResources_ = nullptr;};
    inline const Resources & totalResources() const { DARABONBA_PTR_GET_CONST(totalResources_, Resources) };
    inline Resources totalResources() { DARABONBA_PTR_GET(totalResources_, Resources) };
    inline Workspace& setTotalResources(const Resources & totalResources) { DARABONBA_PTR_SET_VALUE(totalResources_, totalResources) };
    inline Workspace& setTotalResources(Resources && totalResources) { DARABONBA_PTR_SET_RVALUE(totalResources_, totalResources) };


    // workspaceAdmins Field Functions 
    bool hasWorkspaceAdmins() const { return this->workspaceAdmins_ != nullptr;};
    void deleteWorkspaceAdmins() { this->workspaceAdmins_ = nullptr;};
    inline const vector<Member> & workspaceAdmins() const { DARABONBA_PTR_GET_CONST(workspaceAdmins_, vector<Member>) };
    inline vector<Member> workspaceAdmins() { DARABONBA_PTR_GET(workspaceAdmins_, vector<Member>) };
    inline Workspace& setWorkspaceAdmins(const vector<Member> & workspaceAdmins) { DARABONBA_PTR_SET_VALUE(workspaceAdmins_, workspaceAdmins) };
    inline Workspace& setWorkspaceAdmins(vector<Member> && workspaceAdmins) { DARABONBA_PTR_SET_RVALUE(workspaceAdmins_, workspaceAdmins) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline Workspace& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline Workspace& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifyTime_ = nullptr;
    std::shared_ptr<vector<Member>> members_ = nullptr;
    std::shared_ptr<vector<Quota>> quotas_ = nullptr;
    std::shared_ptr<Resources> totalResources_ = nullptr;
    std::shared_ptr<vector<Member>> workspaceAdmins_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif

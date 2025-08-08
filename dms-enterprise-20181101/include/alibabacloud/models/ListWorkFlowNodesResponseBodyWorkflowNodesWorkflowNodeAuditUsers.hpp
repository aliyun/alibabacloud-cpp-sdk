// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWNODESRESPONSEBODYWORKFLOWNODESWORKFLOWNODEAUDITUSERS_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWNODESRESPONSEBODYWORKFLOWNODESWORKFLOWNODEAUDITUSERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsersAuditUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers& obj) { 
      DARABONBA_PTR_TO_JSON(AuditUser, auditUser_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditUser, auditUser_);
    };
    ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers() = default ;
    ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers(const ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers &) = default ;
    ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers(ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers &&) = default ;
    ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers() = default ;
    ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers& operator=(const ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers &) = default ;
    ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers& operator=(ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->auditUser_ != nullptr; };
    // auditUser Field Functions 
    bool hasAuditUser() const { return this->auditUser_ != nullptr;};
    void deleteAuditUser() { this->auditUser_ = nullptr;};
    inline const vector<Models::ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsersAuditUser> & auditUser() const { DARABONBA_PTR_GET_CONST(auditUser_, vector<Models::ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsersAuditUser>) };
    inline vector<Models::ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsersAuditUser> auditUser() { DARABONBA_PTR_GET(auditUser_, vector<Models::ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsersAuditUser>) };
    inline ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers& setAuditUser(const vector<Models::ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsersAuditUser> & auditUser) { DARABONBA_PTR_SET_VALUE(auditUser_, auditUser) };
    inline ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers& setAuditUser(vector<Models::ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsersAuditUser> && auditUser) { DARABONBA_PTR_SET_RVALUE(auditUser_, auditUser) };


  protected:
    std::shared_ptr<vector<Models::ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsersAuditUser>> auditUser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

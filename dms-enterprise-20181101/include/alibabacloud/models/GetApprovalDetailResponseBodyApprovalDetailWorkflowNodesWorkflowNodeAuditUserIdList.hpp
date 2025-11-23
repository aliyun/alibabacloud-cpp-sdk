// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALDETAILRESPONSEBODYAPPROVALDETAILWORKFLOWNODESWORKFLOWNODEAUDITUSERIDLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALDETAILRESPONSEBODYAPPROVALDETAILWORKFLOWNODESWORKFLOWNODEAUDITUSERIDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList& obj) { 
      DARABONBA_PTR_TO_JSON(AuditUserIds, auditUserIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditUserIds, auditUserIds_);
    };
    GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList() = default ;
    GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList(const GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList &) = default ;
    GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList(GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList &&) = default ;
    GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList() = default ;
    GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList& operator=(const GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList &) = default ;
    GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList& operator=(GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditUserIds_ == nullptr; };
    // auditUserIds Field Functions 
    bool hasAuditUserIds() const { return this->auditUserIds_ != nullptr;};
    void deleteAuditUserIds() { this->auditUserIds_ = nullptr;};
    inline const vector<string> & auditUserIds() const { DARABONBA_PTR_GET_CONST(auditUserIds_, vector<string>) };
    inline vector<string> auditUserIds() { DARABONBA_PTR_GET(auditUserIds_, vector<string>) };
    inline GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList& setAuditUserIds(const vector<string> & auditUserIds) { DARABONBA_PTR_SET_VALUE(auditUserIds_, auditUserIds) };
    inline GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList& setAuditUserIds(vector<string> && auditUserIds) { DARABONBA_PTR_SET_RVALUE(auditUserIds_, auditUserIds) };


  protected:
    std::shared_ptr<vector<string>> auditUserIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

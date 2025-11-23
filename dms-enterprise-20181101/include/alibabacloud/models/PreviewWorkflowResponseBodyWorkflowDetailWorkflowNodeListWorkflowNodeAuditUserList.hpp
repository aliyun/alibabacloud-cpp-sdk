// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWWORKFLOWRESPONSEBODYWORKFLOWDETAILWORKFLOWNODELISTWORKFLOWNODEAUDITUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWWORKFLOWRESPONSEBODYWORKFLOWDETAILWORKFLOWNODELISTWORKFLOWNODEAUDITUSERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList& obj) { 
      DARABONBA_PTR_TO_JSON(AuditUser, auditUser_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditUser, auditUser_);
    };
    PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList() = default ;
    PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList(const PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList &) = default ;
    PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList(PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList &&) = default ;
    PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList() = default ;
    PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList& operator=(const PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList &) = default ;
    PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList& operator=(PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditUser_ == nullptr; };
    // auditUser Field Functions 
    bool hasAuditUser() const { return this->auditUser_ != nullptr;};
    void deleteAuditUser() { this->auditUser_ = nullptr;};
    inline const vector<Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser> & auditUser() const { DARABONBA_PTR_GET_CONST(auditUser_, vector<Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser>) };
    inline vector<Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser> auditUser() { DARABONBA_PTR_GET(auditUser_, vector<Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser>) };
    inline PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList& setAuditUser(const vector<Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser> & auditUser) { DARABONBA_PTR_SET_VALUE(auditUser_, auditUser) };
    inline PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserList& setAuditUser(vector<Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser> && auditUser) { DARABONBA_PTR_SET_RVALUE(auditUser_, auditUser) };


  protected:
    std::shared_ptr<vector<Models::PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser>> auditUser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

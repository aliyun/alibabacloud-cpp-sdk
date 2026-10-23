// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMEWORKITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESUMEWORKITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ResumeWorkItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumeWorkItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(workItemId, workItemId_);
    };
    friend void from_json(const Darabonba::Json& j, ResumeWorkItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(workItemId, workItemId_);
    };
    ResumeWorkItemRequest() = default ;
    ResumeWorkItemRequest(const ResumeWorkItemRequest &) = default ;
    ResumeWorkItemRequest(ResumeWorkItemRequest &&) = default ;
    ResumeWorkItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumeWorkItemRequest() = default ;
    ResumeWorkItemRequest& operator=(const ResumeWorkItemRequest &) = default ;
    ResumeWorkItemRequest& operator=(ResumeWorkItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->tenantId_ == nullptr && this->workItemId_ == nullptr; };
    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline ResumeWorkItemRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ResumeWorkItemRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workItemId Field Functions 
    bool hasWorkItemId() const { return this->workItemId_ != nullptr;};
    void deleteWorkItemId() { this->workItemId_ = nullptr;};
    inline string getWorkItemId() const { DARABONBA_PTR_GET_DEFAULT(workItemId_, "") };
    inline ResumeWorkItemRequest& setWorkItemId(string workItemId) { DARABONBA_PTR_SET_VALUE(workItemId_, workItemId) };


  protected:
    // The collaboration space ID.
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // The tenant ID. This is a common parameter. If not specified, the caller\\"s default tenant is used.
    shared_ptr<string> tenantId_ {};
    // The work item ID.
    // 
    // This parameter is required.
    shared_ptr<string> workItemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif

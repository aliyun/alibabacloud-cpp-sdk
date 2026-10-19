// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMATTACHMENTACCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMATTACHMENTACCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetWorkItemAttachmentAccessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkItemAttachmentAccessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(attachmentId, attachmentId_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(workItemId, workItemId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkItemAttachmentAccessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(attachmentId, attachmentId_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(workItemId, workItemId_);
    };
    GetWorkItemAttachmentAccessRequest() = default ;
    GetWorkItemAttachmentAccessRequest(const GetWorkItemAttachmentAccessRequest &) = default ;
    GetWorkItemAttachmentAccessRequest(GetWorkItemAttachmentAccessRequest &&) = default ;
    GetWorkItemAttachmentAccessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkItemAttachmentAccessRequest() = default ;
    GetWorkItemAttachmentAccessRequest& operator=(const GetWorkItemAttachmentAccessRequest &) = default ;
    GetWorkItemAttachmentAccessRequest& operator=(GetWorkItemAttachmentAccessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachmentId_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->tenantId_ == nullptr && this->workItemId_ == nullptr; };
    // attachmentId Field Functions 
    bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
    void deleteAttachmentId() { this->attachmentId_ = nullptr;};
    inline string getAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
    inline GetWorkItemAttachmentAccessRequest& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline GetWorkItemAttachmentAccessRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetWorkItemAttachmentAccessRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workItemId Field Functions 
    bool hasWorkItemId() const { return this->workItemId_ != nullptr;};
    void deleteWorkItemId() { this->workItemId_ = nullptr;};
    inline string getWorkItemId() const { DARABONBA_PTR_GET_DEFAULT(workItemId_, "") };
    inline GetWorkItemAttachmentAccessRequest& setWorkItemId(string workItemId) { DARABONBA_PTR_SET_VALUE(workItemId_, workItemId) };


  protected:
    // 附件 ID
    // 
    // This parameter is required.
    shared_ptr<string> attachmentId_ {};
    // 协作空间 ID
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // 租户ID，公共参数；缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
    // 工作项 ID
    // 
    // This parameter is required.
    shared_ptr<string> workItemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif

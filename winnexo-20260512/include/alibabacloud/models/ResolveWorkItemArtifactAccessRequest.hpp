// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOLVEWORKITEMARTIFACTACCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESOLVEWORKITEMARTIFACTACCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ResolveWorkItemArtifactAccessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResolveWorkItemArtifactAccessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(artifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(workItemId, workItemId_);
    };
    friend void from_json(const Darabonba::Json& j, ResolveWorkItemArtifactAccessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(artifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(workItemId, workItemId_);
    };
    ResolveWorkItemArtifactAccessRequest() = default ;
    ResolveWorkItemArtifactAccessRequest(const ResolveWorkItemArtifactAccessRequest &) = default ;
    ResolveWorkItemArtifactAccessRequest(ResolveWorkItemArtifactAccessRequest &&) = default ;
    ResolveWorkItemArtifactAccessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResolveWorkItemArtifactAccessRequest() = default ;
    ResolveWorkItemArtifactAccessRequest& operator=(const ResolveWorkItemArtifactAccessRequest &) = default ;
    ResolveWorkItemArtifactAccessRequest& operator=(ResolveWorkItemArtifactAccessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactId_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->tenantId_ == nullptr && this->workItemId_ == nullptr; };
    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline ResolveWorkItemArtifactAccessRequest& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline ResolveWorkItemArtifactAccessRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ResolveWorkItemArtifactAccessRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workItemId Field Functions 
    bool hasWorkItemId() const { return this->workItemId_ != nullptr;};
    void deleteWorkItemId() { this->workItemId_ = nullptr;};
    inline string getWorkItemId() const { DARABONBA_PTR_GET_DEFAULT(workItemId_, "") };
    inline ResolveWorkItemArtifactAccessRequest& setWorkItemId(string workItemId) { DARABONBA_PTR_SET_VALUE(workItemId_, workItemId) };


  protected:
    // The ID of the artifact.
    // 
    // This parameter is required.
    shared_ptr<string> artifactId_ {};
    // The ID of the collaboration workspace.
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The ID of the work item.
    // 
    // This parameter is required.
    shared_ptr<string> workItemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif

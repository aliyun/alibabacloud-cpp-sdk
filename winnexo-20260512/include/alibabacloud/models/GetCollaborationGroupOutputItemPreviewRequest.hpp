// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOLLABORATIONGROUPOUTPUTITEMPREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOLLABORATIONGROUPOUTPUTITEMPREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetCollaborationGroupOutputItemPreviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCollaborationGroupOutputItemPreviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(itemId, itemId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCollaborationGroupOutputItemPreviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(itemId, itemId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GetCollaborationGroupOutputItemPreviewRequest() = default ;
    GetCollaborationGroupOutputItemPreviewRequest(const GetCollaborationGroupOutputItemPreviewRequest &) = default ;
    GetCollaborationGroupOutputItemPreviewRequest(GetCollaborationGroupOutputItemPreviewRequest &&) = default ;
    GetCollaborationGroupOutputItemPreviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCollaborationGroupOutputItemPreviewRequest() = default ;
    GetCollaborationGroupOutputItemPreviewRequest& operator=(const GetCollaborationGroupOutputItemPreviewRequest &) = default ;
    GetCollaborationGroupOutputItemPreviewRequest& operator=(GetCollaborationGroupOutputItemPreviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->itemId_ == nullptr && this->tenantId_ == nullptr; };
    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline GetCollaborationGroupOutputItemPreviewRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline GetCollaborationGroupOutputItemPreviewRequest& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetCollaborationGroupOutputItemPreviewRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The collaboration space ID.
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // The output detail ID. This ID is obtained from the ref.id of a USER_OUTPUT_ITEM node or the space output list.
    // 
    // This parameter is required.
    shared_ptr<string> itemId_ {};
    // The tenant ID. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif

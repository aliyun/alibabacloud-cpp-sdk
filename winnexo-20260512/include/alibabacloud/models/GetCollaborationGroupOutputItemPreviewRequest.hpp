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
    // 协作空间ID，必填，长度1至64。调用者必须是该租户下该空间的有效成员。可从ListCollaborationGroups返回的items中获取。
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // 对话生成文件的产出明细ID。取GetNodeDetail返回的artifacts中ref.kind为USER_OUTPUT_ITEM的ref.id；不是artifactId。
    // 
    // This parameter is required.
    shared_ptr<string> itemId_ {};
    // 业务租户ID，可选。必须属于当前调用身份的可访问租户；无权访问时拒绝请求。未传时按现有鉴权规则解析租户，多租户用户无法唯一确定时需显式指定。
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif

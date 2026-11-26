// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEFEISHUDOCSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEFEISHUDOCSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateKnowledgeBaseFeishuDocShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseFeishuDocShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(docUrl, docUrl_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(notes, notes_);
      DARABONBA_PTR_TO_JSON(objectBindings, objectBindingsShrink_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(sourceTags, sourceTags_);
      DARABONBA_PTR_TO_JSON(syncConfig, syncConfigShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseFeishuDocShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(docUrl, docUrl_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(notes, notes_);
      DARABONBA_PTR_FROM_JSON(objectBindings, objectBindingsShrink_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(sourceTags, sourceTags_);
      DARABONBA_PTR_FROM_JSON(syncConfig, syncConfigShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CreateKnowledgeBaseFeishuDocShrinkRequest() = default ;
    CreateKnowledgeBaseFeishuDocShrinkRequest(const CreateKnowledgeBaseFeishuDocShrinkRequest &) = default ;
    CreateKnowledgeBaseFeishuDocShrinkRequest(CreateKnowledgeBaseFeishuDocShrinkRequest &&) = default ;
    CreateKnowledgeBaseFeishuDocShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseFeishuDocShrinkRequest() = default ;
    CreateKnowledgeBaseFeishuDocShrinkRequest& operator=(const CreateKnowledgeBaseFeishuDocShrinkRequest &) = default ;
    CreateKnowledgeBaseFeishuDocShrinkRequest& operator=(CreateKnowledgeBaseFeishuDocShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->description_ == nullptr && this->directoryId_ == nullptr && this->docUrl_ == nullptr && this->name_ == nullptr && this->notes_ == nullptr
        && this->objectBindingsShrink_ == nullptr && this->operatingObjectName_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->sourceTags_ == nullptr
        && this->syncConfigShrink_ == nullptr && this->tenantId_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline CreateKnowledgeBaseFeishuDocShrinkRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateKnowledgeBaseFeishuDocShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreateKnowledgeBaseFeishuDocShrinkRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // docUrl Field Functions 
    bool hasDocUrl() const { return this->docUrl_ != nullptr;};
    void deleteDocUrl() { this->docUrl_ = nullptr;};
    inline string getDocUrl() const { DARABONBA_PTR_GET_DEFAULT(docUrl_, "") };
    inline CreateKnowledgeBaseFeishuDocShrinkRequest& setDocUrl(string docUrl) { DARABONBA_PTR_SET_VALUE(docUrl_, docUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateKnowledgeBaseFeishuDocShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notes Field Functions 
    bool hasNotes() const { return this->notes_ != nullptr;};
    void deleteNotes() { this->notes_ = nullptr;};
    inline string getNotes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
    inline CreateKnowledgeBaseFeishuDocShrinkRequest& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


    // objectBindingsShrink Field Functions 
    bool hasObjectBindingsShrink() const { return this->objectBindingsShrink_ != nullptr;};
    void deleteObjectBindingsShrink() { this->objectBindingsShrink_ = nullptr;};
    inline string getObjectBindingsShrink() const { DARABONBA_PTR_GET_DEFAULT(objectBindingsShrink_, "") };
    inline CreateKnowledgeBaseFeishuDocShrinkRequest& setObjectBindingsShrink(string objectBindingsShrink) { DARABONBA_PTR_SET_VALUE(objectBindingsShrink_, objectBindingsShrink) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline CreateKnowledgeBaseFeishuDocShrinkRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline CreateKnowledgeBaseFeishuDocShrinkRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline CreateKnowledgeBaseFeishuDocShrinkRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // sourceTags Field Functions 
    bool hasSourceTags() const { return this->sourceTags_ != nullptr;};
    void deleteSourceTags() { this->sourceTags_ = nullptr;};
    inline string getSourceTags() const { DARABONBA_PTR_GET_DEFAULT(sourceTags_, "") };
    inline CreateKnowledgeBaseFeishuDocShrinkRequest& setSourceTags(string sourceTags) { DARABONBA_PTR_SET_VALUE(sourceTags_, sourceTags) };


    // syncConfigShrink Field Functions 
    bool hasSyncConfigShrink() const { return this->syncConfigShrink_ != nullptr;};
    void deleteSyncConfigShrink() { this->syncConfigShrink_ = nullptr;};
    inline string getSyncConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(syncConfigShrink_, "") };
    inline CreateKnowledgeBaseFeishuDocShrinkRequest& setSyncConfigShrink(string syncConfigShrink) { DARABONBA_PTR_SET_VALUE(syncConfigShrink_, syncConfigShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateKnowledgeBaseFeishuDocShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 平台应用 Token（控制台签发）。传入后将以 opsUserId 或 opsUserCode 指定的用户身份执行
    shared_ptr<string> appToken_ {};
    // The description of the alias.
    shared_ptr<string> description_ {};
    // The folder ID.
    // 
    // This parameter is required.
    shared_ptr<string> directoryId_ {};
    // The document URL.
    // 
    // This parameter is required.
    shared_ptr<string> docUrl_ {};
    // The mirror name.
    shared_ptr<string> name_ {};
    // The meeting notes content (optional). Used for auxiliary analysis.
    shared_ptr<string> notes_ {};
    // The object bindings.
    shared_ptr<string> objectBindingsShrink_ {};
    // The digital employee name (operating object name, optional).
    shared_ptr<string> operatingObjectName_ {};
    // 代理用户编码（租户内唯一），仅当应用凭证配置为 source_uid 时使用
    shared_ptr<string> opsUserCode_ {};
    // 代理用户ID（WINNEXO 平台用户ID），仅当应用凭证配置为 winnexo_uid 时使用
    shared_ptr<string> opsUserId_ {};
    // The resource tags (optional, a JSON string list such as ["tagA","tagB"]).
    shared_ptr<string> sourceTags_ {};
    // The synchronization settings.
    shared_ptr<string> syncConfigShrink_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif

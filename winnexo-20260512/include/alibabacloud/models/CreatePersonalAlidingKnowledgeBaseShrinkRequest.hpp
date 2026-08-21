// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERSONALALIDINGKNOWLEDGEBASESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERSONALALIDINGKNOWLEDGEBASESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreatePersonalAlidingKnowledgeBaseShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePersonalAlidingKnowledgeBaseShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(kbName, kbName_);
      DARABONBA_PTR_TO_JSON(kbUrl, kbUrl_);
      DARABONBA_PTR_TO_JSON(objectBindings, objectBindingsShrink_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(syncConfig, syncConfigShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePersonalAlidingKnowledgeBaseShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(kbName, kbName_);
      DARABONBA_PTR_FROM_JSON(kbUrl, kbUrl_);
      DARABONBA_PTR_FROM_JSON(objectBindings, objectBindingsShrink_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(syncConfig, syncConfigShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CreatePersonalAlidingKnowledgeBaseShrinkRequest() = default ;
    CreatePersonalAlidingKnowledgeBaseShrinkRequest(const CreatePersonalAlidingKnowledgeBaseShrinkRequest &) = default ;
    CreatePersonalAlidingKnowledgeBaseShrinkRequest(CreatePersonalAlidingKnowledgeBaseShrinkRequest &&) = default ;
    CreatePersonalAlidingKnowledgeBaseShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePersonalAlidingKnowledgeBaseShrinkRequest() = default ;
    CreatePersonalAlidingKnowledgeBaseShrinkRequest& operator=(const CreatePersonalAlidingKnowledgeBaseShrinkRequest &) = default ;
    CreatePersonalAlidingKnowledgeBaseShrinkRequest& operator=(CreatePersonalAlidingKnowledgeBaseShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->kbName_ == nullptr && this->kbUrl_ == nullptr && this->objectBindingsShrink_ == nullptr && this->operatingObjectName_ == nullptr && this->syncConfigShrink_ == nullptr
        && this->tenantId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreatePersonalAlidingKnowledgeBaseShrinkRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // kbName Field Functions 
    bool hasKbName() const { return this->kbName_ != nullptr;};
    void deleteKbName() { this->kbName_ = nullptr;};
    inline string getKbName() const { DARABONBA_PTR_GET_DEFAULT(kbName_, "") };
    inline CreatePersonalAlidingKnowledgeBaseShrinkRequest& setKbName(string kbName) { DARABONBA_PTR_SET_VALUE(kbName_, kbName) };


    // kbUrl Field Functions 
    bool hasKbUrl() const { return this->kbUrl_ != nullptr;};
    void deleteKbUrl() { this->kbUrl_ = nullptr;};
    inline string getKbUrl() const { DARABONBA_PTR_GET_DEFAULT(kbUrl_, "") };
    inline CreatePersonalAlidingKnowledgeBaseShrinkRequest& setKbUrl(string kbUrl) { DARABONBA_PTR_SET_VALUE(kbUrl_, kbUrl) };


    // objectBindingsShrink Field Functions 
    bool hasObjectBindingsShrink() const { return this->objectBindingsShrink_ != nullptr;};
    void deleteObjectBindingsShrink() { this->objectBindingsShrink_ = nullptr;};
    inline string getObjectBindingsShrink() const { DARABONBA_PTR_GET_DEFAULT(objectBindingsShrink_, "") };
    inline CreatePersonalAlidingKnowledgeBaseShrinkRequest& setObjectBindingsShrink(string objectBindingsShrink) { DARABONBA_PTR_SET_VALUE(objectBindingsShrink_, objectBindingsShrink) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline CreatePersonalAlidingKnowledgeBaseShrinkRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // syncConfigShrink Field Functions 
    bool hasSyncConfigShrink() const { return this->syncConfigShrink_ != nullptr;};
    void deleteSyncConfigShrink() { this->syncConfigShrink_ = nullptr;};
    inline string getSyncConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(syncConfigShrink_, "") };
    inline CreatePersonalAlidingKnowledgeBaseShrinkRequest& setSyncConfigShrink(string syncConfigShrink) { DARABONBA_PTR_SET_VALUE(syncConfigShrink_, syncConfigShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreatePersonalAlidingKnowledgeBaseShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // The display name of the knowledge base. If not provided, the name is populated from the root node name pulled from the remote source.
    shared_ptr<string> kbName_ {};
    // The publicly accessible URL of the AliDing knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> kbUrl_ {};
    // The object bindings.
    shared_ptr<string> objectBindingsShrink_ {};
    // The name of the digital employee (operating object name, optional).
    shared_ptr<string> operatingObjectName_ {};
    // The synchronization settings.
    shared_ptr<string> syncConfigShrink_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif

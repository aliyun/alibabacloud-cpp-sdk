// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateTicketShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTicketShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomFields, customFields_);
      DARABONBA_PTR_TO_JSON(Notify, notifyShrink_);
      DARABONBA_PTR_TO_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_TO_JSON(OpenTemplateBizId, openTemplateBizId_);
      DARABONBA_PTR_TO_JSON(ProcessorUserIds, processorUserIdsShrink_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(SceneContext, sceneContextShrink_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTicketShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomFields, customFields_);
      DARABONBA_PTR_FROM_JSON(Notify, notifyShrink_);
      DARABONBA_PTR_FROM_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_FROM_JSON(OpenTemplateBizId, openTemplateBizId_);
      DARABONBA_PTR_FROM_JSON(ProcessorUserIds, processorUserIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(SceneContext, sceneContextShrink_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateTicketShrinkRequest() = default ;
    CreateTicketShrinkRequest(const CreateTicketShrinkRequest &) = default ;
    CreateTicketShrinkRequest(CreateTicketShrinkRequest &&) = default ;
    CreateTicketShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTicketShrinkRequest() = default ;
    CreateTicketShrinkRequest& operator=(const CreateTicketShrinkRequest &) = default ;
    CreateTicketShrinkRequest& operator=(CreateTicketShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customFields_ == nullptr
        && this->notifyShrink_ == nullptr && this->openTeamId_ == nullptr && this->openTemplateBizId_ == nullptr && this->processorUserIdsShrink_ == nullptr && this->scene_ == nullptr
        && this->sceneContextShrink_ == nullptr && this->tenantContextShrink_ == nullptr && this->title_ == nullptr; };
    // customFields Field Functions 
    bool hasCustomFields() const { return this->customFields_ != nullptr;};
    void deleteCustomFields() { this->customFields_ = nullptr;};
    inline string getCustomFields() const { DARABONBA_PTR_GET_DEFAULT(customFields_, "") };
    inline CreateTicketShrinkRequest& setCustomFields(string customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };


    // notifyShrink Field Functions 
    bool hasNotifyShrink() const { return this->notifyShrink_ != nullptr;};
    void deleteNotifyShrink() { this->notifyShrink_ = nullptr;};
    inline string getNotifyShrink() const { DARABONBA_PTR_GET_DEFAULT(notifyShrink_, "") };
    inline CreateTicketShrinkRequest& setNotifyShrink(string notifyShrink) { DARABONBA_PTR_SET_VALUE(notifyShrink_, notifyShrink) };


    // openTeamId Field Functions 
    bool hasOpenTeamId() const { return this->openTeamId_ != nullptr;};
    void deleteOpenTeamId() { this->openTeamId_ = nullptr;};
    inline string getOpenTeamId() const { DARABONBA_PTR_GET_DEFAULT(openTeamId_, "") };
    inline CreateTicketShrinkRequest& setOpenTeamId(string openTeamId) { DARABONBA_PTR_SET_VALUE(openTeamId_, openTeamId) };


    // openTemplateBizId Field Functions 
    bool hasOpenTemplateBizId() const { return this->openTemplateBizId_ != nullptr;};
    void deleteOpenTemplateBizId() { this->openTemplateBizId_ = nullptr;};
    inline string getOpenTemplateBizId() const { DARABONBA_PTR_GET_DEFAULT(openTemplateBizId_, "") };
    inline CreateTicketShrinkRequest& setOpenTemplateBizId(string openTemplateBizId) { DARABONBA_PTR_SET_VALUE(openTemplateBizId_, openTemplateBizId) };


    // processorUserIdsShrink Field Functions 
    bool hasProcessorUserIdsShrink() const { return this->processorUserIdsShrink_ != nullptr;};
    void deleteProcessorUserIdsShrink() { this->processorUserIdsShrink_ = nullptr;};
    inline string getProcessorUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(processorUserIdsShrink_, "") };
    inline CreateTicketShrinkRequest& setProcessorUserIdsShrink(string processorUserIdsShrink) { DARABONBA_PTR_SET_VALUE(processorUserIdsShrink_, processorUserIdsShrink) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline CreateTicketShrinkRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sceneContextShrink Field Functions 
    bool hasSceneContextShrink() const { return this->sceneContextShrink_ != nullptr;};
    void deleteSceneContextShrink() { this->sceneContextShrink_ = nullptr;};
    inline string getSceneContextShrink() const { DARABONBA_PTR_GET_DEFAULT(sceneContextShrink_, "") };
    inline CreateTicketShrinkRequest& setSceneContextShrink(string sceneContextShrink) { DARABONBA_PTR_SET_VALUE(sceneContextShrink_, sceneContextShrink) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline CreateTicketShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateTicketShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> customFields_ {};
    shared_ptr<string> notifyShrink_ {};
    // This parameter is required.
    shared_ptr<string> openTeamId_ {};
    // This parameter is required.
    shared_ptr<string> openTemplateBizId_ {};
    // This parameter is required.
    shared_ptr<string> processorUserIdsShrink_ {};
    // This parameter is required.
    shared_ptr<string> scene_ {};
    shared_ptr<string> sceneContextShrink_ {};
    shared_ptr<string> tenantContextShrink_ {};
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

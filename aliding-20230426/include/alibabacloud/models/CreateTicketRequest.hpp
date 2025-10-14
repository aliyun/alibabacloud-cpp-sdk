// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTicketRequestNotify.hpp>
#include <vector>
#include <alibabacloud/models/CreateTicketRequestSceneContext.hpp>
#include <alibabacloud/models/CreateTicketRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomFields, customFields_);
      DARABONBA_PTR_TO_JSON(Notify, notify_);
      DARABONBA_PTR_TO_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_TO_JSON(OpenTemplateBizId, openTemplateBizId_);
      DARABONBA_PTR_TO_JSON(ProcessorUserIds, processorUserIds_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(SceneContext, sceneContext_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomFields, customFields_);
      DARABONBA_PTR_FROM_JSON(Notify, notify_);
      DARABONBA_PTR_FROM_JSON(OpenTeamId, openTeamId_);
      DARABONBA_PTR_FROM_JSON(OpenTemplateBizId, openTemplateBizId_);
      DARABONBA_PTR_FROM_JSON(ProcessorUserIds, processorUserIds_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(SceneContext, sceneContext_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateTicketRequest() = default ;
    CreateTicketRequest(const CreateTicketRequest &) = default ;
    CreateTicketRequest(CreateTicketRequest &&) = default ;
    CreateTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTicketRequest() = default ;
    CreateTicketRequest& operator=(const CreateTicketRequest &) = default ;
    CreateTicketRequest& operator=(CreateTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customFields_ == nullptr
        && return this->notify_ == nullptr && return this->openTeamId_ == nullptr && return this->openTemplateBizId_ == nullptr && return this->processorUserIds_ == nullptr && return this->scene_ == nullptr
        && return this->sceneContext_ == nullptr && return this->tenantContext_ == nullptr && return this->title_ == nullptr; };
    // customFields Field Functions 
    bool hasCustomFields() const { return this->customFields_ != nullptr;};
    void deleteCustomFields() { this->customFields_ = nullptr;};
    inline string customFields() const { DARABONBA_PTR_GET_DEFAULT(customFields_, "") };
    inline CreateTicketRequest& setCustomFields(string customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };


    // notify Field Functions 
    bool hasNotify() const { return this->notify_ != nullptr;};
    void deleteNotify() { this->notify_ = nullptr;};
    inline const CreateTicketRequestNotify & notify() const { DARABONBA_PTR_GET_CONST(notify_, CreateTicketRequestNotify) };
    inline CreateTicketRequestNotify notify() { DARABONBA_PTR_GET(notify_, CreateTicketRequestNotify) };
    inline CreateTicketRequest& setNotify(const CreateTicketRequestNotify & notify) { DARABONBA_PTR_SET_VALUE(notify_, notify) };
    inline CreateTicketRequest& setNotify(CreateTicketRequestNotify && notify) { DARABONBA_PTR_SET_RVALUE(notify_, notify) };


    // openTeamId Field Functions 
    bool hasOpenTeamId() const { return this->openTeamId_ != nullptr;};
    void deleteOpenTeamId() { this->openTeamId_ = nullptr;};
    inline string openTeamId() const { DARABONBA_PTR_GET_DEFAULT(openTeamId_, "") };
    inline CreateTicketRequest& setOpenTeamId(string openTeamId) { DARABONBA_PTR_SET_VALUE(openTeamId_, openTeamId) };


    // openTemplateBizId Field Functions 
    bool hasOpenTemplateBizId() const { return this->openTemplateBizId_ != nullptr;};
    void deleteOpenTemplateBizId() { this->openTemplateBizId_ = nullptr;};
    inline string openTemplateBizId() const { DARABONBA_PTR_GET_DEFAULT(openTemplateBizId_, "") };
    inline CreateTicketRequest& setOpenTemplateBizId(string openTemplateBizId) { DARABONBA_PTR_SET_VALUE(openTemplateBizId_, openTemplateBizId) };


    // processorUserIds Field Functions 
    bool hasProcessorUserIds() const { return this->processorUserIds_ != nullptr;};
    void deleteProcessorUserIds() { this->processorUserIds_ = nullptr;};
    inline const vector<string> & processorUserIds() const { DARABONBA_PTR_GET_CONST(processorUserIds_, vector<string>) };
    inline vector<string> processorUserIds() { DARABONBA_PTR_GET(processorUserIds_, vector<string>) };
    inline CreateTicketRequest& setProcessorUserIds(const vector<string> & processorUserIds) { DARABONBA_PTR_SET_VALUE(processorUserIds_, processorUserIds) };
    inline CreateTicketRequest& setProcessorUserIds(vector<string> && processorUserIds) { DARABONBA_PTR_SET_RVALUE(processorUserIds_, processorUserIds) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline CreateTicketRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sceneContext Field Functions 
    bool hasSceneContext() const { return this->sceneContext_ != nullptr;};
    void deleteSceneContext() { this->sceneContext_ = nullptr;};
    inline const CreateTicketRequestSceneContext & sceneContext() const { DARABONBA_PTR_GET_CONST(sceneContext_, CreateTicketRequestSceneContext) };
    inline CreateTicketRequestSceneContext sceneContext() { DARABONBA_PTR_GET(sceneContext_, CreateTicketRequestSceneContext) };
    inline CreateTicketRequest& setSceneContext(const CreateTicketRequestSceneContext & sceneContext) { DARABONBA_PTR_SET_VALUE(sceneContext_, sceneContext) };
    inline CreateTicketRequest& setSceneContext(CreateTicketRequestSceneContext && sceneContext) { DARABONBA_PTR_SET_RVALUE(sceneContext_, sceneContext) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CreateTicketRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CreateTicketRequestTenantContext) };
    inline CreateTicketRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, CreateTicketRequestTenantContext) };
    inline CreateTicketRequest& setTenantContext(const CreateTicketRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CreateTicketRequest& setTenantContext(CreateTicketRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateTicketRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> customFields_ = nullptr;
    std::shared_ptr<CreateTicketRequestNotify> notify_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openTeamId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openTemplateBizId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> processorUserIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<CreateTicketRequestSceneContext> sceneContext_ = nullptr;
    std::shared_ptr<CreateTicketRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

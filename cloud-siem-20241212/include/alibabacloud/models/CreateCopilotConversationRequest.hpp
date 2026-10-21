// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOPILOTCONVERSATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOPILOTCONVERSATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class CreateCopilotConversationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCopilotConversationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(PlanMode, planMode_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ThinkingMode, thinkingMode_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCopilotConversationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(PlanMode, planMode_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ThinkingMode, thinkingMode_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    CreateCopilotConversationRequest() = default ;
    CreateCopilotConversationRequest(const CreateCopilotConversationRequest &) = default ;
    CreateCopilotConversationRequest(CreateCopilotConversationRequest &&) = default ;
    CreateCopilotConversationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCopilotConversationRequest() = default ;
    CreateCopilotConversationRequest& operator=(const CreateCopilotConversationRequest &) = default ;
    CreateCopilotConversationRequest& operator=(CreateCopilotConversationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->model_ == nullptr && this->planMode_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr && this->thinkingMode_ == nullptr
        && this->title_ == nullptr && this->traceId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateCopilotConversationRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateCopilotConversationRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // planMode Field Functions 
    bool hasPlanMode() const { return this->planMode_ != nullptr;};
    void deletePlanMode() { this->planMode_ = nullptr;};
    inline string getPlanMode() const { DARABONBA_PTR_GET_DEFAULT(planMode_, "") };
    inline CreateCopilotConversationRequest& setPlanMode(string planMode) { DARABONBA_PTR_SET_VALUE(planMode_, planMode) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateCopilotConversationRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCopilotConversationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // thinkingMode Field Functions 
    bool hasThinkingMode() const { return this->thinkingMode_ != nullptr;};
    void deleteThinkingMode() { this->thinkingMode_ = nullptr;};
    inline string getThinkingMode() const { DARABONBA_PTR_GET_DEFAULT(thinkingMode_, "") };
    inline CreateCopilotConversationRequest& setThinkingMode(string thinkingMode) { DARABONBA_PTR_SET_VALUE(thinkingMode_, thinkingMode) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateCopilotConversationRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CreateCopilotConversationRequest& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The language of the response messages. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The model identifier.
    shared_ptr<string> model_ {};
    // The planning configuration.
    shared_ptr<string> planMode_ {};
    // The security project ID.
    shared_ptr<string> projectId_ {};
    // The region where the data management center for threat analysis is located. Select the management center region based on the region where your assets reside. Valid values:
    // - cn-hangzhou: Assets are located in the Chinese mainland.
    // - ap-southeast-1: Assets are located outside China.
    shared_ptr<string> regionId_ {};
    // The thinking mode configuration.
    shared_ptr<string> thinkingMode_ {};
    // The session title.
    shared_ptr<string> title_ {};
    // The trace ID of the created span object.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif

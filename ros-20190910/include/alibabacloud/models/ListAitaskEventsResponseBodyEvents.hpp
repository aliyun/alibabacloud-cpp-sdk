// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAITASKEVENTSRESPONSEBODYEVENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTAITASKEVENTSRESPONSEBODYEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListAITaskEventsResponseBodyEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAITaskEventsResponseBodyEvents& obj) { 
      DARABONBA_PTR_TO_JSON(AgentType, agentType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EstimatedProcessingTime, estimatedProcessingTime_);
      DARABONBA_PTR_TO_JSON(EventData, eventData_);
      DARABONBA_PTR_TO_JSON(HandlerProcessStatus, handlerProcessStatus_);
      DARABONBA_PTR_TO_JSON(HandlerType, handlerType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAITaskEventsResponseBodyEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EstimatedProcessingTime, estimatedProcessingTime_);
      DARABONBA_PTR_FROM_JSON(EventData, eventData_);
      DARABONBA_PTR_FROM_JSON(HandlerProcessStatus, handlerProcessStatus_);
      DARABONBA_PTR_FROM_JSON(HandlerType, handlerType_);
    };
    ListAITaskEventsResponseBodyEvents() = default ;
    ListAITaskEventsResponseBodyEvents(const ListAITaskEventsResponseBodyEvents &) = default ;
    ListAITaskEventsResponseBodyEvents(ListAITaskEventsResponseBodyEvents &&) = default ;
    ListAITaskEventsResponseBodyEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAITaskEventsResponseBodyEvents() = default ;
    ListAITaskEventsResponseBodyEvents& operator=(const ListAITaskEventsResponseBodyEvents &) = default ;
    ListAITaskEventsResponseBodyEvents& operator=(ListAITaskEventsResponseBodyEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentType_ != nullptr
        && this->createTime_ != nullptr && this->estimatedProcessingTime_ != nullptr && this->eventData_ != nullptr && this->handlerProcessStatus_ != nullptr && this->handlerType_ != nullptr; };
    // agentType Field Functions 
    bool hasAgentType() const { return this->agentType_ != nullptr;};
    void deleteAgentType() { this->agentType_ = nullptr;};
    inline string agentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
    inline ListAITaskEventsResponseBodyEvents& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAITaskEventsResponseBodyEvents& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // estimatedProcessingTime Field Functions 
    bool hasEstimatedProcessingTime() const { return this->estimatedProcessingTime_ != nullptr;};
    void deleteEstimatedProcessingTime() { this->estimatedProcessingTime_ = nullptr;};
    inline string estimatedProcessingTime() const { DARABONBA_PTR_GET_DEFAULT(estimatedProcessingTime_, "") };
    inline ListAITaskEventsResponseBodyEvents& setEstimatedProcessingTime(string estimatedProcessingTime) { DARABONBA_PTR_SET_VALUE(estimatedProcessingTime_, estimatedProcessingTime) };


    // eventData Field Functions 
    bool hasEventData() const { return this->eventData_ != nullptr;};
    void deleteEventData() { this->eventData_ = nullptr;};
    inline string eventData() const { DARABONBA_PTR_GET_DEFAULT(eventData_, "") };
    inline ListAITaskEventsResponseBodyEvents& setEventData(string eventData) { DARABONBA_PTR_SET_VALUE(eventData_, eventData) };


    // handlerProcessStatus Field Functions 
    bool hasHandlerProcessStatus() const { return this->handlerProcessStatus_ != nullptr;};
    void deleteHandlerProcessStatus() { this->handlerProcessStatus_ = nullptr;};
    inline string handlerProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(handlerProcessStatus_, "") };
    inline ListAITaskEventsResponseBodyEvents& setHandlerProcessStatus(string handlerProcessStatus) { DARABONBA_PTR_SET_VALUE(handlerProcessStatus_, handlerProcessStatus) };


    // handlerType Field Functions 
    bool hasHandlerType() const { return this->handlerType_ != nullptr;};
    void deleteHandlerType() { this->handlerType_ = nullptr;};
    inline string handlerType() const { DARABONBA_PTR_GET_DEFAULT(handlerType_, "") };
    inline ListAITaskEventsResponseBodyEvents& setHandlerType(string handlerType) { DARABONBA_PTR_SET_VALUE(handlerType_, handlerType) };


  protected:
    // The type of the agent that is used to execute the AI task.
    // 
    // Valid values:
    // 
    // *   GenerateTemplateAgent
    // *   FixUserTemplateAgent
    std::shared_ptr<string> agentType_ = nullptr;
    // The time when the event was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The estimated execution time of the handler. Unit: seconds.
    std::shared_ptr<string> estimatedProcessingTime_ = nullptr;
    // The details of the event.
    std::shared_ptr<string> eventData_ = nullptr;
    // The execution state of the handler that process the AI task.
    // 
    // Valid values:
    // 
    // *   SUCCESS
    // *   RUNNING
    // *   FAILURE
    std::shared_ptr<string> handlerProcessStatus_ = nullptr;
    // The type of the handler that is used to execute the task.
    // 
    // Valid values:
    // 
    // *   TerraformTemplateGenerator
    // *   TemplateGenerator
    // *   ROSTemplateModifier
    // *   TerraformTemplateStaticFixer
    // *   TerraformTemplateDynamicFixer
    // *   DocumentTemplateGenerator
    // *   TerraformTemplateModifier
    // *   TemplateModifier
    // *   FixTemplateInputPreprocessor
    // *   TemplateStaticFixer
    // *   GenerateTemplateInputPreprocessor
    // *   ROSTemplateGenerator
    // *   TemplateDynamicFixer
    // *   BaseDynamicFixer
    // *   ROSTemplateStaticFixer
    // *   ROSTemplateDynamicFixer
    std::shared_ptr<string> handlerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif

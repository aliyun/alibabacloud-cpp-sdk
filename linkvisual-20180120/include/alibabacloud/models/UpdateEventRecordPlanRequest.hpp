// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTRECORDPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTRECORDPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class UpdateEventRecordPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventRecordPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(PreRecordDuration, preRecordDuration_);
      DARABONBA_PTR_TO_JSON(RecordDuration, recordDuration_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventRecordPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(PreRecordDuration, preRecordDuration_);
      DARABONBA_PTR_FROM_JSON(RecordDuration, recordDuration_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    UpdateEventRecordPlanRequest() = default ;
    UpdateEventRecordPlanRequest(const UpdateEventRecordPlanRequest &) = default ;
    UpdateEventRecordPlanRequest(UpdateEventRecordPlanRequest &&) = default ;
    UpdateEventRecordPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventRecordPlanRequest() = default ;
    UpdateEventRecordPlanRequest& operator=(const UpdateEventRecordPlanRequest &) = default ;
    UpdateEventRecordPlanRequest& operator=(UpdateEventRecordPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventTypes_ == nullptr
        && this->name_ == nullptr && this->planId_ == nullptr && this->preRecordDuration_ == nullptr && this->recordDuration_ == nullptr && this->templateId_ == nullptr; };
    // eventTypes Field Functions 
    bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
    void deleteEventTypes() { this->eventTypes_ = nullptr;};
    inline string getEventTypes() const { DARABONBA_PTR_GET_DEFAULT(eventTypes_, "") };
    inline UpdateEventRecordPlanRequest& setEventTypes(string eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateEventRecordPlanRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline UpdateEventRecordPlanRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // preRecordDuration Field Functions 
    bool hasPreRecordDuration() const { return this->preRecordDuration_ != nullptr;};
    void deletePreRecordDuration() { this->preRecordDuration_ = nullptr;};
    inline int32_t getPreRecordDuration() const { DARABONBA_PTR_GET_DEFAULT(preRecordDuration_, 0) };
    inline UpdateEventRecordPlanRequest& setPreRecordDuration(int32_t preRecordDuration) { DARABONBA_PTR_SET_VALUE(preRecordDuration_, preRecordDuration) };


    // recordDuration Field Functions 
    bool hasRecordDuration() const { return this->recordDuration_ != nullptr;};
    void deleteRecordDuration() { this->recordDuration_ = nullptr;};
    inline int32_t getRecordDuration() const { DARABONBA_PTR_GET_DEFAULT(recordDuration_, 0) };
    inline UpdateEventRecordPlanRequest& setRecordDuration(int32_t recordDuration) { DARABONBA_PTR_SET_VALUE(recordDuration_, recordDuration) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateEventRecordPlanRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The types of intelligent alert events. Valid values:
    // 
    // - 0: All intelligent alert events.
    // - Multiple intelligent alert events: Enter the sequence numbers of the intelligent alert events and separate them with commas (,), for example, `10001,10002`.
    // > You can specify up to 10 intelligent alert events at a time.
    // 
    // To view all types of intelligent alert events, log on to the IoT Platform console, go to the **Product Details** page, and click the **Define Feature** tab. For more information, see [View intelligent alert event types](https://help.aliyun.com/document_detail/207701.html).
    shared_ptr<string> eventTypes_ {};
    // The name of the video recording plan for intelligent alert events.
    // 
    // The name must be less than 48 characters in length and can contain letters, digits, and the following special characters: hyphens (-), underscores (_), at signs (@), periods (.), and colons (:).
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The ID of the video recording plan for intelligent alert events. You can call the [QueryEventRecordPlans](https://help.aliyun.com/document_detail/107907.html) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<string> planId_ {};
    // The pre-recording duration. Valid values: 0 to 10. Unit: seconds.
    // 
    // > A pre-recording duration is generated only when the device supports the pre-recording feature. Otherwise, the pre-recording duration is 0.
    shared_ptr<int32_t> preRecordDuration_ {};
    // The video recording duration, including the pre-recording duration. Valid values: 10 to 60. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<int32_t> recordDuration_ {};
    // The ID of the time template. You can call the [QueryTimeTemplate](https://help.aliyun.com/document_detail/107890.html) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif

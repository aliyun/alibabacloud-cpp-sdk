// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTRECORDPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTRECORDPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class CreateEventRecordPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventRecordPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PreRecordDuration, preRecordDuration_);
      DARABONBA_PTR_TO_JSON(RecordDuration, recordDuration_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventRecordPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PreRecordDuration, preRecordDuration_);
      DARABONBA_PTR_FROM_JSON(RecordDuration, recordDuration_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    CreateEventRecordPlanRequest() = default ;
    CreateEventRecordPlanRequest(const CreateEventRecordPlanRequest &) = default ;
    CreateEventRecordPlanRequest(CreateEventRecordPlanRequest &&) = default ;
    CreateEventRecordPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventRecordPlanRequest() = default ;
    CreateEventRecordPlanRequest& operator=(const CreateEventRecordPlanRequest &) = default ;
    CreateEventRecordPlanRequest& operator=(CreateEventRecordPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventTypes_ == nullptr
        && this->name_ == nullptr && this->preRecordDuration_ == nullptr && this->recordDuration_ == nullptr && this->templateId_ == nullptr; };
    // eventTypes Field Functions 
    bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
    void deleteEventTypes() { this->eventTypes_ = nullptr;};
    inline string getEventTypes() const { DARABONBA_PTR_GET_DEFAULT(eventTypes_, "") };
    inline CreateEventRecordPlanRequest& setEventTypes(string eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEventRecordPlanRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // preRecordDuration Field Functions 
    bool hasPreRecordDuration() const { return this->preRecordDuration_ != nullptr;};
    void deletePreRecordDuration() { this->preRecordDuration_ = nullptr;};
    inline int32_t getPreRecordDuration() const { DARABONBA_PTR_GET_DEFAULT(preRecordDuration_, 0) };
    inline CreateEventRecordPlanRequest& setPreRecordDuration(int32_t preRecordDuration) { DARABONBA_PTR_SET_VALUE(preRecordDuration_, preRecordDuration) };


    // recordDuration Field Functions 
    bool hasRecordDuration() const { return this->recordDuration_ != nullptr;};
    void deleteRecordDuration() { this->recordDuration_ = nullptr;};
    inline int32_t getRecordDuration() const { DARABONBA_PTR_GET_DEFAULT(recordDuration_, 0) };
    inline CreateEventRecordPlanRequest& setRecordDuration(int32_t recordDuration) { DARABONBA_PTR_SET_VALUE(recordDuration_, recordDuration) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateEventRecordPlanRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The types of intelligent alert events. Valid values:
    // - 0: all intelligent alert events.
    // - Multiple intelligent alert events: enter the sequence numbers of the intelligent alert events and separate them with commas (,). Example: `10001,10002`.
    // > You can specify up to 10 intelligent alert events at a time.
    // 
    // To view all types of intelligent alert events, log on to the IoT Platform console, go to the **Product Details** page, and click the **Define Feature** tab. For more information, see [View intelligent alert event types](https://help.aliyun.com/document_detail/207701.html).
    shared_ptr<string> eventTypes_ {};
    // The name of the recording plan.
    // 
    // The name must be less than 48 characters in length and can contain letters, digits, and the following special characters: hyphens (-), underscores (_), at signs (@), periods (.), and colons (:).
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The pre-recording duration in seconds. Default value: 0. Maximum value: 10.
    shared_ptr<int32_t> preRecordDuration_ {};
    // The recording duration in seconds, including the pre-recording duration. Valid values: 10 to 60.
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

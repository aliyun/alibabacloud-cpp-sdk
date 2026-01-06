// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULECONFERENCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULECONFERENCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateScheduleConferenceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduleConferenceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ScheduleConfSettingModel, scheduleConfSettingModelShrink_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduleConferenceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfSettingModel, scheduleConfSettingModelShrink_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateScheduleConferenceShrinkRequest() = default ;
    CreateScheduleConferenceShrinkRequest(const CreateScheduleConferenceShrinkRequest &) = default ;
    CreateScheduleConferenceShrinkRequest(CreateScheduleConferenceShrinkRequest &&) = default ;
    CreateScheduleConferenceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduleConferenceShrinkRequest() = default ;
    CreateScheduleConferenceShrinkRequest& operator=(const CreateScheduleConferenceShrinkRequest &) = default ;
    CreateScheduleConferenceShrinkRequest& operator=(CreateScheduleConferenceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->scheduleConfSettingModelShrink_ == nullptr && this->startTime_ == nullptr && this->tenantContextShrink_ == nullptr && this->title_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateScheduleConferenceShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // scheduleConfSettingModelShrink Field Functions 
    bool hasScheduleConfSettingModelShrink() const { return this->scheduleConfSettingModelShrink_ != nullptr;};
    void deleteScheduleConfSettingModelShrink() { this->scheduleConfSettingModelShrink_ = nullptr;};
    inline string getScheduleConfSettingModelShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleConfSettingModelShrink_, "") };
    inline CreateScheduleConferenceShrinkRequest& setScheduleConfSettingModelShrink(string scheduleConfSettingModelShrink) { DARABONBA_PTR_SET_VALUE(scheduleConfSettingModelShrink_, scheduleConfSettingModelShrink) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateScheduleConferenceShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline CreateScheduleConferenceShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateScheduleConferenceShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> scheduleConfSettingModelShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<string> tenantContextShrink_ {};
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

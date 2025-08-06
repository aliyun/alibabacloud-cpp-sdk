// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULECONFERENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULECONFERENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateScheduleConferenceRequestScheduleConfSettingModel.hpp>
#include <alibabacloud/models/CreateScheduleConferenceRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateScheduleConferenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduleConferenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ScheduleConfSettingModel, scheduleConfSettingModel_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduleConferenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfSettingModel, scheduleConfSettingModel_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateScheduleConferenceRequest() = default ;
    CreateScheduleConferenceRequest(const CreateScheduleConferenceRequest &) = default ;
    CreateScheduleConferenceRequest(CreateScheduleConferenceRequest &&) = default ;
    CreateScheduleConferenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduleConferenceRequest() = default ;
    CreateScheduleConferenceRequest& operator=(const CreateScheduleConferenceRequest &) = default ;
    CreateScheduleConferenceRequest& operator=(CreateScheduleConferenceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->scheduleConfSettingModel_ != nullptr && this->startTime_ != nullptr && this->tenantContext_ != nullptr && this->title_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateScheduleConferenceRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // scheduleConfSettingModel Field Functions 
    bool hasScheduleConfSettingModel() const { return this->scheduleConfSettingModel_ != nullptr;};
    void deleteScheduleConfSettingModel() { this->scheduleConfSettingModel_ = nullptr;};
    inline const CreateScheduleConferenceRequestScheduleConfSettingModel & scheduleConfSettingModel() const { DARABONBA_PTR_GET_CONST(scheduleConfSettingModel_, CreateScheduleConferenceRequestScheduleConfSettingModel) };
    inline CreateScheduleConferenceRequestScheduleConfSettingModel scheduleConfSettingModel() { DARABONBA_PTR_GET(scheduleConfSettingModel_, CreateScheduleConferenceRequestScheduleConfSettingModel) };
    inline CreateScheduleConferenceRequest& setScheduleConfSettingModel(const CreateScheduleConferenceRequestScheduleConfSettingModel & scheduleConfSettingModel) { DARABONBA_PTR_SET_VALUE(scheduleConfSettingModel_, scheduleConfSettingModel) };
    inline CreateScheduleConferenceRequest& setScheduleConfSettingModel(CreateScheduleConferenceRequestScheduleConfSettingModel && scheduleConfSettingModel) { DARABONBA_PTR_SET_RVALUE(scheduleConfSettingModel_, scheduleConfSettingModel) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateScheduleConferenceRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CreateScheduleConferenceRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CreateScheduleConferenceRequestTenantContext) };
    inline CreateScheduleConferenceRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, CreateScheduleConferenceRequestTenantContext) };
    inline CreateScheduleConferenceRequest& setTenantContext(const CreateScheduleConferenceRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CreateScheduleConferenceRequest& setTenantContext(CreateScheduleConferenceRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateScheduleConferenceRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<CreateScheduleConferenceRequestScheduleConfSettingModel> scheduleConfSettingModel_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<CreateScheduleConferenceRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

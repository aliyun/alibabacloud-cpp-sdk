// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCHEDULECONFSETTINGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCHEDULECONFSETTINGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateScheduleConfSettingsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScheduleConfSettingsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ScheduleConfSettingModel, scheduleConfSettingModelShrink_);
      DARABONBA_PTR_TO_JSON(ScheduleConferenceId, scheduleConferenceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScheduleConfSettingsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ScheduleConfSettingModel, scheduleConfSettingModelShrink_);
      DARABONBA_PTR_FROM_JSON(ScheduleConferenceId, scheduleConferenceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    UpdateScheduleConfSettingsShrinkRequest() = default ;
    UpdateScheduleConfSettingsShrinkRequest(const UpdateScheduleConfSettingsShrinkRequest &) = default ;
    UpdateScheduleConfSettingsShrinkRequest(UpdateScheduleConfSettingsShrinkRequest &&) = default ;
    UpdateScheduleConfSettingsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScheduleConfSettingsShrinkRequest() = default ;
    UpdateScheduleConfSettingsShrinkRequest& operator=(const UpdateScheduleConfSettingsShrinkRequest &) = default ;
    UpdateScheduleConfSettingsShrinkRequest& operator=(UpdateScheduleConfSettingsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scheduleConfSettingModelShrink_ == nullptr
        && return this->scheduleConferenceId_ == nullptr && return this->tenantContextShrink_ == nullptr; };
    // scheduleConfSettingModelShrink Field Functions 
    bool hasScheduleConfSettingModelShrink() const { return this->scheduleConfSettingModelShrink_ != nullptr;};
    void deleteScheduleConfSettingModelShrink() { this->scheduleConfSettingModelShrink_ = nullptr;};
    inline string scheduleConfSettingModelShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleConfSettingModelShrink_, "") };
    inline UpdateScheduleConfSettingsShrinkRequest& setScheduleConfSettingModelShrink(string scheduleConfSettingModelShrink) { DARABONBA_PTR_SET_VALUE(scheduleConfSettingModelShrink_, scheduleConfSettingModelShrink) };


    // scheduleConferenceId Field Functions 
    bool hasScheduleConferenceId() const { return this->scheduleConferenceId_ != nullptr;};
    void deleteScheduleConferenceId() { this->scheduleConferenceId_ = nullptr;};
    inline string scheduleConferenceId() const { DARABONBA_PTR_GET_DEFAULT(scheduleConferenceId_, "") };
    inline UpdateScheduleConfSettingsShrinkRequest& setScheduleConferenceId(string scheduleConferenceId) { DARABONBA_PTR_SET_VALUE(scheduleConferenceId_, scheduleConferenceId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline UpdateScheduleConfSettingsShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    std::shared_ptr<string> scheduleConfSettingModelShrink_ = nullptr;
    std::shared_ptr<string> scheduleConferenceId_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

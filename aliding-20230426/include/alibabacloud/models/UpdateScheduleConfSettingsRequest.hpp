// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCHEDULECONFSETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCHEDULECONFSETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateScheduleConfSettingsRequestScheduleConfSettingModel.hpp>
#include <alibabacloud/models/UpdateScheduleConfSettingsRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateScheduleConfSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScheduleConfSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ScheduleConfSettingModel, scheduleConfSettingModel_);
      DARABONBA_PTR_TO_JSON(ScheduleConferenceId, scheduleConferenceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScheduleConfSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ScheduleConfSettingModel, scheduleConfSettingModel_);
      DARABONBA_PTR_FROM_JSON(ScheduleConferenceId, scheduleConferenceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    UpdateScheduleConfSettingsRequest() = default ;
    UpdateScheduleConfSettingsRequest(const UpdateScheduleConfSettingsRequest &) = default ;
    UpdateScheduleConfSettingsRequest(UpdateScheduleConfSettingsRequest &&) = default ;
    UpdateScheduleConfSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScheduleConfSettingsRequest() = default ;
    UpdateScheduleConfSettingsRequest& operator=(const UpdateScheduleConfSettingsRequest &) = default ;
    UpdateScheduleConfSettingsRequest& operator=(UpdateScheduleConfSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scheduleConfSettingModel_ == nullptr
        && return this->scheduleConferenceId_ == nullptr && return this->tenantContext_ == nullptr; };
    // scheduleConfSettingModel Field Functions 
    bool hasScheduleConfSettingModel() const { return this->scheduleConfSettingModel_ != nullptr;};
    void deleteScheduleConfSettingModel() { this->scheduleConfSettingModel_ = nullptr;};
    inline const UpdateScheduleConfSettingsRequestScheduleConfSettingModel & scheduleConfSettingModel() const { DARABONBA_PTR_GET_CONST(scheduleConfSettingModel_, UpdateScheduleConfSettingsRequestScheduleConfSettingModel) };
    inline UpdateScheduleConfSettingsRequestScheduleConfSettingModel scheduleConfSettingModel() { DARABONBA_PTR_GET(scheduleConfSettingModel_, UpdateScheduleConfSettingsRequestScheduleConfSettingModel) };
    inline UpdateScheduleConfSettingsRequest& setScheduleConfSettingModel(const UpdateScheduleConfSettingsRequestScheduleConfSettingModel & scheduleConfSettingModel) { DARABONBA_PTR_SET_VALUE(scheduleConfSettingModel_, scheduleConfSettingModel) };
    inline UpdateScheduleConfSettingsRequest& setScheduleConfSettingModel(UpdateScheduleConfSettingsRequestScheduleConfSettingModel && scheduleConfSettingModel) { DARABONBA_PTR_SET_RVALUE(scheduleConfSettingModel_, scheduleConfSettingModel) };


    // scheduleConferenceId Field Functions 
    bool hasScheduleConferenceId() const { return this->scheduleConferenceId_ != nullptr;};
    void deleteScheduleConferenceId() { this->scheduleConferenceId_ = nullptr;};
    inline string scheduleConferenceId() const { DARABONBA_PTR_GET_DEFAULT(scheduleConferenceId_, "") };
    inline UpdateScheduleConfSettingsRequest& setScheduleConferenceId(string scheduleConferenceId) { DARABONBA_PTR_SET_VALUE(scheduleConferenceId_, scheduleConferenceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateScheduleConfSettingsRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateScheduleConfSettingsRequestTenantContext) };
    inline UpdateScheduleConfSettingsRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateScheduleConfSettingsRequestTenantContext) };
    inline UpdateScheduleConfSettingsRequest& setTenantContext(const UpdateScheduleConfSettingsRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateScheduleConfSettingsRequest& setTenantContext(UpdateScheduleConfSettingsRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<UpdateScheduleConfSettingsRequestScheduleConfSettingModel> scheduleConfSettingModel_ = nullptr;
    std::shared_ptr<string> scheduleConferenceId_ = nullptr;
    std::shared_ptr<UpdateScheduleConfSettingsRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

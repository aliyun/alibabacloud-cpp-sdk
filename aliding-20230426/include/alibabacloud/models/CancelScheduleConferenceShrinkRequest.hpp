// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELSCHEDULECONFERENCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELSCHEDULECONFERENCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CancelScheduleConferenceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelScheduleConferenceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ScheduleConferenceId, scheduleConferenceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CancelScheduleConferenceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ScheduleConferenceId, scheduleConferenceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    CancelScheduleConferenceShrinkRequest() = default ;
    CancelScheduleConferenceShrinkRequest(const CancelScheduleConferenceShrinkRequest &) = default ;
    CancelScheduleConferenceShrinkRequest(CancelScheduleConferenceShrinkRequest &&) = default ;
    CancelScheduleConferenceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelScheduleConferenceShrinkRequest() = default ;
    CancelScheduleConferenceShrinkRequest& operator=(const CancelScheduleConferenceShrinkRequest &) = default ;
    CancelScheduleConferenceShrinkRequest& operator=(CancelScheduleConferenceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scheduleConferenceId_ == nullptr
        && this->tenantContextShrink_ == nullptr; };
    // scheduleConferenceId Field Functions 
    bool hasScheduleConferenceId() const { return this->scheduleConferenceId_ != nullptr;};
    void deleteScheduleConferenceId() { this->scheduleConferenceId_ = nullptr;};
    inline string getScheduleConferenceId() const { DARABONBA_PTR_GET_DEFAULT(scheduleConferenceId_, "") };
    inline CancelScheduleConferenceShrinkRequest& setScheduleConferenceId(string scheduleConferenceId) { DARABONBA_PTR_SET_VALUE(scheduleConferenceId_, scheduleConferenceId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline CancelScheduleConferenceShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> scheduleConferenceId_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

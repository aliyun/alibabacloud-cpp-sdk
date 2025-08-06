// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELSCHEDULECONFERENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELSCHEDULECONFERENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CancelScheduleConferenceRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CancelScheduleConferenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelScheduleConferenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ScheduleConferenceId, scheduleConferenceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, CancelScheduleConferenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ScheduleConferenceId, scheduleConferenceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    CancelScheduleConferenceRequest() = default ;
    CancelScheduleConferenceRequest(const CancelScheduleConferenceRequest &) = default ;
    CancelScheduleConferenceRequest(CancelScheduleConferenceRequest &&) = default ;
    CancelScheduleConferenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelScheduleConferenceRequest() = default ;
    CancelScheduleConferenceRequest& operator=(const CancelScheduleConferenceRequest &) = default ;
    CancelScheduleConferenceRequest& operator=(CancelScheduleConferenceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scheduleConferenceId_ != nullptr
        && this->tenantContext_ != nullptr; };
    // scheduleConferenceId Field Functions 
    bool hasScheduleConferenceId() const { return this->scheduleConferenceId_ != nullptr;};
    void deleteScheduleConferenceId() { this->scheduleConferenceId_ = nullptr;};
    inline string scheduleConferenceId() const { DARABONBA_PTR_GET_DEFAULT(scheduleConferenceId_, "") };
    inline CancelScheduleConferenceRequest& setScheduleConferenceId(string scheduleConferenceId) { DARABONBA_PTR_SET_VALUE(scheduleConferenceId_, scheduleConferenceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CancelScheduleConferenceRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CancelScheduleConferenceRequestTenantContext) };
    inline CancelScheduleConferenceRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, CancelScheduleConferenceRequestTenantContext) };
    inline CancelScheduleConferenceRequest& setTenantContext(const CancelScheduleConferenceRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CancelScheduleConferenceRequest& setTenantContext(CancelScheduleConferenceRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> scheduleConferenceId_ = nullptr;
    std::shared_ptr<CancelScheduleConferenceRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

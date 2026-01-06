// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELSCHEDULECONFERENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELSCHEDULECONFERENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->scheduleConferenceId_ == nullptr
        && this->tenantContext_ == nullptr; };
    // scheduleConferenceId Field Functions 
    bool hasScheduleConferenceId() const { return this->scheduleConferenceId_ != nullptr;};
    void deleteScheduleConferenceId() { this->scheduleConferenceId_ = nullptr;};
    inline string getScheduleConferenceId() const { DARABONBA_PTR_GET_DEFAULT(scheduleConferenceId_, "") };
    inline CancelScheduleConferenceRequest& setScheduleConferenceId(string scheduleConferenceId) { DARABONBA_PTR_SET_VALUE(scheduleConferenceId_, scheduleConferenceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CancelScheduleConferenceRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CancelScheduleConferenceRequest::TenantContext) };
    inline CancelScheduleConferenceRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, CancelScheduleConferenceRequest::TenantContext) };
    inline CancelScheduleConferenceRequest& setTenantContext(const CancelScheduleConferenceRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CancelScheduleConferenceRequest& setTenantContext(CancelScheduleConferenceRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> scheduleConferenceId_ {};
    shared_ptr<CancelScheduleConferenceRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

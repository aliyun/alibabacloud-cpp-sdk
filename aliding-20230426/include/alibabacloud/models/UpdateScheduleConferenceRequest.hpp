// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCHEDULECONFERENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCHEDULECONFERENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateScheduleConferenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScheduleConferenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ScheduleConferenceId, scheduleConferenceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScheduleConferenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ScheduleConferenceId, scheduleConferenceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    UpdateScheduleConferenceRequest() = default ;
    UpdateScheduleConferenceRequest(const UpdateScheduleConferenceRequest &) = default ;
    UpdateScheduleConferenceRequest(UpdateScheduleConferenceRequest &&) = default ;
    UpdateScheduleConferenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScheduleConferenceRequest() = default ;
    UpdateScheduleConferenceRequest& operator=(const UpdateScheduleConferenceRequest &) = default ;
    UpdateScheduleConferenceRequest& operator=(UpdateScheduleConferenceRequest &&) = default ;
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

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->scheduleConferenceId_ == nullptr && this->startTime_ == nullptr && this->tenantContext_ == nullptr && this->title_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline UpdateScheduleConferenceRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // scheduleConferenceId Field Functions 
    bool hasScheduleConferenceId() const { return this->scheduleConferenceId_ != nullptr;};
    void deleteScheduleConferenceId() { this->scheduleConferenceId_ = nullptr;};
    inline string getScheduleConferenceId() const { DARABONBA_PTR_GET_DEFAULT(scheduleConferenceId_, "") };
    inline UpdateScheduleConferenceRequest& setScheduleConferenceId(string scheduleConferenceId) { DARABONBA_PTR_SET_VALUE(scheduleConferenceId_, scheduleConferenceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline UpdateScheduleConferenceRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateScheduleConferenceRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateScheduleConferenceRequest::TenantContext) };
    inline UpdateScheduleConferenceRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateScheduleConferenceRequest::TenantContext) };
    inline UpdateScheduleConferenceRequest& setTenantContext(const UpdateScheduleConferenceRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateScheduleConferenceRequest& setTenantContext(UpdateScheduleConferenceRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateScheduleConferenceRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // This parameter is required.
    shared_ptr<string> scheduleConferenceId_ {};
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<UpdateScheduleConferenceRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

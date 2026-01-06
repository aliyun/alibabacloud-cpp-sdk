// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESPONDEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESPONDEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class RespondEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RespondEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(ResponseStatus, responseStatus_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, RespondEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(ResponseStatus, responseStatus_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    RespondEventRequest() = default ;
    RespondEventRequest(const RespondEventRequest &) = default ;
    RespondEventRequest(RespondEventRequest &&) = default ;
    RespondEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RespondEventRequest() = default ;
    RespondEventRequest& operator=(const RespondEventRequest &) = default ;
    RespondEventRequest& operator=(RespondEventRequest &&) = default ;
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

    virtual bool empty() const override { return this->calendarId_ == nullptr
        && this->eventId_ == nullptr && this->responseStatus_ == nullptr && this->tenantContext_ == nullptr; };
    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string getCalendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline RespondEventRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline RespondEventRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // responseStatus Field Functions 
    bool hasResponseStatus() const { return this->responseStatus_ != nullptr;};
    void deleteResponseStatus() { this->responseStatus_ = nullptr;};
    inline string getResponseStatus() const { DARABONBA_PTR_GET_DEFAULT(responseStatus_, "") };
    inline RespondEventRequest& setResponseStatus(string responseStatus) { DARABONBA_PTR_SET_VALUE(responseStatus_, responseStatus) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const RespondEventRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, RespondEventRequest::TenantContext) };
    inline RespondEventRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, RespondEventRequest::TenantContext) };
    inline RespondEventRequest& setTenantContext(const RespondEventRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline RespondEventRequest& setTenantContext(RespondEventRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> calendarId_ {};
    // This parameter is required.
    shared_ptr<string> eventId_ {};
    // This parameter is required.
    shared_ptr<string> responseStatus_ {};
    shared_ptr<RespondEventRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

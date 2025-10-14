// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCHEDULECONFERENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCHEDULECONFERENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryScheduleConferenceRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryScheduleConferenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryScheduleConferenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(scheduleConferenceId, scheduleConferenceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryScheduleConferenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(scheduleConferenceId, scheduleConferenceId_);
    };
    QueryScheduleConferenceRequest() = default ;
    QueryScheduleConferenceRequest(const QueryScheduleConferenceRequest &) = default ;
    QueryScheduleConferenceRequest(QueryScheduleConferenceRequest &&) = default ;
    QueryScheduleConferenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryScheduleConferenceRequest() = default ;
    QueryScheduleConferenceRequest& operator=(const QueryScheduleConferenceRequest &) = default ;
    QueryScheduleConferenceRequest& operator=(QueryScheduleConferenceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContext_ == nullptr
        && return this->scheduleConferenceId_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryScheduleConferenceRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryScheduleConferenceRequestTenantContext) };
    inline QueryScheduleConferenceRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryScheduleConferenceRequestTenantContext) };
    inline QueryScheduleConferenceRequest& setTenantContext(const QueryScheduleConferenceRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryScheduleConferenceRequest& setTenantContext(QueryScheduleConferenceRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // scheduleConferenceId Field Functions 
    bool hasScheduleConferenceId() const { return this->scheduleConferenceId_ != nullptr;};
    void deleteScheduleConferenceId() { this->scheduleConferenceId_ = nullptr;};
    inline string scheduleConferenceId() const { DARABONBA_PTR_GET_DEFAULT(scheduleConferenceId_, "") };
    inline QueryScheduleConferenceRequest& setScheduleConferenceId(string scheduleConferenceId) { DARABONBA_PTR_SET_VALUE(scheduleConferenceId_, scheduleConferenceId) };


  protected:
    std::shared_ptr<QueryScheduleConferenceRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scheduleConferenceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

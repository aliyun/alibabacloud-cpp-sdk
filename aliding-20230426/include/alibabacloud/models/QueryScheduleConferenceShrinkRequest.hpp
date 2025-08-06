// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCHEDULECONFERENCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCHEDULECONFERENCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryScheduleConferenceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryScheduleConferenceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(scheduleConferenceId, scheduleConferenceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryScheduleConferenceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(scheduleConferenceId, scheduleConferenceId_);
    };
    QueryScheduleConferenceShrinkRequest() = default ;
    QueryScheduleConferenceShrinkRequest(const QueryScheduleConferenceShrinkRequest &) = default ;
    QueryScheduleConferenceShrinkRequest(QueryScheduleConferenceShrinkRequest &&) = default ;
    QueryScheduleConferenceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryScheduleConferenceShrinkRequest() = default ;
    QueryScheduleConferenceShrinkRequest& operator=(const QueryScheduleConferenceShrinkRequest &) = default ;
    QueryScheduleConferenceShrinkRequest& operator=(QueryScheduleConferenceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantContextShrink_ != nullptr
        && this->scheduleConferenceId_ != nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline QueryScheduleConferenceShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // scheduleConferenceId Field Functions 
    bool hasScheduleConferenceId() const { return this->scheduleConferenceId_ != nullptr;};
    void deleteScheduleConferenceId() { this->scheduleConferenceId_ = nullptr;};
    inline string scheduleConferenceId() const { DARABONBA_PTR_GET_DEFAULT(scheduleConferenceId_, "") };
    inline QueryScheduleConferenceShrinkRequest& setScheduleConferenceId(string scheduleConferenceId) { DARABONBA_PTR_SET_VALUE(scheduleConferenceId_, scheduleConferenceId) };


  protected:
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scheduleConferenceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

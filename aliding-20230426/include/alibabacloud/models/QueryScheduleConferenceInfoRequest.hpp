// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCHEDULECONFERENCEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCHEDULECONFERENCEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryScheduleConferenceInfoRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryScheduleConferenceInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryScheduleConferenceInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ScheduleConferenceId, scheduleConferenceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, QueryScheduleConferenceInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ScheduleConferenceId, scheduleConferenceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    QueryScheduleConferenceInfoRequest() = default ;
    QueryScheduleConferenceInfoRequest(const QueryScheduleConferenceInfoRequest &) = default ;
    QueryScheduleConferenceInfoRequest(QueryScheduleConferenceInfoRequest &&) = default ;
    QueryScheduleConferenceInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryScheduleConferenceInfoRequest() = default ;
    QueryScheduleConferenceInfoRequest& operator=(const QueryScheduleConferenceInfoRequest &) = default ;
    QueryScheduleConferenceInfoRequest& operator=(QueryScheduleConferenceInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->scheduleConferenceId_ != nullptr && this->tenantContext_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryScheduleConferenceInfoRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryScheduleConferenceInfoRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // scheduleConferenceId Field Functions 
    bool hasScheduleConferenceId() const { return this->scheduleConferenceId_ != nullptr;};
    void deleteScheduleConferenceId() { this->scheduleConferenceId_ = nullptr;};
    inline string scheduleConferenceId() const { DARABONBA_PTR_GET_DEFAULT(scheduleConferenceId_, "") };
    inline QueryScheduleConferenceInfoRequest& setScheduleConferenceId(string scheduleConferenceId) { DARABONBA_PTR_SET_VALUE(scheduleConferenceId_, scheduleConferenceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryScheduleConferenceInfoRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryScheduleConferenceInfoRequestTenantContext) };
    inline QueryScheduleConferenceInfoRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryScheduleConferenceInfoRequestTenantContext) };
    inline QueryScheduleConferenceInfoRequest& setTenantContext(const QueryScheduleConferenceInfoRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryScheduleConferenceInfoRequest& setTenantContext(QueryScheduleConferenceInfoRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> scheduleConferenceId_ = nullptr;
    std::shared_ptr<QueryScheduleConferenceInfoRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

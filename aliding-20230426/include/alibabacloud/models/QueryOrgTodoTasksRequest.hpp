// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORGTODOTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYORGTODOTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryOrgTodoTasksRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryOrgTodoTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrgTodoTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(isDone, isDone_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrgTodoTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(isDone, isDone_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    QueryOrgTodoTasksRequest() = default ;
    QueryOrgTodoTasksRequest(const QueryOrgTodoTasksRequest &) = default ;
    QueryOrgTodoTasksRequest(QueryOrgTodoTasksRequest &&) = default ;
    QueryOrgTodoTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrgTodoTasksRequest() = default ;
    QueryOrgTodoTasksRequest& operator=(const QueryOrgTodoTasksRequest &) = default ;
    QueryOrgTodoTasksRequest& operator=(QueryOrgTodoTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantContext_ != nullptr
        && this->isDone_ != nullptr && this->nextToken_ != nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryOrgTodoTasksRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryOrgTodoTasksRequestTenantContext) };
    inline QueryOrgTodoTasksRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryOrgTodoTasksRequestTenantContext) };
    inline QueryOrgTodoTasksRequest& setTenantContext(const QueryOrgTodoTasksRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryOrgTodoTasksRequest& setTenantContext(QueryOrgTodoTasksRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // isDone Field Functions 
    bool hasIsDone() const { return this->isDone_ != nullptr;};
    void deleteIsDone() { this->isDone_ = nullptr;};
    inline bool isDone() const { DARABONBA_PTR_GET_DEFAULT(isDone_, false) };
    inline QueryOrgTodoTasksRequest& setIsDone(bool isDone) { DARABONBA_PTR_SET_VALUE(isDone_, isDone) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryOrgTodoTasksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    std::shared_ptr<QueryOrgTodoTasksRequestTenantContext> tenantContext_ = nullptr;
    std::shared_ptr<bool> isDone_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

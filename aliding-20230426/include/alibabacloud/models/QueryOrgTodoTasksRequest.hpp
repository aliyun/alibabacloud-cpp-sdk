// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORGTODOTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYORGTODOTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
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

    virtual bool empty() const override { return this->tenantContext_ == nullptr
        && this->isDone_ == nullptr && this->nextToken_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryOrgTodoTasksRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryOrgTodoTasksRequest::TenantContext) };
    inline QueryOrgTodoTasksRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryOrgTodoTasksRequest::TenantContext) };
    inline QueryOrgTodoTasksRequest& setTenantContext(const QueryOrgTodoTasksRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryOrgTodoTasksRequest& setTenantContext(QueryOrgTodoTasksRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // isDone Field Functions 
    bool hasIsDone() const { return this->isDone_ != nullptr;};
    void deleteIsDone() { this->isDone_ = nullptr;};
    inline bool getIsDone() const { DARABONBA_PTR_GET_DEFAULT(isDone_, false) };
    inline QueryOrgTodoTasksRequest& setIsDone(bool isDone) { DARABONBA_PTR_SET_VALUE(isDone_, isDone) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryOrgTodoTasksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    shared_ptr<QueryOrgTodoTasksRequest::TenantContext> tenantContext_ {};
    shared_ptr<bool> isDone_ {};
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

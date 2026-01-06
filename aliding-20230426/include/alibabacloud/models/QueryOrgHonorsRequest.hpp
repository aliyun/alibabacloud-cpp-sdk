// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORGHONORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYORGHONORSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryOrgHonorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrgHonorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(orgId, orgId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrgHonorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(orgId, orgId_);
    };
    QueryOrgHonorsRequest() = default ;
    QueryOrgHonorsRequest(const QueryOrgHonorsRequest &) = default ;
    QueryOrgHonorsRequest(QueryOrgHonorsRequest &&) = default ;
    QueryOrgHonorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrgHonorsRequest() = default ;
    QueryOrgHonorsRequest& operator=(const QueryOrgHonorsRequest &) = default ;
    QueryOrgHonorsRequest& operator=(QueryOrgHonorsRequest &&) = default ;
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
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->orgId_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryOrgHonorsRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryOrgHonorsRequest::TenantContext) };
    inline QueryOrgHonorsRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryOrgHonorsRequest::TenantContext) };
    inline QueryOrgHonorsRequest& setTenantContext(const QueryOrgHonorsRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryOrgHonorsRequest& setTenantContext(QueryOrgHonorsRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryOrgHonorsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryOrgHonorsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int64_t getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0L) };
    inline QueryOrgHonorsRequest& setOrgId(int64_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


  protected:
    shared_ptr<QueryOrgHonorsRequest::TenantContext> tenantContext_ {};
    shared_ptr<int32_t> maxResults_ {};
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<int64_t> orgId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

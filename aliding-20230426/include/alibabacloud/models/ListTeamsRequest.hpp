// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTEAMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTeamsRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListTeamsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTeamsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, ListTeamsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    ListTeamsRequest() = default ;
    ListTeamsRequest(const ListTeamsRequest &) = default ;
    ListTeamsRequest(ListTeamsRequest &&) = default ;
    ListTeamsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTeamsRequest() = default ;
    ListTeamsRequest& operator=(const ListTeamsRequest &) = default ;
    ListTeamsRequest& operator=(ListTeamsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->tenantContext_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTeamsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTeamsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const ListTeamsRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, ListTeamsRequestTenantContext) };
    inline ListTeamsRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, ListTeamsRequestTenantContext) };
    inline ListTeamsRequest& setTenantContext(const ListTeamsRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline ListTeamsRequest& setTenantContext(ListTeamsRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<ListTeamsRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

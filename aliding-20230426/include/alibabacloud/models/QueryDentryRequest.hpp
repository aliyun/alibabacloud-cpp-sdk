// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDentryRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryDentryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDentryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryId, dentryId_);
      DARABONBA_PTR_TO_JSON(IncludeSpace, includeSpace_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDentryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryId, dentryId_);
      DARABONBA_PTR_FROM_JSON(IncludeSpace, includeSpace_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    QueryDentryRequest() = default ;
    QueryDentryRequest(const QueryDentryRequest &) = default ;
    QueryDentryRequest(QueryDentryRequest &&) = default ;
    QueryDentryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDentryRequest() = default ;
    QueryDentryRequest& operator=(const QueryDentryRequest &) = default ;
    QueryDentryRequest& operator=(QueryDentryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dentryId_ != nullptr
        && this->includeSpace_ != nullptr && this->spaceId_ != nullptr && this->tenantContext_ != nullptr; };
    // dentryId Field Functions 
    bool hasDentryId() const { return this->dentryId_ != nullptr;};
    void deleteDentryId() { this->dentryId_ = nullptr;};
    inline string dentryId() const { DARABONBA_PTR_GET_DEFAULT(dentryId_, "") };
    inline QueryDentryRequest& setDentryId(string dentryId) { DARABONBA_PTR_SET_VALUE(dentryId_, dentryId) };


    // includeSpace Field Functions 
    bool hasIncludeSpace() const { return this->includeSpace_ != nullptr;};
    void deleteIncludeSpace() { this->includeSpace_ = nullptr;};
    inline bool includeSpace() const { DARABONBA_PTR_GET_DEFAULT(includeSpace_, false) };
    inline QueryDentryRequest& setIncludeSpace(bool includeSpace) { DARABONBA_PTR_SET_VALUE(includeSpace_, includeSpace) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline QueryDentryRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryDentryRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryDentryRequestTenantContext) };
    inline QueryDentryRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryDentryRequestTenantContext) };
    inline QueryDentryRequest& setTenantContext(const QueryDentryRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryDentryRequest& setTenantContext(QueryDentryRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dentryId_ = nullptr;
    std::shared_ptr<bool> includeSpace_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceId_ = nullptr;
    std::shared_ptr<QueryDentryRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

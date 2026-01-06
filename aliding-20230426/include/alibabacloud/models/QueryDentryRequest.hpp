// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
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

    virtual bool empty() const override { return this->dentryId_ == nullptr
        && this->includeSpace_ == nullptr && this->spaceId_ == nullptr && this->tenantContext_ == nullptr; };
    // dentryId Field Functions 
    bool hasDentryId() const { return this->dentryId_ != nullptr;};
    void deleteDentryId() { this->dentryId_ = nullptr;};
    inline string getDentryId() const { DARABONBA_PTR_GET_DEFAULT(dentryId_, "") };
    inline QueryDentryRequest& setDentryId(string dentryId) { DARABONBA_PTR_SET_VALUE(dentryId_, dentryId) };


    // includeSpace Field Functions 
    bool hasIncludeSpace() const { return this->includeSpace_ != nullptr;};
    void deleteIncludeSpace() { this->includeSpace_ = nullptr;};
    inline bool getIncludeSpace() const { DARABONBA_PTR_GET_DEFAULT(includeSpace_, false) };
    inline QueryDentryRequest& setIncludeSpace(bool includeSpace) { DARABONBA_PTR_SET_VALUE(includeSpace_, includeSpace) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string getSpaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline QueryDentryRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryDentryRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryDentryRequest::TenantContext) };
    inline QueryDentryRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryDentryRequest::TenantContext) };
    inline QueryDentryRequest& setTenantContext(const QueryDentryRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryDentryRequest& setTenantContext(QueryDentryRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> dentryId_ {};
    shared_ptr<bool> includeSpace_ {};
    // This parameter is required.
    shared_ptr<string> spaceId_ {};
    shared_ptr<QueryDentryRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    ListPermissionsRequest() = default ;
    ListPermissionsRequest(const ListPermissionsRequest &) = default ;
    ListPermissionsRequest(ListPermissionsRequest &&) = default ;
    ListPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionsRequest() = default ;
    ListPermissionsRequest& operator=(const ListPermissionsRequest &) = default ;
    ListPermissionsRequest& operator=(ListPermissionsRequest &&) = default ;
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

    class Option : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Option& obj) { 
        DARABONBA_PTR_TO_JSON(FilterRoleIds, filterRoleIds_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, Option& obj) { 
        DARABONBA_PTR_FROM_JSON(FilterRoleIds, filterRoleIds_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      };
      Option() = default ;
      Option(const Option &) = default ;
      Option(Option &&) = default ;
      Option(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Option() = default ;
      Option& operator=(const Option &) = default ;
      Option& operator=(Option &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->filterRoleIds_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
      // filterRoleIds Field Functions 
      bool hasFilterRoleIds() const { return this->filterRoleIds_ != nullptr;};
      void deleteFilterRoleIds() { this->filterRoleIds_ = nullptr;};
      inline const vector<string> & getFilterRoleIds() const { DARABONBA_PTR_GET_CONST(filterRoleIds_, vector<string>) };
      inline vector<string> getFilterRoleIds() { DARABONBA_PTR_GET(filterRoleIds_, vector<string>) };
      inline Option& setFilterRoleIds(const vector<string> & filterRoleIds) { DARABONBA_PTR_SET_VALUE(filterRoleIds_, filterRoleIds) };
      inline Option& setFilterRoleIds(vector<string> && filterRoleIds) { DARABONBA_PTR_SET_RVALUE(filterRoleIds_, filterRoleIds) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Option& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Option& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    protected:
      shared_ptr<vector<string>> filterRoleIds_ {};
      shared_ptr<int32_t> maxResults_ {};
      shared_ptr<string> nextToken_ {};
    };

    virtual bool empty() const override { return this->dentryUuid_ == nullptr
        && this->option_ == nullptr && this->tenantContext_ == nullptr; };
    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string getDentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline ListPermissionsRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const ListPermissionsRequest::Option & getOption() const { DARABONBA_PTR_GET_CONST(option_, ListPermissionsRequest::Option) };
    inline ListPermissionsRequest::Option getOption() { DARABONBA_PTR_GET(option_, ListPermissionsRequest::Option) };
    inline ListPermissionsRequest& setOption(const ListPermissionsRequest::Option & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline ListPermissionsRequest& setOption(ListPermissionsRequest::Option && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const ListPermissionsRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, ListPermissionsRequest::TenantContext) };
    inline ListPermissionsRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, ListPermissionsRequest::TenantContext) };
    inline ListPermissionsRequest& setTenantContext(const ListPermissionsRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline ListPermissionsRequest& setTenantContext(ListPermissionsRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> dentryUuid_ {};
    shared_ptr<ListPermissionsRequest::Option> option_ {};
    shared_ptr<ListPermissionsRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

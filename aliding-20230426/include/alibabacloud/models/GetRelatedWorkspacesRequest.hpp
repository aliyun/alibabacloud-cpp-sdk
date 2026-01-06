// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRELATEDWORKSPACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRELATEDWORKSPACESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetRelatedWorkspacesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRelatedWorkspacesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IncludeRecent, includeRecent_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetRelatedWorkspacesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IncludeRecent, includeRecent_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetRelatedWorkspacesRequest() = default ;
    GetRelatedWorkspacesRequest(const GetRelatedWorkspacesRequest &) = default ;
    GetRelatedWorkspacesRequest(GetRelatedWorkspacesRequest &&) = default ;
    GetRelatedWorkspacesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRelatedWorkspacesRequest() = default ;
    GetRelatedWorkspacesRequest& operator=(const GetRelatedWorkspacesRequest &) = default ;
    GetRelatedWorkspacesRequest& operator=(GetRelatedWorkspacesRequest &&) = default ;
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

    virtual bool empty() const override { return this->includeRecent_ == nullptr
        && this->tenantContext_ == nullptr; };
    // includeRecent Field Functions 
    bool hasIncludeRecent() const { return this->includeRecent_ != nullptr;};
    void deleteIncludeRecent() { this->includeRecent_ = nullptr;};
    inline bool getIncludeRecent() const { DARABONBA_PTR_GET_DEFAULT(includeRecent_, false) };
    inline GetRelatedWorkspacesRequest& setIncludeRecent(bool includeRecent) { DARABONBA_PTR_SET_VALUE(includeRecent_, includeRecent) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetRelatedWorkspacesRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetRelatedWorkspacesRequest::TenantContext) };
    inline GetRelatedWorkspacesRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetRelatedWorkspacesRequest::TenantContext) };
    inline GetRelatedWorkspacesRequest& setTenantContext(const GetRelatedWorkspacesRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetRelatedWorkspacesRequest& setTenantContext(GetRelatedWorkspacesRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    shared_ptr<bool> includeRecent_ {};
    shared_ptr<GetRelatedWorkspacesRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

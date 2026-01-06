// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMINEWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMINEWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMineWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMineWorkspaceRequest& obj) { 
      DARABONBA_ANY_TO_JSON(Request, request_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetMineWorkspaceRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(Request, request_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetMineWorkspaceRequest() = default ;
    GetMineWorkspaceRequest(const GetMineWorkspaceRequest &) = default ;
    GetMineWorkspaceRequest(GetMineWorkspaceRequest &&) = default ;
    GetMineWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMineWorkspaceRequest() = default ;
    GetMineWorkspaceRequest& operator=(const GetMineWorkspaceRequest &) = default ;
    GetMineWorkspaceRequest& operator=(GetMineWorkspaceRequest &&) = default ;
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

    virtual bool empty() const override { return this->request_ == nullptr
        && this->tenantContext_ == nullptr; };
    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline     const Darabonba::Json & getRequest() const { DARABONBA_GET(request_) };
    Darabonba::Json & getRequest() { DARABONBA_GET(request_) };
    inline GetMineWorkspaceRequest& setRequest(const Darabonba::Json & request) { DARABONBA_SET_VALUE(request_, request) };
    inline GetMineWorkspaceRequest& setRequest(Darabonba::Json && request) { DARABONBA_SET_RVALUE(request_, request) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetMineWorkspaceRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetMineWorkspaceRequest::TenantContext) };
    inline GetMineWorkspaceRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetMineWorkspaceRequest::TenantContext) };
    inline GetMineWorkspaceRequest& setTenantContext(const GetMineWorkspaceRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetMineWorkspaceRequest& setTenantContext(GetMineWorkspaceRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    Darabonba::Json request_ {};
    shared_ptr<GetMineWorkspaceRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

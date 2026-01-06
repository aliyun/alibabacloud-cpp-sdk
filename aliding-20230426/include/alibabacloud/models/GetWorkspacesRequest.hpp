// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACESREQUEST_HPP_
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
  class GetWorkspacesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspacesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WorkspaceIds, workspaceIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspacesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WorkspaceIds, workspaceIds_);
    };
    GetWorkspacesRequest() = default ;
    GetWorkspacesRequest(const GetWorkspacesRequest &) = default ;
    GetWorkspacesRequest(GetWorkspacesRequest &&) = default ;
    GetWorkspacesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspacesRequest() = default ;
    GetWorkspacesRequest& operator=(const GetWorkspacesRequest &) = default ;
    GetWorkspacesRequest& operator=(GetWorkspacesRequest &&) = default ;
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
        DARABONBA_PTR_TO_JSON(WithPermissionRole, withPermissionRole_);
      };
      friend void from_json(const Darabonba::Json& j, Option& obj) { 
        DARABONBA_PTR_FROM_JSON(WithPermissionRole, withPermissionRole_);
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
      virtual bool empty() const override { return this->withPermissionRole_ == nullptr; };
      // withPermissionRole Field Functions 
      bool hasWithPermissionRole() const { return this->withPermissionRole_ != nullptr;};
      void deleteWithPermissionRole() { this->withPermissionRole_ = nullptr;};
      inline bool getWithPermissionRole() const { DARABONBA_PTR_GET_DEFAULT(withPermissionRole_, false) };
      inline Option& setWithPermissionRole(bool withPermissionRole) { DARABONBA_PTR_SET_VALUE(withPermissionRole_, withPermissionRole) };


    protected:
      shared_ptr<bool> withPermissionRole_ {};
    };

    virtual bool empty() const override { return this->option_ == nullptr
        && this->tenantContext_ == nullptr && this->workspaceIds_ == nullptr; };
    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const GetWorkspacesRequest::Option & getOption() const { DARABONBA_PTR_GET_CONST(option_, GetWorkspacesRequest::Option) };
    inline GetWorkspacesRequest::Option getOption() { DARABONBA_PTR_GET(option_, GetWorkspacesRequest::Option) };
    inline GetWorkspacesRequest& setOption(const GetWorkspacesRequest::Option & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline GetWorkspacesRequest& setOption(GetWorkspacesRequest::Option && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetWorkspacesRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetWorkspacesRequest::TenantContext) };
    inline GetWorkspacesRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetWorkspacesRequest::TenantContext) };
    inline GetWorkspacesRequest& setTenantContext(const GetWorkspacesRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetWorkspacesRequest& setTenantContext(GetWorkspacesRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workspaceIds Field Functions 
    bool hasWorkspaceIds() const { return this->workspaceIds_ != nullptr;};
    void deleteWorkspaceIds() { this->workspaceIds_ = nullptr;};
    inline const vector<string> & getWorkspaceIds() const { DARABONBA_PTR_GET_CONST(workspaceIds_, vector<string>) };
    inline vector<string> getWorkspaceIds() { DARABONBA_PTR_GET(workspaceIds_, vector<string>) };
    inline GetWorkspacesRequest& setWorkspaceIds(const vector<string> & workspaceIds) { DARABONBA_PTR_SET_VALUE(workspaceIds_, workspaceIds) };
    inline GetWorkspacesRequest& setWorkspaceIds(vector<string> && workspaceIds) { DARABONBA_PTR_SET_RVALUE(workspaceIds_, workspaceIds) };


  protected:
    shared_ptr<GetWorkspacesRequest::Option> option_ {};
    shared_ptr<GetWorkspacesRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<vector<string>> workspaceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

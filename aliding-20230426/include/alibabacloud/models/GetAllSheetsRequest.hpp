// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALLSHEETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALLSHEETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetAllSheetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAllSheetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WorkbookId, workbookId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAllSheetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WorkbookId, workbookId_);
    };
    GetAllSheetsRequest() = default ;
    GetAllSheetsRequest(const GetAllSheetsRequest &) = default ;
    GetAllSheetsRequest(GetAllSheetsRequest &&) = default ;
    GetAllSheetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAllSheetsRequest() = default ;
    GetAllSheetsRequest& operator=(const GetAllSheetsRequest &) = default ;
    GetAllSheetsRequest& operator=(GetAllSheetsRequest &&) = default ;
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
        && this->workbookId_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetAllSheetsRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetAllSheetsRequest::TenantContext) };
    inline GetAllSheetsRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetAllSheetsRequest::TenantContext) };
    inline GetAllSheetsRequest& setTenantContext(const GetAllSheetsRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetAllSheetsRequest& setTenantContext(GetAllSheetsRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workbookId Field Functions 
    bool hasWorkbookId() const { return this->workbookId_ != nullptr;};
    void deleteWorkbookId() { this->workbookId_ = nullptr;};
    inline string getWorkbookId() const { DARABONBA_PTR_GET_DEFAULT(workbookId_, "") };
    inline GetAllSheetsRequest& setWorkbookId(string workbookId) { DARABONBA_PTR_SET_VALUE(workbookId_, workbookId) };


  protected:
    shared_ptr<GetAllSheetsRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> workbookId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

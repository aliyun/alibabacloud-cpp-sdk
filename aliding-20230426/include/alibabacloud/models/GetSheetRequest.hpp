// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSHEETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSHEETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSheetRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetSheetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSheetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SheetId, sheetId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WorkbookId, workbookId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSheetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SheetId, sheetId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WorkbookId, workbookId_);
    };
    GetSheetRequest() = default ;
    GetSheetRequest(const GetSheetRequest &) = default ;
    GetSheetRequest(GetSheetRequest &&) = default ;
    GetSheetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSheetRequest() = default ;
    GetSheetRequest& operator=(const GetSheetRequest &) = default ;
    GetSheetRequest& operator=(GetSheetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sheetId_ == nullptr
        && return this->tenantContext_ == nullptr && return this->workbookId_ == nullptr; };
    // sheetId Field Functions 
    bool hasSheetId() const { return this->sheetId_ != nullptr;};
    void deleteSheetId() { this->sheetId_ = nullptr;};
    inline string sheetId() const { DARABONBA_PTR_GET_DEFAULT(sheetId_, "") };
    inline GetSheetRequest& setSheetId(string sheetId) { DARABONBA_PTR_SET_VALUE(sheetId_, sheetId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetSheetRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetSheetRequestTenantContext) };
    inline GetSheetRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetSheetRequestTenantContext) };
    inline GetSheetRequest& setTenantContext(const GetSheetRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetSheetRequest& setTenantContext(GetSheetRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workbookId Field Functions 
    bool hasWorkbookId() const { return this->workbookId_ != nullptr;};
    void deleteWorkbookId() { this->workbookId_ = nullptr;};
    inline string workbookId() const { DARABONBA_PTR_GET_DEFAULT(workbookId_, "") };
    inline GetSheetRequest& setWorkbookId(string workbookId) { DARABONBA_PTR_SET_VALUE(workbookId_, workbookId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> sheetId_ = nullptr;
    std::shared_ptr<GetSheetRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workbookId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

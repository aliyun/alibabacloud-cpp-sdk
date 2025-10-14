// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRANGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRANGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRangeRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetRangeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRangeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RangeAddress, rangeAddress_);
      DARABONBA_PTR_TO_JSON(Select, select_);
      DARABONBA_PTR_TO_JSON(SheetId, sheetId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WorkbookId, workbookId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRangeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RangeAddress, rangeAddress_);
      DARABONBA_PTR_FROM_JSON(Select, select_);
      DARABONBA_PTR_FROM_JSON(SheetId, sheetId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WorkbookId, workbookId_);
    };
    GetRangeRequest() = default ;
    GetRangeRequest(const GetRangeRequest &) = default ;
    GetRangeRequest(GetRangeRequest &&) = default ;
    GetRangeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRangeRequest() = default ;
    GetRangeRequest& operator=(const GetRangeRequest &) = default ;
    GetRangeRequest& operator=(GetRangeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rangeAddress_ == nullptr
        && return this->select_ == nullptr && return this->sheetId_ == nullptr && return this->tenantContext_ == nullptr && return this->workbookId_ == nullptr; };
    // rangeAddress Field Functions 
    bool hasRangeAddress() const { return this->rangeAddress_ != nullptr;};
    void deleteRangeAddress() { this->rangeAddress_ = nullptr;};
    inline string rangeAddress() const { DARABONBA_PTR_GET_DEFAULT(rangeAddress_, "") };
    inline GetRangeRequest& setRangeAddress(string rangeAddress) { DARABONBA_PTR_SET_VALUE(rangeAddress_, rangeAddress) };


    // select Field Functions 
    bool hasSelect() const { return this->select_ != nullptr;};
    void deleteSelect() { this->select_ = nullptr;};
    inline string select() const { DARABONBA_PTR_GET_DEFAULT(select_, "") };
    inline GetRangeRequest& setSelect(string select) { DARABONBA_PTR_SET_VALUE(select_, select) };


    // sheetId Field Functions 
    bool hasSheetId() const { return this->sheetId_ != nullptr;};
    void deleteSheetId() { this->sheetId_ = nullptr;};
    inline string sheetId() const { DARABONBA_PTR_GET_DEFAULT(sheetId_, "") };
    inline GetRangeRequest& setSheetId(string sheetId) { DARABONBA_PTR_SET_VALUE(sheetId_, sheetId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetRangeRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetRangeRequestTenantContext) };
    inline GetRangeRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetRangeRequestTenantContext) };
    inline GetRangeRequest& setTenantContext(const GetRangeRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetRangeRequest& setTenantContext(GetRangeRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workbookId Field Functions 
    bool hasWorkbookId() const { return this->workbookId_ != nullptr;};
    void deleteWorkbookId() { this->workbookId_ = nullptr;};
    inline string workbookId() const { DARABONBA_PTR_GET_DEFAULT(workbookId_, "") };
    inline GetRangeRequest& setWorkbookId(string workbookId) { DARABONBA_PTR_SET_VALUE(workbookId_, workbookId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> rangeAddress_ = nullptr;
    std::shared_ptr<string> select_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sheetId_ = nullptr;
    std::shared_ptr<GetRangeRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workbookId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

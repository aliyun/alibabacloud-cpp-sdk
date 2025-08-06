// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETROWSVISIBILITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETROWSVISIBILITYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetRowsVisibilityRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SetRowsVisibilityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetRowsVisibilityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Row, row_);
      DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
      DARABONBA_PTR_TO_JSON(SheetId, sheetId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
      DARABONBA_PTR_TO_JSON(WorkbookId, workbookId_);
    };
    friend void from_json(const Darabonba::Json& j, SetRowsVisibilityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Row, row_);
      DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
      DARABONBA_PTR_FROM_JSON(SheetId, sheetId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
      DARABONBA_PTR_FROM_JSON(WorkbookId, workbookId_);
    };
    SetRowsVisibilityRequest() = default ;
    SetRowsVisibilityRequest(const SetRowsVisibilityRequest &) = default ;
    SetRowsVisibilityRequest(SetRowsVisibilityRequest &&) = default ;
    SetRowsVisibilityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetRowsVisibilityRequest() = default ;
    SetRowsVisibilityRequest& operator=(const SetRowsVisibilityRequest &) = default ;
    SetRowsVisibilityRequest& operator=(SetRowsVisibilityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->row_ != nullptr
        && this->rowCount_ != nullptr && this->sheetId_ != nullptr && this->tenantContext_ != nullptr && this->visibility_ != nullptr && this->workbookId_ != nullptr; };
    // row Field Functions 
    bool hasRow() const { return this->row_ != nullptr;};
    void deleteRow() { this->row_ = nullptr;};
    inline int64_t row() const { DARABONBA_PTR_GET_DEFAULT(row_, 0L) };
    inline SetRowsVisibilityRequest& setRow(int64_t row) { DARABONBA_PTR_SET_VALUE(row_, row) };


    // rowCount Field Functions 
    bool hasRowCount() const { return this->rowCount_ != nullptr;};
    void deleteRowCount() { this->rowCount_ = nullptr;};
    inline int64_t rowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
    inline SetRowsVisibilityRequest& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


    // sheetId Field Functions 
    bool hasSheetId() const { return this->sheetId_ != nullptr;};
    void deleteSheetId() { this->sheetId_ = nullptr;};
    inline string sheetId() const { DARABONBA_PTR_GET_DEFAULT(sheetId_, "") };
    inline SetRowsVisibilityRequest& setSheetId(string sheetId) { DARABONBA_PTR_SET_VALUE(sheetId_, sheetId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const SetRowsVisibilityRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, SetRowsVisibilityRequestTenantContext) };
    inline SetRowsVisibilityRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, SetRowsVisibilityRequestTenantContext) };
    inline SetRowsVisibilityRequest& setTenantContext(const SetRowsVisibilityRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline SetRowsVisibilityRequest& setTenantContext(SetRowsVisibilityRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string visibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline SetRowsVisibilityRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    // workbookId Field Functions 
    bool hasWorkbookId() const { return this->workbookId_ != nullptr;};
    void deleteWorkbookId() { this->workbookId_ = nullptr;};
    inline string workbookId() const { DARABONBA_PTR_GET_DEFAULT(workbookId_, "") };
    inline SetRowsVisibilityRequest& setWorkbookId(string workbookId) { DARABONBA_PTR_SET_VALUE(workbookId_, workbookId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> row_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> rowCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sheetId_ = nullptr;
    std::shared_ptr<SetRowsVisibilityRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> visibility_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workbookId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

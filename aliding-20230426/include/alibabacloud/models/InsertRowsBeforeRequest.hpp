// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTROWSBEFOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTROWSBEFOREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InsertRowsBeforeRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InsertRowsBeforeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertRowsBeforeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Row, row_);
      DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
      DARABONBA_PTR_TO_JSON(SheetId, sheetId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WorkbookId, workbookId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertRowsBeforeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Row, row_);
      DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
      DARABONBA_PTR_FROM_JSON(SheetId, sheetId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WorkbookId, workbookId_);
    };
    InsertRowsBeforeRequest() = default ;
    InsertRowsBeforeRequest(const InsertRowsBeforeRequest &) = default ;
    InsertRowsBeforeRequest(InsertRowsBeforeRequest &&) = default ;
    InsertRowsBeforeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertRowsBeforeRequest() = default ;
    InsertRowsBeforeRequest& operator=(const InsertRowsBeforeRequest &) = default ;
    InsertRowsBeforeRequest& operator=(InsertRowsBeforeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->row_ == nullptr
        && return this->rowCount_ == nullptr && return this->sheetId_ == nullptr && return this->tenantContext_ == nullptr && return this->workbookId_ == nullptr; };
    // row Field Functions 
    bool hasRow() const { return this->row_ != nullptr;};
    void deleteRow() { this->row_ = nullptr;};
    inline int64_t row() const { DARABONBA_PTR_GET_DEFAULT(row_, 0L) };
    inline InsertRowsBeforeRequest& setRow(int64_t row) { DARABONBA_PTR_SET_VALUE(row_, row) };


    // rowCount Field Functions 
    bool hasRowCount() const { return this->rowCount_ != nullptr;};
    void deleteRowCount() { this->rowCount_ = nullptr;};
    inline int64_t rowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
    inline InsertRowsBeforeRequest& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


    // sheetId Field Functions 
    bool hasSheetId() const { return this->sheetId_ != nullptr;};
    void deleteSheetId() { this->sheetId_ = nullptr;};
    inline string sheetId() const { DARABONBA_PTR_GET_DEFAULT(sheetId_, "") };
    inline InsertRowsBeforeRequest& setSheetId(string sheetId) { DARABONBA_PTR_SET_VALUE(sheetId_, sheetId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const InsertRowsBeforeRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, InsertRowsBeforeRequestTenantContext) };
    inline InsertRowsBeforeRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, InsertRowsBeforeRequestTenantContext) };
    inline InsertRowsBeforeRequest& setTenantContext(const InsertRowsBeforeRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline InsertRowsBeforeRequest& setTenantContext(InsertRowsBeforeRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workbookId Field Functions 
    bool hasWorkbookId() const { return this->workbookId_ != nullptr;};
    void deleteWorkbookId() { this->workbookId_ = nullptr;};
    inline string workbookId() const { DARABONBA_PTR_GET_DEFAULT(workbookId_, "") };
    inline InsertRowsBeforeRequest& setWorkbookId(string workbookId) { DARABONBA_PTR_SET_VALUE(workbookId_, workbookId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> row_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> rowCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sheetId_ = nullptr;
    std::shared_ptr<InsertRowsBeforeRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workbookId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

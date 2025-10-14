// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTCOLUMNSBEFOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTCOLUMNSBEFOREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InsertColumnsBeforeRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InsertColumnsBeforeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertColumnsBeforeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
      DARABONBA_PTR_TO_JSON(ColumnCount, columnCount_);
      DARABONBA_PTR_TO_JSON(SheetId, sheetId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WorkbookId, workbookId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertColumnsBeforeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
      DARABONBA_PTR_FROM_JSON(ColumnCount, columnCount_);
      DARABONBA_PTR_FROM_JSON(SheetId, sheetId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WorkbookId, workbookId_);
    };
    InsertColumnsBeforeRequest() = default ;
    InsertColumnsBeforeRequest(const InsertColumnsBeforeRequest &) = default ;
    InsertColumnsBeforeRequest(InsertColumnsBeforeRequest &&) = default ;
    InsertColumnsBeforeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertColumnsBeforeRequest() = default ;
    InsertColumnsBeforeRequest& operator=(const InsertColumnsBeforeRequest &) = default ;
    InsertColumnsBeforeRequest& operator=(InsertColumnsBeforeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->column_ == nullptr
        && return this->columnCount_ == nullptr && return this->sheetId_ == nullptr && return this->tenantContext_ == nullptr && return this->workbookId_ == nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline int64_t column() const { DARABONBA_PTR_GET_DEFAULT(column_, 0L) };
    inline InsertColumnsBeforeRequest& setColumn(int64_t column) { DARABONBA_PTR_SET_VALUE(column_, column) };


    // columnCount Field Functions 
    bool hasColumnCount() const { return this->columnCount_ != nullptr;};
    void deleteColumnCount() { this->columnCount_ = nullptr;};
    inline int64_t columnCount() const { DARABONBA_PTR_GET_DEFAULT(columnCount_, 0L) };
    inline InsertColumnsBeforeRequest& setColumnCount(int64_t columnCount) { DARABONBA_PTR_SET_VALUE(columnCount_, columnCount) };


    // sheetId Field Functions 
    bool hasSheetId() const { return this->sheetId_ != nullptr;};
    void deleteSheetId() { this->sheetId_ = nullptr;};
    inline string sheetId() const { DARABONBA_PTR_GET_DEFAULT(sheetId_, "") };
    inline InsertColumnsBeforeRequest& setSheetId(string sheetId) { DARABONBA_PTR_SET_VALUE(sheetId_, sheetId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const InsertColumnsBeforeRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, InsertColumnsBeforeRequestTenantContext) };
    inline InsertColumnsBeforeRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, InsertColumnsBeforeRequestTenantContext) };
    inline InsertColumnsBeforeRequest& setTenantContext(const InsertColumnsBeforeRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline InsertColumnsBeforeRequest& setTenantContext(InsertColumnsBeforeRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workbookId Field Functions 
    bool hasWorkbookId() const { return this->workbookId_ != nullptr;};
    void deleteWorkbookId() { this->workbookId_ = nullptr;};
    inline string workbookId() const { DARABONBA_PTR_GET_DEFAULT(workbookId_, "") };
    inline InsertColumnsBeforeRequest& setWorkbookId(string workbookId) { DARABONBA_PTR_SET_VALUE(workbookId_, workbookId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> column_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> columnCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sheetId_ = nullptr;
    std::shared_ptr<InsertColumnsBeforeRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workbookId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

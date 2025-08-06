// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTCOLUMNSBEFORESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTCOLUMNSBEFORESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InsertColumnsBeforeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertColumnsBeforeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
      DARABONBA_PTR_TO_JSON(ColumnCount, columnCount_);
      DARABONBA_PTR_TO_JSON(SheetId, sheetId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(WorkbookId, workbookId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertColumnsBeforeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
      DARABONBA_PTR_FROM_JSON(ColumnCount, columnCount_);
      DARABONBA_PTR_FROM_JSON(SheetId, sheetId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(WorkbookId, workbookId_);
    };
    InsertColumnsBeforeShrinkRequest() = default ;
    InsertColumnsBeforeShrinkRequest(const InsertColumnsBeforeShrinkRequest &) = default ;
    InsertColumnsBeforeShrinkRequest(InsertColumnsBeforeShrinkRequest &&) = default ;
    InsertColumnsBeforeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertColumnsBeforeShrinkRequest() = default ;
    InsertColumnsBeforeShrinkRequest& operator=(const InsertColumnsBeforeShrinkRequest &) = default ;
    InsertColumnsBeforeShrinkRequest& operator=(InsertColumnsBeforeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->column_ != nullptr
        && this->columnCount_ != nullptr && this->sheetId_ != nullptr && this->tenantContextShrink_ != nullptr && this->workbookId_ != nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline int64_t column() const { DARABONBA_PTR_GET_DEFAULT(column_, 0L) };
    inline InsertColumnsBeforeShrinkRequest& setColumn(int64_t column) { DARABONBA_PTR_SET_VALUE(column_, column) };


    // columnCount Field Functions 
    bool hasColumnCount() const { return this->columnCount_ != nullptr;};
    void deleteColumnCount() { this->columnCount_ = nullptr;};
    inline int64_t columnCount() const { DARABONBA_PTR_GET_DEFAULT(columnCount_, 0L) };
    inline InsertColumnsBeforeShrinkRequest& setColumnCount(int64_t columnCount) { DARABONBA_PTR_SET_VALUE(columnCount_, columnCount) };


    // sheetId Field Functions 
    bool hasSheetId() const { return this->sheetId_ != nullptr;};
    void deleteSheetId() { this->sheetId_ = nullptr;};
    inline string sheetId() const { DARABONBA_PTR_GET_DEFAULT(sheetId_, "") };
    inline InsertColumnsBeforeShrinkRequest& setSheetId(string sheetId) { DARABONBA_PTR_SET_VALUE(sheetId_, sheetId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline InsertColumnsBeforeShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // workbookId Field Functions 
    bool hasWorkbookId() const { return this->workbookId_ != nullptr;};
    void deleteWorkbookId() { this->workbookId_ = nullptr;};
    inline string workbookId() const { DARABONBA_PTR_GET_DEFAULT(workbookId_, "") };
    inline InsertColumnsBeforeShrinkRequest& setWorkbookId(string workbookId) { DARABONBA_PTR_SET_VALUE(workbookId_, workbookId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> column_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> columnCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sheetId_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workbookId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

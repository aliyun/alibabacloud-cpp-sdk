// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETROWSVISIBILITYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETROWSVISIBILITYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SetRowsVisibilityShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetRowsVisibilityShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Row, row_);
      DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
      DARABONBA_PTR_TO_JSON(SheetId, sheetId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
      DARABONBA_PTR_TO_JSON(WorkbookId, workbookId_);
    };
    friend void from_json(const Darabonba::Json& j, SetRowsVisibilityShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Row, row_);
      DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
      DARABONBA_PTR_FROM_JSON(SheetId, sheetId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
      DARABONBA_PTR_FROM_JSON(WorkbookId, workbookId_);
    };
    SetRowsVisibilityShrinkRequest() = default ;
    SetRowsVisibilityShrinkRequest(const SetRowsVisibilityShrinkRequest &) = default ;
    SetRowsVisibilityShrinkRequest(SetRowsVisibilityShrinkRequest &&) = default ;
    SetRowsVisibilityShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetRowsVisibilityShrinkRequest() = default ;
    SetRowsVisibilityShrinkRequest& operator=(const SetRowsVisibilityShrinkRequest &) = default ;
    SetRowsVisibilityShrinkRequest& operator=(SetRowsVisibilityShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->row_ == nullptr
        && this->rowCount_ == nullptr && this->sheetId_ == nullptr && this->tenantContextShrink_ == nullptr && this->visibility_ == nullptr && this->workbookId_ == nullptr; };
    // row Field Functions 
    bool hasRow() const { return this->row_ != nullptr;};
    void deleteRow() { this->row_ = nullptr;};
    inline int64_t getRow() const { DARABONBA_PTR_GET_DEFAULT(row_, 0L) };
    inline SetRowsVisibilityShrinkRequest& setRow(int64_t row) { DARABONBA_PTR_SET_VALUE(row_, row) };


    // rowCount Field Functions 
    bool hasRowCount() const { return this->rowCount_ != nullptr;};
    void deleteRowCount() { this->rowCount_ = nullptr;};
    inline int64_t getRowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
    inline SetRowsVisibilityShrinkRequest& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


    // sheetId Field Functions 
    bool hasSheetId() const { return this->sheetId_ != nullptr;};
    void deleteSheetId() { this->sheetId_ = nullptr;};
    inline string getSheetId() const { DARABONBA_PTR_GET_DEFAULT(sheetId_, "") };
    inline SetRowsVisibilityShrinkRequest& setSheetId(string sheetId) { DARABONBA_PTR_SET_VALUE(sheetId_, sheetId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline SetRowsVisibilityShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline SetRowsVisibilityShrinkRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    // workbookId Field Functions 
    bool hasWorkbookId() const { return this->workbookId_ != nullptr;};
    void deleteWorkbookId() { this->workbookId_ = nullptr;};
    inline string getWorkbookId() const { DARABONBA_PTR_GET_DEFAULT(workbookId_, "") };
    inline SetRowsVisibilityShrinkRequest& setWorkbookId(string workbookId) { DARABONBA_PTR_SET_VALUE(workbookId_, workbookId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> row_ {};
    // This parameter is required.
    shared_ptr<int64_t> rowCount_ {};
    // This parameter is required.
    shared_ptr<string> sheetId_ {};
    shared_ptr<string> tenantContextShrink_ {};
    // This parameter is required.
    shared_ptr<string> visibility_ {};
    // This parameter is required.
    shared_ptr<string> workbookId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROWSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROWSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteRowsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRowsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Row, row_);
      DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
      DARABONBA_PTR_TO_JSON(SheetId, sheetId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WorkbookId, workbookId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRowsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Row, row_);
      DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
      DARABONBA_PTR_FROM_JSON(SheetId, sheetId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WorkbookId, workbookId_);
    };
    DeleteRowsRequest() = default ;
    DeleteRowsRequest(const DeleteRowsRequest &) = default ;
    DeleteRowsRequest(DeleteRowsRequest &&) = default ;
    DeleteRowsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRowsRequest() = default ;
    DeleteRowsRequest& operator=(const DeleteRowsRequest &) = default ;
    DeleteRowsRequest& operator=(DeleteRowsRequest &&) = default ;
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

    virtual bool empty() const override { return this->row_ == nullptr
        && this->rowCount_ == nullptr && this->sheetId_ == nullptr && this->tenantContext_ == nullptr && this->workbookId_ == nullptr; };
    // row Field Functions 
    bool hasRow() const { return this->row_ != nullptr;};
    void deleteRow() { this->row_ = nullptr;};
    inline int64_t getRow() const { DARABONBA_PTR_GET_DEFAULT(row_, 0L) };
    inline DeleteRowsRequest& setRow(int64_t row) { DARABONBA_PTR_SET_VALUE(row_, row) };


    // rowCount Field Functions 
    bool hasRowCount() const { return this->rowCount_ != nullptr;};
    void deleteRowCount() { this->rowCount_ = nullptr;};
    inline int64_t getRowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
    inline DeleteRowsRequest& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


    // sheetId Field Functions 
    bool hasSheetId() const { return this->sheetId_ != nullptr;};
    void deleteSheetId() { this->sheetId_ = nullptr;};
    inline string getSheetId() const { DARABONBA_PTR_GET_DEFAULT(sheetId_, "") };
    inline DeleteRowsRequest& setSheetId(string sheetId) { DARABONBA_PTR_SET_VALUE(sheetId_, sheetId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DeleteRowsRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DeleteRowsRequest::TenantContext) };
    inline DeleteRowsRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, DeleteRowsRequest::TenantContext) };
    inline DeleteRowsRequest& setTenantContext(const DeleteRowsRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DeleteRowsRequest& setTenantContext(DeleteRowsRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workbookId Field Functions 
    bool hasWorkbookId() const { return this->workbookId_ != nullptr;};
    void deleteWorkbookId() { this->workbookId_ = nullptr;};
    inline string getWorkbookId() const { DARABONBA_PTR_GET_DEFAULT(workbookId_, "") };
    inline DeleteRowsRequest& setWorkbookId(string workbookId) { DARABONBA_PTR_SET_VALUE(workbookId_, workbookId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> row_ {};
    // This parameter is required.
    shared_ptr<int64_t> rowCount_ {};
    // This parameter is required.
    shared_ptr<string> sheetId_ {};
    shared_ptr<DeleteRowsRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> workbookId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

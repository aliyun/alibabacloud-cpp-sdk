// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAIMPORTSQLPRECHECKDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAIMPORTSQLPRECHECKDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDataImportSQLPreCheckDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataImportSQLPreCheckDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(PageNumer, pageNumer_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataImportSQLPreCheckDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(PageNumer, pageNumer_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListDataImportSQLPreCheckDetailRequest() = default ;
    ListDataImportSQLPreCheckDetailRequest(const ListDataImportSQLPreCheckDetailRequest &) = default ;
    ListDataImportSQLPreCheckDetailRequest(ListDataImportSQLPreCheckDetailRequest &&) = default ;
    ListDataImportSQLPreCheckDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataImportSQLPreCheckDetailRequest() = default ;
    ListDataImportSQLPreCheckDetailRequest& operator=(const ListDataImportSQLPreCheckDetailRequest &) = default ;
    ListDataImportSQLPreCheckDetailRequest& operator=(ListDataImportSQLPreCheckDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->pageNumer_ == nullptr && this->pageSize_ == nullptr && this->sqlType_ == nullptr && this->statusCode_ == nullptr && this->tid_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ListDataImportSQLPreCheckDetailRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // pageNumer Field Functions 
    bool hasPageNumer() const { return this->pageNumer_ != nullptr;};
    void deletePageNumer() { this->pageNumer_ = nullptr;};
    inline int64_t getPageNumer() const { DARABONBA_PTR_GET_DEFAULT(pageNumer_, 0L) };
    inline ListDataImportSQLPreCheckDetailRequest& setPageNumer(int64_t pageNumer) { DARABONBA_PTR_SET_VALUE(pageNumer_, pageNumer) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListDataImportSQLPreCheckDetailRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline ListDataImportSQLPreCheckDetailRequest& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
    inline ListDataImportSQLPreCheckDetailRequest& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListDataImportSQLPreCheckDetailRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ticket ID. You can call the [ListOrders](https://help.aliyun.com/document_detail/144643.html) operation to query the ticket ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> orderId_ {};
    // The page number. Pages start from page 1.
    shared_ptr<int64_t> pageNumer_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The type of the SQL statement. Valid values:
    // 
    // *   **SELECT**
    // *   **INSERT**
    // *   **DELETE**
    // *   **CREATE_TABLE**
    // 
    // > You can log on to the Data Management (DMS) console and choose **Security and Specifications** > **Operation Audit** in the top navigation bar to view more types of SQL statements.
    shared_ptr<string> sqlType_ {};
    // The state of the ticket. If you leave this parameter empty, all the states are queried by default. Valid values:
    // 
    // *   **INIT**: The ticket is being initialized.
    // *   **RUNNING**: The ticket is in progress.
    // *   **SUCCESS**: The ticket is complete.
    // *   **TIMEOUT**: The ticket is skipped due to timeout.
    // *   **FAIL**: The ticket fails.
    shared_ptr<string> statusCode_ {};
    // The tenant ID. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

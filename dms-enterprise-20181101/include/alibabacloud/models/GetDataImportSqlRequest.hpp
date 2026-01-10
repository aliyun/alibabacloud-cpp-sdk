// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAIMPORTSQLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATAIMPORTSQLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataImportSQLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataImportSQLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataImportSQLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetDataImportSQLRequest() = default ;
    GetDataImportSQLRequest(const GetDataImportSQLRequest &) = default ;
    GetDataImportSQLRequest(GetDataImportSQLRequest &&) = default ;
    GetDataImportSQLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataImportSQLRequest() = default ;
    GetDataImportSQLRequest& operator=(const GetDataImportSQLRequest &) = default ;
    GetDataImportSQLRequest& operator=(GetDataImportSQLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->sqlId_ == nullptr && this->tid_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline GetDataImportSQLRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline int64_t getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, 0L) };
    inline GetDataImportSQLRequest& setSqlId(int64_t sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetDataImportSQLRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ticket ID. You can call the [ListOrders](https://help.aliyun.com/document_detail/144643.html) operation to query the ticket ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> orderId_ {};
    // The SQL ID. You can call the ListDataImportSQLPreCheckDetail operation to query the SQL ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> sqlId_ {};
    // The tenant ID. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

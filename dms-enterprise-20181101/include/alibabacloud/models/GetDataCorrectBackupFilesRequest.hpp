// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACORRECTBACKUPFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATACORRECTBACKUPFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCorrectBackupFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCorrectBackupFilesRequest& obj) { 
      DARABONBA_ANY_TO_JSON(ActionDetail, actionDetail_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCorrectBackupFilesRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(ActionDetail, actionDetail_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetDataCorrectBackupFilesRequest() = default ;
    GetDataCorrectBackupFilesRequest(const GetDataCorrectBackupFilesRequest &) = default ;
    GetDataCorrectBackupFilesRequest(GetDataCorrectBackupFilesRequest &&) = default ;
    GetDataCorrectBackupFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCorrectBackupFilesRequest() = default ;
    GetDataCorrectBackupFilesRequest& operator=(const GetDataCorrectBackupFilesRequest &) = default ;
    GetDataCorrectBackupFilesRequest& operator=(GetDataCorrectBackupFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionDetail_ != nullptr
        && this->orderId_ != nullptr && this->tid_ != nullptr; };
    // actionDetail Field Functions 
    bool hasActionDetail() const { return this->actionDetail_ != nullptr;};
    void deleteActionDetail() { this->actionDetail_ = nullptr;};
    inline     const Darabonba::Json & actionDetail() const { DARABONBA_GET(actionDetail_) };
    Darabonba::Json & actionDetail() { DARABONBA_GET(actionDetail_) };
    inline GetDataCorrectBackupFilesRequest& setActionDetail(const Darabonba::Json & actionDetail) { DARABONBA_SET_VALUE(actionDetail_, actionDetail) };
    inline GetDataCorrectBackupFilesRequest& setActionDetail(Darabonba::Json & actionDetail) { DARABONBA_SET_RVALUE(actionDetail_, actionDetail) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline GetDataCorrectBackupFilesRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetDataCorrectBackupFilesRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The parameters that are required to perform the operation. You do not need to specify this parameter.
    Darabonba::Json actionDetail_ = nullptr;
    // The ID of the ticket. You can call the [ListOrders](https://help.aliyun.com/document_detail/144643.html) operation to obtain the ticket ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

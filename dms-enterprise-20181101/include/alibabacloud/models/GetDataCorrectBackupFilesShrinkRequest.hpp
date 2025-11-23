// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACORRECTBACKUPFILESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATACORRECTBACKUPFILESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCorrectBackupFilesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCorrectBackupFilesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionDetail, actionDetailShrink_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCorrectBackupFilesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionDetail, actionDetailShrink_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetDataCorrectBackupFilesShrinkRequest() = default ;
    GetDataCorrectBackupFilesShrinkRequest(const GetDataCorrectBackupFilesShrinkRequest &) = default ;
    GetDataCorrectBackupFilesShrinkRequest(GetDataCorrectBackupFilesShrinkRequest &&) = default ;
    GetDataCorrectBackupFilesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCorrectBackupFilesShrinkRequest() = default ;
    GetDataCorrectBackupFilesShrinkRequest& operator=(const GetDataCorrectBackupFilesShrinkRequest &) = default ;
    GetDataCorrectBackupFilesShrinkRequest& operator=(GetDataCorrectBackupFilesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionDetailShrink_ == nullptr
        && return this->orderId_ == nullptr && return this->tid_ == nullptr; };
    // actionDetailShrink Field Functions 
    bool hasActionDetailShrink() const { return this->actionDetailShrink_ != nullptr;};
    void deleteActionDetailShrink() { this->actionDetailShrink_ = nullptr;};
    inline string actionDetailShrink() const { DARABONBA_PTR_GET_DEFAULT(actionDetailShrink_, "") };
    inline GetDataCorrectBackupFilesShrinkRequest& setActionDetailShrink(string actionDetailShrink) { DARABONBA_PTR_SET_VALUE(actionDetailShrink_, actionDetailShrink) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline GetDataCorrectBackupFilesShrinkRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetDataCorrectBackupFilesShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The parameters that are required to perform the operation. You do not need to specify this parameter.
    std::shared_ptr<string> actionDetailShrink_ = nullptr;
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

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SKIPDATACORRECTROWCHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SKIPDATACORRECTROWCHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SkipDataCorrectRowCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SkipDataCorrectRowCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, SkipDataCorrectRowCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    SkipDataCorrectRowCheckRequest() = default ;
    SkipDataCorrectRowCheckRequest(const SkipDataCorrectRowCheckRequest &) = default ;
    SkipDataCorrectRowCheckRequest(SkipDataCorrectRowCheckRequest &&) = default ;
    SkipDataCorrectRowCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SkipDataCorrectRowCheckRequest() = default ;
    SkipDataCorrectRowCheckRequest& operator=(const SkipDataCorrectRowCheckRequest &) = default ;
    SkipDataCorrectRowCheckRequest& operator=(SkipDataCorrectRowCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->realLoginUserUid_ == nullptr && this->reason_ == nullptr && this->tid_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline SkipDataCorrectRowCheckRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string getRealLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline SkipDataCorrectRowCheckRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline SkipDataCorrectRowCheckRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline SkipDataCorrectRowCheckRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ticket ID. You can call the [ListOrders](https://help.aliyun.com/document_detail/144643.html) operation to obtain the ticket ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> orderId_ {};
    shared_ptr<string> realLoginUserUid_ {};
    // The reason for skipping the verification on the number of rows in the precheck for data change.
    // 
    // This parameter is required.
    shared_ptr<string> reason_ {};
    // The tenant ID. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COOPERATORSYNCPAYSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COOPERATORSYNCPAYSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CooperatorSyncPayStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CooperatorSyncPayStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cooperator_order_id, cooperatorOrderId_);
      DARABONBA_PTR_TO_JSON(cooperator_pay_no, cooperatorPayNo_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
      DARABONBA_PTR_TO_JSON(pay_time, payTime_);
    };
    friend void from_json(const Darabonba::Json& j, CooperatorSyncPayStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cooperator_order_id, cooperatorOrderId_);
      DARABONBA_PTR_FROM_JSON(cooperator_pay_no, cooperatorPayNo_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
      DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
    };
    CooperatorSyncPayStatusRequest() = default ;
    CooperatorSyncPayStatusRequest(const CooperatorSyncPayStatusRequest &) = default ;
    CooperatorSyncPayStatusRequest(CooperatorSyncPayStatusRequest &&) = default ;
    CooperatorSyncPayStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CooperatorSyncPayStatusRequest() = default ;
    CooperatorSyncPayStatusRequest& operator=(const CooperatorSyncPayStatusRequest &) = default ;
    CooperatorSyncPayStatusRequest& operator=(CooperatorSyncPayStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cooperatorOrderId_ != nullptr
        && this->cooperatorPayNo_ != nullptr && this->orderId_ != nullptr && this->payStatus_ != nullptr && this->payTime_ != nullptr; };
    // cooperatorOrderId Field Functions 
    bool hasCooperatorOrderId() const { return this->cooperatorOrderId_ != nullptr;};
    void deleteCooperatorOrderId() { this->cooperatorOrderId_ = nullptr;};
    inline string cooperatorOrderId() const { DARABONBA_PTR_GET_DEFAULT(cooperatorOrderId_, "") };
    inline CooperatorSyncPayStatusRequest& setCooperatorOrderId(string cooperatorOrderId) { DARABONBA_PTR_SET_VALUE(cooperatorOrderId_, cooperatorOrderId) };


    // cooperatorPayNo Field Functions 
    bool hasCooperatorPayNo() const { return this->cooperatorPayNo_ != nullptr;};
    void deleteCooperatorPayNo() { this->cooperatorPayNo_ = nullptr;};
    inline string cooperatorPayNo() const { DARABONBA_PTR_GET_DEFAULT(cooperatorPayNo_, "") };
    inline CooperatorSyncPayStatusRequest& setCooperatorPayNo(string cooperatorPayNo) { DARABONBA_PTR_SET_VALUE(cooperatorPayNo_, cooperatorPayNo) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CooperatorSyncPayStatusRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline string payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, "") };
    inline CooperatorSyncPayStatusRequest& setPayStatus(string payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline int64_t payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, 0L) };
    inline CooperatorSyncPayStatusRequest& setPayTime(int64_t payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> cooperatorOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> cooperatorPayNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> payStatus_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> payTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

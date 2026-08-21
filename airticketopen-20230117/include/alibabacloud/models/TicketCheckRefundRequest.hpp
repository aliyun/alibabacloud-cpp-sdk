// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHECKREFUNDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHECKREFUNDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class TicketCheckRefundRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketCheckRefundRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(DistributorOrderId, distributorOrderId_);
      DARABONBA_PTR_TO_JSON(RefundReason, refundReason_);
      DARABONBA_PTR_TO_JSON(RefundRemark, refundRemark_);
    };
    friend void from_json(const Darabonba::Json& j, TicketCheckRefundRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(DistributorOrderId, distributorOrderId_);
      DARABONBA_PTR_FROM_JSON(RefundReason, refundReason_);
      DARABONBA_PTR_FROM_JSON(RefundRemark, refundRemark_);
    };
    TicketCheckRefundRequest() = default ;
    TicketCheckRefundRequest(const TicketCheckRefundRequest &) = default ;
    TicketCheckRefundRequest(TicketCheckRefundRequest &&) = default ;
    TicketCheckRefundRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketCheckRefundRequest() = default ;
    TicketCheckRefundRequest& operator=(const TicketCheckRefundRequest &) = default ;
    TicketCheckRefundRequest& operator=(TicketCheckRefundRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->distributorOrderId_ == nullptr && this->refundReason_ == nullptr && this->refundRemark_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline TicketCheckRefundRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // distributorOrderId Field Functions 
    bool hasDistributorOrderId() const { return this->distributorOrderId_ != nullptr;};
    void deleteDistributorOrderId() { this->distributorOrderId_ = nullptr;};
    inline string getDistributorOrderId() const { DARABONBA_PTR_GET_DEFAULT(distributorOrderId_, "") };
    inline TicketCheckRefundRequest& setDistributorOrderId(string distributorOrderId) { DARABONBA_PTR_SET_VALUE(distributorOrderId_, distributorOrderId) };


    // refundReason Field Functions 
    bool hasRefundReason() const { return this->refundReason_ != nullptr;};
    void deleteRefundReason() { this->refundReason_ = nullptr;};
    inline string getRefundReason() const { DARABONBA_PTR_GET_DEFAULT(refundReason_, "") };
    inline TicketCheckRefundRequest& setRefundReason(string refundReason) { DARABONBA_PTR_SET_VALUE(refundReason_, refundReason) };


    // refundRemark Field Functions 
    bool hasRefundRemark() const { return this->refundRemark_ != nullptr;};
    void deleteRefundRemark() { this->refundRemark_ = nullptr;};
    inline string getRefundRemark() const { DARABONBA_PTR_GET_DEFAULT(refundRemark_, "") };
    inline TicketCheckRefundRequest& setRefundRemark(string refundRemark) { DARABONBA_PTR_SET_VALUE(refundRemark_, refundRemark) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    // This parameter is required.
    shared_ptr<string> distributorOrderId_ {};
    // This parameter is required.
    shared_ptr<string> refundReason_ {};
    shared_ptr<string> refundRemark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif

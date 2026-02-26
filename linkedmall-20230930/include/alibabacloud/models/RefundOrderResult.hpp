// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDORDERRESULT_HPP_
#define ALIBABACLOUD_MODELS_REFUNDORDERRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class RefundOrderResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundOrderResult& obj) { 
      DARABONBA_PTR_TO_JSON(disputeId, disputeId_);
      DARABONBA_PTR_TO_JSON(disputeStatus, disputeStatus_);
      DARABONBA_PTR_TO_JSON(orderLineId, orderLineId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RefundOrderResult& obj) { 
      DARABONBA_PTR_FROM_JSON(disputeId, disputeId_);
      DARABONBA_PTR_FROM_JSON(disputeStatus, disputeStatus_);
      DARABONBA_PTR_FROM_JSON(orderLineId, orderLineId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    RefundOrderResult() = default ;
    RefundOrderResult(const RefundOrderResult &) = default ;
    RefundOrderResult(RefundOrderResult &&) = default ;
    RefundOrderResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundOrderResult() = default ;
    RefundOrderResult& operator=(const RefundOrderResult &) = default ;
    RefundOrderResult& operator=(RefundOrderResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disputeId_ == nullptr
        && this->disputeStatus_ == nullptr && this->orderLineId_ == nullptr && this->requestId_ == nullptr; };
    // disputeId Field Functions 
    bool hasDisputeId() const { return this->disputeId_ != nullptr;};
    void deleteDisputeId() { this->disputeId_ = nullptr;};
    inline string getDisputeId() const { DARABONBA_PTR_GET_DEFAULT(disputeId_, "") };
    inline RefundOrderResult& setDisputeId(string disputeId) { DARABONBA_PTR_SET_VALUE(disputeId_, disputeId) };


    // disputeStatus Field Functions 
    bool hasDisputeStatus() const { return this->disputeStatus_ != nullptr;};
    void deleteDisputeStatus() { this->disputeStatus_ = nullptr;};
    inline int32_t getDisputeStatus() const { DARABONBA_PTR_GET_DEFAULT(disputeStatus_, 0) };
    inline RefundOrderResult& setDisputeStatus(int32_t disputeStatus) { DARABONBA_PTR_SET_VALUE(disputeStatus_, disputeStatus) };


    // orderLineId Field Functions 
    bool hasOrderLineId() const { return this->orderLineId_ != nullptr;};
    void deleteOrderLineId() { this->orderLineId_ = nullptr;};
    inline string getOrderLineId() const { DARABONBA_PTR_GET_DEFAULT(orderLineId_, "") };
    inline RefundOrderResult& setOrderLineId(string orderLineId) { DARABONBA_PTR_SET_VALUE(orderLineId_, orderLineId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RefundOrderResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> disputeId_ {};
    shared_ptr<int32_t> disputeStatus_ {};
    shared_ptr<string> orderLineId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif

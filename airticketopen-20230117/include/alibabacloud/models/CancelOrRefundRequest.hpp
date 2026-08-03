// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELORREFUNDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELORREFUNDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class CancelOrRefundRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelOrRefundRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(OrderNo, orderNo_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelOrRefundRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(OrderNo, orderNo_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    CancelOrRefundRequest() = default ;
    CancelOrRefundRequest(const CancelOrRefundRequest &) = default ;
    CancelOrRefundRequest(CancelOrRefundRequest &&) = default ;
    CancelOrRefundRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelOrRefundRequest() = default ;
    CancelOrRefundRequest& operator=(const CancelOrRefundRequest &) = default ;
    CancelOrRefundRequest& operator=(CancelOrRefundRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->orderNo_ == nullptr && this->tracerId_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline CancelOrRefundRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // orderNo Field Functions 
    bool hasOrderNo() const { return this->orderNo_ != nullptr;};
    void deleteOrderNo() { this->orderNo_ = nullptr;};
    inline string getOrderNo() const { DARABONBA_PTR_GET_DEFAULT(orderNo_, "") };
    inline CancelOrRefundRequest& setOrderNo(string orderNo) { DARABONBA_PTR_SET_VALUE(orderNo_, orderNo) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline CancelOrRefundRequest& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    // This parameter is required.
    shared_ptr<string> orderNo_ {};
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif

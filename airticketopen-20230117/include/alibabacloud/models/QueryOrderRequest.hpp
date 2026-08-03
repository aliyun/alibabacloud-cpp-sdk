// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class QueryOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(ExternalOrderNo, externalOrderNo_);
      DARABONBA_PTR_TO_JSON(OrderNo, orderNo_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(ExternalOrderNo, externalOrderNo_);
      DARABONBA_PTR_FROM_JSON(OrderNo, orderNo_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    QueryOrderRequest() = default ;
    QueryOrderRequest(const QueryOrderRequest &) = default ;
    QueryOrderRequest(QueryOrderRequest &&) = default ;
    QueryOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrderRequest() = default ;
    QueryOrderRequest& operator=(const QueryOrderRequest &) = default ;
    QueryOrderRequest& operator=(QueryOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->externalOrderNo_ == nullptr && this->orderNo_ == nullptr && this->tracerId_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline QueryOrderRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // externalOrderNo Field Functions 
    bool hasExternalOrderNo() const { return this->externalOrderNo_ != nullptr;};
    void deleteExternalOrderNo() { this->externalOrderNo_ = nullptr;};
    inline string getExternalOrderNo() const { DARABONBA_PTR_GET_DEFAULT(externalOrderNo_, "") };
    inline QueryOrderRequest& setExternalOrderNo(string externalOrderNo) { DARABONBA_PTR_SET_VALUE(externalOrderNo_, externalOrderNo) };


    // orderNo Field Functions 
    bool hasOrderNo() const { return this->orderNo_ != nullptr;};
    void deleteOrderNo() { this->orderNo_ = nullptr;};
    inline string getOrderNo() const { DARABONBA_PTR_GET_DEFAULT(orderNo_, "") };
    inline QueryOrderRequest& setOrderNo(string orderNo) { DARABONBA_PTR_SET_VALUE(orderNo_, orderNo) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline QueryOrderRequest& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    shared_ptr<string> externalOrderNo_ {};
    shared_ptr<string> orderNo_ {};
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif

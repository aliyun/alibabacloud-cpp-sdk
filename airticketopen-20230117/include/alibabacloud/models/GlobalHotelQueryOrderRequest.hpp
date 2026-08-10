// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALHOTELQUERYORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GLOBALHOTELQUERYORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class GlobalHotelQueryOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalHotelQueryOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(ExternalOrderNo, externalOrderNo_);
      DARABONBA_PTR_TO_JSON(OrderNo, orderNo_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalHotelQueryOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(ExternalOrderNo, externalOrderNo_);
      DARABONBA_PTR_FROM_JSON(OrderNo, orderNo_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    GlobalHotelQueryOrderRequest() = default ;
    GlobalHotelQueryOrderRequest(const GlobalHotelQueryOrderRequest &) = default ;
    GlobalHotelQueryOrderRequest(GlobalHotelQueryOrderRequest &&) = default ;
    GlobalHotelQueryOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalHotelQueryOrderRequest() = default ;
    GlobalHotelQueryOrderRequest& operator=(const GlobalHotelQueryOrderRequest &) = default ;
    GlobalHotelQueryOrderRequest& operator=(GlobalHotelQueryOrderRequest &&) = default ;
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
    inline GlobalHotelQueryOrderRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // externalOrderNo Field Functions 
    bool hasExternalOrderNo() const { return this->externalOrderNo_ != nullptr;};
    void deleteExternalOrderNo() { this->externalOrderNo_ = nullptr;};
    inline string getExternalOrderNo() const { DARABONBA_PTR_GET_DEFAULT(externalOrderNo_, "") };
    inline GlobalHotelQueryOrderRequest& setExternalOrderNo(string externalOrderNo) { DARABONBA_PTR_SET_VALUE(externalOrderNo_, externalOrderNo) };


    // orderNo Field Functions 
    bool hasOrderNo() const { return this->orderNo_ != nullptr;};
    void deleteOrderNo() { this->orderNo_ = nullptr;};
    inline string getOrderNo() const { DARABONBA_PTR_GET_DEFAULT(orderNo_, "") };
    inline GlobalHotelQueryOrderRequest& setOrderNo(string orderNo) { DARABONBA_PTR_SET_VALUE(orderNo_, orderNo) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline GlobalHotelQueryOrderRequest& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // The distributor account ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    // The external order number. At least one of ExternalOrderNo and OrderNo is required.
    shared_ptr<string> externalOrderNo_ {};
    // The sales order number. At least one of OrderNo and ExternalOrderNo is required.
    shared_ptr<string> orderNo_ {};
    // TracerId
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETQUERYORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TICKETQUERYORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class TicketQueryOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketQueryOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(DistributorOrderId, distributorOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, TicketQueryOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(DistributorOrderId, distributorOrderId_);
    };
    TicketQueryOrderRequest() = default ;
    TicketQueryOrderRequest(const TicketQueryOrderRequest &) = default ;
    TicketQueryOrderRequest(TicketQueryOrderRequest &&) = default ;
    TicketQueryOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketQueryOrderRequest() = default ;
    TicketQueryOrderRequest& operator=(const TicketQueryOrderRequest &) = default ;
    TicketQueryOrderRequest& operator=(TicketQueryOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->distributorOrderId_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline TicketQueryOrderRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // distributorOrderId Field Functions 
    bool hasDistributorOrderId() const { return this->distributorOrderId_ != nullptr;};
    void deleteDistributorOrderId() { this->distributorOrderId_ = nullptr;};
    inline string getDistributorOrderId() const { DARABONBA_PTR_GET_DEFAULT(distributorOrderId_, "") };
    inline TicketQueryOrderRequest& setDistributorOrderId(string distributorOrderId) { DARABONBA_PTR_SET_VALUE(distributorOrderId_, distributorOrderId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    // This parameter is required.
    shared_ptr<string> distributorOrderId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif

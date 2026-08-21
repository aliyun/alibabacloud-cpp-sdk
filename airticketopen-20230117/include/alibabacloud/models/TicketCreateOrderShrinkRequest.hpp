// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCREATEORDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TICKETCREATEORDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class TicketCreateOrderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketCreateOrderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(Contact, contactShrink_);
      DARABONBA_PTR_TO_JSON(DistributorOrderId, distributorOrderId_);
      DARABONBA_PTR_TO_JSON(OrderProduct, orderProductShrink_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(TotalDistributionPrice, totalDistributionPriceShrink_);
      DARABONBA_PTR_TO_JSON(Travelers, travelersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, TicketCreateOrderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(Contact, contactShrink_);
      DARABONBA_PTR_FROM_JSON(DistributorOrderId, distributorOrderId_);
      DARABONBA_PTR_FROM_JSON(OrderProduct, orderProductShrink_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(TotalDistributionPrice, totalDistributionPriceShrink_);
      DARABONBA_PTR_FROM_JSON(Travelers, travelersShrink_);
    };
    TicketCreateOrderShrinkRequest() = default ;
    TicketCreateOrderShrinkRequest(const TicketCreateOrderShrinkRequest &) = default ;
    TicketCreateOrderShrinkRequest(TicketCreateOrderShrinkRequest &&) = default ;
    TicketCreateOrderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketCreateOrderShrinkRequest() = default ;
    TicketCreateOrderShrinkRequest& operator=(const TicketCreateOrderShrinkRequest &) = default ;
    TicketCreateOrderShrinkRequest& operator=(TicketCreateOrderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->contactShrink_ == nullptr && this->distributorOrderId_ == nullptr && this->orderProductShrink_ == nullptr && this->quantity_ == nullptr && this->totalDistributionPriceShrink_ == nullptr
        && this->travelersShrink_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline TicketCreateOrderShrinkRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // contactShrink Field Functions 
    bool hasContactShrink() const { return this->contactShrink_ != nullptr;};
    void deleteContactShrink() { this->contactShrink_ = nullptr;};
    inline string getContactShrink() const { DARABONBA_PTR_GET_DEFAULT(contactShrink_, "") };
    inline TicketCreateOrderShrinkRequest& setContactShrink(string contactShrink) { DARABONBA_PTR_SET_VALUE(contactShrink_, contactShrink) };


    // distributorOrderId Field Functions 
    bool hasDistributorOrderId() const { return this->distributorOrderId_ != nullptr;};
    void deleteDistributorOrderId() { this->distributorOrderId_ = nullptr;};
    inline string getDistributorOrderId() const { DARABONBA_PTR_GET_DEFAULT(distributorOrderId_, "") };
    inline TicketCreateOrderShrinkRequest& setDistributorOrderId(string distributorOrderId) { DARABONBA_PTR_SET_VALUE(distributorOrderId_, distributorOrderId) };


    // orderProductShrink Field Functions 
    bool hasOrderProductShrink() const { return this->orderProductShrink_ != nullptr;};
    void deleteOrderProductShrink() { this->orderProductShrink_ = nullptr;};
    inline string getOrderProductShrink() const { DARABONBA_PTR_GET_DEFAULT(orderProductShrink_, "") };
    inline TicketCreateOrderShrinkRequest& setOrderProductShrink(string orderProductShrink) { DARABONBA_PTR_SET_VALUE(orderProductShrink_, orderProductShrink) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline TicketCreateOrderShrinkRequest& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // totalDistributionPriceShrink Field Functions 
    bool hasTotalDistributionPriceShrink() const { return this->totalDistributionPriceShrink_ != nullptr;};
    void deleteTotalDistributionPriceShrink() { this->totalDistributionPriceShrink_ = nullptr;};
    inline string getTotalDistributionPriceShrink() const { DARABONBA_PTR_GET_DEFAULT(totalDistributionPriceShrink_, "") };
    inline TicketCreateOrderShrinkRequest& setTotalDistributionPriceShrink(string totalDistributionPriceShrink) { DARABONBA_PTR_SET_VALUE(totalDistributionPriceShrink_, totalDistributionPriceShrink) };


    // travelersShrink Field Functions 
    bool hasTravelersShrink() const { return this->travelersShrink_ != nullptr;};
    void deleteTravelersShrink() { this->travelersShrink_ = nullptr;};
    inline string getTravelersShrink() const { DARABONBA_PTR_GET_DEFAULT(travelersShrink_, "") };
    inline TicketCreateOrderShrinkRequest& setTravelersShrink(string travelersShrink) { DARABONBA_PTR_SET_VALUE(travelersShrink_, travelersShrink) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    // This parameter is required.
    shared_ptr<string> contactShrink_ {};
    // This parameter is required.
    shared_ptr<string> distributorOrderId_ {};
    // This parameter is required.
    shared_ptr<string> orderProductShrink_ {};
    // This parameter is required.
    shared_ptr<int32_t> quantity_ {};
    // This parameter is required.
    shared_ptr<string> totalDistributionPriceShrink_ {};
    shared_ptr<string> travelersShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif

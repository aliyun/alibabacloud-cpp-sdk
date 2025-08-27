// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODYMODULEPASSENGEREFUNDFEEDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODYMODULEPASSENGEREFUNDFEEDETAILLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_TO_JSON(refund_fee_detail, refundFeeDetail_);
      DARABONBA_PTR_TO_JSON(ticket_list, ticketList_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_FROM_JSON(refund_fee_detail, refundFeeDetail_);
      DARABONBA_PTR_FROM_JSON(ticket_list, ticketList_);
    };
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList() = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList(const IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList &) = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList(IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList &&) = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList() = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList& operator=(const IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList &) = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList& operator=(IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passengerId_ != nullptr
        && this->refundFeeDetail_ != nullptr && this->ticketList_ != nullptr; };
    // passengerId Field Functions 
    bool hasPassengerId() const { return this->passengerId_ != nullptr;};
    void deletePassengerId() { this->passengerId_ = nullptr;};
    inline int64_t passengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList& setPassengerId(int64_t passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


    // refundFeeDetail Field Functions 
    bool hasRefundFeeDetail() const { return this->refundFeeDetail_ != nullptr;};
    void deleteRefundFeeDetail() { this->refundFeeDetail_ = nullptr;};
    inline const Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail & refundFeeDetail() const { DARABONBA_PTR_GET_CONST(refundFeeDetail_, Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail) };
    inline Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail refundFeeDetail() { DARABONBA_PTR_GET(refundFeeDetail_, Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList& setRefundFeeDetail(const Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail & refundFeeDetail) { DARABONBA_PTR_SET_VALUE(refundFeeDetail_, refundFeeDetail) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList& setRefundFeeDetail(Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail && refundFeeDetail) { DARABONBA_PTR_SET_RVALUE(refundFeeDetail_, refundFeeDetail) };


    // ticketList Field Functions 
    bool hasTicketList() const { return this->ticketList_ != nullptr;};
    void deleteTicketList() { this->ticketList_ = nullptr;};
    inline const vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList> & ticketList() const { DARABONBA_PTR_GET_CONST(ticketList_, vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList>) };
    inline vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList> ticketList() { DARABONBA_PTR_GET(ticketList_, vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList>) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList& setTicketList(const vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList> & ticketList) { DARABONBA_PTR_SET_VALUE(ticketList_, ticketList) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailList& setTicketList(vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList> && ticketList) { DARABONBA_PTR_SET_RVALUE(ticketList_, ticketList) };


  protected:
    std::shared_ptr<int64_t> passengerId_ = nullptr;
    std::shared_ptr<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail> refundFeeDetail_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList>> ticketList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODYMODULEPASSENGEREFUNDFEEDETAILLISTTICKETLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODYMODULEPASSENGEREFUNDFEEDETAILLISTTICKETLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList& obj) { 
      DARABONBA_PTR_TO_JSON(segment_key_list, segmentKeyList_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList& obj) { 
      DARABONBA_PTR_FROM_JSON(segment_key_list, segmentKeyList_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
    };
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList() = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList(const IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList &) = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList(IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList &&) = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList() = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList& operator=(const IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList &) = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList& operator=(IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->segmentKeyList_ != nullptr
        && this->ticketNo_ != nullptr; };
    // segmentKeyList Field Functions 
    bool hasSegmentKeyList() const { return this->segmentKeyList_ != nullptr;};
    void deleteSegmentKeyList() { this->segmentKeyList_ = nullptr;};
    inline const vector<string> & segmentKeyList() const { DARABONBA_PTR_GET_CONST(segmentKeyList_, vector<string>) };
    inline vector<string> segmentKeyList() { DARABONBA_PTR_GET(segmentKeyList_, vector<string>) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList& setSegmentKeyList(const vector<string> & segmentKeyList) { DARABONBA_PTR_SET_VALUE(segmentKeyList_, segmentKeyList) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList& setSegmentKeyList(vector<string> && segmentKeyList) { DARABONBA_PTR_SET_RVALUE(segmentKeyList_, segmentKeyList) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListTicketList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


  protected:
    std::shared_ptr<vector<string>> segmentKeyList_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

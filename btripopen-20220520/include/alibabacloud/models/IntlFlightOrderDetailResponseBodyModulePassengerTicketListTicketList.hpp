// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTORDERDETAILRESPONSEBODYMODULEPASSENGERTICKETLISTTICKETLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTORDERDETAILRESPONSEBODYMODULEPASSENGERTICKETLISTTICKETLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList& obj) { 
      DARABONBA_PTR_TO_JSON(issue_time, issueTime_);
      DARABONBA_PTR_TO_JSON(pnr_no, pnrNo_);
      DARABONBA_PTR_TO_JSON(price_info, priceInfo_);
      DARABONBA_PTR_TO_JSON(segment_key_list, segmentKeyList_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_TO_JSON(ticket_segment_list, ticketSegmentList_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList& obj) { 
      DARABONBA_PTR_FROM_JSON(issue_time, issueTime_);
      DARABONBA_PTR_FROM_JSON(pnr_no, pnrNo_);
      DARABONBA_PTR_FROM_JSON(price_info, priceInfo_);
      DARABONBA_PTR_FROM_JSON(segment_key_list, segmentKeyList_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_FROM_JSON(ticket_segment_list, ticketSegmentList_);
    };
    IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList() = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList(const IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList &) = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList(IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList &&) = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList() = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList& operator=(const IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList &) = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList& operator=(IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->issueTime_ != nullptr
        && this->pnrNo_ != nullptr && this->priceInfo_ != nullptr && this->segmentKeyList_ != nullptr && this->ticketNo_ != nullptr && this->ticketSegmentList_ != nullptr; };
    // issueTime Field Functions 
    bool hasIssueTime() const { return this->issueTime_ != nullptr;};
    void deleteIssueTime() { this->issueTime_ = nullptr;};
    inline string issueTime() const { DARABONBA_PTR_GET_DEFAULT(issueTime_, "") };
    inline IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList& setIssueTime(string issueTime) { DARABONBA_PTR_SET_VALUE(issueTime_, issueTime) };


    // pnrNo Field Functions 
    bool hasPnrNo() const { return this->pnrNo_ != nullptr;};
    void deletePnrNo() { this->pnrNo_ = nullptr;};
    inline string pnrNo() const { DARABONBA_PTR_GET_DEFAULT(pnrNo_, "") };
    inline IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList& setPnrNo(string pnrNo) { DARABONBA_PTR_SET_VALUE(pnrNo_, pnrNo) };


    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo & priceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo) };
    inline Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo priceInfo() { DARABONBA_PTR_GET(priceInfo_, Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo) };
    inline IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList& setPriceInfo(const Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList& setPriceInfo(Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


    // segmentKeyList Field Functions 
    bool hasSegmentKeyList() const { return this->segmentKeyList_ != nullptr;};
    void deleteSegmentKeyList() { this->segmentKeyList_ = nullptr;};
    inline const vector<string> & segmentKeyList() const { DARABONBA_PTR_GET_CONST(segmentKeyList_, vector<string>) };
    inline vector<string> segmentKeyList() { DARABONBA_PTR_GET(segmentKeyList_, vector<string>) };
    inline IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList& setSegmentKeyList(const vector<string> & segmentKeyList) { DARABONBA_PTR_SET_VALUE(segmentKeyList_, segmentKeyList) };
    inline IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList& setSegmentKeyList(vector<string> && segmentKeyList) { DARABONBA_PTR_SET_RVALUE(segmentKeyList_, segmentKeyList) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    // ticketSegmentList Field Functions 
    bool hasTicketSegmentList() const { return this->ticketSegmentList_ != nullptr;};
    void deleteTicketSegmentList() { this->ticketSegmentList_ = nullptr;};
    inline const vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList> & ticketSegmentList() const { DARABONBA_PTR_GET_CONST(ticketSegmentList_, vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList>) };
    inline vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList> ticketSegmentList() { DARABONBA_PTR_GET(ticketSegmentList_, vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList>) };
    inline IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList& setTicketSegmentList(const vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList> & ticketSegmentList) { DARABONBA_PTR_SET_VALUE(ticketSegmentList_, ticketSegmentList) };
    inline IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketList& setTicketSegmentList(vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList> && ticketSegmentList) { DARABONBA_PTR_SET_RVALUE(ticketSegmentList_, ticketSegmentList) };


  protected:
    std::shared_ptr<string> issueTime_ = nullptr;
    std::shared_ptr<string> pnrNo_ = nullptr;
    std::shared_ptr<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo> priceInfo_ = nullptr;
    std::shared_ptr<vector<string>> segmentKeyList_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList>> ticketSegmentList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULEPASSENGERTICKETLISTTICKETLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULEPASSENGERTICKETLISTTICKETLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList& obj) { 
      DARABONBA_PTR_TO_JSON(issue_time, issueTime_);
      DARABONBA_PTR_TO_JSON(pnr_no, pnrNo_);
      DARABONBA_PTR_TO_JSON(segment_key_list, segmentKeyList_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_TO_JSON(ticket_segment_list, ticketSegmentList_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList& obj) { 
      DARABONBA_PTR_FROM_JSON(issue_time, issueTime_);
      DARABONBA_PTR_FROM_JSON(pnr_no, pnrNo_);
      DARABONBA_PTR_FROM_JSON(segment_key_list, segmentKeyList_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_FROM_JSON(ticket_segment_list, ticketSegmentList_);
    };
    IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList() = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList(const IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList &) = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList(IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList &&) = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList() = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList& operator=(const IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList &) = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList& operator=(IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->issueTime_ != nullptr
        && this->pnrNo_ != nullptr && this->segmentKeyList_ != nullptr && this->ticketNo_ != nullptr && this->ticketSegmentList_ != nullptr; };
    // issueTime Field Functions 
    bool hasIssueTime() const { return this->issueTime_ != nullptr;};
    void deleteIssueTime() { this->issueTime_ = nullptr;};
    inline string issueTime() const { DARABONBA_PTR_GET_DEFAULT(issueTime_, "") };
    inline IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList& setIssueTime(string issueTime) { DARABONBA_PTR_SET_VALUE(issueTime_, issueTime) };


    // pnrNo Field Functions 
    bool hasPnrNo() const { return this->pnrNo_ != nullptr;};
    void deletePnrNo() { this->pnrNo_ = nullptr;};
    inline string pnrNo() const { DARABONBA_PTR_GET_DEFAULT(pnrNo_, "") };
    inline IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList& setPnrNo(string pnrNo) { DARABONBA_PTR_SET_VALUE(pnrNo_, pnrNo) };


    // segmentKeyList Field Functions 
    bool hasSegmentKeyList() const { return this->segmentKeyList_ != nullptr;};
    void deleteSegmentKeyList() { this->segmentKeyList_ = nullptr;};
    inline const vector<string> & segmentKeyList() const { DARABONBA_PTR_GET_CONST(segmentKeyList_, vector<string>) };
    inline vector<string> segmentKeyList() { DARABONBA_PTR_GET(segmentKeyList_, vector<string>) };
    inline IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList& setSegmentKeyList(const vector<string> & segmentKeyList) { DARABONBA_PTR_SET_VALUE(segmentKeyList_, segmentKeyList) };
    inline IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList& setSegmentKeyList(vector<string> && segmentKeyList) { DARABONBA_PTR_SET_RVALUE(segmentKeyList_, segmentKeyList) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    // ticketSegmentList Field Functions 
    bool hasTicketSegmentList() const { return this->ticketSegmentList_ != nullptr;};
    void deleteTicketSegmentList() { this->ticketSegmentList_ = nullptr;};
    inline const vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList> & ticketSegmentList() const { DARABONBA_PTR_GET_CONST(ticketSegmentList_, vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList>) };
    inline vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList> ticketSegmentList() { DARABONBA_PTR_GET(ticketSegmentList_, vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList>) };
    inline IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList& setTicketSegmentList(const vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList> & ticketSegmentList) { DARABONBA_PTR_SET_VALUE(ticketSegmentList_, ticketSegmentList) };
    inline IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketList& setTicketSegmentList(vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList> && ticketSegmentList) { DARABONBA_PTR_SET_RVALUE(ticketSegmentList_, ticketSegmentList) };


  protected:
    std::shared_ptr<string> issueTime_ = nullptr;
    std::shared_ptr<string> pnrNo_ = nullptr;
    std::shared_ptr<vector<string>> segmentKeyList_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList>> ticketSegmentList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

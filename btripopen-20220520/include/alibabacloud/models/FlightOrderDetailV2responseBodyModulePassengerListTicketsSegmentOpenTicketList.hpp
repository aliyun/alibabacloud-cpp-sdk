// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERDETAILV2RESPONSEBODYMODULEPASSENGERLISTTICKETSSEGMENTOPENTICKETLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERDETAILV2RESPONSEBODYMODULEPASSENGERLISTTICKETSSEGMENTOPENTICKETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList& obj) { 
      DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
      DARABONBA_PTR_TO_JSON(open_ticket_status, openTicketStatus_);
      DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList& obj) { 
      DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
      DARABONBA_PTR_FROM_JSON(open_ticket_status, openTicketStatus_);
      DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
    };
    FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList() = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList(const FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList &) = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList(FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList &&) = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList() = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList& operator=(const FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList &) = default ;
    FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList& operator=(FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->journeyIndex_ != nullptr
        && this->openTicketStatus_ != nullptr && this->segmentIndex_ != nullptr; };
    // journeyIndex Field Functions 
    bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
    void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
    inline int32_t journeyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


    // openTicketStatus Field Functions 
    bool hasOpenTicketStatus() const { return this->openTicketStatus_ != nullptr;};
    void deleteOpenTicketStatus() { this->openTicketStatus_ = nullptr;};
    inline int32_t openTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(openTicketStatus_, 0) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList& setOpenTicketStatus(int32_t openTicketStatus) { DARABONBA_PTR_SET_VALUE(openTicketStatus_, openTicketStatus) };


    // segmentIndex Field Functions 
    bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
    void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
    inline int32_t segmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
    inline FlightOrderDetailV2ResponseBodyModulePassengerListTicketsSegmentOpenTicketList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


  protected:
    std::shared_ptr<int32_t> journeyIndex_ = nullptr;
    std::shared_ptr<int32_t> openTicketStatus_ = nullptr;
    std::shared_ptr<int32_t> segmentIndex_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

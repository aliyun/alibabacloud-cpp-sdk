// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULEPASSENGERTICKETLISTTICKETLISTTICKETSEGMENTLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULEPASSENGERTICKETLISTTICKETLISTTICKETSEGMENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList& obj) { 
      DARABONBA_PTR_TO_JSON(cabin, cabin_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(modified, modified_);
      DARABONBA_PTR_TO_JSON(open_ticket_status, openTicketStatus_);
      DARABONBA_PTR_TO_JSON(refunded, refunded_);
      DARABONBA_PTR_TO_JSON(segment_key, segmentKey_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin, cabin_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(modified, modified_);
      DARABONBA_PTR_FROM_JSON(open_ticket_status, openTicketStatus_);
      DARABONBA_PTR_FROM_JSON(refunded, refunded_);
      DARABONBA_PTR_FROM_JSON(segment_key, segmentKey_);
    };
    IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList() = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList(const IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList &) = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList(IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList &&) = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList() = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList& operator=(const IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList &) = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList& operator=(IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cabin_ != nullptr
        && this->cabinClass_ != nullptr && this->modified_ != nullptr && this->openTicketStatus_ != nullptr && this->refunded_ != nullptr && this->segmentKey_ != nullptr; };
    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline string cabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
    inline IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // modified Field Functions 
    bool hasModified() const { return this->modified_ != nullptr;};
    void deleteModified() { this->modified_ = nullptr;};
    inline bool modified() const { DARABONBA_PTR_GET_DEFAULT(modified_, false) };
    inline IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList& setModified(bool modified) { DARABONBA_PTR_SET_VALUE(modified_, modified) };


    // openTicketStatus Field Functions 
    bool hasOpenTicketStatus() const { return this->openTicketStatus_ != nullptr;};
    void deleteOpenTicketStatus() { this->openTicketStatus_ = nullptr;};
    inline string openTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(openTicketStatus_, "") };
    inline IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList& setOpenTicketStatus(string openTicketStatus) { DARABONBA_PTR_SET_VALUE(openTicketStatus_, openTicketStatus) };


    // refunded Field Functions 
    bool hasRefunded() const { return this->refunded_ != nullptr;};
    void deleteRefunded() { this->refunded_ = nullptr;};
    inline bool refunded() const { DARABONBA_PTR_GET_DEFAULT(refunded_, false) };
    inline IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList& setRefunded(bool refunded) { DARABONBA_PTR_SET_VALUE(refunded_, refunded) };


    // segmentKey Field Functions 
    bool hasSegmentKey() const { return this->segmentKey_ != nullptr;};
    void deleteSegmentKey() { this->segmentKey_ = nullptr;};
    inline string segmentKey() const { DARABONBA_PTR_GET_DEFAULT(segmentKey_, "") };
    inline IntlFlightReShopDetailResponseBodyModulePassengerTicketListTicketListTicketSegmentList& setSegmentKey(string segmentKey) { DARABONBA_PTR_SET_VALUE(segmentKey_, segmentKey) };


  protected:
    std::shared_ptr<string> cabin_ = nullptr;
    std::shared_ptr<string> cabinClass_ = nullptr;
    std::shared_ptr<bool> modified_ = nullptr;
    std::shared_ptr<string> openTicketStatus_ = nullptr;
    std::shared_ptr<bool> refunded_ = nullptr;
    std::shared_ptr<string> segmentKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

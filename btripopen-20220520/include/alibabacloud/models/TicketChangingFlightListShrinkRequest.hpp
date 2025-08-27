// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGFLIGHTLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGFLIGHTLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingFlightListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingFlightListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(is_voluntary, isVoluntary_);
      DARABONBA_PTR_TO_JSON(traveler_info_list, travelerInfoListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingFlightListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(is_voluntary, isVoluntary_);
      DARABONBA_PTR_FROM_JSON(traveler_info_list, travelerInfoListShrink_);
    };
    TicketChangingFlightListShrinkRequest() = default ;
    TicketChangingFlightListShrinkRequest(const TicketChangingFlightListShrinkRequest &) = default ;
    TicketChangingFlightListShrinkRequest(TicketChangingFlightListShrinkRequest &&) = default ;
    TicketChangingFlightListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingFlightListShrinkRequest() = default ;
    TicketChangingFlightListShrinkRequest& operator=(const TicketChangingFlightListShrinkRequest &) = default ;
    TicketChangingFlightListShrinkRequest& operator=(TicketChangingFlightListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrCity_ != nullptr
        && this->depCity_ != nullptr && this->depDate_ != nullptr && this->disOrderId_ != nullptr && this->isVoluntary_ != nullptr && this->travelerInfoListShrink_ != nullptr; };
    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline TicketChangingFlightListShrinkRequest& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline TicketChangingFlightListShrinkRequest& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string depDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline TicketChangingFlightListShrinkRequest& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline TicketChangingFlightListShrinkRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // isVoluntary Field Functions 
    bool hasIsVoluntary() const { return this->isVoluntary_ != nullptr;};
    void deleteIsVoluntary() { this->isVoluntary_ = nullptr;};
    inline int32_t isVoluntary() const { DARABONBA_PTR_GET_DEFAULT(isVoluntary_, 0) };
    inline TicketChangingFlightListShrinkRequest& setIsVoluntary(int32_t isVoluntary) { DARABONBA_PTR_SET_VALUE(isVoluntary_, isVoluntary) };


    // travelerInfoListShrink Field Functions 
    bool hasTravelerInfoListShrink() const { return this->travelerInfoListShrink_ != nullptr;};
    void deleteTravelerInfoListShrink() { this->travelerInfoListShrink_ = nullptr;};
    inline string travelerInfoListShrink() const { DARABONBA_PTR_GET_DEFAULT(travelerInfoListShrink_, "") };
    inline TicketChangingFlightListShrinkRequest& setTravelerInfoListShrink(string travelerInfoListShrink) { DARABONBA_PTR_SET_VALUE(travelerInfoListShrink_, travelerInfoListShrink) };


  protected:
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> depCity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> disOrderId_ = nullptr;
    std::shared_ptr<int32_t> isVoluntary_ = nullptr;
    std::shared_ptr<string> travelerInfoListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

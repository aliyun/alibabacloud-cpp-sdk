// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDEXHIBITORRFIDPOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDEXHIBITORRFIDPOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class BindExhibitorRfidPopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindExhibitorRfidPopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GuestTicketRecordId, guestTicketRecordId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Rfid, rfid_);
      DARABONBA_PTR_TO_JSON(TicketCode, ticketCode_);
    };
    friend void from_json(const Darabonba::Json& j, BindExhibitorRfidPopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GuestTicketRecordId, guestTicketRecordId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Rfid, rfid_);
      DARABONBA_PTR_FROM_JSON(TicketCode, ticketCode_);
    };
    BindExhibitorRfidPopRequest() = default ;
    BindExhibitorRfidPopRequest(const BindExhibitorRfidPopRequest &) = default ;
    BindExhibitorRfidPopRequest(BindExhibitorRfidPopRequest &&) = default ;
    BindExhibitorRfidPopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindExhibitorRfidPopRequest() = default ;
    BindExhibitorRfidPopRequest& operator=(const BindExhibitorRfidPopRequest &) = default ;
    BindExhibitorRfidPopRequest& operator=(BindExhibitorRfidPopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityId_ != nullptr
        && this->deviceId_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->guestTicketRecordId_ != nullptr && this->id_ != nullptr
        && this->rfid_ != nullptr && this->ticketCode_ != nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline int64_t activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, 0L) };
    inline BindExhibitorRfidPopRequest& setActivityId(int64_t activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline BindExhibitorRfidPopRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline BindExhibitorRfidPopRequest& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline BindExhibitorRfidPopRequest& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // guestTicketRecordId Field Functions 
    bool hasGuestTicketRecordId() const { return this->guestTicketRecordId_ != nullptr;};
    void deleteGuestTicketRecordId() { this->guestTicketRecordId_ = nullptr;};
    inline int64_t guestTicketRecordId() const { DARABONBA_PTR_GET_DEFAULT(guestTicketRecordId_, 0L) };
    inline BindExhibitorRfidPopRequest& setGuestTicketRecordId(int64_t guestTicketRecordId) { DARABONBA_PTR_SET_VALUE(guestTicketRecordId_, guestTicketRecordId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline BindExhibitorRfidPopRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // rfid Field Functions 
    bool hasRfid() const { return this->rfid_ != nullptr;};
    void deleteRfid() { this->rfid_ = nullptr;};
    inline string rfid() const { DARABONBA_PTR_GET_DEFAULT(rfid_, "") };
    inline BindExhibitorRfidPopRequest& setRfid(string rfid) { DARABONBA_PTR_SET_VALUE(rfid_, rfid) };


    // ticketCode Field Functions 
    bool hasTicketCode() const { return this->ticketCode_ != nullptr;};
    void deleteTicketCode() { this->ticketCode_ = nullptr;};
    inline string ticketCode() const { DARABONBA_PTR_GET_DEFAULT(ticketCode_, "") };
    inline BindExhibitorRfidPopRequest& setTicketCode(string ticketCode) { DARABONBA_PTR_SET_VALUE(ticketCode_, ticketCode) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> activityId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> guestTicketRecordId_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> rfid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ticketCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif

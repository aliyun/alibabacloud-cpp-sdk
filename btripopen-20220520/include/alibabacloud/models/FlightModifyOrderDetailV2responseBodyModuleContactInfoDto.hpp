// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYORDERDETAILV2RESPONSEBODYMODULECONTACTINFODTO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYORDERDETAILV2RESPONSEBODYMODULECONTACTINFODTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO& obj) { 
      DARABONBA_PTR_TO_JSON(contact_email, contactEmail_);
      DARABONBA_PTR_TO_JSON(contact_name, contactName_);
      DARABONBA_PTR_TO_JSON(contact_phone, contactPhone_);
      DARABONBA_PTR_TO_JSON(send_msg_to_passenger, sendMsgToPassenger_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(contact_email, contactEmail_);
      DARABONBA_PTR_FROM_JSON(contact_name, contactName_);
      DARABONBA_PTR_FROM_JSON(contact_phone, contactPhone_);
      DARABONBA_PTR_FROM_JSON(send_msg_to_passenger, sendMsgToPassenger_);
    };
    FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO() = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO(const FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO &) = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO(FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO &&) = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO() = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO& operator=(const FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO &) = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO& operator=(FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactEmail_ != nullptr
        && this->contactName_ != nullptr && this->contactPhone_ != nullptr && this->sendMsgToPassenger_ != nullptr; };
    // contactEmail Field Functions 
    bool hasContactEmail() const { return this->contactEmail_ != nullptr;};
    void deleteContactEmail() { this->contactEmail_ = nullptr;};
    inline string contactEmail() const { DARABONBA_PTR_GET_DEFAULT(contactEmail_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO& setContactEmail(string contactEmail) { DARABONBA_PTR_SET_VALUE(contactEmail_, contactEmail) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // contactPhone Field Functions 
    bool hasContactPhone() const { return this->contactPhone_ != nullptr;};
    void deleteContactPhone() { this->contactPhone_ = nullptr;};
    inline string contactPhone() const { DARABONBA_PTR_GET_DEFAULT(contactPhone_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO& setContactPhone(string contactPhone) { DARABONBA_PTR_SET_VALUE(contactPhone_, contactPhone) };


    // sendMsgToPassenger Field Functions 
    bool hasSendMsgToPassenger() const { return this->sendMsgToPassenger_ != nullptr;};
    void deleteSendMsgToPassenger() { this->sendMsgToPassenger_ = nullptr;};
    inline bool sendMsgToPassenger() const { DARABONBA_PTR_GET_DEFAULT(sendMsgToPassenger_, false) };
    inline FlightModifyOrderDetailV2ResponseBodyModuleContactInfoDTO& setSendMsgToPassenger(bool sendMsgToPassenger) { DARABONBA_PTR_SET_VALUE(sendMsgToPassenger_, sendMsgToPassenger) };


  protected:
    std::shared_ptr<string> contactEmail_ = nullptr;
    std::shared_ptr<string> contactName_ = nullptr;
    std::shared_ptr<string> contactPhone_ = nullptr;
    std::shared_ptr<bool> sendMsgToPassenger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingEnquiryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingEnquiryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(is_voluntary, isVoluntary_);
      DARABONBA_PTR_TO_JSON(modify_depart_date, modifyDepartDate_);
      DARABONBA_PTR_TO_JSON(modify_flight_no, modifyFlightNo_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingEnquiryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(is_voluntary, isVoluntary_);
      DARABONBA_PTR_FROM_JSON(modify_depart_date, modifyDepartDate_);
      DARABONBA_PTR_FROM_JSON(modify_flight_no, modifyFlightNo_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
    };
    TicketChangingEnquiryRequest() = default ;
    TicketChangingEnquiryRequest(const TicketChangingEnquiryRequest &) = default ;
    TicketChangingEnquiryRequest(TicketChangingEnquiryRequest &&) = default ;
    TicketChangingEnquiryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingEnquiryRequest() = default ;
    TicketChangingEnquiryRequest& operator=(const TicketChangingEnquiryRequest &) = default ;
    TicketChangingEnquiryRequest& operator=(TicketChangingEnquiryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrCity_ != nullptr
        && this->depCity_ != nullptr && this->disOrderId_ != nullptr && this->isVoluntary_ != nullptr && this->modifyDepartDate_ != nullptr && this->modifyFlightNo_ != nullptr
        && this->sessionId_ != nullptr; };
    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline TicketChangingEnquiryRequest& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline TicketChangingEnquiryRequest& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline TicketChangingEnquiryRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // isVoluntary Field Functions 
    bool hasIsVoluntary() const { return this->isVoluntary_ != nullptr;};
    void deleteIsVoluntary() { this->isVoluntary_ = nullptr;};
    inline int32_t isVoluntary() const { DARABONBA_PTR_GET_DEFAULT(isVoluntary_, 0) };
    inline TicketChangingEnquiryRequest& setIsVoluntary(int32_t isVoluntary) { DARABONBA_PTR_SET_VALUE(isVoluntary_, isVoluntary) };


    // modifyDepartDate Field Functions 
    bool hasModifyDepartDate() const { return this->modifyDepartDate_ != nullptr;};
    void deleteModifyDepartDate() { this->modifyDepartDate_ = nullptr;};
    inline string modifyDepartDate() const { DARABONBA_PTR_GET_DEFAULT(modifyDepartDate_, "") };
    inline TicketChangingEnquiryRequest& setModifyDepartDate(string modifyDepartDate) { DARABONBA_PTR_SET_VALUE(modifyDepartDate_, modifyDepartDate) };


    // modifyFlightNo Field Functions 
    bool hasModifyFlightNo() const { return this->modifyFlightNo_ != nullptr;};
    void deleteModifyFlightNo() { this->modifyFlightNo_ = nullptr;};
    inline string modifyFlightNo() const { DARABONBA_PTR_GET_DEFAULT(modifyFlightNo_, "") };
    inline TicketChangingEnquiryRequest& setModifyFlightNo(string modifyFlightNo) { DARABONBA_PTR_SET_VALUE(modifyFlightNo_, modifyFlightNo) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline TicketChangingEnquiryRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> arrCity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depCity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> disOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> isVoluntary_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> modifyDepartDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> modifyFlightNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

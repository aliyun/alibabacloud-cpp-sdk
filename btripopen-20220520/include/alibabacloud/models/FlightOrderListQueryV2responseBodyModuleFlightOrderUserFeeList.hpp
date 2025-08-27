// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEFLIGHTORDERUSERFEELIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEFLIGHTORDERUSERFEELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList& obj) { 
      DARABONBA_PTR_TO_JSON(build_fee, buildFee_);
      DARABONBA_PTR_TO_JSON(corp_pay_amount, corpPayAmount_);
      DARABONBA_PTR_TO_JSON(oil_fee, oilFee_);
      DARABONBA_PTR_TO_JSON(person_pay_amount, personPayAmount_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList& obj) { 
      DARABONBA_PTR_FROM_JSON(build_fee, buildFee_);
      DARABONBA_PTR_FROM_JSON(corp_pay_amount, corpPayAmount_);
      DARABONBA_PTR_FROM_JSON(oil_fee, oilFee_);
      DARABONBA_PTR_FROM_JSON(person_pay_amount, personPayAmount_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList(const FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList(FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList &&) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList& operator=(const FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList& operator=(FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildFee_ != nullptr
        && this->corpPayAmount_ != nullptr && this->oilFee_ != nullptr && this->personPayAmount_ != nullptr && this->ticketPrice_ != nullptr && this->userId_ != nullptr; };
    // buildFee Field Functions 
    bool hasBuildFee() const { return this->buildFee_ != nullptr;};
    void deleteBuildFee() { this->buildFee_ = nullptr;};
    inline double buildFee() const { DARABONBA_PTR_GET_DEFAULT(buildFee_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList& setBuildFee(double buildFee) { DARABONBA_PTR_SET_VALUE(buildFee_, buildFee) };


    // corpPayAmount Field Functions 
    bool hasCorpPayAmount() const { return this->corpPayAmount_ != nullptr;};
    void deleteCorpPayAmount() { this->corpPayAmount_ = nullptr;};
    inline double corpPayAmount() const { DARABONBA_PTR_GET_DEFAULT(corpPayAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList& setCorpPayAmount(double corpPayAmount) { DARABONBA_PTR_SET_VALUE(corpPayAmount_, corpPayAmount) };


    // oilFee Field Functions 
    bool hasOilFee() const { return this->oilFee_ != nullptr;};
    void deleteOilFee() { this->oilFee_ = nullptr;};
    inline double oilFee() const { DARABONBA_PTR_GET_DEFAULT(oilFee_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList& setOilFee(double oilFee) { DARABONBA_PTR_SET_VALUE(oilFee_, oilFee) };


    // personPayAmount Field Functions 
    bool hasPersonPayAmount() const { return this->personPayAmount_ != nullptr;};
    void deletePersonPayAmount() { this->personPayAmount_ = nullptr;};
    inline double personPayAmount() const { DARABONBA_PTR_GET_DEFAULT(personPayAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList& setPersonPayAmount(double personPayAmount) { DARABONBA_PTR_SET_VALUE(personPayAmount_, personPayAmount) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline double ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList& setTicketPrice(double ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<double> buildFee_ = nullptr;
    std::shared_ptr<double> corpPayAmount_ = nullptr;
    std::shared_ptr<double> oilFee_ = nullptr;
    std::shared_ptr<double> personPayAmount_ = nullptr;
    std::shared_ptr<double> ticketPrice_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

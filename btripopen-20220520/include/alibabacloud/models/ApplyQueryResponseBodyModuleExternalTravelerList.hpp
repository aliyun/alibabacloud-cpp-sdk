// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYQUERYRESPONSEBODYMODULEEXTERNALTRAVELERLIST_HPP_
#define ALIBABACLOUD_MODELS_APPLYQUERYRESPONSEBODYMODULEEXTERNALTRAVELERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplyQueryResponseBodyModuleExternalTravelerListHotelCitys.hpp>
#include <alibabacloud/models/ApplyQueryResponseBodyModuleExternalTravelerListHotelIntlCitys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyQueryResponseBodyModuleExternalTravelerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyQueryResponseBodyModuleExternalTravelerList& obj) { 
      DARABONBA_PTR_TO_JSON(attribute, attribute_);
      DARABONBA_PTR_TO_JSON(business_discount, businessDiscount_);
      DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(economy_discount, economyDiscount_);
      DARABONBA_PTR_TO_JSON(external_user_id, externalUserId_);
      DARABONBA_PTR_TO_JSON(first_discount, firstDiscount_);
      DARABONBA_PTR_TO_JSON(flight_cabins, flightCabins_);
      DARABONBA_PTR_TO_JSON(flight_intl_rule_code, flightIntlRuleCode_);
      DARABONBA_PTR_TO_JSON(flight_rule_code, flightRuleCode_);
      DARABONBA_PTR_TO_JSON(hotel_citys, hotelCitys_);
      DARABONBA_PTR_TO_JSON(hotel_intl_citys, hotelIntlCitys_);
      DARABONBA_PTR_TO_JSON(hotel_intl_rule_code, hotelIntlRuleCode_);
      DARABONBA_PTR_TO_JSON(hotel_rule_code, hotelRuleCode_);
      DARABONBA_PTR_TO_JSON(invoice_name, invoiceName_);
      DARABONBA_PTR_TO_JSON(payment_department_id, paymentDepartmentId_);
      DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
      DARABONBA_PTR_TO_JSON(premium_economy_discount, premiumEconomyDiscount_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
      DARABONBA_PTR_TO_JSON(reserve_type, reserveType_);
      DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
      DARABONBA_PTR_TO_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
      DARABONBA_PTR_TO_JSON(thirdpart_depart_id, thirdpartDepartId_);
      DARABONBA_PTR_TO_JSON(train_rule_code, trainRuleCode_);
      DARABONBA_PTR_TO_JSON(train_seats, trainSeats_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyQueryResponseBodyModuleExternalTravelerList& obj) { 
      DARABONBA_PTR_FROM_JSON(attribute, attribute_);
      DARABONBA_PTR_FROM_JSON(business_discount, businessDiscount_);
      DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(economy_discount, economyDiscount_);
      DARABONBA_PTR_FROM_JSON(external_user_id, externalUserId_);
      DARABONBA_PTR_FROM_JSON(first_discount, firstDiscount_);
      DARABONBA_PTR_FROM_JSON(flight_cabins, flightCabins_);
      DARABONBA_PTR_FROM_JSON(flight_intl_rule_code, flightIntlRuleCode_);
      DARABONBA_PTR_FROM_JSON(flight_rule_code, flightRuleCode_);
      DARABONBA_PTR_FROM_JSON(hotel_citys, hotelCitys_);
      DARABONBA_PTR_FROM_JSON(hotel_intl_citys, hotelIntlCitys_);
      DARABONBA_PTR_FROM_JSON(hotel_intl_rule_code, hotelIntlRuleCode_);
      DARABONBA_PTR_FROM_JSON(hotel_rule_code, hotelRuleCode_);
      DARABONBA_PTR_FROM_JSON(invoice_name, invoiceName_);
      DARABONBA_PTR_FROM_JSON(payment_department_id, paymentDepartmentId_);
      DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
      DARABONBA_PTR_FROM_JSON(premium_economy_discount, premiumEconomyDiscount_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
      DARABONBA_PTR_FROM_JSON(reserve_type, reserveType_);
      DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_depart_id, thirdpartDepartId_);
      DARABONBA_PTR_FROM_JSON(train_rule_code, trainRuleCode_);
      DARABONBA_PTR_FROM_JSON(train_seats, trainSeats_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    ApplyQueryResponseBodyModuleExternalTravelerList() = default ;
    ApplyQueryResponseBodyModuleExternalTravelerList(const ApplyQueryResponseBodyModuleExternalTravelerList &) = default ;
    ApplyQueryResponseBodyModuleExternalTravelerList(ApplyQueryResponseBodyModuleExternalTravelerList &&) = default ;
    ApplyQueryResponseBodyModuleExternalTravelerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyQueryResponseBodyModuleExternalTravelerList() = default ;
    ApplyQueryResponseBodyModuleExternalTravelerList& operator=(const ApplyQueryResponseBodyModuleExternalTravelerList &) = default ;
    ApplyQueryResponseBodyModuleExternalTravelerList& operator=(ApplyQueryResponseBodyModuleExternalTravelerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attribute_ != nullptr
        && this->businessDiscount_ != nullptr && this->costCenterName_ != nullptr && this->departId_ != nullptr && this->economyDiscount_ != nullptr && this->externalUserId_ != nullptr
        && this->firstDiscount_ != nullptr && this->flightCabins_ != nullptr && this->flightIntlRuleCode_ != nullptr && this->flightRuleCode_ != nullptr && this->hotelCitys_ != nullptr
        && this->hotelIntlCitys_ != nullptr && this->hotelIntlRuleCode_ != nullptr && this->hotelRuleCode_ != nullptr && this->invoiceName_ != nullptr && this->paymentDepartmentId_ != nullptr
        && this->paymentDepartmentName_ != nullptr && this->premiumEconomyDiscount_ != nullptr && this->projectCode_ != nullptr && this->projectTitle_ != nullptr && this->reserveType_ != nullptr
        && this->thirdPartInvoiceId_ != nullptr && this->thirdpartCostCenterId_ != nullptr && this->thirdpartDepartId_ != nullptr && this->trainRuleCode_ != nullptr && this->trainSeats_ != nullptr
        && this->userName_ != nullptr; };
    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline string attribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


    // businessDiscount Field Functions 
    bool hasBusinessDiscount() const { return this->businessDiscount_ != nullptr;};
    void deleteBusinessDiscount() { this->businessDiscount_ = nullptr;};
    inline int32_t businessDiscount() const { DARABONBA_PTR_GET_DEFAULT(businessDiscount_, 0) };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setBusinessDiscount(int32_t businessDiscount) { DARABONBA_PTR_SET_VALUE(businessDiscount_, businessDiscount) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // economyDiscount Field Functions 
    bool hasEconomyDiscount() const { return this->economyDiscount_ != nullptr;};
    void deleteEconomyDiscount() { this->economyDiscount_ = nullptr;};
    inline int32_t economyDiscount() const { DARABONBA_PTR_GET_DEFAULT(economyDiscount_, 0) };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setEconomyDiscount(int32_t economyDiscount) { DARABONBA_PTR_SET_VALUE(economyDiscount_, economyDiscount) };


    // externalUserId Field Functions 
    bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
    void deleteExternalUserId() { this->externalUserId_ = nullptr;};
    inline string externalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


    // firstDiscount Field Functions 
    bool hasFirstDiscount() const { return this->firstDiscount_ != nullptr;};
    void deleteFirstDiscount() { this->firstDiscount_ = nullptr;};
    inline int32_t firstDiscount() const { DARABONBA_PTR_GET_DEFAULT(firstDiscount_, 0) };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setFirstDiscount(int32_t firstDiscount) { DARABONBA_PTR_SET_VALUE(firstDiscount_, firstDiscount) };


    // flightCabins Field Functions 
    bool hasFlightCabins() const { return this->flightCabins_ != nullptr;};
    void deleteFlightCabins() { this->flightCabins_ = nullptr;};
    inline string flightCabins() const { DARABONBA_PTR_GET_DEFAULT(flightCabins_, "") };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setFlightCabins(string flightCabins) { DARABONBA_PTR_SET_VALUE(flightCabins_, flightCabins) };


    // flightIntlRuleCode Field Functions 
    bool hasFlightIntlRuleCode() const { return this->flightIntlRuleCode_ != nullptr;};
    void deleteFlightIntlRuleCode() { this->flightIntlRuleCode_ = nullptr;};
    inline int64_t flightIntlRuleCode() const { DARABONBA_PTR_GET_DEFAULT(flightIntlRuleCode_, 0L) };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setFlightIntlRuleCode(int64_t flightIntlRuleCode) { DARABONBA_PTR_SET_VALUE(flightIntlRuleCode_, flightIntlRuleCode) };


    // flightRuleCode Field Functions 
    bool hasFlightRuleCode() const { return this->flightRuleCode_ != nullptr;};
    void deleteFlightRuleCode() { this->flightRuleCode_ = nullptr;};
    inline int64_t flightRuleCode() const { DARABONBA_PTR_GET_DEFAULT(flightRuleCode_, 0L) };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setFlightRuleCode(int64_t flightRuleCode) { DARABONBA_PTR_SET_VALUE(flightRuleCode_, flightRuleCode) };


    // hotelCitys Field Functions 
    bool hasHotelCitys() const { return this->hotelCitys_ != nullptr;};
    void deleteHotelCitys() { this->hotelCitys_ = nullptr;};
    inline const vector<Models::ApplyQueryResponseBodyModuleExternalTravelerListHotelCitys> & hotelCitys() const { DARABONBA_PTR_GET_CONST(hotelCitys_, vector<Models::ApplyQueryResponseBodyModuleExternalTravelerListHotelCitys>) };
    inline vector<Models::ApplyQueryResponseBodyModuleExternalTravelerListHotelCitys> hotelCitys() { DARABONBA_PTR_GET(hotelCitys_, vector<Models::ApplyQueryResponseBodyModuleExternalTravelerListHotelCitys>) };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setHotelCitys(const vector<Models::ApplyQueryResponseBodyModuleExternalTravelerListHotelCitys> & hotelCitys) { DARABONBA_PTR_SET_VALUE(hotelCitys_, hotelCitys) };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setHotelCitys(vector<Models::ApplyQueryResponseBodyModuleExternalTravelerListHotelCitys> && hotelCitys) { DARABONBA_PTR_SET_RVALUE(hotelCitys_, hotelCitys) };


    // hotelIntlCitys Field Functions 
    bool hasHotelIntlCitys() const { return this->hotelIntlCitys_ != nullptr;};
    void deleteHotelIntlCitys() { this->hotelIntlCitys_ = nullptr;};
    inline const vector<Models::ApplyQueryResponseBodyModuleExternalTravelerListHotelIntlCitys> & hotelIntlCitys() const { DARABONBA_PTR_GET_CONST(hotelIntlCitys_, vector<Models::ApplyQueryResponseBodyModuleExternalTravelerListHotelIntlCitys>) };
    inline vector<Models::ApplyQueryResponseBodyModuleExternalTravelerListHotelIntlCitys> hotelIntlCitys() { DARABONBA_PTR_GET(hotelIntlCitys_, vector<Models::ApplyQueryResponseBodyModuleExternalTravelerListHotelIntlCitys>) };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setHotelIntlCitys(const vector<Models::ApplyQueryResponseBodyModuleExternalTravelerListHotelIntlCitys> & hotelIntlCitys) { DARABONBA_PTR_SET_VALUE(hotelIntlCitys_, hotelIntlCitys) };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setHotelIntlCitys(vector<Models::ApplyQueryResponseBodyModuleExternalTravelerListHotelIntlCitys> && hotelIntlCitys) { DARABONBA_PTR_SET_RVALUE(hotelIntlCitys_, hotelIntlCitys) };


    // hotelIntlRuleCode Field Functions 
    bool hasHotelIntlRuleCode() const { return this->hotelIntlRuleCode_ != nullptr;};
    void deleteHotelIntlRuleCode() { this->hotelIntlRuleCode_ = nullptr;};
    inline int64_t hotelIntlRuleCode() const { DARABONBA_PTR_GET_DEFAULT(hotelIntlRuleCode_, 0L) };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setHotelIntlRuleCode(int64_t hotelIntlRuleCode) { DARABONBA_PTR_SET_VALUE(hotelIntlRuleCode_, hotelIntlRuleCode) };


    // hotelRuleCode Field Functions 
    bool hasHotelRuleCode() const { return this->hotelRuleCode_ != nullptr;};
    void deleteHotelRuleCode() { this->hotelRuleCode_ = nullptr;};
    inline int64_t hotelRuleCode() const { DARABONBA_PTR_GET_DEFAULT(hotelRuleCode_, 0L) };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setHotelRuleCode(int64_t hotelRuleCode) { DARABONBA_PTR_SET_VALUE(hotelRuleCode_, hotelRuleCode) };


    // invoiceName Field Functions 
    bool hasInvoiceName() const { return this->invoiceName_ != nullptr;};
    void deleteInvoiceName() { this->invoiceName_ = nullptr;};
    inline string invoiceName() const { DARABONBA_PTR_GET_DEFAULT(invoiceName_, "") };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setInvoiceName(string invoiceName) { DARABONBA_PTR_SET_VALUE(invoiceName_, invoiceName) };


    // paymentDepartmentId Field Functions 
    bool hasPaymentDepartmentId() const { return this->paymentDepartmentId_ != nullptr;};
    void deletePaymentDepartmentId() { this->paymentDepartmentId_ = nullptr;};
    inline string paymentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentId_, "") };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setPaymentDepartmentId(string paymentDepartmentId) { DARABONBA_PTR_SET_VALUE(paymentDepartmentId_, paymentDepartmentId) };


    // paymentDepartmentName Field Functions 
    bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
    void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
    inline string paymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


    // premiumEconomyDiscount Field Functions 
    bool hasPremiumEconomyDiscount() const { return this->premiumEconomyDiscount_ != nullptr;};
    void deletePremiumEconomyDiscount() { this->premiumEconomyDiscount_ = nullptr;};
    inline int32_t premiumEconomyDiscount() const { DARABONBA_PTR_GET_DEFAULT(premiumEconomyDiscount_, 0) };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setPremiumEconomyDiscount(int32_t premiumEconomyDiscount) { DARABONBA_PTR_SET_VALUE(premiumEconomyDiscount_, premiumEconomyDiscount) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // reserveType Field Functions 
    bool hasReserveType() const { return this->reserveType_ != nullptr;};
    void deleteReserveType() { this->reserveType_ = nullptr;};
    inline int32_t reserveType() const { DARABONBA_PTR_GET_DEFAULT(reserveType_, 0) };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setReserveType(int32_t reserveType) { DARABONBA_PTR_SET_VALUE(reserveType_, reserveType) };


    // thirdPartInvoiceId Field Functions 
    bool hasThirdPartInvoiceId() const { return this->thirdPartInvoiceId_ != nullptr;};
    void deleteThirdPartInvoiceId() { this->thirdPartInvoiceId_ = nullptr;};
    inline string thirdPartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartInvoiceId_, "") };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setThirdPartInvoiceId(string thirdPartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdPartInvoiceId_, thirdPartInvoiceId) };


    // thirdpartCostCenterId Field Functions 
    bool hasThirdpartCostCenterId() const { return this->thirdpartCostCenterId_ != nullptr;};
    void deleteThirdpartCostCenterId() { this->thirdpartCostCenterId_ = nullptr;};
    inline string thirdpartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCostCenterId_, "") };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setThirdpartCostCenterId(string thirdpartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdpartCostCenterId_, thirdpartCostCenterId) };


    // thirdpartDepartId Field Functions 
    bool hasThirdpartDepartId() const { return this->thirdpartDepartId_ != nullptr;};
    void deleteThirdpartDepartId() { this->thirdpartDepartId_ = nullptr;};
    inline string thirdpartDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartDepartId_, "") };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setThirdpartDepartId(string thirdpartDepartId) { DARABONBA_PTR_SET_VALUE(thirdpartDepartId_, thirdpartDepartId) };


    // trainRuleCode Field Functions 
    bool hasTrainRuleCode() const { return this->trainRuleCode_ != nullptr;};
    void deleteTrainRuleCode() { this->trainRuleCode_ = nullptr;};
    inline int64_t trainRuleCode() const { DARABONBA_PTR_GET_DEFAULT(trainRuleCode_, 0L) };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setTrainRuleCode(int64_t trainRuleCode) { DARABONBA_PTR_SET_VALUE(trainRuleCode_, trainRuleCode) };


    // trainSeats Field Functions 
    bool hasTrainSeats() const { return this->trainSeats_ != nullptr;};
    void deleteTrainSeats() { this->trainSeats_ = nullptr;};
    inline string trainSeats() const { DARABONBA_PTR_GET_DEFAULT(trainSeats_, "") };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setTrainSeats(string trainSeats) { DARABONBA_PTR_SET_VALUE(trainSeats_, trainSeats) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ApplyQueryResponseBodyModuleExternalTravelerList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> attribute_ = nullptr;
    std::shared_ptr<int32_t> businessDiscount_ = nullptr;
    std::shared_ptr<string> costCenterName_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<int32_t> economyDiscount_ = nullptr;
    std::shared_ptr<string> externalUserId_ = nullptr;
    std::shared_ptr<int32_t> firstDiscount_ = nullptr;
    std::shared_ptr<string> flightCabins_ = nullptr;
    std::shared_ptr<int64_t> flightIntlRuleCode_ = nullptr;
    std::shared_ptr<int64_t> flightRuleCode_ = nullptr;
    std::shared_ptr<vector<Models::ApplyQueryResponseBodyModuleExternalTravelerListHotelCitys>> hotelCitys_ = nullptr;
    std::shared_ptr<vector<Models::ApplyQueryResponseBodyModuleExternalTravelerListHotelIntlCitys>> hotelIntlCitys_ = nullptr;
    std::shared_ptr<int64_t> hotelIntlRuleCode_ = nullptr;
    std::shared_ptr<int64_t> hotelRuleCode_ = nullptr;
    std::shared_ptr<string> invoiceName_ = nullptr;
    std::shared_ptr<string> paymentDepartmentId_ = nullptr;
    std::shared_ptr<string> paymentDepartmentName_ = nullptr;
    std::shared_ptr<int32_t> premiumEconomyDiscount_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
    std::shared_ptr<int32_t> reserveType_ = nullptr;
    std::shared_ptr<string> thirdPartInvoiceId_ = nullptr;
    std::shared_ptr<string> thirdpartCostCenterId_ = nullptr;
    std::shared_ptr<string> thirdpartDepartId_ = nullptr;
    std::shared_ptr<int64_t> trainRuleCode_ = nullptr;
    std::shared_ptr<string> trainSeats_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

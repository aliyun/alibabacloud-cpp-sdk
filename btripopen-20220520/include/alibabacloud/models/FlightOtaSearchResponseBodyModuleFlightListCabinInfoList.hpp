// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTASEARCHRESPONSEBODYMODULEFLIGHTLISTCABININFOLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTASEARCHRESPONSEBODYMODULEFLIGHTLISTCABININFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaSearchResponseBodyModuleFlightListCabinInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(agent_id, agentId_);
      DARABONBA_PTR_TO_JSON(basic_cabin_price, basicCabinPrice_);
      DARABONBA_PTR_TO_JSON(build_price, buildPrice_);
      DARABONBA_PTR_TO_JSON(cabin, cabin_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(cabin_class_name, cabinClassName_);
      DARABONBA_PTR_TO_JSON(child_cabin, childCabin_);
      DARABONBA_PTR_TO_JSON(class_name, className_);
      DARABONBA_PTR_TO_JSON(class_rule, classRule_);
      DARABONBA_PTR_TO_JSON(discount, discount_);
      DARABONBA_PTR_TO_JSON(flight_rule_list, flightRuleList_);
      DARABONBA_PTR_TO_JSON(flight_rule_list_str, flightRuleListStr_);
      DARABONBA_PTR_TO_JSON(invoice_type, invoiceType_);
      DARABONBA_PTR_TO_JSON(is_protocol, isProtocol_);
      DARABONBA_PTR_TO_JSON(oil_price, oilPrice_);
      DARABONBA_PTR_TO_JSON(order_params, orderParams_);
      DARABONBA_PTR_TO_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(product_type, productType_);
      DARABONBA_PTR_TO_JSON(product_type_desc, productTypeDesc_);
      DARABONBA_PTR_TO_JSON(promotion_price, promotionPrice_);
      DARABONBA_PTR_TO_JSON(remained_seat_count, remainedSeatCount_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(agent_id, agentId_);
      DARABONBA_PTR_FROM_JSON(basic_cabin_price, basicCabinPrice_);
      DARABONBA_PTR_FROM_JSON(build_price, buildPrice_);
      DARABONBA_PTR_FROM_JSON(cabin, cabin_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(cabin_class_name, cabinClassName_);
      DARABONBA_PTR_FROM_JSON(child_cabin, childCabin_);
      DARABONBA_PTR_FROM_JSON(class_name, className_);
      DARABONBA_PTR_FROM_JSON(class_rule, classRule_);
      DARABONBA_PTR_FROM_JSON(discount, discount_);
      DARABONBA_PTR_FROM_JSON(flight_rule_list, flightRuleList_);
      DARABONBA_PTR_FROM_JSON(flight_rule_list_str, flightRuleListStr_);
      DARABONBA_PTR_FROM_JSON(invoice_type, invoiceType_);
      DARABONBA_PTR_FROM_JSON(is_protocol, isProtocol_);
      DARABONBA_PTR_FROM_JSON(oil_price, oilPrice_);
      DARABONBA_PTR_FROM_JSON(order_params, orderParams_);
      DARABONBA_PTR_FROM_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(product_type, productType_);
      DARABONBA_PTR_FROM_JSON(product_type_desc, productTypeDesc_);
      DARABONBA_PTR_FROM_JSON(promotion_price, promotionPrice_);
      DARABONBA_PTR_FROM_JSON(remained_seat_count, remainedSeatCount_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
    };
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoList() = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoList(const FlightOtaSearchResponseBodyModuleFlightListCabinInfoList &) = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoList(FlightOtaSearchResponseBodyModuleFlightListCabinInfoList &&) = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaSearchResponseBodyModuleFlightListCabinInfoList() = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& operator=(const FlightOtaSearchResponseBodyModuleFlightListCabinInfoList &) = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& operator=(FlightOtaSearchResponseBodyModuleFlightListCabinInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentId_ != nullptr
        && this->basicCabinPrice_ != nullptr && this->buildPrice_ != nullptr && this->cabin_ != nullptr && this->cabinClass_ != nullptr && this->cabinClassName_ != nullptr
        && this->childCabin_ != nullptr && this->className_ != nullptr && this->classRule_ != nullptr && this->discount_ != nullptr && this->flightRuleList_ != nullptr
        && this->flightRuleListStr_ != nullptr && this->invoiceType_ != nullptr && this->isProtocol_ != nullptr && this->oilPrice_ != nullptr && this->orderParams_ != nullptr
        && this->otaItemId_ != nullptr && this->price_ != nullptr && this->productType_ != nullptr && this->productTypeDesc_ != nullptr && this->promotionPrice_ != nullptr
        && this->remainedSeatCount_ != nullptr && this->ticketPrice_ != nullptr && this->totalPrice_ != nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline int64_t agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // basicCabinPrice Field Functions 
    bool hasBasicCabinPrice() const { return this->basicCabinPrice_ != nullptr;};
    void deleteBasicCabinPrice() { this->basicCabinPrice_ = nullptr;};
    inline int32_t basicCabinPrice() const { DARABONBA_PTR_GET_DEFAULT(basicCabinPrice_, 0) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setBasicCabinPrice(int32_t basicCabinPrice) { DARABONBA_PTR_SET_VALUE(basicCabinPrice_, basicCabinPrice) };


    // buildPrice Field Functions 
    bool hasBuildPrice() const { return this->buildPrice_ != nullptr;};
    void deleteBuildPrice() { this->buildPrice_ = nullptr;};
    inline int32_t buildPrice() const { DARABONBA_PTR_GET_DEFAULT(buildPrice_, 0) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setBuildPrice(int32_t buildPrice) { DARABONBA_PTR_SET_VALUE(buildPrice_, buildPrice) };


    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline string cabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // cabinClassName Field Functions 
    bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
    void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
    inline string cabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


    // childCabin Field Functions 
    bool hasChildCabin() const { return this->childCabin_ != nullptr;};
    void deleteChildCabin() { this->childCabin_ = nullptr;};
    inline string childCabin() const { DARABONBA_PTR_GET_DEFAULT(childCabin_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setChildCabin(string childCabin) { DARABONBA_PTR_SET_VALUE(childCabin_, childCabin) };


    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // classRule Field Functions 
    bool hasClassRule() const { return this->classRule_ != nullptr;};
    void deleteClassRule() { this->classRule_ = nullptr;};
    inline string classRule() const { DARABONBA_PTR_GET_DEFAULT(classRule_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setClassRule(string classRule) { DARABONBA_PTR_SET_VALUE(classRule_, classRule) };


    // discount Field Functions 
    bool hasDiscount() const { return this->discount_ != nullptr;};
    void deleteDiscount() { this->discount_ = nullptr;};
    inline string discount() const { DARABONBA_PTR_GET_DEFAULT(discount_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setDiscount(string discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


    // flightRuleList Field Functions 
    bool hasFlightRuleList() const { return this->flightRuleList_ != nullptr;};
    void deleteFlightRuleList() { this->flightRuleList_ = nullptr;};
    inline const vector<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList> & flightRuleList() const { DARABONBA_PTR_GET_CONST(flightRuleList_, vector<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList>) };
    inline vector<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList> flightRuleList() { DARABONBA_PTR_GET(flightRuleList_, vector<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList>) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setFlightRuleList(const vector<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList> & flightRuleList) { DARABONBA_PTR_SET_VALUE(flightRuleList_, flightRuleList) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setFlightRuleList(vector<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList> && flightRuleList) { DARABONBA_PTR_SET_RVALUE(flightRuleList_, flightRuleList) };


    // flightRuleListStr Field Functions 
    bool hasFlightRuleListStr() const { return this->flightRuleListStr_ != nullptr;};
    void deleteFlightRuleListStr() { this->flightRuleListStr_ = nullptr;};
    inline string flightRuleListStr() const { DARABONBA_PTR_GET_DEFAULT(flightRuleListStr_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setFlightRuleListStr(string flightRuleListStr) { DARABONBA_PTR_SET_VALUE(flightRuleListStr_, flightRuleListStr) };


    // invoiceType Field Functions 
    bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
    void deleteInvoiceType() { this->invoiceType_ = nullptr;};
    inline int32_t invoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, 0) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setInvoiceType(int32_t invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


    // isProtocol Field Functions 
    bool hasIsProtocol() const { return this->isProtocol_ != nullptr;};
    void deleteIsProtocol() { this->isProtocol_ = nullptr;};
    inline bool isProtocol() const { DARABONBA_PTR_GET_DEFAULT(isProtocol_, false) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setIsProtocol(bool isProtocol) { DARABONBA_PTR_SET_VALUE(isProtocol_, isProtocol) };


    // oilPrice Field Functions 
    bool hasOilPrice() const { return this->oilPrice_ != nullptr;};
    void deleteOilPrice() { this->oilPrice_ = nullptr;};
    inline int32_t oilPrice() const { DARABONBA_PTR_GET_DEFAULT(oilPrice_, 0) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setOilPrice(int32_t oilPrice) { DARABONBA_PTR_SET_VALUE(oilPrice_, oilPrice) };


    // orderParams Field Functions 
    bool hasOrderParams() const { return this->orderParams_ != nullptr;};
    void deleteOrderParams() { this->orderParams_ = nullptr;};
    inline string orderParams() const { DARABONBA_PTR_GET_DEFAULT(orderParams_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setOrderParams(string orderParams) { DARABONBA_PTR_SET_VALUE(orderParams_, orderParams) };


    // otaItemId Field Functions 
    bool hasOtaItemId() const { return this->otaItemId_ != nullptr;};
    void deleteOtaItemId() { this->otaItemId_ = nullptr;};
    inline string otaItemId() const { DARABONBA_PTR_GET_DEFAULT(otaItemId_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setOtaItemId(string otaItemId) { DARABONBA_PTR_SET_VALUE(otaItemId_, otaItemId) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int32_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setPrice(int32_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline int64_t productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, 0L) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setProductType(int64_t productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // productTypeDesc Field Functions 
    bool hasProductTypeDesc() const { return this->productTypeDesc_ != nullptr;};
    void deleteProductTypeDesc() { this->productTypeDesc_ = nullptr;};
    inline string productTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(productTypeDesc_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setProductTypeDesc(string productTypeDesc) { DARABONBA_PTR_SET_VALUE(productTypeDesc_, productTypeDesc) };


    // promotionPrice Field Functions 
    bool hasPromotionPrice() const { return this->promotionPrice_ != nullptr;};
    void deletePromotionPrice() { this->promotionPrice_ = nullptr;};
    inline string promotionPrice() const { DARABONBA_PTR_GET_DEFAULT(promotionPrice_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setPromotionPrice(string promotionPrice) { DARABONBA_PTR_SET_VALUE(promotionPrice_, promotionPrice) };


    // remainedSeatCount Field Functions 
    bool hasRemainedSeatCount() const { return this->remainedSeatCount_ != nullptr;};
    void deleteRemainedSeatCount() { this->remainedSeatCount_ = nullptr;};
    inline string remainedSeatCount() const { DARABONBA_PTR_GET_DEFAULT(remainedSeatCount_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setRemainedSeatCount(string remainedSeatCount) { DARABONBA_PTR_SET_VALUE(remainedSeatCount_, remainedSeatCount) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline int32_t ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setTicketPrice(int32_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline int32_t totalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoList& setTotalPrice(int32_t totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


  protected:
    std::shared_ptr<int64_t> agentId_ = nullptr;
    std::shared_ptr<int32_t> basicCabinPrice_ = nullptr;
    std::shared_ptr<int32_t> buildPrice_ = nullptr;
    std::shared_ptr<string> cabin_ = nullptr;
    std::shared_ptr<string> cabinClass_ = nullptr;
    std::shared_ptr<string> cabinClassName_ = nullptr;
    std::shared_ptr<string> childCabin_ = nullptr;
    std::shared_ptr<string> className_ = nullptr;
    std::shared_ptr<string> classRule_ = nullptr;
    std::shared_ptr<string> discount_ = nullptr;
    std::shared_ptr<vector<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList>> flightRuleList_ = nullptr;
    std::shared_ptr<string> flightRuleListStr_ = nullptr;
    std::shared_ptr<int32_t> invoiceType_ = nullptr;
    std::shared_ptr<bool> isProtocol_ = nullptr;
    std::shared_ptr<int32_t> oilPrice_ = nullptr;
    std::shared_ptr<string> orderParams_ = nullptr;
    std::shared_ptr<string> otaItemId_ = nullptr;
    std::shared_ptr<int32_t> price_ = nullptr;
    std::shared_ptr<int64_t> productType_ = nullptr;
    std::shared_ptr<string> productTypeDesc_ = nullptr;
    std::shared_ptr<string> promotionPrice_ = nullptr;
    std::shared_ptr<string> remainedSeatCount_ = nullptr;
    std::shared_ptr<int32_t> ticketPrice_ = nullptr;
    std::shared_ptr<int32_t> totalPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

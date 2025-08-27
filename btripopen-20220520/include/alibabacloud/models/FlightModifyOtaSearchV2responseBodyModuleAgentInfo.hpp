// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODYMODULEAGENTINFO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODYMODULEAGENTINFO_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/ModuleAgentInfoAttributeShowInfoMapValue.hpp>
#include <alibabacloud/models/FlightModifyOtaSearchV2ResponseBodyModuleAgentInfoCabinClassInfo.hpp>
#include <alibabacloud/models/FlightModifyOtaSearchV2ResponseBodyModuleAgentInfoPriceInfoDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo& obj) { 
      DARABONBA_PTR_TO_JSON(attribute_show_info_map, attributeShowInfoMap_);
      DARABONBA_PTR_TO_JSON(best_discount, bestDiscount_);
      DARABONBA_PTR_TO_JSON(cabin_class_info, cabinClassInfo_);
      DARABONBA_PTR_TO_JSON(cabin_code, cabinCode_);
      DARABONBA_PTR_TO_JSON(cabin_name, cabinName_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(modify_type_desc, modifyTypeDesc_);
      DARABONBA_PTR_TO_JSON(modify_type_name, modifyTypeName_);
      DARABONBA_PTR_TO_JSON(price_info_d_t_o, priceInfoDTO_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(support_child_ticket, supportChildTicket_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(attribute_show_info_map, attributeShowInfoMap_);
      DARABONBA_PTR_FROM_JSON(best_discount, bestDiscount_);
      DARABONBA_PTR_FROM_JSON(cabin_class_info, cabinClassInfo_);
      DARABONBA_PTR_FROM_JSON(cabin_code, cabinCode_);
      DARABONBA_PTR_FROM_JSON(cabin_name, cabinName_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(modify_type_desc, modifyTypeDesc_);
      DARABONBA_PTR_FROM_JSON(modify_type_name, modifyTypeName_);
      DARABONBA_PTR_FROM_JSON(price_info_d_t_o, priceInfoDTO_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(support_child_ticket, supportChildTicket_);
    };
    FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo() = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo(const FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo &) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo(FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo &&) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo() = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo& operator=(const FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo &) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo& operator=(FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributeShowInfoMap_ != nullptr
        && this->bestDiscount_ != nullptr && this->cabinClassInfo_ != nullptr && this->cabinCode_ != nullptr && this->cabinName_ != nullptr && this->itemId_ != nullptr
        && this->modifyTypeDesc_ != nullptr && this->modifyTypeName_ != nullptr && this->priceInfoDTO_ != nullptr && this->quantity_ != nullptr && this->supportChildTicket_ != nullptr; };
    // attributeShowInfoMap Field Functions 
    bool hasAttributeShowInfoMap() const { return this->attributeShowInfoMap_ != nullptr;};
    void deleteAttributeShowInfoMap() { this->attributeShowInfoMap_ = nullptr;};
    inline const map<string, vector<Models::ModuleAgentInfoAttributeShowInfoMapValue>> & attributeShowInfoMap() const { DARABONBA_PTR_GET_CONST(attributeShowInfoMap_, map<string, vector<Models::ModuleAgentInfoAttributeShowInfoMapValue>>) };
    inline map<string, vector<Models::ModuleAgentInfoAttributeShowInfoMapValue>> attributeShowInfoMap() { DARABONBA_PTR_GET(attributeShowInfoMap_, map<string, vector<Models::ModuleAgentInfoAttributeShowInfoMapValue>>) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo& setAttributeShowInfoMap(const map<string, vector<Models::ModuleAgentInfoAttributeShowInfoMapValue>> & attributeShowInfoMap) { DARABONBA_PTR_SET_VALUE(attributeShowInfoMap_, attributeShowInfoMap) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo& setAttributeShowInfoMap(map<string, vector<Models::ModuleAgentInfoAttributeShowInfoMapValue>> && attributeShowInfoMap) { DARABONBA_PTR_SET_RVALUE(attributeShowInfoMap_, attributeShowInfoMap) };


    // bestDiscount Field Functions 
    bool hasBestDiscount() const { return this->bestDiscount_ != nullptr;};
    void deleteBestDiscount() { this->bestDiscount_ = nullptr;};
    inline double bestDiscount() const { DARABONBA_PTR_GET_DEFAULT(bestDiscount_, 0.0) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo& setBestDiscount(double bestDiscount) { DARABONBA_PTR_SET_VALUE(bestDiscount_, bestDiscount) };


    // cabinClassInfo Field Functions 
    bool hasCabinClassInfo() const { return this->cabinClassInfo_ != nullptr;};
    void deleteCabinClassInfo() { this->cabinClassInfo_ = nullptr;};
    inline const Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfoCabinClassInfo & cabinClassInfo() const { DARABONBA_PTR_GET_CONST(cabinClassInfo_, Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfoCabinClassInfo) };
    inline Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfoCabinClassInfo cabinClassInfo() { DARABONBA_PTR_GET(cabinClassInfo_, Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfoCabinClassInfo) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo& setCabinClassInfo(const Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfoCabinClassInfo & cabinClassInfo) { DARABONBA_PTR_SET_VALUE(cabinClassInfo_, cabinClassInfo) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo& setCabinClassInfo(Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfoCabinClassInfo && cabinClassInfo) { DARABONBA_PTR_SET_RVALUE(cabinClassInfo_, cabinClassInfo) };


    // cabinCode Field Functions 
    bool hasCabinCode() const { return this->cabinCode_ != nullptr;};
    void deleteCabinCode() { this->cabinCode_ = nullptr;};
    inline int32_t cabinCode() const { DARABONBA_PTR_GET_DEFAULT(cabinCode_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo& setCabinCode(int32_t cabinCode) { DARABONBA_PTR_SET_VALUE(cabinCode_, cabinCode) };


    // cabinName Field Functions 
    bool hasCabinName() const { return this->cabinName_ != nullptr;};
    void deleteCabinName() { this->cabinName_ = nullptr;};
    inline string cabinName() const { DARABONBA_PTR_GET_DEFAULT(cabinName_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo& setCabinName(string cabinName) { DARABONBA_PTR_SET_VALUE(cabinName_, cabinName) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // modifyTypeDesc Field Functions 
    bool hasModifyTypeDesc() const { return this->modifyTypeDesc_ != nullptr;};
    void deleteModifyTypeDesc() { this->modifyTypeDesc_ = nullptr;};
    inline string modifyTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(modifyTypeDesc_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo& setModifyTypeDesc(string modifyTypeDesc) { DARABONBA_PTR_SET_VALUE(modifyTypeDesc_, modifyTypeDesc) };


    // modifyTypeName Field Functions 
    bool hasModifyTypeName() const { return this->modifyTypeName_ != nullptr;};
    void deleteModifyTypeName() { this->modifyTypeName_ = nullptr;};
    inline string modifyTypeName() const { DARABONBA_PTR_GET_DEFAULT(modifyTypeName_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo& setModifyTypeName(string modifyTypeName) { DARABONBA_PTR_SET_VALUE(modifyTypeName_, modifyTypeName) };


    // priceInfoDTO Field Functions 
    bool hasPriceInfoDTO() const { return this->priceInfoDTO_ != nullptr;};
    void deletePriceInfoDTO() { this->priceInfoDTO_ = nullptr;};
    inline const Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfoPriceInfoDTO & priceInfoDTO() const { DARABONBA_PTR_GET_CONST(priceInfoDTO_, Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfoPriceInfoDTO) };
    inline Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfoPriceInfoDTO priceInfoDTO() { DARABONBA_PTR_GET(priceInfoDTO_, Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfoPriceInfoDTO) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo& setPriceInfoDTO(const Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfoPriceInfoDTO & priceInfoDTO) { DARABONBA_PTR_SET_VALUE(priceInfoDTO_, priceInfoDTO) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo& setPriceInfoDTO(Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfoPriceInfoDTO && priceInfoDTO) { DARABONBA_PTR_SET_RVALUE(priceInfoDTO_, priceInfoDTO) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // supportChildTicket Field Functions 
    bool hasSupportChildTicket() const { return this->supportChildTicket_ != nullptr;};
    void deleteSupportChildTicket() { this->supportChildTicket_ = nullptr;};
    inline bool supportChildTicket() const { DARABONBA_PTR_GET_DEFAULT(supportChildTicket_, false) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo& setSupportChildTicket(bool supportChildTicket) { DARABONBA_PTR_SET_VALUE(supportChildTicket_, supportChildTicket) };


  protected:
    std::shared_ptr<map<string, vector<Models::ModuleAgentInfoAttributeShowInfoMapValue>>> attributeShowInfoMap_ = nullptr;
    std::shared_ptr<double> bestDiscount_ = nullptr;
    std::shared_ptr<Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfoCabinClassInfo> cabinClassInfo_ = nullptr;
    std::shared_ptr<int32_t> cabinCode_ = nullptr;
    std::shared_ptr<string> cabinName_ = nullptr;
    // item_id
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<string> modifyTypeDesc_ = nullptr;
    std::shared_ptr<string> modifyTypeName_ = nullptr;
    std::shared_ptr<Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfoPriceInfoDTO> priceInfoDTO_ = nullptr;
    std::shared_ptr<int32_t> quantity_ = nullptr;
    std::shared_ptr<bool> supportChildTicket_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

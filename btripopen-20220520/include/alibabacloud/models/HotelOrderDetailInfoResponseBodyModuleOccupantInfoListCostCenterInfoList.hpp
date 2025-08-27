// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERDETAILINFORESPONSEBODYMODULEOCCUPANTINFOLISTCOSTCENTERINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERDETAILINFORESPONSEBODYMODULEOCCUPANTINFOLISTCOSTCENTERINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_TO_JSON(cost_center_no, costCenterNo_);
      DARABONBA_PTR_TO_JSON(cost_center_prices, costCenterPrices_);
      DARABONBA_PTR_TO_JSON(cost_center_ratios, costCenterRatios_);
      DARABONBA_PTR_TO_JSON(cost_center_subject_code, costCenterSubjectCode_);
      DARABONBA_PTR_TO_JSON(cost_center_subject_name, costCenterSubjectName_);
      DARABONBA_PTR_TO_JSON(settle_subject_id, settleSubjectId_);
      DARABONBA_PTR_TO_JSON(settle_subject_name, settleSubjectName_);
      DARABONBA_PTR_TO_JSON(settle_subject_no, settleSubjectNo_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_FROM_JSON(cost_center_no, costCenterNo_);
      DARABONBA_PTR_FROM_JSON(cost_center_prices, costCenterPrices_);
      DARABONBA_PTR_FROM_JSON(cost_center_ratios, costCenterRatios_);
      DARABONBA_PTR_FROM_JSON(cost_center_subject_code, costCenterSubjectCode_);
      DARABONBA_PTR_FROM_JSON(cost_center_subject_name, costCenterSubjectName_);
      DARABONBA_PTR_FROM_JSON(settle_subject_id, settleSubjectId_);
      DARABONBA_PTR_FROM_JSON(settle_subject_name, settleSubjectName_);
      DARABONBA_PTR_FROM_JSON(settle_subject_no, settleSubjectNo_);
    };
    HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList() = default ;
    HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList(const HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList &) = default ;
    HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList(HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList &&) = default ;
    HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList() = default ;
    HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList& operator=(const HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList &) = default ;
    HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList& operator=(HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterId_ != nullptr
        && this->costCenterName_ != nullptr && this->costCenterNo_ != nullptr && this->costCenterPrices_ != nullptr && this->costCenterRatios_ != nullptr && this->costCenterSubjectCode_ != nullptr
        && this->costCenterSubjectName_ != nullptr && this->settleSubjectId_ != nullptr && this->settleSubjectName_ != nullptr && this->settleSubjectNo_ != nullptr; };
    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline string costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList& setCostCenterId(string costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // costCenterNo Field Functions 
    bool hasCostCenterNo() const { return this->costCenterNo_ != nullptr;};
    void deleteCostCenterNo() { this->costCenterNo_ = nullptr;};
    inline string costCenterNo() const { DARABONBA_PTR_GET_DEFAULT(costCenterNo_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList& setCostCenterNo(string costCenterNo) { DARABONBA_PTR_SET_VALUE(costCenterNo_, costCenterNo) };


    // costCenterPrices Field Functions 
    bool hasCostCenterPrices() const { return this->costCenterPrices_ != nullptr;};
    void deleteCostCenterPrices() { this->costCenterPrices_ = nullptr;};
    inline int64_t costCenterPrices() const { DARABONBA_PTR_GET_DEFAULT(costCenterPrices_, 0L) };
    inline HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList& setCostCenterPrices(int64_t costCenterPrices) { DARABONBA_PTR_SET_VALUE(costCenterPrices_, costCenterPrices) };


    // costCenterRatios Field Functions 
    bool hasCostCenterRatios() const { return this->costCenterRatios_ != nullptr;};
    void deleteCostCenterRatios() { this->costCenterRatios_ = nullptr;};
    inline int64_t costCenterRatios() const { DARABONBA_PTR_GET_DEFAULT(costCenterRatios_, 0L) };
    inline HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList& setCostCenterRatios(int64_t costCenterRatios) { DARABONBA_PTR_SET_VALUE(costCenterRatios_, costCenterRatios) };


    // costCenterSubjectCode Field Functions 
    bool hasCostCenterSubjectCode() const { return this->costCenterSubjectCode_ != nullptr;};
    void deleteCostCenterSubjectCode() { this->costCenterSubjectCode_ = nullptr;};
    inline string costCenterSubjectCode() const { DARABONBA_PTR_GET_DEFAULT(costCenterSubjectCode_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList& setCostCenterSubjectCode(string costCenterSubjectCode) { DARABONBA_PTR_SET_VALUE(costCenterSubjectCode_, costCenterSubjectCode) };


    // costCenterSubjectName Field Functions 
    bool hasCostCenterSubjectName() const { return this->costCenterSubjectName_ != nullptr;};
    void deleteCostCenterSubjectName() { this->costCenterSubjectName_ = nullptr;};
    inline string costCenterSubjectName() const { DARABONBA_PTR_GET_DEFAULT(costCenterSubjectName_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList& setCostCenterSubjectName(string costCenterSubjectName) { DARABONBA_PTR_SET_VALUE(costCenterSubjectName_, costCenterSubjectName) };


    // settleSubjectId Field Functions 
    bool hasSettleSubjectId() const { return this->settleSubjectId_ != nullptr;};
    void deleteSettleSubjectId() { this->settleSubjectId_ = nullptr;};
    inline string settleSubjectId() const { DARABONBA_PTR_GET_DEFAULT(settleSubjectId_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList& setSettleSubjectId(string settleSubjectId) { DARABONBA_PTR_SET_VALUE(settleSubjectId_, settleSubjectId) };


    // settleSubjectName Field Functions 
    bool hasSettleSubjectName() const { return this->settleSubjectName_ != nullptr;};
    void deleteSettleSubjectName() { this->settleSubjectName_ = nullptr;};
    inline string settleSubjectName() const { DARABONBA_PTR_GET_DEFAULT(settleSubjectName_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList& setSettleSubjectName(string settleSubjectName) { DARABONBA_PTR_SET_VALUE(settleSubjectName_, settleSubjectName) };


    // settleSubjectNo Field Functions 
    bool hasSettleSubjectNo() const { return this->settleSubjectNo_ != nullptr;};
    void deleteSettleSubjectNo() { this->settleSubjectNo_ = nullptr;};
    inline string settleSubjectNo() const { DARABONBA_PTR_GET_DEFAULT(settleSubjectNo_, "") };
    inline HotelOrderDetailInfoResponseBodyModuleOccupantInfoListCostCenterInfoList& setSettleSubjectNo(string settleSubjectNo) { DARABONBA_PTR_SET_VALUE(settleSubjectNo_, settleSubjectNo) };


  protected:
    std::shared_ptr<string> costCenterId_ = nullptr;
    std::shared_ptr<string> costCenterName_ = nullptr;
    std::shared_ptr<string> costCenterNo_ = nullptr;
    std::shared_ptr<int64_t> costCenterPrices_ = nullptr;
    std::shared_ptr<int64_t> costCenterRatios_ = nullptr;
    std::shared_ptr<string> costCenterSubjectCode_ = nullptr;
    std::shared_ptr<string> costCenterSubjectName_ = nullptr;
    std::shared_ptr<string> settleSubjectId_ = nullptr;
    std::shared_ptr<string> settleSubjectName_ = nullptr;
    std::shared_ptr<string> settleSubjectNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

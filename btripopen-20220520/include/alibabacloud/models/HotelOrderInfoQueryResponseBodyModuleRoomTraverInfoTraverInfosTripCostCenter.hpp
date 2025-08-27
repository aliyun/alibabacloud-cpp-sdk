// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEROOMTRAVERINFOTRAVERINFOSTRIPCOSTCENTER_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEROOMTRAVERINFOTRAVERINFOSTRIPCOSTCENTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter& obj) { 
      DARABONBA_PTR_TO_JSON(cost_center_code, costCenterCode_);
      DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_TO_JSON(external_ext_field, externalExtField_);
      DARABONBA_PTR_TO_JSON(fee_type, feeType_);
      DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter& obj) { 
      DARABONBA_PTR_FROM_JSON(cost_center_code, costCenterCode_);
      DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_FROM_JSON(external_ext_field, externalExtField_);
      DARABONBA_PTR_FROM_JSON(fee_type, feeType_);
      DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
    };
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter() = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter(const HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter &) = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter(HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter &&) = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter() = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter& operator=(const HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter &) = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter& operator=(HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterCode_ != nullptr
        && this->costCenterId_ != nullptr && this->costCenterName_ != nullptr && this->externalExtField_ != nullptr && this->feeType_ != nullptr && this->invoiceId_ != nullptr
        && this->invoiceTitle_ != nullptr && this->projectCode_ != nullptr && this->projectTitle_ != nullptr; };
    // costCenterCode Field Functions 
    bool hasCostCenterCode() const { return this->costCenterCode_ != nullptr;};
    void deleteCostCenterCode() { this->costCenterCode_ = nullptr;};
    inline string costCenterCode() const { DARABONBA_PTR_GET_DEFAULT(costCenterCode_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter& setCostCenterCode(string costCenterCode) { DARABONBA_PTR_SET_VALUE(costCenterCode_, costCenterCode) };


    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline string costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter& setCostCenterId(string costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // externalExtField Field Functions 
    bool hasExternalExtField() const { return this->externalExtField_ != nullptr;};
    void deleteExternalExtField() { this->externalExtField_ = nullptr;};
    inline string externalExtField() const { DARABONBA_PTR_GET_DEFAULT(externalExtField_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter& setExternalExtField(string externalExtField) { DARABONBA_PTR_SET_VALUE(externalExtField_, externalExtField) };


    // feeType Field Functions 
    bool hasFeeType() const { return this->feeType_ != nullptr;};
    void deleteFeeType() { this->feeType_ = nullptr;};
    inline int32_t feeType() const { DARABONBA_PTR_GET_DEFAULT(feeType_, 0) };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter& setFeeType(int32_t feeType) { DARABONBA_PTR_SET_VALUE(feeType_, feeType) };


    // invoiceId Field Functions 
    bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
    void deleteInvoiceId() { this->invoiceId_ = nullptr;};
    inline int64_t invoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, 0L) };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter& setInvoiceId(int64_t invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


    // invoiceTitle Field Functions 
    bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
    void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
    inline string invoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfosTripCostCenter& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


  protected:
    std::shared_ptr<string> costCenterCode_ = nullptr;
    std::shared_ptr<string> costCenterId_ = nullptr;
    std::shared_ptr<string> costCenterName_ = nullptr;
    std::shared_ptr<string> externalExtField_ = nullptr;
    std::shared_ptr<int32_t> feeType_ = nullptr;
    std::shared_ptr<int64_t> invoiceId_ = nullptr;
    std::shared_ptr<string> invoiceTitle_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

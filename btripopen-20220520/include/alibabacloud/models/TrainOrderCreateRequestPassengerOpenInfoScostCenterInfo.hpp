// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERCREATEREQUESTPASSENGEROPENINFOSCOSTCENTERINFO_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERCREATEREQUESTPASSENGEROPENINFOSCOSTCENTERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo& obj) { 
      DARABONBA_PTR_TO_JSON(cascade_dept_name, cascadeDeptName_);
      DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_TO_JSON(cost_center_no, costCenterNo_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(depart_name, departName_);
      DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(cascade_dept_name, cascadeDeptName_);
      DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_FROM_JSON(cost_center_no, costCenterNo_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(depart_name, departName_);
      DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
    };
    TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo() = default ;
    TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo(const TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo &) = default ;
    TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo(TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo &&) = default ;
    TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo() = default ;
    TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo& operator=(const TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo &) = default ;
    TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo& operator=(TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cascadeDeptName_ != nullptr
        && this->costCenterId_ != nullptr && this->costCenterName_ != nullptr && this->costCenterNo_ != nullptr && this->departId_ != nullptr && this->departName_ != nullptr
        && this->invoiceId_ != nullptr && this->invoiceTitle_ != nullptr && this->projectCode_ != nullptr && this->projectTitle_ != nullptr; };
    // cascadeDeptName Field Functions 
    bool hasCascadeDeptName() const { return this->cascadeDeptName_ != nullptr;};
    void deleteCascadeDeptName() { this->cascadeDeptName_ = nullptr;};
    inline string cascadeDeptName() const { DARABONBA_PTR_GET_DEFAULT(cascadeDeptName_, "") };
    inline TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo& setCascadeDeptName(string cascadeDeptName) { DARABONBA_PTR_SET_VALUE(cascadeDeptName_, cascadeDeptName) };


    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline string costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, "") };
    inline TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo& setCostCenterId(string costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // costCenterNo Field Functions 
    bool hasCostCenterNo() const { return this->costCenterNo_ != nullptr;};
    void deleteCostCenterNo() { this->costCenterNo_ = nullptr;};
    inline string costCenterNo() const { DARABONBA_PTR_GET_DEFAULT(costCenterNo_, "") };
    inline TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo& setCostCenterNo(string costCenterNo) { DARABONBA_PTR_SET_VALUE(costCenterNo_, costCenterNo) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string departName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


    // invoiceId Field Functions 
    bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
    void deleteInvoiceId() { this->invoiceId_ = nullptr;};
    inline string invoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, "") };
    inline TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo& setInvoiceId(string invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


    // invoiceTitle Field Functions 
    bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
    void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
    inline string invoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
    inline TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline TrainOrderCreateRequestPassengerOpenInfoSCostCenterInfo& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


  protected:
    std::shared_ptr<string> cascadeDeptName_ = nullptr;
    std::shared_ptr<string> costCenterId_ = nullptr;
    std::shared_ptr<string> costCenterName_ = nullptr;
    std::shared_ptr<string> costCenterNo_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> departName_ = nullptr;
    std::shared_ptr<string> invoiceId_ = nullptr;
    std::shared_ptr<string> invoiceTitle_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTSALEORDERPASSENGERLIST_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTSALEORDERPASSENGERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList& obj) { 
      DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_TO_JSON(department_id, departmentId_);
      DARABONBA_PTR_TO_JSON(department_name, departmentName_);
      DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_TO_JSON(job_no, jobNo_);
      DARABONBA_PTR_TO_JSON(passenger_type, passengerType_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList& obj) { 
      DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
      DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_FROM_JSON(department_id, departmentId_);
      DARABONBA_PTR_FROM_JSON(department_name, departmentName_);
      DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
      DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
      DARABONBA_PTR_FROM_JSON(passenger_type, passengerType_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList(const IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList(IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList &&) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList& operator=(const IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList& operator=(IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterId_ != nullptr
        && this->costCenterName_ != nullptr && this->departmentId_ != nullptr && this->departmentName_ != nullptr && this->invoiceId_ != nullptr && this->invoiceTitle_ != nullptr
        && this->jobNo_ != nullptr && this->passengerType_ != nullptr && this->projectCode_ != nullptr && this->projectTitle_ != nullptr && this->userId_ != nullptr
        && this->userName_ != nullptr; };
    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline string costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList& setCostCenterId(string costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline string departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // departmentName Field Functions 
    bool hasDepartmentName() const { return this->departmentName_ != nullptr;};
    void deleteDepartmentName() { this->departmentName_ = nullptr;};
    inline string departmentName() const { DARABONBA_PTR_GET_DEFAULT(departmentName_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList& setDepartmentName(string departmentName) { DARABONBA_PTR_SET_VALUE(departmentName_, departmentName) };


    // invoiceId Field Functions 
    bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
    void deleteInvoiceId() { this->invoiceId_ = nullptr;};
    inline string invoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList& setInvoiceId(string invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


    // invoiceTitle Field Functions 
    bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
    void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
    inline string invoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


    // jobNo Field Functions 
    bool hasJobNo() const { return this->jobNo_ != nullptr;};
    void deleteJobNo() { this->jobNo_ = nullptr;};
    inline string jobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


    // passengerType Field Functions 
    bool hasPassengerType() const { return this->passengerType_ != nullptr;};
    void deletePassengerType() { this->passengerType_ = nullptr;};
    inline int32_t passengerType() const { DARABONBA_PTR_GET_DEFAULT(passengerType_, 0) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList& setPassengerType(int32_t passengerType) { DARABONBA_PTR_SET_VALUE(passengerType_, passengerType) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> costCenterId_ = nullptr;
    std::shared_ptr<string> costCenterName_ = nullptr;
    std::shared_ptr<string> departmentId_ = nullptr;
    std::shared_ptr<string> departmentName_ = nullptr;
    std::shared_ptr<string> invoiceId_ = nullptr;
    std::shared_ptr<string> invoiceTitle_ = nullptr;
    std::shared_ptr<string> jobNo_ = nullptr;
    std::shared_ptr<int32_t> passengerType_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYLISTQUERYRESPONSEBODYMODULELISTTRAVELERLIST_HPP_
#define ALIBABACLOUD_MODELS_APPLYLISTQUERYRESPONSEBODYMODULELISTTRAVELERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplyListQueryResponseBodyModuleListTravelerListCarCitySet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyListQueryResponseBodyModuleListTravelerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyListQueryResponseBodyModuleListTravelerList& obj) { 
      DARABONBA_PTR_TO_JSON(attribute, attribute_);
      DARABONBA_PTR_TO_JSON(car_city_set, carCitySet_);
      DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(invoice_name, invoiceName_);
      DARABONBA_PTR_TO_JSON(job_no, jobNo_);
      DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
      DARABONBA_PTR_TO_JSON(thirdpart_depart_id, thirdpartDepartId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyListQueryResponseBodyModuleListTravelerList& obj) { 
      DARABONBA_PTR_FROM_JSON(attribute, attribute_);
      DARABONBA_PTR_FROM_JSON(car_city_set, carCitySet_);
      DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(invoice_name, invoiceName_);
      DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
      DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
      DARABONBA_PTR_FROM_JSON(thirdpart_depart_id, thirdpartDepartId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    ApplyListQueryResponseBodyModuleListTravelerList() = default ;
    ApplyListQueryResponseBodyModuleListTravelerList(const ApplyListQueryResponseBodyModuleListTravelerList &) = default ;
    ApplyListQueryResponseBodyModuleListTravelerList(ApplyListQueryResponseBodyModuleListTravelerList &&) = default ;
    ApplyListQueryResponseBodyModuleListTravelerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyListQueryResponseBodyModuleListTravelerList() = default ;
    ApplyListQueryResponseBodyModuleListTravelerList& operator=(const ApplyListQueryResponseBodyModuleListTravelerList &) = default ;
    ApplyListQueryResponseBodyModuleListTravelerList& operator=(ApplyListQueryResponseBodyModuleListTravelerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attribute_ != nullptr
        && this->carCitySet_ != nullptr && this->costCenterName_ != nullptr && this->departId_ != nullptr && this->invoiceName_ != nullptr && this->jobNo_ != nullptr
        && this->paymentDepartmentName_ != nullptr && this->projectCode_ != nullptr && this->projectTitle_ != nullptr && this->thirdpartDepartId_ != nullptr && this->userId_ != nullptr
        && this->userName_ != nullptr; };
    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline string attribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
    inline ApplyListQueryResponseBodyModuleListTravelerList& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


    // carCitySet Field Functions 
    bool hasCarCitySet() const { return this->carCitySet_ != nullptr;};
    void deleteCarCitySet() { this->carCitySet_ = nullptr;};
    inline const vector<Models::ApplyListQueryResponseBodyModuleListTravelerListCarCitySet> & carCitySet() const { DARABONBA_PTR_GET_CONST(carCitySet_, vector<Models::ApplyListQueryResponseBodyModuleListTravelerListCarCitySet>) };
    inline vector<Models::ApplyListQueryResponseBodyModuleListTravelerListCarCitySet> carCitySet() { DARABONBA_PTR_GET(carCitySet_, vector<Models::ApplyListQueryResponseBodyModuleListTravelerListCarCitySet>) };
    inline ApplyListQueryResponseBodyModuleListTravelerList& setCarCitySet(const vector<Models::ApplyListQueryResponseBodyModuleListTravelerListCarCitySet> & carCitySet) { DARABONBA_PTR_SET_VALUE(carCitySet_, carCitySet) };
    inline ApplyListQueryResponseBodyModuleListTravelerList& setCarCitySet(vector<Models::ApplyListQueryResponseBodyModuleListTravelerListCarCitySet> && carCitySet) { DARABONBA_PTR_SET_RVALUE(carCitySet_, carCitySet) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline ApplyListQueryResponseBodyModuleListTravelerList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline ApplyListQueryResponseBodyModuleListTravelerList& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // invoiceName Field Functions 
    bool hasInvoiceName() const { return this->invoiceName_ != nullptr;};
    void deleteInvoiceName() { this->invoiceName_ = nullptr;};
    inline string invoiceName() const { DARABONBA_PTR_GET_DEFAULT(invoiceName_, "") };
    inline ApplyListQueryResponseBodyModuleListTravelerList& setInvoiceName(string invoiceName) { DARABONBA_PTR_SET_VALUE(invoiceName_, invoiceName) };


    // jobNo Field Functions 
    bool hasJobNo() const { return this->jobNo_ != nullptr;};
    void deleteJobNo() { this->jobNo_ = nullptr;};
    inline string jobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
    inline ApplyListQueryResponseBodyModuleListTravelerList& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


    // paymentDepartmentName Field Functions 
    bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
    void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
    inline string paymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
    inline ApplyListQueryResponseBodyModuleListTravelerList& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline ApplyListQueryResponseBodyModuleListTravelerList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline ApplyListQueryResponseBodyModuleListTravelerList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // thirdpartDepartId Field Functions 
    bool hasThirdpartDepartId() const { return this->thirdpartDepartId_ != nullptr;};
    void deleteThirdpartDepartId() { this->thirdpartDepartId_ = nullptr;};
    inline string thirdpartDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartDepartId_, "") };
    inline ApplyListQueryResponseBodyModuleListTravelerList& setThirdpartDepartId(string thirdpartDepartId) { DARABONBA_PTR_SET_VALUE(thirdpartDepartId_, thirdpartDepartId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ApplyListQueryResponseBodyModuleListTravelerList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ApplyListQueryResponseBodyModuleListTravelerList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> attribute_ = nullptr;
    std::shared_ptr<vector<Models::ApplyListQueryResponseBodyModuleListTravelerListCarCitySet>> carCitySet_ = nullptr;
    std::shared_ptr<string> costCenterName_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> invoiceName_ = nullptr;
    std::shared_ptr<string> jobNo_ = nullptr;
    std::shared_ptr<string> paymentDepartmentName_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
    std::shared_ptr<string> thirdpartDepartId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

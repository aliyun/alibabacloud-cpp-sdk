// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYLISTQUERYRESPONSEBODYMODULELISTEXTERNALTRAVELERLIST_HPP_
#define ALIBABACLOUD_MODELS_APPLYLISTQUERYRESPONSEBODYMODULELISTEXTERNALTRAVELERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyListQueryResponseBodyModuleListExternalTravelerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyListQueryResponseBodyModuleListExternalTravelerList& obj) { 
      DARABONBA_PTR_TO_JSON(attribute, attribute_);
      DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(external_user_id, externalUserId_);
      DARABONBA_PTR_TO_JSON(invoice_name, invoiceName_);
      DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
      DARABONBA_PTR_TO_JSON(thirdpart_depart_id, thirdpartDepartId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyListQueryResponseBodyModuleListExternalTravelerList& obj) { 
      DARABONBA_PTR_FROM_JSON(attribute, attribute_);
      DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(external_user_id, externalUserId_);
      DARABONBA_PTR_FROM_JSON(invoice_name, invoiceName_);
      DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
      DARABONBA_PTR_FROM_JSON(thirdpart_depart_id, thirdpartDepartId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    ApplyListQueryResponseBodyModuleListExternalTravelerList() = default ;
    ApplyListQueryResponseBodyModuleListExternalTravelerList(const ApplyListQueryResponseBodyModuleListExternalTravelerList &) = default ;
    ApplyListQueryResponseBodyModuleListExternalTravelerList(ApplyListQueryResponseBodyModuleListExternalTravelerList &&) = default ;
    ApplyListQueryResponseBodyModuleListExternalTravelerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyListQueryResponseBodyModuleListExternalTravelerList() = default ;
    ApplyListQueryResponseBodyModuleListExternalTravelerList& operator=(const ApplyListQueryResponseBodyModuleListExternalTravelerList &) = default ;
    ApplyListQueryResponseBodyModuleListExternalTravelerList& operator=(ApplyListQueryResponseBodyModuleListExternalTravelerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attribute_ != nullptr
        && this->costCenterName_ != nullptr && this->departId_ != nullptr && this->externalUserId_ != nullptr && this->invoiceName_ != nullptr && this->paymentDepartmentName_ != nullptr
        && this->projectCode_ != nullptr && this->projectTitle_ != nullptr && this->thirdpartDepartId_ != nullptr && this->userName_ != nullptr; };
    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline string attribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
    inline ApplyListQueryResponseBodyModuleListExternalTravelerList& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline ApplyListQueryResponseBodyModuleListExternalTravelerList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline ApplyListQueryResponseBodyModuleListExternalTravelerList& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // externalUserId Field Functions 
    bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
    void deleteExternalUserId() { this->externalUserId_ = nullptr;};
    inline string externalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
    inline ApplyListQueryResponseBodyModuleListExternalTravelerList& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


    // invoiceName Field Functions 
    bool hasInvoiceName() const { return this->invoiceName_ != nullptr;};
    void deleteInvoiceName() { this->invoiceName_ = nullptr;};
    inline string invoiceName() const { DARABONBA_PTR_GET_DEFAULT(invoiceName_, "") };
    inline ApplyListQueryResponseBodyModuleListExternalTravelerList& setInvoiceName(string invoiceName) { DARABONBA_PTR_SET_VALUE(invoiceName_, invoiceName) };


    // paymentDepartmentName Field Functions 
    bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
    void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
    inline string paymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
    inline ApplyListQueryResponseBodyModuleListExternalTravelerList& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline ApplyListQueryResponseBodyModuleListExternalTravelerList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline ApplyListQueryResponseBodyModuleListExternalTravelerList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // thirdpartDepartId Field Functions 
    bool hasThirdpartDepartId() const { return this->thirdpartDepartId_ != nullptr;};
    void deleteThirdpartDepartId() { this->thirdpartDepartId_ = nullptr;};
    inline string thirdpartDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartDepartId_, "") };
    inline ApplyListQueryResponseBodyModuleListExternalTravelerList& setThirdpartDepartId(string thirdpartDepartId) { DARABONBA_PTR_SET_VALUE(thirdpartDepartId_, thirdpartDepartId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ApplyListQueryResponseBodyModuleListExternalTravelerList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> attribute_ = nullptr;
    std::shared_ptr<string> costCenterName_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> externalUserId_ = nullptr;
    std::shared_ptr<string> invoiceName_ = nullptr;
    std::shared_ptr<string> paymentDepartmentName_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
    std::shared_ptr<string> thirdpartDepartId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

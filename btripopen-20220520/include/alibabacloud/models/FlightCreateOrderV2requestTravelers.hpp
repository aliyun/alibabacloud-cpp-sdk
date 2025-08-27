// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTCREATEORDERV2REQUESTTRAVELERS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTCREATEORDERV2REQUESTTRAVELERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightCreateOrderV2RequestTravelers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightCreateOrderV2RequestTravelers& obj) { 
      DARABONBA_PTR_TO_JSON(birthday, birthday_);
      DARABONBA_PTR_TO_JSON(cert_nation, certNation_);
      DARABONBA_PTR_TO_JSON(cert_no, certNo_);
      DARABONBA_PTR_TO_JSON(cert_type, certType_);
      DARABONBA_PTR_TO_JSON(cert_valid_date, certValidDate_);
      DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_TO_JSON(cost_center_number, costCenterNumber_);
      DARABONBA_PTR_TO_JSON(dept_id, deptId_);
      DARABONBA_PTR_TO_JSON(dept_name, deptName_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_TO_JSON(nationality, nationality_);
      DARABONBA_PTR_TO_JSON(nationality_code, nationalityCode_);
      DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_TO_JSON(passenger_type, passengerType_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(project_code, projectCode_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_type, userType_);
    };
    friend void from_json(const Darabonba::Json& j, FlightCreateOrderV2RequestTravelers& obj) { 
      DARABONBA_PTR_FROM_JSON(birthday, birthday_);
      DARABONBA_PTR_FROM_JSON(cert_nation, certNation_);
      DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
      DARABONBA_PTR_FROM_JSON(cert_type, certType_);
      DARABONBA_PTR_FROM_JSON(cert_valid_date, certValidDate_);
      DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
      DARABONBA_PTR_FROM_JSON(cost_center_number, costCenterNumber_);
      DARABONBA_PTR_FROM_JSON(dept_id, deptId_);
      DARABONBA_PTR_FROM_JSON(dept_name, deptName_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_FROM_JSON(nationality, nationality_);
      DARABONBA_PTR_FROM_JSON(nationality_code, nationalityCode_);
      DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_FROM_JSON(passenger_type, passengerType_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_type, userType_);
    };
    FlightCreateOrderV2RequestTravelers() = default ;
    FlightCreateOrderV2RequestTravelers(const FlightCreateOrderV2RequestTravelers &) = default ;
    FlightCreateOrderV2RequestTravelers(FlightCreateOrderV2RequestTravelers &&) = default ;
    FlightCreateOrderV2RequestTravelers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightCreateOrderV2RequestTravelers() = default ;
    FlightCreateOrderV2RequestTravelers& operator=(const FlightCreateOrderV2RequestTravelers &) = default ;
    FlightCreateOrderV2RequestTravelers& operator=(FlightCreateOrderV2RequestTravelers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->birthday_ != nullptr
        && this->certNation_ != nullptr && this->certNo_ != nullptr && this->certType_ != nullptr && this->certValidDate_ != nullptr && this->costCenterName_ != nullptr
        && this->costCenterNumber_ != nullptr && this->deptId_ != nullptr && this->deptName_ != nullptr && this->gender_ != nullptr && this->invoiceTitle_ != nullptr
        && this->nationality_ != nullptr && this->nationalityCode_ != nullptr && this->passengerName_ != nullptr && this->passengerType_ != nullptr && this->phone_ != nullptr
        && this->projectCode_ != nullptr && this->projectTitle_ != nullptr && this->userId_ != nullptr && this->userType_ != nullptr; };
    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline string birthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
    inline FlightCreateOrderV2RequestTravelers& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // certNation Field Functions 
    bool hasCertNation() const { return this->certNation_ != nullptr;};
    void deleteCertNation() { this->certNation_ = nullptr;};
    inline string certNation() const { DARABONBA_PTR_GET_DEFAULT(certNation_, "") };
    inline FlightCreateOrderV2RequestTravelers& setCertNation(string certNation) { DARABONBA_PTR_SET_VALUE(certNation_, certNation) };


    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string certNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline FlightCreateOrderV2RequestTravelers& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline int32_t certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, 0) };
    inline FlightCreateOrderV2RequestTravelers& setCertType(int32_t certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // certValidDate Field Functions 
    bool hasCertValidDate() const { return this->certValidDate_ != nullptr;};
    void deleteCertValidDate() { this->certValidDate_ = nullptr;};
    inline string certValidDate() const { DARABONBA_PTR_GET_DEFAULT(certValidDate_, "") };
    inline FlightCreateOrderV2RequestTravelers& setCertValidDate(string certValidDate) { DARABONBA_PTR_SET_VALUE(certValidDate_, certValidDate) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline FlightCreateOrderV2RequestTravelers& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // costCenterNumber Field Functions 
    bool hasCostCenterNumber() const { return this->costCenterNumber_ != nullptr;};
    void deleteCostCenterNumber() { this->costCenterNumber_ = nullptr;};
    inline string costCenterNumber() const { DARABONBA_PTR_GET_DEFAULT(costCenterNumber_, "") };
    inline FlightCreateOrderV2RequestTravelers& setCostCenterNumber(string costCenterNumber) { DARABONBA_PTR_SET_VALUE(costCenterNumber_, costCenterNumber) };


    // deptId Field Functions 
    bool hasDeptId() const { return this->deptId_ != nullptr;};
    void deleteDeptId() { this->deptId_ = nullptr;};
    inline string deptId() const { DARABONBA_PTR_GET_DEFAULT(deptId_, "") };
    inline FlightCreateOrderV2RequestTravelers& setDeptId(string deptId) { DARABONBA_PTR_SET_VALUE(deptId_, deptId) };


    // deptName Field Functions 
    bool hasDeptName() const { return this->deptName_ != nullptr;};
    void deleteDeptName() { this->deptName_ = nullptr;};
    inline string deptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
    inline FlightCreateOrderV2RequestTravelers& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline int32_t gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
    inline FlightCreateOrderV2RequestTravelers& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // invoiceTitle Field Functions 
    bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
    void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
    inline string invoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
    inline FlightCreateOrderV2RequestTravelers& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


    // nationality Field Functions 
    bool hasNationality() const { return this->nationality_ != nullptr;};
    void deleteNationality() { this->nationality_ = nullptr;};
    inline string nationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
    inline FlightCreateOrderV2RequestTravelers& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


    // nationalityCode Field Functions 
    bool hasNationalityCode() const { return this->nationalityCode_ != nullptr;};
    void deleteNationalityCode() { this->nationalityCode_ = nullptr;};
    inline string nationalityCode() const { DARABONBA_PTR_GET_DEFAULT(nationalityCode_, "") };
    inline FlightCreateOrderV2RequestTravelers& setNationalityCode(string nationalityCode) { DARABONBA_PTR_SET_VALUE(nationalityCode_, nationalityCode) };


    // passengerName Field Functions 
    bool hasPassengerName() const { return this->passengerName_ != nullptr;};
    void deletePassengerName() { this->passengerName_ = nullptr;};
    inline string passengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
    inline FlightCreateOrderV2RequestTravelers& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


    // passengerType Field Functions 
    bool hasPassengerType() const { return this->passengerType_ != nullptr;};
    void deletePassengerType() { this->passengerType_ = nullptr;};
    inline int32_t passengerType() const { DARABONBA_PTR_GET_DEFAULT(passengerType_, 0) };
    inline FlightCreateOrderV2RequestTravelers& setPassengerType(int32_t passengerType) { DARABONBA_PTR_SET_VALUE(passengerType_, passengerType) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline FlightCreateOrderV2RequestTravelers& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline FlightCreateOrderV2RequestTravelers& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline FlightCreateOrderV2RequestTravelers& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline FlightCreateOrderV2RequestTravelers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline int32_t userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
    inline FlightCreateOrderV2RequestTravelers& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> birthday_ = nullptr;
    std::shared_ptr<string> certNation_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> certNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> certType_ = nullptr;
    std::shared_ptr<string> certValidDate_ = nullptr;
    std::shared_ptr<string> costCenterName_ = nullptr;
    std::shared_ptr<string> costCenterNumber_ = nullptr;
    std::shared_ptr<string> deptId_ = nullptr;
    std::shared_ptr<string> deptName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> gender_ = nullptr;
    std::shared_ptr<string> invoiceTitle_ = nullptr;
    std::shared_ptr<string> nationality_ = nullptr;
    std::shared_ptr<string> nationalityCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> passengerName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> passengerType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> projectCode_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<int32_t> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

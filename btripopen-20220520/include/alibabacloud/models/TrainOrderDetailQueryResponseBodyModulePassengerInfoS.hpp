// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULEPASSENGERINFOS_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULEPASSENGERINFOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TrainOrderDetailQueryResponseBodyModulePassengerInfoSCostCenterInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderDetailQueryResponseBodyModulePassengerInfoS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderDetailQueryResponseBodyModulePassengerInfoS& obj) { 
      DARABONBA_PTR_TO_JSON(cost_center_info, costCenterInfo_);
      DARABONBA_PTR_TO_JSON(country_code, countryCode_);
      DARABONBA_PTR_TO_JSON(passenger_cert_no, passengerCertNo_);
      DARABONBA_PTR_TO_JSON(passenger_cert_type, passengerCertType_);
      DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_TO_JSON(passenger_mobile, passengerMobile_);
      DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_TO_JSON(valid_date_end, validDateEnd_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderDetailQueryResponseBodyModulePassengerInfoS& obj) { 
      DARABONBA_PTR_FROM_JSON(cost_center_info, costCenterInfo_);
      DARABONBA_PTR_FROM_JSON(country_code, countryCode_);
      DARABONBA_PTR_FROM_JSON(passenger_cert_no, passengerCertNo_);
      DARABONBA_PTR_FROM_JSON(passenger_cert_type, passengerCertType_);
      DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_FROM_JSON(passenger_mobile, passengerMobile_);
      DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_FROM_JSON(valid_date_end, validDateEnd_);
    };
    TrainOrderDetailQueryResponseBodyModulePassengerInfoS() = default ;
    TrainOrderDetailQueryResponseBodyModulePassengerInfoS(const TrainOrderDetailQueryResponseBodyModulePassengerInfoS &) = default ;
    TrainOrderDetailQueryResponseBodyModulePassengerInfoS(TrainOrderDetailQueryResponseBodyModulePassengerInfoS &&) = default ;
    TrainOrderDetailQueryResponseBodyModulePassengerInfoS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderDetailQueryResponseBodyModulePassengerInfoS() = default ;
    TrainOrderDetailQueryResponseBodyModulePassengerInfoS& operator=(const TrainOrderDetailQueryResponseBodyModulePassengerInfoS &) = default ;
    TrainOrderDetailQueryResponseBodyModulePassengerInfoS& operator=(TrainOrderDetailQueryResponseBodyModulePassengerInfoS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterInfo_ != nullptr
        && this->countryCode_ != nullptr && this->passengerCertNo_ != nullptr && this->passengerCertType_ != nullptr && this->passengerId_ != nullptr && this->passengerMobile_ != nullptr
        && this->passengerName_ != nullptr && this->validDateEnd_ != nullptr; };
    // costCenterInfo Field Functions 
    bool hasCostCenterInfo() const { return this->costCenterInfo_ != nullptr;};
    void deleteCostCenterInfo() { this->costCenterInfo_ = nullptr;};
    inline const Models::TrainOrderDetailQueryResponseBodyModulePassengerInfoSCostCenterInfo & costCenterInfo() const { DARABONBA_PTR_GET_CONST(costCenterInfo_, Models::TrainOrderDetailQueryResponseBodyModulePassengerInfoSCostCenterInfo) };
    inline Models::TrainOrderDetailQueryResponseBodyModulePassengerInfoSCostCenterInfo costCenterInfo() { DARABONBA_PTR_GET(costCenterInfo_, Models::TrainOrderDetailQueryResponseBodyModulePassengerInfoSCostCenterInfo) };
    inline TrainOrderDetailQueryResponseBodyModulePassengerInfoS& setCostCenterInfo(const Models::TrainOrderDetailQueryResponseBodyModulePassengerInfoSCostCenterInfo & costCenterInfo) { DARABONBA_PTR_SET_VALUE(costCenterInfo_, costCenterInfo) };
    inline TrainOrderDetailQueryResponseBodyModulePassengerInfoS& setCostCenterInfo(Models::TrainOrderDetailQueryResponseBodyModulePassengerInfoSCostCenterInfo && costCenterInfo) { DARABONBA_PTR_SET_RVALUE(costCenterInfo_, costCenterInfo) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline TrainOrderDetailQueryResponseBodyModulePassengerInfoS& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // passengerCertNo Field Functions 
    bool hasPassengerCertNo() const { return this->passengerCertNo_ != nullptr;};
    void deletePassengerCertNo() { this->passengerCertNo_ = nullptr;};
    inline string passengerCertNo() const { DARABONBA_PTR_GET_DEFAULT(passengerCertNo_, "") };
    inline TrainOrderDetailQueryResponseBodyModulePassengerInfoS& setPassengerCertNo(string passengerCertNo) { DARABONBA_PTR_SET_VALUE(passengerCertNo_, passengerCertNo) };


    // passengerCertType Field Functions 
    bool hasPassengerCertType() const { return this->passengerCertType_ != nullptr;};
    void deletePassengerCertType() { this->passengerCertType_ = nullptr;};
    inline string passengerCertType() const { DARABONBA_PTR_GET_DEFAULT(passengerCertType_, "") };
    inline TrainOrderDetailQueryResponseBodyModulePassengerInfoS& setPassengerCertType(string passengerCertType) { DARABONBA_PTR_SET_VALUE(passengerCertType_, passengerCertType) };


    // passengerId Field Functions 
    bool hasPassengerId() const { return this->passengerId_ != nullptr;};
    void deletePassengerId() { this->passengerId_ = nullptr;};
    inline string passengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
    inline TrainOrderDetailQueryResponseBodyModulePassengerInfoS& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


    // passengerMobile Field Functions 
    bool hasPassengerMobile() const { return this->passengerMobile_ != nullptr;};
    void deletePassengerMobile() { this->passengerMobile_ = nullptr;};
    inline string passengerMobile() const { DARABONBA_PTR_GET_DEFAULT(passengerMobile_, "") };
    inline TrainOrderDetailQueryResponseBodyModulePassengerInfoS& setPassengerMobile(string passengerMobile) { DARABONBA_PTR_SET_VALUE(passengerMobile_, passengerMobile) };


    // passengerName Field Functions 
    bool hasPassengerName() const { return this->passengerName_ != nullptr;};
    void deletePassengerName() { this->passengerName_ = nullptr;};
    inline string passengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
    inline TrainOrderDetailQueryResponseBodyModulePassengerInfoS& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


    // validDateEnd Field Functions 
    bool hasValidDateEnd() const { return this->validDateEnd_ != nullptr;};
    void deleteValidDateEnd() { this->validDateEnd_ = nullptr;};
    inline string validDateEnd() const { DARABONBA_PTR_GET_DEFAULT(validDateEnd_, "") };
    inline TrainOrderDetailQueryResponseBodyModulePassengerInfoS& setValidDateEnd(string validDateEnd) { DARABONBA_PTR_SET_VALUE(validDateEnd_, validDateEnd) };


  protected:
    std::shared_ptr<Models::TrainOrderDetailQueryResponseBodyModulePassengerInfoSCostCenterInfo> costCenterInfo_ = nullptr;
    std::shared_ptr<string> countryCode_ = nullptr;
    std::shared_ptr<string> passengerCertNo_ = nullptr;
    std::shared_ptr<string> passengerCertType_ = nullptr;
    std::shared_ptr<string> passengerId_ = nullptr;
    std::shared_ptr<string> passengerMobile_ = nullptr;
    std::shared_ptr<string> passengerName_ = nullptr;
    std::shared_ptr<string> validDateEnd_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYORDERDETAILV2RESPONSEBODYMODULETRAVELERINFODTOSCHANGEFEE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYORDERDETAILV2RESPONSEBODYMODULETRAVELERINFODTOSCHANGEFEE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOSChangeFee : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOSChangeFee& obj) { 
      DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
      DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_TO_JSON(upgrade_price, upgradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOSChangeFee& obj) { 
      DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
      DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_FROM_JSON(upgrade_price, upgradePrice_);
    };
    FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOSChangeFee() = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOSChangeFee(const FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOSChangeFee &) = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOSChangeFee(FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOSChangeFee &&) = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOSChangeFee(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOSChangeFee() = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOSChangeFee& operator=(const FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOSChangeFee &) = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOSChangeFee& operator=(FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOSChangeFee &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeFee_ != nullptr
        && this->serviceFee_ != nullptr && this->upgradePrice_ != nullptr; };
    // changeFee Field Functions 
    bool hasChangeFee() const { return this->changeFee_ != nullptr;};
    void deleteChangeFee() { this->changeFee_ = nullptr;};
    inline int64_t changeFee() const { DARABONBA_PTR_GET_DEFAULT(changeFee_, 0L) };
    inline FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOSChangeFee& setChangeFee(int64_t changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };


    // serviceFee Field Functions 
    bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
    void deleteServiceFee() { this->serviceFee_ = nullptr;};
    inline int64_t serviceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0L) };
    inline FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOSChangeFee& setServiceFee(int64_t serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


    // upgradePrice Field Functions 
    bool hasUpgradePrice() const { return this->upgradePrice_ != nullptr;};
    void deleteUpgradePrice() { this->upgradePrice_ = nullptr;};
    inline int64_t upgradePrice() const { DARABONBA_PTR_GET_DEFAULT(upgradePrice_, 0L) };
    inline FlightModifyOrderDetailV2ResponseBodyModuleTravelerInfoDTOSChangeFee& setUpgradePrice(int64_t upgradePrice) { DARABONBA_PTR_SET_VALUE(upgradePrice_, upgradePrice) };


  protected:
    std::shared_ptr<int64_t> changeFee_ = nullptr;
    std::shared_ptr<int64_t> serviceFee_ = nullptr;
    std::shared_ptr<int64_t> upgradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

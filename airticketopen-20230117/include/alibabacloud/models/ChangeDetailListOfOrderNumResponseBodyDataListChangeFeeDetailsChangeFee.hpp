// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDETAILLISTOFORDERNUMRESPONSEBODYDATALISTCHANGEFEEDETAILSCHANGEFEE_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDETAILLISTOFORDERNUMRESPONSEBODYDATALISTCHANGEFEEDETAILSCHANGEFEE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee& obj) { 
      DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_TO_JSON(tax_fee, taxFee_);
      DARABONBA_PTR_TO_JSON(upgrade_fee, upgradeFee_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee& obj) { 
      DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_FROM_JSON(tax_fee, taxFee_);
      DARABONBA_PTR_FROM_JSON(upgrade_fee, upgradeFee_);
    };
    ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee() = default ;
    ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee(const ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee &) = default ;
    ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee(ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee &&) = default ;
    ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee() = default ;
    ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee& operator=(const ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee &) = default ;
    ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee& operator=(ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceFee_ == nullptr
        && return this->taxFee_ == nullptr && return this->upgradeFee_ == nullptr; };
    // serviceFee Field Functions 
    bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
    void deleteServiceFee() { this->serviceFee_ = nullptr;};
    inline double serviceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0.0) };
    inline ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee& setServiceFee(double serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


    // taxFee Field Functions 
    bool hasTaxFee() const { return this->taxFee_ != nullptr;};
    void deleteTaxFee() { this->taxFee_ = nullptr;};
    inline double taxFee() const { DARABONBA_PTR_GET_DEFAULT(taxFee_, 0.0) };
    inline ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee& setTaxFee(double taxFee) { DARABONBA_PTR_SET_VALUE(taxFee_, taxFee) };


    // upgradeFee Field Functions 
    bool hasUpgradeFee() const { return this->upgradeFee_ != nullptr;};
    void deleteUpgradeFee() { this->upgradeFee_ = nullptr;};
    inline double upgradeFee() const { DARABONBA_PTR_GET_DEFAULT(upgradeFee_, 0.0) };
    inline ChangeDetailListOfOrderNumResponseBodyDataListChangeFeeDetailsChangeFee& setUpgradeFee(double upgradeFee) { DARABONBA_PTR_SET_VALUE(upgradeFee_, upgradeFee) };


  protected:
    std::shared_ptr<double> serviceFee_ = nullptr;
    std::shared_ptr<double> taxFee_ = nullptr;
    std::shared_ptr<double> upgradeFee_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif

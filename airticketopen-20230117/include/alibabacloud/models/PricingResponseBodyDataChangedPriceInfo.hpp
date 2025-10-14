// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICINGRESPONSEBODYDATACHANGEDPRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_PRICINGRESPONSEBODYDATACHANGEDPRICEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class PricingResponseBodyDataChangedPriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PricingResponseBodyDataChangedPriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(adult_price, adultPrice_);
      DARABONBA_PTR_TO_JSON(adult_tax, adultTax_);
      DARABONBA_PTR_TO_JSON(child_price, childPrice_);
      DARABONBA_PTR_TO_JSON(child_tax, childTax_);
      DARABONBA_PTR_TO_JSON(infant_price, infantPrice_);
      DARABONBA_PTR_TO_JSON(infant_tax, infantTax_);
    };
    friend void from_json(const Darabonba::Json& j, PricingResponseBodyDataChangedPriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(adult_price, adultPrice_);
      DARABONBA_PTR_FROM_JSON(adult_tax, adultTax_);
      DARABONBA_PTR_FROM_JSON(child_price, childPrice_);
      DARABONBA_PTR_FROM_JSON(child_tax, childTax_);
      DARABONBA_PTR_FROM_JSON(infant_price, infantPrice_);
      DARABONBA_PTR_FROM_JSON(infant_tax, infantTax_);
    };
    PricingResponseBodyDataChangedPriceInfo() = default ;
    PricingResponseBodyDataChangedPriceInfo(const PricingResponseBodyDataChangedPriceInfo &) = default ;
    PricingResponseBodyDataChangedPriceInfo(PricingResponseBodyDataChangedPriceInfo &&) = default ;
    PricingResponseBodyDataChangedPriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PricingResponseBodyDataChangedPriceInfo() = default ;
    PricingResponseBodyDataChangedPriceInfo& operator=(const PricingResponseBodyDataChangedPriceInfo &) = default ;
    PricingResponseBodyDataChangedPriceInfo& operator=(PricingResponseBodyDataChangedPriceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adultPrice_ == nullptr
        && return this->adultTax_ == nullptr && return this->childPrice_ == nullptr && return this->childTax_ == nullptr && return this->infantPrice_ == nullptr && return this->infantTax_ == nullptr; };
    // adultPrice Field Functions 
    bool hasAdultPrice() const { return this->adultPrice_ != nullptr;};
    void deleteAdultPrice() { this->adultPrice_ = nullptr;};
    inline double adultPrice() const { DARABONBA_PTR_GET_DEFAULT(adultPrice_, 0.0) };
    inline PricingResponseBodyDataChangedPriceInfo& setAdultPrice(double adultPrice) { DARABONBA_PTR_SET_VALUE(adultPrice_, adultPrice) };


    // adultTax Field Functions 
    bool hasAdultTax() const { return this->adultTax_ != nullptr;};
    void deleteAdultTax() { this->adultTax_ = nullptr;};
    inline double adultTax() const { DARABONBA_PTR_GET_DEFAULT(adultTax_, 0.0) };
    inline PricingResponseBodyDataChangedPriceInfo& setAdultTax(double adultTax) { DARABONBA_PTR_SET_VALUE(adultTax_, adultTax) };


    // childPrice Field Functions 
    bool hasChildPrice() const { return this->childPrice_ != nullptr;};
    void deleteChildPrice() { this->childPrice_ = nullptr;};
    inline double childPrice() const { DARABONBA_PTR_GET_DEFAULT(childPrice_, 0.0) };
    inline PricingResponseBodyDataChangedPriceInfo& setChildPrice(double childPrice) { DARABONBA_PTR_SET_VALUE(childPrice_, childPrice) };


    // childTax Field Functions 
    bool hasChildTax() const { return this->childTax_ != nullptr;};
    void deleteChildTax() { this->childTax_ = nullptr;};
    inline double childTax() const { DARABONBA_PTR_GET_DEFAULT(childTax_, 0.0) };
    inline PricingResponseBodyDataChangedPriceInfo& setChildTax(double childTax) { DARABONBA_PTR_SET_VALUE(childTax_, childTax) };


    // infantPrice Field Functions 
    bool hasInfantPrice() const { return this->infantPrice_ != nullptr;};
    void deleteInfantPrice() { this->infantPrice_ = nullptr;};
    inline double infantPrice() const { DARABONBA_PTR_GET_DEFAULT(infantPrice_, 0.0) };
    inline PricingResponseBodyDataChangedPriceInfo& setInfantPrice(double infantPrice) { DARABONBA_PTR_SET_VALUE(infantPrice_, infantPrice) };


    // infantTax Field Functions 
    bool hasInfantTax() const { return this->infantTax_ != nullptr;};
    void deleteInfantTax() { this->infantTax_ = nullptr;};
    inline double infantTax() const { DARABONBA_PTR_GET_DEFAULT(infantTax_, 0.0) };
    inline PricingResponseBodyDataChangedPriceInfo& setInfantTax(double infantTax) { DARABONBA_PTR_SET_VALUE(infantTax_, infantTax) };


  protected:
    // adult fare
    std::shared_ptr<double> adultPrice_ = nullptr;
    // adult tax
    std::shared_ptr<double> adultTax_ = nullptr;
    // child fare
    std::shared_ptr<double> childPrice_ = nullptr;
    // child tax
    std::shared_ptr<double> childTax_ = nullptr;
    // infant fare
    std::shared_ptr<double> infantPrice_ = nullptr;
    // infant tax
    std::shared_ptr<double> infantTax_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif

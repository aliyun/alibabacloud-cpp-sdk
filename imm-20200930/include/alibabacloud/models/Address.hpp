// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRESS_HPP_
#define ALIBABACLOUD_MODELS_ADDRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Address : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Address& obj) { 
      DARABONBA_PTR_TO_JSON(AddressLine, addressLine_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(District, district_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(Township, township_);
    };
    friend void from_json(const Darabonba::Json& j, Address& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressLine, addressLine_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(District, district_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(Township, township_);
    };
    Address() = default ;
    Address(const Address &) = default ;
    Address(Address &&) = default ;
    Address(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Address() = default ;
    Address& operator=(const Address &) = default ;
    Address& operator=(Address &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressLine_ != nullptr
        && this->city_ != nullptr && this->country_ != nullptr && this->district_ != nullptr && this->language_ != nullptr && this->province_ != nullptr
        && this->township_ != nullptr; };
    // addressLine Field Functions 
    bool hasAddressLine() const { return this->addressLine_ != nullptr;};
    void deleteAddressLine() { this->addressLine_ = nullptr;};
    inline string addressLine() const { DARABONBA_PTR_GET_DEFAULT(addressLine_, "") };
    inline Address& setAddressLine(string addressLine) { DARABONBA_PTR_SET_VALUE(addressLine_, addressLine) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline Address& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline Address& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // district Field Functions 
    bool hasDistrict() const { return this->district_ != nullptr;};
    void deleteDistrict() { this->district_ = nullptr;};
    inline string district() const { DARABONBA_PTR_GET_DEFAULT(district_, "") };
    inline Address& setDistrict(string district) { DARABONBA_PTR_SET_VALUE(district_, district) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline Address& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline Address& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // township Field Functions 
    bool hasTownship() const { return this->township_ != nullptr;};
    void deleteTownship() { this->township_ = nullptr;};
    inline string township() const { DARABONBA_PTR_GET_DEFAULT(township_, "") };
    inline Address& setTownship(string township) { DARABONBA_PTR_SET_VALUE(township_, township) };


  protected:
    std::shared_ptr<string> addressLine_ = nullptr;
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> country_ = nullptr;
    std::shared_ptr<string> district_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> province_ = nullptr;
    std::shared_ptr<string> township_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif

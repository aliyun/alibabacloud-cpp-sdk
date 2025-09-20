// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRESSFORSTORY_HPP_
#define ALIBABACLOUD_MODELS_ADDRESSFORSTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class AddressForStory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddressForStory& obj) { 
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(District, district_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(Township, township_);
    };
    friend void from_json(const Darabonba::Json& j, AddressForStory& obj) { 
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(District, district_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(Township, township_);
    };
    AddressForStory() = default ;
    AddressForStory(const AddressForStory &) = default ;
    AddressForStory(AddressForStory &&) = default ;
    AddressForStory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddressForStory() = default ;
    AddressForStory& operator=(const AddressForStory &) = default ;
    AddressForStory& operator=(AddressForStory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->city_ != nullptr
        && this->country_ != nullptr && this->district_ != nullptr && this->province_ != nullptr && this->township_ != nullptr; };
    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline AddressForStory& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline AddressForStory& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // district Field Functions 
    bool hasDistrict() const { return this->district_ != nullptr;};
    void deleteDistrict() { this->district_ = nullptr;};
    inline string district() const { DARABONBA_PTR_GET_DEFAULT(district_, "") };
    inline AddressForStory& setDistrict(string district) { DARABONBA_PTR_SET_VALUE(district_, district) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline AddressForStory& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // township Field Functions 
    bool hasTownship() const { return this->township_ != nullptr;};
    void deleteTownship() { this->township_ = nullptr;};
    inline string township() const { DARABONBA_PTR_GET_DEFAULT(township_, "") };
    inline AddressForStory& setTownship(string township) { DARABONBA_PTR_SET_VALUE(township_, township) };


  protected:
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> country_ = nullptr;
    std::shared_ptr<string> district_ = nullptr;
    std::shared_ptr<string> province_ = nullptr;
    std::shared_ptr<string> township_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif

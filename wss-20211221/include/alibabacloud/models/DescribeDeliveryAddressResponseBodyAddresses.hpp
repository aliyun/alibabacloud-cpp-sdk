// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDELIVERYADDRESSRESPONSEBODYADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDELIVERYADDRESSRESPONSEBODYADDRESSES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDeliveryAddressResponseBodyAddressesArea.hpp>
#include <alibabacloud/models/DescribeDeliveryAddressResponseBodyAddressesCity.hpp>
#include <alibabacloud/models/DescribeDeliveryAddressResponseBodyAddressesProvince.hpp>
#include <alibabacloud/models/DescribeDeliveryAddressResponseBodyAddressesTown.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeDeliveryAddressResponseBodyAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeliveryAddressResponseBodyAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Contacts, contacts_);
      DARABONBA_PTR_TO_JSON(DefaultAddress, defaultAddress_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(PostalCode, postalCode_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(Town, town_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeliveryAddressResponseBodyAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(DefaultAddress, defaultAddress_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(PostalCode, postalCode_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(Town, town_);
    };
    DescribeDeliveryAddressResponseBodyAddresses() = default ;
    DescribeDeliveryAddressResponseBodyAddresses(const DescribeDeliveryAddressResponseBodyAddresses &) = default ;
    DescribeDeliveryAddressResponseBodyAddresses(DescribeDeliveryAddressResponseBodyAddresses &&) = default ;
    DescribeDeliveryAddressResponseBodyAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeliveryAddressResponseBodyAddresses() = default ;
    DescribeDeliveryAddressResponseBodyAddresses& operator=(const DescribeDeliveryAddressResponseBodyAddresses &) = default ;
    DescribeDeliveryAddressResponseBodyAddresses& operator=(DescribeDeliveryAddressResponseBodyAddresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->area_ != nullptr
        && this->city_ != nullptr && this->contacts_ != nullptr && this->defaultAddress_ != nullptr && this->detail_ != nullptr && this->mobile_ != nullptr
        && this->postalCode_ != nullptr && this->province_ != nullptr && this->town_ != nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline const Models::DescribeDeliveryAddressResponseBodyAddressesArea & area() const { DARABONBA_PTR_GET_CONST(area_, Models::DescribeDeliveryAddressResponseBodyAddressesArea) };
    inline Models::DescribeDeliveryAddressResponseBodyAddressesArea area() { DARABONBA_PTR_GET(area_, Models::DescribeDeliveryAddressResponseBodyAddressesArea) };
    inline DescribeDeliveryAddressResponseBodyAddresses& setArea(const Models::DescribeDeliveryAddressResponseBodyAddressesArea & area) { DARABONBA_PTR_SET_VALUE(area_, area) };
    inline DescribeDeliveryAddressResponseBodyAddresses& setArea(Models::DescribeDeliveryAddressResponseBodyAddressesArea && area) { DARABONBA_PTR_SET_RVALUE(area_, area) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline const Models::DescribeDeliveryAddressResponseBodyAddressesCity & city() const { DARABONBA_PTR_GET_CONST(city_, Models::DescribeDeliveryAddressResponseBodyAddressesCity) };
    inline Models::DescribeDeliveryAddressResponseBodyAddressesCity city() { DARABONBA_PTR_GET(city_, Models::DescribeDeliveryAddressResponseBodyAddressesCity) };
    inline DescribeDeliveryAddressResponseBodyAddresses& setCity(const Models::DescribeDeliveryAddressResponseBodyAddressesCity & city) { DARABONBA_PTR_SET_VALUE(city_, city) };
    inline DescribeDeliveryAddressResponseBodyAddresses& setCity(Models::DescribeDeliveryAddressResponseBodyAddressesCity && city) { DARABONBA_PTR_SET_RVALUE(city_, city) };


    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline string contacts() const { DARABONBA_PTR_GET_DEFAULT(contacts_, "") };
    inline DescribeDeliveryAddressResponseBodyAddresses& setContacts(string contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };


    // defaultAddress Field Functions 
    bool hasDefaultAddress() const { return this->defaultAddress_ != nullptr;};
    void deleteDefaultAddress() { this->defaultAddress_ = nullptr;};
    inline bool defaultAddress() const { DARABONBA_PTR_GET_DEFAULT(defaultAddress_, false) };
    inline DescribeDeliveryAddressResponseBodyAddresses& setDefaultAddress(bool defaultAddress) { DARABONBA_PTR_SET_VALUE(defaultAddress_, defaultAddress) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeDeliveryAddressResponseBodyAddresses& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline DescribeDeliveryAddressResponseBodyAddresses& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // postalCode Field Functions 
    bool hasPostalCode() const { return this->postalCode_ != nullptr;};
    void deletePostalCode() { this->postalCode_ = nullptr;};
    inline string postalCode() const { DARABONBA_PTR_GET_DEFAULT(postalCode_, "") };
    inline DescribeDeliveryAddressResponseBodyAddresses& setPostalCode(string postalCode) { DARABONBA_PTR_SET_VALUE(postalCode_, postalCode) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline const Models::DescribeDeliveryAddressResponseBodyAddressesProvince & province() const { DARABONBA_PTR_GET_CONST(province_, Models::DescribeDeliveryAddressResponseBodyAddressesProvince) };
    inline Models::DescribeDeliveryAddressResponseBodyAddressesProvince province() { DARABONBA_PTR_GET(province_, Models::DescribeDeliveryAddressResponseBodyAddressesProvince) };
    inline DescribeDeliveryAddressResponseBodyAddresses& setProvince(const Models::DescribeDeliveryAddressResponseBodyAddressesProvince & province) { DARABONBA_PTR_SET_VALUE(province_, province) };
    inline DescribeDeliveryAddressResponseBodyAddresses& setProvince(Models::DescribeDeliveryAddressResponseBodyAddressesProvince && province) { DARABONBA_PTR_SET_RVALUE(province_, province) };


    // town Field Functions 
    bool hasTown() const { return this->town_ != nullptr;};
    void deleteTown() { this->town_ = nullptr;};
    inline const Models::DescribeDeliveryAddressResponseBodyAddressesTown & town() const { DARABONBA_PTR_GET_CONST(town_, Models::DescribeDeliveryAddressResponseBodyAddressesTown) };
    inline Models::DescribeDeliveryAddressResponseBodyAddressesTown town() { DARABONBA_PTR_GET(town_, Models::DescribeDeliveryAddressResponseBodyAddressesTown) };
    inline DescribeDeliveryAddressResponseBodyAddresses& setTown(const Models::DescribeDeliveryAddressResponseBodyAddressesTown & town) { DARABONBA_PTR_SET_VALUE(town_, town) };
    inline DescribeDeliveryAddressResponseBodyAddresses& setTown(Models::DescribeDeliveryAddressResponseBodyAddressesTown && town) { DARABONBA_PTR_SET_RVALUE(town_, town) };


  protected:
    std::shared_ptr<Models::DescribeDeliveryAddressResponseBodyAddressesArea> area_ = nullptr;
    std::shared_ptr<Models::DescribeDeliveryAddressResponseBodyAddressesCity> city_ = nullptr;
    std::shared_ptr<string> contacts_ = nullptr;
    std::shared_ptr<bool> defaultAddress_ = nullptr;
    std::shared_ptr<string> detail_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<string> postalCode_ = nullptr;
    std::shared_ptr<Models::DescribeDeliveryAddressResponseBodyAddressesProvince> province_ = nullptr;
    std::shared_ptr<Models::DescribeDeliveryAddressResponseBodyAddressesTown> town_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif

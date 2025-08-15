// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRESSVERIFYINTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRESSVERIFYINTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class AddressVerifyIntlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddressVerifyIntlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(DefaultCity, defaultCity_);
      DARABONBA_PTR_TO_JSON(DefaultCountry, defaultCountry_);
      DARABONBA_PTR_TO_JSON(DefaultDistrict, defaultDistrict_);
      DARABONBA_PTR_TO_JSON(DefaultProvince, defaultProvince_);
      DARABONBA_PTR_TO_JSON(Latitude, latitude_);
      DARABONBA_PTR_TO_JSON(Longitude, longitude_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(VerifyType, verifyType_);
    };
    friend void from_json(const Darabonba::Json& j, AddressVerifyIntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(DefaultCity, defaultCity_);
      DARABONBA_PTR_FROM_JSON(DefaultCountry, defaultCountry_);
      DARABONBA_PTR_FROM_JSON(DefaultDistrict, defaultDistrict_);
      DARABONBA_PTR_FROM_JSON(DefaultProvince, defaultProvince_);
      DARABONBA_PTR_FROM_JSON(Latitude, latitude_);
      DARABONBA_PTR_FROM_JSON(Longitude, longitude_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(VerifyType, verifyType_);
    };
    AddressVerifyIntlRequest() = default ;
    AddressVerifyIntlRequest(const AddressVerifyIntlRequest &) = default ;
    AddressVerifyIntlRequest(AddressVerifyIntlRequest &&) = default ;
    AddressVerifyIntlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddressVerifyIntlRequest() = default ;
    AddressVerifyIntlRequest& operator=(const AddressVerifyIntlRequest &) = default ;
    AddressVerifyIntlRequest& operator=(AddressVerifyIntlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressType_ != nullptr
        && this->defaultCity_ != nullptr && this->defaultCountry_ != nullptr && this->defaultDistrict_ != nullptr && this->defaultProvince_ != nullptr && this->latitude_ != nullptr
        && this->longitude_ != nullptr && this->mobile_ != nullptr && this->productCode_ != nullptr && this->text_ != nullptr && this->verifyType_ != nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline AddressVerifyIntlRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // defaultCity Field Functions 
    bool hasDefaultCity() const { return this->defaultCity_ != nullptr;};
    void deleteDefaultCity() { this->defaultCity_ = nullptr;};
    inline string defaultCity() const { DARABONBA_PTR_GET_DEFAULT(defaultCity_, "") };
    inline AddressVerifyIntlRequest& setDefaultCity(string defaultCity) { DARABONBA_PTR_SET_VALUE(defaultCity_, defaultCity) };


    // defaultCountry Field Functions 
    bool hasDefaultCountry() const { return this->defaultCountry_ != nullptr;};
    void deleteDefaultCountry() { this->defaultCountry_ = nullptr;};
    inline string defaultCountry() const { DARABONBA_PTR_GET_DEFAULT(defaultCountry_, "") };
    inline AddressVerifyIntlRequest& setDefaultCountry(string defaultCountry) { DARABONBA_PTR_SET_VALUE(defaultCountry_, defaultCountry) };


    // defaultDistrict Field Functions 
    bool hasDefaultDistrict() const { return this->defaultDistrict_ != nullptr;};
    void deleteDefaultDistrict() { this->defaultDistrict_ = nullptr;};
    inline string defaultDistrict() const { DARABONBA_PTR_GET_DEFAULT(defaultDistrict_, "") };
    inline AddressVerifyIntlRequest& setDefaultDistrict(string defaultDistrict) { DARABONBA_PTR_SET_VALUE(defaultDistrict_, defaultDistrict) };


    // defaultProvince Field Functions 
    bool hasDefaultProvince() const { return this->defaultProvince_ != nullptr;};
    void deleteDefaultProvince() { this->defaultProvince_ = nullptr;};
    inline string defaultProvince() const { DARABONBA_PTR_GET_DEFAULT(defaultProvince_, "") };
    inline AddressVerifyIntlRequest& setDefaultProvince(string defaultProvince) { DARABONBA_PTR_SET_VALUE(defaultProvince_, defaultProvince) };


    // latitude Field Functions 
    bool hasLatitude() const { return this->latitude_ != nullptr;};
    void deleteLatitude() { this->latitude_ = nullptr;};
    inline string latitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, "") };
    inline AddressVerifyIntlRequest& setLatitude(string latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


    // longitude Field Functions 
    bool hasLongitude() const { return this->longitude_ != nullptr;};
    void deleteLongitude() { this->longitude_ = nullptr;};
    inline string longitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, "") };
    inline AddressVerifyIntlRequest& setLongitude(string longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline AddressVerifyIntlRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline AddressVerifyIntlRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline AddressVerifyIntlRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // verifyType Field Functions 
    bool hasVerifyType() const { return this->verifyType_ != nullptr;};
    void deleteVerifyType() { this->verifyType_ = nullptr;};
    inline string verifyType() const { DARABONBA_PTR_GET_DEFAULT(verifyType_, "") };
    inline AddressVerifyIntlRequest& setVerifyType(string verifyType) { DARABONBA_PTR_SET_VALUE(verifyType_, verifyType) };


  protected:
    // Verification address type:
    // - “0”: Text address
    // - “1”: Latitude and longitude
    // 
    // This parameter is required.
    std::shared_ptr<string> addressType_ = nullptr;
    // Default city
    std::shared_ptr<string> defaultCity_ = nullptr;
    // Country name, currently only supports: China
    // 
    // This parameter is required.
    std::shared_ptr<string> defaultCountry_ = nullptr;
    // Default district
    std::shared_ptr<string> defaultDistrict_ = nullptr;
    // Default province
    std::shared_ptr<string> defaultProvince_ = nullptr;
    // Latitude.
    std::shared_ptr<string> latitude_ = nullptr;
    // Longitude.
    std::shared_ptr<string> longitude_ = nullptr;
    // Supports Chinese mobile phone numbers.
    // 
    // This parameter is required.
    std::shared_ptr<string> mobile_ = nullptr;
    // Fixed value: ADD_VERIFY_PRO
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // Detailed address text content
    std::shared_ptr<string> text_ = nullptr;
    // Address verification method:
    // - HOME: Home address verification
    // - WORK: Work address verification
    // 
    // This parameter is required.
    std::shared_ptr<string> verifyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif

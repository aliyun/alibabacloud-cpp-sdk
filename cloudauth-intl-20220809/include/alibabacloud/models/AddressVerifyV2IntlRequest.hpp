// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRESSVERIFYV2INTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRESSVERIFYV2INTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class AddressVerifyV2IntlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddressVerifyV2IntlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceToken, deviceToken_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(RegCountry, regCountry_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(VerifyType, verifyType_);
    };
    friend void from_json(const Darabonba::Json& j, AddressVerifyV2IntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceToken, deviceToken_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(RegCountry, regCountry_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(VerifyType, verifyType_);
    };
    AddressVerifyV2IntlRequest() = default ;
    AddressVerifyV2IntlRequest(const AddressVerifyV2IntlRequest &) = default ;
    AddressVerifyV2IntlRequest(AddressVerifyV2IntlRequest &&) = default ;
    AddressVerifyV2IntlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddressVerifyV2IntlRequest() = default ;
    AddressVerifyV2IntlRequest& operator=(const AddressVerifyV2IntlRequest &) = default ;
    AddressVerifyV2IntlRequest& operator=(AddressVerifyV2IntlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceToken_ == nullptr
        && this->mobile_ == nullptr && this->productCode_ == nullptr && this->regCountry_ == nullptr && this->text_ == nullptr && this->verifyType_ == nullptr; };
    // deviceToken Field Functions 
    bool hasDeviceToken() const { return this->deviceToken_ != nullptr;};
    void deleteDeviceToken() { this->deviceToken_ = nullptr;};
    inline string getDeviceToken() const { DARABONBA_PTR_GET_DEFAULT(deviceToken_, "") };
    inline AddressVerifyV2IntlRequest& setDeviceToken(string deviceToken) { DARABONBA_PTR_SET_VALUE(deviceToken_, deviceToken) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline AddressVerifyV2IntlRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline AddressVerifyV2IntlRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // regCountry Field Functions 
    bool hasRegCountry() const { return this->regCountry_ != nullptr;};
    void deleteRegCountry() { this->regCountry_ = nullptr;};
    inline string getRegCountry() const { DARABONBA_PTR_GET_DEFAULT(regCountry_, "") };
    inline AddressVerifyV2IntlRequest& setRegCountry(string regCountry) { DARABONBA_PTR_SET_VALUE(regCountry_, regCountry) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline AddressVerifyV2IntlRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // verifyType Field Functions 
    bool hasVerifyType() const { return this->verifyType_ != nullptr;};
    void deleteVerifyType() { this->verifyType_ = nullptr;};
    inline string getVerifyType() const { DARABONBA_PTR_GET_DEFAULT(verifyType_, "") };
    inline AddressVerifyV2IntlRequest& setVerifyType(string verifyType) { DARABONBA_PTR_SET_VALUE(verifyType_, verifyType) };


  protected:
    // DeviceToken obtained via the client SDK
    // 
    // This parameter is required.
    shared_ptr<string> deviceToken_ {};
    // Supported: Chinese mobile phone numbers
    shared_ptr<string> mobile_ {};
    // Fixed value: ADD_VERIFY_PRO
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // List of prohibited countries or regions
    // 
    // This parameter is required.
    shared_ptr<string> regCountry_ {};
    // Detailed address text content
    shared_ptr<string> text_ {};
    // Address verification method:
    // 
    // - **HOME**: Home address verification
    // 
    // - **WORK**: Work address verification
    shared_ptr<string> verifyType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif

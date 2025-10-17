// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRESSCOMPAREINTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRESSCOMPAREINTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class AddressCompareIntlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddressCompareIntlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultCountry, defaultCountry_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Text1, text1_);
      DARABONBA_PTR_TO_JSON(Text2, text2_);
    };
    friend void from_json(const Darabonba::Json& j, AddressCompareIntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultCountry, defaultCountry_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Text1, text1_);
      DARABONBA_PTR_FROM_JSON(Text2, text2_);
    };
    AddressCompareIntlRequest() = default ;
    AddressCompareIntlRequest(const AddressCompareIntlRequest &) = default ;
    AddressCompareIntlRequest(AddressCompareIntlRequest &&) = default ;
    AddressCompareIntlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddressCompareIntlRequest() = default ;
    AddressCompareIntlRequest& operator=(const AddressCompareIntlRequest &) = default ;
    AddressCompareIntlRequest& operator=(AddressCompareIntlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultCountry_ == nullptr
        && return this->productCode_ == nullptr && return this->text1_ == nullptr && return this->text2_ == nullptr; };
    // defaultCountry Field Functions 
    bool hasDefaultCountry() const { return this->defaultCountry_ != nullptr;};
    void deleteDefaultCountry() { this->defaultCountry_ = nullptr;};
    inline string defaultCountry() const { DARABONBA_PTR_GET_DEFAULT(defaultCountry_, "") };
    inline AddressCompareIntlRequest& setDefaultCountry(string defaultCountry) { DARABONBA_PTR_SET_VALUE(defaultCountry_, defaultCountry) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline AddressCompareIntlRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // text1 Field Functions 
    bool hasText1() const { return this->text1_ != nullptr;};
    void deleteText1() { this->text1_ = nullptr;};
    inline string text1() const { DARABONBA_PTR_GET_DEFAULT(text1_, "") };
    inline AddressCompareIntlRequest& setText1(string text1) { DARABONBA_PTR_SET_VALUE(text1_, text1) };


    // text2 Field Functions 
    bool hasText2() const { return this->text2_ != nullptr;};
    void deleteText2() { this->text2_ = nullptr;};
    inline string text2() const { DARABONBA_PTR_GET_DEFAULT(text2_, "") };
    inline AddressCompareIntlRequest& setText2(string text2) { DARABONBA_PTR_SET_VALUE(text2_, text2) };


  protected:
    // Country name
    // - China
    // 
    // This parameter is required.
    std::shared_ptr<string> defaultCountry_ = nullptr;
    // ADD_VERIFY
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // Address 1
    // 
    // This parameter is required.
    std::shared_ptr<string> text1_ = nullptr;
    // Address 2
    // 
    // This parameter is required.
    std::shared_ptr<string> text2_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif

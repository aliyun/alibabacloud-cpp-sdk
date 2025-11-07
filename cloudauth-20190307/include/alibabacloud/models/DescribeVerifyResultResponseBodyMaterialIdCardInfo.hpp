// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYRESULTRESPONSEBODYMATERIALIDCARDINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYRESULTRESPONSEBODYMATERIALIDCARDINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyResultResponseBodyMaterialIdCardInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyResultResponseBodyMaterialIdCardInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Authority, authority_);
      DARABONBA_PTR_TO_JSON(BackImageUrl, backImageUrl_);
      DARABONBA_PTR_TO_JSON(Birth, birth_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(FrontImageUrl, frontImageUrl_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Nationality, nationality_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyResultResponseBodyMaterialIdCardInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Authority, authority_);
      DARABONBA_PTR_FROM_JSON(BackImageUrl, backImageUrl_);
      DARABONBA_PTR_FROM_JSON(Birth, birth_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(FrontImageUrl, frontImageUrl_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Nationality, nationality_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    DescribeVerifyResultResponseBodyMaterialIdCardInfo() = default ;
    DescribeVerifyResultResponseBodyMaterialIdCardInfo(const DescribeVerifyResultResponseBodyMaterialIdCardInfo &) = default ;
    DescribeVerifyResultResponseBodyMaterialIdCardInfo(DescribeVerifyResultResponseBodyMaterialIdCardInfo &&) = default ;
    DescribeVerifyResultResponseBodyMaterialIdCardInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyResultResponseBodyMaterialIdCardInfo() = default ;
    DescribeVerifyResultResponseBodyMaterialIdCardInfo& operator=(const DescribeVerifyResultResponseBodyMaterialIdCardInfo &) = default ;
    DescribeVerifyResultResponseBodyMaterialIdCardInfo& operator=(DescribeVerifyResultResponseBodyMaterialIdCardInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->authority_ == nullptr && return this->backImageUrl_ == nullptr && return this->birth_ == nullptr && return this->endDate_ == nullptr && return this->frontImageUrl_ == nullptr
        && return this->name_ == nullptr && return this->nationality_ == nullptr && return this->number_ == nullptr && return this->startDate_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeVerifyResultResponseBodyMaterialIdCardInfo& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // authority Field Functions 
    bool hasAuthority() const { return this->authority_ != nullptr;};
    void deleteAuthority() { this->authority_ = nullptr;};
    inline string authority() const { DARABONBA_PTR_GET_DEFAULT(authority_, "") };
    inline DescribeVerifyResultResponseBodyMaterialIdCardInfo& setAuthority(string authority) { DARABONBA_PTR_SET_VALUE(authority_, authority) };


    // backImageUrl Field Functions 
    bool hasBackImageUrl() const { return this->backImageUrl_ != nullptr;};
    void deleteBackImageUrl() { this->backImageUrl_ = nullptr;};
    inline string backImageUrl() const { DARABONBA_PTR_GET_DEFAULT(backImageUrl_, "") };
    inline DescribeVerifyResultResponseBodyMaterialIdCardInfo& setBackImageUrl(string backImageUrl) { DARABONBA_PTR_SET_VALUE(backImageUrl_, backImageUrl) };


    // birth Field Functions 
    bool hasBirth() const { return this->birth_ != nullptr;};
    void deleteBirth() { this->birth_ = nullptr;};
    inline string birth() const { DARABONBA_PTR_GET_DEFAULT(birth_, "") };
    inline DescribeVerifyResultResponseBodyMaterialIdCardInfo& setBirth(string birth) { DARABONBA_PTR_SET_VALUE(birth_, birth) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeVerifyResultResponseBodyMaterialIdCardInfo& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // frontImageUrl Field Functions 
    bool hasFrontImageUrl() const { return this->frontImageUrl_ != nullptr;};
    void deleteFrontImageUrl() { this->frontImageUrl_ = nullptr;};
    inline string frontImageUrl() const { DARABONBA_PTR_GET_DEFAULT(frontImageUrl_, "") };
    inline DescribeVerifyResultResponseBodyMaterialIdCardInfo& setFrontImageUrl(string frontImageUrl) { DARABONBA_PTR_SET_VALUE(frontImageUrl_, frontImageUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVerifyResultResponseBodyMaterialIdCardInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nationality Field Functions 
    bool hasNationality() const { return this->nationality_ != nullptr;};
    void deleteNationality() { this->nationality_ = nullptr;};
    inline string nationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
    inline DescribeVerifyResultResponseBodyMaterialIdCardInfo& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline DescribeVerifyResultResponseBodyMaterialIdCardInfo& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribeVerifyResultResponseBodyMaterialIdCardInfo& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // Address.
    std::shared_ptr<string> address_ = nullptr;
    // Issuing authority.
    std::shared_ptr<string> authority_ = nullptr;
    // HTTP/HTTPS link to the image of the back side (national emblem side) of the ID card. The link is valid for 5 minutes, and it is recommended to store it for business use to avoid any impact.
    // > If the HTTP/HTTPS link to the front-facing portrait image expires, you can call DescribeVerifyResult again to get the link.
    std::shared_ptr<string> backImageUrl_ = nullptr;
    // Date of birth.
    std::shared_ptr<string> birth_ = nullptr;
    // The end date of the document\\"s validity period. Format: yyyymmdd.
    std::shared_ptr<string> endDate_ = nullptr;
    // HTTP/HTTPS link to the image of the front side (portrait side) of the ID card. The link is valid for 5 minutes, and it is recommended to store it for business use to avoid any impact.
    // > If the HTTP/HTTPS link to the front-facing portrait image expires, you can call DescribeVerifyResult again to get the link.
    std::shared_ptr<string> frontImageUrl_ = nullptr;
    // Name.
    std::shared_ptr<string> name_ = nullptr;
    // Nationality.
    std::shared_ptr<string> nationality_ = nullptr;
    // ID card number.
    std::shared_ptr<string> number_ = nullptr;
    // Start date of the document\\"s validity. Format: yyyymmdd.
    std::shared_ptr<string> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif

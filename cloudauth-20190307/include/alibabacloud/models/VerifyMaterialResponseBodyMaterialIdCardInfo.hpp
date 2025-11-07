// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYMATERIALRESPONSEBODYMATERIALIDCARDINFO_HPP_
#define ALIBABACLOUD_MODELS_VERIFYMATERIALRESPONSEBODYMATERIALIDCARDINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class VerifyMaterialResponseBodyMaterialIdCardInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyMaterialResponseBodyMaterialIdCardInfo& obj) { 
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
    friend void from_json(const Darabonba::Json& j, VerifyMaterialResponseBodyMaterialIdCardInfo& obj) { 
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
    VerifyMaterialResponseBodyMaterialIdCardInfo() = default ;
    VerifyMaterialResponseBodyMaterialIdCardInfo(const VerifyMaterialResponseBodyMaterialIdCardInfo &) = default ;
    VerifyMaterialResponseBodyMaterialIdCardInfo(VerifyMaterialResponseBodyMaterialIdCardInfo &&) = default ;
    VerifyMaterialResponseBodyMaterialIdCardInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyMaterialResponseBodyMaterialIdCardInfo() = default ;
    VerifyMaterialResponseBodyMaterialIdCardInfo& operator=(const VerifyMaterialResponseBodyMaterialIdCardInfo &) = default ;
    VerifyMaterialResponseBodyMaterialIdCardInfo& operator=(VerifyMaterialResponseBodyMaterialIdCardInfo &&) = default ;
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
    inline VerifyMaterialResponseBodyMaterialIdCardInfo& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // authority Field Functions 
    bool hasAuthority() const { return this->authority_ != nullptr;};
    void deleteAuthority() { this->authority_ = nullptr;};
    inline string authority() const { DARABONBA_PTR_GET_DEFAULT(authority_, "") };
    inline VerifyMaterialResponseBodyMaterialIdCardInfo& setAuthority(string authority) { DARABONBA_PTR_SET_VALUE(authority_, authority) };


    // backImageUrl Field Functions 
    bool hasBackImageUrl() const { return this->backImageUrl_ != nullptr;};
    void deleteBackImageUrl() { this->backImageUrl_ = nullptr;};
    inline string backImageUrl() const { DARABONBA_PTR_GET_DEFAULT(backImageUrl_, "") };
    inline VerifyMaterialResponseBodyMaterialIdCardInfo& setBackImageUrl(string backImageUrl) { DARABONBA_PTR_SET_VALUE(backImageUrl_, backImageUrl) };


    // birth Field Functions 
    bool hasBirth() const { return this->birth_ != nullptr;};
    void deleteBirth() { this->birth_ = nullptr;};
    inline string birth() const { DARABONBA_PTR_GET_DEFAULT(birth_, "") };
    inline VerifyMaterialResponseBodyMaterialIdCardInfo& setBirth(string birth) { DARABONBA_PTR_SET_VALUE(birth_, birth) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline VerifyMaterialResponseBodyMaterialIdCardInfo& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // frontImageUrl Field Functions 
    bool hasFrontImageUrl() const { return this->frontImageUrl_ != nullptr;};
    void deleteFrontImageUrl() { this->frontImageUrl_ = nullptr;};
    inline string frontImageUrl() const { DARABONBA_PTR_GET_DEFAULT(frontImageUrl_, "") };
    inline VerifyMaterialResponseBodyMaterialIdCardInfo& setFrontImageUrl(string frontImageUrl) { DARABONBA_PTR_SET_VALUE(frontImageUrl_, frontImageUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline VerifyMaterialResponseBodyMaterialIdCardInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nationality Field Functions 
    bool hasNationality() const { return this->nationality_ != nullptr;};
    void deleteNationality() { this->nationality_ = nullptr;};
    inline string nationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
    inline VerifyMaterialResponseBodyMaterialIdCardInfo& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline VerifyMaterialResponseBodyMaterialIdCardInfo& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline VerifyMaterialResponseBodyMaterialIdCardInfo& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // Address.
    std::shared_ptr<string> address_ = nullptr;
    // Issuing authority.
    std::shared_ptr<string> authority_ = nullptr;
    // HTTP or HTTPS link to the national emblem side of the ID card. The link is valid for 5 minutes. It is recommended to store it in your business system to avoid any impact on usage.
    std::shared_ptr<string> backImageUrl_ = nullptr;
    // Date of birth.
    std::shared_ptr<string> birth_ = nullptr;
    // End date of the document\\"s validity period. Format: yyyymmdd.
    std::shared_ptr<string> endDate_ = nullptr;
    // HTTP or HTTPS link to the portrait side of the ID card. The link is valid for 5 minutes. It is recommended to store it in your business system to avoid any impact on usage.
    std::shared_ptr<string> frontImageUrl_ = nullptr;
    // Name.
    std::shared_ptr<string> name_ = nullptr;
    // Nationality.
    std::shared_ptr<string> nationality_ = nullptr;
    // ID number.
    std::shared_ptr<string> number_ = nullptr;
    // Start date of the document\\"s validity period. Format: yyyymmdd.
    std::shared_ptr<string> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif

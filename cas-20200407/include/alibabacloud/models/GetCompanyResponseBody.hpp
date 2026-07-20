// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPANYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPANYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetCompanyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCompanyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(CompanyAddress, companyAddress_);
      DARABONBA_PTR_TO_JSON(CompanyCode, companyCode_);
      DARABONBA_PTR_TO_JSON(CompanyEmail, companyEmail_);
      DARABONBA_PTR_TO_JSON(CompanyId, companyId_);
      DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
      DARABONBA_PTR_TO_JSON(CompanyPhone, companyPhone_);
      DARABONBA_PTR_TO_JSON(CompanyType, companyType_);
      DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_TO_JSON(Department, department_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PostCode, postCode_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCompanyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(CompanyAddress, companyAddress_);
      DARABONBA_PTR_FROM_JSON(CompanyCode, companyCode_);
      DARABONBA_PTR_FROM_JSON(CompanyEmail, companyEmail_);
      DARABONBA_PTR_FROM_JSON(CompanyId, companyId_);
      DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
      DARABONBA_PTR_FROM_JSON(CompanyPhone, companyPhone_);
      DARABONBA_PTR_FROM_JSON(CompanyType, companyType_);
      DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_FROM_JSON(Department, department_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PostCode, postCode_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCompanyResponseBody() = default ;
    GetCompanyResponseBody(const GetCompanyResponseBody &) = default ;
    GetCompanyResponseBody(GetCompanyResponseBody &&) = default ;
    GetCompanyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCompanyResponseBody() = default ;
    GetCompanyResponseBody& operator=(const GetCompanyResponseBody &) = default ;
    GetCompanyResponseBody& operator=(GetCompanyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->city_ == nullptr
        && this->companyAddress_ == nullptr && this->companyCode_ == nullptr && this->companyEmail_ == nullptr && this->companyId_ == nullptr && this->companyName_ == nullptr
        && this->companyPhone_ == nullptr && this->companyType_ == nullptr && this->countryCode_ == nullptr && this->department_ == nullptr && this->lang_ == nullptr
        && this->postCode_ == nullptr && this->province_ == nullptr && this->requestId_ == nullptr; };
    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline GetCompanyResponseBody& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // companyAddress Field Functions 
    bool hasCompanyAddress() const { return this->companyAddress_ != nullptr;};
    void deleteCompanyAddress() { this->companyAddress_ = nullptr;};
    inline string getCompanyAddress() const { DARABONBA_PTR_GET_DEFAULT(companyAddress_, "") };
    inline GetCompanyResponseBody& setCompanyAddress(string companyAddress) { DARABONBA_PTR_SET_VALUE(companyAddress_, companyAddress) };


    // companyCode Field Functions 
    bool hasCompanyCode() const { return this->companyCode_ != nullptr;};
    void deleteCompanyCode() { this->companyCode_ = nullptr;};
    inline string getCompanyCode() const { DARABONBA_PTR_GET_DEFAULT(companyCode_, "") };
    inline GetCompanyResponseBody& setCompanyCode(string companyCode) { DARABONBA_PTR_SET_VALUE(companyCode_, companyCode) };


    // companyEmail Field Functions 
    bool hasCompanyEmail() const { return this->companyEmail_ != nullptr;};
    void deleteCompanyEmail() { this->companyEmail_ = nullptr;};
    inline string getCompanyEmail() const { DARABONBA_PTR_GET_DEFAULT(companyEmail_, "") };
    inline GetCompanyResponseBody& setCompanyEmail(string companyEmail) { DARABONBA_PTR_SET_VALUE(companyEmail_, companyEmail) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline GetCompanyResponseBody& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // companyName Field Functions 
    bool hasCompanyName() const { return this->companyName_ != nullptr;};
    void deleteCompanyName() { this->companyName_ = nullptr;};
    inline string getCompanyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
    inline GetCompanyResponseBody& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


    // companyPhone Field Functions 
    bool hasCompanyPhone() const { return this->companyPhone_ != nullptr;};
    void deleteCompanyPhone() { this->companyPhone_ = nullptr;};
    inline string getCompanyPhone() const { DARABONBA_PTR_GET_DEFAULT(companyPhone_, "") };
    inline GetCompanyResponseBody& setCompanyPhone(string companyPhone) { DARABONBA_PTR_SET_VALUE(companyPhone_, companyPhone) };


    // companyType Field Functions 
    bool hasCompanyType() const { return this->companyType_ != nullptr;};
    void deleteCompanyType() { this->companyType_ = nullptr;};
    inline int32_t getCompanyType() const { DARABONBA_PTR_GET_DEFAULT(companyType_, 0) };
    inline GetCompanyResponseBody& setCompanyType(int32_t companyType) { DARABONBA_PTR_SET_VALUE(companyType_, companyType) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline GetCompanyResponseBody& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline GetCompanyResponseBody& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetCompanyResponseBody& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // postCode Field Functions 
    bool hasPostCode() const { return this->postCode_ != nullptr;};
    void deletePostCode() { this->postCode_ = nullptr;};
    inline string getPostCode() const { DARABONBA_PTR_GET_DEFAULT(postCode_, "") };
    inline GetCompanyResponseBody& setPostCode(string postCode) { DARABONBA_PTR_SET_VALUE(postCode_, postCode) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline GetCompanyResponseBody& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCompanyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The city.
    shared_ptr<string> city_ {};
    // The address of the company.
    shared_ptr<string> companyAddress_ {};
    // The company code.
    shared_ptr<string> companyCode_ {};
    // The email address of the company.
    shared_ptr<string> companyEmail_ {};
    // The company ID.
    shared_ptr<int64_t> companyId_ {};
    // The name of the company or organization.
    shared_ptr<string> companyName_ {};
    // The phone number of the company.
    shared_ptr<string> companyPhone_ {};
    // The company type.
    shared_ptr<int32_t> companyType_ {};
    // The country code.
    shared_ptr<string> countryCode_ {};
    // The department.
    shared_ptr<string> department_ {};
    // The language.
    shared_ptr<string> lang_ {};
    // The postal code.
    shared_ptr<string> postCode_ {};
    // The province.
    shared_ptr<string> province_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif

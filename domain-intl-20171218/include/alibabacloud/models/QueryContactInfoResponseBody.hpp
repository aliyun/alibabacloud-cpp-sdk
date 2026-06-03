// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTACTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTACTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DomainIntl20171218
{
namespace Models
{
  class QueryContactInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContactInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(PostalCode, postalCode_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(RegistrantName, registrantName_);
      DARABONBA_PTR_TO_JSON(RegistrantOrganization, registrantOrganization_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TelArea, telArea_);
      DARABONBA_PTR_TO_JSON(TelExt, telExt_);
      DARABONBA_PTR_TO_JSON(Telephone, telephone_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContactInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(PostalCode, postalCode_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(RegistrantName, registrantName_);
      DARABONBA_PTR_FROM_JSON(RegistrantOrganization, registrantOrganization_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TelArea, telArea_);
      DARABONBA_PTR_FROM_JSON(TelExt, telExt_);
      DARABONBA_PTR_FROM_JSON(Telephone, telephone_);
    };
    QueryContactInfoResponseBody() = default ;
    QueryContactInfoResponseBody(const QueryContactInfoResponseBody &) = default ;
    QueryContactInfoResponseBody(QueryContactInfoResponseBody &&) = default ;
    QueryContactInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContactInfoResponseBody() = default ;
    QueryContactInfoResponseBody& operator=(const QueryContactInfoResponseBody &) = default ;
    QueryContactInfoResponseBody& operator=(QueryContactInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->city_ == nullptr && this->country_ == nullptr && this->createDate_ == nullptr && this->email_ == nullptr && this->postalCode_ == nullptr
        && this->province_ == nullptr && this->registrantName_ == nullptr && this->registrantOrganization_ == nullptr && this->requestId_ == nullptr && this->telArea_ == nullptr
        && this->telExt_ == nullptr && this->telephone_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline QueryContactInfoResponseBody& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline QueryContactInfoResponseBody& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline QueryContactInfoResponseBody& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline QueryContactInfoResponseBody& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline QueryContactInfoResponseBody& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // postalCode Field Functions 
    bool hasPostalCode() const { return this->postalCode_ != nullptr;};
    void deletePostalCode() { this->postalCode_ = nullptr;};
    inline string getPostalCode() const { DARABONBA_PTR_GET_DEFAULT(postalCode_, "") };
    inline QueryContactInfoResponseBody& setPostalCode(string postalCode) { DARABONBA_PTR_SET_VALUE(postalCode_, postalCode) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline QueryContactInfoResponseBody& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // registrantName Field Functions 
    bool hasRegistrantName() const { return this->registrantName_ != nullptr;};
    void deleteRegistrantName() { this->registrantName_ = nullptr;};
    inline string getRegistrantName() const { DARABONBA_PTR_GET_DEFAULT(registrantName_, "") };
    inline QueryContactInfoResponseBody& setRegistrantName(string registrantName) { DARABONBA_PTR_SET_VALUE(registrantName_, registrantName) };


    // registrantOrganization Field Functions 
    bool hasRegistrantOrganization() const { return this->registrantOrganization_ != nullptr;};
    void deleteRegistrantOrganization() { this->registrantOrganization_ = nullptr;};
    inline string getRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(registrantOrganization_, "") };
    inline QueryContactInfoResponseBody& setRegistrantOrganization(string registrantOrganization) { DARABONBA_PTR_SET_VALUE(registrantOrganization_, registrantOrganization) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryContactInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // telArea Field Functions 
    bool hasTelArea() const { return this->telArea_ != nullptr;};
    void deleteTelArea() { this->telArea_ = nullptr;};
    inline string getTelArea() const { DARABONBA_PTR_GET_DEFAULT(telArea_, "") };
    inline QueryContactInfoResponseBody& setTelArea(string telArea) { DARABONBA_PTR_SET_VALUE(telArea_, telArea) };


    // telExt Field Functions 
    bool hasTelExt() const { return this->telExt_ != nullptr;};
    void deleteTelExt() { this->telExt_ = nullptr;};
    inline string getTelExt() const { DARABONBA_PTR_GET_DEFAULT(telExt_, "") };
    inline QueryContactInfoResponseBody& setTelExt(string telExt) { DARABONBA_PTR_SET_VALUE(telExt_, telExt) };


    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline string getTelephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
    inline QueryContactInfoResponseBody& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


  protected:
    shared_ptr<string> address_ {};
    shared_ptr<string> city_ {};
    shared_ptr<string> country_ {};
    shared_ptr<string> createDate_ {};
    shared_ptr<string> email_ {};
    shared_ptr<string> postalCode_ {};
    shared_ptr<string> province_ {};
    shared_ptr<string> registrantName_ {};
    shared_ptr<string> registrantOrganization_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> telArea_ {};
    shared_ptr<string> telExt_ {};
    shared_ptr<string> telephone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DomainIntl20171218
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDCDNCERTIFICATESIGNINGREQUESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDCDNCERTIFICATESIGNINGREQUESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CreateDcdnCertificateSigningRequestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDcdnCertificateSigningRequestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Organization, organization_);
      DARABONBA_PTR_TO_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_TO_JSON(SANs, SANs_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDcdnCertificateSigningRequestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Organization, organization_);
      DARABONBA_PTR_FROM_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_FROM_JSON(SANs, SANs_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    CreateDcdnCertificateSigningRequestRequest() = default ;
    CreateDcdnCertificateSigningRequestRequest(const CreateDcdnCertificateSigningRequestRequest &) = default ;
    CreateDcdnCertificateSigningRequestRequest(CreateDcdnCertificateSigningRequestRequest &&) = default ;
    CreateDcdnCertificateSigningRequestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDcdnCertificateSigningRequestRequest() = default ;
    CreateDcdnCertificateSigningRequestRequest& operator=(const CreateDcdnCertificateSigningRequestRequest &) = default ;
    CreateDcdnCertificateSigningRequestRequest& operator=(CreateDcdnCertificateSigningRequestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->city_ == nullptr
        && this->commonName_ == nullptr && this->country_ == nullptr && this->email_ == nullptr && this->organization_ == nullptr && this->organizationUnit_ == nullptr
        && this->SANs_ == nullptr && this->state_ == nullptr; };
    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline CreateDcdnCertificateSigningRequestRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline CreateDcdnCertificateSigningRequestRequest& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline CreateDcdnCertificateSigningRequestRequest& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateDcdnCertificateSigningRequestRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string getOrganization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline CreateDcdnCertificateSigningRequestRequest& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // organizationUnit Field Functions 
    bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
    void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
    inline string getOrganizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
    inline CreateDcdnCertificateSigningRequestRequest& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


    // SANs Field Functions 
    bool hasSANs() const { return this->SANs_ != nullptr;};
    void deleteSANs() { this->SANs_ = nullptr;};
    inline string getSANs() const { DARABONBA_PTR_GET_DEFAULT(SANs_, "") };
    inline CreateDcdnCertificateSigningRequestRequest& setSANs(string SANs) { DARABONBA_PTR_SET_VALUE(SANs_, SANs) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateDcdnCertificateSigningRequestRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The city. Default value: Hangzhou.
    shared_ptr<string> city_ {};
    // The Common Name of the certificate.
    // 
    // This parameter is required.
    shared_ptr<string> commonName_ {};
    // The country or region in which the organization is located. Default value: CN.
    shared_ptr<string> country_ {};
    // The email address.
    shared_ptr<string> email_ {};
    // The name of the organization. Default value: Alibaba Inc.
    shared_ptr<string> organization_ {};
    // The name of the department. Default value: Aliyun CDN.
    shared_ptr<string> organizationUnit_ {};
    // The Subject Alternative Name (SAN) extension that allows multiple domain names to be associated with the certificate. Separate multiple domain names with commas (,).
    shared_ptr<string> SANs_ {};
    // The provincial district. Default value: Zhejiang.
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

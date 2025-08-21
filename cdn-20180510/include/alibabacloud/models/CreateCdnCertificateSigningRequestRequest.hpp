// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECDNCERTIFICATESIGNINGREQUESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECDNCERTIFICATESIGNINGREQUESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class CreateCdnCertificateSigningRequestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCdnCertificateSigningRequestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Organization, organization_);
      DARABONBA_PTR_TO_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_TO_JSON(SANs, SANs_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCdnCertificateSigningRequestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Organization, organization_);
      DARABONBA_PTR_FROM_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_FROM_JSON(SANs, SANs_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    CreateCdnCertificateSigningRequestRequest() = default ;
    CreateCdnCertificateSigningRequestRequest(const CreateCdnCertificateSigningRequestRequest &) = default ;
    CreateCdnCertificateSigningRequestRequest(CreateCdnCertificateSigningRequestRequest &&) = default ;
    CreateCdnCertificateSigningRequestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCdnCertificateSigningRequestRequest() = default ;
    CreateCdnCertificateSigningRequestRequest& operator=(const CreateCdnCertificateSigningRequestRequest &) = default ;
    CreateCdnCertificateSigningRequestRequest& operator=(CreateCdnCertificateSigningRequestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->city_ != nullptr
        && this->commonName_ != nullptr && this->country_ != nullptr && this->email_ != nullptr && this->organization_ != nullptr && this->organizationUnit_ != nullptr
        && this->SANs_ != nullptr && this->state_ != nullptr; };
    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline CreateCdnCertificateSigningRequestRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline CreateCdnCertificateSigningRequestRequest& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline CreateCdnCertificateSigningRequestRequest& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateCdnCertificateSigningRequestRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string organization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline CreateCdnCertificateSigningRequestRequest& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // organizationUnit Field Functions 
    bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
    void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
    inline string organizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
    inline CreateCdnCertificateSigningRequestRequest& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


    // SANs Field Functions 
    bool hasSANs() const { return this->SANs_ != nullptr;};
    void deleteSANs() { this->SANs_ = nullptr;};
    inline string SANs() const { DARABONBA_PTR_GET_DEFAULT(SANs_, "") };
    inline CreateCdnCertificateSigningRequestRequest& setSANs(string SANs) { DARABONBA_PTR_SET_VALUE(SANs_, SANs) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateCdnCertificateSigningRequestRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The city. Default value: Hangzhou.
    std::shared_ptr<string> city_ = nullptr;
    // The Common Name of the certificate.
    // 
    // This parameter is required.
    std::shared_ptr<string> commonName_ = nullptr;
    // The country or region in which the organization is located. Default value: CN.
    std::shared_ptr<string> country_ = nullptr;
    // The email address.
    std::shared_ptr<string> email_ = nullptr;
    // The name of the organization. Default value: Alibaba Inc.
    std::shared_ptr<string> organization_ = nullptr;
    // The name of the department. Default value: Aliyun CDN.
    std::shared_ptr<string> organizationUnit_ = nullptr;
    // The Subject Alternative Name (SAN) extension of the SSL certificate. This extension is used to add domain names to the certificate. Separate multiple domain names with commas (,).
    std::shared_ptr<string> SANs_ = nullptr;
    // The provincial district. Default value: Zhejiang.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif

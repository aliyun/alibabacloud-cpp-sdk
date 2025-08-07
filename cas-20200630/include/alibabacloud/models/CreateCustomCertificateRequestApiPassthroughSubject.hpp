// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMCERTIFICATEREQUESTAPIPASSTHROUGHSUBJECT_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMCERTIFICATEREQUESTAPIPASSTHROUGHSUBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateCustomCertificateRequestApiPassthroughSubject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomCertificateRequestApiPassthroughSubject& obj) { 
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(CustomAttributes, customAttributes_);
      DARABONBA_PTR_TO_JSON(Locality, locality_);
      DARABONBA_PTR_TO_JSON(Organization, organization_);
      DARABONBA_PTR_TO_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomCertificateRequestApiPassthroughSubject& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(CustomAttributes, customAttributes_);
      DARABONBA_PTR_FROM_JSON(Locality, locality_);
      DARABONBA_PTR_FROM_JSON(Organization, organization_);
      DARABONBA_PTR_FROM_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    CreateCustomCertificateRequestApiPassthroughSubject() = default ;
    CreateCustomCertificateRequestApiPassthroughSubject(const CreateCustomCertificateRequestApiPassthroughSubject &) = default ;
    CreateCustomCertificateRequestApiPassthroughSubject(CreateCustomCertificateRequestApiPassthroughSubject &&) = default ;
    CreateCustomCertificateRequestApiPassthroughSubject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomCertificateRequestApiPassthroughSubject() = default ;
    CreateCustomCertificateRequestApiPassthroughSubject& operator=(const CreateCustomCertificateRequestApiPassthroughSubject &) = default ;
    CreateCustomCertificateRequestApiPassthroughSubject& operator=(CreateCustomCertificateRequestApiPassthroughSubject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonName_ != nullptr
        && this->country_ != nullptr && this->customAttributes_ != nullptr && this->locality_ != nullptr && this->organization_ != nullptr && this->organizationUnit_ != nullptr
        && this->state_ != nullptr; };
    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline CreateCustomCertificateRequestApiPassthroughSubject& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline CreateCustomCertificateRequestApiPassthroughSubject& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // customAttributes Field Functions 
    bool hasCustomAttributes() const { return this->customAttributes_ != nullptr;};
    void deleteCustomAttributes() { this->customAttributes_ = nullptr;};
    inline const vector<Models::CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes> & customAttributes() const { DARABONBA_PTR_GET_CONST(customAttributes_, vector<Models::CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes>) };
    inline vector<Models::CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes> customAttributes() { DARABONBA_PTR_GET(customAttributes_, vector<Models::CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes>) };
    inline CreateCustomCertificateRequestApiPassthroughSubject& setCustomAttributes(const vector<Models::CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes> & customAttributes) { DARABONBA_PTR_SET_VALUE(customAttributes_, customAttributes) };
    inline CreateCustomCertificateRequestApiPassthroughSubject& setCustomAttributes(vector<Models::CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes> && customAttributes) { DARABONBA_PTR_SET_RVALUE(customAttributes_, customAttributes) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline string locality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
    inline CreateCustomCertificateRequestApiPassthroughSubject& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string organization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline CreateCustomCertificateRequestApiPassthroughSubject& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // organizationUnit Field Functions 
    bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
    void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
    inline string organizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
    inline CreateCustomCertificateRequestApiPassthroughSubject& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateCustomCertificateRequestApiPassthroughSubject& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The common name of the certificate user.
    std::shared_ptr<string> commonName_ = nullptr;
    // The code of the country. The value is an alpha-2 country code that complies with the ISO 3166-1 standard. For more information about country codes, visit <https://www.iso.org/obp/ui/#search/code/>.
    std::shared_ptr<string> country_ = nullptr;
    // Customize the Subject attributes of the certificate.
    std::shared_ptr<vector<Models::CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes>> customAttributes_ = nullptr;
    // The name of the city in which the organization is located. The value can contain letters.
    std::shared_ptr<string> locality_ = nullptr;
    // The name of the organization.
    std::shared_ptr<string> organization_ = nullptr;
    // The name of the department or branch in the organization.
    std::shared_ptr<string> organizationUnit_ = nullptr;
    // The name of the province or state in which the organization associated with the certificate is located.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif

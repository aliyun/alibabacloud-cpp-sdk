// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXTERNALCACERTIFICATEREQUESTAPIPASSTHROUGHSUBJECT_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXTERNALCACERTIFICATEREQUESTAPIPASSTHROUGHSUBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateExternalCACertificateRequestApiPassthroughSubject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExternalCACertificateRequestApiPassthroughSubject& obj) { 
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(Locality, locality_);
      DARABONBA_PTR_TO_JSON(Organization, organization_);
      DARABONBA_PTR_TO_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExternalCACertificateRequestApiPassthroughSubject& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(Locality, locality_);
      DARABONBA_PTR_FROM_JSON(Organization, organization_);
      DARABONBA_PTR_FROM_JSON(OrganizationUnit, organizationUnit_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    CreateExternalCACertificateRequestApiPassthroughSubject() = default ;
    CreateExternalCACertificateRequestApiPassthroughSubject(const CreateExternalCACertificateRequestApiPassthroughSubject &) = default ;
    CreateExternalCACertificateRequestApiPassthroughSubject(CreateExternalCACertificateRequestApiPassthroughSubject &&) = default ;
    CreateExternalCACertificateRequestApiPassthroughSubject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExternalCACertificateRequestApiPassthroughSubject() = default ;
    CreateExternalCACertificateRequestApiPassthroughSubject& operator=(const CreateExternalCACertificateRequestApiPassthroughSubject &) = default ;
    CreateExternalCACertificateRequestApiPassthroughSubject& operator=(CreateExternalCACertificateRequestApiPassthroughSubject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonName_ == nullptr
        && return this->country_ == nullptr && return this->locality_ == nullptr && return this->organization_ == nullptr && return this->organizationUnit_ == nullptr && return this->state_ == nullptr; };
    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline CreateExternalCACertificateRequestApiPassthroughSubject& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline CreateExternalCACertificateRequestApiPassthroughSubject& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline string locality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
    inline CreateExternalCACertificateRequestApiPassthroughSubject& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string organization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline CreateExternalCACertificateRequestApiPassthroughSubject& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // organizationUnit Field Functions 
    bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
    void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
    inline string organizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
    inline CreateExternalCACertificateRequestApiPassthroughSubject& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateExternalCACertificateRequestApiPassthroughSubject& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> commonName_ = nullptr;
    std::shared_ptr<string> country_ = nullptr;
    std::shared_ptr<string> locality_ = nullptr;
    std::shared_ptr<string> organization_ = nullptr;
    std::shared_ptr<string> organizationUnit_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif

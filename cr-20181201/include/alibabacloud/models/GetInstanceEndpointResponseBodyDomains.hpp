// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEENDPOINTRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEENDPOINTRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetInstanceEndpointResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceEndpointResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceEndpointResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetInstanceEndpointResponseBodyDomains() = default ;
    GetInstanceEndpointResponseBodyDomains(const GetInstanceEndpointResponseBodyDomains &) = default ;
    GetInstanceEndpointResponseBodyDomains(GetInstanceEndpointResponseBodyDomains &&) = default ;
    GetInstanceEndpointResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceEndpointResponseBodyDomains() = default ;
    GetInstanceEndpointResponseBodyDomains& operator=(const GetInstanceEndpointResponseBodyDomains &) = default ;
    GetInstanceEndpointResponseBodyDomains& operator=(GetInstanceEndpointResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->type_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetInstanceEndpointResponseBodyDomains& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetInstanceEndpointResponseBodyDomains& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The domain name that is used to access the Container Registry Enterprise Edition instance.
    std::shared_ptr<string> domain_ = nullptr;
    // The type of the domain name. Valid values:
    // 
    // *   `SYSTEM`: a system domain name.
    // *   `USER`: a user domain name.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif

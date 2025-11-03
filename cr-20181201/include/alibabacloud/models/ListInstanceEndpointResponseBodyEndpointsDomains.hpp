// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEENDPOINTRESPONSEBODYENDPOINTSDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEENDPOINTRESPONSEBODYENDPOINTSDOMAINS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListInstanceEndpointResponseBodyEndpointsDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceEndpointResponseBodyEndpointsDomains& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceEndpointResponseBodyEndpointsDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListInstanceEndpointResponseBodyEndpointsDomains() = default ;
    ListInstanceEndpointResponseBodyEndpointsDomains(const ListInstanceEndpointResponseBodyEndpointsDomains &) = default ;
    ListInstanceEndpointResponseBodyEndpointsDomains(ListInstanceEndpointResponseBodyEndpointsDomains &&) = default ;
    ListInstanceEndpointResponseBodyEndpointsDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceEndpointResponseBodyEndpointsDomains() = default ;
    ListInstanceEndpointResponseBodyEndpointsDomains& operator=(const ListInstanceEndpointResponseBodyEndpointsDomains &) = default ;
    ListInstanceEndpointResponseBodyEndpointsDomains& operator=(ListInstanceEndpointResponseBodyEndpointsDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->type_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListInstanceEndpointResponseBodyEndpointsDomains& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListInstanceEndpointResponseBodyEndpointsDomains& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The domain name of the Container Registry instance.
    std::shared_ptr<string> domain_ = nullptr;
    // The type of the domain name. Valid values:
    // 
    // *   SYSTEM: system domain name.
    // *   USER: user domain name.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif

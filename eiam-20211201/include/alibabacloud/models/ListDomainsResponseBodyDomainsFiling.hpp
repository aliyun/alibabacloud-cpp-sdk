// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINSRESPONSEBODYDOMAINSFILING_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINSRESPONSEBODYDOMAINSFILING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListDomainsResponseBodyDomainsFiling : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainsResponseBodyDomainsFiling& obj) { 
      DARABONBA_PTR_TO_JSON(IcpNumber, icpNumber_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainsResponseBodyDomainsFiling& obj) { 
      DARABONBA_PTR_FROM_JSON(IcpNumber, icpNumber_);
    };
    ListDomainsResponseBodyDomainsFiling() = default ;
    ListDomainsResponseBodyDomainsFiling(const ListDomainsResponseBodyDomainsFiling &) = default ;
    ListDomainsResponseBodyDomainsFiling(ListDomainsResponseBodyDomainsFiling &&) = default ;
    ListDomainsResponseBodyDomainsFiling(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainsResponseBodyDomainsFiling() = default ;
    ListDomainsResponseBodyDomainsFiling& operator=(const ListDomainsResponseBodyDomainsFiling &) = default ;
    ListDomainsResponseBodyDomainsFiling& operator=(ListDomainsResponseBodyDomainsFiling &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->icpNumber_ == nullptr; };
    // icpNumber Field Functions 
    bool hasIcpNumber() const { return this->icpNumber_ != nullptr;};
    void deleteIcpNumber() { this->icpNumber_ = nullptr;};
    inline string icpNumber() const { DARABONBA_PTR_GET_DEFAULT(icpNumber_, "") };
    inline ListDomainsResponseBodyDomainsFiling& setIcpNumber(string icpNumber) { DARABONBA_PTR_SET_VALUE(icpNumber_, icpNumber) };


  protected:
    // The ICP number associated with the domain name. Both the entity ICP number and website ICP number are supported.
    std::shared_ptr<string> icpNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif

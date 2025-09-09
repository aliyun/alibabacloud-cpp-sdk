// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainsResponseBodyDomainsDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainsResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    DescribeDomainsResponseBodyDomains() = default ;
    DescribeDomainsResponseBodyDomains(const DescribeDomainsResponseBodyDomains &) = default ;
    DescribeDomainsResponseBodyDomains(DescribeDomainsResponseBodyDomains &&) = default ;
    DescribeDomainsResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsResponseBodyDomains() = default ;
    DescribeDomainsResponseBodyDomains& operator=(const DescribeDomainsResponseBodyDomains &) = default ;
    DescribeDomainsResponseBodyDomains& operator=(DescribeDomainsResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline const vector<Models::DescribeDomainsResponseBodyDomainsDomain> & domain() const { DARABONBA_PTR_GET_CONST(domain_, vector<Models::DescribeDomainsResponseBodyDomainsDomain>) };
    inline vector<Models::DescribeDomainsResponseBodyDomainsDomain> domain() { DARABONBA_PTR_GET(domain_, vector<Models::DescribeDomainsResponseBodyDomainsDomain>) };
    inline DescribeDomainsResponseBodyDomains& setDomain(const vector<Models::DescribeDomainsResponseBodyDomainsDomain> & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
    inline DescribeDomainsResponseBodyDomains& setDomain(vector<Models::DescribeDomainsResponseBodyDomainsDomain> && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainsResponseBodyDomainsDomain>> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

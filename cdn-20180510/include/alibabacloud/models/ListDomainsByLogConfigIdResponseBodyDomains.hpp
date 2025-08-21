// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINSBYLOGCONFIGIDRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINSBYLOGCONFIGIDRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListDomainsByLogConfigIdResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainsByLogConfigIdResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainsByLogConfigIdResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    ListDomainsByLogConfigIdResponseBodyDomains() = default ;
    ListDomainsByLogConfigIdResponseBodyDomains(const ListDomainsByLogConfigIdResponseBodyDomains &) = default ;
    ListDomainsByLogConfigIdResponseBodyDomains(ListDomainsByLogConfigIdResponseBodyDomains &&) = default ;
    ListDomainsByLogConfigIdResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainsByLogConfigIdResponseBodyDomains() = default ;
    ListDomainsByLogConfigIdResponseBodyDomains& operator=(const ListDomainsByLogConfigIdResponseBodyDomains &) = default ;
    ListDomainsByLogConfigIdResponseBodyDomains& operator=(ListDomainsByLogConfigIdResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline const vector<string> & domain() const { DARABONBA_PTR_GET_CONST(domain_, vector<string>) };
    inline vector<string> domain() { DARABONBA_PTR_GET(domain_, vector<string>) };
    inline ListDomainsByLogConfigIdResponseBodyDomains& setDomain(const vector<string> & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
    inline ListDomainsByLogConfigIdResponseBodyDomains& setDomain(vector<string> && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


  protected:
    std::shared_ptr<vector<string>> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif

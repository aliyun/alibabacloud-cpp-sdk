// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCEDOMAINSRESPONSEBODYMODULEDATAOWNERSHIP_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCEDOMAINSRESPONSEBODYMODULEDATAOWNERSHIP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppInstanceDomainsResponseBodyModuleDataOwnership : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstanceDomainsResponseBodyModuleDataOwnership& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(RootDomain, rootDomain_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstanceDomainsResponseBodyModuleDataOwnership& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(RootDomain, rootDomain_);
    };
    ListAppInstanceDomainsResponseBodyModuleDataOwnership() = default ;
    ListAppInstanceDomainsResponseBodyModuleDataOwnership(const ListAppInstanceDomainsResponseBodyModuleDataOwnership &) = default ;
    ListAppInstanceDomainsResponseBodyModuleDataOwnership(ListAppInstanceDomainsResponseBodyModuleDataOwnership &&) = default ;
    ListAppInstanceDomainsResponseBodyModuleDataOwnership(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstanceDomainsResponseBodyModuleDataOwnership() = default ;
    ListAppInstanceDomainsResponseBodyModuleDataOwnership& operator=(const ListAppInstanceDomainsResponseBodyModuleDataOwnership &) = default ;
    ListAppInstanceDomainsResponseBodyModuleDataOwnership& operator=(ListAppInstanceDomainsResponseBodyModuleDataOwnership &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->account_ != nullptr
        && this->provider_ != nullptr && this->rootDomain_ != nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleDataOwnership& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleDataOwnership& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // rootDomain Field Functions 
    bool hasRootDomain() const { return this->rootDomain_ != nullptr;};
    void deleteRootDomain() { this->rootDomain_ = nullptr;};
    inline string rootDomain() const { DARABONBA_PTR_GET_DEFAULT(rootDomain_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleDataOwnership& setRootDomain(string rootDomain) { DARABONBA_PTR_SET_VALUE(rootDomain_, rootDomain) };


  protected:
    std::shared_ptr<string> account_ = nullptr;
    std::shared_ptr<string> provider_ = nullptr;
    std::shared_ptr<string> rootDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif

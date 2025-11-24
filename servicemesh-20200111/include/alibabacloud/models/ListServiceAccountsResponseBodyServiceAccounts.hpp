// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEACCOUNTSRESPONSEBODYSERVICEACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEACCOUNTSRESPONSEBODYSERVICEACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class ListServiceAccountsResponseBodyServiceAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceAccountsResponseBodyServiceAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceAccountsResponseBodyServiceAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    ListServiceAccountsResponseBodyServiceAccounts() = default ;
    ListServiceAccountsResponseBodyServiceAccounts(const ListServiceAccountsResponseBodyServiceAccounts &) = default ;
    ListServiceAccountsResponseBodyServiceAccounts(ListServiceAccountsResponseBodyServiceAccounts &&) = default ;
    ListServiceAccountsResponseBodyServiceAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceAccountsResponseBodyServiceAccounts() = default ;
    ListServiceAccountsResponseBodyServiceAccounts& operator=(const ListServiceAccountsResponseBodyServiceAccounts &) = default ;
    ListServiceAccountsResponseBodyServiceAccounts& operator=(ListServiceAccountsResponseBodyServiceAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->namespace_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListServiceAccountsResponseBodyServiceAccounts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListServiceAccountsResponseBodyServiceAccounts& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The name of the service account.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace where the service account resides.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif

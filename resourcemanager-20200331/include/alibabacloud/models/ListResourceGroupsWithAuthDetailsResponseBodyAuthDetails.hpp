// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSWITHAUTHDETAILSRESPONSEBODYAUTHDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSWITHAUTHDETAILSRESPONSEBODYAUTHDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails& obj) { 
      DARABONBA_PTR_TO_JSON(AccountScopeAuth, accountScopeAuth_);
      DARABONBA_PTR_TO_JSON(AuthOfResourceGroups, authOfResourceGroups_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Service, service_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountScopeAuth, accountScopeAuth_);
      DARABONBA_PTR_FROM_JSON(AuthOfResourceGroups, authOfResourceGroups_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
    };
    ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails() = default ;
    ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails(const ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails &) = default ;
    ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails(ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails &&) = default ;
    ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails() = default ;
    ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails& operator=(const ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails &) = default ;
    ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails& operator=(ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountScopeAuth_ == nullptr
        && return this->authOfResourceGroups_ == nullptr && return this->resourceType_ == nullptr && return this->service_ == nullptr; };
    // accountScopeAuth Field Functions 
    bool hasAccountScopeAuth() const { return this->accountScopeAuth_ != nullptr;};
    void deleteAccountScopeAuth() { this->accountScopeAuth_ = nullptr;};
    inline bool accountScopeAuth() const { DARABONBA_PTR_GET_DEFAULT(accountScopeAuth_, false) };
    inline ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails& setAccountScopeAuth(bool accountScopeAuth) { DARABONBA_PTR_SET_VALUE(accountScopeAuth_, accountScopeAuth) };


    // authOfResourceGroups Field Functions 
    bool hasAuthOfResourceGroups() const { return this->authOfResourceGroups_ != nullptr;};
    void deleteAuthOfResourceGroups() { this->authOfResourceGroups_ = nullptr;};
    inline const vector<Models::ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups> & authOfResourceGroups() const { DARABONBA_PTR_GET_CONST(authOfResourceGroups_, vector<Models::ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups>) };
    inline vector<Models::ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups> authOfResourceGroups() { DARABONBA_PTR_GET(authOfResourceGroups_, vector<Models::ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups>) };
    inline ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails& setAuthOfResourceGroups(const vector<Models::ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups> & authOfResourceGroups) { DARABONBA_PTR_SET_VALUE(authOfResourceGroups_, authOfResourceGroups) };
    inline ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails& setAuthOfResourceGroups(vector<Models::ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups> && authOfResourceGroups) { DARABONBA_PTR_SET_RVALUE(authOfResourceGroups_, authOfResourceGroups) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline ListResourceGroupsWithAuthDetailsResponseBodyAuthDetails& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


  protected:
    std::shared_ptr<bool> accountScopeAuth_ = nullptr;
    std::shared_ptr<vector<Models::ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups>> authOfResourceGroups_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif

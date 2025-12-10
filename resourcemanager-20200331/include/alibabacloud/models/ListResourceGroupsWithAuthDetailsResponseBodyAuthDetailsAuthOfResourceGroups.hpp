// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSWITHAUTHDETAILSRESPONSEBODYAUTHDETAILSAUTHOFRESOURCEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSWITHAUTHDETAILSRESPONSEBODYAUTHDETAILSAUTHOFRESOURCEGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups& obj) { 
      DARABONBA_PTR_TO_JSON(HasPermission, hasPermission_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(HasPermission, hasPermission_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups() = default ;
    ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups(const ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups &) = default ;
    ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups(ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups &&) = default ;
    ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups() = default ;
    ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups& operator=(const ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups &) = default ;
    ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups& operator=(ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hasPermission_ == nullptr
        && return this->resourceGroupId_ == nullptr; };
    // hasPermission Field Functions 
    bool hasHasPermission() const { return this->hasPermission_ != nullptr;};
    void deleteHasPermission() { this->hasPermission_ = nullptr;};
    inline bool hasPermission() const { DARABONBA_PTR_GET_DEFAULT(hasPermission_, false) };
    inline ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups& setHasPermission(bool hasPermission) { DARABONBA_PTR_SET_VALUE(hasPermission_, hasPermission) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListResourceGroupsWithAuthDetailsResponseBodyAuthDetailsAuthOfResourceGroups& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    std::shared_ptr<bool> hasPermission_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif

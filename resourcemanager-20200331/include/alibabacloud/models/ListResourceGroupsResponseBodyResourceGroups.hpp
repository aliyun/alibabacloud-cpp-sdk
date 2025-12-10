// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSRESPONSEBODYRESOURCEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSRESPONSEBODYRESOURCEGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceGroupsResponseBodyResourceGroupsResourceGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListResourceGroupsResponseBodyResourceGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsResponseBodyResourceGroups& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsResponseBodyResourceGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
    };
    ListResourceGroupsResponseBodyResourceGroups() = default ;
    ListResourceGroupsResponseBodyResourceGroups(const ListResourceGroupsResponseBodyResourceGroups &) = default ;
    ListResourceGroupsResponseBodyResourceGroups(ListResourceGroupsResponseBodyResourceGroups &&) = default ;
    ListResourceGroupsResponseBodyResourceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsResponseBodyResourceGroups() = default ;
    ListResourceGroupsResponseBodyResourceGroups& operator=(const ListResourceGroupsResponseBodyResourceGroups &) = default ;
    ListResourceGroupsResponseBodyResourceGroups& operator=(ListResourceGroupsResponseBodyResourceGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceGroup_ == nullptr; };
    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline const vector<Models::ListResourceGroupsResponseBodyResourceGroupsResourceGroup> & resourceGroup() const { DARABONBA_PTR_GET_CONST(resourceGroup_, vector<Models::ListResourceGroupsResponseBodyResourceGroupsResourceGroup>) };
    inline vector<Models::ListResourceGroupsResponseBodyResourceGroupsResourceGroup> resourceGroup() { DARABONBA_PTR_GET(resourceGroup_, vector<Models::ListResourceGroupsResponseBodyResourceGroupsResourceGroup>) };
    inline ListResourceGroupsResponseBodyResourceGroups& setResourceGroup(const vector<Models::ListResourceGroupsResponseBodyResourceGroupsResourceGroup> & resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };
    inline ListResourceGroupsResponseBodyResourceGroups& setResourceGroup(vector<Models::ListResourceGroupsResponseBodyResourceGroupsResourceGroup> && resourceGroup) { DARABONBA_PTR_SET_RVALUE(resourceGroup_, resourceGroup) };


  protected:
    std::shared_ptr<vector<Models::ListResourceGroupsResponseBodyResourceGroupsResourceGroup>> resourceGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif

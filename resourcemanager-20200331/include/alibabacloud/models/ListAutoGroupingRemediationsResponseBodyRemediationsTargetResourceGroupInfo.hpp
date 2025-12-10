// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOGROUPINGREMEDIATIONSRESPONSEBODYREMEDIATIONSTARGETRESOURCEGROUPINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOGROUPINGREMEDIATIONSRESPONSEBODYREMEDIATIONSTARGETRESOURCEGROUPINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo() = default ;
    ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo(const ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo &) = default ;
    ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo(ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo &&) = default ;
    ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo() = default ;
    ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo& operator=(const ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo &) = default ;
    ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo& operator=(ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceGroupDisplayName_ == nullptr
        && return this->resourceGroupId_ == nullptr; };
    // resourceGroupDisplayName Field Functions 
    bool hasResourceGroupDisplayName() const { return this->resourceGroupDisplayName_ != nullptr;};
    void deleteResourceGroupDisplayName() { this->resourceGroupDisplayName_ = nullptr;};
    inline string resourceGroupDisplayName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupDisplayName_, "") };
    inline ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo& setResourceGroupDisplayName(string resourceGroupDisplayName) { DARABONBA_PTR_SET_VALUE(resourceGroupDisplayName_, resourceGroupDisplayName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    std::shared_ptr<string> resourceGroupDisplayName_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif

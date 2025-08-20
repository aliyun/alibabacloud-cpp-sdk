// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATESCRATCHRESPONSEBODYTEMPLATESCRATCHSOURCERESOURCEGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATESCRATCHRESPONSEBODYTEMPLATESCRATCHSOURCERESOURCEGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceTypeFilter, resourceTypeFilter_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeFilter, resourceTypeFilter_);
    };
    GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup() = default ;
    GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup(const GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup &) = default ;
    GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup(GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup &&) = default ;
    GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup() = default ;
    GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup& operator=(const GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup &) = default ;
    GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup& operator=(GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceGroupId_ != nullptr
        && this->resourceTypeFilter_ != nullptr; };
    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceTypeFilter Field Functions 
    bool hasResourceTypeFilter() const { return this->resourceTypeFilter_ != nullptr;};
    void deleteResourceTypeFilter() { this->resourceTypeFilter_ = nullptr;};
    inline const vector<string> & resourceTypeFilter() const { DARABONBA_PTR_GET_CONST(resourceTypeFilter_, vector<string>) };
    inline vector<string> resourceTypeFilter() { DARABONBA_PTR_GET(resourceTypeFilter_, vector<string>) };
    inline GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup& setResourceTypeFilter(const vector<string> & resourceTypeFilter) { DARABONBA_PTR_SET_VALUE(resourceTypeFilter_, resourceTypeFilter) };
    inline GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup& setResourceTypeFilter(vector<string> && resourceTypeFilter) { DARABONBA_PTR_SET_RVALUE(resourceTypeFilter_, resourceTypeFilter) };


  protected:
    // The ID of the source resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The resource type filters.
    std::shared_ptr<vector<string>> resourceTypeFilter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif

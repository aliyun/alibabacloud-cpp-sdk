// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONRESPONSEBODYADDONRESOURCESSPEC_HPP_
#define ALIBABACLOUD_MODELS_GETADDONRESPONSEBODYADDONRESOURCESSPEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddonNodeTemplate.hpp>
#include <alibabacloud/models/GetAddonResponseBodyAddonResourcesSpecEipResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetAddonResponseBodyAddonResourcesSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonResponseBodyAddonResourcesSpec& obj) { 
      DARABONBA_PTR_TO_JSON(EcsResources, ecsResources_);
      DARABONBA_PTR_TO_JSON(EipResource, eipResource_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonResponseBodyAddonResourcesSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsResources, ecsResources_);
      DARABONBA_PTR_FROM_JSON(EipResource, eipResource_);
    };
    GetAddonResponseBodyAddonResourcesSpec() = default ;
    GetAddonResponseBodyAddonResourcesSpec(const GetAddonResponseBodyAddonResourcesSpec &) = default ;
    GetAddonResponseBodyAddonResourcesSpec(GetAddonResponseBodyAddonResourcesSpec &&) = default ;
    GetAddonResponseBodyAddonResourcesSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonResponseBodyAddonResourcesSpec() = default ;
    GetAddonResponseBodyAddonResourcesSpec& operator=(const GetAddonResponseBodyAddonResourcesSpec &) = default ;
    GetAddonResponseBodyAddonResourcesSpec& operator=(GetAddonResponseBodyAddonResourcesSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsResources_ == nullptr
        && return this->eipResource_ == nullptr; };
    // ecsResources Field Functions 
    bool hasEcsResources() const { return this->ecsResources_ != nullptr;};
    void deleteEcsResources() { this->ecsResources_ = nullptr;};
    inline const vector<Models::AddonNodeTemplate> & ecsResources() const { DARABONBA_PTR_GET_CONST(ecsResources_, vector<Models::AddonNodeTemplate>) };
    inline vector<Models::AddonNodeTemplate> ecsResources() { DARABONBA_PTR_GET(ecsResources_, vector<Models::AddonNodeTemplate>) };
    inline GetAddonResponseBodyAddonResourcesSpec& setEcsResources(const vector<Models::AddonNodeTemplate> & ecsResources) { DARABONBA_PTR_SET_VALUE(ecsResources_, ecsResources) };
    inline GetAddonResponseBodyAddonResourcesSpec& setEcsResources(vector<Models::AddonNodeTemplate> && ecsResources) { DARABONBA_PTR_SET_RVALUE(ecsResources_, ecsResources) };


    // eipResource Field Functions 
    bool hasEipResource() const { return this->eipResource_ != nullptr;};
    void deleteEipResource() { this->eipResource_ = nullptr;};
    inline const Models::GetAddonResponseBodyAddonResourcesSpecEipResource & eipResource() const { DARABONBA_PTR_GET_CONST(eipResource_, Models::GetAddonResponseBodyAddonResourcesSpecEipResource) };
    inline Models::GetAddonResponseBodyAddonResourcesSpecEipResource eipResource() { DARABONBA_PTR_GET(eipResource_, Models::GetAddonResponseBodyAddonResourcesSpecEipResource) };
    inline GetAddonResponseBodyAddonResourcesSpec& setEipResource(const Models::GetAddonResponseBodyAddonResourcesSpecEipResource & eipResource) { DARABONBA_PTR_SET_VALUE(eipResource_, eipResource) };
    inline GetAddonResponseBodyAddonResourcesSpec& setEipResource(Models::GetAddonResponseBodyAddonResourcesSpecEipResource && eipResource) { DARABONBA_PTR_SET_RVALUE(eipResource_, eipResource) };


  protected:
    // The Elastic Compute Service (ECS) resource configurations of the addon.
    std::shared_ptr<vector<Models::AddonNodeTemplate>> ecsResources_ = nullptr;
    // The Elastic IP Address (EIP) configurations.
    std::shared_ptr<Models::GetAddonResponseBodyAddonResourcesSpecEipResource> eipResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif

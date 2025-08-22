// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddonName, addonName_);
      DARABONBA_PTR_TO_JSON(BindResourceId, bindResourceId_);
      DARABONBA_PTR_TO_JSON(EnvironmentType, environmentType_);
      DARABONBA_PTR_TO_JSON(FeePackage, feePackage_);
      DARABONBA_PTR_TO_JSON(FilterRegionIds, filterRegionIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonName, addonName_);
      DARABONBA_PTR_FROM_JSON(BindResourceId, bindResourceId_);
      DARABONBA_PTR_FROM_JSON(EnvironmentType, environmentType_);
      DARABONBA_PTR_FROM_JSON(FeePackage, feePackage_);
      DARABONBA_PTR_FROM_JSON(FilterRegionIds, filterRegionIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
    };
    ListEnvironmentsShrinkRequest() = default ;
    ListEnvironmentsShrinkRequest(const ListEnvironmentsShrinkRequest &) = default ;
    ListEnvironmentsShrinkRequest(ListEnvironmentsShrinkRequest &&) = default ;
    ListEnvironmentsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentsShrinkRequest() = default ;
    ListEnvironmentsShrinkRequest& operator=(const ListEnvironmentsShrinkRequest &) = default ;
    ListEnvironmentsShrinkRequest& operator=(ListEnvironmentsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addonName_ != nullptr
        && this->bindResourceId_ != nullptr && this->environmentType_ != nullptr && this->feePackage_ != nullptr && this->filterRegionIds_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->tagShrink_ != nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string addonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline ListEnvironmentsShrinkRequest& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // bindResourceId Field Functions 
    bool hasBindResourceId() const { return this->bindResourceId_ != nullptr;};
    void deleteBindResourceId() { this->bindResourceId_ = nullptr;};
    inline string bindResourceId() const { DARABONBA_PTR_GET_DEFAULT(bindResourceId_, "") };
    inline ListEnvironmentsShrinkRequest& setBindResourceId(string bindResourceId) { DARABONBA_PTR_SET_VALUE(bindResourceId_, bindResourceId) };


    // environmentType Field Functions 
    bool hasEnvironmentType() const { return this->environmentType_ != nullptr;};
    void deleteEnvironmentType() { this->environmentType_ = nullptr;};
    inline string environmentType() const { DARABONBA_PTR_GET_DEFAULT(environmentType_, "") };
    inline ListEnvironmentsShrinkRequest& setEnvironmentType(string environmentType) { DARABONBA_PTR_SET_VALUE(environmentType_, environmentType) };


    // feePackage Field Functions 
    bool hasFeePackage() const { return this->feePackage_ != nullptr;};
    void deleteFeePackage() { this->feePackage_ = nullptr;};
    inline string feePackage() const { DARABONBA_PTR_GET_DEFAULT(feePackage_, "") };
    inline ListEnvironmentsShrinkRequest& setFeePackage(string feePackage) { DARABONBA_PTR_SET_VALUE(feePackage_, feePackage) };


    // filterRegionIds Field Functions 
    bool hasFilterRegionIds() const { return this->filterRegionIds_ != nullptr;};
    void deleteFilterRegionIds() { this->filterRegionIds_ = nullptr;};
    inline string filterRegionIds() const { DARABONBA_PTR_GET_DEFAULT(filterRegionIds_, "") };
    inline ListEnvironmentsShrinkRequest& setFilterRegionIds(string filterRegionIds) { DARABONBA_PTR_SET_VALUE(filterRegionIds_, filterRegionIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEnvironmentsShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListEnvironmentsShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string tagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline ListEnvironmentsShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    // The add-on name. You must specify at least one of the AddonName and EnvironmentType parameters.
    std::shared_ptr<string> addonName_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> bindResourceId_ = nullptr;
    // The environment type. You must specify at least one of the AddonName and EnvironmentType parameters.
    // 
    // Valid values:
    // 
    // *   CS
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     Container Service for Kubernetes (ACK)
    // 
    //     <!-- -->
    // 
    // *   ECS
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     Elastic Compute Service (ECS)
    // 
    //     <!-- -->
    // 
    // *   Cloud
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     cloud service
    // 
    //     <!-- -->
    std::shared_ptr<string> environmentType_ = nullptr;
    // The payable resource plan.
    // 
    // *   If the EnvironmentType parameter is set to CS, set the value to CS_Basic or CS_Pro. Default value: CS_Basic.
    // *   Otherwise, leave the parameter empty.
    // 
    // Valid values:
    // 
    // *   CS_Pro: Container Monitoring Pro
    // *   CS_Basic: Container Monitoring Basic
    std::shared_ptr<string> feePackage_ = nullptr;
    // The region IDs to be queried.
    std::shared_ptr<string> filterRegionIds_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<string> tagShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif

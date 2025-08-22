// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEnvironmentsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddonName, addonName_);
      DARABONBA_PTR_TO_JSON(BindResourceId, bindResourceId_);
      DARABONBA_PTR_TO_JSON(EnvironmentType, environmentType_);
      DARABONBA_PTR_TO_JSON(FeePackage, feePackage_);
      DARABONBA_PTR_TO_JSON(FilterRegionIds, filterRegionIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonName, addonName_);
      DARABONBA_PTR_FROM_JSON(BindResourceId, bindResourceId_);
      DARABONBA_PTR_FROM_JSON(EnvironmentType, environmentType_);
      DARABONBA_PTR_FROM_JSON(FeePackage, feePackage_);
      DARABONBA_PTR_FROM_JSON(FilterRegionIds, filterRegionIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListEnvironmentsRequest() = default ;
    ListEnvironmentsRequest(const ListEnvironmentsRequest &) = default ;
    ListEnvironmentsRequest(ListEnvironmentsRequest &&) = default ;
    ListEnvironmentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentsRequest() = default ;
    ListEnvironmentsRequest& operator=(const ListEnvironmentsRequest &) = default ;
    ListEnvironmentsRequest& operator=(ListEnvironmentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addonName_ != nullptr
        && this->bindResourceId_ != nullptr && this->environmentType_ != nullptr && this->feePackage_ != nullptr && this->filterRegionIds_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->tag_ != nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string addonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline ListEnvironmentsRequest& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // bindResourceId Field Functions 
    bool hasBindResourceId() const { return this->bindResourceId_ != nullptr;};
    void deleteBindResourceId() { this->bindResourceId_ = nullptr;};
    inline string bindResourceId() const { DARABONBA_PTR_GET_DEFAULT(bindResourceId_, "") };
    inline ListEnvironmentsRequest& setBindResourceId(string bindResourceId) { DARABONBA_PTR_SET_VALUE(bindResourceId_, bindResourceId) };


    // environmentType Field Functions 
    bool hasEnvironmentType() const { return this->environmentType_ != nullptr;};
    void deleteEnvironmentType() { this->environmentType_ = nullptr;};
    inline string environmentType() const { DARABONBA_PTR_GET_DEFAULT(environmentType_, "") };
    inline ListEnvironmentsRequest& setEnvironmentType(string environmentType) { DARABONBA_PTR_SET_VALUE(environmentType_, environmentType) };


    // feePackage Field Functions 
    bool hasFeePackage() const { return this->feePackage_ != nullptr;};
    void deleteFeePackage() { this->feePackage_ = nullptr;};
    inline string feePackage() const { DARABONBA_PTR_GET_DEFAULT(feePackage_, "") };
    inline ListEnvironmentsRequest& setFeePackage(string feePackage) { DARABONBA_PTR_SET_VALUE(feePackage_, feePackage) };


    // filterRegionIds Field Functions 
    bool hasFilterRegionIds() const { return this->filterRegionIds_ != nullptr;};
    void deleteFilterRegionIds() { this->filterRegionIds_ = nullptr;};
    inline string filterRegionIds() const { DARABONBA_PTR_GET_DEFAULT(filterRegionIds_, "") };
    inline ListEnvironmentsRequest& setFilterRegionIds(string filterRegionIds) { DARABONBA_PTR_SET_VALUE(filterRegionIds_, filterRegionIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEnvironmentsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListEnvironmentsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListEnvironmentsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListEnvironmentsRequestTag>) };
    inline vector<ListEnvironmentsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListEnvironmentsRequestTag>) };
    inline ListEnvironmentsRequest& setTag(const vector<ListEnvironmentsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListEnvironmentsRequest& setTag(vector<ListEnvironmentsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


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
    std::shared_ptr<vector<ListEnvironmentsRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif

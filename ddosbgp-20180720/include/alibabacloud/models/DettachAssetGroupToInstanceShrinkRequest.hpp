// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETTACHASSETGROUPTOINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETTACHASSETGROUPTOINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class DettachAssetGroupToInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DettachAssetGroupToInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetGroupList, assetGroupListShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DettachAssetGroupToInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetGroupList, assetGroupListShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DettachAssetGroupToInstanceShrinkRequest() = default ;
    DettachAssetGroupToInstanceShrinkRequest(const DettachAssetGroupToInstanceShrinkRequest &) = default ;
    DettachAssetGroupToInstanceShrinkRequest(DettachAssetGroupToInstanceShrinkRequest &&) = default ;
    DettachAssetGroupToInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DettachAssetGroupToInstanceShrinkRequest() = default ;
    DettachAssetGroupToInstanceShrinkRequest& operator=(const DettachAssetGroupToInstanceShrinkRequest &) = default ;
    DettachAssetGroupToInstanceShrinkRequest& operator=(DettachAssetGroupToInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetGroupListShrink_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr; };
    // assetGroupListShrink Field Functions 
    bool hasAssetGroupListShrink() const { return this->assetGroupListShrink_ != nullptr;};
    void deleteAssetGroupListShrink() { this->assetGroupListShrink_ = nullptr;};
    inline string getAssetGroupListShrink() const { DARABONBA_PTR_GET_DEFAULT(assetGroupListShrink_, "") };
    inline DettachAssetGroupToInstanceShrinkRequest& setAssetGroupListShrink(string assetGroupListShrink) { DARABONBA_PTR_SET_VALUE(assetGroupListShrink_, assetGroupListShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DettachAssetGroupToInstanceShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DettachAssetGroupToInstanceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The information about the asset that you want to dissociate.
    // 
    // This parameter is required.
    shared_ptr<string> assetGroupListShrink_ {};
    // The ID of the instance.
    // 
    // >  You can call the [DescribeInstanceList](https://help.aliyun.com/document_detail/118698.html) operation to query the IDs of all Anti-DDoS Origin instances of paid editions.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the region in which the instance resides.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/118703.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif

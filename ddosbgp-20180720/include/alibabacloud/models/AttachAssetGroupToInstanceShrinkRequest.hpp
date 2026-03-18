// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHASSETGROUPTOINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHASSETGROUPTOINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class AttachAssetGroupToInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachAssetGroupToInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetGroupList, assetGroupListShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachAssetGroupToInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetGroupList, assetGroupListShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AttachAssetGroupToInstanceShrinkRequest() = default ;
    AttachAssetGroupToInstanceShrinkRequest(const AttachAssetGroupToInstanceShrinkRequest &) = default ;
    AttachAssetGroupToInstanceShrinkRequest(AttachAssetGroupToInstanceShrinkRequest &&) = default ;
    AttachAssetGroupToInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachAssetGroupToInstanceShrinkRequest() = default ;
    AttachAssetGroupToInstanceShrinkRequest& operator=(const AttachAssetGroupToInstanceShrinkRequest &) = default ;
    AttachAssetGroupToInstanceShrinkRequest& operator=(AttachAssetGroupToInstanceShrinkRequest &&) = default ;
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
    inline AttachAssetGroupToInstanceShrinkRequest& setAssetGroupListShrink(string assetGroupListShrink) { DARABONBA_PTR_SET_VALUE(assetGroupListShrink_, assetGroupListShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AttachAssetGroupToInstanceShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachAssetGroupToInstanceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The information about the asset to be associated.
    // 
    // This parameter is required.
    shared_ptr<string> assetGroupListShrink_ {};
    // The ID of the instance to query.
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

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDASSETDETAILREQUESTCLOUDASSETINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDASSETDETAILREQUESTCLOUDASSETINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCloudAssetDetailRequestCloudAssetInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAssetDetailRequestCloudAssetInstances& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAssetDetailRequestCloudAssetInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetCloudAssetDetailRequestCloudAssetInstances() = default ;
    GetCloudAssetDetailRequestCloudAssetInstances(const GetCloudAssetDetailRequestCloudAssetInstances &) = default ;
    GetCloudAssetDetailRequestCloudAssetInstances(GetCloudAssetDetailRequestCloudAssetInstances &&) = default ;
    GetCloudAssetDetailRequestCloudAssetInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAssetDetailRequestCloudAssetInstances() = default ;
    GetCloudAssetDetailRequestCloudAssetInstances& operator=(const GetCloudAssetDetailRequestCloudAssetInstances &) = default ;
    GetCloudAssetDetailRequestCloudAssetInstances& operator=(GetCloudAssetDetailRequestCloudAssetInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->regionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetCloudAssetDetailRequestCloudAssetInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetCloudAssetDetailRequestCloudAssetInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance ID of the cloud asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region in which the cloud asset resides.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

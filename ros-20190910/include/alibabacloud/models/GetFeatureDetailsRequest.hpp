// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetFeatureDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Feature, feature_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Feature, feature_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetFeatureDetailsRequest() = default ;
    GetFeatureDetailsRequest(const GetFeatureDetailsRequest &) = default ;
    GetFeatureDetailsRequest(GetFeatureDetailsRequest &&) = default ;
    GetFeatureDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureDetailsRequest() = default ;
    GetFeatureDetailsRequest& operator=(const GetFeatureDetailsRequest &) = default ;
    GetFeatureDetailsRequest& operator=(GetFeatureDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->feature_ != nullptr
        && this->regionId_ != nullptr; };
    // feature Field Functions 
    bool hasFeature() const { return this->feature_ != nullptr;};
    void deleteFeature() { this->feature_ = nullptr;};
    inline string feature() const { DARABONBA_PTR_GET_DEFAULT(feature_, "") };
    inline GetFeatureDetailsRequest& setFeature(string feature) { DARABONBA_PTR_SET_VALUE(feature_, feature) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetFeatureDetailsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The one or more features that you want to query. Valid values:
    // 
    // *   Terraform: the Terraform hosting feature.
    // *   ResourceCleaner: the resource cleaner feature. You can use ALIYUN::ROS::ResourceCleaner to create a resource cleaner.
    // *   TemplateScratch: the scenario feature.
    // *   All: all features that are supported by ROS.
    // 
    // This parameter is required.
    std::shared_ptr<string> feature_ = nullptr;
    // The region ID of the stack. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif

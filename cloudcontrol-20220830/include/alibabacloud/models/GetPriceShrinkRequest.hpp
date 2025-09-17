// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPRICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetPriceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPriceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceAttributes, resourceAttributesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetPriceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceAttributes, resourceAttributesShrink_);
    };
    GetPriceShrinkRequest() = default ;
    GetPriceShrinkRequest(const GetPriceShrinkRequest &) = default ;
    GetPriceShrinkRequest(GetPriceShrinkRequest &&) = default ;
    GetPriceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPriceShrinkRequest() = default ;
    GetPriceShrinkRequest& operator=(const GetPriceShrinkRequest &) = default ;
    GetPriceShrinkRequest& operator=(GetPriceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->resourceAttributesShrink_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetPriceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceAttributesShrink Field Functions 
    bool hasResourceAttributesShrink() const { return this->resourceAttributesShrink_ != nullptr;};
    void deleteResourceAttributesShrink() { this->resourceAttributesShrink_ = nullptr;};
    inline string resourceAttributesShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceAttributesShrink_, "") };
    inline GetPriceShrinkRequest& setResourceAttributesShrink(string resourceAttributesShrink) { DARABONBA_PTR_SET_VALUE(resourceAttributesShrink_, resourceAttributesShrink) };


  protected:
    // The region ID. This parameter is required if the cloud product is deployed in a region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The attributes based on which the price is queried (in JSON format).
    std::shared_ptr<string> resourceAttributesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif

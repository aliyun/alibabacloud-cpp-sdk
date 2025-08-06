// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRELOADPLAYDEVICEABILITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRELOADPLAYDEVICEABILITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class PreloadPlayDeviceAbilityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreloadPlayDeviceAbilityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Brand, brand_);
      DARABONBA_PTR_TO_JSON(ResourceRealOwnerId, resourceRealOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, PreloadPlayDeviceAbilityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Brand, brand_);
      DARABONBA_PTR_FROM_JSON(ResourceRealOwnerId, resourceRealOwnerId_);
    };
    PreloadPlayDeviceAbilityRequest() = default ;
    PreloadPlayDeviceAbilityRequest(const PreloadPlayDeviceAbilityRequest &) = default ;
    PreloadPlayDeviceAbilityRequest(PreloadPlayDeviceAbilityRequest &&) = default ;
    PreloadPlayDeviceAbilityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreloadPlayDeviceAbilityRequest() = default ;
    PreloadPlayDeviceAbilityRequest& operator=(const PreloadPlayDeviceAbilityRequest &) = default ;
    PreloadPlayDeviceAbilityRequest& operator=(PreloadPlayDeviceAbilityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->brand_ != nullptr
        && this->resourceRealOwnerId_ != nullptr; };
    // brand Field Functions 
    bool hasBrand() const { return this->brand_ != nullptr;};
    void deleteBrand() { this->brand_ = nullptr;};
    inline string brand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
    inline PreloadPlayDeviceAbilityRequest& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


    // resourceRealOwnerId Field Functions 
    bool hasResourceRealOwnerId() const { return this->resourceRealOwnerId_ != nullptr;};
    void deleteResourceRealOwnerId() { this->resourceRealOwnerId_ = nullptr;};
    inline int64_t resourceRealOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceRealOwnerId_, 0L) };
    inline PreloadPlayDeviceAbilityRequest& setResourceRealOwnerId(int64_t resourceRealOwnerId) { DARABONBA_PTR_SET_VALUE(resourceRealOwnerId_, resourceRealOwnerId) };


  protected:
    std::shared_ptr<string> brand_ = nullptr;
    std::shared_ptr<int64_t> resourceRealOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

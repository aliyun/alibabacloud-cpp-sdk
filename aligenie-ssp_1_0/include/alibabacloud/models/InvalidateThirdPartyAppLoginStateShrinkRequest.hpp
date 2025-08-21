// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVALIDATETHIRDPARTYAPPLOGINSTATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVALIDATETHIRDPARTYAPPLOGINSTATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class InvalidateThirdPartyAppLoginStateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvalidateThirdPartyAppLoginStateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(ThirdPartyAppId, thirdPartyAppId_);
    };
    friend void from_json(const Darabonba::Json& j, InvalidateThirdPartyAppLoginStateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(ThirdPartyAppId, thirdPartyAppId_);
    };
    InvalidateThirdPartyAppLoginStateShrinkRequest() = default ;
    InvalidateThirdPartyAppLoginStateShrinkRequest(const InvalidateThirdPartyAppLoginStateShrinkRequest &) = default ;
    InvalidateThirdPartyAppLoginStateShrinkRequest(InvalidateThirdPartyAppLoginStateShrinkRequest &&) = default ;
    InvalidateThirdPartyAppLoginStateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvalidateThirdPartyAppLoginStateShrinkRequest() = default ;
    InvalidateThirdPartyAppLoginStateShrinkRequest& operator=(const InvalidateThirdPartyAppLoginStateShrinkRequest &) = default ;
    InvalidateThirdPartyAppLoginStateShrinkRequest& operator=(InvalidateThirdPartyAppLoginStateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfoShrink_ != nullptr
        && this->thirdPartyAppId_ != nullptr; };
    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline InvalidateThirdPartyAppLoginStateShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // thirdPartyAppId Field Functions 
    bool hasThirdPartyAppId() const { return this->thirdPartyAppId_ != nullptr;};
    void deleteThirdPartyAppId() { this->thirdPartyAppId_ = nullptr;};
    inline string thirdPartyAppId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartyAppId_, "") };
    inline InvalidateThirdPartyAppLoginStateShrinkRequest& setThirdPartyAppId(string thirdPartyAppId) { DARABONBA_PTR_SET_VALUE(thirdPartyAppId_, thirdPartyAppId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdPartyAppId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

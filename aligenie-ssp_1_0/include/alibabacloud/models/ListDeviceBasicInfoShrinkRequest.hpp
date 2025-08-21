// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEBASICINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEBASICINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListDeviceBasicInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceBasicInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfos, deviceInfosShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceBasicInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfos, deviceInfosShrink_);
    };
    ListDeviceBasicInfoShrinkRequest() = default ;
    ListDeviceBasicInfoShrinkRequest(const ListDeviceBasicInfoShrinkRequest &) = default ;
    ListDeviceBasicInfoShrinkRequest(ListDeviceBasicInfoShrinkRequest &&) = default ;
    ListDeviceBasicInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceBasicInfoShrinkRequest() = default ;
    ListDeviceBasicInfoShrinkRequest& operator=(const ListDeviceBasicInfoShrinkRequest &) = default ;
    ListDeviceBasicInfoShrinkRequest& operator=(ListDeviceBasicInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfosShrink_ != nullptr; };
    // deviceInfosShrink Field Functions 
    bool hasDeviceInfosShrink() const { return this->deviceInfosShrink_ != nullptr;};
    void deleteDeviceInfosShrink() { this->deviceInfosShrink_ = nullptr;};
    inline string deviceInfosShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfosShrink_, "") };
    inline ListDeviceBasicInfoShrinkRequest& setDeviceInfosShrink(string deviceInfosShrink) { DARABONBA_PTR_SET_VALUE(deviceInfosShrink_, deviceInfosShrink) };


  protected:
    std::shared_ptr<string> deviceInfosShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

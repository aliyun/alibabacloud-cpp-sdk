// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVALIDATETHIRDPARTYAPPLOGINSTATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVALIDATETHIRDPARTYAPPLOGINSTATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InvalidateThirdPartyAppLoginStateRequestDeviceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class InvalidateThirdPartyAppLoginStateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvalidateThirdPartyAppLoginStateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(ThirdPartyAppId, thirdPartyAppId_);
    };
    friend void from_json(const Darabonba::Json& j, InvalidateThirdPartyAppLoginStateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(ThirdPartyAppId, thirdPartyAppId_);
    };
    InvalidateThirdPartyAppLoginStateRequest() = default ;
    InvalidateThirdPartyAppLoginStateRequest(const InvalidateThirdPartyAppLoginStateRequest &) = default ;
    InvalidateThirdPartyAppLoginStateRequest(InvalidateThirdPartyAppLoginStateRequest &&) = default ;
    InvalidateThirdPartyAppLoginStateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvalidateThirdPartyAppLoginStateRequest() = default ;
    InvalidateThirdPartyAppLoginStateRequest& operator=(const InvalidateThirdPartyAppLoginStateRequest &) = default ;
    InvalidateThirdPartyAppLoginStateRequest& operator=(InvalidateThirdPartyAppLoginStateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->thirdPartyAppId_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const InvalidateThirdPartyAppLoginStateRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, InvalidateThirdPartyAppLoginStateRequestDeviceInfo) };
    inline InvalidateThirdPartyAppLoginStateRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, InvalidateThirdPartyAppLoginStateRequestDeviceInfo) };
    inline InvalidateThirdPartyAppLoginStateRequest& setDeviceInfo(const InvalidateThirdPartyAppLoginStateRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline InvalidateThirdPartyAppLoginStateRequest& setDeviceInfo(InvalidateThirdPartyAppLoginStateRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // thirdPartyAppId Field Functions 
    bool hasThirdPartyAppId() const { return this->thirdPartyAppId_ != nullptr;};
    void deleteThirdPartyAppId() { this->thirdPartyAppId_ = nullptr;};
    inline string thirdPartyAppId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartyAppId_, "") };
    inline InvalidateThirdPartyAppLoginStateRequest& setThirdPartyAppId(string thirdPartyAppId) { DARABONBA_PTR_SET_VALUE(thirdPartyAppId_, thirdPartyAppId) };


  protected:
    // This parameter is required.
    std::shared_ptr<InvalidateThirdPartyAppLoginStateRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdPartyAppId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

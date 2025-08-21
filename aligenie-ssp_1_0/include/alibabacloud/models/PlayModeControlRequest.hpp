// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PLAYMODECONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PLAYMODECONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PlayModeControlRequestDeviceInfo.hpp>
#include <alibabacloud/models/PlayModeControlRequestOpenPlayModeControlRequest.hpp>
#include <alibabacloud/models/PlayModeControlRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class PlayModeControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PlayModeControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(OpenPlayModeControlRequest, openPlayModeControlRequest_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, PlayModeControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(OpenPlayModeControlRequest, openPlayModeControlRequest_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    PlayModeControlRequest() = default ;
    PlayModeControlRequest(const PlayModeControlRequest &) = default ;
    PlayModeControlRequest(PlayModeControlRequest &&) = default ;
    PlayModeControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PlayModeControlRequest() = default ;
    PlayModeControlRequest& operator=(const PlayModeControlRequest &) = default ;
    PlayModeControlRequest& operator=(PlayModeControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->openPlayModeControlRequest_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const PlayModeControlRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, PlayModeControlRequestDeviceInfo) };
    inline PlayModeControlRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, PlayModeControlRequestDeviceInfo) };
    inline PlayModeControlRequest& setDeviceInfo(const PlayModeControlRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline PlayModeControlRequest& setDeviceInfo(PlayModeControlRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // openPlayModeControlRequest Field Functions 
    bool hasOpenPlayModeControlRequest() const { return this->openPlayModeControlRequest_ != nullptr;};
    void deleteOpenPlayModeControlRequest() { this->openPlayModeControlRequest_ = nullptr;};
    inline const PlayModeControlRequestOpenPlayModeControlRequest & openPlayModeControlRequest() const { DARABONBA_PTR_GET_CONST(openPlayModeControlRequest_, PlayModeControlRequestOpenPlayModeControlRequest) };
    inline PlayModeControlRequestOpenPlayModeControlRequest openPlayModeControlRequest() { DARABONBA_PTR_GET(openPlayModeControlRequest_, PlayModeControlRequestOpenPlayModeControlRequest) };
    inline PlayModeControlRequest& setOpenPlayModeControlRequest(const PlayModeControlRequestOpenPlayModeControlRequest & openPlayModeControlRequest) { DARABONBA_PTR_SET_VALUE(openPlayModeControlRequest_, openPlayModeControlRequest) };
    inline PlayModeControlRequest& setOpenPlayModeControlRequest(PlayModeControlRequestOpenPlayModeControlRequest && openPlayModeControlRequest) { DARABONBA_PTR_SET_RVALUE(openPlayModeControlRequest_, openPlayModeControlRequest) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const PlayModeControlRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, PlayModeControlRequestUserInfo) };
    inline PlayModeControlRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, PlayModeControlRequestUserInfo) };
    inline PlayModeControlRequest& setUserInfo(const PlayModeControlRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline PlayModeControlRequest& setUserInfo(PlayModeControlRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<PlayModeControlRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<PlayModeControlRequestOpenPlayModeControlRequest> openPlayModeControlRequest_ = nullptr;
    // This parameter is required.
    std::shared_ptr<PlayModeControlRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

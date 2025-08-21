// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PLAYANDPAUSECONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PLAYANDPAUSECONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PlayAndPauseControlRequestDeviceInfo.hpp>
#include <alibabacloud/models/PlayAndPauseControlRequestOpenPlayAndPauseControlParam.hpp>
#include <alibabacloud/models/PlayAndPauseControlRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class PlayAndPauseControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PlayAndPauseControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(OpenPlayAndPauseControlParam, openPlayAndPauseControlParam_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, PlayAndPauseControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(OpenPlayAndPauseControlParam, openPlayAndPauseControlParam_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    PlayAndPauseControlRequest() = default ;
    PlayAndPauseControlRequest(const PlayAndPauseControlRequest &) = default ;
    PlayAndPauseControlRequest(PlayAndPauseControlRequest &&) = default ;
    PlayAndPauseControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PlayAndPauseControlRequest() = default ;
    PlayAndPauseControlRequest& operator=(const PlayAndPauseControlRequest &) = default ;
    PlayAndPauseControlRequest& operator=(PlayAndPauseControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->openPlayAndPauseControlParam_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const PlayAndPauseControlRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, PlayAndPauseControlRequestDeviceInfo) };
    inline PlayAndPauseControlRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, PlayAndPauseControlRequestDeviceInfo) };
    inline PlayAndPauseControlRequest& setDeviceInfo(const PlayAndPauseControlRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline PlayAndPauseControlRequest& setDeviceInfo(PlayAndPauseControlRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // openPlayAndPauseControlParam Field Functions 
    bool hasOpenPlayAndPauseControlParam() const { return this->openPlayAndPauseControlParam_ != nullptr;};
    void deleteOpenPlayAndPauseControlParam() { this->openPlayAndPauseControlParam_ = nullptr;};
    inline const PlayAndPauseControlRequestOpenPlayAndPauseControlParam & openPlayAndPauseControlParam() const { DARABONBA_PTR_GET_CONST(openPlayAndPauseControlParam_, PlayAndPauseControlRequestOpenPlayAndPauseControlParam) };
    inline PlayAndPauseControlRequestOpenPlayAndPauseControlParam openPlayAndPauseControlParam() { DARABONBA_PTR_GET(openPlayAndPauseControlParam_, PlayAndPauseControlRequestOpenPlayAndPauseControlParam) };
    inline PlayAndPauseControlRequest& setOpenPlayAndPauseControlParam(const PlayAndPauseControlRequestOpenPlayAndPauseControlParam & openPlayAndPauseControlParam) { DARABONBA_PTR_SET_VALUE(openPlayAndPauseControlParam_, openPlayAndPauseControlParam) };
    inline PlayAndPauseControlRequest& setOpenPlayAndPauseControlParam(PlayAndPauseControlRequestOpenPlayAndPauseControlParam && openPlayAndPauseControlParam) { DARABONBA_PTR_SET_RVALUE(openPlayAndPauseControlParam_, openPlayAndPauseControlParam) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const PlayAndPauseControlRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, PlayAndPauseControlRequestUserInfo) };
    inline PlayAndPauseControlRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, PlayAndPauseControlRequestUserInfo) };
    inline PlayAndPauseControlRequest& setUserInfo(const PlayAndPauseControlRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline PlayAndPauseControlRequest& setUserInfo(PlayAndPauseControlRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<PlayAndPauseControlRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<PlayAndPauseControlRequestOpenPlayAndPauseControlParam> openPlayAndPauseControlParam_ = nullptr;
    // This parameter is required.
    std::shared_ptr<PlayAndPauseControlRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

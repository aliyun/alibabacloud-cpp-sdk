// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROGRESSCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PROGRESSCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ProgressControlRequestDeviceInfo.hpp>
#include <alibabacloud/models/ProgressControlRequestOpenProgressControlRequest.hpp>
#include <alibabacloud/models/ProgressControlRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ProgressControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProgressControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(OpenProgressControlRequest, openProgressControlRequest_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ProgressControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(OpenProgressControlRequest, openProgressControlRequest_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ProgressControlRequest() = default ;
    ProgressControlRequest(const ProgressControlRequest &) = default ;
    ProgressControlRequest(ProgressControlRequest &&) = default ;
    ProgressControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProgressControlRequest() = default ;
    ProgressControlRequest& operator=(const ProgressControlRequest &) = default ;
    ProgressControlRequest& operator=(ProgressControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->openProgressControlRequest_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const ProgressControlRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, ProgressControlRequestDeviceInfo) };
    inline ProgressControlRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, ProgressControlRequestDeviceInfo) };
    inline ProgressControlRequest& setDeviceInfo(const ProgressControlRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline ProgressControlRequest& setDeviceInfo(ProgressControlRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // openProgressControlRequest Field Functions 
    bool hasOpenProgressControlRequest() const { return this->openProgressControlRequest_ != nullptr;};
    void deleteOpenProgressControlRequest() { this->openProgressControlRequest_ = nullptr;};
    inline const ProgressControlRequestOpenProgressControlRequest & openProgressControlRequest() const { DARABONBA_PTR_GET_CONST(openProgressControlRequest_, ProgressControlRequestOpenProgressControlRequest) };
    inline ProgressControlRequestOpenProgressControlRequest openProgressControlRequest() { DARABONBA_PTR_GET(openProgressControlRequest_, ProgressControlRequestOpenProgressControlRequest) };
    inline ProgressControlRequest& setOpenProgressControlRequest(const ProgressControlRequestOpenProgressControlRequest & openProgressControlRequest) { DARABONBA_PTR_SET_VALUE(openProgressControlRequest_, openProgressControlRequest) };
    inline ProgressControlRequest& setOpenProgressControlRequest(ProgressControlRequestOpenProgressControlRequest && openProgressControlRequest) { DARABONBA_PTR_SET_RVALUE(openProgressControlRequest_, openProgressControlRequest) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ProgressControlRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ProgressControlRequestUserInfo) };
    inline ProgressControlRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, ProgressControlRequestUserInfo) };
    inline ProgressControlRequest& setUserInfo(const ProgressControlRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ProgressControlRequest& setUserInfo(ProgressControlRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<ProgressControlRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ProgressControlRequestOpenProgressControlRequest> openProgressControlRequest_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ProgressControlRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

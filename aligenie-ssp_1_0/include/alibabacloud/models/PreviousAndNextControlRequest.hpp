// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIOUSANDNEXTCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREVIOUSANDNEXTCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PreviousAndNextControlRequestDeviceInfo.hpp>
#include <alibabacloud/models/PreviousAndNextControlRequestOpenControlPlayingListRequest.hpp>
#include <alibabacloud/models/PreviousAndNextControlRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class PreviousAndNextControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviousAndNextControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(OpenControlPlayingListRequest, openControlPlayingListRequest_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, PreviousAndNextControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(OpenControlPlayingListRequest, openControlPlayingListRequest_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    PreviousAndNextControlRequest() = default ;
    PreviousAndNextControlRequest(const PreviousAndNextControlRequest &) = default ;
    PreviousAndNextControlRequest(PreviousAndNextControlRequest &&) = default ;
    PreviousAndNextControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviousAndNextControlRequest() = default ;
    PreviousAndNextControlRequest& operator=(const PreviousAndNextControlRequest &) = default ;
    PreviousAndNextControlRequest& operator=(PreviousAndNextControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->openControlPlayingListRequest_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const PreviousAndNextControlRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, PreviousAndNextControlRequestDeviceInfo) };
    inline PreviousAndNextControlRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, PreviousAndNextControlRequestDeviceInfo) };
    inline PreviousAndNextControlRequest& setDeviceInfo(const PreviousAndNextControlRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline PreviousAndNextControlRequest& setDeviceInfo(PreviousAndNextControlRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // openControlPlayingListRequest Field Functions 
    bool hasOpenControlPlayingListRequest() const { return this->openControlPlayingListRequest_ != nullptr;};
    void deleteOpenControlPlayingListRequest() { this->openControlPlayingListRequest_ = nullptr;};
    inline const PreviousAndNextControlRequestOpenControlPlayingListRequest & openControlPlayingListRequest() const { DARABONBA_PTR_GET_CONST(openControlPlayingListRequest_, PreviousAndNextControlRequestOpenControlPlayingListRequest) };
    inline PreviousAndNextControlRequestOpenControlPlayingListRequest openControlPlayingListRequest() { DARABONBA_PTR_GET(openControlPlayingListRequest_, PreviousAndNextControlRequestOpenControlPlayingListRequest) };
    inline PreviousAndNextControlRequest& setOpenControlPlayingListRequest(const PreviousAndNextControlRequestOpenControlPlayingListRequest & openControlPlayingListRequest) { DARABONBA_PTR_SET_VALUE(openControlPlayingListRequest_, openControlPlayingListRequest) };
    inline PreviousAndNextControlRequest& setOpenControlPlayingListRequest(PreviousAndNextControlRequestOpenControlPlayingListRequest && openControlPlayingListRequest) { DARABONBA_PTR_SET_RVALUE(openControlPlayingListRequest_, openControlPlayingListRequest) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const PreviousAndNextControlRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, PreviousAndNextControlRequestUserInfo) };
    inline PreviousAndNextControlRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, PreviousAndNextControlRequestUserInfo) };
    inline PreviousAndNextControlRequest& setUserInfo(const PreviousAndNextControlRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline PreviousAndNextControlRequest& setUserInfo(PreviousAndNextControlRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<PreviousAndNextControlRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<PreviousAndNextControlRequestOpenControlPlayingListRequest> openControlPlayingListRequest_ = nullptr;
    // This parameter is required.
    std::shared_ptr<PreviousAndNextControlRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

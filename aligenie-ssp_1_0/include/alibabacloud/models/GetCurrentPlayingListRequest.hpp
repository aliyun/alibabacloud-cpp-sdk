// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCURRENTPLAYINGLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCURRENTPLAYINGLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCurrentPlayingListRequestDeviceInfo.hpp>
#include <alibabacloud/models/GetCurrentPlayingListRequestOpenQueryPlayListRequest.hpp>
#include <alibabacloud/models/GetCurrentPlayingListRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetCurrentPlayingListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCurrentPlayingListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(OpenQueryPlayListRequest, openQueryPlayListRequest_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetCurrentPlayingListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(OpenQueryPlayListRequest, openQueryPlayListRequest_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    GetCurrentPlayingListRequest() = default ;
    GetCurrentPlayingListRequest(const GetCurrentPlayingListRequest &) = default ;
    GetCurrentPlayingListRequest(GetCurrentPlayingListRequest &&) = default ;
    GetCurrentPlayingListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCurrentPlayingListRequest() = default ;
    GetCurrentPlayingListRequest& operator=(const GetCurrentPlayingListRequest &) = default ;
    GetCurrentPlayingListRequest& operator=(GetCurrentPlayingListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->openQueryPlayListRequest_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const GetCurrentPlayingListRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, GetCurrentPlayingListRequestDeviceInfo) };
    inline GetCurrentPlayingListRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, GetCurrentPlayingListRequestDeviceInfo) };
    inline GetCurrentPlayingListRequest& setDeviceInfo(const GetCurrentPlayingListRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline GetCurrentPlayingListRequest& setDeviceInfo(GetCurrentPlayingListRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // openQueryPlayListRequest Field Functions 
    bool hasOpenQueryPlayListRequest() const { return this->openQueryPlayListRequest_ != nullptr;};
    void deleteOpenQueryPlayListRequest() { this->openQueryPlayListRequest_ = nullptr;};
    inline const GetCurrentPlayingListRequestOpenQueryPlayListRequest & openQueryPlayListRequest() const { DARABONBA_PTR_GET_CONST(openQueryPlayListRequest_, GetCurrentPlayingListRequestOpenQueryPlayListRequest) };
    inline GetCurrentPlayingListRequestOpenQueryPlayListRequest openQueryPlayListRequest() { DARABONBA_PTR_GET(openQueryPlayListRequest_, GetCurrentPlayingListRequestOpenQueryPlayListRequest) };
    inline GetCurrentPlayingListRequest& setOpenQueryPlayListRequest(const GetCurrentPlayingListRequestOpenQueryPlayListRequest & openQueryPlayListRequest) { DARABONBA_PTR_SET_VALUE(openQueryPlayListRequest_, openQueryPlayListRequest) };
    inline GetCurrentPlayingListRequest& setOpenQueryPlayListRequest(GetCurrentPlayingListRequestOpenQueryPlayListRequest && openQueryPlayListRequest) { DARABONBA_PTR_SET_RVALUE(openQueryPlayListRequest_, openQueryPlayListRequest) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const GetCurrentPlayingListRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, GetCurrentPlayingListRequestUserInfo) };
    inline GetCurrentPlayingListRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, GetCurrentPlayingListRequestUserInfo) };
    inline GetCurrentPlayingListRequest& setUserInfo(const GetCurrentPlayingListRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline GetCurrentPlayingListRequest& setUserInfo(GetCurrentPlayingListRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<GetCurrentPlayingListRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetCurrentPlayingListRequestOpenQueryPlayListRequest> openQueryPlayListRequest_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetCurrentPlayingListRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

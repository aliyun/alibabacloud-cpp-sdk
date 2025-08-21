// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INDEXCONTROLPLAYINGLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INDEXCONTROLPLAYINGLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IndexControlPlayingListRequestDeviceInfo.hpp>
#include <alibabacloud/models/IndexControlPlayingListRequestOpenIndexControlRequest.hpp>
#include <alibabacloud/models/IndexControlPlayingListRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class IndexControlPlayingListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IndexControlPlayingListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(OpenIndexControlRequest, openIndexControlRequest_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, IndexControlPlayingListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(OpenIndexControlRequest, openIndexControlRequest_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    IndexControlPlayingListRequest() = default ;
    IndexControlPlayingListRequest(const IndexControlPlayingListRequest &) = default ;
    IndexControlPlayingListRequest(IndexControlPlayingListRequest &&) = default ;
    IndexControlPlayingListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IndexControlPlayingListRequest() = default ;
    IndexControlPlayingListRequest& operator=(const IndexControlPlayingListRequest &) = default ;
    IndexControlPlayingListRequest& operator=(IndexControlPlayingListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->openIndexControlRequest_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const IndexControlPlayingListRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, IndexControlPlayingListRequestDeviceInfo) };
    inline IndexControlPlayingListRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, IndexControlPlayingListRequestDeviceInfo) };
    inline IndexControlPlayingListRequest& setDeviceInfo(const IndexControlPlayingListRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline IndexControlPlayingListRequest& setDeviceInfo(IndexControlPlayingListRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // openIndexControlRequest Field Functions 
    bool hasOpenIndexControlRequest() const { return this->openIndexControlRequest_ != nullptr;};
    void deleteOpenIndexControlRequest() { this->openIndexControlRequest_ = nullptr;};
    inline const IndexControlPlayingListRequestOpenIndexControlRequest & openIndexControlRequest() const { DARABONBA_PTR_GET_CONST(openIndexControlRequest_, IndexControlPlayingListRequestOpenIndexControlRequest) };
    inline IndexControlPlayingListRequestOpenIndexControlRequest openIndexControlRequest() { DARABONBA_PTR_GET(openIndexControlRequest_, IndexControlPlayingListRequestOpenIndexControlRequest) };
    inline IndexControlPlayingListRequest& setOpenIndexControlRequest(const IndexControlPlayingListRequestOpenIndexControlRequest & openIndexControlRequest) { DARABONBA_PTR_SET_VALUE(openIndexControlRequest_, openIndexControlRequest) };
    inline IndexControlPlayingListRequest& setOpenIndexControlRequest(IndexControlPlayingListRequestOpenIndexControlRequest && openIndexControlRequest) { DARABONBA_PTR_SET_RVALUE(openIndexControlRequest_, openIndexControlRequest) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const IndexControlPlayingListRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, IndexControlPlayingListRequestUserInfo) };
    inline IndexControlPlayingListRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, IndexControlPlayingListRequestUserInfo) };
    inline IndexControlPlayingListRequest& setUserInfo(const IndexControlPlayingListRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline IndexControlPlayingListRequest& setUserInfo(IndexControlPlayingListRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<IndexControlPlayingListRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<IndexControlPlayingListRequestOpenIndexControlRequest> openIndexControlRequest_ = nullptr;
    // This parameter is required.
    std::shared_ptr<IndexControlPlayingListRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

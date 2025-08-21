// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLAYINGLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLAYINGLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePlayingListRequestDeviceInfo.hpp>
#include <alibabacloud/models/CreatePlayingListRequestOpenCreatePlayingListRequest.hpp>
#include <alibabacloud/models/CreatePlayingListRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CreatePlayingListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePlayingListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(OpenCreatePlayingListRequest, openCreatePlayingListRequest_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePlayingListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(OpenCreatePlayingListRequest, openCreatePlayingListRequest_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    CreatePlayingListRequest() = default ;
    CreatePlayingListRequest(const CreatePlayingListRequest &) = default ;
    CreatePlayingListRequest(CreatePlayingListRequest &&) = default ;
    CreatePlayingListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePlayingListRequest() = default ;
    CreatePlayingListRequest& operator=(const CreatePlayingListRequest &) = default ;
    CreatePlayingListRequest& operator=(CreatePlayingListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->openCreatePlayingListRequest_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const CreatePlayingListRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, CreatePlayingListRequestDeviceInfo) };
    inline CreatePlayingListRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, CreatePlayingListRequestDeviceInfo) };
    inline CreatePlayingListRequest& setDeviceInfo(const CreatePlayingListRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline CreatePlayingListRequest& setDeviceInfo(CreatePlayingListRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // openCreatePlayingListRequest Field Functions 
    bool hasOpenCreatePlayingListRequest() const { return this->openCreatePlayingListRequest_ != nullptr;};
    void deleteOpenCreatePlayingListRequest() { this->openCreatePlayingListRequest_ = nullptr;};
    inline const CreatePlayingListRequestOpenCreatePlayingListRequest & openCreatePlayingListRequest() const { DARABONBA_PTR_GET_CONST(openCreatePlayingListRequest_, CreatePlayingListRequestOpenCreatePlayingListRequest) };
    inline CreatePlayingListRequestOpenCreatePlayingListRequest openCreatePlayingListRequest() { DARABONBA_PTR_GET(openCreatePlayingListRequest_, CreatePlayingListRequestOpenCreatePlayingListRequest) };
    inline CreatePlayingListRequest& setOpenCreatePlayingListRequest(const CreatePlayingListRequestOpenCreatePlayingListRequest & openCreatePlayingListRequest) { DARABONBA_PTR_SET_VALUE(openCreatePlayingListRequest_, openCreatePlayingListRequest) };
    inline CreatePlayingListRequest& setOpenCreatePlayingListRequest(CreatePlayingListRequestOpenCreatePlayingListRequest && openCreatePlayingListRequest) { DARABONBA_PTR_SET_RVALUE(openCreatePlayingListRequest_, openCreatePlayingListRequest) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const CreatePlayingListRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, CreatePlayingListRequestUserInfo) };
    inline CreatePlayingListRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, CreatePlayingListRequestUserInfo) };
    inline CreatePlayingListRequest& setUserInfo(const CreatePlayingListRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline CreatePlayingListRequest& setUserInfo(CreatePlayingListRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<CreatePlayingListRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreatePlayingListRequestOpenCreatePlayingListRequest> openCreatePlayingListRequest_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreatePlayingListRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

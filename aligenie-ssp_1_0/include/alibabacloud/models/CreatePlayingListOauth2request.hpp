// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLAYINGLISTOAUTH2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLAYINGLISTOAUTH2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePlayingListOAuth2RequestDeviceInfo.hpp>
#include <alibabacloud/models/CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CreatePlayingListOAuth2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePlayingListOAuth2Request& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(OpenCreatePlayingListRequest, openCreatePlayingListRequest_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePlayingListOAuth2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(OpenCreatePlayingListRequest, openCreatePlayingListRequest_);
    };
    CreatePlayingListOAuth2Request() = default ;
    CreatePlayingListOAuth2Request(const CreatePlayingListOAuth2Request &) = default ;
    CreatePlayingListOAuth2Request(CreatePlayingListOAuth2Request &&) = default ;
    CreatePlayingListOAuth2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePlayingListOAuth2Request() = default ;
    CreatePlayingListOAuth2Request& operator=(const CreatePlayingListOAuth2Request &) = default ;
    CreatePlayingListOAuth2Request& operator=(CreatePlayingListOAuth2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->openCreatePlayingListRequest_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const CreatePlayingListOAuth2RequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, CreatePlayingListOAuth2RequestDeviceInfo) };
    inline CreatePlayingListOAuth2RequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, CreatePlayingListOAuth2RequestDeviceInfo) };
    inline CreatePlayingListOAuth2Request& setDeviceInfo(const CreatePlayingListOAuth2RequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline CreatePlayingListOAuth2Request& setDeviceInfo(CreatePlayingListOAuth2RequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // openCreatePlayingListRequest Field Functions 
    bool hasOpenCreatePlayingListRequest() const { return this->openCreatePlayingListRequest_ != nullptr;};
    void deleteOpenCreatePlayingListRequest() { this->openCreatePlayingListRequest_ = nullptr;};
    inline const CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest & openCreatePlayingListRequest() const { DARABONBA_PTR_GET_CONST(openCreatePlayingListRequest_, CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest) };
    inline CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest openCreatePlayingListRequest() { DARABONBA_PTR_GET(openCreatePlayingListRequest_, CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest) };
    inline CreatePlayingListOAuth2Request& setOpenCreatePlayingListRequest(const CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest & openCreatePlayingListRequest) { DARABONBA_PTR_SET_VALUE(openCreatePlayingListRequest_, openCreatePlayingListRequest) };
    inline CreatePlayingListOAuth2Request& setOpenCreatePlayingListRequest(CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest && openCreatePlayingListRequest) { DARABONBA_PTR_SET_RVALUE(openCreatePlayingListRequest_, openCreatePlayingListRequest) };


  protected:
    // This parameter is required.
    std::shared_ptr<CreatePlayingListOAuth2RequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest> openCreatePlayingListRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

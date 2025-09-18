// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLAYINGLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLAYINGLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePlayingListRequestDeviceInfo.hpp>
#include <alibabacloud/models/CreatePlayingListRequestOpenCreatePlayingListRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class CreatePlayingListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePlayingListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(OpenCreatePlayingListRequest, openCreatePlayingListRequest_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePlayingListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(OpenCreatePlayingListRequest, openCreatePlayingListRequest_);
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
        && this->openCreatePlayingListRequest_ != nullptr; };
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


  protected:
    // This parameter is required.
    std::shared_ptr<CreatePlayingListRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreatePlayingListRequestOpenCreatePlayingListRequest> openCreatePlayingListRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif

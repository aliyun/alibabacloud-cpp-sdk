// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDANDREMOVEFAVORITECONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDANDREMOVEFAVORITECONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddAndRemoveFavoriteContentRequestDeviceInfo.hpp>
#include <alibabacloud/models/AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest.hpp>
#include <alibabacloud/models/AddAndRemoveFavoriteContentRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class AddAndRemoveFavoriteContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAndRemoveFavoriteContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(OpenAddAndRemoveFavoriteContentRequest, openAddAndRemoveFavoriteContentRequest_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, AddAndRemoveFavoriteContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(OpenAddAndRemoveFavoriteContentRequest, openAddAndRemoveFavoriteContentRequest_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    AddAndRemoveFavoriteContentRequest() = default ;
    AddAndRemoveFavoriteContentRequest(const AddAndRemoveFavoriteContentRequest &) = default ;
    AddAndRemoveFavoriteContentRequest(AddAndRemoveFavoriteContentRequest &&) = default ;
    AddAndRemoveFavoriteContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAndRemoveFavoriteContentRequest() = default ;
    AddAndRemoveFavoriteContentRequest& operator=(const AddAndRemoveFavoriteContentRequest &) = default ;
    AddAndRemoveFavoriteContentRequest& operator=(AddAndRemoveFavoriteContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->openAddAndRemoveFavoriteContentRequest_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const AddAndRemoveFavoriteContentRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, AddAndRemoveFavoriteContentRequestDeviceInfo) };
    inline AddAndRemoveFavoriteContentRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, AddAndRemoveFavoriteContentRequestDeviceInfo) };
    inline AddAndRemoveFavoriteContentRequest& setDeviceInfo(const AddAndRemoveFavoriteContentRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline AddAndRemoveFavoriteContentRequest& setDeviceInfo(AddAndRemoveFavoriteContentRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // openAddAndRemoveFavoriteContentRequest Field Functions 
    bool hasOpenAddAndRemoveFavoriteContentRequest() const { return this->openAddAndRemoveFavoriteContentRequest_ != nullptr;};
    void deleteOpenAddAndRemoveFavoriteContentRequest() { this->openAddAndRemoveFavoriteContentRequest_ = nullptr;};
    inline const AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest & openAddAndRemoveFavoriteContentRequest() const { DARABONBA_PTR_GET_CONST(openAddAndRemoveFavoriteContentRequest_, AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest) };
    inline AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest openAddAndRemoveFavoriteContentRequest() { DARABONBA_PTR_GET(openAddAndRemoveFavoriteContentRequest_, AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest) };
    inline AddAndRemoveFavoriteContentRequest& setOpenAddAndRemoveFavoriteContentRequest(const AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest & openAddAndRemoveFavoriteContentRequest) { DARABONBA_PTR_SET_VALUE(openAddAndRemoveFavoriteContentRequest_, openAddAndRemoveFavoriteContentRequest) };
    inline AddAndRemoveFavoriteContentRequest& setOpenAddAndRemoveFavoriteContentRequest(AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest && openAddAndRemoveFavoriteContentRequest) { DARABONBA_PTR_SET_RVALUE(openAddAndRemoveFavoriteContentRequest_, openAddAndRemoveFavoriteContentRequest) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const AddAndRemoveFavoriteContentRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, AddAndRemoveFavoriteContentRequestUserInfo) };
    inline AddAndRemoveFavoriteContentRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, AddAndRemoveFavoriteContentRequestUserInfo) };
    inline AddAndRemoveFavoriteContentRequest& setUserInfo(const AddAndRemoveFavoriteContentRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline AddAndRemoveFavoriteContentRequest& setUserInfo(AddAndRemoveFavoriteContentRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<AddAndRemoveFavoriteContentRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest> openAddAndRemoveFavoriteContentRequest_ = nullptr;
    // This parameter is required.
    std::shared_ptr<AddAndRemoveFavoriteContentRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

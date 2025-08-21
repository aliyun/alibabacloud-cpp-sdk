// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDANDREMOVEFAVORITECONTENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDANDREMOVEFAVORITECONTENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class AddAndRemoveFavoriteContentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAndRemoveFavoriteContentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(OpenAddAndRemoveFavoriteContentRequest, openAddAndRemoveFavoriteContentRequestShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddAndRemoveFavoriteContentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(OpenAddAndRemoveFavoriteContentRequest, openAddAndRemoveFavoriteContentRequestShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    AddAndRemoveFavoriteContentShrinkRequest() = default ;
    AddAndRemoveFavoriteContentShrinkRequest(const AddAndRemoveFavoriteContentShrinkRequest &) = default ;
    AddAndRemoveFavoriteContentShrinkRequest(AddAndRemoveFavoriteContentShrinkRequest &&) = default ;
    AddAndRemoveFavoriteContentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAndRemoveFavoriteContentShrinkRequest() = default ;
    AddAndRemoveFavoriteContentShrinkRequest& operator=(const AddAndRemoveFavoriteContentShrinkRequest &) = default ;
    AddAndRemoveFavoriteContentShrinkRequest& operator=(AddAndRemoveFavoriteContentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfoShrink_ != nullptr
        && this->openAddAndRemoveFavoriteContentRequestShrink_ != nullptr && this->userInfoShrink_ != nullptr; };
    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline AddAndRemoveFavoriteContentShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // openAddAndRemoveFavoriteContentRequestShrink Field Functions 
    bool hasOpenAddAndRemoveFavoriteContentRequestShrink() const { return this->openAddAndRemoveFavoriteContentRequestShrink_ != nullptr;};
    void deleteOpenAddAndRemoveFavoriteContentRequestShrink() { this->openAddAndRemoveFavoriteContentRequestShrink_ = nullptr;};
    inline string openAddAndRemoveFavoriteContentRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(openAddAndRemoveFavoriteContentRequestShrink_, "") };
    inline AddAndRemoveFavoriteContentShrinkRequest& setOpenAddAndRemoveFavoriteContentRequestShrink(string openAddAndRemoveFavoriteContentRequestShrink) { DARABONBA_PTR_SET_VALUE(openAddAndRemoveFavoriteContentRequestShrink_, openAddAndRemoveFavoriteContentRequestShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline AddAndRemoveFavoriteContentShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openAddAndRemoveFavoriteContentRequestShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEBYUSERIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEBYUSERIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListDeviceByUserIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceByUserIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceByUserIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    ListDeviceByUserIdShrinkRequest() = default ;
    ListDeviceByUserIdShrinkRequest(const ListDeviceByUserIdShrinkRequest &) = default ;
    ListDeviceByUserIdShrinkRequest(ListDeviceByUserIdShrinkRequest &&) = default ;
    ListDeviceByUserIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceByUserIdShrinkRequest() = default ;
    ListDeviceByUserIdShrinkRequest& operator=(const ListDeviceByUserIdShrinkRequest &) = default ;
    ListDeviceByUserIdShrinkRequest& operator=(ListDeviceByUserIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userInfoShrink_ != nullptr; };
    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline ListDeviceByUserIdShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

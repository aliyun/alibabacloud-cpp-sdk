// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSUBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSUBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class AddSubShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSubShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddSubscriptionInfoRequest, addSubscriptionInfoRequestShrink_);
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddSubShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddSubscriptionInfoRequest, addSubscriptionInfoRequestShrink_);
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    AddSubShrinkRequest() = default ;
    AddSubShrinkRequest(const AddSubShrinkRequest &) = default ;
    AddSubShrinkRequest(AddSubShrinkRequest &&) = default ;
    AddSubShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSubShrinkRequest() = default ;
    AddSubShrinkRequest& operator=(const AddSubShrinkRequest &) = default ;
    AddSubShrinkRequest& operator=(AddSubShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addSubscriptionInfoRequestShrink_ != nullptr
        && this->deviceInfoShrink_ != nullptr && this->userInfoShrink_ != nullptr; };
    // addSubscriptionInfoRequestShrink Field Functions 
    bool hasAddSubscriptionInfoRequestShrink() const { return this->addSubscriptionInfoRequestShrink_ != nullptr;};
    void deleteAddSubscriptionInfoRequestShrink() { this->addSubscriptionInfoRequestShrink_ = nullptr;};
    inline string addSubscriptionInfoRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(addSubscriptionInfoRequestShrink_, "") };
    inline AddSubShrinkRequest& setAddSubscriptionInfoRequestShrink(string addSubscriptionInfoRequestShrink) { DARABONBA_PTR_SET_VALUE(addSubscriptionInfoRequestShrink_, addSubscriptionInfoRequestShrink) };


    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline AddSubShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline AddSubShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    std::shared_ptr<string> addSubscriptionInfoRequestShrink_ = nullptr;
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

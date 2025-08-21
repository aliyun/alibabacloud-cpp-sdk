// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLAYHISTORYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPLAYHISTORYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListPlayHistoryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPlayHistoryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(Request, requestShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListPlayHistoryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(Request, requestShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    ListPlayHistoryShrinkRequest() = default ;
    ListPlayHistoryShrinkRequest(const ListPlayHistoryShrinkRequest &) = default ;
    ListPlayHistoryShrinkRequest(ListPlayHistoryShrinkRequest &&) = default ;
    ListPlayHistoryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPlayHistoryShrinkRequest() = default ;
    ListPlayHistoryShrinkRequest& operator=(const ListPlayHistoryShrinkRequest &) = default ;
    ListPlayHistoryShrinkRequest& operator=(ListPlayHistoryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfoShrink_ != nullptr
        && this->requestShrink_ != nullptr && this->userInfoShrink_ != nullptr; };
    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline ListPlayHistoryShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // requestShrink Field Functions 
    bool hasRequestShrink() const { return this->requestShrink_ != nullptr;};
    void deleteRequestShrink() { this->requestShrink_ = nullptr;};
    inline string requestShrink() const { DARABONBA_PTR_GET_DEFAULT(requestShrink_, "") };
    inline ListPlayHistoryShrinkRequest& setRequestShrink(string requestShrink) { DARABONBA_PTR_SET_VALUE(requestShrink_, requestShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline ListPlayHistoryShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> requestShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

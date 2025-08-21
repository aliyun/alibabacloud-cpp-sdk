// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBALBUMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBALBUMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListSubAlbumShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubAlbumShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(QuerySubscriptionAlbumRequest, querySubscriptionAlbumRequestShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubAlbumShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(QuerySubscriptionAlbumRequest, querySubscriptionAlbumRequestShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    ListSubAlbumShrinkRequest() = default ;
    ListSubAlbumShrinkRequest(const ListSubAlbumShrinkRequest &) = default ;
    ListSubAlbumShrinkRequest(ListSubAlbumShrinkRequest &&) = default ;
    ListSubAlbumShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubAlbumShrinkRequest() = default ;
    ListSubAlbumShrinkRequest& operator=(const ListSubAlbumShrinkRequest &) = default ;
    ListSubAlbumShrinkRequest& operator=(ListSubAlbumShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfoShrink_ != nullptr
        && this->querySubscriptionAlbumRequestShrink_ != nullptr && this->userInfoShrink_ != nullptr; };
    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline ListSubAlbumShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // querySubscriptionAlbumRequestShrink Field Functions 
    bool hasQuerySubscriptionAlbumRequestShrink() const { return this->querySubscriptionAlbumRequestShrink_ != nullptr;};
    void deleteQuerySubscriptionAlbumRequestShrink() { this->querySubscriptionAlbumRequestShrink_ = nullptr;};
    inline string querySubscriptionAlbumRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(querySubscriptionAlbumRequestShrink_, "") };
    inline ListSubAlbumShrinkRequest& setQuerySubscriptionAlbumRequestShrink(string querySubscriptionAlbumRequestShrink) { DARABONBA_PTR_SET_VALUE(querySubscriptionAlbumRequestShrink_, querySubscriptionAlbumRequestShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline ListSubAlbumShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
    // request
    std::shared_ptr<string> querySubscriptionAlbumRequestShrink_ = nullptr;
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

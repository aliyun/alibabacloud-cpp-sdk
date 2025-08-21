// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALBUMISADDEDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALBUMISADDEDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListAlbumIsAddedShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlbumIsAddedShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlbumIdList, albumIdListShrink_);
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlbumIsAddedShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbumIdList, albumIdListShrink_);
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    ListAlbumIsAddedShrinkRequest() = default ;
    ListAlbumIsAddedShrinkRequest(const ListAlbumIsAddedShrinkRequest &) = default ;
    ListAlbumIsAddedShrinkRequest(ListAlbumIsAddedShrinkRequest &&) = default ;
    ListAlbumIsAddedShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlbumIsAddedShrinkRequest() = default ;
    ListAlbumIsAddedShrinkRequest& operator=(const ListAlbumIsAddedShrinkRequest &) = default ;
    ListAlbumIsAddedShrinkRequest& operator=(ListAlbumIsAddedShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->albumIdListShrink_ != nullptr
        && this->deviceInfoShrink_ != nullptr && this->userInfoShrink_ != nullptr; };
    // albumIdListShrink Field Functions 
    bool hasAlbumIdListShrink() const { return this->albumIdListShrink_ != nullptr;};
    void deleteAlbumIdListShrink() { this->albumIdListShrink_ = nullptr;};
    inline string albumIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(albumIdListShrink_, "") };
    inline ListAlbumIsAddedShrinkRequest& setAlbumIdListShrink(string albumIdListShrink) { DARABONBA_PTR_SET_VALUE(albumIdListShrink_, albumIdListShrink) };


    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline ListAlbumIsAddedShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline ListAlbumIsAddedShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    std::shared_ptr<string> albumIdListShrink_ = nullptr;
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

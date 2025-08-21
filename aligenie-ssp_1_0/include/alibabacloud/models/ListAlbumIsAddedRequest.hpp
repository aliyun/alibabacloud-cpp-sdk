// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALBUMISADDEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALBUMISADDEDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAlbumIsAddedRequestDeviceInfo.hpp>
#include <alibabacloud/models/ListAlbumIsAddedRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListAlbumIsAddedRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlbumIsAddedRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlbumIdList, albumIdList_);
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlbumIsAddedRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbumIdList, albumIdList_);
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ListAlbumIsAddedRequest() = default ;
    ListAlbumIsAddedRequest(const ListAlbumIsAddedRequest &) = default ;
    ListAlbumIsAddedRequest(ListAlbumIsAddedRequest &&) = default ;
    ListAlbumIsAddedRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlbumIsAddedRequest() = default ;
    ListAlbumIsAddedRequest& operator=(const ListAlbumIsAddedRequest &) = default ;
    ListAlbumIsAddedRequest& operator=(ListAlbumIsAddedRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->albumIdList_ != nullptr
        && this->deviceInfo_ != nullptr && this->userInfo_ != nullptr; };
    // albumIdList Field Functions 
    bool hasAlbumIdList() const { return this->albumIdList_ != nullptr;};
    void deleteAlbumIdList() { this->albumIdList_ = nullptr;};
    inline const vector<string> & albumIdList() const { DARABONBA_PTR_GET_CONST(albumIdList_, vector<string>) };
    inline vector<string> albumIdList() { DARABONBA_PTR_GET(albumIdList_, vector<string>) };
    inline ListAlbumIsAddedRequest& setAlbumIdList(const vector<string> & albumIdList) { DARABONBA_PTR_SET_VALUE(albumIdList_, albumIdList) };
    inline ListAlbumIsAddedRequest& setAlbumIdList(vector<string> && albumIdList) { DARABONBA_PTR_SET_RVALUE(albumIdList_, albumIdList) };


    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const ListAlbumIsAddedRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, ListAlbumIsAddedRequestDeviceInfo) };
    inline ListAlbumIsAddedRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, ListAlbumIsAddedRequestDeviceInfo) };
    inline ListAlbumIsAddedRequest& setDeviceInfo(const ListAlbumIsAddedRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline ListAlbumIsAddedRequest& setDeviceInfo(ListAlbumIsAddedRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ListAlbumIsAddedRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ListAlbumIsAddedRequestUserInfo) };
    inline ListAlbumIsAddedRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, ListAlbumIsAddedRequestUserInfo) };
    inline ListAlbumIsAddedRequest& setUserInfo(const ListAlbumIsAddedRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListAlbumIsAddedRequest& setUserInfo(ListAlbumIsAddedRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    std::shared_ptr<vector<string>> albumIdList_ = nullptr;
    std::shared_ptr<ListAlbumIsAddedRequestDeviceInfo> deviceInfo_ = nullptr;
    std::shared_ptr<ListAlbumIsAddedRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBALBUMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBALBUMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSubAlbumRequestDeviceInfo.hpp>
#include <alibabacloud/models/ListSubAlbumRequestQuerySubscriptionAlbumRequest.hpp>
#include <alibabacloud/models/ListSubAlbumRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListSubAlbumRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubAlbumRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(QuerySubscriptionAlbumRequest, querySubscriptionAlbumRequest_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubAlbumRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(QuerySubscriptionAlbumRequest, querySubscriptionAlbumRequest_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ListSubAlbumRequest() = default ;
    ListSubAlbumRequest(const ListSubAlbumRequest &) = default ;
    ListSubAlbumRequest(ListSubAlbumRequest &&) = default ;
    ListSubAlbumRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubAlbumRequest() = default ;
    ListSubAlbumRequest& operator=(const ListSubAlbumRequest &) = default ;
    ListSubAlbumRequest& operator=(ListSubAlbumRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->querySubscriptionAlbumRequest_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const ListSubAlbumRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, ListSubAlbumRequestDeviceInfo) };
    inline ListSubAlbumRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, ListSubAlbumRequestDeviceInfo) };
    inline ListSubAlbumRequest& setDeviceInfo(const ListSubAlbumRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline ListSubAlbumRequest& setDeviceInfo(ListSubAlbumRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // querySubscriptionAlbumRequest Field Functions 
    bool hasQuerySubscriptionAlbumRequest() const { return this->querySubscriptionAlbumRequest_ != nullptr;};
    void deleteQuerySubscriptionAlbumRequest() { this->querySubscriptionAlbumRequest_ = nullptr;};
    inline const ListSubAlbumRequestQuerySubscriptionAlbumRequest & querySubscriptionAlbumRequest() const { DARABONBA_PTR_GET_CONST(querySubscriptionAlbumRequest_, ListSubAlbumRequestQuerySubscriptionAlbumRequest) };
    inline ListSubAlbumRequestQuerySubscriptionAlbumRequest querySubscriptionAlbumRequest() { DARABONBA_PTR_GET(querySubscriptionAlbumRequest_, ListSubAlbumRequestQuerySubscriptionAlbumRequest) };
    inline ListSubAlbumRequest& setQuerySubscriptionAlbumRequest(const ListSubAlbumRequestQuerySubscriptionAlbumRequest & querySubscriptionAlbumRequest) { DARABONBA_PTR_SET_VALUE(querySubscriptionAlbumRequest_, querySubscriptionAlbumRequest) };
    inline ListSubAlbumRequest& setQuerySubscriptionAlbumRequest(ListSubAlbumRequestQuerySubscriptionAlbumRequest && querySubscriptionAlbumRequest) { DARABONBA_PTR_SET_RVALUE(querySubscriptionAlbumRequest_, querySubscriptionAlbumRequest) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ListSubAlbumRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ListSubAlbumRequestUserInfo) };
    inline ListSubAlbumRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, ListSubAlbumRequestUserInfo) };
    inline ListSubAlbumRequest& setUserInfo(const ListSubAlbumRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListSubAlbumRequest& setUserInfo(ListSubAlbumRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    std::shared_ptr<ListSubAlbumRequestDeviceInfo> deviceInfo_ = nullptr;
    // request
    std::shared_ptr<ListSubAlbumRequestQuerySubscriptionAlbumRequest> querySubscriptionAlbumRequest_ = nullptr;
    std::shared_ptr<ListSubAlbumRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

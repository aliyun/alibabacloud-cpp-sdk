// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLAYHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPLAYHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPlayHistoryRequestDeviceInfo.hpp>
#include <alibabacloud/models/ListPlayHistoryRequestRequest.hpp>
#include <alibabacloud/models/ListPlayHistoryRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListPlayHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPlayHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Request, request_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListPlayHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Request, request_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ListPlayHistoryRequest() = default ;
    ListPlayHistoryRequest(const ListPlayHistoryRequest &) = default ;
    ListPlayHistoryRequest(ListPlayHistoryRequest &&) = default ;
    ListPlayHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPlayHistoryRequest() = default ;
    ListPlayHistoryRequest& operator=(const ListPlayHistoryRequest &) = default ;
    ListPlayHistoryRequest& operator=(ListPlayHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->request_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const ListPlayHistoryRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, ListPlayHistoryRequestDeviceInfo) };
    inline ListPlayHistoryRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, ListPlayHistoryRequestDeviceInfo) };
    inline ListPlayHistoryRequest& setDeviceInfo(const ListPlayHistoryRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline ListPlayHistoryRequest& setDeviceInfo(ListPlayHistoryRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline const ListPlayHistoryRequestRequest & request() const { DARABONBA_PTR_GET_CONST(request_, ListPlayHistoryRequestRequest) };
    inline ListPlayHistoryRequestRequest request() { DARABONBA_PTR_GET(request_, ListPlayHistoryRequestRequest) };
    inline ListPlayHistoryRequest& setRequest(const ListPlayHistoryRequestRequest & request) { DARABONBA_PTR_SET_VALUE(request_, request) };
    inline ListPlayHistoryRequest& setRequest(ListPlayHistoryRequestRequest && request) { DARABONBA_PTR_SET_RVALUE(request_, request) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ListPlayHistoryRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ListPlayHistoryRequestUserInfo) };
    inline ListPlayHistoryRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, ListPlayHistoryRequestUserInfo) };
    inline ListPlayHistoryRequest& setUserInfo(const ListPlayHistoryRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListPlayHistoryRequest& setUserInfo(ListPlayHistoryRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<ListPlayHistoryRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListPlayHistoryRequestRequest> request_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListPlayHistoryRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATECONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCATECONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCateContentRequestDeviceInfo.hpp>
#include <alibabacloud/models/ListCateContentRequestRequest.hpp>
#include <alibabacloud/models/ListCateContentRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListCateContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCateContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Request, request_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListCateContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Request, request_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ListCateContentRequest() = default ;
    ListCateContentRequest(const ListCateContentRequest &) = default ;
    ListCateContentRequest(ListCateContentRequest &&) = default ;
    ListCateContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCateContentRequest() = default ;
    ListCateContentRequest& operator=(const ListCateContentRequest &) = default ;
    ListCateContentRequest& operator=(ListCateContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->request_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const ListCateContentRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, ListCateContentRequestDeviceInfo) };
    inline ListCateContentRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, ListCateContentRequestDeviceInfo) };
    inline ListCateContentRequest& setDeviceInfo(const ListCateContentRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline ListCateContentRequest& setDeviceInfo(ListCateContentRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline const ListCateContentRequestRequest & request() const { DARABONBA_PTR_GET_CONST(request_, ListCateContentRequestRequest) };
    inline ListCateContentRequestRequest request() { DARABONBA_PTR_GET(request_, ListCateContentRequestRequest) };
    inline ListCateContentRequest& setRequest(const ListCateContentRequestRequest & request) { DARABONBA_PTR_SET_VALUE(request_, request) };
    inline ListCateContentRequest& setRequest(ListCateContentRequestRequest && request) { DARABONBA_PTR_SET_RVALUE(request_, request) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ListCateContentRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ListCateContentRequestUserInfo) };
    inline ListCateContentRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, ListCateContentRequestUserInfo) };
    inline ListCateContentRequest& setUserInfo(const ListCateContentRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListCateContentRequest& setUserInfo(ListCateContentRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<ListCateContentRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListCateContentRequestRequest> request_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListCateContentRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

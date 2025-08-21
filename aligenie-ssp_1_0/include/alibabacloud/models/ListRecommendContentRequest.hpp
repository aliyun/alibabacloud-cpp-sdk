// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECOMMENDCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRECOMMENDCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRecommendContentRequestDeviceInfo.hpp>
#include <alibabacloud/models/ListRecommendContentRequestRequest.hpp>
#include <alibabacloud/models/ListRecommendContentRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListRecommendContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecommendContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Request, request_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecommendContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Request, request_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ListRecommendContentRequest() = default ;
    ListRecommendContentRequest(const ListRecommendContentRequest &) = default ;
    ListRecommendContentRequest(ListRecommendContentRequest &&) = default ;
    ListRecommendContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecommendContentRequest() = default ;
    ListRecommendContentRequest& operator=(const ListRecommendContentRequest &) = default ;
    ListRecommendContentRequest& operator=(ListRecommendContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->request_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const ListRecommendContentRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, ListRecommendContentRequestDeviceInfo) };
    inline ListRecommendContentRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, ListRecommendContentRequestDeviceInfo) };
    inline ListRecommendContentRequest& setDeviceInfo(const ListRecommendContentRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline ListRecommendContentRequest& setDeviceInfo(ListRecommendContentRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline const ListRecommendContentRequestRequest & request() const { DARABONBA_PTR_GET_CONST(request_, ListRecommendContentRequestRequest) };
    inline ListRecommendContentRequestRequest request() { DARABONBA_PTR_GET(request_, ListRecommendContentRequestRequest) };
    inline ListRecommendContentRequest& setRequest(const ListRecommendContentRequestRequest & request) { DARABONBA_PTR_SET_VALUE(request_, request) };
    inline ListRecommendContentRequest& setRequest(ListRecommendContentRequestRequest && request) { DARABONBA_PTR_SET_RVALUE(request_, request) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ListRecommendContentRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ListRecommendContentRequestUserInfo) };
    inline ListRecommendContentRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, ListRecommendContentRequestUserInfo) };
    inline ListRecommendContentRequest& setUserInfo(const ListRecommendContentRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListRecommendContentRequest& setUserInfo(ListRecommendContentRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<ListRecommendContentRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListRecommendContentRequestRequest> request_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListRecommendContentRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

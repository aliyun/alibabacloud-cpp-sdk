// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchContentRequestDeviceInfo.hpp>
#include <alibabacloud/models/SearchContentRequestRequest.hpp>
#include <alibabacloud/models/SearchContentRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class SearchContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Request, request_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, SearchContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Request, request_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    SearchContentRequest() = default ;
    SearchContentRequest(const SearchContentRequest &) = default ;
    SearchContentRequest(SearchContentRequest &&) = default ;
    SearchContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchContentRequest() = default ;
    SearchContentRequest& operator=(const SearchContentRequest &) = default ;
    SearchContentRequest& operator=(SearchContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->request_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const SearchContentRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, SearchContentRequestDeviceInfo) };
    inline SearchContentRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, SearchContentRequestDeviceInfo) };
    inline SearchContentRequest& setDeviceInfo(const SearchContentRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline SearchContentRequest& setDeviceInfo(SearchContentRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline const SearchContentRequestRequest & request() const { DARABONBA_PTR_GET_CONST(request_, SearchContentRequestRequest) };
    inline SearchContentRequestRequest request() { DARABONBA_PTR_GET(request_, SearchContentRequestRequest) };
    inline SearchContentRequest& setRequest(const SearchContentRequestRequest & request) { DARABONBA_PTR_SET_VALUE(request_, request) };
    inline SearchContentRequest& setRequest(SearchContentRequestRequest && request) { DARABONBA_PTR_SET_RVALUE(request_, request) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const SearchContentRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, SearchContentRequestUserInfo) };
    inline SearchContentRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, SearchContentRequestUserInfo) };
    inline SearchContentRequest& setUserInfo(const SearchContentRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline SearchContentRequest& setUserInfo(SearchContentRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<SearchContentRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<SearchContentRequestRequest> request_ = nullptr;
    // This parameter is required.
    std::shared_ptr<SearchContentRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

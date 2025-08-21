// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSUBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSUBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddSubRequestAddSubscriptionInfoRequest.hpp>
#include <alibabacloud/models/AddSubRequestDeviceInfo.hpp>
#include <alibabacloud/models/AddSubRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class AddSubRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSubRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddSubscriptionInfoRequest, addSubscriptionInfoRequest_);
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, AddSubRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddSubscriptionInfoRequest, addSubscriptionInfoRequest_);
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    AddSubRequest() = default ;
    AddSubRequest(const AddSubRequest &) = default ;
    AddSubRequest(AddSubRequest &&) = default ;
    AddSubRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSubRequest() = default ;
    AddSubRequest& operator=(const AddSubRequest &) = default ;
    AddSubRequest& operator=(AddSubRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addSubscriptionInfoRequest_ != nullptr
        && this->deviceInfo_ != nullptr && this->userInfo_ != nullptr; };
    // addSubscriptionInfoRequest Field Functions 
    bool hasAddSubscriptionInfoRequest() const { return this->addSubscriptionInfoRequest_ != nullptr;};
    void deleteAddSubscriptionInfoRequest() { this->addSubscriptionInfoRequest_ = nullptr;};
    inline const AddSubRequestAddSubscriptionInfoRequest & addSubscriptionInfoRequest() const { DARABONBA_PTR_GET_CONST(addSubscriptionInfoRequest_, AddSubRequestAddSubscriptionInfoRequest) };
    inline AddSubRequestAddSubscriptionInfoRequest addSubscriptionInfoRequest() { DARABONBA_PTR_GET(addSubscriptionInfoRequest_, AddSubRequestAddSubscriptionInfoRequest) };
    inline AddSubRequest& setAddSubscriptionInfoRequest(const AddSubRequestAddSubscriptionInfoRequest & addSubscriptionInfoRequest) { DARABONBA_PTR_SET_VALUE(addSubscriptionInfoRequest_, addSubscriptionInfoRequest) };
    inline AddSubRequest& setAddSubscriptionInfoRequest(AddSubRequestAddSubscriptionInfoRequest && addSubscriptionInfoRequest) { DARABONBA_PTR_SET_RVALUE(addSubscriptionInfoRequest_, addSubscriptionInfoRequest) };


    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const AddSubRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, AddSubRequestDeviceInfo) };
    inline AddSubRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, AddSubRequestDeviceInfo) };
    inline AddSubRequest& setDeviceInfo(const AddSubRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline AddSubRequest& setDeviceInfo(AddSubRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const AddSubRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, AddSubRequestUserInfo) };
    inline AddSubRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, AddSubRequestUserInfo) };
    inline AddSubRequest& setUserInfo(const AddSubRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline AddSubRequest& setUserInfo(AddSubRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    std::shared_ptr<AddSubRequestAddSubscriptionInfoRequest> addSubscriptionInfoRequest_ = nullptr;
    std::shared_ptr<AddSubRequestDeviceInfo> deviceInfo_ = nullptr;
    std::shared_ptr<AddSubRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

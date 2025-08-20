// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PULLCASHIERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PULLCASHIERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PullCashierRequestDeviceInfo.hpp>
#include <alibabacloud/models/PullCashierRequestPayload.hpp>
#include <alibabacloud/models/PullCashierRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class PullCashierRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PullCashierRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, PullCashierRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    PullCashierRequest() = default ;
    PullCashierRequest(const PullCashierRequest &) = default ;
    PullCashierRequest(PullCashierRequest &&) = default ;
    PullCashierRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PullCashierRequest() = default ;
    PullCashierRequest& operator=(const PullCashierRequest &) = default ;
    PullCashierRequest& operator=(PullCashierRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const PullCashierRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, PullCashierRequestDeviceInfo) };
    inline PullCashierRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, PullCashierRequestDeviceInfo) };
    inline PullCashierRequest& setDeviceInfo(const PullCashierRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline PullCashierRequest& setDeviceInfo(PullCashierRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const PullCashierRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, PullCashierRequestPayload) };
    inline PullCashierRequestPayload payload() { DARABONBA_PTR_GET(payload_, PullCashierRequestPayload) };
    inline PullCashierRequest& setPayload(const PullCashierRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline PullCashierRequest& setPayload(PullCashierRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const PullCashierRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, PullCashierRequestUserInfo) };
    inline PullCashierRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, PullCashierRequestUserInfo) };
    inline PullCashierRequest& setUserInfo(const PullCashierRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline PullCashierRequest& setUserInfo(PullCashierRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    std::shared_ptr<PullCashierRequestDeviceInfo> deviceInfo_ = nullptr;
    std::shared_ptr<PullCashierRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<PullCashierRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKANDDOVOIPCALLFORHOTELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKANDDOVOIPCALLFORHOTELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CheckAndDoVoipCallForHotelRequestDeviceInfo.hpp>
#include <alibabacloud/models/CheckAndDoVoipCallForHotelRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CheckAndDoVoipCallForHotelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAndDoVoipCallForHotelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizData, bizData_);
      DARABONBA_PTR_TO_JSON(CalleeNick, calleeNick_);
      DARABONBA_PTR_TO_JSON(CalleePhoneNum, calleePhoneNum_);
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAndDoVoipCallForHotelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizData, bizData_);
      DARABONBA_PTR_FROM_JSON(CalleeNick, calleeNick_);
      DARABONBA_PTR_FROM_JSON(CalleePhoneNum, calleePhoneNum_);
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    CheckAndDoVoipCallForHotelRequest() = default ;
    CheckAndDoVoipCallForHotelRequest(const CheckAndDoVoipCallForHotelRequest &) = default ;
    CheckAndDoVoipCallForHotelRequest(CheckAndDoVoipCallForHotelRequest &&) = default ;
    CheckAndDoVoipCallForHotelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAndDoVoipCallForHotelRequest() = default ;
    CheckAndDoVoipCallForHotelRequest& operator=(const CheckAndDoVoipCallForHotelRequest &) = default ;
    CheckAndDoVoipCallForHotelRequest& operator=(CheckAndDoVoipCallForHotelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizData_ != nullptr
        && this->calleeNick_ != nullptr && this->calleePhoneNum_ != nullptr && this->deviceInfo_ != nullptr && this->userInfo_ != nullptr; };
    // bizData Field Functions 
    bool hasBizData() const { return this->bizData_ != nullptr;};
    void deleteBizData() { this->bizData_ = nullptr;};
    inline string bizData() const { DARABONBA_PTR_GET_DEFAULT(bizData_, "") };
    inline CheckAndDoVoipCallForHotelRequest& setBizData(string bizData) { DARABONBA_PTR_SET_VALUE(bizData_, bizData) };


    // calleeNick Field Functions 
    bool hasCalleeNick() const { return this->calleeNick_ != nullptr;};
    void deleteCalleeNick() { this->calleeNick_ = nullptr;};
    inline string calleeNick() const { DARABONBA_PTR_GET_DEFAULT(calleeNick_, "") };
    inline CheckAndDoVoipCallForHotelRequest& setCalleeNick(string calleeNick) { DARABONBA_PTR_SET_VALUE(calleeNick_, calleeNick) };


    // calleePhoneNum Field Functions 
    bool hasCalleePhoneNum() const { return this->calleePhoneNum_ != nullptr;};
    void deleteCalleePhoneNum() { this->calleePhoneNum_ = nullptr;};
    inline string calleePhoneNum() const { DARABONBA_PTR_GET_DEFAULT(calleePhoneNum_, "") };
    inline CheckAndDoVoipCallForHotelRequest& setCalleePhoneNum(string calleePhoneNum) { DARABONBA_PTR_SET_VALUE(calleePhoneNum_, calleePhoneNum) };


    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const CheckAndDoVoipCallForHotelRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, CheckAndDoVoipCallForHotelRequestDeviceInfo) };
    inline CheckAndDoVoipCallForHotelRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, CheckAndDoVoipCallForHotelRequestDeviceInfo) };
    inline CheckAndDoVoipCallForHotelRequest& setDeviceInfo(const CheckAndDoVoipCallForHotelRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline CheckAndDoVoipCallForHotelRequest& setDeviceInfo(CheckAndDoVoipCallForHotelRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const CheckAndDoVoipCallForHotelRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, CheckAndDoVoipCallForHotelRequestUserInfo) };
    inline CheckAndDoVoipCallForHotelRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, CheckAndDoVoipCallForHotelRequestUserInfo) };
    inline CheckAndDoVoipCallForHotelRequest& setUserInfo(const CheckAndDoVoipCallForHotelRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline CheckAndDoVoipCallForHotelRequest& setUserInfo(CheckAndDoVoipCallForHotelRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    std::shared_ptr<string> bizData_ = nullptr;
    std::shared_ptr<string> calleeNick_ = nullptr;
    std::shared_ptr<string> calleePhoneNum_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CheckAndDoVoipCallForHotelRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CheckAndDoVoipCallForHotelRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

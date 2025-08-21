// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKANDDOVOIPCALLFORHOTELSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKANDDOVOIPCALLFORHOTELSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CheckAndDoVoipCallForHotelShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAndDoVoipCallForHotelShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizData, bizData_);
      DARABONBA_PTR_TO_JSON(CalleeNick, calleeNick_);
      DARABONBA_PTR_TO_JSON(CalleePhoneNum, calleePhoneNum_);
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAndDoVoipCallForHotelShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizData, bizData_);
      DARABONBA_PTR_FROM_JSON(CalleeNick, calleeNick_);
      DARABONBA_PTR_FROM_JSON(CalleePhoneNum, calleePhoneNum_);
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    CheckAndDoVoipCallForHotelShrinkRequest() = default ;
    CheckAndDoVoipCallForHotelShrinkRequest(const CheckAndDoVoipCallForHotelShrinkRequest &) = default ;
    CheckAndDoVoipCallForHotelShrinkRequest(CheckAndDoVoipCallForHotelShrinkRequest &&) = default ;
    CheckAndDoVoipCallForHotelShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAndDoVoipCallForHotelShrinkRequest() = default ;
    CheckAndDoVoipCallForHotelShrinkRequest& operator=(const CheckAndDoVoipCallForHotelShrinkRequest &) = default ;
    CheckAndDoVoipCallForHotelShrinkRequest& operator=(CheckAndDoVoipCallForHotelShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizData_ != nullptr
        && this->calleeNick_ != nullptr && this->calleePhoneNum_ != nullptr && this->deviceInfoShrink_ != nullptr && this->userInfoShrink_ != nullptr; };
    // bizData Field Functions 
    bool hasBizData() const { return this->bizData_ != nullptr;};
    void deleteBizData() { this->bizData_ = nullptr;};
    inline string bizData() const { DARABONBA_PTR_GET_DEFAULT(bizData_, "") };
    inline CheckAndDoVoipCallForHotelShrinkRequest& setBizData(string bizData) { DARABONBA_PTR_SET_VALUE(bizData_, bizData) };


    // calleeNick Field Functions 
    bool hasCalleeNick() const { return this->calleeNick_ != nullptr;};
    void deleteCalleeNick() { this->calleeNick_ = nullptr;};
    inline string calleeNick() const { DARABONBA_PTR_GET_DEFAULT(calleeNick_, "") };
    inline CheckAndDoVoipCallForHotelShrinkRequest& setCalleeNick(string calleeNick) { DARABONBA_PTR_SET_VALUE(calleeNick_, calleeNick) };


    // calleePhoneNum Field Functions 
    bool hasCalleePhoneNum() const { return this->calleePhoneNum_ != nullptr;};
    void deleteCalleePhoneNum() { this->calleePhoneNum_ = nullptr;};
    inline string calleePhoneNum() const { DARABONBA_PTR_GET_DEFAULT(calleePhoneNum_, "") };
    inline CheckAndDoVoipCallForHotelShrinkRequest& setCalleePhoneNum(string calleePhoneNum) { DARABONBA_PTR_SET_VALUE(calleePhoneNum_, calleePhoneNum) };


    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline CheckAndDoVoipCallForHotelShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline CheckAndDoVoipCallForHotelShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    std::shared_ptr<string> bizData_ = nullptr;
    std::shared_ptr<string> calleeNick_ = nullptr;
    std::shared_ptr<string> calleePhoneNum_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

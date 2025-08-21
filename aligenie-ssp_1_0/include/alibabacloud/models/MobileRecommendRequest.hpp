// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILERECOMMENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOBILERECOMMENDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MobileRecommendRequestDeviceInfo.hpp>
#include <alibabacloud/models/MobileRecommendRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class MobileRecommendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MobileRecommendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BotId, botId_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Style, style_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, MobileRecommendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BotId, botId_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Style, style_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    MobileRecommendRequest() = default ;
    MobileRecommendRequest(const MobileRecommendRequest &) = default ;
    MobileRecommendRequest(MobileRecommendRequest &&) = default ;
    MobileRecommendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MobileRecommendRequest() = default ;
    MobileRecommendRequest& operator=(const MobileRecommendRequest &) = default ;
    MobileRecommendRequest& operator=(MobileRecommendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->botId_ != nullptr
        && this->count_ != nullptr && this->deviceInfo_ != nullptr && this->style_ != nullptr && this->type_ != nullptr && this->userInfo_ != nullptr; };
    // botId Field Functions 
    bool hasBotId() const { return this->botId_ != nullptr;};
    void deleteBotId() { this->botId_ = nullptr;};
    inline string botId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
    inline MobileRecommendRequest& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline MobileRecommendRequest& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const MobileRecommendRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, MobileRecommendRequestDeviceInfo) };
    inline MobileRecommendRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, MobileRecommendRequestDeviceInfo) };
    inline MobileRecommendRequest& setDeviceInfo(const MobileRecommendRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline MobileRecommendRequest& setDeviceInfo(MobileRecommendRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline string style() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
    inline MobileRecommendRequest& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MobileRecommendRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const MobileRecommendRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, MobileRecommendRequestUserInfo) };
    inline MobileRecommendRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, MobileRecommendRequestUserInfo) };
    inline MobileRecommendRequest& setUserInfo(const MobileRecommendRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline MobileRecommendRequest& setUserInfo(MobileRecommendRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    std::shared_ptr<string> botId_ = nullptr;
    std::shared_ptr<string> count_ = nullptr;
    // This parameter is required.
    std::shared_ptr<MobileRecommendRequestDeviceInfo> deviceInfo_ = nullptr;
    std::shared_ptr<string> style_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    // This parameter is required.
    std::shared_ptr<MobileRecommendRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

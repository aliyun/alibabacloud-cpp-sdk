// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILERECOMMENDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOBILERECOMMENDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class MobileRecommendShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MobileRecommendShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BotId, botId_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(Style, style_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, MobileRecommendShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BotId, botId_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(Style, style_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    MobileRecommendShrinkRequest() = default ;
    MobileRecommendShrinkRequest(const MobileRecommendShrinkRequest &) = default ;
    MobileRecommendShrinkRequest(MobileRecommendShrinkRequest &&) = default ;
    MobileRecommendShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MobileRecommendShrinkRequest() = default ;
    MobileRecommendShrinkRequest& operator=(const MobileRecommendShrinkRequest &) = default ;
    MobileRecommendShrinkRequest& operator=(MobileRecommendShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->botId_ != nullptr
        && this->count_ != nullptr && this->deviceInfoShrink_ != nullptr && this->style_ != nullptr && this->type_ != nullptr && this->userInfoShrink_ != nullptr; };
    // botId Field Functions 
    bool hasBotId() const { return this->botId_ != nullptr;};
    void deleteBotId() { this->botId_ = nullptr;};
    inline string botId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
    inline MobileRecommendShrinkRequest& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline MobileRecommendShrinkRequest& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline MobileRecommendShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline string style() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
    inline MobileRecommendShrinkRequest& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MobileRecommendShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline MobileRecommendShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    std::shared_ptr<string> botId_ = nullptr;
    std::shared_ptr<string> count_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
    std::shared_ptr<string> style_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

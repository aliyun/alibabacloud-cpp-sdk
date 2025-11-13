// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVISITORLOGINDETAILSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETVISITORLOGINDETAILSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetVisitorLoginDetailsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVisitorLoginDetailsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChatAppId, chatAppId_);
      DARABONBA_PTR_TO_JSON(ChatAppKey, chatAppKey_);
      DARABONBA_PTR_TO_JSON(ChatDeviceId, chatDeviceId_);
      DARABONBA_PTR_TO_JSON(ChatLoginToken, chatLoginToken_);
      DARABONBA_PTR_TO_JSON(ChatServerUrl, chatServerUrl_);
      DARABONBA_PTR_TO_JSON(ChatUserId, chatUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVisitorLoginDetailsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatAppId, chatAppId_);
      DARABONBA_PTR_FROM_JSON(ChatAppKey, chatAppKey_);
      DARABONBA_PTR_FROM_JSON(ChatDeviceId, chatDeviceId_);
      DARABONBA_PTR_FROM_JSON(ChatLoginToken, chatLoginToken_);
      DARABONBA_PTR_FROM_JSON(ChatServerUrl, chatServerUrl_);
      DARABONBA_PTR_FROM_JSON(ChatUserId, chatUserId_);
    };
    GetVisitorLoginDetailsResponseBodyData() = default ;
    GetVisitorLoginDetailsResponseBodyData(const GetVisitorLoginDetailsResponseBodyData &) = default ;
    GetVisitorLoginDetailsResponseBodyData(GetVisitorLoginDetailsResponseBodyData &&) = default ;
    GetVisitorLoginDetailsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVisitorLoginDetailsResponseBodyData() = default ;
    GetVisitorLoginDetailsResponseBodyData& operator=(const GetVisitorLoginDetailsResponseBodyData &) = default ;
    GetVisitorLoginDetailsResponseBodyData& operator=(GetVisitorLoginDetailsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatAppId_ == nullptr
        && return this->chatAppKey_ == nullptr && return this->chatDeviceId_ == nullptr && return this->chatLoginToken_ == nullptr && return this->chatServerUrl_ == nullptr && return this->chatUserId_ == nullptr; };
    // chatAppId Field Functions 
    bool hasChatAppId() const { return this->chatAppId_ != nullptr;};
    void deleteChatAppId() { this->chatAppId_ = nullptr;};
    inline string chatAppId() const { DARABONBA_PTR_GET_DEFAULT(chatAppId_, "") };
    inline GetVisitorLoginDetailsResponseBodyData& setChatAppId(string chatAppId) { DARABONBA_PTR_SET_VALUE(chatAppId_, chatAppId) };


    // chatAppKey Field Functions 
    bool hasChatAppKey() const { return this->chatAppKey_ != nullptr;};
    void deleteChatAppKey() { this->chatAppKey_ = nullptr;};
    inline string chatAppKey() const { DARABONBA_PTR_GET_DEFAULT(chatAppKey_, "") };
    inline GetVisitorLoginDetailsResponseBodyData& setChatAppKey(string chatAppKey) { DARABONBA_PTR_SET_VALUE(chatAppKey_, chatAppKey) };


    // chatDeviceId Field Functions 
    bool hasChatDeviceId() const { return this->chatDeviceId_ != nullptr;};
    void deleteChatDeviceId() { this->chatDeviceId_ = nullptr;};
    inline string chatDeviceId() const { DARABONBA_PTR_GET_DEFAULT(chatDeviceId_, "") };
    inline GetVisitorLoginDetailsResponseBodyData& setChatDeviceId(string chatDeviceId) { DARABONBA_PTR_SET_VALUE(chatDeviceId_, chatDeviceId) };


    // chatLoginToken Field Functions 
    bool hasChatLoginToken() const { return this->chatLoginToken_ != nullptr;};
    void deleteChatLoginToken() { this->chatLoginToken_ = nullptr;};
    inline string chatLoginToken() const { DARABONBA_PTR_GET_DEFAULT(chatLoginToken_, "") };
    inline GetVisitorLoginDetailsResponseBodyData& setChatLoginToken(string chatLoginToken) { DARABONBA_PTR_SET_VALUE(chatLoginToken_, chatLoginToken) };


    // chatServerUrl Field Functions 
    bool hasChatServerUrl() const { return this->chatServerUrl_ != nullptr;};
    void deleteChatServerUrl() { this->chatServerUrl_ = nullptr;};
    inline string chatServerUrl() const { DARABONBA_PTR_GET_DEFAULT(chatServerUrl_, "") };
    inline GetVisitorLoginDetailsResponseBodyData& setChatServerUrl(string chatServerUrl) { DARABONBA_PTR_SET_VALUE(chatServerUrl_, chatServerUrl) };


    // chatUserId Field Functions 
    bool hasChatUserId() const { return this->chatUserId_ != nullptr;};
    void deleteChatUserId() { this->chatUserId_ = nullptr;};
    inline string chatUserId() const { DARABONBA_PTR_GET_DEFAULT(chatUserId_, "") };
    inline GetVisitorLoginDetailsResponseBodyData& setChatUserId(string chatUserId) { DARABONBA_PTR_SET_VALUE(chatUserId_, chatUserId) };


  protected:
    std::shared_ptr<string> chatAppId_ = nullptr;
    std::shared_ptr<string> chatAppKey_ = nullptr;
    std::shared_ptr<string> chatDeviceId_ = nullptr;
    std::shared_ptr<string> chatLoginToken_ = nullptr;
    std::shared_ptr<string> chatServerUrl_ = nullptr;
    std::shared_ptr<string> chatUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif

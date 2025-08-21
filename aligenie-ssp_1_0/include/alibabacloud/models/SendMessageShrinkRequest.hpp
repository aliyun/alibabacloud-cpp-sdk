// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDMESSAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDMESSAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class SendMessageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendMessageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    SendMessageShrinkRequest() = default ;
    SendMessageShrinkRequest(const SendMessageShrinkRequest &) = default ;
    SendMessageShrinkRequest(SendMessageShrinkRequest &&) = default ;
    SendMessageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendMessageShrinkRequest() = default ;
    SendMessageShrinkRequest& operator=(const SendMessageShrinkRequest &) = default ;
    SendMessageShrinkRequest& operator=(SendMessageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->url_ != nullptr
        && this->userInfoShrink_ != nullptr; };
    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SendMessageShrinkRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline SendMessageShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    std::shared_ptr<string> url_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

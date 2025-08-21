// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SendMessageRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class SendMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    SendMessageRequest() = default ;
    SendMessageRequest(const SendMessageRequest &) = default ;
    SendMessageRequest(SendMessageRequest &&) = default ;
    SendMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendMessageRequest() = default ;
    SendMessageRequest& operator=(const SendMessageRequest &) = default ;
    SendMessageRequest& operator=(SendMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->url_ != nullptr
        && this->userInfo_ != nullptr; };
    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SendMessageRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const SendMessageRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, SendMessageRequestUserInfo) };
    inline SendMessageRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, SendMessageRequestUserInfo) };
    inline SendMessageRequest& setUserInfo(const SendMessageRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline SendMessageRequest& setUserInfo(SendMessageRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    std::shared_ptr<string> url_ = nullptr;
    // This parameter is required.
    std::shared_ptr<SendMessageRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

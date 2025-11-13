// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVISITORLOGINDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVISITORLOGINDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetVisitorLoginDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVisitorLoginDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChatDeviceId, chatDeviceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(VisitorId, visitorId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVisitorLoginDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatDeviceId, chatDeviceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(VisitorId, visitorId_);
    };
    GetVisitorLoginDetailsRequest() = default ;
    GetVisitorLoginDetailsRequest(const GetVisitorLoginDetailsRequest &) = default ;
    GetVisitorLoginDetailsRequest(GetVisitorLoginDetailsRequest &&) = default ;
    GetVisitorLoginDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVisitorLoginDetailsRequest() = default ;
    GetVisitorLoginDetailsRequest& operator=(const GetVisitorLoginDetailsRequest &) = default ;
    GetVisitorLoginDetailsRequest& operator=(GetVisitorLoginDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatDeviceId_ == nullptr
        && return this->instanceId_ == nullptr && return this->token_ == nullptr && return this->visitorId_ == nullptr; };
    // chatDeviceId Field Functions 
    bool hasChatDeviceId() const { return this->chatDeviceId_ != nullptr;};
    void deleteChatDeviceId() { this->chatDeviceId_ = nullptr;};
    inline string chatDeviceId() const { DARABONBA_PTR_GET_DEFAULT(chatDeviceId_, "") };
    inline GetVisitorLoginDetailsRequest& setChatDeviceId(string chatDeviceId) { DARABONBA_PTR_SET_VALUE(chatDeviceId_, chatDeviceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetVisitorLoginDetailsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetVisitorLoginDetailsRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // visitorId Field Functions 
    bool hasVisitorId() const { return this->visitorId_ != nullptr;};
    void deleteVisitorId() { this->visitorId_ = nullptr;};
    inline string visitorId() const { DARABONBA_PTR_GET_DEFAULT(visitorId_, "") };
    inline GetVisitorLoginDetailsRequest& setVisitorId(string visitorId) { DARABONBA_PTR_SET_VALUE(visitorId_, visitorId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> chatDeviceId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> visitorId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif

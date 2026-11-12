// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMYAGENTICNOTIFICATIONCHANNELAUTHORIZEURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMYAGENTICNOTIFICATIONCHANNELAUTHORIZEURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetMyAgenticNotificationChannelAuthorizeUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMyAgenticNotificationChannelAuthorizeUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
    };
    friend void from_json(const Darabonba::Json& j, GetMyAgenticNotificationChannelAuthorizeUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
    };
    GetMyAgenticNotificationChannelAuthorizeUrlRequest() = default ;
    GetMyAgenticNotificationChannelAuthorizeUrlRequest(const GetMyAgenticNotificationChannelAuthorizeUrlRequest &) = default ;
    GetMyAgenticNotificationChannelAuthorizeUrlRequest(GetMyAgenticNotificationChannelAuthorizeUrlRequest &&) = default ;
    GetMyAgenticNotificationChannelAuthorizeUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMyAgenticNotificationChannelAuthorizeUrlRequest() = default ;
    GetMyAgenticNotificationChannelAuthorizeUrlRequest& operator=(const GetMyAgenticNotificationChannelAuthorizeUrlRequest &) = default ;
    GetMyAgenticNotificationChannelAuthorizeUrlRequest& operator=(GetMyAgenticNotificationChannelAuthorizeUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channel_ == nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline GetMyAgenticNotificationChannelAuthorizeUrlRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


  protected:
    // The notification channel type. Currently, only FEISHU (the Chinese version of Lark) is supported. Specifying other values results in a parameter error.
    // 
    // This parameter is required.
    shared_ptr<string> channel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif

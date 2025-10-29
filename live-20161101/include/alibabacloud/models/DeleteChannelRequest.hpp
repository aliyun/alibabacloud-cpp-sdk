// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
    };
    DeleteChannelRequest() = default ;
    DeleteChannelRequest(const DeleteChannelRequest &) = default ;
    DeleteChannelRequest(DeleteChannelRequest &&) = default ;
    DeleteChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteChannelRequest() = default ;
    DeleteChannelRequest& operator=(const DeleteChannelRequest &) = default ;
    DeleteChannelRequest& operator=(DeleteChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->channelId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteChannelRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DeleteChannelRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


  protected:
    // The application ID. You can specify only one application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The channel ID. You can specify only one channel ID.
    std::shared_ptr<string> channelId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

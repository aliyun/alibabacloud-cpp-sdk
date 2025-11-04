// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaLiveChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLiveChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLiveChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
    };
    GetMediaLiveChannelRequest() = default ;
    GetMediaLiveChannelRequest(const GetMediaLiveChannelRequest &) = default ;
    GetMediaLiveChannelRequest(GetMediaLiveChannelRequest &&) = default ;
    GetMediaLiveChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLiveChannelRequest() = default ;
    GetMediaLiveChannelRequest& operator=(const GetMediaLiveChannelRequest &) = default ;
    GetMediaLiveChannelRequest& operator=(GetMediaLiveChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelId_ == nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline GetMediaLiveChannelRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


  protected:
    // The ID of the channel.
    // 
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

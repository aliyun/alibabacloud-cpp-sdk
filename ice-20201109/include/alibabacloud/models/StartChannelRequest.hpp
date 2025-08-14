// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class StartChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
    };
    friend void from_json(const Darabonba::Json& j, StartChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
    };
    StartChannelRequest() = default ;
    StartChannelRequest(const StartChannelRequest &) = default ;
    StartChannelRequest(StartChannelRequest &&) = default ;
    StartChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartChannelRequest() = default ;
    StartChannelRequest& operator=(const StartChannelRequest &) = default ;
    StartChannelRequest& operator=(StartChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelName_ != nullptr; };
    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string channelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline StartChannelRequest& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


  protected:
    // The name of the channel.
    // 
    // This parameter is required.
    std::shared_ptr<string> channelName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

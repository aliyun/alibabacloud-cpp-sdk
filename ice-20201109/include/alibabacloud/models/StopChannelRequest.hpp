// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class StopChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
    };
    friend void from_json(const Darabonba::Json& j, StopChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
    };
    StopChannelRequest() = default ;
    StopChannelRequest(const StopChannelRequest &) = default ;
    StopChannelRequest(StopChannelRequest &&) = default ;
    StopChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopChannelRequest() = default ;
    StopChannelRequest& operator=(const StopChannelRequest &) = default ;
    StopChannelRequest& operator=(StopChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelName_ == nullptr; };
    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string channelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline StopChannelRequest& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


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

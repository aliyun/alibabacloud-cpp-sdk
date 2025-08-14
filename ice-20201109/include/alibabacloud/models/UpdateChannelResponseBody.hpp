// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChannelAssemblyChannel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateChannelResponseBody() = default ;
    UpdateChannelResponseBody(const UpdateChannelResponseBody &) = default ;
    UpdateChannelResponseBody(UpdateChannelResponseBody &&) = default ;
    UpdateChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateChannelResponseBody() = default ;
    UpdateChannelResponseBody& operator=(const UpdateChannelResponseBody &) = default ;
    UpdateChannelResponseBody& operator=(UpdateChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr
        && this->requestId_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline const ChannelAssemblyChannel & channel() const { DARABONBA_PTR_GET_CONST(channel_, ChannelAssemblyChannel) };
    inline ChannelAssemblyChannel channel() { DARABONBA_PTR_GET(channel_, ChannelAssemblyChannel) };
    inline UpdateChannelResponseBody& setChannel(const ChannelAssemblyChannel & channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };
    inline UpdateChannelResponseBody& setChannel(ChannelAssemblyChannel && channel) { DARABONBA_PTR_SET_RVALUE(channel_, channel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The channel information.
    std::shared_ptr<ChannelAssemblyChannel> channel_ = nullptr;
    // **Request ID**
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

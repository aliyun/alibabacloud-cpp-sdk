// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVEPACKAGECHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVEPACKAGECHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateLivePackageChannelResponseBodyLivePackageChannel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateLivePackageChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLivePackageChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LivePackageChannel, livePackageChannel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLivePackageChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePackageChannel, livePackageChannel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLivePackageChannelResponseBody() = default ;
    CreateLivePackageChannelResponseBody(const CreateLivePackageChannelResponseBody &) = default ;
    CreateLivePackageChannelResponseBody(CreateLivePackageChannelResponseBody &&) = default ;
    CreateLivePackageChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLivePackageChannelResponseBody() = default ;
    CreateLivePackageChannelResponseBody& operator=(const CreateLivePackageChannelResponseBody &) = default ;
    CreateLivePackageChannelResponseBody& operator=(CreateLivePackageChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->livePackageChannel_ != nullptr
        && this->requestId_ != nullptr; };
    // livePackageChannel Field Functions 
    bool hasLivePackageChannel() const { return this->livePackageChannel_ != nullptr;};
    void deleteLivePackageChannel() { this->livePackageChannel_ = nullptr;};
    inline const CreateLivePackageChannelResponseBodyLivePackageChannel & livePackageChannel() const { DARABONBA_PTR_GET_CONST(livePackageChannel_, CreateLivePackageChannelResponseBodyLivePackageChannel) };
    inline CreateLivePackageChannelResponseBodyLivePackageChannel livePackageChannel() { DARABONBA_PTR_GET(livePackageChannel_, CreateLivePackageChannelResponseBodyLivePackageChannel) };
    inline CreateLivePackageChannelResponseBody& setLivePackageChannel(const CreateLivePackageChannelResponseBodyLivePackageChannel & livePackageChannel) { DARABONBA_PTR_SET_VALUE(livePackageChannel_, livePackageChannel) };
    inline CreateLivePackageChannelResponseBody& setLivePackageChannel(CreateLivePackageChannelResponseBodyLivePackageChannel && livePackageChannel) { DARABONBA_PTR_SET_RVALUE(livePackageChannel_, livePackageChannel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLivePackageChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the live package channel.
    std::shared_ptr<CreateLivePackageChannelResponseBodyLivePackageChannel> livePackageChannel_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

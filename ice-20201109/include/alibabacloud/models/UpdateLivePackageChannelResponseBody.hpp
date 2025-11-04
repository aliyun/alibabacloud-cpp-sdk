// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEPACKAGECHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEPACKAGECHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateLivePackageChannelResponseBodyLivePackageChannel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLivePackageChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLivePackageChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LivePackageChannel, livePackageChannel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLivePackageChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePackageChannel, livePackageChannel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateLivePackageChannelResponseBody() = default ;
    UpdateLivePackageChannelResponseBody(const UpdateLivePackageChannelResponseBody &) = default ;
    UpdateLivePackageChannelResponseBody(UpdateLivePackageChannelResponseBody &&) = default ;
    UpdateLivePackageChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLivePackageChannelResponseBody() = default ;
    UpdateLivePackageChannelResponseBody& operator=(const UpdateLivePackageChannelResponseBody &) = default ;
    UpdateLivePackageChannelResponseBody& operator=(UpdateLivePackageChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->livePackageChannel_ == nullptr
        && return this->requestId_ == nullptr; };
    // livePackageChannel Field Functions 
    bool hasLivePackageChannel() const { return this->livePackageChannel_ != nullptr;};
    void deleteLivePackageChannel() { this->livePackageChannel_ = nullptr;};
    inline const UpdateLivePackageChannelResponseBodyLivePackageChannel & livePackageChannel() const { DARABONBA_PTR_GET_CONST(livePackageChannel_, UpdateLivePackageChannelResponseBodyLivePackageChannel) };
    inline UpdateLivePackageChannelResponseBodyLivePackageChannel livePackageChannel() { DARABONBA_PTR_GET(livePackageChannel_, UpdateLivePackageChannelResponseBodyLivePackageChannel) };
    inline UpdateLivePackageChannelResponseBody& setLivePackageChannel(const UpdateLivePackageChannelResponseBodyLivePackageChannel & livePackageChannel) { DARABONBA_PTR_SET_VALUE(livePackageChannel_, livePackageChannel) };
    inline UpdateLivePackageChannelResponseBody& setLivePackageChannel(UpdateLivePackageChannelResponseBodyLivePackageChannel && livePackageChannel) { DARABONBA_PTR_SET_RVALUE(livePackageChannel_, livePackageChannel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateLivePackageChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the live package channel.
    std::shared_ptr<UpdateLivePackageChannelResponseBodyLivePackageChannel> livePackageChannel_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

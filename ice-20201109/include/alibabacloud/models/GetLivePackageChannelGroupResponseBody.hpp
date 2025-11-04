// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVEPACKAGECHANNELGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIVEPACKAGECHANNELGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLivePackageChannelGroupResponseBodyLivePackageChannelGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLivePackageChannelGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLivePackageChannelGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LivePackageChannelGroup, livePackageChannelGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLivePackageChannelGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePackageChannelGroup, livePackageChannelGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLivePackageChannelGroupResponseBody() = default ;
    GetLivePackageChannelGroupResponseBody(const GetLivePackageChannelGroupResponseBody &) = default ;
    GetLivePackageChannelGroupResponseBody(GetLivePackageChannelGroupResponseBody &&) = default ;
    GetLivePackageChannelGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLivePackageChannelGroupResponseBody() = default ;
    GetLivePackageChannelGroupResponseBody& operator=(const GetLivePackageChannelGroupResponseBody &) = default ;
    GetLivePackageChannelGroupResponseBody& operator=(GetLivePackageChannelGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->livePackageChannelGroup_ == nullptr
        && return this->requestId_ == nullptr; };
    // livePackageChannelGroup Field Functions 
    bool hasLivePackageChannelGroup() const { return this->livePackageChannelGroup_ != nullptr;};
    void deleteLivePackageChannelGroup() { this->livePackageChannelGroup_ = nullptr;};
    inline const GetLivePackageChannelGroupResponseBodyLivePackageChannelGroup & livePackageChannelGroup() const { DARABONBA_PTR_GET_CONST(livePackageChannelGroup_, GetLivePackageChannelGroupResponseBodyLivePackageChannelGroup) };
    inline GetLivePackageChannelGroupResponseBodyLivePackageChannelGroup livePackageChannelGroup() { DARABONBA_PTR_GET(livePackageChannelGroup_, GetLivePackageChannelGroupResponseBodyLivePackageChannelGroup) };
    inline GetLivePackageChannelGroupResponseBody& setLivePackageChannelGroup(const GetLivePackageChannelGroupResponseBodyLivePackageChannelGroup & livePackageChannelGroup) { DARABONBA_PTR_SET_VALUE(livePackageChannelGroup_, livePackageChannelGroup) };
    inline GetLivePackageChannelGroupResponseBody& setLivePackageChannelGroup(GetLivePackageChannelGroupResponseBodyLivePackageChannelGroup && livePackageChannelGroup) { DARABONBA_PTR_SET_RVALUE(livePackageChannelGroup_, livePackageChannelGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLivePackageChannelGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the channel group.
    std::shared_ptr<GetLivePackageChannelGroupResponseBodyLivePackageChannelGroup> livePackageChannelGroup_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

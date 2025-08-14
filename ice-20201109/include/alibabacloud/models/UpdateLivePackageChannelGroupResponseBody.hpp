// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEPACKAGECHANNELGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEPACKAGECHANNELGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLivePackageChannelGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLivePackageChannelGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LivePackageChannelGroup, livePackageChannelGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLivePackageChannelGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePackageChannelGroup, livePackageChannelGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateLivePackageChannelGroupResponseBody() = default ;
    UpdateLivePackageChannelGroupResponseBody(const UpdateLivePackageChannelGroupResponseBody &) = default ;
    UpdateLivePackageChannelGroupResponseBody(UpdateLivePackageChannelGroupResponseBody &&) = default ;
    UpdateLivePackageChannelGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLivePackageChannelGroupResponseBody() = default ;
    UpdateLivePackageChannelGroupResponseBody& operator=(const UpdateLivePackageChannelGroupResponseBody &) = default ;
    UpdateLivePackageChannelGroupResponseBody& operator=(UpdateLivePackageChannelGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->livePackageChannelGroup_ != nullptr
        && this->requestId_ != nullptr; };
    // livePackageChannelGroup Field Functions 
    bool hasLivePackageChannelGroup() const { return this->livePackageChannelGroup_ != nullptr;};
    void deleteLivePackageChannelGroup() { this->livePackageChannelGroup_ = nullptr;};
    inline const UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup & livePackageChannelGroup() const { DARABONBA_PTR_GET_CONST(livePackageChannelGroup_, UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup) };
    inline UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup livePackageChannelGroup() { DARABONBA_PTR_GET(livePackageChannelGroup_, UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup) };
    inline UpdateLivePackageChannelGroupResponseBody& setLivePackageChannelGroup(const UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup & livePackageChannelGroup) { DARABONBA_PTR_SET_VALUE(livePackageChannelGroup_, livePackageChannelGroup) };
    inline UpdateLivePackageChannelGroupResponseBody& setLivePackageChannelGroup(UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup && livePackageChannelGroup) { DARABONBA_PTR_SET_RVALUE(livePackageChannelGroup_, livePackageChannelGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateLivePackageChannelGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the channel group.
    std::shared_ptr<UpdateLivePackageChannelGroupResponseBodyLivePackageChannelGroup> livePackageChannelGroup_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

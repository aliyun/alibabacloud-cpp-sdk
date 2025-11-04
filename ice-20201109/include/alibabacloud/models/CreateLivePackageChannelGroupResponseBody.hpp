// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVEPACKAGECHANNELGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVEPACKAGECHANNELGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateLivePackageChannelGroupResponseBodyLivePackageChannelGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateLivePackageChannelGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLivePackageChannelGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LivePackageChannelGroup, livePackageChannelGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLivePackageChannelGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePackageChannelGroup, livePackageChannelGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLivePackageChannelGroupResponseBody() = default ;
    CreateLivePackageChannelGroupResponseBody(const CreateLivePackageChannelGroupResponseBody &) = default ;
    CreateLivePackageChannelGroupResponseBody(CreateLivePackageChannelGroupResponseBody &&) = default ;
    CreateLivePackageChannelGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLivePackageChannelGroupResponseBody() = default ;
    CreateLivePackageChannelGroupResponseBody& operator=(const CreateLivePackageChannelGroupResponseBody &) = default ;
    CreateLivePackageChannelGroupResponseBody& operator=(CreateLivePackageChannelGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->livePackageChannelGroup_ == nullptr
        && return this->requestId_ == nullptr; };
    // livePackageChannelGroup Field Functions 
    bool hasLivePackageChannelGroup() const { return this->livePackageChannelGroup_ != nullptr;};
    void deleteLivePackageChannelGroup() { this->livePackageChannelGroup_ = nullptr;};
    inline const CreateLivePackageChannelGroupResponseBodyLivePackageChannelGroup & livePackageChannelGroup() const { DARABONBA_PTR_GET_CONST(livePackageChannelGroup_, CreateLivePackageChannelGroupResponseBodyLivePackageChannelGroup) };
    inline CreateLivePackageChannelGroupResponseBodyLivePackageChannelGroup livePackageChannelGroup() { DARABONBA_PTR_GET(livePackageChannelGroup_, CreateLivePackageChannelGroupResponseBodyLivePackageChannelGroup) };
    inline CreateLivePackageChannelGroupResponseBody& setLivePackageChannelGroup(const CreateLivePackageChannelGroupResponseBodyLivePackageChannelGroup & livePackageChannelGroup) { DARABONBA_PTR_SET_VALUE(livePackageChannelGroup_, livePackageChannelGroup) };
    inline CreateLivePackageChannelGroupResponseBody& setLivePackageChannelGroup(CreateLivePackageChannelGroupResponseBodyLivePackageChannelGroup && livePackageChannelGroup) { DARABONBA_PTR_SET_RVALUE(livePackageChannelGroup_, livePackageChannelGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLivePackageChannelGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the channel group.
    std::shared_ptr<CreateLivePackageChannelGroupResponseBodyLivePackageChannelGroup> livePackageChannelGroup_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

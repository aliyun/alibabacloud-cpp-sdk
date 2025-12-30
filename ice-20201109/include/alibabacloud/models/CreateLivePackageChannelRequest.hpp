// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVEPACKAGECHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVEPACKAGECHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateLivePackageChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLivePackageChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(SegmentCount, segmentCount_);
      DARABONBA_PTR_TO_JSON(SegmentDuration, segmentDuration_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLivePackageChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(SegmentCount, segmentCount_);
      DARABONBA_PTR_FROM_JSON(SegmentDuration, segmentDuration_);
    };
    CreateLivePackageChannelRequest() = default ;
    CreateLivePackageChannelRequest(const CreateLivePackageChannelRequest &) = default ;
    CreateLivePackageChannelRequest(CreateLivePackageChannelRequest &&) = default ;
    CreateLivePackageChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLivePackageChannelRequest() = default ;
    CreateLivePackageChannelRequest& operator=(const CreateLivePackageChannelRequest &) = default ;
    CreateLivePackageChannelRequest& operator=(CreateLivePackageChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelName_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->groupName_ == nullptr && this->protocol_ == nullptr && this->segmentCount_ == nullptr
        && this->segmentDuration_ == nullptr; };
    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline CreateLivePackageChannelRequest& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateLivePackageChannelRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLivePackageChannelRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateLivePackageChannelRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateLivePackageChannelRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // segmentCount Field Functions 
    bool hasSegmentCount() const { return this->segmentCount_ != nullptr;};
    void deleteSegmentCount() { this->segmentCount_ = nullptr;};
    inline int32_t getSegmentCount() const { DARABONBA_PTR_GET_DEFAULT(segmentCount_, 0) };
    inline CreateLivePackageChannelRequest& setSegmentCount(int32_t segmentCount) { DARABONBA_PTR_SET_VALUE(segmentCount_, segmentCount) };


    // segmentDuration Field Functions 
    bool hasSegmentDuration() const { return this->segmentDuration_ != nullptr;};
    void deleteSegmentDuration() { this->segmentDuration_ = nullptr;};
    inline int32_t getSegmentDuration() const { DARABONBA_PTR_GET_DEFAULT(segmentDuration_, 0) };
    inline CreateLivePackageChannelRequest& setSegmentDuration(int32_t segmentDuration) { DARABONBA_PTR_SET_VALUE(segmentDuration_, segmentDuration) };


  protected:
    // The channel name. It can contain letters, digits, hyphens (-), and underscores (_). The name must be 1 to 200 characters in length. Format: [A-Za-z0-9_-]+
    // 
    // This parameter is required.
    shared_ptr<string> channelName_ {};
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The channel description. It can be up to 1,000 characters in length.
    shared_ptr<string> description_ {};
    // The channel group name. It can contain letters, digits, hyphens (-), and underscores (_). The name must be 1 to 200 characters in length. Format: [A-Za-z0-9_-]+
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // The ingest protocol. Only HLS is supported.
    // 
    // This parameter is required.
    shared_ptr<string> protocol_ {};
    // The number of M3U8 segments. Valid values: 2 to 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> segmentCount_ {};
    // The segment duration. Valid values: 1 to 30.
    // 
    // This parameter is required.
    shared_ptr<int32_t> segmentDuration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

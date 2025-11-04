// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVEPACKAGECHANNELRESPONSEBODYLIVEPACKAGECHANNEL_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVEPACKAGECHANNELRESPONSEBODYLIVEPACKAGECHANNEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateLivePackageChannelResponseBodyLivePackageChannel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLivePackageChannelResponseBodyLivePackageChannel& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IngestEndpoints, ingestEndpoints_);
      DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(SegmentCount, segmentCount_);
      DARABONBA_PTR_TO_JSON(SegmentDuration, segmentDuration_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLivePackageChannelResponseBodyLivePackageChannel& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IngestEndpoints, ingestEndpoints_);
      DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(SegmentCount, segmentCount_);
      DARABONBA_PTR_FROM_JSON(SegmentDuration, segmentDuration_);
    };
    CreateLivePackageChannelResponseBodyLivePackageChannel() = default ;
    CreateLivePackageChannelResponseBodyLivePackageChannel(const CreateLivePackageChannelResponseBodyLivePackageChannel &) = default ;
    CreateLivePackageChannelResponseBodyLivePackageChannel(CreateLivePackageChannelResponseBodyLivePackageChannel &&) = default ;
    CreateLivePackageChannelResponseBodyLivePackageChannel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLivePackageChannelResponseBodyLivePackageChannel() = default ;
    CreateLivePackageChannelResponseBodyLivePackageChannel& operator=(const CreateLivePackageChannelResponseBodyLivePackageChannel &) = default ;
    CreateLivePackageChannelResponseBodyLivePackageChannel& operator=(CreateLivePackageChannelResponseBodyLivePackageChannel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelName_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->groupName_ == nullptr && return this->ingestEndpoints_ == nullptr && return this->lastModified_ == nullptr
        && return this->protocol_ == nullptr && return this->segmentCount_ == nullptr && return this->segmentDuration_ == nullptr; };
    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string channelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline CreateLivePackageChannelResponseBodyLivePackageChannel& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateLivePackageChannelResponseBodyLivePackageChannel& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLivePackageChannelResponseBodyLivePackageChannel& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateLivePackageChannelResponseBodyLivePackageChannel& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ingestEndpoints Field Functions 
    bool hasIngestEndpoints() const { return this->ingestEndpoints_ != nullptr;};
    void deleteIngestEndpoints() { this->ingestEndpoints_ = nullptr;};
    inline const vector<Models::CreateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints> & ingestEndpoints() const { DARABONBA_PTR_GET_CONST(ingestEndpoints_, vector<Models::CreateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints>) };
    inline vector<Models::CreateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints> ingestEndpoints() { DARABONBA_PTR_GET(ingestEndpoints_, vector<Models::CreateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints>) };
    inline CreateLivePackageChannelResponseBodyLivePackageChannel& setIngestEndpoints(const vector<Models::CreateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints> & ingestEndpoints) { DARABONBA_PTR_SET_VALUE(ingestEndpoints_, ingestEndpoints) };
    inline CreateLivePackageChannelResponseBodyLivePackageChannel& setIngestEndpoints(vector<Models::CreateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints> && ingestEndpoints) { DARABONBA_PTR_SET_RVALUE(ingestEndpoints_, ingestEndpoints) };


    // lastModified Field Functions 
    bool hasLastModified() const { return this->lastModified_ != nullptr;};
    void deleteLastModified() { this->lastModified_ = nullptr;};
    inline string lastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
    inline CreateLivePackageChannelResponseBodyLivePackageChannel& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateLivePackageChannelResponseBodyLivePackageChannel& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // segmentCount Field Functions 
    bool hasSegmentCount() const { return this->segmentCount_ != nullptr;};
    void deleteSegmentCount() { this->segmentCount_ = nullptr;};
    inline int32_t segmentCount() const { DARABONBA_PTR_GET_DEFAULT(segmentCount_, 0) };
    inline CreateLivePackageChannelResponseBodyLivePackageChannel& setSegmentCount(int32_t segmentCount) { DARABONBA_PTR_SET_VALUE(segmentCount_, segmentCount) };


    // segmentDuration Field Functions 
    bool hasSegmentDuration() const { return this->segmentDuration_ != nullptr;};
    void deleteSegmentDuration() { this->segmentDuration_ = nullptr;};
    inline int32_t segmentDuration() const { DARABONBA_PTR_GET_DEFAULT(segmentDuration_, 0) };
    inline CreateLivePackageChannelResponseBodyLivePackageChannel& setSegmentDuration(int32_t segmentDuration) { DARABONBA_PTR_SET_VALUE(segmentDuration_, segmentDuration) };


  protected:
    // The channel name.
    std::shared_ptr<string> channelName_ = nullptr;
    // The time when the channel was created. It is in the yyyy-MM-ddTHH:mm:ssZ format and displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The channel description.
    std::shared_ptr<string> description_ = nullptr;
    // The channel group name.
    std::shared_ptr<string> groupName_ = nullptr;
    // The ingest endpoints.
    std::shared_ptr<vector<Models::CreateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints>> ingestEndpoints_ = nullptr;
    // The time when the channel was last modified. It is in the yyyy-MM-ddTHH:mm:ssZ format and displayed in UTC.
    std::shared_ptr<string> lastModified_ = nullptr;
    // The ingest protocol. Only HLS is supported.
    std::shared_ptr<string> protocol_ = nullptr;
    // The number of M3U8 segments.
    std::shared_ptr<int32_t> segmentCount_ = nullptr;
    // The segment duration.
    std::shared_ptr<int32_t> segmentDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

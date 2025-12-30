// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVEPACKAGECHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVEPACKAGECHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class LivePackageChannel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LivePackageChannel& obj) { 
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
      friend void from_json(const Darabonba::Json& j, LivePackageChannel& obj) { 
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
      LivePackageChannel() = default ;
      LivePackageChannel(const LivePackageChannel &) = default ;
      LivePackageChannel(LivePackageChannel &&) = default ;
      LivePackageChannel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LivePackageChannel() = default ;
      LivePackageChannel& operator=(const LivePackageChannel &) = default ;
      LivePackageChannel& operator=(LivePackageChannel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IngestEndpoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IngestEndpoints& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Password, password_);
          DARABONBA_PTR_TO_JSON(Url, url_);
          DARABONBA_PTR_TO_JSON(Username, username_);
        };
        friend void from_json(const Darabonba::Json& j, IngestEndpoints& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Password, password_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
        };
        IngestEndpoints() = default ;
        IngestEndpoints(const IngestEndpoints &) = default ;
        IngestEndpoints(IngestEndpoints &&) = default ;
        IngestEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IngestEndpoints() = default ;
        IngestEndpoints& operator=(const IngestEndpoints &) = default ;
        IngestEndpoints& operator=(IngestEndpoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->password_ == nullptr && this->url_ == nullptr && this->username_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline IngestEndpoints& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // password Field Functions 
        bool hasPassword() const { return this->password_ != nullptr;};
        void deletePassword() { this->password_ = nullptr;};
        inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
        inline IngestEndpoints& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline IngestEndpoints& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline IngestEndpoints& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      protected:
        // The ingest endpoint ID.
        shared_ptr<string> id_ {};
        // The password.
        shared_ptr<string> password_ {};
        // The ingest endpoint URL.
        shared_ptr<string> url_ {};
        // The username.
        shared_ptr<string> username_ {};
      };

      virtual bool empty() const override { return this->channelName_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->groupName_ == nullptr && this->ingestEndpoints_ == nullptr && this->lastModified_ == nullptr
        && this->protocol_ == nullptr && this->segmentCount_ == nullptr && this->segmentDuration_ == nullptr; };
      // channelName Field Functions 
      bool hasChannelName() const { return this->channelName_ != nullptr;};
      void deleteChannelName() { this->channelName_ = nullptr;};
      inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
      inline LivePackageChannel& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline LivePackageChannel& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline LivePackageChannel& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline LivePackageChannel& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // ingestEndpoints Field Functions 
      bool hasIngestEndpoints() const { return this->ingestEndpoints_ != nullptr;};
      void deleteIngestEndpoints() { this->ingestEndpoints_ = nullptr;};
      inline const vector<LivePackageChannel::IngestEndpoints> & getIngestEndpoints() const { DARABONBA_PTR_GET_CONST(ingestEndpoints_, vector<LivePackageChannel::IngestEndpoints>) };
      inline vector<LivePackageChannel::IngestEndpoints> getIngestEndpoints() { DARABONBA_PTR_GET(ingestEndpoints_, vector<LivePackageChannel::IngestEndpoints>) };
      inline LivePackageChannel& setIngestEndpoints(const vector<LivePackageChannel::IngestEndpoints> & ingestEndpoints) { DARABONBA_PTR_SET_VALUE(ingestEndpoints_, ingestEndpoints) };
      inline LivePackageChannel& setIngestEndpoints(vector<LivePackageChannel::IngestEndpoints> && ingestEndpoints) { DARABONBA_PTR_SET_RVALUE(ingestEndpoints_, ingestEndpoints) };


      // lastModified Field Functions 
      bool hasLastModified() const { return this->lastModified_ != nullptr;};
      void deleteLastModified() { this->lastModified_ = nullptr;};
      inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
      inline LivePackageChannel& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline LivePackageChannel& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // segmentCount Field Functions 
      bool hasSegmentCount() const { return this->segmentCount_ != nullptr;};
      void deleteSegmentCount() { this->segmentCount_ = nullptr;};
      inline int32_t getSegmentCount() const { DARABONBA_PTR_GET_DEFAULT(segmentCount_, 0) };
      inline LivePackageChannel& setSegmentCount(int32_t segmentCount) { DARABONBA_PTR_SET_VALUE(segmentCount_, segmentCount) };


      // segmentDuration Field Functions 
      bool hasSegmentDuration() const { return this->segmentDuration_ != nullptr;};
      void deleteSegmentDuration() { this->segmentDuration_ = nullptr;};
      inline int32_t getSegmentDuration() const { DARABONBA_PTR_GET_DEFAULT(segmentDuration_, 0) };
      inline LivePackageChannel& setSegmentDuration(int32_t segmentDuration) { DARABONBA_PTR_SET_VALUE(segmentDuration_, segmentDuration) };


    protected:
      // The channel name.
      shared_ptr<string> channelName_ {};
      // The time when the channel was created. It is in the yyyy-MM-ddTHH:mm:ssZ format and displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The channel description.
      shared_ptr<string> description_ {};
      // The channel group name.
      shared_ptr<string> groupName_ {};
      // The ingest endpoints.
      shared_ptr<vector<LivePackageChannel::IngestEndpoints>> ingestEndpoints_ {};
      // The time when the channel was last modified. It is in the yyyy-MM-ddTHH:mm:ssZ format and displayed in UTC.
      shared_ptr<string> lastModified_ {};
      // The ingest protocol. Only HLS is supported.
      shared_ptr<string> protocol_ {};
      // The number of M3U8 segments.
      shared_ptr<int32_t> segmentCount_ {};
      // The segment duration.
      shared_ptr<int32_t> segmentDuration_ {};
    };

    virtual bool empty() const override { return this->livePackageChannel_ == nullptr
        && this->requestId_ == nullptr; };
    // livePackageChannel Field Functions 
    bool hasLivePackageChannel() const { return this->livePackageChannel_ != nullptr;};
    void deleteLivePackageChannel() { this->livePackageChannel_ = nullptr;};
    inline const CreateLivePackageChannelResponseBody::LivePackageChannel & getLivePackageChannel() const { DARABONBA_PTR_GET_CONST(livePackageChannel_, CreateLivePackageChannelResponseBody::LivePackageChannel) };
    inline CreateLivePackageChannelResponseBody::LivePackageChannel getLivePackageChannel() { DARABONBA_PTR_GET(livePackageChannel_, CreateLivePackageChannelResponseBody::LivePackageChannel) };
    inline CreateLivePackageChannelResponseBody& setLivePackageChannel(const CreateLivePackageChannelResponseBody::LivePackageChannel & livePackageChannel) { DARABONBA_PTR_SET_VALUE(livePackageChannel_, livePackageChannel) };
    inline CreateLivePackageChannelResponseBody& setLivePackageChannel(CreateLivePackageChannelResponseBody::LivePackageChannel && livePackageChannel) { DARABONBA_PTR_SET_RVALUE(livePackageChannel_, livePackageChannel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLivePackageChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the live package channel.
    shared_ptr<CreateLivePackageChannelResponseBody::LivePackageChannel> livePackageChannel_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

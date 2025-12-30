// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEPACKAGECHANNELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEPACKAGECHANNELSRESPONSEBODY_HPP_
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
  class ListLivePackageChannelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLivePackageChannelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LivePackageChannels, livePackageChannels_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLivePackageChannelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePackageChannels, livePackageChannels_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLivePackageChannelsResponseBody() = default ;
    ListLivePackageChannelsResponseBody(const ListLivePackageChannelsResponseBody &) = default ;
    ListLivePackageChannelsResponseBody(ListLivePackageChannelsResponseBody &&) = default ;
    ListLivePackageChannelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLivePackageChannelsResponseBody() = default ;
    ListLivePackageChannelsResponseBody& operator=(const ListLivePackageChannelsResponseBody &) = default ;
    ListLivePackageChannelsResponseBody& operator=(ListLivePackageChannelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LivePackageChannels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LivePackageChannels& obj) { 
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
      friend void from_json(const Darabonba::Json& j, LivePackageChannels& obj) { 
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
      LivePackageChannels() = default ;
      LivePackageChannels(const LivePackageChannels &) = default ;
      LivePackageChannels(LivePackageChannels &&) = default ;
      LivePackageChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LivePackageChannels() = default ;
      LivePackageChannels& operator=(const LivePackageChannels &) = default ;
      LivePackageChannels& operator=(LivePackageChannels &&) = default ;
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
      inline LivePackageChannels& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline LivePackageChannels& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline LivePackageChannels& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline LivePackageChannels& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // ingestEndpoints Field Functions 
      bool hasIngestEndpoints() const { return this->ingestEndpoints_ != nullptr;};
      void deleteIngestEndpoints() { this->ingestEndpoints_ = nullptr;};
      inline const vector<LivePackageChannels::IngestEndpoints> & getIngestEndpoints() const { DARABONBA_PTR_GET_CONST(ingestEndpoints_, vector<LivePackageChannels::IngestEndpoints>) };
      inline vector<LivePackageChannels::IngestEndpoints> getIngestEndpoints() { DARABONBA_PTR_GET(ingestEndpoints_, vector<LivePackageChannels::IngestEndpoints>) };
      inline LivePackageChannels& setIngestEndpoints(const vector<LivePackageChannels::IngestEndpoints> & ingestEndpoints) { DARABONBA_PTR_SET_VALUE(ingestEndpoints_, ingestEndpoints) };
      inline LivePackageChannels& setIngestEndpoints(vector<LivePackageChannels::IngestEndpoints> && ingestEndpoints) { DARABONBA_PTR_SET_RVALUE(ingestEndpoints_, ingestEndpoints) };


      // lastModified Field Functions 
      bool hasLastModified() const { return this->lastModified_ != nullptr;};
      void deleteLastModified() { this->lastModified_ = nullptr;};
      inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
      inline LivePackageChannels& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline LivePackageChannels& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // segmentCount Field Functions 
      bool hasSegmentCount() const { return this->segmentCount_ != nullptr;};
      void deleteSegmentCount() { this->segmentCount_ = nullptr;};
      inline int32_t getSegmentCount() const { DARABONBA_PTR_GET_DEFAULT(segmentCount_, 0) };
      inline LivePackageChannels& setSegmentCount(int32_t segmentCount) { DARABONBA_PTR_SET_VALUE(segmentCount_, segmentCount) };


      // segmentDuration Field Functions 
      bool hasSegmentDuration() const { return this->segmentDuration_ != nullptr;};
      void deleteSegmentDuration() { this->segmentDuration_ = nullptr;};
      inline int32_t getSegmentDuration() const { DARABONBA_PTR_GET_DEFAULT(segmentDuration_, 0) };
      inline LivePackageChannels& setSegmentDuration(int32_t segmentDuration) { DARABONBA_PTR_SET_VALUE(segmentDuration_, segmentDuration) };


    protected:
      // The channel name.
      shared_ptr<string> channelName_ {};
      // The time when the channel was created.
      shared_ptr<string> createTime_ {};
      // The channel description.
      shared_ptr<string> description_ {};
      // The channel group name.
      shared_ptr<string> groupName_ {};
      // The ingest endpoints.
      shared_ptr<vector<LivePackageChannels::IngestEndpoints>> ingestEndpoints_ {};
      // The time when the channel was last modified.
      shared_ptr<string> lastModified_ {};
      // The ingest protocol. Only HLS is supported.
      shared_ptr<string> protocol_ {};
      // The number of M3U8 segments.
      shared_ptr<int32_t> segmentCount_ {};
      // The segment duration.
      shared_ptr<int32_t> segmentDuration_ {};
    };

    virtual bool empty() const override { return this->livePackageChannels_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->sortBy_ == nullptr && this->totalCount_ == nullptr; };
    // livePackageChannels Field Functions 
    bool hasLivePackageChannels() const { return this->livePackageChannels_ != nullptr;};
    void deleteLivePackageChannels() { this->livePackageChannels_ = nullptr;};
    inline const vector<ListLivePackageChannelsResponseBody::LivePackageChannels> & getLivePackageChannels() const { DARABONBA_PTR_GET_CONST(livePackageChannels_, vector<ListLivePackageChannelsResponseBody::LivePackageChannels>) };
    inline vector<ListLivePackageChannelsResponseBody::LivePackageChannels> getLivePackageChannels() { DARABONBA_PTR_GET(livePackageChannels_, vector<ListLivePackageChannelsResponseBody::LivePackageChannels>) };
    inline ListLivePackageChannelsResponseBody& setLivePackageChannels(const vector<ListLivePackageChannelsResponseBody::LivePackageChannels> & livePackageChannels) { DARABONBA_PTR_SET_VALUE(livePackageChannels_, livePackageChannels) };
    inline ListLivePackageChannelsResponseBody& setLivePackageChannels(vector<ListLivePackageChannelsResponseBody::LivePackageChannels> && livePackageChannels) { DARABONBA_PTR_SET_RVALUE(livePackageChannels_, livePackageChannels) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListLivePackageChannelsResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListLivePackageChannelsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLivePackageChannelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLivePackageChannelsResponseBody& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLivePackageChannelsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The live package channels.
    shared_ptr<vector<ListLivePackageChannelsResponseBody::LivePackageChannels>> livePackageChannels_ {};
    // The page number.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The sort order. Valid values: asc and desc (default).
    shared_ptr<string> sortBy_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

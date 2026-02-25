// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaList, mediaList_);
      DARABONBA_PTR_TO_JSON(NonExistMediaIds, nonExistMediaIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaList, mediaList_);
      DARABONBA_PTR_FROM_JSON(NonExistMediaIds, nonExistMediaIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryMediaListResponseBody() = default ;
    QueryMediaListResponseBody(const QueryMediaListResponseBody &) = default ;
    QueryMediaListResponseBody(QueryMediaListResponseBody &&) = default ;
    QueryMediaListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListResponseBody() = default ;
    QueryMediaListResponseBody& operator=(const QueryMediaListResponseBody &) = default ;
    QueryMediaListResponseBody& operator=(QueryMediaListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NonExistMediaIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NonExistMediaIds& obj) { 
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      };
      friend void from_json(const Darabonba::Json& j, NonExistMediaIds& obj) { 
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      };
      NonExistMediaIds() = default ;
      NonExistMediaIds(const NonExistMediaIds &) = default ;
      NonExistMediaIds(NonExistMediaIds &&) = default ;
      NonExistMediaIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NonExistMediaIds() = default ;
      NonExistMediaIds& operator=(const NonExistMediaIds &) = default ;
      NonExistMediaIds& operator=(NonExistMediaIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mediaId_ == nullptr; };
      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline const vector<string> & getMediaId() const { DARABONBA_PTR_GET_CONST(mediaId_, vector<string>) };
      inline vector<string> getMediaId() { DARABONBA_PTR_GET(mediaId_, vector<string>) };
      inline NonExistMediaIds& setMediaId(const vector<string> & mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };
      inline NonExistMediaIds& setMediaId(vector<string> && mediaId) { DARABONBA_PTR_SET_RVALUE(mediaId_, mediaId) };


    protected:
      shared_ptr<vector<string>> mediaId_ {};
    };

    class MediaList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaList& obj) { 
        DARABONBA_PTR_TO_JSON(Media, media_);
      };
      friend void from_json(const Darabonba::Json& j, MediaList& obj) { 
        DARABONBA_PTR_FROM_JSON(Media, media_);
      };
      MediaList() = default ;
      MediaList(const MediaList &) = default ;
      MediaList(MediaList &&) = default ;
      MediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaList() = default ;
      MediaList& operator=(const MediaList &) = default ;
      MediaList& operator=(MediaList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Media : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Media& obj) { 
          DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
          DARABONBA_PTR_TO_JSON(CateId, cateId_);
          DARABONBA_PTR_TO_JSON(CensorState, censorState_);
          DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(File, file_);
          DARABONBA_PTR_TO_JSON(Format, format_);
          DARABONBA_PTR_TO_JSON(Fps, fps_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
          DARABONBA_PTR_TO_JSON(MediaInfo, mediaInfo_);
          DARABONBA_PTR_TO_JSON(PlayList, playList_);
          DARABONBA_PTR_TO_JSON(PublishState, publishState_);
          DARABONBA_PTR_TO_JSON(RunIdList, runIdList_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(SnapshotList, snapshotList_);
          DARABONBA_PTR_TO_JSON(SummaryList, summaryList_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, Media& obj) { 
          DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
          DARABONBA_PTR_FROM_JSON(CateId, cateId_);
          DARABONBA_PTR_FROM_JSON(CensorState, censorState_);
          DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(File, file_);
          DARABONBA_PTR_FROM_JSON(Format, format_);
          DARABONBA_PTR_FROM_JSON(Fps, fps_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
          DARABONBA_PTR_FROM_JSON(MediaInfo, mediaInfo_);
          DARABONBA_PTR_FROM_JSON(PlayList, playList_);
          DARABONBA_PTR_FROM_JSON(PublishState, publishState_);
          DARABONBA_PTR_FROM_JSON(RunIdList, runIdList_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(SnapshotList, snapshotList_);
          DARABONBA_PTR_FROM_JSON(SummaryList, summaryList_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        Media() = default ;
        Media(const Media &) = default ;
        Media(Media &&) = default ;
        Media(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Media() = default ;
        Media& operator=(const Media &) = default ;
        Media& operator=(Media &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<string> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<string>) };
          inline vector<string> getTag() { DARABONBA_PTR_GET(tag_, vector<string>) };
          inline Tags& setTag(const vector<string> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<string> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<string>> tag_ {};
        };

        class SummaryList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SummaryList& obj) { 
            DARABONBA_PTR_TO_JSON(Summary, summary_);
          };
          friend void from_json(const Darabonba::Json& j, SummaryList& obj) { 
            DARABONBA_PTR_FROM_JSON(Summary, summary_);
          };
          SummaryList() = default ;
          SummaryList(const SummaryList &) = default ;
          SummaryList(SummaryList &&) = default ;
          SummaryList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SummaryList() = default ;
          SummaryList& operator=(const SummaryList &) = default ;
          SummaryList& operator=(SummaryList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Summary : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Summary& obj) { 
              DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
              DARABONBA_PTR_TO_JSON(File, file_);
              DARABONBA_PTR_TO_JSON(MediaWorkflowId, mediaWorkflowId_);
              DARABONBA_PTR_TO_JSON(MediaWorkflowName, mediaWorkflowName_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Summary& obj) { 
              DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
              DARABONBA_PTR_FROM_JSON(File, file_);
              DARABONBA_PTR_FROM_JSON(MediaWorkflowId, mediaWorkflowId_);
              DARABONBA_PTR_FROM_JSON(MediaWorkflowName, mediaWorkflowName_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            Summary() = default ;
            Summary(const Summary &) = default ;
            Summary(Summary &&) = default ;
            Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Summary() = default ;
            Summary& operator=(const Summary &) = default ;
            Summary& operator=(Summary &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class File : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const File& obj) { 
                DARABONBA_PTR_TO_JSON(State, state_);
                DARABONBA_PTR_TO_JSON(URL, URL_);
              };
              friend void from_json(const Darabonba::Json& j, File& obj) { 
                DARABONBA_PTR_FROM_JSON(State, state_);
                DARABONBA_PTR_FROM_JSON(URL, URL_);
              };
              File() = default ;
              File(const File &) = default ;
              File(File &&) = default ;
              File(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~File() = default ;
              File& operator=(const File &) = default ;
              File& operator=(File &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->state_ == nullptr
        && this->URL_ == nullptr; };
              // state Field Functions 
              bool hasState() const { return this->state_ != nullptr;};
              void deleteState() { this->state_ = nullptr;};
              inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
              inline File& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


              // URL Field Functions 
              bool hasURL() const { return this->URL_ != nullptr;};
              void deleteURL() { this->URL_ = nullptr;};
              inline string getURL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
              inline File& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


            protected:
              shared_ptr<string> state_ {};
              shared_ptr<string> URL_ {};
            };

            virtual bool empty() const override { return this->activityName_ == nullptr
        && this->file_ == nullptr && this->mediaWorkflowId_ == nullptr && this->mediaWorkflowName_ == nullptr && this->type_ == nullptr; };
            // activityName Field Functions 
            bool hasActivityName() const { return this->activityName_ != nullptr;};
            void deleteActivityName() { this->activityName_ = nullptr;};
            inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
            inline Summary& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


            // file Field Functions 
            bool hasFile() const { return this->file_ != nullptr;};
            void deleteFile() { this->file_ = nullptr;};
            inline const Summary::File & getFile() const { DARABONBA_PTR_GET_CONST(file_, Summary::File) };
            inline Summary::File getFile() { DARABONBA_PTR_GET(file_, Summary::File) };
            inline Summary& setFile(const Summary::File & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
            inline Summary& setFile(Summary::File && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


            // mediaWorkflowId Field Functions 
            bool hasMediaWorkflowId() const { return this->mediaWorkflowId_ != nullptr;};
            void deleteMediaWorkflowId() { this->mediaWorkflowId_ = nullptr;};
            inline string getMediaWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowId_, "") };
            inline Summary& setMediaWorkflowId(string mediaWorkflowId) { DARABONBA_PTR_SET_VALUE(mediaWorkflowId_, mediaWorkflowId) };


            // mediaWorkflowName Field Functions 
            bool hasMediaWorkflowName() const { return this->mediaWorkflowName_ != nullptr;};
            void deleteMediaWorkflowName() { this->mediaWorkflowName_ = nullptr;};
            inline string getMediaWorkflowName() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowName_, "") };
            inline Summary& setMediaWorkflowName(string mediaWorkflowName) { DARABONBA_PTR_SET_VALUE(mediaWorkflowName_, mediaWorkflowName) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Summary& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> activityName_ {};
            shared_ptr<Summary::File> file_ {};
            shared_ptr<string> mediaWorkflowId_ {};
            shared_ptr<string> mediaWorkflowName_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->summary_ == nullptr; };
          // summary Field Functions 
          bool hasSummary() const { return this->summary_ != nullptr;};
          void deleteSummary() { this->summary_ = nullptr;};
          inline const vector<SummaryList::Summary> & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, vector<SummaryList::Summary>) };
          inline vector<SummaryList::Summary> getSummary() { DARABONBA_PTR_GET(summary_, vector<SummaryList::Summary>) };
          inline SummaryList& setSummary(const vector<SummaryList::Summary> & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
          inline SummaryList& setSummary(vector<SummaryList::Summary> && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


        protected:
          shared_ptr<vector<SummaryList::Summary>> summary_ {};
        };

        class SnapshotList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SnapshotList& obj) { 
            DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
          };
          friend void from_json(const Darabonba::Json& j, SnapshotList& obj) { 
            DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
          };
          SnapshotList() = default ;
          SnapshotList(const SnapshotList &) = default ;
          SnapshotList(SnapshotList &&) = default ;
          SnapshotList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SnapshotList() = default ;
          SnapshotList& operator=(const SnapshotList &) = default ;
          SnapshotList& operator=(SnapshotList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Snapshot : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Snapshot& obj) { 
              DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(File, file_);
              DARABONBA_PTR_TO_JSON(MediaWorkflowId, mediaWorkflowId_);
              DARABONBA_PTR_TO_JSON(MediaWorkflowName, mediaWorkflowName_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Snapshot& obj) { 
              DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(File, file_);
              DARABONBA_PTR_FROM_JSON(MediaWorkflowId, mediaWorkflowId_);
              DARABONBA_PTR_FROM_JSON(MediaWorkflowName, mediaWorkflowName_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            Snapshot() = default ;
            Snapshot(const Snapshot &) = default ;
            Snapshot(Snapshot &&) = default ;
            Snapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Snapshot() = default ;
            Snapshot& operator=(const Snapshot &) = default ;
            Snapshot& operator=(Snapshot &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class File : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const File& obj) { 
                DARABONBA_PTR_TO_JSON(State, state_);
                DARABONBA_PTR_TO_JSON(URL, URL_);
              };
              friend void from_json(const Darabonba::Json& j, File& obj) { 
                DARABONBA_PTR_FROM_JSON(State, state_);
                DARABONBA_PTR_FROM_JSON(URL, URL_);
              };
              File() = default ;
              File(const File &) = default ;
              File(File &&) = default ;
              File(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~File() = default ;
              File& operator=(const File &) = default ;
              File& operator=(File &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->state_ == nullptr
        && this->URL_ == nullptr; };
              // state Field Functions 
              bool hasState() const { return this->state_ != nullptr;};
              void deleteState() { this->state_ = nullptr;};
              inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
              inline File& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


              // URL Field Functions 
              bool hasURL() const { return this->URL_ != nullptr;};
              void deleteURL() { this->URL_ = nullptr;};
              inline string getURL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
              inline File& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


            protected:
              shared_ptr<string> state_ {};
              shared_ptr<string> URL_ {};
            };

            virtual bool empty() const override { return this->activityName_ == nullptr
        && this->count_ == nullptr && this->file_ == nullptr && this->mediaWorkflowId_ == nullptr && this->mediaWorkflowName_ == nullptr && this->type_ == nullptr; };
            // activityName Field Functions 
            bool hasActivityName() const { return this->activityName_ != nullptr;};
            void deleteActivityName() { this->activityName_ = nullptr;};
            inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
            inline Snapshot& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
            inline Snapshot& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            // file Field Functions 
            bool hasFile() const { return this->file_ != nullptr;};
            void deleteFile() { this->file_ = nullptr;};
            inline const Snapshot::File & getFile() const { DARABONBA_PTR_GET_CONST(file_, Snapshot::File) };
            inline Snapshot::File getFile() { DARABONBA_PTR_GET(file_, Snapshot::File) };
            inline Snapshot& setFile(const Snapshot::File & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
            inline Snapshot& setFile(Snapshot::File && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


            // mediaWorkflowId Field Functions 
            bool hasMediaWorkflowId() const { return this->mediaWorkflowId_ != nullptr;};
            void deleteMediaWorkflowId() { this->mediaWorkflowId_ = nullptr;};
            inline string getMediaWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowId_, "") };
            inline Snapshot& setMediaWorkflowId(string mediaWorkflowId) { DARABONBA_PTR_SET_VALUE(mediaWorkflowId_, mediaWorkflowId) };


            // mediaWorkflowName Field Functions 
            bool hasMediaWorkflowName() const { return this->mediaWorkflowName_ != nullptr;};
            void deleteMediaWorkflowName() { this->mediaWorkflowName_ = nullptr;};
            inline string getMediaWorkflowName() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowName_, "") };
            inline Snapshot& setMediaWorkflowName(string mediaWorkflowName) { DARABONBA_PTR_SET_VALUE(mediaWorkflowName_, mediaWorkflowName) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Snapshot& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> activityName_ {};
            shared_ptr<string> count_ {};
            shared_ptr<Snapshot::File> file_ {};
            shared_ptr<string> mediaWorkflowId_ {};
            shared_ptr<string> mediaWorkflowName_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->snapshot_ == nullptr; };
          // snapshot Field Functions 
          bool hasSnapshot() const { return this->snapshot_ != nullptr;};
          void deleteSnapshot() { this->snapshot_ = nullptr;};
          inline const vector<SnapshotList::Snapshot> & getSnapshot() const { DARABONBA_PTR_GET_CONST(snapshot_, vector<SnapshotList::Snapshot>) };
          inline vector<SnapshotList::Snapshot> getSnapshot() { DARABONBA_PTR_GET(snapshot_, vector<SnapshotList::Snapshot>) };
          inline SnapshotList& setSnapshot(const vector<SnapshotList::Snapshot> & snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };
          inline SnapshotList& setSnapshot(vector<SnapshotList::Snapshot> && snapshot) { DARABONBA_PTR_SET_RVALUE(snapshot_, snapshot) };


        protected:
          shared_ptr<vector<SnapshotList::Snapshot>> snapshot_ {};
        };

        class RunIdList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RunIdList& obj) { 
            DARABONBA_PTR_TO_JSON(RunId, runId_);
          };
          friend void from_json(const Darabonba::Json& j, RunIdList& obj) { 
            DARABONBA_PTR_FROM_JSON(RunId, runId_);
          };
          RunIdList() = default ;
          RunIdList(const RunIdList &) = default ;
          RunIdList(RunIdList &&) = default ;
          RunIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RunIdList() = default ;
          RunIdList& operator=(const RunIdList &) = default ;
          RunIdList& operator=(RunIdList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->runId_ == nullptr; };
          // runId Field Functions 
          bool hasRunId() const { return this->runId_ != nullptr;};
          void deleteRunId() { this->runId_ = nullptr;};
          inline const vector<string> & getRunId() const { DARABONBA_PTR_GET_CONST(runId_, vector<string>) };
          inline vector<string> getRunId() { DARABONBA_PTR_GET(runId_, vector<string>) };
          inline RunIdList& setRunId(const vector<string> & runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };
          inline RunIdList& setRunId(vector<string> && runId) { DARABONBA_PTR_SET_RVALUE(runId_, runId) };


        protected:
          shared_ptr<vector<string>> runId_ {};
        };

        class PlayList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PlayList& obj) { 
            DARABONBA_PTR_TO_JSON(Play, play_);
          };
          friend void from_json(const Darabonba::Json& j, PlayList& obj) { 
            DARABONBA_PTR_FROM_JSON(Play, play_);
          };
          PlayList() = default ;
          PlayList(const PlayList &) = default ;
          PlayList(PlayList &&) = default ;
          PlayList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PlayList() = default ;
          PlayList& operator=(const PlayList &) = default ;
          PlayList& operator=(PlayList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Play : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Play& obj) { 
              DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
              DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
              DARABONBA_PTR_TO_JSON(Duration, duration_);
              DARABONBA_PTR_TO_JSON(Encryption, encryption_);
              DARABONBA_PTR_TO_JSON(File, file_);
              DARABONBA_PTR_TO_JSON(Format, format_);
              DARABONBA_PTR_TO_JSON(Fps, fps_);
              DARABONBA_PTR_TO_JSON(Height, height_);
              DARABONBA_PTR_TO_JSON(MediaWorkflowId, mediaWorkflowId_);
              DARABONBA_PTR_TO_JSON(MediaWorkflowName, mediaWorkflowName_);
              DARABONBA_PTR_TO_JSON(Size, size_);
              DARABONBA_PTR_TO_JSON(Width, width_);
            };
            friend void from_json(const Darabonba::Json& j, Play& obj) { 
              DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
              DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
              DARABONBA_PTR_FROM_JSON(Duration, duration_);
              DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
              DARABONBA_PTR_FROM_JSON(File, file_);
              DARABONBA_PTR_FROM_JSON(Format, format_);
              DARABONBA_PTR_FROM_JSON(Fps, fps_);
              DARABONBA_PTR_FROM_JSON(Height, height_);
              DARABONBA_PTR_FROM_JSON(MediaWorkflowId, mediaWorkflowId_);
              DARABONBA_PTR_FROM_JSON(MediaWorkflowName, mediaWorkflowName_);
              DARABONBA_PTR_FROM_JSON(Size, size_);
              DARABONBA_PTR_FROM_JSON(Width, width_);
            };
            Play() = default ;
            Play(const Play &) = default ;
            Play(Play &&) = default ;
            Play(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Play() = default ;
            Play& operator=(const Play &) = default ;
            Play& operator=(Play &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class File : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const File& obj) { 
                DARABONBA_PTR_TO_JSON(State, state_);
                DARABONBA_PTR_TO_JSON(URL, URL_);
              };
              friend void from_json(const Darabonba::Json& j, File& obj) { 
                DARABONBA_PTR_FROM_JSON(State, state_);
                DARABONBA_PTR_FROM_JSON(URL, URL_);
              };
              File() = default ;
              File(const File &) = default ;
              File(File &&) = default ;
              File(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~File() = default ;
              File& operator=(const File &) = default ;
              File& operator=(File &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->state_ == nullptr
        && this->URL_ == nullptr; };
              // state Field Functions 
              bool hasState() const { return this->state_ != nullptr;};
              void deleteState() { this->state_ = nullptr;};
              inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
              inline File& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


              // URL Field Functions 
              bool hasURL() const { return this->URL_ != nullptr;};
              void deleteURL() { this->URL_ = nullptr;};
              inline string getURL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
              inline File& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


            protected:
              shared_ptr<string> state_ {};
              shared_ptr<string> URL_ {};
            };

            virtual bool empty() const override { return this->activityName_ == nullptr
        && this->bitrate_ == nullptr && this->duration_ == nullptr && this->encryption_ == nullptr && this->file_ == nullptr && this->format_ == nullptr
        && this->fps_ == nullptr && this->height_ == nullptr && this->mediaWorkflowId_ == nullptr && this->mediaWorkflowName_ == nullptr && this->size_ == nullptr
        && this->width_ == nullptr; };
            // activityName Field Functions 
            bool hasActivityName() const { return this->activityName_ != nullptr;};
            void deleteActivityName() { this->activityName_ = nullptr;};
            inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
            inline Play& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


            // bitrate Field Functions 
            bool hasBitrate() const { return this->bitrate_ != nullptr;};
            void deleteBitrate() { this->bitrate_ = nullptr;};
            inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
            inline Play& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


            // duration Field Functions 
            bool hasDuration() const { return this->duration_ != nullptr;};
            void deleteDuration() { this->duration_ = nullptr;};
            inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
            inline Play& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


            // encryption Field Functions 
            bool hasEncryption() const { return this->encryption_ != nullptr;};
            void deleteEncryption() { this->encryption_ = nullptr;};
            inline string getEncryption() const { DARABONBA_PTR_GET_DEFAULT(encryption_, "") };
            inline Play& setEncryption(string encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };


            // file Field Functions 
            bool hasFile() const { return this->file_ != nullptr;};
            void deleteFile() { this->file_ = nullptr;};
            inline const Play::File & getFile() const { DARABONBA_PTR_GET_CONST(file_, Play::File) };
            inline Play::File getFile() { DARABONBA_PTR_GET(file_, Play::File) };
            inline Play& setFile(const Play::File & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
            inline Play& setFile(Play::File && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


            // format Field Functions 
            bool hasFormat() const { return this->format_ != nullptr;};
            void deleteFormat() { this->format_ = nullptr;};
            inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
            inline Play& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


            // fps Field Functions 
            bool hasFps() const { return this->fps_ != nullptr;};
            void deleteFps() { this->fps_ = nullptr;};
            inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
            inline Play& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


            // height Field Functions 
            bool hasHeight() const { return this->height_ != nullptr;};
            void deleteHeight() { this->height_ = nullptr;};
            inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
            inline Play& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


            // mediaWorkflowId Field Functions 
            bool hasMediaWorkflowId() const { return this->mediaWorkflowId_ != nullptr;};
            void deleteMediaWorkflowId() { this->mediaWorkflowId_ = nullptr;};
            inline string getMediaWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowId_, "") };
            inline Play& setMediaWorkflowId(string mediaWorkflowId) { DARABONBA_PTR_SET_VALUE(mediaWorkflowId_, mediaWorkflowId) };


            // mediaWorkflowName Field Functions 
            bool hasMediaWorkflowName() const { return this->mediaWorkflowName_ != nullptr;};
            void deleteMediaWorkflowName() { this->mediaWorkflowName_ = nullptr;};
            inline string getMediaWorkflowName() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowName_, "") };
            inline Play& setMediaWorkflowName(string mediaWorkflowName) { DARABONBA_PTR_SET_VALUE(mediaWorkflowName_, mediaWorkflowName) };


            // size Field Functions 
            bool hasSize() const { return this->size_ != nullptr;};
            void deleteSize() { this->size_ = nullptr;};
            inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
            inline Play& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


            // width Field Functions 
            bool hasWidth() const { return this->width_ != nullptr;};
            void deleteWidth() { this->width_ = nullptr;};
            inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
            inline Play& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


          protected:
            shared_ptr<string> activityName_ {};
            shared_ptr<string> bitrate_ {};
            shared_ptr<string> duration_ {};
            shared_ptr<string> encryption_ {};
            shared_ptr<Play::File> file_ {};
            shared_ptr<string> format_ {};
            shared_ptr<string> fps_ {};
            shared_ptr<string> height_ {};
            shared_ptr<string> mediaWorkflowId_ {};
            shared_ptr<string> mediaWorkflowName_ {};
            shared_ptr<string> size_ {};
            shared_ptr<string> width_ {};
          };

          virtual bool empty() const override { return this->play_ == nullptr; };
          // play Field Functions 
          bool hasPlay() const { return this->play_ != nullptr;};
          void deletePlay() { this->play_ = nullptr;};
          inline const vector<PlayList::Play> & getPlay() const { DARABONBA_PTR_GET_CONST(play_, vector<PlayList::Play>) };
          inline vector<PlayList::Play> getPlay() { DARABONBA_PTR_GET(play_, vector<PlayList::Play>) };
          inline PlayList& setPlay(const vector<PlayList::Play> & play) { DARABONBA_PTR_SET_VALUE(play_, play) };
          inline PlayList& setPlay(vector<PlayList::Play> && play) { DARABONBA_PTR_SET_RVALUE(play_, play) };


        protected:
          shared_ptr<vector<PlayList::Play>> play_ {};
        };

        class MediaInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MediaInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Format, format_);
            DARABONBA_PTR_TO_JSON(Streams, streams_);
          };
          friend void from_json(const Darabonba::Json& j, MediaInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Format, format_);
            DARABONBA_PTR_FROM_JSON(Streams, streams_);
          };
          MediaInfo() = default ;
          MediaInfo(const MediaInfo &) = default ;
          MediaInfo(MediaInfo &&) = default ;
          MediaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MediaInfo() = default ;
          MediaInfo& operator=(const MediaInfo &) = default ;
          MediaInfo& operator=(MediaInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Streams : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Streams& obj) { 
              DARABONBA_PTR_TO_JSON(AudioStreamList, audioStreamList_);
              DARABONBA_PTR_TO_JSON(SubtitleStreamList, subtitleStreamList_);
              DARABONBA_PTR_TO_JSON(VideoStreamList, videoStreamList_);
            };
            friend void from_json(const Darabonba::Json& j, Streams& obj) { 
              DARABONBA_PTR_FROM_JSON(AudioStreamList, audioStreamList_);
              DARABONBA_PTR_FROM_JSON(SubtitleStreamList, subtitleStreamList_);
              DARABONBA_PTR_FROM_JSON(VideoStreamList, videoStreamList_);
            };
            Streams() = default ;
            Streams(const Streams &) = default ;
            Streams(Streams &&) = default ;
            Streams(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Streams() = default ;
            Streams& operator=(const Streams &) = default ;
            Streams& operator=(Streams &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class VideoStreamList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const VideoStreamList& obj) { 
                DARABONBA_PTR_TO_JSON(VideoStream, videoStream_);
              };
              friend void from_json(const Darabonba::Json& j, VideoStreamList& obj) { 
                DARABONBA_PTR_FROM_JSON(VideoStream, videoStream_);
              };
              VideoStreamList() = default ;
              VideoStreamList(const VideoStreamList &) = default ;
              VideoStreamList(VideoStreamList &&) = default ;
              VideoStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~VideoStreamList() = default ;
              VideoStreamList& operator=(const VideoStreamList &) = default ;
              VideoStreamList& operator=(VideoStreamList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class VideoStream : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const VideoStream& obj) { 
                  DARABONBA_PTR_TO_JSON(AvgFPS, avgFPS_);
                  DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
                  DARABONBA_PTR_TO_JSON(CodecLongName, codecLongName_);
                  DARABONBA_PTR_TO_JSON(CodecName, codecName_);
                  DARABONBA_PTR_TO_JSON(CodecTag, codecTag_);
                  DARABONBA_PTR_TO_JSON(CodecTagString, codecTagString_);
                  DARABONBA_PTR_TO_JSON(CodecTimeBase, codecTimeBase_);
                  DARABONBA_PTR_TO_JSON(Dar, dar_);
                  DARABONBA_PTR_TO_JSON(Duration, duration_);
                  DARABONBA_PTR_TO_JSON(Fps, fps_);
                  DARABONBA_PTR_TO_JSON(HasBFrames, hasBFrames_);
                  DARABONBA_PTR_TO_JSON(Height, height_);
                  DARABONBA_PTR_TO_JSON(Index, index_);
                  DARABONBA_PTR_TO_JSON(Lang, lang_);
                  DARABONBA_PTR_TO_JSON(Level, level_);
                  DARABONBA_PTR_TO_JSON(NetworkCost, networkCost_);
                  DARABONBA_PTR_TO_JSON(NumFrames, numFrames_);
                  DARABONBA_PTR_TO_JSON(PixFmt, pixFmt_);
                  DARABONBA_PTR_TO_JSON(Profile, profile_);
                  DARABONBA_PTR_TO_JSON(Rotate, rotate_);
                  DARABONBA_PTR_TO_JSON(Sar, sar_);
                  DARABONBA_PTR_TO_JSON(StartTime, startTime_);
                  DARABONBA_PTR_TO_JSON(Timebase, timebase_);
                  DARABONBA_PTR_TO_JSON(Width, width_);
                };
                friend void from_json(const Darabonba::Json& j, VideoStream& obj) { 
                  DARABONBA_PTR_FROM_JSON(AvgFPS, avgFPS_);
                  DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
                  DARABONBA_PTR_FROM_JSON(CodecLongName, codecLongName_);
                  DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
                  DARABONBA_PTR_FROM_JSON(CodecTag, codecTag_);
                  DARABONBA_PTR_FROM_JSON(CodecTagString, codecTagString_);
                  DARABONBA_PTR_FROM_JSON(CodecTimeBase, codecTimeBase_);
                  DARABONBA_PTR_FROM_JSON(Dar, dar_);
                  DARABONBA_PTR_FROM_JSON(Duration, duration_);
                  DARABONBA_PTR_FROM_JSON(Fps, fps_);
                  DARABONBA_PTR_FROM_JSON(HasBFrames, hasBFrames_);
                  DARABONBA_PTR_FROM_JSON(Height, height_);
                  DARABONBA_PTR_FROM_JSON(Index, index_);
                  DARABONBA_PTR_FROM_JSON(Lang, lang_);
                  DARABONBA_PTR_FROM_JSON(Level, level_);
                  DARABONBA_PTR_FROM_JSON(NetworkCost, networkCost_);
                  DARABONBA_PTR_FROM_JSON(NumFrames, numFrames_);
                  DARABONBA_PTR_FROM_JSON(PixFmt, pixFmt_);
                  DARABONBA_PTR_FROM_JSON(Profile, profile_);
                  DARABONBA_PTR_FROM_JSON(Rotate, rotate_);
                  DARABONBA_PTR_FROM_JSON(Sar, sar_);
                  DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
                  DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
                  DARABONBA_PTR_FROM_JSON(Width, width_);
                };
                VideoStream() = default ;
                VideoStream(const VideoStream &) = default ;
                VideoStream(VideoStream &&) = default ;
                VideoStream(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~VideoStream() = default ;
                VideoStream& operator=(const VideoStream &) = default ;
                VideoStream& operator=(VideoStream &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class NetworkCost : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const NetworkCost& obj) { 
                    DARABONBA_PTR_TO_JSON(AvgBitrate, avgBitrate_);
                    DARABONBA_PTR_TO_JSON(CostBandwidth, costBandwidth_);
                    DARABONBA_PTR_TO_JSON(PreloadTime, preloadTime_);
                  };
                  friend void from_json(const Darabonba::Json& j, NetworkCost& obj) { 
                    DARABONBA_PTR_FROM_JSON(AvgBitrate, avgBitrate_);
                    DARABONBA_PTR_FROM_JSON(CostBandwidth, costBandwidth_);
                    DARABONBA_PTR_FROM_JSON(PreloadTime, preloadTime_);
                  };
                  NetworkCost() = default ;
                  NetworkCost(const NetworkCost &) = default ;
                  NetworkCost(NetworkCost &&) = default ;
                  NetworkCost(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~NetworkCost() = default ;
                  NetworkCost& operator=(const NetworkCost &) = default ;
                  NetworkCost& operator=(NetworkCost &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->avgBitrate_ == nullptr
        && this->costBandwidth_ == nullptr && this->preloadTime_ == nullptr; };
                  // avgBitrate Field Functions 
                  bool hasAvgBitrate() const { return this->avgBitrate_ != nullptr;};
                  void deleteAvgBitrate() { this->avgBitrate_ = nullptr;};
                  inline string getAvgBitrate() const { DARABONBA_PTR_GET_DEFAULT(avgBitrate_, "") };
                  inline NetworkCost& setAvgBitrate(string avgBitrate) { DARABONBA_PTR_SET_VALUE(avgBitrate_, avgBitrate) };


                  // costBandwidth Field Functions 
                  bool hasCostBandwidth() const { return this->costBandwidth_ != nullptr;};
                  void deleteCostBandwidth() { this->costBandwidth_ = nullptr;};
                  inline string getCostBandwidth() const { DARABONBA_PTR_GET_DEFAULT(costBandwidth_, "") };
                  inline NetworkCost& setCostBandwidth(string costBandwidth) { DARABONBA_PTR_SET_VALUE(costBandwidth_, costBandwidth) };


                  // preloadTime Field Functions 
                  bool hasPreloadTime() const { return this->preloadTime_ != nullptr;};
                  void deletePreloadTime() { this->preloadTime_ = nullptr;};
                  inline string getPreloadTime() const { DARABONBA_PTR_GET_DEFAULT(preloadTime_, "") };
                  inline NetworkCost& setPreloadTime(string preloadTime) { DARABONBA_PTR_SET_VALUE(preloadTime_, preloadTime) };


                protected:
                  shared_ptr<string> avgBitrate_ {};
                  shared_ptr<string> costBandwidth_ {};
                  shared_ptr<string> preloadTime_ {};
                };

                virtual bool empty() const override { return this->avgFPS_ == nullptr
        && this->bitrate_ == nullptr && this->codecLongName_ == nullptr && this->codecName_ == nullptr && this->codecTag_ == nullptr && this->codecTagString_ == nullptr
        && this->codecTimeBase_ == nullptr && this->dar_ == nullptr && this->duration_ == nullptr && this->fps_ == nullptr && this->hasBFrames_ == nullptr
        && this->height_ == nullptr && this->index_ == nullptr && this->lang_ == nullptr && this->level_ == nullptr && this->networkCost_ == nullptr
        && this->numFrames_ == nullptr && this->pixFmt_ == nullptr && this->profile_ == nullptr && this->rotate_ == nullptr && this->sar_ == nullptr
        && this->startTime_ == nullptr && this->timebase_ == nullptr && this->width_ == nullptr; };
                // avgFPS Field Functions 
                bool hasAvgFPS() const { return this->avgFPS_ != nullptr;};
                void deleteAvgFPS() { this->avgFPS_ = nullptr;};
                inline string getAvgFPS() const { DARABONBA_PTR_GET_DEFAULT(avgFPS_, "") };
                inline VideoStream& setAvgFPS(string avgFPS) { DARABONBA_PTR_SET_VALUE(avgFPS_, avgFPS) };


                // bitrate Field Functions 
                bool hasBitrate() const { return this->bitrate_ != nullptr;};
                void deleteBitrate() { this->bitrate_ = nullptr;};
                inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
                inline VideoStream& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


                // codecLongName Field Functions 
                bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
                void deleteCodecLongName() { this->codecLongName_ = nullptr;};
                inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
                inline VideoStream& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


                // codecName Field Functions 
                bool hasCodecName() const { return this->codecName_ != nullptr;};
                void deleteCodecName() { this->codecName_ = nullptr;};
                inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
                inline VideoStream& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


                // codecTag Field Functions 
                bool hasCodecTag() const { return this->codecTag_ != nullptr;};
                void deleteCodecTag() { this->codecTag_ = nullptr;};
                inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
                inline VideoStream& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


                // codecTagString Field Functions 
                bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
                void deleteCodecTagString() { this->codecTagString_ = nullptr;};
                inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
                inline VideoStream& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


                // codecTimeBase Field Functions 
                bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
                void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
                inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
                inline VideoStream& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


                // dar Field Functions 
                bool hasDar() const { return this->dar_ != nullptr;};
                void deleteDar() { this->dar_ = nullptr;};
                inline string getDar() const { DARABONBA_PTR_GET_DEFAULT(dar_, "") };
                inline VideoStream& setDar(string dar) { DARABONBA_PTR_SET_VALUE(dar_, dar) };


                // duration Field Functions 
                bool hasDuration() const { return this->duration_ != nullptr;};
                void deleteDuration() { this->duration_ = nullptr;};
                inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
                inline VideoStream& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


                // fps Field Functions 
                bool hasFps() const { return this->fps_ != nullptr;};
                void deleteFps() { this->fps_ = nullptr;};
                inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
                inline VideoStream& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


                // hasBFrames Field Functions 
                bool hasHasBFrames() const { return this->hasBFrames_ != nullptr;};
                void deleteHasBFrames() { this->hasBFrames_ = nullptr;};
                inline string getHasBFrames() const { DARABONBA_PTR_GET_DEFAULT(hasBFrames_, "") };
                inline VideoStream& setHasBFrames(string hasBFrames) { DARABONBA_PTR_SET_VALUE(hasBFrames_, hasBFrames) };


                // height Field Functions 
                bool hasHeight() const { return this->height_ != nullptr;};
                void deleteHeight() { this->height_ = nullptr;};
                inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
                inline VideoStream& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


                // index Field Functions 
                bool hasIndex() const { return this->index_ != nullptr;};
                void deleteIndex() { this->index_ = nullptr;};
                inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
                inline VideoStream& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


                // lang Field Functions 
                bool hasLang() const { return this->lang_ != nullptr;};
                void deleteLang() { this->lang_ = nullptr;};
                inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
                inline VideoStream& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


                // level Field Functions 
                bool hasLevel() const { return this->level_ != nullptr;};
                void deleteLevel() { this->level_ = nullptr;};
                inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
                inline VideoStream& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


                // networkCost Field Functions 
                bool hasNetworkCost() const { return this->networkCost_ != nullptr;};
                void deleteNetworkCost() { this->networkCost_ = nullptr;};
                inline const VideoStream::NetworkCost & getNetworkCost() const { DARABONBA_PTR_GET_CONST(networkCost_, VideoStream::NetworkCost) };
                inline VideoStream::NetworkCost getNetworkCost() { DARABONBA_PTR_GET(networkCost_, VideoStream::NetworkCost) };
                inline VideoStream& setNetworkCost(const VideoStream::NetworkCost & networkCost) { DARABONBA_PTR_SET_VALUE(networkCost_, networkCost) };
                inline VideoStream& setNetworkCost(VideoStream::NetworkCost && networkCost) { DARABONBA_PTR_SET_RVALUE(networkCost_, networkCost) };


                // numFrames Field Functions 
                bool hasNumFrames() const { return this->numFrames_ != nullptr;};
                void deleteNumFrames() { this->numFrames_ = nullptr;};
                inline string getNumFrames() const { DARABONBA_PTR_GET_DEFAULT(numFrames_, "") };
                inline VideoStream& setNumFrames(string numFrames) { DARABONBA_PTR_SET_VALUE(numFrames_, numFrames) };


                // pixFmt Field Functions 
                bool hasPixFmt() const { return this->pixFmt_ != nullptr;};
                void deletePixFmt() { this->pixFmt_ = nullptr;};
                inline string getPixFmt() const { DARABONBA_PTR_GET_DEFAULT(pixFmt_, "") };
                inline VideoStream& setPixFmt(string pixFmt) { DARABONBA_PTR_SET_VALUE(pixFmt_, pixFmt) };


                // profile Field Functions 
                bool hasProfile() const { return this->profile_ != nullptr;};
                void deleteProfile() { this->profile_ = nullptr;};
                inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
                inline VideoStream& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


                // rotate Field Functions 
                bool hasRotate() const { return this->rotate_ != nullptr;};
                void deleteRotate() { this->rotate_ = nullptr;};
                inline string getRotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, "") };
                inline VideoStream& setRotate(string rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


                // sar Field Functions 
                bool hasSar() const { return this->sar_ != nullptr;};
                void deleteSar() { this->sar_ = nullptr;};
                inline string getSar() const { DARABONBA_PTR_GET_DEFAULT(sar_, "") };
                inline VideoStream& setSar(string sar) { DARABONBA_PTR_SET_VALUE(sar_, sar) };


                // startTime Field Functions 
                bool hasStartTime() const { return this->startTime_ != nullptr;};
                void deleteStartTime() { this->startTime_ = nullptr;};
                inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
                inline VideoStream& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


                // timebase Field Functions 
                bool hasTimebase() const { return this->timebase_ != nullptr;};
                void deleteTimebase() { this->timebase_ = nullptr;};
                inline string getTimebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
                inline VideoStream& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


                // width Field Functions 
                bool hasWidth() const { return this->width_ != nullptr;};
                void deleteWidth() { this->width_ = nullptr;};
                inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
                inline VideoStream& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


              protected:
                shared_ptr<string> avgFPS_ {};
                shared_ptr<string> bitrate_ {};
                shared_ptr<string> codecLongName_ {};
                shared_ptr<string> codecName_ {};
                shared_ptr<string> codecTag_ {};
                shared_ptr<string> codecTagString_ {};
                shared_ptr<string> codecTimeBase_ {};
                shared_ptr<string> dar_ {};
                shared_ptr<string> duration_ {};
                shared_ptr<string> fps_ {};
                shared_ptr<string> hasBFrames_ {};
                shared_ptr<string> height_ {};
                shared_ptr<string> index_ {};
                shared_ptr<string> lang_ {};
                shared_ptr<string> level_ {};
                shared_ptr<VideoStream::NetworkCost> networkCost_ {};
                shared_ptr<string> numFrames_ {};
                shared_ptr<string> pixFmt_ {};
                shared_ptr<string> profile_ {};
                shared_ptr<string> rotate_ {};
                shared_ptr<string> sar_ {};
                shared_ptr<string> startTime_ {};
                shared_ptr<string> timebase_ {};
                shared_ptr<string> width_ {};
              };

              virtual bool empty() const override { return this->videoStream_ == nullptr; };
              // videoStream Field Functions 
              bool hasVideoStream() const { return this->videoStream_ != nullptr;};
              void deleteVideoStream() { this->videoStream_ = nullptr;};
              inline const vector<VideoStreamList::VideoStream> & getVideoStream() const { DARABONBA_PTR_GET_CONST(videoStream_, vector<VideoStreamList::VideoStream>) };
              inline vector<VideoStreamList::VideoStream> getVideoStream() { DARABONBA_PTR_GET(videoStream_, vector<VideoStreamList::VideoStream>) };
              inline VideoStreamList& setVideoStream(const vector<VideoStreamList::VideoStream> & videoStream) { DARABONBA_PTR_SET_VALUE(videoStream_, videoStream) };
              inline VideoStreamList& setVideoStream(vector<VideoStreamList::VideoStream> && videoStream) { DARABONBA_PTR_SET_RVALUE(videoStream_, videoStream) };


            protected:
              shared_ptr<vector<VideoStreamList::VideoStream>> videoStream_ {};
            };

            class SubtitleStreamList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SubtitleStreamList& obj) { 
                DARABONBA_PTR_TO_JSON(SubtitleStream, subtitleStream_);
              };
              friend void from_json(const Darabonba::Json& j, SubtitleStreamList& obj) { 
                DARABONBA_PTR_FROM_JSON(SubtitleStream, subtitleStream_);
              };
              SubtitleStreamList() = default ;
              SubtitleStreamList(const SubtitleStreamList &) = default ;
              SubtitleStreamList(SubtitleStreamList &&) = default ;
              SubtitleStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SubtitleStreamList() = default ;
              SubtitleStreamList& operator=(const SubtitleStreamList &) = default ;
              SubtitleStreamList& operator=(SubtitleStreamList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class SubtitleStream : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const SubtitleStream& obj) { 
                  DARABONBA_PTR_TO_JSON(Index, index_);
                  DARABONBA_PTR_TO_JSON(Lang, lang_);
                };
                friend void from_json(const Darabonba::Json& j, SubtitleStream& obj) { 
                  DARABONBA_PTR_FROM_JSON(Index, index_);
                  DARABONBA_PTR_FROM_JSON(Lang, lang_);
                };
                SubtitleStream() = default ;
                SubtitleStream(const SubtitleStream &) = default ;
                SubtitleStream(SubtitleStream &&) = default ;
                SubtitleStream(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~SubtitleStream() = default ;
                SubtitleStream& operator=(const SubtitleStream &) = default ;
                SubtitleStream& operator=(SubtitleStream &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->index_ == nullptr
        && this->lang_ == nullptr; };
                // index Field Functions 
                bool hasIndex() const { return this->index_ != nullptr;};
                void deleteIndex() { this->index_ = nullptr;};
                inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
                inline SubtitleStream& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


                // lang Field Functions 
                bool hasLang() const { return this->lang_ != nullptr;};
                void deleteLang() { this->lang_ = nullptr;};
                inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
                inline SubtitleStream& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


              protected:
                shared_ptr<string> index_ {};
                shared_ptr<string> lang_ {};
              };

              virtual bool empty() const override { return this->subtitleStream_ == nullptr; };
              // subtitleStream Field Functions 
              bool hasSubtitleStream() const { return this->subtitleStream_ != nullptr;};
              void deleteSubtitleStream() { this->subtitleStream_ = nullptr;};
              inline const vector<SubtitleStreamList::SubtitleStream> & getSubtitleStream() const { DARABONBA_PTR_GET_CONST(subtitleStream_, vector<SubtitleStreamList::SubtitleStream>) };
              inline vector<SubtitleStreamList::SubtitleStream> getSubtitleStream() { DARABONBA_PTR_GET(subtitleStream_, vector<SubtitleStreamList::SubtitleStream>) };
              inline SubtitleStreamList& setSubtitleStream(const vector<SubtitleStreamList::SubtitleStream> & subtitleStream) { DARABONBA_PTR_SET_VALUE(subtitleStream_, subtitleStream) };
              inline SubtitleStreamList& setSubtitleStream(vector<SubtitleStreamList::SubtitleStream> && subtitleStream) { DARABONBA_PTR_SET_RVALUE(subtitleStream_, subtitleStream) };


            protected:
              shared_ptr<vector<SubtitleStreamList::SubtitleStream>> subtitleStream_ {};
            };

            class AudioStreamList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const AudioStreamList& obj) { 
                DARABONBA_PTR_TO_JSON(AudioStream, audioStream_);
              };
              friend void from_json(const Darabonba::Json& j, AudioStreamList& obj) { 
                DARABONBA_PTR_FROM_JSON(AudioStream, audioStream_);
              };
              AudioStreamList() = default ;
              AudioStreamList(const AudioStreamList &) = default ;
              AudioStreamList(AudioStreamList &&) = default ;
              AudioStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~AudioStreamList() = default ;
              AudioStreamList& operator=(const AudioStreamList &) = default ;
              AudioStreamList& operator=(AudioStreamList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class AudioStream : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const AudioStream& obj) { 
                  DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
                  DARABONBA_PTR_TO_JSON(ChannelLayout, channelLayout_);
                  DARABONBA_PTR_TO_JSON(Channels, channels_);
                  DARABONBA_PTR_TO_JSON(CodecLongName, codecLongName_);
                  DARABONBA_PTR_TO_JSON(CodecName, codecName_);
                  DARABONBA_PTR_TO_JSON(CodecTag, codecTag_);
                  DARABONBA_PTR_TO_JSON(CodecTagString, codecTagString_);
                  DARABONBA_PTR_TO_JSON(CodecTimeBase, codecTimeBase_);
                  DARABONBA_PTR_TO_JSON(Duration, duration_);
                  DARABONBA_PTR_TO_JSON(Index, index_);
                  DARABONBA_PTR_TO_JSON(Lang, lang_);
                  DARABONBA_PTR_TO_JSON(NumFrames, numFrames_);
                  DARABONBA_PTR_TO_JSON(SampleFmt, sampleFmt_);
                  DARABONBA_PTR_TO_JSON(Samplerate, samplerate_);
                  DARABONBA_PTR_TO_JSON(StartTime, startTime_);
                  DARABONBA_PTR_TO_JSON(Timebase, timebase_);
                };
                friend void from_json(const Darabonba::Json& j, AudioStream& obj) { 
                  DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
                  DARABONBA_PTR_FROM_JSON(ChannelLayout, channelLayout_);
                  DARABONBA_PTR_FROM_JSON(Channels, channels_);
                  DARABONBA_PTR_FROM_JSON(CodecLongName, codecLongName_);
                  DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
                  DARABONBA_PTR_FROM_JSON(CodecTag, codecTag_);
                  DARABONBA_PTR_FROM_JSON(CodecTagString, codecTagString_);
                  DARABONBA_PTR_FROM_JSON(CodecTimeBase, codecTimeBase_);
                  DARABONBA_PTR_FROM_JSON(Duration, duration_);
                  DARABONBA_PTR_FROM_JSON(Index, index_);
                  DARABONBA_PTR_FROM_JSON(Lang, lang_);
                  DARABONBA_PTR_FROM_JSON(NumFrames, numFrames_);
                  DARABONBA_PTR_FROM_JSON(SampleFmt, sampleFmt_);
                  DARABONBA_PTR_FROM_JSON(Samplerate, samplerate_);
                  DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
                  DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
                };
                AudioStream() = default ;
                AudioStream(const AudioStream &) = default ;
                AudioStream(AudioStream &&) = default ;
                AudioStream(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~AudioStream() = default ;
                AudioStream& operator=(const AudioStream &) = default ;
                AudioStream& operator=(AudioStream &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->channelLayout_ == nullptr && this->channels_ == nullptr && this->codecLongName_ == nullptr && this->codecName_ == nullptr && this->codecTag_ == nullptr
        && this->codecTagString_ == nullptr && this->codecTimeBase_ == nullptr && this->duration_ == nullptr && this->index_ == nullptr && this->lang_ == nullptr
        && this->numFrames_ == nullptr && this->sampleFmt_ == nullptr && this->samplerate_ == nullptr && this->startTime_ == nullptr && this->timebase_ == nullptr; };
                // bitrate Field Functions 
                bool hasBitrate() const { return this->bitrate_ != nullptr;};
                void deleteBitrate() { this->bitrate_ = nullptr;};
                inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
                inline AudioStream& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


                // channelLayout Field Functions 
                bool hasChannelLayout() const { return this->channelLayout_ != nullptr;};
                void deleteChannelLayout() { this->channelLayout_ = nullptr;};
                inline string getChannelLayout() const { DARABONBA_PTR_GET_DEFAULT(channelLayout_, "") };
                inline AudioStream& setChannelLayout(string channelLayout) { DARABONBA_PTR_SET_VALUE(channelLayout_, channelLayout) };


                // channels Field Functions 
                bool hasChannels() const { return this->channels_ != nullptr;};
                void deleteChannels() { this->channels_ = nullptr;};
                inline string getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
                inline AudioStream& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


                // codecLongName Field Functions 
                bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
                void deleteCodecLongName() { this->codecLongName_ = nullptr;};
                inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
                inline AudioStream& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


                // codecName Field Functions 
                bool hasCodecName() const { return this->codecName_ != nullptr;};
                void deleteCodecName() { this->codecName_ = nullptr;};
                inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
                inline AudioStream& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


                // codecTag Field Functions 
                bool hasCodecTag() const { return this->codecTag_ != nullptr;};
                void deleteCodecTag() { this->codecTag_ = nullptr;};
                inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
                inline AudioStream& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


                // codecTagString Field Functions 
                bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
                void deleteCodecTagString() { this->codecTagString_ = nullptr;};
                inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
                inline AudioStream& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


                // codecTimeBase Field Functions 
                bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
                void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
                inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
                inline AudioStream& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


                // duration Field Functions 
                bool hasDuration() const { return this->duration_ != nullptr;};
                void deleteDuration() { this->duration_ = nullptr;};
                inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
                inline AudioStream& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


                // index Field Functions 
                bool hasIndex() const { return this->index_ != nullptr;};
                void deleteIndex() { this->index_ = nullptr;};
                inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
                inline AudioStream& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


                // lang Field Functions 
                bool hasLang() const { return this->lang_ != nullptr;};
                void deleteLang() { this->lang_ = nullptr;};
                inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
                inline AudioStream& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


                // numFrames Field Functions 
                bool hasNumFrames() const { return this->numFrames_ != nullptr;};
                void deleteNumFrames() { this->numFrames_ = nullptr;};
                inline string getNumFrames() const { DARABONBA_PTR_GET_DEFAULT(numFrames_, "") };
                inline AudioStream& setNumFrames(string numFrames) { DARABONBA_PTR_SET_VALUE(numFrames_, numFrames) };


                // sampleFmt Field Functions 
                bool hasSampleFmt() const { return this->sampleFmt_ != nullptr;};
                void deleteSampleFmt() { this->sampleFmt_ = nullptr;};
                inline string getSampleFmt() const { DARABONBA_PTR_GET_DEFAULT(sampleFmt_, "") };
                inline AudioStream& setSampleFmt(string sampleFmt) { DARABONBA_PTR_SET_VALUE(sampleFmt_, sampleFmt) };


                // samplerate Field Functions 
                bool hasSamplerate() const { return this->samplerate_ != nullptr;};
                void deleteSamplerate() { this->samplerate_ = nullptr;};
                inline string getSamplerate() const { DARABONBA_PTR_GET_DEFAULT(samplerate_, "") };
                inline AudioStream& setSamplerate(string samplerate) { DARABONBA_PTR_SET_VALUE(samplerate_, samplerate) };


                // startTime Field Functions 
                bool hasStartTime() const { return this->startTime_ != nullptr;};
                void deleteStartTime() { this->startTime_ = nullptr;};
                inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
                inline AudioStream& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


                // timebase Field Functions 
                bool hasTimebase() const { return this->timebase_ != nullptr;};
                void deleteTimebase() { this->timebase_ = nullptr;};
                inline string getTimebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
                inline AudioStream& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


              protected:
                shared_ptr<string> bitrate_ {};
                shared_ptr<string> channelLayout_ {};
                shared_ptr<string> channels_ {};
                shared_ptr<string> codecLongName_ {};
                shared_ptr<string> codecName_ {};
                shared_ptr<string> codecTag_ {};
                shared_ptr<string> codecTagString_ {};
                shared_ptr<string> codecTimeBase_ {};
                shared_ptr<string> duration_ {};
                shared_ptr<string> index_ {};
                shared_ptr<string> lang_ {};
                shared_ptr<string> numFrames_ {};
                shared_ptr<string> sampleFmt_ {};
                shared_ptr<string> samplerate_ {};
                shared_ptr<string> startTime_ {};
                shared_ptr<string> timebase_ {};
              };

              virtual bool empty() const override { return this->audioStream_ == nullptr; };
              // audioStream Field Functions 
              bool hasAudioStream() const { return this->audioStream_ != nullptr;};
              void deleteAudioStream() { this->audioStream_ = nullptr;};
              inline const vector<AudioStreamList::AudioStream> & getAudioStream() const { DARABONBA_PTR_GET_CONST(audioStream_, vector<AudioStreamList::AudioStream>) };
              inline vector<AudioStreamList::AudioStream> getAudioStream() { DARABONBA_PTR_GET(audioStream_, vector<AudioStreamList::AudioStream>) };
              inline AudioStreamList& setAudioStream(const vector<AudioStreamList::AudioStream> & audioStream) { DARABONBA_PTR_SET_VALUE(audioStream_, audioStream) };
              inline AudioStreamList& setAudioStream(vector<AudioStreamList::AudioStream> && audioStream) { DARABONBA_PTR_SET_RVALUE(audioStream_, audioStream) };


            protected:
              shared_ptr<vector<AudioStreamList::AudioStream>> audioStream_ {};
            };

            virtual bool empty() const override { return this->audioStreamList_ == nullptr
        && this->subtitleStreamList_ == nullptr && this->videoStreamList_ == nullptr; };
            // audioStreamList Field Functions 
            bool hasAudioStreamList() const { return this->audioStreamList_ != nullptr;};
            void deleteAudioStreamList() { this->audioStreamList_ = nullptr;};
            inline const Streams::AudioStreamList & getAudioStreamList() const { DARABONBA_PTR_GET_CONST(audioStreamList_, Streams::AudioStreamList) };
            inline Streams::AudioStreamList getAudioStreamList() { DARABONBA_PTR_GET(audioStreamList_, Streams::AudioStreamList) };
            inline Streams& setAudioStreamList(const Streams::AudioStreamList & audioStreamList) { DARABONBA_PTR_SET_VALUE(audioStreamList_, audioStreamList) };
            inline Streams& setAudioStreamList(Streams::AudioStreamList && audioStreamList) { DARABONBA_PTR_SET_RVALUE(audioStreamList_, audioStreamList) };


            // subtitleStreamList Field Functions 
            bool hasSubtitleStreamList() const { return this->subtitleStreamList_ != nullptr;};
            void deleteSubtitleStreamList() { this->subtitleStreamList_ = nullptr;};
            inline const Streams::SubtitleStreamList & getSubtitleStreamList() const { DARABONBA_PTR_GET_CONST(subtitleStreamList_, Streams::SubtitleStreamList) };
            inline Streams::SubtitleStreamList getSubtitleStreamList() { DARABONBA_PTR_GET(subtitleStreamList_, Streams::SubtitleStreamList) };
            inline Streams& setSubtitleStreamList(const Streams::SubtitleStreamList & subtitleStreamList) { DARABONBA_PTR_SET_VALUE(subtitleStreamList_, subtitleStreamList) };
            inline Streams& setSubtitleStreamList(Streams::SubtitleStreamList && subtitleStreamList) { DARABONBA_PTR_SET_RVALUE(subtitleStreamList_, subtitleStreamList) };


            // videoStreamList Field Functions 
            bool hasVideoStreamList() const { return this->videoStreamList_ != nullptr;};
            void deleteVideoStreamList() { this->videoStreamList_ = nullptr;};
            inline const Streams::VideoStreamList & getVideoStreamList() const { DARABONBA_PTR_GET_CONST(videoStreamList_, Streams::VideoStreamList) };
            inline Streams::VideoStreamList getVideoStreamList() { DARABONBA_PTR_GET(videoStreamList_, Streams::VideoStreamList) };
            inline Streams& setVideoStreamList(const Streams::VideoStreamList & videoStreamList) { DARABONBA_PTR_SET_VALUE(videoStreamList_, videoStreamList) };
            inline Streams& setVideoStreamList(Streams::VideoStreamList && videoStreamList) { DARABONBA_PTR_SET_RVALUE(videoStreamList_, videoStreamList) };


          protected:
            shared_ptr<Streams::AudioStreamList> audioStreamList_ {};
            shared_ptr<Streams::SubtitleStreamList> subtitleStreamList_ {};
            shared_ptr<Streams::VideoStreamList> videoStreamList_ {};
          };

          class Format : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Format& obj) { 
              DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
              DARABONBA_PTR_TO_JSON(Duration, duration_);
              DARABONBA_PTR_TO_JSON(FormatLongName, formatLongName_);
              DARABONBA_PTR_TO_JSON(FormatName, formatName_);
              DARABONBA_PTR_TO_JSON(NumPrograms, numPrograms_);
              DARABONBA_PTR_TO_JSON(NumStreams, numStreams_);
              DARABONBA_PTR_TO_JSON(Size, size_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            };
            friend void from_json(const Darabonba::Json& j, Format& obj) { 
              DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
              DARABONBA_PTR_FROM_JSON(Duration, duration_);
              DARABONBA_PTR_FROM_JSON(FormatLongName, formatLongName_);
              DARABONBA_PTR_FROM_JSON(FormatName, formatName_);
              DARABONBA_PTR_FROM_JSON(NumPrograms, numPrograms_);
              DARABONBA_PTR_FROM_JSON(NumStreams, numStreams_);
              DARABONBA_PTR_FROM_JSON(Size, size_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            };
            Format() = default ;
            Format(const Format &) = default ;
            Format(Format &&) = default ;
            Format(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Format() = default ;
            Format& operator=(const Format &) = default ;
            Format& operator=(Format &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->duration_ == nullptr && this->formatLongName_ == nullptr && this->formatName_ == nullptr && this->numPrograms_ == nullptr && this->numStreams_ == nullptr
        && this->size_ == nullptr && this->startTime_ == nullptr; };
            // bitrate Field Functions 
            bool hasBitrate() const { return this->bitrate_ != nullptr;};
            void deleteBitrate() { this->bitrate_ = nullptr;};
            inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
            inline Format& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


            // duration Field Functions 
            bool hasDuration() const { return this->duration_ != nullptr;};
            void deleteDuration() { this->duration_ = nullptr;};
            inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
            inline Format& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


            // formatLongName Field Functions 
            bool hasFormatLongName() const { return this->formatLongName_ != nullptr;};
            void deleteFormatLongName() { this->formatLongName_ = nullptr;};
            inline string getFormatLongName() const { DARABONBA_PTR_GET_DEFAULT(formatLongName_, "") };
            inline Format& setFormatLongName(string formatLongName) { DARABONBA_PTR_SET_VALUE(formatLongName_, formatLongName) };


            // formatName Field Functions 
            bool hasFormatName() const { return this->formatName_ != nullptr;};
            void deleteFormatName() { this->formatName_ = nullptr;};
            inline string getFormatName() const { DARABONBA_PTR_GET_DEFAULT(formatName_, "") };
            inline Format& setFormatName(string formatName) { DARABONBA_PTR_SET_VALUE(formatName_, formatName) };


            // numPrograms Field Functions 
            bool hasNumPrograms() const { return this->numPrograms_ != nullptr;};
            void deleteNumPrograms() { this->numPrograms_ = nullptr;};
            inline string getNumPrograms() const { DARABONBA_PTR_GET_DEFAULT(numPrograms_, "") };
            inline Format& setNumPrograms(string numPrograms) { DARABONBA_PTR_SET_VALUE(numPrograms_, numPrograms) };


            // numStreams Field Functions 
            bool hasNumStreams() const { return this->numStreams_ != nullptr;};
            void deleteNumStreams() { this->numStreams_ = nullptr;};
            inline string getNumStreams() const { DARABONBA_PTR_GET_DEFAULT(numStreams_, "") };
            inline Format& setNumStreams(string numStreams) { DARABONBA_PTR_SET_VALUE(numStreams_, numStreams) };


            // size Field Functions 
            bool hasSize() const { return this->size_ != nullptr;};
            void deleteSize() { this->size_ = nullptr;};
            inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
            inline Format& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline Format& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          protected:
            shared_ptr<string> bitrate_ {};
            shared_ptr<string> duration_ {};
            shared_ptr<string> formatLongName_ {};
            shared_ptr<string> formatName_ {};
            shared_ptr<string> numPrograms_ {};
            shared_ptr<string> numStreams_ {};
            shared_ptr<string> size_ {};
            shared_ptr<string> startTime_ {};
          };

          virtual bool empty() const override { return this->format_ == nullptr
        && this->streams_ == nullptr; };
          // format Field Functions 
          bool hasFormat() const { return this->format_ != nullptr;};
          void deleteFormat() { this->format_ = nullptr;};
          inline const MediaInfo::Format & getFormat() const { DARABONBA_PTR_GET_CONST(format_, MediaInfo::Format) };
          inline MediaInfo::Format getFormat() { DARABONBA_PTR_GET(format_, MediaInfo::Format) };
          inline MediaInfo& setFormat(const MediaInfo::Format & format) { DARABONBA_PTR_SET_VALUE(format_, format) };
          inline MediaInfo& setFormat(MediaInfo::Format && format) { DARABONBA_PTR_SET_RVALUE(format_, format) };


          // streams Field Functions 
          bool hasStreams() const { return this->streams_ != nullptr;};
          void deleteStreams() { this->streams_ = nullptr;};
          inline const MediaInfo::Streams & getStreams() const { DARABONBA_PTR_GET_CONST(streams_, MediaInfo::Streams) };
          inline MediaInfo::Streams getStreams() { DARABONBA_PTR_GET(streams_, MediaInfo::Streams) };
          inline MediaInfo& setStreams(const MediaInfo::Streams & streams) { DARABONBA_PTR_SET_VALUE(streams_, streams) };
          inline MediaInfo& setStreams(MediaInfo::Streams && streams) { DARABONBA_PTR_SET_RVALUE(streams_, streams) };


        protected:
          shared_ptr<MediaInfo::Format> format_ {};
          shared_ptr<MediaInfo::Streams> streams_ {};
        };

        class File : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const File& obj) { 
            DARABONBA_PTR_TO_JSON(State, state_);
            DARABONBA_PTR_TO_JSON(URL, URL_);
          };
          friend void from_json(const Darabonba::Json& j, File& obj) { 
            DARABONBA_PTR_FROM_JSON(State, state_);
            DARABONBA_PTR_FROM_JSON(URL, URL_);
          };
          File() = default ;
          File(const File &) = default ;
          File(File &&) = default ;
          File(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~File() = default ;
          File& operator=(const File &) = default ;
          File& operator=(File &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->state_ == nullptr
        && this->URL_ == nullptr; };
          // state Field Functions 
          bool hasState() const { return this->state_ != nullptr;};
          void deleteState() { this->state_ = nullptr;};
          inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
          inline File& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


          // URL Field Functions 
          bool hasURL() const { return this->URL_ != nullptr;};
          void deleteURL() { this->URL_ = nullptr;};
          inline string getURL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
          inline File& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


        protected:
          shared_ptr<string> state_ {};
          shared_ptr<string> URL_ {};
        };

        virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->cateId_ == nullptr && this->censorState_ == nullptr && this->coverURL_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr
        && this->duration_ == nullptr && this->file_ == nullptr && this->format_ == nullptr && this->fps_ == nullptr && this->height_ == nullptr
        && this->mediaId_ == nullptr && this->mediaInfo_ == nullptr && this->playList_ == nullptr && this->publishState_ == nullptr && this->runIdList_ == nullptr
        && this->size_ == nullptr && this->snapshotList_ == nullptr && this->summaryList_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr
        && this->width_ == nullptr; };
        // bitrate Field Functions 
        bool hasBitrate() const { return this->bitrate_ != nullptr;};
        void deleteBitrate() { this->bitrate_ = nullptr;};
        inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
        inline Media& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


        // cateId Field Functions 
        bool hasCateId() const { return this->cateId_ != nullptr;};
        void deleteCateId() { this->cateId_ = nullptr;};
        inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
        inline Media& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


        // censorState Field Functions 
        bool hasCensorState() const { return this->censorState_ != nullptr;};
        void deleteCensorState() { this->censorState_ = nullptr;};
        inline string getCensorState() const { DARABONBA_PTR_GET_DEFAULT(censorState_, "") };
        inline Media& setCensorState(string censorState) { DARABONBA_PTR_SET_VALUE(censorState_, censorState) };


        // coverURL Field Functions 
        bool hasCoverURL() const { return this->coverURL_ != nullptr;};
        void deleteCoverURL() { this->coverURL_ = nullptr;};
        inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
        inline Media& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Media& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Media& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline Media& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // file Field Functions 
        bool hasFile() const { return this->file_ != nullptr;};
        void deleteFile() { this->file_ = nullptr;};
        inline const Media::File & getFile() const { DARABONBA_PTR_GET_CONST(file_, Media::File) };
        inline Media::File getFile() { DARABONBA_PTR_GET(file_, Media::File) };
        inline Media& setFile(const Media::File & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
        inline Media& setFile(Media::File && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline Media& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // fps Field Functions 
        bool hasFps() const { return this->fps_ != nullptr;};
        void deleteFps() { this->fps_ = nullptr;};
        inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
        inline Media& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
        inline Media& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // mediaId Field Functions 
        bool hasMediaId() const { return this->mediaId_ != nullptr;};
        void deleteMediaId() { this->mediaId_ = nullptr;};
        inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
        inline Media& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


        // mediaInfo Field Functions 
        bool hasMediaInfo() const { return this->mediaInfo_ != nullptr;};
        void deleteMediaInfo() { this->mediaInfo_ = nullptr;};
        inline const Media::MediaInfo & getMediaInfo() const { DARABONBA_PTR_GET_CONST(mediaInfo_, Media::MediaInfo) };
        inline Media::MediaInfo getMediaInfo() { DARABONBA_PTR_GET(mediaInfo_, Media::MediaInfo) };
        inline Media& setMediaInfo(const Media::MediaInfo & mediaInfo) { DARABONBA_PTR_SET_VALUE(mediaInfo_, mediaInfo) };
        inline Media& setMediaInfo(Media::MediaInfo && mediaInfo) { DARABONBA_PTR_SET_RVALUE(mediaInfo_, mediaInfo) };


        // playList Field Functions 
        bool hasPlayList() const { return this->playList_ != nullptr;};
        void deletePlayList() { this->playList_ = nullptr;};
        inline const Media::PlayList & getPlayList() const { DARABONBA_PTR_GET_CONST(playList_, Media::PlayList) };
        inline Media::PlayList getPlayList() { DARABONBA_PTR_GET(playList_, Media::PlayList) };
        inline Media& setPlayList(const Media::PlayList & playList) { DARABONBA_PTR_SET_VALUE(playList_, playList) };
        inline Media& setPlayList(Media::PlayList && playList) { DARABONBA_PTR_SET_RVALUE(playList_, playList) };


        // publishState Field Functions 
        bool hasPublishState() const { return this->publishState_ != nullptr;};
        void deletePublishState() { this->publishState_ = nullptr;};
        inline string getPublishState() const { DARABONBA_PTR_GET_DEFAULT(publishState_, "") };
        inline Media& setPublishState(string publishState) { DARABONBA_PTR_SET_VALUE(publishState_, publishState) };


        // runIdList Field Functions 
        bool hasRunIdList() const { return this->runIdList_ != nullptr;};
        void deleteRunIdList() { this->runIdList_ = nullptr;};
        inline const Media::RunIdList & getRunIdList() const { DARABONBA_PTR_GET_CONST(runIdList_, Media::RunIdList) };
        inline Media::RunIdList getRunIdList() { DARABONBA_PTR_GET(runIdList_, Media::RunIdList) };
        inline Media& setRunIdList(const Media::RunIdList & runIdList) { DARABONBA_PTR_SET_VALUE(runIdList_, runIdList) };
        inline Media& setRunIdList(Media::RunIdList && runIdList) { DARABONBA_PTR_SET_RVALUE(runIdList_, runIdList) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
        inline Media& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // snapshotList Field Functions 
        bool hasSnapshotList() const { return this->snapshotList_ != nullptr;};
        void deleteSnapshotList() { this->snapshotList_ = nullptr;};
        inline const Media::SnapshotList & getSnapshotList() const { DARABONBA_PTR_GET_CONST(snapshotList_, Media::SnapshotList) };
        inline Media::SnapshotList getSnapshotList() { DARABONBA_PTR_GET(snapshotList_, Media::SnapshotList) };
        inline Media& setSnapshotList(const Media::SnapshotList & snapshotList) { DARABONBA_PTR_SET_VALUE(snapshotList_, snapshotList) };
        inline Media& setSnapshotList(Media::SnapshotList && snapshotList) { DARABONBA_PTR_SET_RVALUE(snapshotList_, snapshotList) };


        // summaryList Field Functions 
        bool hasSummaryList() const { return this->summaryList_ != nullptr;};
        void deleteSummaryList() { this->summaryList_ = nullptr;};
        inline const Media::SummaryList & getSummaryList() const { DARABONBA_PTR_GET_CONST(summaryList_, Media::SummaryList) };
        inline Media::SummaryList getSummaryList() { DARABONBA_PTR_GET(summaryList_, Media::SummaryList) };
        inline Media& setSummaryList(const Media::SummaryList & summaryList) { DARABONBA_PTR_SET_VALUE(summaryList_, summaryList) };
        inline Media& setSummaryList(Media::SummaryList && summaryList) { DARABONBA_PTR_SET_RVALUE(summaryList_, summaryList) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Media::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Media::Tags) };
        inline Media::Tags getTags() { DARABONBA_PTR_GET(tags_, Media::Tags) };
        inline Media& setTags(const Media::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Media& setTags(Media::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Media& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
        inline Media& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        shared_ptr<string> bitrate_ {};
        shared_ptr<int64_t> cateId_ {};
        shared_ptr<string> censorState_ {};
        shared_ptr<string> coverURL_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> duration_ {};
        shared_ptr<Media::File> file_ {};
        shared_ptr<string> format_ {};
        shared_ptr<string> fps_ {};
        shared_ptr<string> height_ {};
        shared_ptr<string> mediaId_ {};
        shared_ptr<Media::MediaInfo> mediaInfo_ {};
        shared_ptr<Media::PlayList> playList_ {};
        shared_ptr<string> publishState_ {};
        shared_ptr<Media::RunIdList> runIdList_ {};
        shared_ptr<string> size_ {};
        shared_ptr<Media::SnapshotList> snapshotList_ {};
        shared_ptr<Media::SummaryList> summaryList_ {};
        shared_ptr<Media::Tags> tags_ {};
        shared_ptr<string> title_ {};
        shared_ptr<string> width_ {};
      };

      virtual bool empty() const override { return this->media_ == nullptr; };
      // media Field Functions 
      bool hasMedia() const { return this->media_ != nullptr;};
      void deleteMedia() { this->media_ = nullptr;};
      inline const vector<MediaList::Media> & getMedia() const { DARABONBA_PTR_GET_CONST(media_, vector<MediaList::Media>) };
      inline vector<MediaList::Media> getMedia() { DARABONBA_PTR_GET(media_, vector<MediaList::Media>) };
      inline MediaList& setMedia(const vector<MediaList::Media> & media) { DARABONBA_PTR_SET_VALUE(media_, media) };
      inline MediaList& setMedia(vector<MediaList::Media> && media) { DARABONBA_PTR_SET_RVALUE(media_, media) };


    protected:
      shared_ptr<vector<MediaList::Media>> media_ {};
    };

    virtual bool empty() const override { return this->mediaList_ == nullptr
        && this->nonExistMediaIds_ == nullptr && this->requestId_ == nullptr; };
    // mediaList Field Functions 
    bool hasMediaList() const { return this->mediaList_ != nullptr;};
    void deleteMediaList() { this->mediaList_ = nullptr;};
    inline const QueryMediaListResponseBody::MediaList & getMediaList() const { DARABONBA_PTR_GET_CONST(mediaList_, QueryMediaListResponseBody::MediaList) };
    inline QueryMediaListResponseBody::MediaList getMediaList() { DARABONBA_PTR_GET(mediaList_, QueryMediaListResponseBody::MediaList) };
    inline QueryMediaListResponseBody& setMediaList(const QueryMediaListResponseBody::MediaList & mediaList) { DARABONBA_PTR_SET_VALUE(mediaList_, mediaList) };
    inline QueryMediaListResponseBody& setMediaList(QueryMediaListResponseBody::MediaList && mediaList) { DARABONBA_PTR_SET_RVALUE(mediaList_, mediaList) };


    // nonExistMediaIds Field Functions 
    bool hasNonExistMediaIds() const { return this->nonExistMediaIds_ != nullptr;};
    void deleteNonExistMediaIds() { this->nonExistMediaIds_ = nullptr;};
    inline const QueryMediaListResponseBody::NonExistMediaIds & getNonExistMediaIds() const { DARABONBA_PTR_GET_CONST(nonExistMediaIds_, QueryMediaListResponseBody::NonExistMediaIds) };
    inline QueryMediaListResponseBody::NonExistMediaIds getNonExistMediaIds() { DARABONBA_PTR_GET(nonExistMediaIds_, QueryMediaListResponseBody::NonExistMediaIds) };
    inline QueryMediaListResponseBody& setNonExistMediaIds(const QueryMediaListResponseBody::NonExistMediaIds & nonExistMediaIds) { DARABONBA_PTR_SET_VALUE(nonExistMediaIds_, nonExistMediaIds) };
    inline QueryMediaListResponseBody& setNonExistMediaIds(QueryMediaListResponseBody::NonExistMediaIds && nonExistMediaIds) { DARABONBA_PTR_SET_RVALUE(nonExistMediaIds_, nonExistMediaIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMediaListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryMediaListResponseBody::MediaList> mediaList_ {};
    shared_ptr<QueryMediaListResponseBody::NonExistMediaIds> nonExistMediaIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif

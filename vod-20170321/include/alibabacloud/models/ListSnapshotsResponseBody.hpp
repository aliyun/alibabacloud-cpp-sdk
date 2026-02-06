// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSNAPSHOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSNAPSHOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListSnapshotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaSnapshot, mediaSnapshot_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaSnapshot, mediaSnapshot_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSnapshotsResponseBody() = default ;
    ListSnapshotsResponseBody(const ListSnapshotsResponseBody &) = default ;
    ListSnapshotsResponseBody(ListSnapshotsResponseBody &&) = default ;
    ListSnapshotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSnapshotsResponseBody() = default ;
    ListSnapshotsResponseBody& operator=(const ListSnapshotsResponseBody &) = default ;
    ListSnapshotsResponseBody& operator=(ListSnapshotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaSnapshot : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaSnapshot& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Regular, regular_);
        DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, MediaSnapshot& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Regular, regular_);
        DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      MediaSnapshot() = default ;
      MediaSnapshot(const MediaSnapshot &) = default ;
      MediaSnapshot(MediaSnapshot &&) = default ;
      MediaSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaSnapshot() = default ;
      MediaSnapshot& operator=(const MediaSnapshot &) = default ;
      MediaSnapshot& operator=(MediaSnapshot &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Snapshots : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Snapshots& obj) { 
          DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
        };
        friend void from_json(const Darabonba::Json& j, Snapshots& obj) { 
          DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
        };
        Snapshots() = default ;
        Snapshots(const Snapshots &) = default ;
        Snapshots(Snapshots &&) = default ;
        Snapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Snapshots() = default ;
        Snapshots& operator=(const Snapshots &) = default ;
        Snapshots& operator=(Snapshots &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Snapshot : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Snapshot& obj) { 
            DARABONBA_PTR_TO_JSON(Index, index_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Snapshot& obj) { 
            DARABONBA_PTR_FROM_JSON(Index, index_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
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
          virtual bool empty() const override { return this->index_ == nullptr
        && this->url_ == nullptr; };
          // index Field Functions 
          bool hasIndex() const { return this->index_ != nullptr;};
          void deleteIndex() { this->index_ = nullptr;};
          inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
          inline Snapshot& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Snapshot& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          // The index of the snapshot.
          shared_ptr<int64_t> index_ {};
          // The URL of the snapshot.
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->snapshot_ == nullptr; };
        // snapshot Field Functions 
        bool hasSnapshot() const { return this->snapshot_ != nullptr;};
        void deleteSnapshot() { this->snapshot_ = nullptr;};
        inline const vector<Snapshots::Snapshot> & getSnapshot() const { DARABONBA_PTR_GET_CONST(snapshot_, vector<Snapshots::Snapshot>) };
        inline vector<Snapshots::Snapshot> getSnapshot() { DARABONBA_PTR_GET(snapshot_, vector<Snapshots::Snapshot>) };
        inline Snapshots& setSnapshot(const vector<Snapshots::Snapshot> & snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };
        inline Snapshots& setSnapshot(vector<Snapshots::Snapshot> && snapshot) { DARABONBA_PTR_SET_RVALUE(snapshot_, snapshot) };


      protected:
        shared_ptr<vector<Snapshots::Snapshot>> snapshot_ {};
      };

      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->jobId_ == nullptr && this->regular_ == nullptr && this->snapshots_ == nullptr && this->total_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline MediaSnapshot& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline MediaSnapshot& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // regular Field Functions 
      bool hasRegular() const { return this->regular_ != nullptr;};
      void deleteRegular() { this->regular_ = nullptr;};
      inline string getRegular() const { DARABONBA_PTR_GET_DEFAULT(regular_, "") };
      inline MediaSnapshot& setRegular(string regular) { DARABONBA_PTR_SET_VALUE(regular_, regular) };


      // snapshots Field Functions 
      bool hasSnapshots() const { return this->snapshots_ != nullptr;};
      void deleteSnapshots() { this->snapshots_ = nullptr;};
      inline const MediaSnapshot::Snapshots & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, MediaSnapshot::Snapshots) };
      inline MediaSnapshot::Snapshots getSnapshots() { DARABONBA_PTR_GET(snapshots_, MediaSnapshot::Snapshots) };
      inline MediaSnapshot& setSnapshots(const MediaSnapshot::Snapshots & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
      inline MediaSnapshot& setSnapshots(MediaSnapshot::Snapshots && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline MediaSnapshot& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The time when the snapshot job was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The ID of the snapshot job.
      shared_ptr<string> jobId_ {};
      // The rule used to generate snapshot URLs.
      shared_ptr<string> regular_ {};
      // The details of the snapshot.
      shared_ptr<MediaSnapshot::Snapshots> snapshots_ {};
      // The total number of snapshots.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->mediaSnapshot_ == nullptr
        && this->requestId_ == nullptr; };
    // mediaSnapshot Field Functions 
    bool hasMediaSnapshot() const { return this->mediaSnapshot_ != nullptr;};
    void deleteMediaSnapshot() { this->mediaSnapshot_ = nullptr;};
    inline const ListSnapshotsResponseBody::MediaSnapshot & getMediaSnapshot() const { DARABONBA_PTR_GET_CONST(mediaSnapshot_, ListSnapshotsResponseBody::MediaSnapshot) };
    inline ListSnapshotsResponseBody::MediaSnapshot getMediaSnapshot() { DARABONBA_PTR_GET(mediaSnapshot_, ListSnapshotsResponseBody::MediaSnapshot) };
    inline ListSnapshotsResponseBody& setMediaSnapshot(const ListSnapshotsResponseBody::MediaSnapshot & mediaSnapshot) { DARABONBA_PTR_SET_VALUE(mediaSnapshot_, mediaSnapshot) };
    inline ListSnapshotsResponseBody& setMediaSnapshot(ListSnapshotsResponseBody::MediaSnapshot && mediaSnapshot) { DARABONBA_PTR_SET_RVALUE(mediaSnapshot_, mediaSnapshot) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSnapshotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the snapshot.
    shared_ptr<ListSnapshotsResponseBody::MediaSnapshot> mediaSnapshot_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLIVEDOMAINMULTISTREAMLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYLIVEDOMAINMULTISTREAMLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class QueryLiveDomainMultiStreamListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLiveDomainMultiStreamListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OnlineStreams, onlineStreams_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLiveDomainMultiStreamListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OnlineStreams, onlineStreams_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryLiveDomainMultiStreamListResponseBody() = default ;
    QueryLiveDomainMultiStreamListResponseBody(const QueryLiveDomainMultiStreamListResponseBody &) = default ;
    QueryLiveDomainMultiStreamListResponseBody(QueryLiveDomainMultiStreamListResponseBody &&) = default ;
    QueryLiveDomainMultiStreamListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLiveDomainMultiStreamListResponseBody() = default ;
    QueryLiveDomainMultiStreamListResponseBody& operator=(const QueryLiveDomainMultiStreamListResponseBody &) = default ;
    QueryLiveDomainMultiStreamListResponseBody& operator=(QueryLiveDomainMultiStreamListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OnlineStreams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OnlineStreams& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(ChangeLogs, changeLogs_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(OptimalMode, optimalMode_);
        DARABONBA_PTR_TO_JSON(StreamName, streamName_);
        DARABONBA_PTR_TO_JSON(UpstreamList, upstreamList_);
      };
      friend void from_json(const Darabonba::Json& j, OnlineStreams& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(ChangeLogs, changeLogs_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(OptimalMode, optimalMode_);
        DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
        DARABONBA_PTR_FROM_JSON(UpstreamList, upstreamList_);
      };
      OnlineStreams() = default ;
      OnlineStreams(const OnlineStreams &) = default ;
      OnlineStreams(OnlineStreams &&) = default ;
      OnlineStreams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OnlineStreams() = default ;
      OnlineStreams& operator=(const OnlineStreams &) = default ;
      OnlineStreams& operator=(OnlineStreams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UpstreamList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UpstreamList& obj) { 
          DARABONBA_PTR_TO_JSON(MasterFlag, masterFlag_);
          DARABONBA_PTR_TO_JSON(UpstreamIp, upstreamIp_);
          DARABONBA_PTR_TO_JSON(UpstreamSequence, upstreamSequence_);
          DARABONBA_PTR_TO_JSON(UpstreamTime, upstreamTime_);
        };
        friend void from_json(const Darabonba::Json& j, UpstreamList& obj) { 
          DARABONBA_PTR_FROM_JSON(MasterFlag, masterFlag_);
          DARABONBA_PTR_FROM_JSON(UpstreamIp, upstreamIp_);
          DARABONBA_PTR_FROM_JSON(UpstreamSequence, upstreamSequence_);
          DARABONBA_PTR_FROM_JSON(UpstreamTime, upstreamTime_);
        };
        UpstreamList() = default ;
        UpstreamList(const UpstreamList &) = default ;
        UpstreamList(UpstreamList &&) = default ;
        UpstreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UpstreamList() = default ;
        UpstreamList& operator=(const UpstreamList &) = default ;
        UpstreamList& operator=(UpstreamList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->masterFlag_ == nullptr
        && this->upstreamIp_ == nullptr && this->upstreamSequence_ == nullptr && this->upstreamTime_ == nullptr; };
        // masterFlag Field Functions 
        bool hasMasterFlag() const { return this->masterFlag_ != nullptr;};
        void deleteMasterFlag() { this->masterFlag_ = nullptr;};
        inline bool getMasterFlag() const { DARABONBA_PTR_GET_DEFAULT(masterFlag_, false) };
        inline UpstreamList& setMasterFlag(bool masterFlag) { DARABONBA_PTR_SET_VALUE(masterFlag_, masterFlag) };


        // upstreamIp Field Functions 
        bool hasUpstreamIp() const { return this->upstreamIp_ != nullptr;};
        void deleteUpstreamIp() { this->upstreamIp_ = nullptr;};
        inline string getUpstreamIp() const { DARABONBA_PTR_GET_DEFAULT(upstreamIp_, "") };
        inline UpstreamList& setUpstreamIp(string upstreamIp) { DARABONBA_PTR_SET_VALUE(upstreamIp_, upstreamIp) };


        // upstreamSequence Field Functions 
        bool hasUpstreamSequence() const { return this->upstreamSequence_ != nullptr;};
        void deleteUpstreamSequence() { this->upstreamSequence_ = nullptr;};
        inline string getUpstreamSequence() const { DARABONBA_PTR_GET_DEFAULT(upstreamSequence_, "") };
        inline UpstreamList& setUpstreamSequence(string upstreamSequence) { DARABONBA_PTR_SET_VALUE(upstreamSequence_, upstreamSequence) };


        // upstreamTime Field Functions 
        bool hasUpstreamTime() const { return this->upstreamTime_ != nullptr;};
        void deleteUpstreamTime() { this->upstreamTime_ = nullptr;};
        inline string getUpstreamTime() const { DARABONBA_PTR_GET_DEFAULT(upstreamTime_, "") };
        inline UpstreamList& setUpstreamTime(string upstreamTime) { DARABONBA_PTR_SET_VALUE(upstreamTime_, upstreamTime) };


      protected:
        // The active/standby tag.
        // 
        // >  This parameter indicates whether the active or standby stream is being distributed.
        // 
        // Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> masterFlag_ {};
        // The IP address of the stream ingest client.
        shared_ptr<string> upstreamIp_ {};
        // The unique identifier of the stream ingest.
        shared_ptr<string> upstreamSequence_ {};
        // The stream ingest time.
        shared_ptr<string> upstreamTime_ {};
      };

      class ChangeLogs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChangeLogs& obj) { 
          DARABONBA_PTR_TO_JSON(ChangeReason, changeReason_);
          DARABONBA_PTR_TO_JSON(ChangeTime, changeTime_);
          DARABONBA_PTR_TO_JSON(MasterUpstream, masterUpstream_);
          DARABONBA_PTR_TO_JSON(UpstreamIp, upstreamIp_);
          DARABONBA_PTR_TO_JSON(UpstreamSequence, upstreamSequence_);
        };
        friend void from_json(const Darabonba::Json& j, ChangeLogs& obj) { 
          DARABONBA_PTR_FROM_JSON(ChangeReason, changeReason_);
          DARABONBA_PTR_FROM_JSON(ChangeTime, changeTime_);
          DARABONBA_PTR_FROM_JSON(MasterUpstream, masterUpstream_);
          DARABONBA_PTR_FROM_JSON(UpstreamIp, upstreamIp_);
          DARABONBA_PTR_FROM_JSON(UpstreamSequence, upstreamSequence_);
        };
        ChangeLogs() = default ;
        ChangeLogs(const ChangeLogs &) = default ;
        ChangeLogs(ChangeLogs &&) = default ;
        ChangeLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChangeLogs() = default ;
        ChangeLogs& operator=(const ChangeLogs &) = default ;
        ChangeLogs& operator=(ChangeLogs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->changeReason_ == nullptr
        && this->changeTime_ == nullptr && this->masterUpstream_ == nullptr && this->upstreamIp_ == nullptr && this->upstreamSequence_ == nullptr; };
        // changeReason Field Functions 
        bool hasChangeReason() const { return this->changeReason_ != nullptr;};
        void deleteChangeReason() { this->changeReason_ = nullptr;};
        inline string getChangeReason() const { DARABONBA_PTR_GET_DEFAULT(changeReason_, "") };
        inline ChangeLogs& setChangeReason(string changeReason) { DARABONBA_PTR_SET_VALUE(changeReason_, changeReason) };


        // changeTime Field Functions 
        bool hasChangeTime() const { return this->changeTime_ != nullptr;};
        void deleteChangeTime() { this->changeTime_ = nullptr;};
        inline string getChangeTime() const { DARABONBA_PTR_GET_DEFAULT(changeTime_, "") };
        inline ChangeLogs& setChangeTime(string changeTime) { DARABONBA_PTR_SET_VALUE(changeTime_, changeTime) };


        // masterUpstream Field Functions 
        bool hasMasterUpstream() const { return this->masterUpstream_ != nullptr;};
        void deleteMasterUpstream() { this->masterUpstream_ = nullptr;};
        inline string getMasterUpstream() const { DARABONBA_PTR_GET_DEFAULT(masterUpstream_, "") };
        inline ChangeLogs& setMasterUpstream(string masterUpstream) { DARABONBA_PTR_SET_VALUE(masterUpstream_, masterUpstream) };


        // upstreamIp Field Functions 
        bool hasUpstreamIp() const { return this->upstreamIp_ != nullptr;};
        void deleteUpstreamIp() { this->upstreamIp_ = nullptr;};
        inline string getUpstreamIp() const { DARABONBA_PTR_GET_DEFAULT(upstreamIp_, "") };
        inline ChangeLogs& setUpstreamIp(string upstreamIp) { DARABONBA_PTR_SET_VALUE(upstreamIp_, upstreamIp) };


        // upstreamSequence Field Functions 
        bool hasUpstreamSequence() const { return this->upstreamSequence_ != nullptr;};
        void deleteUpstreamSequence() { this->upstreamSequence_ = nullptr;};
        inline string getUpstreamSequence() const { DARABONBA_PTR_GET_DEFAULT(upstreamSequence_, "") };
        inline ChangeLogs& setUpstreamSequence(string upstreamSequence) { DARABONBA_PTR_SET_VALUE(upstreamSequence_, upstreamSequence) };


      protected:
        // The reason for the switchover.
        // 
        // *   merge cut manually: You proactively switched the stream.
        // *   master stream no data: No data is available in the active stream.
        // *   master stream low quality: The quality of the active stream deteriorated.
        shared_ptr<string> changeReason_ {};
        // The switchover time.
        shared_ptr<string> changeTime_ {};
        // The stream used after the switchover.
        shared_ptr<string> masterUpstream_ {};
        // The IP address used after the switchover.
        shared_ptr<string> upstreamIp_ {};
        // The identifier of the stream after the switchover.
        shared_ptr<string> upstreamSequence_ {};
      };

      virtual bool empty() const override { return this->appName_ == nullptr
        && this->changeLogs_ == nullptr && this->domain_ == nullptr && this->optimalMode_ == nullptr && this->streamName_ == nullptr && this->upstreamList_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline OnlineStreams& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // changeLogs Field Functions 
      bool hasChangeLogs() const { return this->changeLogs_ != nullptr;};
      void deleteChangeLogs() { this->changeLogs_ = nullptr;};
      inline const vector<OnlineStreams::ChangeLogs> & getChangeLogs() const { DARABONBA_PTR_GET_CONST(changeLogs_, vector<OnlineStreams::ChangeLogs>) };
      inline vector<OnlineStreams::ChangeLogs> getChangeLogs() { DARABONBA_PTR_GET(changeLogs_, vector<OnlineStreams::ChangeLogs>) };
      inline OnlineStreams& setChangeLogs(const vector<OnlineStreams::ChangeLogs> & changeLogs) { DARABONBA_PTR_SET_VALUE(changeLogs_, changeLogs) };
      inline OnlineStreams& setChangeLogs(vector<OnlineStreams::ChangeLogs> && changeLogs) { DARABONBA_PTR_SET_RVALUE(changeLogs_, changeLogs) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline OnlineStreams& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // optimalMode Field Functions 
      bool hasOptimalMode() const { return this->optimalMode_ != nullptr;};
      void deleteOptimalMode() { this->optimalMode_ = nullptr;};
      inline string getOptimalMode() const { DARABONBA_PTR_GET_DEFAULT(optimalMode_, "") };
      inline OnlineStreams& setOptimalMode(string optimalMode) { DARABONBA_PTR_SET_VALUE(optimalMode_, optimalMode) };


      // streamName Field Functions 
      bool hasStreamName() const { return this->streamName_ != nullptr;};
      void deleteStreamName() { this->streamName_ = nullptr;};
      inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
      inline OnlineStreams& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


      // upstreamList Field Functions 
      bool hasUpstreamList() const { return this->upstreamList_ != nullptr;};
      void deleteUpstreamList() { this->upstreamList_ = nullptr;};
      inline const vector<OnlineStreams::UpstreamList> & getUpstreamList() const { DARABONBA_PTR_GET_CONST(upstreamList_, vector<OnlineStreams::UpstreamList>) };
      inline vector<OnlineStreams::UpstreamList> getUpstreamList() { DARABONBA_PTR_GET(upstreamList_, vector<OnlineStreams::UpstreamList>) };
      inline OnlineStreams& setUpstreamList(const vector<OnlineStreams::UpstreamList> & upstreamList) { DARABONBA_PTR_SET_VALUE(upstreamList_, upstreamList) };
      inline OnlineStreams& setUpstreamList(vector<OnlineStreams::UpstreamList> && upstreamList) { DARABONBA_PTR_SET_RVALUE(upstreamList_, upstreamList) };


    protected:
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The switchover records.
      shared_ptr<vector<OnlineStreams::ChangeLogs>> changeLogs_ {};
      // The main streaming domain.
      shared_ptr<string> domain_ {};
      // Indicates whether the dual-stream disaster recovery feature is enabled. Valid values:
      // 
      // *   **on**: enabled
      // *   **off**: disabled
      shared_ptr<string> optimalMode_ {};
      // The name of the live stream.
      shared_ptr<string> streamName_ {};
      // The standby streams.
      shared_ptr<vector<OnlineStreams::UpstreamList>> upstreamList_ {};
    };

    virtual bool empty() const override { return this->onlineStreams_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // onlineStreams Field Functions 
    bool hasOnlineStreams() const { return this->onlineStreams_ != nullptr;};
    void deleteOnlineStreams() { this->onlineStreams_ = nullptr;};
    inline const vector<QueryLiveDomainMultiStreamListResponseBody::OnlineStreams> & getOnlineStreams() const { DARABONBA_PTR_GET_CONST(onlineStreams_, vector<QueryLiveDomainMultiStreamListResponseBody::OnlineStreams>) };
    inline vector<QueryLiveDomainMultiStreamListResponseBody::OnlineStreams> getOnlineStreams() { DARABONBA_PTR_GET(onlineStreams_, vector<QueryLiveDomainMultiStreamListResponseBody::OnlineStreams>) };
    inline QueryLiveDomainMultiStreamListResponseBody& setOnlineStreams(const vector<QueryLiveDomainMultiStreamListResponseBody::OnlineStreams> & onlineStreams) { DARABONBA_PTR_SET_VALUE(onlineStreams_, onlineStreams) };
    inline QueryLiveDomainMultiStreamListResponseBody& setOnlineStreams(vector<QueryLiveDomainMultiStreamListResponseBody::OnlineStreams> && onlineStreams) { DARABONBA_PTR_SET_RVALUE(onlineStreams_, onlineStreams) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryLiveDomainMultiStreamListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryLiveDomainMultiStreamListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryLiveDomainMultiStreamListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryLiveDomainMultiStreamListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The online streams returned.
    shared_ptr<vector<QueryLiveDomainMultiStreamListResponseBody::OnlineStreams>> onlineStreams_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

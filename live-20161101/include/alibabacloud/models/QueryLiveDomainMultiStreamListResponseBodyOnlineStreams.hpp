// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLIVEDOMAINMULTISTREAMLISTRESPONSEBODYONLINESTREAMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYLIVEDOMAINMULTISTREAMLISTRESPONSEBODYONLINESTREAMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs.hpp>
#include <alibabacloud/models/QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class QueryLiveDomainMultiStreamListResponseBodyOnlineStreams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLiveDomainMultiStreamListResponseBodyOnlineStreams& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ChangeLogs, changeLogs_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(OptimalMode, optimalMode_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(UpstreamList, upstreamList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLiveDomainMultiStreamListResponseBodyOnlineStreams& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ChangeLogs, changeLogs_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(OptimalMode, optimalMode_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(UpstreamList, upstreamList_);
    };
    QueryLiveDomainMultiStreamListResponseBodyOnlineStreams() = default ;
    QueryLiveDomainMultiStreamListResponseBodyOnlineStreams(const QueryLiveDomainMultiStreamListResponseBodyOnlineStreams &) = default ;
    QueryLiveDomainMultiStreamListResponseBodyOnlineStreams(QueryLiveDomainMultiStreamListResponseBodyOnlineStreams &&) = default ;
    QueryLiveDomainMultiStreamListResponseBodyOnlineStreams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLiveDomainMultiStreamListResponseBodyOnlineStreams() = default ;
    QueryLiveDomainMultiStreamListResponseBodyOnlineStreams& operator=(const QueryLiveDomainMultiStreamListResponseBodyOnlineStreams &) = default ;
    QueryLiveDomainMultiStreamListResponseBodyOnlineStreams& operator=(QueryLiveDomainMultiStreamListResponseBodyOnlineStreams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->changeLogs_ != nullptr && this->domain_ != nullptr && this->optimalMode_ != nullptr && this->streamName_ != nullptr && this->upstreamList_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline QueryLiveDomainMultiStreamListResponseBodyOnlineStreams& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // changeLogs Field Functions 
    bool hasChangeLogs() const { return this->changeLogs_ != nullptr;};
    void deleteChangeLogs() { this->changeLogs_ = nullptr;};
    inline const vector<Models::QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs> & changeLogs() const { DARABONBA_PTR_GET_CONST(changeLogs_, vector<Models::QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs>) };
    inline vector<Models::QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs> changeLogs() { DARABONBA_PTR_GET(changeLogs_, vector<Models::QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs>) };
    inline QueryLiveDomainMultiStreamListResponseBodyOnlineStreams& setChangeLogs(const vector<Models::QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs> & changeLogs) { DARABONBA_PTR_SET_VALUE(changeLogs_, changeLogs) };
    inline QueryLiveDomainMultiStreamListResponseBodyOnlineStreams& setChangeLogs(vector<Models::QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs> && changeLogs) { DARABONBA_PTR_SET_RVALUE(changeLogs_, changeLogs) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline QueryLiveDomainMultiStreamListResponseBodyOnlineStreams& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // optimalMode Field Functions 
    bool hasOptimalMode() const { return this->optimalMode_ != nullptr;};
    void deleteOptimalMode() { this->optimalMode_ = nullptr;};
    inline string optimalMode() const { DARABONBA_PTR_GET_DEFAULT(optimalMode_, "") };
    inline QueryLiveDomainMultiStreamListResponseBodyOnlineStreams& setOptimalMode(string optimalMode) { DARABONBA_PTR_SET_VALUE(optimalMode_, optimalMode) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline QueryLiveDomainMultiStreamListResponseBodyOnlineStreams& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // upstreamList Field Functions 
    bool hasUpstreamList() const { return this->upstreamList_ != nullptr;};
    void deleteUpstreamList() { this->upstreamList_ = nullptr;};
    inline const vector<Models::QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList> & upstreamList() const { DARABONBA_PTR_GET_CONST(upstreamList_, vector<Models::QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList>) };
    inline vector<Models::QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList> upstreamList() { DARABONBA_PTR_GET(upstreamList_, vector<Models::QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList>) };
    inline QueryLiveDomainMultiStreamListResponseBodyOnlineStreams& setUpstreamList(const vector<Models::QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList> & upstreamList) { DARABONBA_PTR_SET_VALUE(upstreamList_, upstreamList) };
    inline QueryLiveDomainMultiStreamListResponseBodyOnlineStreams& setUpstreamList(vector<Models::QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList> && upstreamList) { DARABONBA_PTR_SET_RVALUE(upstreamList_, upstreamList) };


  protected:
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The switchover records.
    std::shared_ptr<vector<Models::QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs>> changeLogs_ = nullptr;
    // The main streaming domain.
    std::shared_ptr<string> domain_ = nullptr;
    // Indicates whether the dual-stream disaster recovery feature is enabled. Valid values:
    // 
    // *   **on**: enabled
    // *   **off**: disabled
    std::shared_ptr<string> optimalMode_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // The standby streams.
    std::shared_ptr<vector<Models::QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList>> upstreamList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

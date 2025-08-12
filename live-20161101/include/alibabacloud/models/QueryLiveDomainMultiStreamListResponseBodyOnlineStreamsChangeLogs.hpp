// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLIVEDOMAINMULTISTREAMLISTRESPONSEBODYONLINESTREAMSCHANGELOGS_HPP_
#define ALIBABACLOUD_MODELS_QUERYLIVEDOMAINMULTISTREAMLISTRESPONSEBODYONLINESTREAMSCHANGELOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeReason, changeReason_);
      DARABONBA_PTR_TO_JSON(ChangeTime, changeTime_);
      DARABONBA_PTR_TO_JSON(MasterUpstream, masterUpstream_);
      DARABONBA_PTR_TO_JSON(UpstreamIp, upstreamIp_);
      DARABONBA_PTR_TO_JSON(UpstreamSequence, upstreamSequence_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeReason, changeReason_);
      DARABONBA_PTR_FROM_JSON(ChangeTime, changeTime_);
      DARABONBA_PTR_FROM_JSON(MasterUpstream, masterUpstream_);
      DARABONBA_PTR_FROM_JSON(UpstreamIp, upstreamIp_);
      DARABONBA_PTR_FROM_JSON(UpstreamSequence, upstreamSequence_);
    };
    QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs() = default ;
    QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs(const QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs &) = default ;
    QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs(QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs &&) = default ;
    QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs() = default ;
    QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs& operator=(const QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs &) = default ;
    QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs& operator=(QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeReason_ != nullptr
        && this->changeTime_ != nullptr && this->masterUpstream_ != nullptr && this->upstreamIp_ != nullptr && this->upstreamSequence_ != nullptr; };
    // changeReason Field Functions 
    bool hasChangeReason() const { return this->changeReason_ != nullptr;};
    void deleteChangeReason() { this->changeReason_ = nullptr;};
    inline string changeReason() const { DARABONBA_PTR_GET_DEFAULT(changeReason_, "") };
    inline QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs& setChangeReason(string changeReason) { DARABONBA_PTR_SET_VALUE(changeReason_, changeReason) };


    // changeTime Field Functions 
    bool hasChangeTime() const { return this->changeTime_ != nullptr;};
    void deleteChangeTime() { this->changeTime_ = nullptr;};
    inline string changeTime() const { DARABONBA_PTR_GET_DEFAULT(changeTime_, "") };
    inline QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs& setChangeTime(string changeTime) { DARABONBA_PTR_SET_VALUE(changeTime_, changeTime) };


    // masterUpstream Field Functions 
    bool hasMasterUpstream() const { return this->masterUpstream_ != nullptr;};
    void deleteMasterUpstream() { this->masterUpstream_ = nullptr;};
    inline string masterUpstream() const { DARABONBA_PTR_GET_DEFAULT(masterUpstream_, "") };
    inline QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs& setMasterUpstream(string masterUpstream) { DARABONBA_PTR_SET_VALUE(masterUpstream_, masterUpstream) };


    // upstreamIp Field Functions 
    bool hasUpstreamIp() const { return this->upstreamIp_ != nullptr;};
    void deleteUpstreamIp() { this->upstreamIp_ = nullptr;};
    inline string upstreamIp() const { DARABONBA_PTR_GET_DEFAULT(upstreamIp_, "") };
    inline QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs& setUpstreamIp(string upstreamIp) { DARABONBA_PTR_SET_VALUE(upstreamIp_, upstreamIp) };


    // upstreamSequence Field Functions 
    bool hasUpstreamSequence() const { return this->upstreamSequence_ != nullptr;};
    void deleteUpstreamSequence() { this->upstreamSequence_ = nullptr;};
    inline string upstreamSequence() const { DARABONBA_PTR_GET_DEFAULT(upstreamSequence_, "") };
    inline QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsChangeLogs& setUpstreamSequence(string upstreamSequence) { DARABONBA_PTR_SET_VALUE(upstreamSequence_, upstreamSequence) };


  protected:
    // The reason for the switchover.
    // 
    // *   merge cut manually: You proactively switched the stream.
    // *   master stream no data: No data is available in the active stream.
    // *   master stream low quality: The quality of the active stream deteriorated.
    std::shared_ptr<string> changeReason_ = nullptr;
    // The switchover time.
    std::shared_ptr<string> changeTime_ = nullptr;
    // The stream used after the switchover.
    std::shared_ptr<string> masterUpstream_ = nullptr;
    // The IP address used after the switchover.
    std::shared_ptr<string> upstreamIp_ = nullptr;
    // The identifier of the stream after the switchover.
    std::shared_ptr<string> upstreamSequence_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLIVEDOMAINMULTISTREAMLISTRESPONSEBODYONLINESTREAMSUPSTREAMLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYLIVEDOMAINMULTISTREAMLISTRESPONSEBODYONLINESTREAMSUPSTREAMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList& obj) { 
      DARABONBA_PTR_TO_JSON(MasterFlag, masterFlag_);
      DARABONBA_PTR_TO_JSON(UpstreamIp, upstreamIp_);
      DARABONBA_PTR_TO_JSON(UpstreamSequence, upstreamSequence_);
      DARABONBA_PTR_TO_JSON(UpstreamTime, upstreamTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList& obj) { 
      DARABONBA_PTR_FROM_JSON(MasterFlag, masterFlag_);
      DARABONBA_PTR_FROM_JSON(UpstreamIp, upstreamIp_);
      DARABONBA_PTR_FROM_JSON(UpstreamSequence, upstreamSequence_);
      DARABONBA_PTR_FROM_JSON(UpstreamTime, upstreamTime_);
    };
    QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList() = default ;
    QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList(const QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList &) = default ;
    QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList(QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList &&) = default ;
    QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList() = default ;
    QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList& operator=(const QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList &) = default ;
    QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList& operator=(QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->masterFlag_ == nullptr
        && return this->upstreamIp_ == nullptr && return this->upstreamSequence_ == nullptr && return this->upstreamTime_ == nullptr; };
    // masterFlag Field Functions 
    bool hasMasterFlag() const { return this->masterFlag_ != nullptr;};
    void deleteMasterFlag() { this->masterFlag_ = nullptr;};
    inline bool masterFlag() const { DARABONBA_PTR_GET_DEFAULT(masterFlag_, false) };
    inline QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList& setMasterFlag(bool masterFlag) { DARABONBA_PTR_SET_VALUE(masterFlag_, masterFlag) };


    // upstreamIp Field Functions 
    bool hasUpstreamIp() const { return this->upstreamIp_ != nullptr;};
    void deleteUpstreamIp() { this->upstreamIp_ = nullptr;};
    inline string upstreamIp() const { DARABONBA_PTR_GET_DEFAULT(upstreamIp_, "") };
    inline QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList& setUpstreamIp(string upstreamIp) { DARABONBA_PTR_SET_VALUE(upstreamIp_, upstreamIp) };


    // upstreamSequence Field Functions 
    bool hasUpstreamSequence() const { return this->upstreamSequence_ != nullptr;};
    void deleteUpstreamSequence() { this->upstreamSequence_ = nullptr;};
    inline string upstreamSequence() const { DARABONBA_PTR_GET_DEFAULT(upstreamSequence_, "") };
    inline QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList& setUpstreamSequence(string upstreamSequence) { DARABONBA_PTR_SET_VALUE(upstreamSequence_, upstreamSequence) };


    // upstreamTime Field Functions 
    bool hasUpstreamTime() const { return this->upstreamTime_ != nullptr;};
    void deleteUpstreamTime() { this->upstreamTime_ = nullptr;};
    inline string upstreamTime() const { DARABONBA_PTR_GET_DEFAULT(upstreamTime_, "") };
    inline QueryLiveDomainMultiStreamListResponseBodyOnlineStreamsUpstreamList& setUpstreamTime(string upstreamTime) { DARABONBA_PTR_SET_VALUE(upstreamTime_, upstreamTime) };


  protected:
    // The active/standby tag.
    // 
    // >  This parameter indicates whether the active or standby stream is being distributed.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> masterFlag_ = nullptr;
    // The IP address of the stream ingest client.
    std::shared_ptr<string> upstreamIp_ = nullptr;
    // The unique identifier of the stream ingest.
    std::shared_ptr<string> upstreamSequence_ = nullptr;
    // The stream ingest time.
    std::shared_ptr<string> upstreamTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

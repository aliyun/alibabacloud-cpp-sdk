// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGroupResponseBodyStats.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliasId, aliasId_);
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(Callback, callback_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(GbId, gbId_);
      DARABONBA_PTR_TO_JSON(GbIp, gbIp_);
      DARABONBA_PTR_TO_JSON(GbPort, gbPort_);
      DARABONBA_PTR_TO_JSON(GbTcpPorts, gbTcpPorts_);
      DARABONBA_PTR_TO_JSON(GbUdpPorts, gbUdpPorts_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InProtocol, inProtocol_);
      DARABONBA_PTR_TO_JSON(LazyPull, lazyPull_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutProtocol, outProtocol_);
      DARABONBA_PTR_TO_JSON(PlayDomain, playDomain_);
      DARABONBA_PTR_TO_JSON(PushDomain, pushDomain_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Stats, stats_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasId, aliasId_);
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(GbId, gbId_);
      DARABONBA_PTR_FROM_JSON(GbIp, gbIp_);
      DARABONBA_PTR_FROM_JSON(GbPort, gbPort_);
      DARABONBA_PTR_FROM_JSON(GbTcpPorts, gbTcpPorts_);
      DARABONBA_PTR_FROM_JSON(GbUdpPorts, gbUdpPorts_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InProtocol, inProtocol_);
      DARABONBA_PTR_FROM_JSON(LazyPull, lazyPull_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutProtocol, outProtocol_);
      DARABONBA_PTR_FROM_JSON(PlayDomain, playDomain_);
      DARABONBA_PTR_FROM_JSON(PushDomain, pushDomain_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Stats, stats_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeGroupResponseBody() = default ;
    DescribeGroupResponseBody(const DescribeGroupResponseBody &) = default ;
    DescribeGroupResponseBody(DescribeGroupResponseBody &&) = default ;
    DescribeGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupResponseBody() = default ;
    DescribeGroupResponseBody& operator=(const DescribeGroupResponseBody &) = default ;
    DescribeGroupResponseBody& operator=(DescribeGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliasId_ != nullptr
        && this->app_ != nullptr && this->callback_ != nullptr && this->createdTime_ != nullptr && this->description_ != nullptr && this->enabled_ != nullptr
        && this->gbId_ != nullptr && this->gbIp_ != nullptr && this->gbPort_ != nullptr && this->gbTcpPorts_ != nullptr && this->gbUdpPorts_ != nullptr
        && this->id_ != nullptr && this->inProtocol_ != nullptr && this->lazyPull_ != nullptr && this->name_ != nullptr && this->outProtocol_ != nullptr
        && this->playDomain_ != nullptr && this->pushDomain_ != nullptr && this->region_ != nullptr && this->requestId_ != nullptr && this->stats_ != nullptr
        && this->status_ != nullptr; };
    // aliasId Field Functions 
    bool hasAliasId() const { return this->aliasId_ != nullptr;};
    void deleteAliasId() { this->aliasId_ = nullptr;};
    inline string aliasId() const { DARABONBA_PTR_GET_DEFAULT(aliasId_, "") };
    inline DescribeGroupResponseBody& setAliasId(string aliasId) { DARABONBA_PTR_SET_VALUE(aliasId_, aliasId) };


    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline DescribeGroupResponseBody& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline string callback() const { DARABONBA_PTR_GET_DEFAULT(callback_, "") };
    inline DescribeGroupResponseBody& setCallback(string callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeGroupResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeGroupResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeGroupResponseBody& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // gbId Field Functions 
    bool hasGbId() const { return this->gbId_ != nullptr;};
    void deleteGbId() { this->gbId_ = nullptr;};
    inline string gbId() const { DARABONBA_PTR_GET_DEFAULT(gbId_, "") };
    inline DescribeGroupResponseBody& setGbId(string gbId) { DARABONBA_PTR_SET_VALUE(gbId_, gbId) };


    // gbIp Field Functions 
    bool hasGbIp() const { return this->gbIp_ != nullptr;};
    void deleteGbIp() { this->gbIp_ = nullptr;};
    inline string gbIp() const { DARABONBA_PTR_GET_DEFAULT(gbIp_, "") };
    inline DescribeGroupResponseBody& setGbIp(string gbIp) { DARABONBA_PTR_SET_VALUE(gbIp_, gbIp) };


    // gbPort Field Functions 
    bool hasGbPort() const { return this->gbPort_ != nullptr;};
    void deleteGbPort() { this->gbPort_ = nullptr;};
    inline int64_t gbPort() const { DARABONBA_PTR_GET_DEFAULT(gbPort_, 0L) };
    inline DescribeGroupResponseBody& setGbPort(int64_t gbPort) { DARABONBA_PTR_SET_VALUE(gbPort_, gbPort) };


    // gbTcpPorts Field Functions 
    bool hasGbTcpPorts() const { return this->gbTcpPorts_ != nullptr;};
    void deleteGbTcpPorts() { this->gbTcpPorts_ = nullptr;};
    inline const vector<string> & gbTcpPorts() const { DARABONBA_PTR_GET_CONST(gbTcpPorts_, vector<string>) };
    inline vector<string> gbTcpPorts() { DARABONBA_PTR_GET(gbTcpPorts_, vector<string>) };
    inline DescribeGroupResponseBody& setGbTcpPorts(const vector<string> & gbTcpPorts) { DARABONBA_PTR_SET_VALUE(gbTcpPorts_, gbTcpPorts) };
    inline DescribeGroupResponseBody& setGbTcpPorts(vector<string> && gbTcpPorts) { DARABONBA_PTR_SET_RVALUE(gbTcpPorts_, gbTcpPorts) };


    // gbUdpPorts Field Functions 
    bool hasGbUdpPorts() const { return this->gbUdpPorts_ != nullptr;};
    void deleteGbUdpPorts() { this->gbUdpPorts_ = nullptr;};
    inline const vector<string> & gbUdpPorts() const { DARABONBA_PTR_GET_CONST(gbUdpPorts_, vector<string>) };
    inline vector<string> gbUdpPorts() { DARABONBA_PTR_GET(gbUdpPorts_, vector<string>) };
    inline DescribeGroupResponseBody& setGbUdpPorts(const vector<string> & gbUdpPorts) { DARABONBA_PTR_SET_VALUE(gbUdpPorts_, gbUdpPorts) };
    inline DescribeGroupResponseBody& setGbUdpPorts(vector<string> && gbUdpPorts) { DARABONBA_PTR_SET_RVALUE(gbUdpPorts_, gbUdpPorts) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeGroupResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inProtocol Field Functions 
    bool hasInProtocol() const { return this->inProtocol_ != nullptr;};
    void deleteInProtocol() { this->inProtocol_ = nullptr;};
    inline string inProtocol() const { DARABONBA_PTR_GET_DEFAULT(inProtocol_, "") };
    inline DescribeGroupResponseBody& setInProtocol(string inProtocol) { DARABONBA_PTR_SET_VALUE(inProtocol_, inProtocol) };


    // lazyPull Field Functions 
    bool hasLazyPull() const { return this->lazyPull_ != nullptr;};
    void deleteLazyPull() { this->lazyPull_ = nullptr;};
    inline bool lazyPull() const { DARABONBA_PTR_GET_DEFAULT(lazyPull_, false) };
    inline DescribeGroupResponseBody& setLazyPull(bool lazyPull) { DARABONBA_PTR_SET_VALUE(lazyPull_, lazyPull) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeGroupResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outProtocol Field Functions 
    bool hasOutProtocol() const { return this->outProtocol_ != nullptr;};
    void deleteOutProtocol() { this->outProtocol_ = nullptr;};
    inline string outProtocol() const { DARABONBA_PTR_GET_DEFAULT(outProtocol_, "") };
    inline DescribeGroupResponseBody& setOutProtocol(string outProtocol) { DARABONBA_PTR_SET_VALUE(outProtocol_, outProtocol) };


    // playDomain Field Functions 
    bool hasPlayDomain() const { return this->playDomain_ != nullptr;};
    void deletePlayDomain() { this->playDomain_ = nullptr;};
    inline string playDomain() const { DARABONBA_PTR_GET_DEFAULT(playDomain_, "") };
    inline DescribeGroupResponseBody& setPlayDomain(string playDomain) { DARABONBA_PTR_SET_VALUE(playDomain_, playDomain) };


    // pushDomain Field Functions 
    bool hasPushDomain() const { return this->pushDomain_ != nullptr;};
    void deletePushDomain() { this->pushDomain_ = nullptr;};
    inline string pushDomain() const { DARABONBA_PTR_GET_DEFAULT(pushDomain_, "") };
    inline DescribeGroupResponseBody& setPushDomain(string pushDomain) { DARABONBA_PTR_SET_VALUE(pushDomain_, pushDomain) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeGroupResponseBody& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stats Field Functions 
    bool hasStats() const { return this->stats_ != nullptr;};
    void deleteStats() { this->stats_ = nullptr;};
    inline const DescribeGroupResponseBodyStats & stats() const { DARABONBA_PTR_GET_CONST(stats_, DescribeGroupResponseBodyStats) };
    inline DescribeGroupResponseBodyStats stats() { DARABONBA_PTR_GET(stats_, DescribeGroupResponseBodyStats) };
    inline DescribeGroupResponseBody& setStats(const DescribeGroupResponseBodyStats & stats) { DARABONBA_PTR_SET_VALUE(stats_, stats) };
    inline DescribeGroupResponseBody& setStats(DescribeGroupResponseBodyStats && stats) { DARABONBA_PTR_SET_RVALUE(stats_, stats) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeGroupResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> aliasId_ = nullptr;
    std::shared_ptr<string> app_ = nullptr;
    std::shared_ptr<string> callback_ = nullptr;
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> gbId_ = nullptr;
    std::shared_ptr<string> gbIp_ = nullptr;
    std::shared_ptr<int64_t> gbPort_ = nullptr;
    std::shared_ptr<vector<string>> gbTcpPorts_ = nullptr;
    std::shared_ptr<vector<string>> gbUdpPorts_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> inProtocol_ = nullptr;
    std::shared_ptr<bool> lazyPull_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> outProtocol_ = nullptr;
    std::shared_ptr<string> playDomain_ = nullptr;
    std::shared_ptr<string> pushDomain_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeGroupResponseBodyStats> stats_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif

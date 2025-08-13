// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANSINSTANCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTANSINSTANCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListAnsInstancesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnsInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(DatumKey, datumKey_);
      DARABONBA_PTR_TO_JSON(DefaultKey, defaultKey_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Ephemeral, ephemeral_);
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(Healthy, healthy_);
      DARABONBA_PTR_TO_JSON(InstanceHeartBeatInterval, instanceHeartBeatInterval_);
      DARABONBA_PTR_TO_JSON(InstanceHeartBeatTimeOut, instanceHeartBeatTimeOut_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(IpDeleteTimeout, ipDeleteTimeout_);
      DARABONBA_PTR_TO_JSON(LastBeat, lastBeat_);
      DARABONBA_PTR_TO_JSON(Marked, marked_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(OkCount, okCount_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnsInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(DatumKey, datumKey_);
      DARABONBA_PTR_FROM_JSON(DefaultKey, defaultKey_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Ephemeral, ephemeral_);
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(Healthy, healthy_);
      DARABONBA_PTR_FROM_JSON(InstanceHeartBeatInterval, instanceHeartBeatInterval_);
      DARABONBA_PTR_FROM_JSON(InstanceHeartBeatTimeOut, instanceHeartBeatTimeOut_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(IpDeleteTimeout, ipDeleteTimeout_);
      DARABONBA_PTR_FROM_JSON(LastBeat, lastBeat_);
      DARABONBA_PTR_FROM_JSON(Marked, marked_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(OkCount, okCount_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    ListAnsInstancesResponseBodyData() = default ;
    ListAnsInstancesResponseBodyData(const ListAnsInstancesResponseBodyData &) = default ;
    ListAnsInstancesResponseBodyData(ListAnsInstancesResponseBodyData &&) = default ;
    ListAnsInstancesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnsInstancesResponseBodyData() = default ;
    ListAnsInstancesResponseBodyData& operator=(const ListAnsInstancesResponseBodyData &) = default ;
    ListAnsInstancesResponseBodyData& operator=(ListAnsInstancesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->app_ != nullptr
        && this->clusterName_ != nullptr && this->datumKey_ != nullptr && this->defaultKey_ != nullptr && this->enabled_ != nullptr && this->ephemeral_ != nullptr
        && this->failCount_ != nullptr && this->healthy_ != nullptr && this->instanceHeartBeatInterval_ != nullptr && this->instanceHeartBeatTimeOut_ != nullptr && this->instanceId_ != nullptr
        && this->ip_ != nullptr && this->ipDeleteTimeout_ != nullptr && this->lastBeat_ != nullptr && this->marked_ != nullptr && this->metadata_ != nullptr
        && this->okCount_ != nullptr && this->port_ != nullptr && this->serviceName_ != nullptr && this->weight_ != nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline ListAnsInstancesResponseBodyData& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListAnsInstancesResponseBodyData& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // datumKey Field Functions 
    bool hasDatumKey() const { return this->datumKey_ != nullptr;};
    void deleteDatumKey() { this->datumKey_ = nullptr;};
    inline string datumKey() const { DARABONBA_PTR_GET_DEFAULT(datumKey_, "") };
    inline ListAnsInstancesResponseBodyData& setDatumKey(string datumKey) { DARABONBA_PTR_SET_VALUE(datumKey_, datumKey) };


    // defaultKey Field Functions 
    bool hasDefaultKey() const { return this->defaultKey_ != nullptr;};
    void deleteDefaultKey() { this->defaultKey_ = nullptr;};
    inline string defaultKey() const { DARABONBA_PTR_GET_DEFAULT(defaultKey_, "") };
    inline ListAnsInstancesResponseBodyData& setDefaultKey(string defaultKey) { DARABONBA_PTR_SET_VALUE(defaultKey_, defaultKey) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ListAnsInstancesResponseBodyData& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // ephemeral Field Functions 
    bool hasEphemeral() const { return this->ephemeral_ != nullptr;};
    void deleteEphemeral() { this->ephemeral_ = nullptr;};
    inline bool ephemeral() const { DARABONBA_PTR_GET_DEFAULT(ephemeral_, false) };
    inline ListAnsInstancesResponseBodyData& setEphemeral(bool ephemeral) { DARABONBA_PTR_SET_VALUE(ephemeral_, ephemeral) };


    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t failCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline ListAnsInstancesResponseBodyData& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // healthy Field Functions 
    bool hasHealthy() const { return this->healthy_ != nullptr;};
    void deleteHealthy() { this->healthy_ = nullptr;};
    inline bool healthy() const { DARABONBA_PTR_GET_DEFAULT(healthy_, false) };
    inline ListAnsInstancesResponseBodyData& setHealthy(bool healthy) { DARABONBA_PTR_SET_VALUE(healthy_, healthy) };


    // instanceHeartBeatInterval Field Functions 
    bool hasInstanceHeartBeatInterval() const { return this->instanceHeartBeatInterval_ != nullptr;};
    void deleteInstanceHeartBeatInterval() { this->instanceHeartBeatInterval_ = nullptr;};
    inline int32_t instanceHeartBeatInterval() const { DARABONBA_PTR_GET_DEFAULT(instanceHeartBeatInterval_, 0) };
    inline ListAnsInstancesResponseBodyData& setInstanceHeartBeatInterval(int32_t instanceHeartBeatInterval) { DARABONBA_PTR_SET_VALUE(instanceHeartBeatInterval_, instanceHeartBeatInterval) };


    // instanceHeartBeatTimeOut Field Functions 
    bool hasInstanceHeartBeatTimeOut() const { return this->instanceHeartBeatTimeOut_ != nullptr;};
    void deleteInstanceHeartBeatTimeOut() { this->instanceHeartBeatTimeOut_ = nullptr;};
    inline int32_t instanceHeartBeatTimeOut() const { DARABONBA_PTR_GET_DEFAULT(instanceHeartBeatTimeOut_, 0) };
    inline ListAnsInstancesResponseBodyData& setInstanceHeartBeatTimeOut(int32_t instanceHeartBeatTimeOut) { DARABONBA_PTR_SET_VALUE(instanceHeartBeatTimeOut_, instanceHeartBeatTimeOut) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAnsInstancesResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline ListAnsInstancesResponseBodyData& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // ipDeleteTimeout Field Functions 
    bool hasIpDeleteTimeout() const { return this->ipDeleteTimeout_ != nullptr;};
    void deleteIpDeleteTimeout() { this->ipDeleteTimeout_ = nullptr;};
    inline int32_t ipDeleteTimeout() const { DARABONBA_PTR_GET_DEFAULT(ipDeleteTimeout_, 0) };
    inline ListAnsInstancesResponseBodyData& setIpDeleteTimeout(int32_t ipDeleteTimeout) { DARABONBA_PTR_SET_VALUE(ipDeleteTimeout_, ipDeleteTimeout) };


    // lastBeat Field Functions 
    bool hasLastBeat() const { return this->lastBeat_ != nullptr;};
    void deleteLastBeat() { this->lastBeat_ = nullptr;};
    inline int64_t lastBeat() const { DARABONBA_PTR_GET_DEFAULT(lastBeat_, 0L) };
    inline ListAnsInstancesResponseBodyData& setLastBeat(int64_t lastBeat) { DARABONBA_PTR_SET_VALUE(lastBeat_, lastBeat) };


    // marked Field Functions 
    bool hasMarked() const { return this->marked_ != nullptr;};
    void deleteMarked() { this->marked_ = nullptr;};
    inline bool marked() const { DARABONBA_PTR_GET_DEFAULT(marked_, false) };
    inline ListAnsInstancesResponseBodyData& setMarked(bool marked) { DARABONBA_PTR_SET_VALUE(marked_, marked) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline ListAnsInstancesResponseBodyData& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline ListAnsInstancesResponseBodyData& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // okCount Field Functions 
    bool hasOkCount() const { return this->okCount_ != nullptr;};
    void deleteOkCount() { this->okCount_ = nullptr;};
    inline int32_t okCount() const { DARABONBA_PTR_GET_DEFAULT(okCount_, 0) };
    inline ListAnsInstancesResponseBodyData& setOkCount(int32_t okCount) { DARABONBA_PTR_SET_VALUE(okCount_, okCount) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ListAnsInstancesResponseBodyData& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListAnsInstancesResponseBodyData& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline ListAnsInstancesResponseBodyData& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The name of the application.
    std::shared_ptr<string> app_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The reference key.
    std::shared_ptr<string> datumKey_ = nullptr;
    // The default key.
    std::shared_ptr<string> defaultKey_ = nullptr;
    // The effective status of the instance. Valid values:
    // 
    // *   `true`: The instance takes effect.
    // *   `false`: The instance does not take effect.
    std::shared_ptr<bool> enabled_ = nullptr;
    // Indicates whether the information about the ephemeral node is obtained. Valid values:
    // 
    // *   `true`: yes
    // *   `false`: no
    std::shared_ptr<bool> ephemeral_ = nullptr;
    // The number of counted failures.
    std::shared_ptr<int32_t> failCount_ = nullptr;
    // The health status of the instance. Valid values:
    // 
    // *   `true`: The instance is healthy.
    // *   `false`: The instance is unhealthy.
    std::shared_ptr<bool> healthy_ = nullptr;
    // The heartbeat interval of the instance. Unit: seconds.
    std::shared_ptr<int32_t> instanceHeartBeatInterval_ = nullptr;
    // The timeout period of the instance heartbeat.
    std::shared_ptr<int32_t> instanceHeartBeatTimeOut_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The public IP address.
    std::shared_ptr<string> ip_ = nullptr;
    // The timeout period for removing an IP address.
    std::shared_ptr<int32_t> ipDeleteTimeout_ = nullptr;
    // The last heartbeat time.
    std::shared_ptr<int64_t> lastBeat_ = nullptr;
    // Indicates whether the instance was marked. Valid values:
    // 
    // *   `true`: The instance marking was successful.
    // *   `false`: The instance marking failed.
    std::shared_ptr<bool> marked_ = nullptr;
    // The metadata.
    Darabonba::Json metadata_ = nullptr;
    // The number of counted successes.
    std::shared_ptr<int32_t> okCount_ = nullptr;
    // The port number.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The weight.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

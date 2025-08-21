// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLNODERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTALLNODERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListAllNodeResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllNodeResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(cpuPercent, cpuPercent_);
      DARABONBA_PTR_TO_JSON(diskUsedPercent, diskUsedPercent_);
      DARABONBA_PTR_TO_JSON(health, health_);
      DARABONBA_PTR_TO_JSON(heapPercent, heapPercent_);
      DARABONBA_PTR_TO_JSON(host, host_);
      DARABONBA_PTR_TO_JSON(loadOneM, loadOneM_);
      DARABONBA_PTR_TO_JSON(nodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllNodeResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(cpuPercent, cpuPercent_);
      DARABONBA_PTR_FROM_JSON(diskUsedPercent, diskUsedPercent_);
      DARABONBA_PTR_FROM_JSON(health, health_);
      DARABONBA_PTR_FROM_JSON(heapPercent, heapPercent_);
      DARABONBA_PTR_FROM_JSON(host, host_);
      DARABONBA_PTR_FROM_JSON(loadOneM, loadOneM_);
      DARABONBA_PTR_FROM_JSON(nodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    ListAllNodeResponseBodyResult() = default ;
    ListAllNodeResponseBodyResult(const ListAllNodeResponseBodyResult &) = default ;
    ListAllNodeResponseBodyResult(ListAllNodeResponseBodyResult &&) = default ;
    ListAllNodeResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllNodeResponseBodyResult() = default ;
    ListAllNodeResponseBodyResult& operator=(const ListAllNodeResponseBodyResult &) = default ;
    ListAllNodeResponseBodyResult& operator=(ListAllNodeResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpuPercent_ != nullptr
        && this->diskUsedPercent_ != nullptr && this->health_ != nullptr && this->heapPercent_ != nullptr && this->host_ != nullptr && this->loadOneM_ != nullptr
        && this->nodeType_ != nullptr && this->port_ != nullptr && this->zoneId_ != nullptr; };
    // cpuPercent Field Functions 
    bool hasCpuPercent() const { return this->cpuPercent_ != nullptr;};
    void deleteCpuPercent() { this->cpuPercent_ = nullptr;};
    inline string cpuPercent() const { DARABONBA_PTR_GET_DEFAULT(cpuPercent_, "") };
    inline ListAllNodeResponseBodyResult& setCpuPercent(string cpuPercent) { DARABONBA_PTR_SET_VALUE(cpuPercent_, cpuPercent) };


    // diskUsedPercent Field Functions 
    bool hasDiskUsedPercent() const { return this->diskUsedPercent_ != nullptr;};
    void deleteDiskUsedPercent() { this->diskUsedPercent_ = nullptr;};
    inline string diskUsedPercent() const { DARABONBA_PTR_GET_DEFAULT(diskUsedPercent_, "") };
    inline ListAllNodeResponseBodyResult& setDiskUsedPercent(string diskUsedPercent) { DARABONBA_PTR_SET_VALUE(diskUsedPercent_, diskUsedPercent) };


    // health Field Functions 
    bool hasHealth() const { return this->health_ != nullptr;};
    void deleteHealth() { this->health_ = nullptr;};
    inline string health() const { DARABONBA_PTR_GET_DEFAULT(health_, "") };
    inline ListAllNodeResponseBodyResult& setHealth(string health) { DARABONBA_PTR_SET_VALUE(health_, health) };


    // heapPercent Field Functions 
    bool hasHeapPercent() const { return this->heapPercent_ != nullptr;};
    void deleteHeapPercent() { this->heapPercent_ = nullptr;};
    inline string heapPercent() const { DARABONBA_PTR_GET_DEFAULT(heapPercent_, "") };
    inline ListAllNodeResponseBodyResult& setHeapPercent(string heapPercent) { DARABONBA_PTR_SET_VALUE(heapPercent_, heapPercent) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline ListAllNodeResponseBodyResult& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // loadOneM Field Functions 
    bool hasLoadOneM() const { return this->loadOneM_ != nullptr;};
    void deleteLoadOneM() { this->loadOneM_ = nullptr;};
    inline string loadOneM() const { DARABONBA_PTR_GET_DEFAULT(loadOneM_, "") };
    inline ListAllNodeResponseBodyResult& setLoadOneM(string loadOneM) { DARABONBA_PTR_SET_VALUE(loadOneM_, loadOneM) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ListAllNodeResponseBodyResult& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ListAllNodeResponseBodyResult& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListAllNodeResponseBodyResult& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The disk usage.
    std::shared_ptr<string> cpuPercent_ = nullptr;
    // The health status of the node. Valid values: GREEN, YELLOW, RED, and GRAY.
    std::shared_ptr<string> diskUsedPercent_ = nullptr;
    std::shared_ptr<string> health_ = nullptr;
    // The IP address of the node.
    std::shared_ptr<string> heapPercent_ = nullptr;
    // The port that is used to connect to the node.
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> loadOneM_ = nullptr;
    // The 1-minute load of the node.
    std::shared_ptr<string> nodeType_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    // The type of the nodes. Valid values:
    // 
    // *   MASTER: dedicated master node
    // *   WORKER: hot node
    // *   WORKER_WARM: warm node
    // *   COORDINATING: client node
    // *   KIBANA: Kibana node
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

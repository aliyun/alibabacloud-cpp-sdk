// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLNODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALLNODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListAllNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListAllNodeResponseBody() = default ;
    ListAllNodeResponseBody(const ListAllNodeResponseBody &) = default ;
    ListAllNodeResponseBody(ListAllNodeResponseBody &&) = default ;
    ListAllNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllNodeResponseBody() = default ;
    ListAllNodeResponseBody& operator=(const ListAllNodeResponseBody &) = default ;
    ListAllNodeResponseBody& operator=(ListAllNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
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
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cpuPercent_ == nullptr
        && this->diskUsedPercent_ == nullptr && this->health_ == nullptr && this->heapPercent_ == nullptr && this->host_ == nullptr && this->loadOneM_ == nullptr
        && this->nodeType_ == nullptr && this->port_ == nullptr && this->zoneId_ == nullptr; };
      // cpuPercent Field Functions 
      bool hasCpuPercent() const { return this->cpuPercent_ != nullptr;};
      void deleteCpuPercent() { this->cpuPercent_ = nullptr;};
      inline string getCpuPercent() const { DARABONBA_PTR_GET_DEFAULT(cpuPercent_, "") };
      inline Result& setCpuPercent(string cpuPercent) { DARABONBA_PTR_SET_VALUE(cpuPercent_, cpuPercent) };


      // diskUsedPercent Field Functions 
      bool hasDiskUsedPercent() const { return this->diskUsedPercent_ != nullptr;};
      void deleteDiskUsedPercent() { this->diskUsedPercent_ = nullptr;};
      inline string getDiskUsedPercent() const { DARABONBA_PTR_GET_DEFAULT(diskUsedPercent_, "") };
      inline Result& setDiskUsedPercent(string diskUsedPercent) { DARABONBA_PTR_SET_VALUE(diskUsedPercent_, diskUsedPercent) };


      // health Field Functions 
      bool hasHealth() const { return this->health_ != nullptr;};
      void deleteHealth() { this->health_ = nullptr;};
      inline string getHealth() const { DARABONBA_PTR_GET_DEFAULT(health_, "") };
      inline Result& setHealth(string health) { DARABONBA_PTR_SET_VALUE(health_, health) };


      // heapPercent Field Functions 
      bool hasHeapPercent() const { return this->heapPercent_ != nullptr;};
      void deleteHeapPercent() { this->heapPercent_ = nullptr;};
      inline string getHeapPercent() const { DARABONBA_PTR_GET_DEFAULT(heapPercent_, "") };
      inline Result& setHeapPercent(string heapPercent) { DARABONBA_PTR_SET_VALUE(heapPercent_, heapPercent) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline Result& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // loadOneM Field Functions 
      bool hasLoadOneM() const { return this->loadOneM_ != nullptr;};
      void deleteLoadOneM() { this->loadOneM_ = nullptr;};
      inline string getLoadOneM() const { DARABONBA_PTR_GET_DEFAULT(loadOneM_, "") };
      inline Result& setLoadOneM(string loadOneM) { DARABONBA_PTR_SET_VALUE(loadOneM_, loadOneM) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline Result& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Result& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Result& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The disk usage.
      shared_ptr<string> cpuPercent_ {};
      // The health status of the node. Valid values: GREEN, YELLOW, RED, and GRAY.
      shared_ptr<string> diskUsedPercent_ {};
      shared_ptr<string> health_ {};
      // The IP address of the node.
      shared_ptr<string> heapPercent_ {};
      // The port that is used to connect to the node.
      shared_ptr<string> host_ {};
      shared_ptr<string> loadOneM_ {};
      // The 1-minute load of the node.
      shared_ptr<string> nodeType_ {};
      shared_ptr<int32_t> port_ {};
      // The type of the nodes. Valid values:
      // 
      // *   MASTER: dedicated master node
      // *   WORKER: hot node
      // *   WORKER_WARM: warm node
      // *   COORDINATING: client node
      // *   KIBANA: Kibana node
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAllNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListAllNodeResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListAllNodeResponseBody::Result>) };
    inline vector<ListAllNodeResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListAllNodeResponseBody::Result>) };
    inline ListAllNodeResponseBody& setResult(const vector<ListAllNodeResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListAllNodeResponseBody& setResult(vector<ListAllNodeResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The zone ID of the node.
    shared_ptr<string> requestId_ {};
    // The CPU utilization.
    // 
    // >  If the **extended** request parameter is set to **true** and the monitoring information of the nodes in the cluster is being synchronized, the value of the cpuPercent parameter is null. In this case, you need to send a request again after 10 seconds to obtain the value of the cpuPercent parameter.
    shared_ptr<vector<ListAllNodeResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPODLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPODLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ContainerInfo.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetPodLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPodLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerInfo, containerInfo_);
      DARABONBA_PTR_TO_JSON(Containers, containers_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(PodId, podId_);
      DARABONBA_PTR_TO_JSON(PodUid, podUid_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPodLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerInfo, containerInfo_);
      DARABONBA_PTR_FROM_JSON(Containers, containers_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(PodId, podId_);
      DARABONBA_PTR_FROM_JSON(PodUid, podUid_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPodLogsResponseBody() = default ;
    GetPodLogsResponseBody(const GetPodLogsResponseBody &) = default ;
    GetPodLogsResponseBody(GetPodLogsResponseBody &&) = default ;
    GetPodLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPodLogsResponseBody() = default ;
    GetPodLogsResponseBody& operator=(const GetPodLogsResponseBody &) = default ;
    GetPodLogsResponseBody& operator=(GetPodLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerInfo_ == nullptr
        && this->containers_ == nullptr && this->jobId_ == nullptr && this->logs_ == nullptr && this->podId_ == nullptr && this->podUid_ == nullptr
        && this->requestId_ == nullptr; };
    // containerInfo Field Functions 
    bool hasContainerInfo() const { return this->containerInfo_ != nullptr;};
    void deleteContainerInfo() { this->containerInfo_ = nullptr;};
    inline const ContainerInfo & getContainerInfo() const { DARABONBA_PTR_GET_CONST(containerInfo_, ContainerInfo) };
    inline ContainerInfo getContainerInfo() { DARABONBA_PTR_GET(containerInfo_, ContainerInfo) };
    inline GetPodLogsResponseBody& setContainerInfo(const ContainerInfo & containerInfo) { DARABONBA_PTR_SET_VALUE(containerInfo_, containerInfo) };
    inline GetPodLogsResponseBody& setContainerInfo(ContainerInfo && containerInfo) { DARABONBA_PTR_SET_RVALUE(containerInfo_, containerInfo) };


    // containers Field Functions 
    bool hasContainers() const { return this->containers_ != nullptr;};
    void deleteContainers() { this->containers_ = nullptr;};
    inline string getContainers() const { DARABONBA_PTR_GET_DEFAULT(containers_, "") };
    inline GetPodLogsResponseBody& setContainers(string containers) { DARABONBA_PTR_SET_VALUE(containers_, containers) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetPodLogsResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<string> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<string>) };
    inline vector<string> getLogs() { DARABONBA_PTR_GET(logs_, vector<string>) };
    inline GetPodLogsResponseBody& setLogs(const vector<string> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline GetPodLogsResponseBody& setLogs(vector<string> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // podId Field Functions 
    bool hasPodId() const { return this->podId_ != nullptr;};
    void deletePodId() { this->podId_ = nullptr;};
    inline string getPodId() const { DARABONBA_PTR_GET_DEFAULT(podId_, "") };
    inline GetPodLogsResponseBody& setPodId(string podId) { DARABONBA_PTR_SET_VALUE(podId_, podId) };


    // podUid Field Functions 
    bool hasPodUid() const { return this->podUid_ != nullptr;};
    void deletePodUid() { this->podUid_ = nullptr;};
    inline string getPodUid() const { DARABONBA_PTR_GET_DEFAULT(podUid_, "") };
    inline GetPodLogsResponseBody& setPodUid(string podUid) { DARABONBA_PTR_SET_VALUE(podUid_, podUid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPodLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The container information that may be associated with the node.
    shared_ptr<ContainerInfo> containerInfo_ {};
    // The containers used to filter logs. Separate multiple container names with commas (,).
    shared_ptr<string> containers_ {};
    // The job ID.
    shared_ptr<string> jobId_ {};
    // The log list.
    shared_ptr<vector<string>> logs_ {};
    // The node ID.
    shared_ptr<string> podId_ {};
    // The instance UID.
    shared_ptr<string> podUid_ {};
    // The request ID for this call, used for diagnostics and troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif

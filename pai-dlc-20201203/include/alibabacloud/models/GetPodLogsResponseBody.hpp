// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPODLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPODLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(PodId, podId_);
      DARABONBA_PTR_TO_JSON(PodUid, podUid_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPodLogsResponseBody& obj) { 
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
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->logs_ != nullptr && this->podId_ != nullptr && this->podUid_ != nullptr && this->requestId_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetPodLogsResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<string> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<string>) };
    inline vector<string> logs() { DARABONBA_PTR_GET(logs_, vector<string>) };
    inline GetPodLogsResponseBody& setLogs(const vector<string> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline GetPodLogsResponseBody& setLogs(vector<string> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // podId Field Functions 
    bool hasPodId() const { return this->podId_ != nullptr;};
    void deletePodId() { this->podId_ = nullptr;};
    inline string podId() const { DARABONBA_PTR_GET_DEFAULT(podId_, "") };
    inline GetPodLogsResponseBody& setPodId(string podId) { DARABONBA_PTR_SET_VALUE(podId_, podId) };


    // podUid Field Functions 
    bool hasPodUid() const { return this->podUid_ != nullptr;};
    void deletePodUid() { this->podUid_ = nullptr;};
    inline string podUid() const { DARABONBA_PTR_GET_DEFAULT(podUid_, "") };
    inline GetPodLogsResponseBody& setPodUid(string podUid) { DARABONBA_PTR_SET_VALUE(podUid_, podUid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPodLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The logs.
    std::shared_ptr<vector<string>> logs_ = nullptr;
    // The node ID.
    std::shared_ptr<string> podId_ = nullptr;
    // The instance UID.
    std::shared_ptr<string> podUid_ = nullptr;
    // The request ID which is used for diagnostics and Q\\&A.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif

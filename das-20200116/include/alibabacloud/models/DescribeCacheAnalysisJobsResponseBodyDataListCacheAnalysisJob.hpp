// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBSRESPONSEBODYDATALISTCACHEANALYSISJOB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBSRESPONSEBODYDATALISTCACHEANALYSISJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob& obj) { 
      DARABONBA_PTR_TO_JSON(BigKeys, bigKeys_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(TaskState, taskState_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob& obj) { 
      DARABONBA_PTR_FROM_JSON(BigKeys, bigKeys_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
    };
    DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob() = default ;
    DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob(const DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob &) = default ;
    DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob(DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob &&) = default ;
    DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob() = default ;
    DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob& operator=(const DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob &) = default ;
    DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob& operator=(DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bigKeys_ == nullptr
        && return this->instanceId_ == nullptr && return this->jobId_ == nullptr && return this->message_ == nullptr && return this->nodeId_ == nullptr && return this->taskState_ == nullptr; };
    // bigKeys Field Functions 
    bool hasBigKeys() const { return this->bigKeys_ != nullptr;};
    void deleteBigKeys() { this->bigKeys_ = nullptr;};
    inline const Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys & bigKeys() const { DARABONBA_PTR_GET_CONST(bigKeys_, Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys) };
    inline Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys bigKeys() { DARABONBA_PTR_GET(bigKeys_, Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys) };
    inline DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob& setBigKeys(const Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys & bigKeys) { DARABONBA_PTR_SET_VALUE(bigKeys_, bigKeys) };
    inline DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob& setBigKeys(Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys && bigKeys) { DARABONBA_PTR_SET_RVALUE(bigKeys_, bigKeys) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // taskState Field Functions 
    bool hasTaskState() const { return this->taskState_ != nullptr;};
    void deleteTaskState() { this->taskState_ = nullptr;};
    inline string taskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, "") };
    inline DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJob& setTaskState(string taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


  protected:
    // The details about the large keys.
    // 
    // > The sub-parameters of this parameter and the content of the sub-parameters are not returned. To query the detailed information about the cache analysis tasks, call the [DescribeCacheAnalysisJob](https://help.aliyun.com/document_detail/443012.html) operation.
    std::shared_ptr<Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys> bigKeys_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the cache analysis task.
    std::shared_ptr<string> jobId_ = nullptr;
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the data node on the instance.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The state of the cache analysis task. Valid values:
    // 
    // * **BACKUP**: The data is being backed up.
    // * **ANALYZING**: The data is being analyzed.
    // * **FINISHED**: The data is analyzed.
    // * **FAILED**: An error occurred.
    std::shared_ptr<string> taskState_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif

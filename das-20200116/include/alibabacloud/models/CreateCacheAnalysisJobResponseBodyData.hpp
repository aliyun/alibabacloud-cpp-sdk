// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECACHEANALYSISJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATECACHEANALYSISJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCacheAnalysisJobResponseBodyDataBigKeys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class CreateCacheAnalysisJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCacheAnalysisJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BigKeys, bigKeys_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(TaskState, taskState_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCacheAnalysisJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BigKeys, bigKeys_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
    };
    CreateCacheAnalysisJobResponseBodyData() = default ;
    CreateCacheAnalysisJobResponseBodyData(const CreateCacheAnalysisJobResponseBodyData &) = default ;
    CreateCacheAnalysisJobResponseBodyData(CreateCacheAnalysisJobResponseBodyData &&) = default ;
    CreateCacheAnalysisJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCacheAnalysisJobResponseBodyData() = default ;
    CreateCacheAnalysisJobResponseBodyData& operator=(const CreateCacheAnalysisJobResponseBodyData &) = default ;
    CreateCacheAnalysisJobResponseBodyData& operator=(CreateCacheAnalysisJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bigKeys_ != nullptr
        && this->instanceId_ != nullptr && this->jobId_ != nullptr && this->message_ != nullptr && this->nodeId_ != nullptr && this->taskState_ != nullptr; };
    // bigKeys Field Functions 
    bool hasBigKeys() const { return this->bigKeys_ != nullptr;};
    void deleteBigKeys() { this->bigKeys_ = nullptr;};
    inline const Models::CreateCacheAnalysisJobResponseBodyDataBigKeys & bigKeys() const { DARABONBA_PTR_GET_CONST(bigKeys_, Models::CreateCacheAnalysisJobResponseBodyDataBigKeys) };
    inline Models::CreateCacheAnalysisJobResponseBodyDataBigKeys bigKeys() { DARABONBA_PTR_GET(bigKeys_, Models::CreateCacheAnalysisJobResponseBodyDataBigKeys) };
    inline CreateCacheAnalysisJobResponseBodyData& setBigKeys(const Models::CreateCacheAnalysisJobResponseBodyDataBigKeys & bigKeys) { DARABONBA_PTR_SET_VALUE(bigKeys_, bigKeys) };
    inline CreateCacheAnalysisJobResponseBodyData& setBigKeys(Models::CreateCacheAnalysisJobResponseBodyDataBigKeys && bigKeys) { DARABONBA_PTR_SET_RVALUE(bigKeys_, bigKeys) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCacheAnalysisJobResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline CreateCacheAnalysisJobResponseBodyData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateCacheAnalysisJobResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateCacheAnalysisJobResponseBodyData& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // taskState Field Functions 
    bool hasTaskState() const { return this->taskState_ != nullptr;};
    void deleteTaskState() { this->taskState_ = nullptr;};
    inline string taskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, "") };
    inline CreateCacheAnalysisJobResponseBodyData& setTaskState(string taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


  protected:
    // The number of elements in the key.
    std::shared_ptr<Models::CreateCacheAnalysisJobResponseBodyDataBigKeys> bigKeys_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the cache analysis task.
    // 
    // >  This parameter can be used to query a specific cache analysis task. When you call the CreateCacheAnalysisJob operation, it takes some time to create a cache analysis task. As a result, the analysis results cannot be immediately returned. You can call the [DescribeCacheAnalysisJob](https://help.aliyun.com/document_detail/180983.html) operation to query the analysis results of the specified cache analysis task.
    std::shared_ptr<string> jobId_ = nullptr;
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the data node on the instance.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The state of the cache analysis task. Valid values:
    // 
    // *   **BACKUP**: The data is being backed up.
    // *   **ANALYZING**: The data is being analyzed.
    // *   **FINISHED**: The data is analyzed.
    // *   **FAILED**: An error occurred.
    std::shared_ptr<string> taskState_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif

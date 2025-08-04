// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICBYIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICBYIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTopicByIdResponseBodyDataStructureSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetTopicByIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicByIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(HotValue, hotValue_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StructureSummary, structureSummary_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(TaskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(TopicSource, topicSource_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicByIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(HotValue, hotValue_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StructureSummary, structureSummary_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(TaskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(TopicSource, topicSource_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetTopicByIdResponseBodyData() = default ;
    GetTopicByIdResponseBodyData(const GetTopicByIdResponseBodyData &) = default ;
    GetTopicByIdResponseBodyData(GetTopicByIdResponseBodyData &&) = default ;
    GetTopicByIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicByIdResponseBodyData() = default ;
    GetTopicByIdResponseBodyData& operator=(const GetTopicByIdResponseBodyData &) = default ;
    GetTopicByIdResponseBodyData& operator=(GetTopicByIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncTaskId_ != nullptr
        && this->createUser_ != nullptr && this->hotValue_ != nullptr && this->id_ != nullptr && this->status_ != nullptr && this->structureSummary_ != nullptr
        && this->summary_ != nullptr && this->taskErrorMessage_ != nullptr && this->taskStatus_ != nullptr && this->topic_ != nullptr && this->topicSource_ != nullptr
        && this->version_ != nullptr; };
    // asyncTaskId Field Functions 
    bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
    void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
    inline string asyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, "") };
    inline GetTopicByIdResponseBodyData& setAsyncTaskId(string asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline GetTopicByIdResponseBodyData& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // hotValue Field Functions 
    bool hasHotValue() const { return this->hotValue_ != nullptr;};
    void deleteHotValue() { this->hotValue_ = nullptr;};
    inline int64_t hotValue() const { DARABONBA_PTR_GET_DEFAULT(hotValue_, 0L) };
    inline GetTopicByIdResponseBodyData& setHotValue(int64_t hotValue) { DARABONBA_PTR_SET_VALUE(hotValue_, hotValue) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetTopicByIdResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTopicByIdResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // structureSummary Field Functions 
    bool hasStructureSummary() const { return this->structureSummary_ != nullptr;};
    void deleteStructureSummary() { this->structureSummary_ = nullptr;};
    inline const vector<Models::GetTopicByIdResponseBodyDataStructureSummary> & structureSummary() const { DARABONBA_PTR_GET_CONST(structureSummary_, vector<Models::GetTopicByIdResponseBodyDataStructureSummary>) };
    inline vector<Models::GetTopicByIdResponseBodyDataStructureSummary> structureSummary() { DARABONBA_PTR_GET(structureSummary_, vector<Models::GetTopicByIdResponseBodyDataStructureSummary>) };
    inline GetTopicByIdResponseBodyData& setStructureSummary(const vector<Models::GetTopicByIdResponseBodyDataStructureSummary> & structureSummary) { DARABONBA_PTR_SET_VALUE(structureSummary_, structureSummary) };
    inline GetTopicByIdResponseBodyData& setStructureSummary(vector<Models::GetTopicByIdResponseBodyDataStructureSummary> && structureSummary) { DARABONBA_PTR_SET_RVALUE(structureSummary_, structureSummary) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetTopicByIdResponseBodyData& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // taskErrorMessage Field Functions 
    bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
    void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
    inline string taskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
    inline GetTopicByIdResponseBodyData& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline GetTopicByIdResponseBodyData& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline GetTopicByIdResponseBodyData& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // topicSource Field Functions 
    bool hasTopicSource() const { return this->topicSource_ != nullptr;};
    void deleteTopicSource() { this->topicSource_ = nullptr;};
    inline string topicSource() const { DARABONBA_PTR_GET_DEFAULT(topicSource_, "") };
    inline GetTopicByIdResponseBodyData& setTopicSource(string topicSource) { DARABONBA_PTR_SET_VALUE(topicSource_, topicSource) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetTopicByIdResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> asyncTaskId_ = nullptr;
    std::shared_ptr<string> createUser_ = nullptr;
    std::shared_ptr<int64_t> hotValue_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::GetTopicByIdResponseBodyDataStructureSummary>> structureSummary_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> taskErrorMessage_ = nullptr;
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
    std::shared_ptr<string> topicSource_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

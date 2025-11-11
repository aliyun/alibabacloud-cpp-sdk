// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTTOPICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTTOPICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHotTopicsResponseBodyDataStructureSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListHotTopicsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotTopicsResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListHotTopicsResponseBodyData& obj) { 
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
    ListHotTopicsResponseBodyData() = default ;
    ListHotTopicsResponseBodyData(const ListHotTopicsResponseBodyData &) = default ;
    ListHotTopicsResponseBodyData(ListHotTopicsResponseBodyData &&) = default ;
    ListHotTopicsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotTopicsResponseBodyData() = default ;
    ListHotTopicsResponseBodyData& operator=(const ListHotTopicsResponseBodyData &) = default ;
    ListHotTopicsResponseBodyData& operator=(ListHotTopicsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asyncTaskId_ == nullptr
        && return this->createUser_ == nullptr && return this->hotValue_ == nullptr && return this->id_ == nullptr && return this->status_ == nullptr && return this->structureSummary_ == nullptr
        && return this->summary_ == nullptr && return this->taskErrorMessage_ == nullptr && return this->taskStatus_ == nullptr && return this->topic_ == nullptr && return this->topicSource_ == nullptr
        && return this->version_ == nullptr; };
    // asyncTaskId Field Functions 
    bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
    void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
    inline string asyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, "") };
    inline ListHotTopicsResponseBodyData& setAsyncTaskId(string asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListHotTopicsResponseBodyData& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // hotValue Field Functions 
    bool hasHotValue() const { return this->hotValue_ != nullptr;};
    void deleteHotValue() { this->hotValue_ = nullptr;};
    inline int64_t hotValue() const { DARABONBA_PTR_GET_DEFAULT(hotValue_, 0L) };
    inline ListHotTopicsResponseBodyData& setHotValue(int64_t hotValue) { DARABONBA_PTR_SET_VALUE(hotValue_, hotValue) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListHotTopicsResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListHotTopicsResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // structureSummary Field Functions 
    bool hasStructureSummary() const { return this->structureSummary_ != nullptr;};
    void deleteStructureSummary() { this->structureSummary_ = nullptr;};
    inline const vector<Models::ListHotTopicsResponseBodyDataStructureSummary> & structureSummary() const { DARABONBA_PTR_GET_CONST(structureSummary_, vector<Models::ListHotTopicsResponseBodyDataStructureSummary>) };
    inline vector<Models::ListHotTopicsResponseBodyDataStructureSummary> structureSummary() { DARABONBA_PTR_GET(structureSummary_, vector<Models::ListHotTopicsResponseBodyDataStructureSummary>) };
    inline ListHotTopicsResponseBodyData& setStructureSummary(const vector<Models::ListHotTopicsResponseBodyDataStructureSummary> & structureSummary) { DARABONBA_PTR_SET_VALUE(structureSummary_, structureSummary) };
    inline ListHotTopicsResponseBodyData& setStructureSummary(vector<Models::ListHotTopicsResponseBodyDataStructureSummary> && structureSummary) { DARABONBA_PTR_SET_RVALUE(structureSummary_, structureSummary) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline ListHotTopicsResponseBodyData& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // taskErrorMessage Field Functions 
    bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
    void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
    inline string taskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
    inline ListHotTopicsResponseBodyData& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline ListHotTopicsResponseBodyData& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline ListHotTopicsResponseBodyData& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // topicSource Field Functions 
    bool hasTopicSource() const { return this->topicSource_ != nullptr;};
    void deleteTopicSource() { this->topicSource_ = nullptr;};
    inline string topicSource() const { DARABONBA_PTR_GET_DEFAULT(topicSource_, "") };
    inline ListHotTopicsResponseBodyData& setTopicSource(string topicSource) { DARABONBA_PTR_SET_VALUE(topicSource_, topicSource) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListHotTopicsResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> asyncTaskId_ = nullptr;
    std::shared_ptr<string> createUser_ = nullptr;
    std::shared_ptr<int64_t> hotValue_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::ListHotTopicsResponseBodyDataStructureSummary>> structureSummary_ = nullptr;
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

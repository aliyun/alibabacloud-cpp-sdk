// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class GetConnectorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnFields, columnFields_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DoneTime, doneTime_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(SubscriptionId, subscriptionId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnFields, columnFields_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DoneTime, doneTime_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(SubscriptionId, subscriptionId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetConnectorResponseBody() = default ;
    GetConnectorResponseBody(const GetConnectorResponseBody &) = default ;
    GetConnectorResponseBody(GetConnectorResponseBody &&) = default ;
    GetConnectorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectorResponseBody() = default ;
    GetConnectorResponseBody& operator=(const GetConnectorResponseBody &) = default ;
    GetConnectorResponseBody& operator=(GetConnectorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnFields_ == nullptr
        && this->config_ == nullptr && this->connectorId_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->doneTime_ == nullptr
        && this->projectName_ == nullptr && this->requestId_ == nullptr && this->state_ == nullptr && this->subscriptionId_ == nullptr && this->success_ == nullptr
        && this->topicName_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr; };
    // columnFields Field Functions 
    bool hasColumnFields() const { return this->columnFields_ != nullptr;};
    void deleteColumnFields() { this->columnFields_ = nullptr;};
    inline string getColumnFields() const { DARABONBA_PTR_GET_DEFAULT(columnFields_, "") };
    inline GetConnectorResponseBody& setColumnFields(string columnFields) { DARABONBA_PTR_SET_VALUE(columnFields_, columnFields) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetConnectorResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline GetConnectorResponseBody& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetConnectorResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetConnectorResponseBody& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // doneTime Field Functions 
    bool hasDoneTime() const { return this->doneTime_ != nullptr;};
    void deleteDoneTime() { this->doneTime_ = nullptr;};
    inline string getDoneTime() const { DARABONBA_PTR_GET_DEFAULT(doneTime_, "") };
    inline GetConnectorResponseBody& setDoneTime(string doneTime) { DARABONBA_PTR_SET_VALUE(doneTime_, doneTime) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetConnectorResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConnectorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetConnectorResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // subscriptionId Field Functions 
    bool hasSubscriptionId() const { return this->subscriptionId_ != nullptr;};
    void deleteSubscriptionId() { this->subscriptionId_ = nullptr;};
    inline string getSubscriptionId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionId_, "") };
    inline GetConnectorResponseBody& setSubscriptionId(string subscriptionId) { DARABONBA_PTR_SET_VALUE(subscriptionId_, subscriptionId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetConnectorResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetConnectorResponseBody& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetConnectorResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetConnectorResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    shared_ptr<string> columnFields_ {};
    shared_ptr<string> config_ {};
    shared_ptr<string> connectorId_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> creator_ {};
    shared_ptr<string> doneTime_ {};
    shared_ptr<string> projectName_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> state_ {};
    shared_ptr<string> subscriptionId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> topicName_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif

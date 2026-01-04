// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class ListConnectorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListConnectorsResponseBody() = default ;
    ListConnectorsResponseBody(const ListConnectorsResponseBody &) = default ;
    ListConnectorsResponseBody(ListConnectorsResponseBody &&) = default ;
    ListConnectorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectorsResponseBody() = default ;
    ListConnectorsResponseBody& operator=(const ListConnectorsResponseBody &) = default ;
    ListConnectorsResponseBody& operator=(ListConnectorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(Connector, connector_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(Connector, connector_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Connector : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Connector& obj) { 
          DARABONBA_PTR_TO_JSON(ColumnFields, columnFields_);
          DARABONBA_PTR_TO_JSON(Config, config_);
          DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(DoneTime, doneTime_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(SubscriptionId, subscriptionId_);
          DARABONBA_PTR_TO_JSON(TopicName, topicName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Connector& obj) { 
          DARABONBA_PTR_FROM_JSON(ColumnFields, columnFields_);
          DARABONBA_PTR_FROM_JSON(Config, config_);
          DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(DoneTime, doneTime_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(SubscriptionId, subscriptionId_);
          DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        Connector() = default ;
        Connector(const Connector &) = default ;
        Connector(Connector &&) = default ;
        Connector(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Connector() = default ;
        Connector& operator=(const Connector &) = default ;
        Connector& operator=(Connector &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->columnFields_ == nullptr
        && this->config_ == nullptr && this->connectorId_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->doneTime_ == nullptr
        && this->projectName_ == nullptr && this->state_ == nullptr && this->subscriptionId_ == nullptr && this->topicName_ == nullptr && this->type_ == nullptr
        && this->updateTime_ == nullptr; };
        // columnFields Field Functions 
        bool hasColumnFields() const { return this->columnFields_ != nullptr;};
        void deleteColumnFields() { this->columnFields_ = nullptr;};
        inline string getColumnFields() const { DARABONBA_PTR_GET_DEFAULT(columnFields_, "") };
        inline Connector& setColumnFields(string columnFields) { DARABONBA_PTR_SET_VALUE(columnFields_, columnFields) };


        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
        inline Connector& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


        // connectorId Field Functions 
        bool hasConnectorId() const { return this->connectorId_ != nullptr;};
        void deleteConnectorId() { this->connectorId_ = nullptr;};
        inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
        inline Connector& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Connector& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline Connector& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // doneTime Field Functions 
        bool hasDoneTime() const { return this->doneTime_ != nullptr;};
        void deleteDoneTime() { this->doneTime_ = nullptr;};
        inline string getDoneTime() const { DARABONBA_PTR_GET_DEFAULT(doneTime_, "") };
        inline Connector& setDoneTime(string doneTime) { DARABONBA_PTR_SET_VALUE(doneTime_, doneTime) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline Connector& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Connector& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // subscriptionId Field Functions 
        bool hasSubscriptionId() const { return this->subscriptionId_ != nullptr;};
        void deleteSubscriptionId() { this->subscriptionId_ = nullptr;};
        inline string getSubscriptionId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionId_, "") };
        inline Connector& setSubscriptionId(string subscriptionId) { DARABONBA_PTR_SET_VALUE(subscriptionId_, subscriptionId) };


        // topicName Field Functions 
        bool hasTopicName() const { return this->topicName_ != nullptr;};
        void deleteTopicName() { this->topicName_ = nullptr;};
        inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
        inline Connector& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Connector& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Connector& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<string> columnFields_ {};
        shared_ptr<string> config_ {};
        shared_ptr<string> connectorId_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> doneTime_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<string> state_ {};
        shared_ptr<string> subscriptionId_ {};
        shared_ptr<string> topicName_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->connector_ == nullptr; };
      // connector Field Functions 
      bool hasConnector() const { return this->connector_ != nullptr;};
      void deleteConnector() { this->connector_ = nullptr;};
      inline const vector<List::Connector> & getConnector() const { DARABONBA_PTR_GET_CONST(connector_, vector<List::Connector>) };
      inline vector<List::Connector> getConnector() { DARABONBA_PTR_GET(connector_, vector<List::Connector>) };
      inline List& setConnector(const vector<List::Connector> & connector) { DARABONBA_PTR_SET_VALUE(connector_, connector) };
      inline List& setConnector(vector<List::Connector> && connector) { DARABONBA_PTR_SET_RVALUE(connector_, connector) };


    protected:
      shared_ptr<vector<List::Connector>> connector_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const ListConnectorsResponseBody::List & getList() const { DARABONBA_PTR_GET_CONST(list_, ListConnectorsResponseBody::List) };
    inline ListConnectorsResponseBody::List getList() { DARABONBA_PTR_GET(list_, ListConnectorsResponseBody::List) };
    inline ListConnectorsResponseBody& setList(const ListConnectorsResponseBody::List & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListConnectorsResponseBody& setList(ListConnectorsResponseBody::List && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListConnectorsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListConnectorsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConnectorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListConnectorsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListConnectorsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<ListConnectorsResponseBody::List> list_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif

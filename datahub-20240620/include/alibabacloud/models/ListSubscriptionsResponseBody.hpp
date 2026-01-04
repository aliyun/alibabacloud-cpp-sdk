// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBSCRIPTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBSCRIPTIONSRESPONSEBODY_HPP_
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
  class ListSubscriptionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubscriptionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubscriptionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSubscriptionsResponseBody() = default ;
    ListSubscriptionsResponseBody(const ListSubscriptionsResponseBody &) = default ;
    ListSubscriptionsResponseBody(ListSubscriptionsResponseBody &&) = default ;
    ListSubscriptionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubscriptionsResponseBody() = default ;
    ListSubscriptionsResponseBody& operator=(const ListSubscriptionsResponseBody &) = default ;
    ListSubscriptionsResponseBody& operator=(ListSubscriptionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(Subscription, subscription_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(Subscription, subscription_);
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
      class Subscription : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Subscription& obj) { 
          DARABONBA_PTR_TO_JSON(Application, application_);
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(SubscriptionId, subscriptionId_);
          DARABONBA_PTR_TO_JSON(TopicName, topicName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Subscription& obj) { 
          DARABONBA_PTR_FROM_JSON(Application, application_);
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(SubscriptionId, subscriptionId_);
          DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        Subscription() = default ;
        Subscription(const Subscription &) = default ;
        Subscription(Subscription &&) = default ;
        Subscription(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Subscription() = default ;
        Subscription& operator=(const Subscription &) = default ;
        Subscription& operator=(Subscription &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->application_ == nullptr
        && this->comment_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->projectName_ == nullptr && this->state_ == nullptr
        && this->subscriptionId_ == nullptr && this->topicName_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr; };
        // application Field Functions 
        bool hasApplication() const { return this->application_ != nullptr;};
        void deleteApplication() { this->application_ = nullptr;};
        inline string getApplication() const { DARABONBA_PTR_GET_DEFAULT(application_, "") };
        inline Subscription& setApplication(string application) { DARABONBA_PTR_SET_VALUE(application_, application) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline Subscription& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Subscription& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline Subscription& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline Subscription& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline int32_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
        inline Subscription& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // subscriptionId Field Functions 
        bool hasSubscriptionId() const { return this->subscriptionId_ != nullptr;};
        void deleteSubscriptionId() { this->subscriptionId_ = nullptr;};
        inline string getSubscriptionId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionId_, "") };
        inline Subscription& setSubscriptionId(string subscriptionId) { DARABONBA_PTR_SET_VALUE(subscriptionId_, subscriptionId) };


        // topicName Field Functions 
        bool hasTopicName() const { return this->topicName_ != nullptr;};
        void deleteTopicName() { this->topicName_ = nullptr;};
        inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
        inline Subscription& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Subscription& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Subscription& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<string> application_ {};
        shared_ptr<string> comment_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<int32_t> state_ {};
        shared_ptr<string> subscriptionId_ {};
        shared_ptr<string> topicName_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->subscription_ == nullptr; };
      // subscription Field Functions 
      bool hasSubscription() const { return this->subscription_ != nullptr;};
      void deleteSubscription() { this->subscription_ = nullptr;};
      inline const vector<List::Subscription> & getSubscription() const { DARABONBA_PTR_GET_CONST(subscription_, vector<List::Subscription>) };
      inline vector<List::Subscription> getSubscription() { DARABONBA_PTR_GET(subscription_, vector<List::Subscription>) };
      inline List& setSubscription(const vector<List::Subscription> & subscription) { DARABONBA_PTR_SET_VALUE(subscription_, subscription) };
      inline List& setSubscription(vector<List::Subscription> && subscription) { DARABONBA_PTR_SET_RVALUE(subscription_, subscription) };


    protected:
      shared_ptr<vector<List::Subscription>> subscription_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const ListSubscriptionsResponseBody::List & getList() const { DARABONBA_PTR_GET_CONST(list_, ListSubscriptionsResponseBody::List) };
    inline ListSubscriptionsResponseBody::List getList() { DARABONBA_PTR_GET(list_, ListSubscriptionsResponseBody::List) };
    inline ListSubscriptionsResponseBody& setList(const ListSubscriptionsResponseBody::List & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListSubscriptionsResponseBody& setList(ListSubscriptionsResponseBody::List && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSubscriptionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSubscriptionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSubscriptionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSubscriptionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSubscriptionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<ListSubscriptionsResponseBody::List> list_ {};
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

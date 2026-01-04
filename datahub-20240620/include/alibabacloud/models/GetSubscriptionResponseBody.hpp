// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class GetSubscriptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Application, application_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(SubscriptionId, subscriptionId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Application, application_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(SubscriptionId, subscriptionId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetSubscriptionResponseBody() = default ;
    GetSubscriptionResponseBody(const GetSubscriptionResponseBody &) = default ;
    GetSubscriptionResponseBody(GetSubscriptionResponseBody &&) = default ;
    GetSubscriptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionResponseBody() = default ;
    GetSubscriptionResponseBody& operator=(const GetSubscriptionResponseBody &) = default ;
    GetSubscriptionResponseBody& operator=(GetSubscriptionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->application_ == nullptr
        && this->comment_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->projectName_ == nullptr && this->requestId_ == nullptr
        && this->state_ == nullptr && this->subscriptionId_ == nullptr && this->success_ == nullptr && this->topicName_ == nullptr && this->type_ == nullptr
        && this->updateTime_ == nullptr; };
    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline string getApplication() const { DARABONBA_PTR_GET_DEFAULT(application_, "") };
    inline GetSubscriptionResponseBody& setApplication(string application) { DARABONBA_PTR_SET_VALUE(application_, application) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetSubscriptionResponseBody& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetSubscriptionResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetSubscriptionResponseBody& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetSubscriptionResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSubscriptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline GetSubscriptionResponseBody& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // subscriptionId Field Functions 
    bool hasSubscriptionId() const { return this->subscriptionId_ != nullptr;};
    void deleteSubscriptionId() { this->subscriptionId_ = nullptr;};
    inline string getSubscriptionId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionId_, "") };
    inline GetSubscriptionResponseBody& setSubscriptionId(string subscriptionId) { DARABONBA_PTR_SET_VALUE(subscriptionId_, subscriptionId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSubscriptionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetSubscriptionResponseBody& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetSubscriptionResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetSubscriptionResponseBody& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    shared_ptr<string> application_ {};
    shared_ptr<string> comment_ {};
    shared_ptr<int64_t> createTime_ {};
    shared_ptr<string> creator_ {};
    shared_ptr<string> projectName_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> state_ {};
    shared_ptr<string> subscriptionId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> topicName_ {};
    shared_ptr<string> type_ {};
    shared_ptr<int64_t> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif

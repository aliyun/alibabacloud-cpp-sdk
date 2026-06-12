// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUBSCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUBSCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class CreateSubscriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSubscriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Application, application_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SubscriptionId, subscriptionId_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSubscriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Application, application_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SubscriptionId, subscriptionId_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    CreateSubscriptionRequest() = default ;
    CreateSubscriptionRequest(const CreateSubscriptionRequest &) = default ;
    CreateSubscriptionRequest(CreateSubscriptionRequest &&) = default ;
    CreateSubscriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSubscriptionRequest() = default ;
    CreateSubscriptionRequest& operator=(const CreateSubscriptionRequest &) = default ;
    CreateSubscriptionRequest& operator=(CreateSubscriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->application_ == nullptr
        && this->comment_ == nullptr && this->projectName_ == nullptr && this->subscriptionId_ == nullptr && this->topicName_ == nullptr; };
    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline string getApplication() const { DARABONBA_PTR_GET_DEFAULT(application_, "") };
    inline CreateSubscriptionRequest& setApplication(string application) { DARABONBA_PTR_SET_VALUE(application_, application) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateSubscriptionRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateSubscriptionRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // subscriptionId Field Functions 
    bool hasSubscriptionId() const { return this->subscriptionId_ != nullptr;};
    void deleteSubscriptionId() { this->subscriptionId_ = nullptr;};
    inline string getSubscriptionId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionId_, "") };
    inline CreateSubscriptionRequest& setSubscriptionId(string subscriptionId) { DARABONBA_PTR_SET_VALUE(subscriptionId_, subscriptionId) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline CreateSubscriptionRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // This parameter is required.
    shared_ptr<string> application_ {};
    // This parameter is required.
    shared_ptr<string> comment_ {};
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    shared_ptr<string> subscriptionId_ {};
    // This parameter is required.
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif

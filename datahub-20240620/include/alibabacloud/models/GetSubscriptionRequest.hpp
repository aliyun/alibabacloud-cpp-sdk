// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class GetSubscriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SubscriptionId, subscriptionId_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SubscriptionId, subscriptionId_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    GetSubscriptionRequest() = default ;
    GetSubscriptionRequest(const GetSubscriptionRequest &) = default ;
    GetSubscriptionRequest(GetSubscriptionRequest &&) = default ;
    GetSubscriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionRequest() = default ;
    GetSubscriptionRequest& operator=(const GetSubscriptionRequest &) = default ;
    GetSubscriptionRequest& operator=(GetSubscriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectName_ == nullptr
        && this->subscriptionId_ == nullptr && this->topicName_ == nullptr; };
    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetSubscriptionRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // subscriptionId Field Functions 
    bool hasSubscriptionId() const { return this->subscriptionId_ != nullptr;};
    void deleteSubscriptionId() { this->subscriptionId_ = nullptr;};
    inline string getSubscriptionId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionId_, "") };
    inline GetSubscriptionRequest& setSubscriptionId(string subscriptionId) { DARABONBA_PTR_SET_VALUE(subscriptionId_, subscriptionId) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetSubscriptionRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // This parameter is required.
    shared_ptr<string> subscriptionId_ {};
    // This parameter is required.
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYKNOWLEDGEBASEBUILDTASKINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRYKNOWLEDGEBASEBUILDTASKINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class RetryKnowledgeBaseBuildTaskInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryKnowledgeBaseBuildTaskInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(TaskInstanceId, taskInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RetryKnowledgeBaseBuildTaskInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(TaskInstanceId, taskInstanceId_);
    };
    RetryKnowledgeBaseBuildTaskInstanceRequest() = default ;
    RetryKnowledgeBaseBuildTaskInstanceRequest(const RetryKnowledgeBaseBuildTaskInstanceRequest &) = default ;
    RetryKnowledgeBaseBuildTaskInstanceRequest(RetryKnowledgeBaseBuildTaskInstanceRequest &&) = default ;
    RetryKnowledgeBaseBuildTaskInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryKnowledgeBaseBuildTaskInstanceRequest() = default ;
    RetryKnowledgeBaseBuildTaskInstanceRequest& operator=(const RetryKnowledgeBaseBuildTaskInstanceRequest &) = default ;
    RetryKnowledgeBaseBuildTaskInstanceRequest& operator=(RetryKnowledgeBaseBuildTaskInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->knowledgeBaseId_ == nullptr && this->taskInstanceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RetryKnowledgeBaseBuildTaskInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline RetryKnowledgeBaseBuildTaskInstanceRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // taskInstanceId Field Functions 
    bool hasTaskInstanceId() const { return this->taskInstanceId_ != nullptr;};
    void deleteTaskInstanceId() { this->taskInstanceId_ = nullptr;};
    inline string getTaskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(taskInstanceId_, "") };
    inline RetryKnowledgeBaseBuildTaskInstanceRequest& setTaskInstanceId(string taskInstanceId) { DARABONBA_PTR_SET_VALUE(taskInstanceId_, taskInstanceId) };


  protected:
    // The idempotency key for the retry operation. Keep the original value when you resend the same request, and use a new token when you initiate another retry.
    shared_ptr<string> clientToken_ {};
    // The ID of the knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The ID of the instance to be retried.
    // 
    // This parameter is required.
    shared_ptr<string> taskInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEMORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEMORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteMemoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMemoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMemoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    DeleteMemoriesRequest() = default ;
    DeleteMemoriesRequest(const DeleteMemoriesRequest &) = default ;
    DeleteMemoriesRequest(DeleteMemoriesRequest &&) = default ;
    DeleteMemoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMemoriesRequest() = default ;
    DeleteMemoriesRequest& operator=(const DeleteMemoriesRequest &) = default ;
    DeleteMemoriesRequest& operator=(DeleteMemoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->appId_ == nullptr && this->runId_ == nullptr && this->userId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline DeleteMemoriesRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteMemoriesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline DeleteMemoriesRequest& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DeleteMemoriesRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The agent ID of the application.
    shared_ptr<string> agentId_ {};
    // The application ID.
    shared_ptr<string> appId_ {};
    // The run ID.
    shared_ptr<string> runId_ {};
    // The user ID.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

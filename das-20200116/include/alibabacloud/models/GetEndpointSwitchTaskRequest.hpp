// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENDPOINTSWITCHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETENDPOINTSWITCHTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetEndpointSwitchTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEndpointSwitchTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(__context, context_);
      DARABONBA_PTR_TO_JSON(accessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(signature, signature_);
      DARABONBA_PTR_TO_JSON(skipAuth, skipAuth_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetEndpointSwitchTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(__context, context_);
      DARABONBA_PTR_FROM_JSON(accessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(signature, signature_);
      DARABONBA_PTR_FROM_JSON(skipAuth, skipAuth_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
    };
    GetEndpointSwitchTaskRequest() = default ;
    GetEndpointSwitchTaskRequest(const GetEndpointSwitchTaskRequest &) = default ;
    GetEndpointSwitchTaskRequest(GetEndpointSwitchTaskRequest &&) = default ;
    GetEndpointSwitchTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEndpointSwitchTaskRequest() = default ;
    GetEndpointSwitchTaskRequest& operator=(const GetEndpointSwitchTaskRequest &) = default ;
    GetEndpointSwitchTaskRequest& operator=(GetEndpointSwitchTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr
        && this->uid_ == nullptr && this->userId_ == nullptr && this->context_ == nullptr && this->accessKey_ == nullptr && this->signature_ == nullptr
        && this->skipAuth_ == nullptr && this->timestamp_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetEndpointSwitchTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GetEndpointSwitchTaskRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetEndpointSwitchTaskRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string getContext() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline GetEndpointSwitchTaskRequest& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string getAccessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline GetEndpointSwitchTaskRequest& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GetEndpointSwitchTaskRequest& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // skipAuth Field Functions 
    bool hasSkipAuth() const { return this->skipAuth_ != nullptr;};
    void deleteSkipAuth() { this->skipAuth_ = nullptr;};
    inline string getSkipAuth() const { DARABONBA_PTR_GET_DEFAULT(skipAuth_, "") };
    inline GetEndpointSwitchTaskRequest& setSkipAuth(string skipAuth) { DARABONBA_PTR_SET_VALUE(skipAuth_, skipAuth) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline GetEndpointSwitchTaskRequest& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    shared_ptr<string> taskId_ {};
    shared_ptr<string> uid_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<string> context_ {};
    shared_ptr<string> accessKey_ {};
    shared_ptr<string> signature_ {};
    shared_ptr<string> skipAuth_ {};
    shared_ptr<string> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif

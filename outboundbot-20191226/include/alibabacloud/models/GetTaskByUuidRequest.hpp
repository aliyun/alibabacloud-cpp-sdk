// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKBYUUIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTASKBYUUIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetTaskByUuidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskByUuidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WithConversations, withConversations_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskByUuidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WithConversations, withConversations_);
    };
    GetTaskByUuidRequest() = default ;
    GetTaskByUuidRequest(const GetTaskByUuidRequest &) = default ;
    GetTaskByUuidRequest(GetTaskByUuidRequest &&) = default ;
    GetTaskByUuidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskByUuidRequest() = default ;
    GetTaskByUuidRequest& operator=(const GetTaskByUuidRequest &) = default ;
    GetTaskByUuidRequest& operator=(GetTaskByUuidRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->taskId_ == nullptr && return this->withConversations_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetTaskByUuidRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetTaskByUuidRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // withConversations Field Functions 
    bool hasWithConversations() const { return this->withConversations_ != nullptr;};
    void deleteWithConversations() { this->withConversations_ = nullptr;};
    inline bool withConversations() const { DARABONBA_PTR_GET_DEFAULT(withConversations_, false) };
    inline GetTaskByUuidRequest& setWithConversations(bool withConversations) { DARABONBA_PTR_SET_VALUE(withConversations_, withConversations) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<bool> withConversations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

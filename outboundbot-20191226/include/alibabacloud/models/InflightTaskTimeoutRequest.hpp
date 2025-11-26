// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INFLIGHTTASKTIMEOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INFLIGHTTASKTIMEOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class InflightTaskTimeoutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InflightTaskTimeoutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceOwnerId, instanceOwnerId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, InflightTaskTimeoutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceOwnerId, instanceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    InflightTaskTimeoutRequest() = default ;
    InflightTaskTimeoutRequest(const InflightTaskTimeoutRequest &) = default ;
    InflightTaskTimeoutRequest(InflightTaskTimeoutRequest &&) = default ;
    InflightTaskTimeoutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InflightTaskTimeoutRequest() = default ;
    InflightTaskTimeoutRequest& operator=(const InflightTaskTimeoutRequest &) = default ;
    InflightTaskTimeoutRequest& operator=(InflightTaskTimeoutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->instanceOwnerId_ == nullptr && return this->taskId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline InflightTaskTimeoutRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceOwnerId Field Functions 
    bool hasInstanceOwnerId() const { return this->instanceOwnerId_ != nullptr;};
    void deleteInstanceOwnerId() { this->instanceOwnerId_ = nullptr;};
    inline int64_t instanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(instanceOwnerId_, 0L) };
    inline InflightTaskTimeoutRequest& setInstanceOwnerId(int64_t instanceOwnerId) { DARABONBA_PTR_SET_VALUE(instanceOwnerId_, instanceOwnerId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline InflightTaskTimeoutRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> instanceOwnerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

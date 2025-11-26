// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKPREPARINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TASKPREPARINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class TaskPreparingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskPreparingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceOwnerId, instanceOwnerId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, TaskPreparingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceOwnerId, instanceOwnerId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    TaskPreparingRequest() = default ;
    TaskPreparingRequest(const TaskPreparingRequest &) = default ;
    TaskPreparingRequest(TaskPreparingRequest &&) = default ;
    TaskPreparingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskPreparingRequest() = default ;
    TaskPreparingRequest& operator=(const TaskPreparingRequest &) = default ;
    TaskPreparingRequest& operator=(TaskPreparingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->instanceOwnerId_ == nullptr && return this->jobId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline TaskPreparingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceOwnerId Field Functions 
    bool hasInstanceOwnerId() const { return this->instanceOwnerId_ != nullptr;};
    void deleteInstanceOwnerId() { this->instanceOwnerId_ = nullptr;};
    inline int64_t instanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(instanceOwnerId_, 0L) };
    inline TaskPreparingRequest& setInstanceOwnerId(int64_t instanceOwnerId) { DARABONBA_PTR_SET_VALUE(instanceOwnerId_, instanceOwnerId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline TaskPreparingRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> instanceOwnerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

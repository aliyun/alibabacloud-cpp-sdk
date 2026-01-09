// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKPROGRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKPROGRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAiOutboundTaskProgressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiOutboundTaskProgressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchVersion, batchVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiOutboundTaskProgressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchVersion, batchVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetAiOutboundTaskProgressRequest() = default ;
    GetAiOutboundTaskProgressRequest(const GetAiOutboundTaskProgressRequest &) = default ;
    GetAiOutboundTaskProgressRequest(GetAiOutboundTaskProgressRequest &&) = default ;
    GetAiOutboundTaskProgressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiOutboundTaskProgressRequest() = default ;
    GetAiOutboundTaskProgressRequest& operator=(const GetAiOutboundTaskProgressRequest &) = default ;
    GetAiOutboundTaskProgressRequest& operator=(GetAiOutboundTaskProgressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchVersion_ == nullptr
        && this->instanceId_ == nullptr && this->taskId_ == nullptr; };
    // batchVersion Field Functions 
    bool hasBatchVersion() const { return this->batchVersion_ != nullptr;};
    void deleteBatchVersion() { this->batchVersion_ = nullptr;};
    inline int32_t getBatchVersion() const { DARABONBA_PTR_GET_DEFAULT(batchVersion_, 0) };
    inline GetAiOutboundTaskProgressRequest& setBatchVersion(int32_t batchVersion) { DARABONBA_PTR_SET_VALUE(batchVersion_, batchVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAiOutboundTaskProgressRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetAiOutboundTaskProgressRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<int32_t> batchVersion_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif

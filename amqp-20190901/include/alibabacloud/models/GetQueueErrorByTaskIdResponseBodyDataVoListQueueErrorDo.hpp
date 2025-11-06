// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUEUEERRORBYTASKIDRESPONSEBODYDATAVOLISTQUEUEERRORDO_HPP_
#define ALIBABACLOUD_MODELS_GETQUEUEERRORBYTASKIDRESPONSEBODYDATAVOLISTQUEUEERRORDO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO& obj) { 
      DARABONBA_PTR_TO_JSON(AutoDelete, autoDelete_);
      DARABONBA_PTR_TO_JSON(Durable, durable_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoDelete, autoDelete_);
      DARABONBA_PTR_FROM_JSON(Durable, durable_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO() = default ;
    GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO(const GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO &) = default ;
    GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO(GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO &&) = default ;
    GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO() = default ;
    GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO& operator=(const GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO &) = default ;
    GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO& operator=(GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoDelete_ == nullptr
        && return this->durable_ == nullptr && return this->errorMessage_ == nullptr && return this->queueName_ == nullptr && return this->taskId_ == nullptr && return this->vhostName_ == nullptr; };
    // autoDelete Field Functions 
    bool hasAutoDelete() const { return this->autoDelete_ != nullptr;};
    void deleteAutoDelete() { this->autoDelete_ = nullptr;};
    inline bool autoDelete() const { DARABONBA_PTR_GET_DEFAULT(autoDelete_, false) };
    inline GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO& setAutoDelete(bool autoDelete) { DARABONBA_PTR_SET_VALUE(autoDelete_, autoDelete) };


    // durable Field Functions 
    bool hasDurable() const { return this->durable_ != nullptr;};
    void deleteDurable() { this->durable_ = nullptr;};
    inline bool durable() const { DARABONBA_PTR_GET_DEFAULT(durable_, false) };
    inline GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO& setDurable(bool durable) { DARABONBA_PTR_SET_VALUE(durable_, durable) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline int32_t errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, 0) };
    inline GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO& setErrorMessage(int32_t errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<bool> autoDelete_ = nullptr;
    std::shared_ptr<bool> durable_ = nullptr;
    std::shared_ptr<int32_t> errorMessage_ = nullptr;
    std::shared_ptr<string> queueName_ = nullptr;
    std::shared_ptr<int64_t> taskId_ = nullptr;
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PULLTASKRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_PULLTASKRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mseap20210118
{
namespace Models
{
  class PullTaskResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PullTaskResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OutTaskId, outTaskId_);
      DARABONBA_PTR_TO_JSON(PrincipalKey, principalKey_);
      DARABONBA_PTR_TO_JSON(TaskData, taskData_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, PullTaskResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OutTaskId, outTaskId_);
      DARABONBA_PTR_FROM_JSON(PrincipalKey, principalKey_);
      DARABONBA_PTR_FROM_JSON(TaskData, taskData_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    PullTaskResponseBodyModule() = default ;
    PullTaskResponseBodyModule(const PullTaskResponseBodyModule &) = default ;
    PullTaskResponseBodyModule(PullTaskResponseBodyModule &&) = default ;
    PullTaskResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PullTaskResponseBodyModule() = default ;
    PullTaskResponseBodyModule& operator=(const PullTaskResponseBodyModule &) = default ;
    PullTaskResponseBodyModule& operator=(PullTaskResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr
        && return this->orderId_ == nullptr && return this->outTaskId_ == nullptr && return this->principalKey_ == nullptr && return this->taskData_ == nullptr && return this->taskId_ == nullptr
        && return this->taskType_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline PullTaskResponseBodyModule& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline PullTaskResponseBodyModule& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outTaskId Field Functions 
    bool hasOutTaskId() const { return this->outTaskId_ != nullptr;};
    void deleteOutTaskId() { this->outTaskId_ = nullptr;};
    inline string outTaskId() const { DARABONBA_PTR_GET_DEFAULT(outTaskId_, "") };
    inline PullTaskResponseBodyModule& setOutTaskId(string outTaskId) { DARABONBA_PTR_SET_VALUE(outTaskId_, outTaskId) };


    // principalKey Field Functions 
    bool hasPrincipalKey() const { return this->principalKey_ != nullptr;};
    void deletePrincipalKey() { this->principalKey_ = nullptr;};
    inline string principalKey() const { DARABONBA_PTR_GET_DEFAULT(principalKey_, "") };
    inline PullTaskResponseBodyModule& setPrincipalKey(string principalKey) { DARABONBA_PTR_SET_VALUE(principalKey_, principalKey) };


    // taskData Field Functions 
    bool hasTaskData() const { return this->taskData_ != nullptr;};
    void deleteTaskData() { this->taskData_ = nullptr;};
    inline string taskData() const { DARABONBA_PTR_GET_DEFAULT(taskData_, "") };
    inline PullTaskResponseBodyModule& setTaskData(string taskData) { DARABONBA_PTR_SET_VALUE(taskData_, taskData) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline PullTaskResponseBodyModule& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline PullTaskResponseBodyModule& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    std::shared_ptr<string> bizCode_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> outTaskId_ = nullptr;
    std::shared_ptr<string> principalKey_ = nullptr;
    std::shared_ptr<string> taskData_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mseap20210118
#endif

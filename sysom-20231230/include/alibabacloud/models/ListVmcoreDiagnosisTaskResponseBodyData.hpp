// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVMCOREDIAGNOSISTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTVMCOREDIAGNOSISTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListVmcoreDiagnosisTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVmcoreDiagnosisTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(taskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, ListVmcoreDiagnosisTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(taskType, taskType_);
    };
    ListVmcoreDiagnosisTaskResponseBodyData() = default ;
    ListVmcoreDiagnosisTaskResponseBodyData(const ListVmcoreDiagnosisTaskResponseBodyData &) = default ;
    ListVmcoreDiagnosisTaskResponseBodyData(ListVmcoreDiagnosisTaskResponseBodyData &&) = default ;
    ListVmcoreDiagnosisTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVmcoreDiagnosisTaskResponseBodyData() = default ;
    ListVmcoreDiagnosisTaskResponseBodyData& operator=(const ListVmcoreDiagnosisTaskResponseBodyData &) = default ;
    ListVmcoreDiagnosisTaskResponseBodyData& operator=(ListVmcoreDiagnosisTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && return this->errorMsg_ == nullptr && return this->taskId_ == nullptr && return this->taskStatus_ == nullptr && return this->taskType_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListVmcoreDiagnosisTaskResponseBodyData& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListVmcoreDiagnosisTaskResponseBodyData& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListVmcoreDiagnosisTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline ListVmcoreDiagnosisTaskResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListVmcoreDiagnosisTaskResponseBodyData& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVMCOREDIAGNOSISTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETVMCOREDIAGNOSISTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVmcoreDiagnosisTaskResponseBodyDataUrls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetVmcoreDiagnosisTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVmcoreDiagnosisTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(diagnoseResult, diagnoseResult_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(taskType, taskType_);
      DARABONBA_PTR_TO_JSON(urls, urls_);
    };
    friend void from_json(const Darabonba::Json& j, GetVmcoreDiagnosisTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(diagnoseResult, diagnoseResult_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(taskType, taskType_);
      DARABONBA_PTR_FROM_JSON(urls, urls_);
    };
    GetVmcoreDiagnosisTaskResponseBodyData() = default ;
    GetVmcoreDiagnosisTaskResponseBodyData(const GetVmcoreDiagnosisTaskResponseBodyData &) = default ;
    GetVmcoreDiagnosisTaskResponseBodyData(GetVmcoreDiagnosisTaskResponseBodyData &&) = default ;
    GetVmcoreDiagnosisTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVmcoreDiagnosisTaskResponseBodyData() = default ;
    GetVmcoreDiagnosisTaskResponseBodyData& operator=(const GetVmcoreDiagnosisTaskResponseBodyData &) = default ;
    GetVmcoreDiagnosisTaskResponseBodyData& operator=(GetVmcoreDiagnosisTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && return this->diagnoseResult_ == nullptr && return this->errorMsg_ == nullptr && return this->taskId_ == nullptr && return this->taskStatus_ == nullptr && return this->taskType_ == nullptr
        && return this->urls_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline GetVmcoreDiagnosisTaskResponseBodyData& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // diagnoseResult Field Functions 
    bool hasDiagnoseResult() const { return this->diagnoseResult_ != nullptr;};
    void deleteDiagnoseResult() { this->diagnoseResult_ = nullptr;};
    inline string diagnoseResult() const { DARABONBA_PTR_GET_DEFAULT(diagnoseResult_, "") };
    inline GetVmcoreDiagnosisTaskResponseBodyData& setDiagnoseResult(string diagnoseResult) { DARABONBA_PTR_SET_VALUE(diagnoseResult_, diagnoseResult) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetVmcoreDiagnosisTaskResponseBodyData& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetVmcoreDiagnosisTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetVmcoreDiagnosisTaskResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetVmcoreDiagnosisTaskResponseBodyData& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // urls Field Functions 
    bool hasUrls() const { return this->urls_ != nullptr;};
    void deleteUrls() { this->urls_ = nullptr;};
    inline const Models::GetVmcoreDiagnosisTaskResponseBodyDataUrls & urls() const { DARABONBA_PTR_GET_CONST(urls_, Models::GetVmcoreDiagnosisTaskResponseBodyDataUrls) };
    inline Models::GetVmcoreDiagnosisTaskResponseBodyDataUrls urls() { DARABONBA_PTR_GET(urls_, Models::GetVmcoreDiagnosisTaskResponseBodyDataUrls) };
    inline GetVmcoreDiagnosisTaskResponseBodyData& setUrls(const Models::GetVmcoreDiagnosisTaskResponseBodyDataUrls & urls) { DARABONBA_PTR_SET_VALUE(urls_, urls) };
    inline GetVmcoreDiagnosisTaskResponseBodyData& setUrls(Models::GetVmcoreDiagnosisTaskResponseBodyDataUrls && urls) { DARABONBA_PTR_SET_RVALUE(urls_, urls) };


  protected:
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> diagnoseResult_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<Models::GetVmcoreDiagnosisTaskResponseBodyDataUrls> urls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif

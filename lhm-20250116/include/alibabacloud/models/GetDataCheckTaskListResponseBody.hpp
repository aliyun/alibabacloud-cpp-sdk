// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACHECKTASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATACHECKTASKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetDataCheckTaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCheckTaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCheckTaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    GetDataCheckTaskListResponseBody() = default ;
    GetDataCheckTaskListResponseBody(const GetDataCheckTaskListResponseBody &) = default ;
    GetDataCheckTaskListResponseBody(GetDataCheckTaskListResponseBody &&) = default ;
    GetDataCheckTaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCheckTaskListResponseBody() = default ;
    GetDataCheckTaskListResponseBody& operator=(const GetDataCheckTaskListResponseBody &) = default ;
    GetDataCheckTaskListResponseBody& operator=(GetDataCheckTaskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(checkResult, checkResult_);
        DARABONBA_PTR_TO_JSON(checkTableNum, checkTableNum_);
        DARABONBA_PTR_TO_JSON(checkTemplateId, checkTemplateId_);
        DARABONBA_PTR_TO_JSON(checkType, checkType_);
        DARABONBA_PTR_TO_JSON(dstDsId, dstDsId_);
        DARABONBA_PTR_TO_JSON(dstDsName, dstDsName_);
        DARABONBA_PTR_TO_JSON(dstDsType, dstDsType_);
        DARABONBA_PTR_TO_JSON(dstEngineId, dstEngineId_);
        DARABONBA_PTR_TO_JSON(dstEngineName, dstEngineName_);
        DARABONBA_PTR_TO_JSON(dstEngineType, dstEngineType_);
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(errorTableNum, errorTableNum_);
        DARABONBA_PTR_TO_JSON(execStatus, execStatus_);
        DARABONBA_PTR_TO_JSON(execTime, execTime_);
        DARABONBA_PTR_TO_JSON(executeType, executeType_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(isScheduled, isScheduled_);
        DARABONBA_PTR_TO_JSON(lastBatchId, lastBatchId_);
        DARABONBA_PTR_TO_JSON(lastFinishedId, lastFinishedId_);
        DARABONBA_ANY_TO_JSON(passProcess, passProcess_);
        DARABONBA_PTR_TO_JSON(process, process_);
        DARABONBA_PTR_TO_JSON(reportTime, reportTime_);
        DARABONBA_PTR_TO_JSON(reportTitle, reportTitle_);
        DARABONBA_PTR_TO_JSON(skipTableNum, skipTableNum_);
        DARABONBA_PTR_TO_JSON(srcDsId, srcDsId_);
        DARABONBA_PTR_TO_JSON(srcDsName, srcDsName_);
        DARABONBA_PTR_TO_JSON(srcDsType, srcDsType_);
        DARABONBA_PTR_TO_JSON(srcEngineId, srcEngineId_);
        DARABONBA_PTR_TO_JSON(srcEngineName, srcEngineName_);
        DARABONBA_PTR_TO_JSON(srcEngineType, srcEngineType_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(successfulTableNum, successfulTableNum_);
        DARABONBA_PTR_TO_JSON(taskDescription, taskDescription_);
        DARABONBA_PTR_TO_JSON(taskMode, taskMode_);
        DARABONBA_PTR_TO_JSON(taskName, taskName_);
        DARABONBA_PTR_TO_JSON(templateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(checkResult, checkResult_);
        DARABONBA_PTR_FROM_JSON(checkTableNum, checkTableNum_);
        DARABONBA_PTR_FROM_JSON(checkTemplateId, checkTemplateId_);
        DARABONBA_PTR_FROM_JSON(checkType, checkType_);
        DARABONBA_PTR_FROM_JSON(dstDsId, dstDsId_);
        DARABONBA_PTR_FROM_JSON(dstDsName, dstDsName_);
        DARABONBA_PTR_FROM_JSON(dstDsType, dstDsType_);
        DARABONBA_PTR_FROM_JSON(dstEngineId, dstEngineId_);
        DARABONBA_PTR_FROM_JSON(dstEngineName, dstEngineName_);
        DARABONBA_PTR_FROM_JSON(dstEngineType, dstEngineType_);
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(errorTableNum, errorTableNum_);
        DARABONBA_PTR_FROM_JSON(execStatus, execStatus_);
        DARABONBA_PTR_FROM_JSON(execTime, execTime_);
        DARABONBA_PTR_FROM_JSON(executeType, executeType_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(isScheduled, isScheduled_);
        DARABONBA_PTR_FROM_JSON(lastBatchId, lastBatchId_);
        DARABONBA_PTR_FROM_JSON(lastFinishedId, lastFinishedId_);
        DARABONBA_ANY_FROM_JSON(passProcess, passProcess_);
        DARABONBA_PTR_FROM_JSON(process, process_);
        DARABONBA_PTR_FROM_JSON(reportTime, reportTime_);
        DARABONBA_PTR_FROM_JSON(reportTitle, reportTitle_);
        DARABONBA_PTR_FROM_JSON(skipTableNum, skipTableNum_);
        DARABONBA_PTR_FROM_JSON(srcDsId, srcDsId_);
        DARABONBA_PTR_FROM_JSON(srcDsName, srcDsName_);
        DARABONBA_PTR_FROM_JSON(srcDsType, srcDsType_);
        DARABONBA_PTR_FROM_JSON(srcEngineId, srcEngineId_);
        DARABONBA_PTR_FROM_JSON(srcEngineName, srcEngineName_);
        DARABONBA_PTR_FROM_JSON(srcEngineType, srcEngineType_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(successfulTableNum, successfulTableNum_);
        DARABONBA_PTR_FROM_JSON(taskDescription, taskDescription_);
        DARABONBA_PTR_FROM_JSON(taskMode, taskMode_);
        DARABONBA_PTR_FROM_JSON(taskName, taskName_);
        DARABONBA_PTR_FROM_JSON(templateName, templateName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkResult_ == nullptr
        && this->checkTableNum_ == nullptr && this->checkTemplateId_ == nullptr && this->checkType_ == nullptr && this->dstDsId_ == nullptr && this->dstDsName_ == nullptr
        && this->dstDsType_ == nullptr && this->dstEngineId_ == nullptr && this->dstEngineName_ == nullptr && this->dstEngineType_ == nullptr && this->endTime_ == nullptr
        && this->errorMsg_ == nullptr && this->errorTableNum_ == nullptr && this->execStatus_ == nullptr && this->execTime_ == nullptr && this->executeType_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->isScheduled_ == nullptr && this->lastBatchId_ == nullptr
        && this->lastFinishedId_ == nullptr && this->passProcess_ == nullptr && this->process_ == nullptr && this->reportTime_ == nullptr && this->reportTitle_ == nullptr
        && this->skipTableNum_ == nullptr && this->srcDsId_ == nullptr && this->srcDsName_ == nullptr && this->srcDsType_ == nullptr && this->srcEngineId_ == nullptr
        && this->srcEngineName_ == nullptr && this->srcEngineType_ == nullptr && this->startTime_ == nullptr && this->successfulTableNum_ == nullptr && this->taskDescription_ == nullptr
        && this->taskMode_ == nullptr && this->taskName_ == nullptr && this->templateName_ == nullptr; };
      // checkResult Field Functions 
      bool hasCheckResult() const { return this->checkResult_ != nullptr;};
      void deleteCheckResult() { this->checkResult_ = nullptr;};
      inline int32_t getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, 0) };
      inline Data& setCheckResult(int32_t checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


      // checkTableNum Field Functions 
      bool hasCheckTableNum() const { return this->checkTableNum_ != nullptr;};
      void deleteCheckTableNum() { this->checkTableNum_ = nullptr;};
      inline int64_t getCheckTableNum() const { DARABONBA_PTR_GET_DEFAULT(checkTableNum_, 0L) };
      inline Data& setCheckTableNum(int64_t checkTableNum) { DARABONBA_PTR_SET_VALUE(checkTableNum_, checkTableNum) };


      // checkTemplateId Field Functions 
      bool hasCheckTemplateId() const { return this->checkTemplateId_ != nullptr;};
      void deleteCheckTemplateId() { this->checkTemplateId_ = nullptr;};
      inline string getCheckTemplateId() const { DARABONBA_PTR_GET_DEFAULT(checkTemplateId_, "") };
      inline Data& setCheckTemplateId(string checkTemplateId) { DARABONBA_PTR_SET_VALUE(checkTemplateId_, checkTemplateId) };


      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
      inline Data& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


      // dstDsId Field Functions 
      bool hasDstDsId() const { return this->dstDsId_ != nullptr;};
      void deleteDstDsId() { this->dstDsId_ = nullptr;};
      inline string getDstDsId() const { DARABONBA_PTR_GET_DEFAULT(dstDsId_, "") };
      inline Data& setDstDsId(string dstDsId) { DARABONBA_PTR_SET_VALUE(dstDsId_, dstDsId) };


      // dstDsName Field Functions 
      bool hasDstDsName() const { return this->dstDsName_ != nullptr;};
      void deleteDstDsName() { this->dstDsName_ = nullptr;};
      inline string getDstDsName() const { DARABONBA_PTR_GET_DEFAULT(dstDsName_, "") };
      inline Data& setDstDsName(string dstDsName) { DARABONBA_PTR_SET_VALUE(dstDsName_, dstDsName) };


      // dstDsType Field Functions 
      bool hasDstDsType() const { return this->dstDsType_ != nullptr;};
      void deleteDstDsType() { this->dstDsType_ = nullptr;};
      inline string getDstDsType() const { DARABONBA_PTR_GET_DEFAULT(dstDsType_, "") };
      inline Data& setDstDsType(string dstDsType) { DARABONBA_PTR_SET_VALUE(dstDsType_, dstDsType) };


      // dstEngineId Field Functions 
      bool hasDstEngineId() const { return this->dstEngineId_ != nullptr;};
      void deleteDstEngineId() { this->dstEngineId_ = nullptr;};
      inline string getDstEngineId() const { DARABONBA_PTR_GET_DEFAULT(dstEngineId_, "") };
      inline Data& setDstEngineId(string dstEngineId) { DARABONBA_PTR_SET_VALUE(dstEngineId_, dstEngineId) };


      // dstEngineName Field Functions 
      bool hasDstEngineName() const { return this->dstEngineName_ != nullptr;};
      void deleteDstEngineName() { this->dstEngineName_ = nullptr;};
      inline string getDstEngineName() const { DARABONBA_PTR_GET_DEFAULT(dstEngineName_, "") };
      inline Data& setDstEngineName(string dstEngineName) { DARABONBA_PTR_SET_VALUE(dstEngineName_, dstEngineName) };


      // dstEngineType Field Functions 
      bool hasDstEngineType() const { return this->dstEngineType_ != nullptr;};
      void deleteDstEngineType() { this->dstEngineType_ = nullptr;};
      inline string getDstEngineType() const { DARABONBA_PTR_GET_DEFAULT(dstEngineType_, "") };
      inline Data& setDstEngineType(string dstEngineType) { DARABONBA_PTR_SET_VALUE(dstEngineType_, dstEngineType) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline Data& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // errorTableNum Field Functions 
      bool hasErrorTableNum() const { return this->errorTableNum_ != nullptr;};
      void deleteErrorTableNum() { this->errorTableNum_ = nullptr;};
      inline int64_t getErrorTableNum() const { DARABONBA_PTR_GET_DEFAULT(errorTableNum_, 0L) };
      inline Data& setErrorTableNum(int64_t errorTableNum) { DARABONBA_PTR_SET_VALUE(errorTableNum_, errorTableNum) };


      // execStatus Field Functions 
      bool hasExecStatus() const { return this->execStatus_ != nullptr;};
      void deleteExecStatus() { this->execStatus_ = nullptr;};
      inline int32_t getExecStatus() const { DARABONBA_PTR_GET_DEFAULT(execStatus_, 0) };
      inline Data& setExecStatus(int32_t execStatus) { DARABONBA_PTR_SET_VALUE(execStatus_, execStatus) };


      // execTime Field Functions 
      bool hasExecTime() const { return this->execTime_ != nullptr;};
      void deleteExecTime() { this->execTime_ = nullptr;};
      inline string getExecTime() const { DARABONBA_PTR_GET_DEFAULT(execTime_, "") };
      inline Data& setExecTime(string execTime) { DARABONBA_PTR_SET_VALUE(execTime_, execTime) };


      // executeType Field Functions 
      bool hasExecuteType() const { return this->executeType_ != nullptr;};
      void deleteExecuteType() { this->executeType_ = nullptr;};
      inline int32_t getExecuteType() const { DARABONBA_PTR_GET_DEFAULT(executeType_, 0) };
      inline Data& setExecuteType(int32_t executeType) { DARABONBA_PTR_SET_VALUE(executeType_, executeType) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isScheduled Field Functions 
      bool hasIsScheduled() const { return this->isScheduled_ != nullptr;};
      void deleteIsScheduled() { this->isScheduled_ = nullptr;};
      inline int32_t getIsScheduled() const { DARABONBA_PTR_GET_DEFAULT(isScheduled_, 0) };
      inline Data& setIsScheduled(int32_t isScheduled) { DARABONBA_PTR_SET_VALUE(isScheduled_, isScheduled) };


      // lastBatchId Field Functions 
      bool hasLastBatchId() const { return this->lastBatchId_ != nullptr;};
      void deleteLastBatchId() { this->lastBatchId_ = nullptr;};
      inline int64_t getLastBatchId() const { DARABONBA_PTR_GET_DEFAULT(lastBatchId_, 0L) };
      inline Data& setLastBatchId(int64_t lastBatchId) { DARABONBA_PTR_SET_VALUE(lastBatchId_, lastBatchId) };


      // lastFinishedId Field Functions 
      bool hasLastFinishedId() const { return this->lastFinishedId_ != nullptr;};
      void deleteLastFinishedId() { this->lastFinishedId_ = nullptr;};
      inline int64_t getLastFinishedId() const { DARABONBA_PTR_GET_DEFAULT(lastFinishedId_, 0L) };
      inline Data& setLastFinishedId(int64_t lastFinishedId) { DARABONBA_PTR_SET_VALUE(lastFinishedId_, lastFinishedId) };


      // passProcess Field Functions 
      bool hasPassProcess() const { return this->passProcess_ != nullptr;};
      void deletePassProcess() { this->passProcess_ = nullptr;};
      inline       const Darabonba::Json & getPassProcess() const { DARABONBA_GET(passProcess_) };
      Darabonba::Json & getPassProcess() { DARABONBA_GET(passProcess_) };
      inline Data& setPassProcess(const Darabonba::Json & passProcess) { DARABONBA_SET_VALUE(passProcess_, passProcess) };
      inline Data& setPassProcess(Darabonba::Json && passProcess) { DARABONBA_SET_RVALUE(passProcess_, passProcess) };


      // process Field Functions 
      bool hasProcess() const { return this->process_ != nullptr;};
      void deleteProcess() { this->process_ = nullptr;};
      inline double getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, 0.0) };
      inline Data& setProcess(double process) { DARABONBA_PTR_SET_VALUE(process_, process) };


      // reportTime Field Functions 
      bool hasReportTime() const { return this->reportTime_ != nullptr;};
      void deleteReportTime() { this->reportTime_ = nullptr;};
      inline string getReportTime() const { DARABONBA_PTR_GET_DEFAULT(reportTime_, "") };
      inline Data& setReportTime(string reportTime) { DARABONBA_PTR_SET_VALUE(reportTime_, reportTime) };


      // reportTitle Field Functions 
      bool hasReportTitle() const { return this->reportTitle_ != nullptr;};
      void deleteReportTitle() { this->reportTitle_ = nullptr;};
      inline string getReportTitle() const { DARABONBA_PTR_GET_DEFAULT(reportTitle_, "") };
      inline Data& setReportTitle(string reportTitle) { DARABONBA_PTR_SET_VALUE(reportTitle_, reportTitle) };


      // skipTableNum Field Functions 
      bool hasSkipTableNum() const { return this->skipTableNum_ != nullptr;};
      void deleteSkipTableNum() { this->skipTableNum_ = nullptr;};
      inline int64_t getSkipTableNum() const { DARABONBA_PTR_GET_DEFAULT(skipTableNum_, 0L) };
      inline Data& setSkipTableNum(int64_t skipTableNum) { DARABONBA_PTR_SET_VALUE(skipTableNum_, skipTableNum) };


      // srcDsId Field Functions 
      bool hasSrcDsId() const { return this->srcDsId_ != nullptr;};
      void deleteSrcDsId() { this->srcDsId_ = nullptr;};
      inline string getSrcDsId() const { DARABONBA_PTR_GET_DEFAULT(srcDsId_, "") };
      inline Data& setSrcDsId(string srcDsId) { DARABONBA_PTR_SET_VALUE(srcDsId_, srcDsId) };


      // srcDsName Field Functions 
      bool hasSrcDsName() const { return this->srcDsName_ != nullptr;};
      void deleteSrcDsName() { this->srcDsName_ = nullptr;};
      inline string getSrcDsName() const { DARABONBA_PTR_GET_DEFAULT(srcDsName_, "") };
      inline Data& setSrcDsName(string srcDsName) { DARABONBA_PTR_SET_VALUE(srcDsName_, srcDsName) };


      // srcDsType Field Functions 
      bool hasSrcDsType() const { return this->srcDsType_ != nullptr;};
      void deleteSrcDsType() { this->srcDsType_ = nullptr;};
      inline string getSrcDsType() const { DARABONBA_PTR_GET_DEFAULT(srcDsType_, "") };
      inline Data& setSrcDsType(string srcDsType) { DARABONBA_PTR_SET_VALUE(srcDsType_, srcDsType) };


      // srcEngineId Field Functions 
      bool hasSrcEngineId() const { return this->srcEngineId_ != nullptr;};
      void deleteSrcEngineId() { this->srcEngineId_ = nullptr;};
      inline string getSrcEngineId() const { DARABONBA_PTR_GET_DEFAULT(srcEngineId_, "") };
      inline Data& setSrcEngineId(string srcEngineId) { DARABONBA_PTR_SET_VALUE(srcEngineId_, srcEngineId) };


      // srcEngineName Field Functions 
      bool hasSrcEngineName() const { return this->srcEngineName_ != nullptr;};
      void deleteSrcEngineName() { this->srcEngineName_ = nullptr;};
      inline string getSrcEngineName() const { DARABONBA_PTR_GET_DEFAULT(srcEngineName_, "") };
      inline Data& setSrcEngineName(string srcEngineName) { DARABONBA_PTR_SET_VALUE(srcEngineName_, srcEngineName) };


      // srcEngineType Field Functions 
      bool hasSrcEngineType() const { return this->srcEngineType_ != nullptr;};
      void deleteSrcEngineType() { this->srcEngineType_ = nullptr;};
      inline string getSrcEngineType() const { DARABONBA_PTR_GET_DEFAULT(srcEngineType_, "") };
      inline Data& setSrcEngineType(string srcEngineType) { DARABONBA_PTR_SET_VALUE(srcEngineType_, srcEngineType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // successfulTableNum Field Functions 
      bool hasSuccessfulTableNum() const { return this->successfulTableNum_ != nullptr;};
      void deleteSuccessfulTableNum() { this->successfulTableNum_ = nullptr;};
      inline int64_t getSuccessfulTableNum() const { DARABONBA_PTR_GET_DEFAULT(successfulTableNum_, 0L) };
      inline Data& setSuccessfulTableNum(int64_t successfulTableNum) { DARABONBA_PTR_SET_VALUE(successfulTableNum_, successfulTableNum) };


      // taskDescription Field Functions 
      bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
      void deleteTaskDescription() { this->taskDescription_ = nullptr;};
      inline string getTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
      inline Data& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


      // taskMode Field Functions 
      bool hasTaskMode() const { return this->taskMode_ != nullptr;};
      void deleteTaskMode() { this->taskMode_ = nullptr;};
      inline int32_t getTaskMode() const { DARABONBA_PTR_GET_DEFAULT(taskMode_, 0) };
      inline Data& setTaskMode(int32_t taskMode) { DARABONBA_PTR_SET_VALUE(taskMode_, taskMode) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Data& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Data& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      // The check result. Valid values:
      // - 0: no record.
      // - 1: passed.
      // - 2: failed.
      shared_ptr<int32_t> checkResult_ {};
      // The number of checked tables.
      shared_ptr<int64_t> checkTableNum_ {};
      // The check template ID.
      shared_ptr<string> checkTemplateId_ {};
      // The check type. Valid values:
      // - 0: data volume comparison.
      // - 1: metric comparison.
      // - 2: weak content comparison.
      shared_ptr<int32_t> checkType_ {};
      // The destination data source ID.
      shared_ptr<string> dstDsId_ {};
      // The destination data source name.
      shared_ptr<string> dstDsName_ {};
      // The destination data source type.
      shared_ptr<string> dstDsType_ {};
      // The destination check engine ID.
      shared_ptr<string> dstEngineId_ {};
      // The destination check engine name.
      shared_ptr<string> dstEngineName_ {};
      // The destination check engine type.
      shared_ptr<string> dstEngineType_ {};
      // The end time.
      shared_ptr<string> endTime_ {};
      // The error message.
      shared_ptr<string> errorMsg_ {};
      // The number of error tables.
      shared_ptr<int64_t> errorTableNum_ {};
      // The execution status. Valid values:
      // - 0: pending.
      // - 1: running.
      // - 2: stopped.
      // - 3: failed.
      // - 4: completed.
      shared_ptr<int32_t> execStatus_ {};
      // The execution duration.
      shared_ptr<string> execTime_ {};
      // The execution type. Valid values:
      // - 0: immediate execution.
      // - 1: scheduled execution.
      shared_ptr<int32_t> executeType_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The last modified time.
      shared_ptr<string> gmtModified_ {};
      // The task ID.
      shared_ptr<int64_t> id_ {};
      // Indicates whether scheduling is enabled. Valid values:
      // - 0: Disabled.
      // - 1: Enabled.
      shared_ptr<int32_t> isScheduled_ {};
      // The latest batch ID.
      shared_ptr<int64_t> lastBatchId_ {};
      // The latest completed batch ID.
      shared_ptr<int64_t> lastFinishedId_ {};
      // The check pass rate.
      Darabonba::Json passProcess_ {};
      // The execution progress (0-1).
      shared_ptr<double> process_ {};
      // The report time.
      shared_ptr<string> reportTime_ {};
      // The report title.
      shared_ptr<string> reportTitle_ {};
      // The number of skipped tables.
      shared_ptr<int64_t> skipTableNum_ {};
      // The source data source ID.
      shared_ptr<string> srcDsId_ {};
      // The source data source name.
      shared_ptr<string> srcDsName_ {};
      // The source data source type.
      shared_ptr<string> srcDsType_ {};
      // The source check engine ID.
      shared_ptr<string> srcEngineId_ {};
      // The source check engine name.
      shared_ptr<string> srcEngineName_ {};
      // The source check engine type.
      shared_ptr<string> srcEngineType_ {};
      // The start time.
      shared_ptr<string> startTime_ {};
      // The number of successful tables.
      shared_ptr<int64_t> successfulTableNum_ {};
      // The task description.
      shared_ptr<string> taskDescription_ {};
      // The creation mode. Valid values:
      // - 0: table-by-table fine-grained mode.
      // - 1: same-schema batch mode.
      shared_ptr<int32_t> taskMode_ {};
      // The task name.
      shared_ptr<string> taskName_ {};
      // The check template name.
      shared_ptr<string> templateName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetDataCheckTaskListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetDataCheckTaskListResponseBody::Data>) };
    inline vector<GetDataCheckTaskListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetDataCheckTaskListResponseBody::Data>) };
    inline GetDataCheckTaskListResponseBody& setData(const vector<GetDataCheckTaskListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataCheckTaskListResponseBody& setData(vector<GetDataCheckTaskListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetDataCheckTaskListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetDataCheckTaskListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline GetDataCheckTaskListResponseBody& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetDataCheckTaskListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataCheckTaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataCheckTaskListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetDataCheckTaskListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The task list.
    shared_ptr<vector<GetDataCheckTaskListResponseBody::Data>> data_ {};
    // The error code. An empty string is returned if the call is successful.
    shared_ptr<string> errCode_ {};
    // The error message. An empty string is returned if the call is successful.
    shared_ptr<string> errMessage_ {};
    // The page number, starting from 1.
    shared_ptr<int32_t> pageIndex_ {};
    // The page size, which indicates the number of records returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID, which is used to locate and troubleshoot issues related to this call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. A value of true indicates success. A value of false indicates failure. If the call fails, check errCode and errMessage for details.
    shared_ptr<bool> success_ {};
    // The total number of records that match the query conditions. This parameter is used for pagination.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif

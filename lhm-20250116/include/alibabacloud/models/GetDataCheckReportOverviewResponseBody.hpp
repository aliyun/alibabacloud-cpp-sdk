// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACHECKREPORTOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATACHECKREPORTOVERVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetDataCheckReportOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCheckReportOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCheckReportOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetDataCheckReportOverviewResponseBody() = default ;
    GetDataCheckReportOverviewResponseBody(const GetDataCheckReportOverviewResponseBody &) = default ;
    GetDataCheckReportOverviewResponseBody(GetDataCheckReportOverviewResponseBody &&) = default ;
    GetDataCheckReportOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCheckReportOverviewResponseBody() = default ;
    GetDataCheckReportOverviewResponseBody& operator=(const GetDataCheckReportOverviewResponseBody &) = default ;
    GetDataCheckReportOverviewResponseBody& operator=(GetDataCheckReportOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(batchId, batchId_);
        DARABONBA_PTR_TO_JSON(checkColumnCount, checkColumnCount_);
        DARABONBA_PTR_TO_JSON(checkPtCount, checkPtCount_);
        DARABONBA_PTR_TO_JSON(checkResult, checkResult_);
        DARABONBA_PTR_TO_JSON(checkRowCount, checkRowCount_);
        DARABONBA_PTR_TO_JSON(checkRowPassCount, checkRowPassCount_);
        DARABONBA_PTR_TO_JSON(checkRowPassExport, checkRowPassExport_);
        DARABONBA_PTR_TO_JSON(checkSqlNum, checkSqlNum_);
        DARABONBA_PTR_TO_JSON(checkTableNum, checkTableNum_);
        DARABONBA_PTR_TO_JSON(checkTemplateId, checkTemplateId_);
        DARABONBA_PTR_TO_JSON(checkTemplateName, checkTemplateName_);
        DARABONBA_PTR_TO_JSON(checkType, checkType_);
        DARABONBA_PTR_TO_JSON(dstDsName, dstDsName_);
        DARABONBA_PTR_TO_JSON(dstDsType, dstDsType_);
        DARABONBA_PTR_TO_JSON(errorTableNum, errorTableNum_);
        DARABONBA_PTR_TO_JSON(passColumnCount, passColumnCount_);
        DARABONBA_PTR_TO_JSON(passColumnRate, passColumnRate_);
        DARABONBA_PTR_TO_JSON(passProcess, passProcess_);
        DARABONBA_PTR_TO_JSON(passProcessExport, passProcessExport_);
        DARABONBA_PTR_TO_JSON(passPtNum, passPtNum_);
        DARABONBA_PTR_TO_JSON(passPtProcessExport, passPtProcessExport_);
        DARABONBA_PTR_TO_JSON(passTableNum, passTableNum_);
        DARABONBA_PTR_TO_JSON(ptPassProcess, ptPassProcess_);
        DARABONBA_PTR_TO_JSON(reportGenerateMessage, reportGenerateMessage_);
        DARABONBA_PTR_TO_JSON(reportStatus, reportStatus_);
        DARABONBA_PTR_TO_JSON(reportTime, reportTime_);
        DARABONBA_PTR_TO_JSON(reportTitle, reportTitle_);
        DARABONBA_PTR_TO_JSON(skipPtNum, skipPtNum_);
        DARABONBA_PTR_TO_JSON(skipTableNum, skipTableNum_);
        DARABONBA_PTR_TO_JSON(srcDsName, srcDsName_);
        DARABONBA_PTR_TO_JSON(srcDsType, srcDsType_);
        DARABONBA_PTR_TO_JSON(taskCreateTime, taskCreateTime_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskModifyTime, taskModifyTime_);
        DARABONBA_PTR_TO_JSON(taskName, taskName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(batchId, batchId_);
        DARABONBA_PTR_FROM_JSON(checkColumnCount, checkColumnCount_);
        DARABONBA_PTR_FROM_JSON(checkPtCount, checkPtCount_);
        DARABONBA_PTR_FROM_JSON(checkResult, checkResult_);
        DARABONBA_PTR_FROM_JSON(checkRowCount, checkRowCount_);
        DARABONBA_PTR_FROM_JSON(checkRowPassCount, checkRowPassCount_);
        DARABONBA_PTR_FROM_JSON(checkRowPassExport, checkRowPassExport_);
        DARABONBA_PTR_FROM_JSON(checkSqlNum, checkSqlNum_);
        DARABONBA_PTR_FROM_JSON(checkTableNum, checkTableNum_);
        DARABONBA_PTR_FROM_JSON(checkTemplateId, checkTemplateId_);
        DARABONBA_PTR_FROM_JSON(checkTemplateName, checkTemplateName_);
        DARABONBA_PTR_FROM_JSON(checkType, checkType_);
        DARABONBA_PTR_FROM_JSON(dstDsName, dstDsName_);
        DARABONBA_PTR_FROM_JSON(dstDsType, dstDsType_);
        DARABONBA_PTR_FROM_JSON(errorTableNum, errorTableNum_);
        DARABONBA_PTR_FROM_JSON(passColumnCount, passColumnCount_);
        DARABONBA_PTR_FROM_JSON(passColumnRate, passColumnRate_);
        DARABONBA_PTR_FROM_JSON(passProcess, passProcess_);
        DARABONBA_PTR_FROM_JSON(passProcessExport, passProcessExport_);
        DARABONBA_PTR_FROM_JSON(passPtNum, passPtNum_);
        DARABONBA_PTR_FROM_JSON(passPtProcessExport, passPtProcessExport_);
        DARABONBA_PTR_FROM_JSON(passTableNum, passTableNum_);
        DARABONBA_PTR_FROM_JSON(ptPassProcess, ptPassProcess_);
        DARABONBA_PTR_FROM_JSON(reportGenerateMessage, reportGenerateMessage_);
        DARABONBA_PTR_FROM_JSON(reportStatus, reportStatus_);
        DARABONBA_PTR_FROM_JSON(reportTime, reportTime_);
        DARABONBA_PTR_FROM_JSON(reportTitle, reportTitle_);
        DARABONBA_PTR_FROM_JSON(skipPtNum, skipPtNum_);
        DARABONBA_PTR_FROM_JSON(skipTableNum, skipTableNum_);
        DARABONBA_PTR_FROM_JSON(srcDsName, srcDsName_);
        DARABONBA_PTR_FROM_JSON(srcDsType, srcDsType_);
        DARABONBA_PTR_FROM_JSON(taskCreateTime, taskCreateTime_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskModifyTime, taskModifyTime_);
        DARABONBA_PTR_FROM_JSON(taskName, taskName_);
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
      virtual bool empty() const override { return this->batchId_ == nullptr
        && this->checkColumnCount_ == nullptr && this->checkPtCount_ == nullptr && this->checkResult_ == nullptr && this->checkRowCount_ == nullptr && this->checkRowPassCount_ == nullptr
        && this->checkRowPassExport_ == nullptr && this->checkSqlNum_ == nullptr && this->checkTableNum_ == nullptr && this->checkTemplateId_ == nullptr && this->checkTemplateName_ == nullptr
        && this->checkType_ == nullptr && this->dstDsName_ == nullptr && this->dstDsType_ == nullptr && this->errorTableNum_ == nullptr && this->passColumnCount_ == nullptr
        && this->passColumnRate_ == nullptr && this->passProcess_ == nullptr && this->passProcessExport_ == nullptr && this->passPtNum_ == nullptr && this->passPtProcessExport_ == nullptr
        && this->passTableNum_ == nullptr && this->ptPassProcess_ == nullptr && this->reportGenerateMessage_ == nullptr && this->reportStatus_ == nullptr && this->reportTime_ == nullptr
        && this->reportTitle_ == nullptr && this->skipPtNum_ == nullptr && this->skipTableNum_ == nullptr && this->srcDsName_ == nullptr && this->srcDsType_ == nullptr
        && this->taskCreateTime_ == nullptr && this->taskId_ == nullptr && this->taskModifyTime_ == nullptr && this->taskName_ == nullptr; };
      // batchId Field Functions 
      bool hasBatchId() const { return this->batchId_ != nullptr;};
      void deleteBatchId() { this->batchId_ = nullptr;};
      inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
      inline Data& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


      // checkColumnCount Field Functions 
      bool hasCheckColumnCount() const { return this->checkColumnCount_ != nullptr;};
      void deleteCheckColumnCount() { this->checkColumnCount_ = nullptr;};
      inline int64_t getCheckColumnCount() const { DARABONBA_PTR_GET_DEFAULT(checkColumnCount_, 0L) };
      inline Data& setCheckColumnCount(int64_t checkColumnCount) { DARABONBA_PTR_SET_VALUE(checkColumnCount_, checkColumnCount) };


      // checkPtCount Field Functions 
      bool hasCheckPtCount() const { return this->checkPtCount_ != nullptr;};
      void deleteCheckPtCount() { this->checkPtCount_ = nullptr;};
      inline int64_t getCheckPtCount() const { DARABONBA_PTR_GET_DEFAULT(checkPtCount_, 0L) };
      inline Data& setCheckPtCount(int64_t checkPtCount) { DARABONBA_PTR_SET_VALUE(checkPtCount_, checkPtCount) };


      // checkResult Field Functions 
      bool hasCheckResult() const { return this->checkResult_ != nullptr;};
      void deleteCheckResult() { this->checkResult_ = nullptr;};
      inline int32_t getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, 0) };
      inline Data& setCheckResult(int32_t checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


      // checkRowCount Field Functions 
      bool hasCheckRowCount() const { return this->checkRowCount_ != nullptr;};
      void deleteCheckRowCount() { this->checkRowCount_ = nullptr;};
      inline int64_t getCheckRowCount() const { DARABONBA_PTR_GET_DEFAULT(checkRowCount_, 0L) };
      inline Data& setCheckRowCount(int64_t checkRowCount) { DARABONBA_PTR_SET_VALUE(checkRowCount_, checkRowCount) };


      // checkRowPassCount Field Functions 
      bool hasCheckRowPassCount() const { return this->checkRowPassCount_ != nullptr;};
      void deleteCheckRowPassCount() { this->checkRowPassCount_ = nullptr;};
      inline int64_t getCheckRowPassCount() const { DARABONBA_PTR_GET_DEFAULT(checkRowPassCount_, 0L) };
      inline Data& setCheckRowPassCount(int64_t checkRowPassCount) { DARABONBA_PTR_SET_VALUE(checkRowPassCount_, checkRowPassCount) };


      // checkRowPassExport Field Functions 
      bool hasCheckRowPassExport() const { return this->checkRowPassExport_ != nullptr;};
      void deleteCheckRowPassExport() { this->checkRowPassExport_ = nullptr;};
      inline string getCheckRowPassExport() const { DARABONBA_PTR_GET_DEFAULT(checkRowPassExport_, "") };
      inline Data& setCheckRowPassExport(string checkRowPassExport) { DARABONBA_PTR_SET_VALUE(checkRowPassExport_, checkRowPassExport) };


      // checkSqlNum Field Functions 
      bool hasCheckSqlNum() const { return this->checkSqlNum_ != nullptr;};
      void deleteCheckSqlNum() { this->checkSqlNum_ = nullptr;};
      inline int64_t getCheckSqlNum() const { DARABONBA_PTR_GET_DEFAULT(checkSqlNum_, 0L) };
      inline Data& setCheckSqlNum(int64_t checkSqlNum) { DARABONBA_PTR_SET_VALUE(checkSqlNum_, checkSqlNum) };


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


      // checkTemplateName Field Functions 
      bool hasCheckTemplateName() const { return this->checkTemplateName_ != nullptr;};
      void deleteCheckTemplateName() { this->checkTemplateName_ = nullptr;};
      inline string getCheckTemplateName() const { DARABONBA_PTR_GET_DEFAULT(checkTemplateName_, "") };
      inline Data& setCheckTemplateName(string checkTemplateName) { DARABONBA_PTR_SET_VALUE(checkTemplateName_, checkTemplateName) };


      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
      inline Data& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


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


      // errorTableNum Field Functions 
      bool hasErrorTableNum() const { return this->errorTableNum_ != nullptr;};
      void deleteErrorTableNum() { this->errorTableNum_ = nullptr;};
      inline int64_t getErrorTableNum() const { DARABONBA_PTR_GET_DEFAULT(errorTableNum_, 0L) };
      inline Data& setErrorTableNum(int64_t errorTableNum) { DARABONBA_PTR_SET_VALUE(errorTableNum_, errorTableNum) };


      // passColumnCount Field Functions 
      bool hasPassColumnCount() const { return this->passColumnCount_ != nullptr;};
      void deletePassColumnCount() { this->passColumnCount_ = nullptr;};
      inline int64_t getPassColumnCount() const { DARABONBA_PTR_GET_DEFAULT(passColumnCount_, 0L) };
      inline Data& setPassColumnCount(int64_t passColumnCount) { DARABONBA_PTR_SET_VALUE(passColumnCount_, passColumnCount) };


      // passColumnRate Field Functions 
      bool hasPassColumnRate() const { return this->passColumnRate_ != nullptr;};
      void deletePassColumnRate() { this->passColumnRate_ = nullptr;};
      inline double getPassColumnRate() const { DARABONBA_PTR_GET_DEFAULT(passColumnRate_, 0.0) };
      inline Data& setPassColumnRate(double passColumnRate) { DARABONBA_PTR_SET_VALUE(passColumnRate_, passColumnRate) };


      // passProcess Field Functions 
      bool hasPassProcess() const { return this->passProcess_ != nullptr;};
      void deletePassProcess() { this->passProcess_ = nullptr;};
      inline double getPassProcess() const { DARABONBA_PTR_GET_DEFAULT(passProcess_, 0.0) };
      inline Data& setPassProcess(double passProcess) { DARABONBA_PTR_SET_VALUE(passProcess_, passProcess) };


      // passProcessExport Field Functions 
      bool hasPassProcessExport() const { return this->passProcessExport_ != nullptr;};
      void deletePassProcessExport() { this->passProcessExport_ = nullptr;};
      inline string getPassProcessExport() const { DARABONBA_PTR_GET_DEFAULT(passProcessExport_, "") };
      inline Data& setPassProcessExport(string passProcessExport) { DARABONBA_PTR_SET_VALUE(passProcessExport_, passProcessExport) };


      // passPtNum Field Functions 
      bool hasPassPtNum() const { return this->passPtNum_ != nullptr;};
      void deletePassPtNum() { this->passPtNum_ = nullptr;};
      inline int64_t getPassPtNum() const { DARABONBA_PTR_GET_DEFAULT(passPtNum_, 0L) };
      inline Data& setPassPtNum(int64_t passPtNum) { DARABONBA_PTR_SET_VALUE(passPtNum_, passPtNum) };


      // passPtProcessExport Field Functions 
      bool hasPassPtProcessExport() const { return this->passPtProcessExport_ != nullptr;};
      void deletePassPtProcessExport() { this->passPtProcessExport_ = nullptr;};
      inline string getPassPtProcessExport() const { DARABONBA_PTR_GET_DEFAULT(passPtProcessExport_, "") };
      inline Data& setPassPtProcessExport(string passPtProcessExport) { DARABONBA_PTR_SET_VALUE(passPtProcessExport_, passPtProcessExport) };


      // passTableNum Field Functions 
      bool hasPassTableNum() const { return this->passTableNum_ != nullptr;};
      void deletePassTableNum() { this->passTableNum_ = nullptr;};
      inline int64_t getPassTableNum() const { DARABONBA_PTR_GET_DEFAULT(passTableNum_, 0L) };
      inline Data& setPassTableNum(int64_t passTableNum) { DARABONBA_PTR_SET_VALUE(passTableNum_, passTableNum) };


      // ptPassProcess Field Functions 
      bool hasPtPassProcess() const { return this->ptPassProcess_ != nullptr;};
      void deletePtPassProcess() { this->ptPassProcess_ = nullptr;};
      inline double getPtPassProcess() const { DARABONBA_PTR_GET_DEFAULT(ptPassProcess_, 0.0) };
      inline Data& setPtPassProcess(double ptPassProcess) { DARABONBA_PTR_SET_VALUE(ptPassProcess_, ptPassProcess) };


      // reportGenerateMessage Field Functions 
      bool hasReportGenerateMessage() const { return this->reportGenerateMessage_ != nullptr;};
      void deleteReportGenerateMessage() { this->reportGenerateMessage_ = nullptr;};
      inline string getReportGenerateMessage() const { DARABONBA_PTR_GET_DEFAULT(reportGenerateMessage_, "") };
      inline Data& setReportGenerateMessage(string reportGenerateMessage) { DARABONBA_PTR_SET_VALUE(reportGenerateMessage_, reportGenerateMessage) };


      // reportStatus Field Functions 
      bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
      void deleteReportStatus() { this->reportStatus_ = nullptr;};
      inline int32_t getReportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, 0) };
      inline Data& setReportStatus(int32_t reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


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


      // skipPtNum Field Functions 
      bool hasSkipPtNum() const { return this->skipPtNum_ != nullptr;};
      void deleteSkipPtNum() { this->skipPtNum_ = nullptr;};
      inline int64_t getSkipPtNum() const { DARABONBA_PTR_GET_DEFAULT(skipPtNum_, 0L) };
      inline Data& setSkipPtNum(int64_t skipPtNum) { DARABONBA_PTR_SET_VALUE(skipPtNum_, skipPtNum) };


      // skipTableNum Field Functions 
      bool hasSkipTableNum() const { return this->skipTableNum_ != nullptr;};
      void deleteSkipTableNum() { this->skipTableNum_ = nullptr;};
      inline int32_t getSkipTableNum() const { DARABONBA_PTR_GET_DEFAULT(skipTableNum_, 0) };
      inline Data& setSkipTableNum(int32_t skipTableNum) { DARABONBA_PTR_SET_VALUE(skipTableNum_, skipTableNum) };


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


      // taskCreateTime Field Functions 
      bool hasTaskCreateTime() const { return this->taskCreateTime_ != nullptr;};
      void deleteTaskCreateTime() { this->taskCreateTime_ = nullptr;};
      inline string getTaskCreateTime() const { DARABONBA_PTR_GET_DEFAULT(taskCreateTime_, "") };
      inline Data& setTaskCreateTime(string taskCreateTime) { DARABONBA_PTR_SET_VALUE(taskCreateTime_, taskCreateTime) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Data& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskModifyTime Field Functions 
      bool hasTaskModifyTime() const { return this->taskModifyTime_ != nullptr;};
      void deleteTaskModifyTime() { this->taskModifyTime_ = nullptr;};
      inline string getTaskModifyTime() const { DARABONBA_PTR_GET_DEFAULT(taskModifyTime_, "") };
      inline Data& setTaskModifyTime(string taskModifyTime) { DARABONBA_PTR_SET_VALUE(taskModifyTime_, taskModifyTime) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Data& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    protected:
      // The ID of the validation job (batch).
      shared_ptr<int64_t> batchId_ {};
      // The number of validated fields.
      shared_ptr<int64_t> checkColumnCount_ {};
      // The number of validated partitions.
      shared_ptr<int64_t> checkPtCount_ {};
      // The validation result. Valid values:
      // - 0: No record.
      // - 1: Passed.
      // - 2: Failed.
      shared_ptr<int32_t> checkResult_ {};
      // The number of validated data rows.
      shared_ptr<int64_t> checkRowCount_ {};
      // The number of rows that passed validation.
      shared_ptr<int64_t> checkRowPassCount_ {};
      // The row pass rate for the export report. This value is calculated by dividing the number of passed rows by the total number of validated rows. The value is returned as a percentage string with two decimal places.
      shared_ptr<string> checkRowPassExport_ {};
      // The number of validation SQL statements.
      shared_ptr<int64_t> checkSqlNum_ {};
      // The number of validated tables.
      shared_ptr<int64_t> checkTableNum_ {};
      // The validation template name. This field is available only for metric validation.
      shared_ptr<string> checkTemplateId_ {};
      // The validation template name. This field is available only for metric validation.
      shared_ptr<string> checkTemplateName_ {};
      // The validation type. Valid values:
      // - 0: data volume comparison.
      // - 1: metric comparison.
      // - 2: weak content comparison.
      shared_ptr<int32_t> checkType_ {};
      // The name of the destination datasource.
      shared_ptr<string> dstDsName_ {};
      // The type of the destination datasource.
      shared_ptr<string> dstDsType_ {};
      // The number of tables with errors.
      shared_ptr<int64_t> errorTableNum_ {};
      // The number of fields that passed validation.
      shared_ptr<int64_t> passColumnCount_ {};
      // The number of metrics that passed validation.
      shared_ptr<double> passColumnRate_ {};
      // The pass rate.
      shared_ptr<double> passProcess_ {};
      // The pass rate for the export report. This value is calculated by dividing the number of passed tables by the total number of validated tables. The value is returned as a percentage string with two decimal places (for example, 100.00%). A hyphen (-) is returned when no validated table data exists.
      shared_ptr<string> passProcessExport_ {};
      // The number of partitions that passed validation.
      shared_ptr<int64_t> passPtNum_ {};
      // The partition pass rate for the export report. This value is calculated by dividing the number of passed partitions by the total number of validated partitions. The value is returned as a percentage string with four decimal places. A hyphen (-) is returned when no partition data exists.
      shared_ptr<string> passPtProcessExport_ {};
      // The number of tables that passed validation.
      shared_ptr<int64_t> passTableNum_ {};
      // The partition pass rate.
      shared_ptr<double> ptPassProcess_ {};
      // The report generation message.
      shared_ptr<string> reportGenerateMessage_ {};
      // The validation report status. Valid values:
      // - 0: Not generated.
      // - 1: Generating.
      // - 2: Generated.
      shared_ptr<int32_t> reportStatus_ {};
      // The time when the report was generated.
      shared_ptr<string> reportTime_ {};
      // The title of the validation report.
      shared_ptr<string> reportTitle_ {};
      // The number of skipped partitions.
      shared_ptr<int64_t> skipPtNum_ {};
      // The number of skipped tables.
      shared_ptr<int32_t> skipTableNum_ {};
      // The name of the source datasource.
      shared_ptr<string> srcDsName_ {};
      // The type of the source datasource.
      shared_ptr<string> srcDsType_ {};
      // The time when the task was created.
      shared_ptr<string> taskCreateTime_ {};
      // The task ID.
      shared_ptr<int64_t> taskId_ {};
      // The time when the task was last modified.
      shared_ptr<string> taskModifyTime_ {};
      // The task name.
      shared_ptr<string> taskName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDataCheckReportOverviewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDataCheckReportOverviewResponseBody::Data) };
    inline GetDataCheckReportOverviewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDataCheckReportOverviewResponseBody::Data) };
    inline GetDataCheckReportOverviewResponseBody& setData(const GetDataCheckReportOverviewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataCheckReportOverviewResponseBody& setData(GetDataCheckReportOverviewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetDataCheckReportOverviewResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetDataCheckReportOverviewResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataCheckReportOverviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataCheckReportOverviewResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response data.
    shared_ptr<GetDataCheckReportOverviewResponseBody::Data> data_ {};
    // The fault information code.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The request ID. This value uniquely identifies the call. Provide this value when troubleshooting issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif

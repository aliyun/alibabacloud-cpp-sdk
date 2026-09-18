// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESCANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
namespace Models
{
  class CreateScanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(codeBundleId, codeBundleId_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(engineSnapshot, engineSnapshot_);
      DARABONBA_PTR_TO_JSON(finishedAt, finishedAt_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(kind, kind_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scanMetrics, scanMetrics_);
      DARABONBA_PTR_TO_JSON(scanProgress, scanProgress_);
      DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(workerId, workerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(codeBundleId, codeBundleId_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(engineSnapshot, engineSnapshot_);
      DARABONBA_PTR_FROM_JSON(finishedAt, finishedAt_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(kind, kind_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scanMetrics, scanMetrics_);
      DARABONBA_PTR_FROM_JSON(scanProgress, scanProgress_);
      DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(workerId, workerId_);
    };
    CreateScanResponseBody() = default ;
    CreateScanResponseBody(const CreateScanResponseBody &) = default ;
    CreateScanResponseBody(CreateScanResponseBody &&) = default ;
    CreateScanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScanResponseBody() = default ;
    CreateScanResponseBody& operator=(const CreateScanResponseBody &) = default ;
    CreateScanResponseBody& operator=(CreateScanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScanMetrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScanMetrics& obj) { 
        DARABONBA_PTR_TO_JSON(fileCount, fileCount_);
        DARABONBA_PTR_TO_JSON(linesOfCode, linesOfCode_);
        DARABONBA_PTR_TO_JSON(tokenTotal, tokenTotal_);
      };
      friend void from_json(const Darabonba::Json& j, ScanMetrics& obj) { 
        DARABONBA_PTR_FROM_JSON(fileCount, fileCount_);
        DARABONBA_PTR_FROM_JSON(linesOfCode, linesOfCode_);
        DARABONBA_PTR_FROM_JSON(tokenTotal, tokenTotal_);
      };
      ScanMetrics() = default ;
      ScanMetrics(const ScanMetrics &) = default ;
      ScanMetrics(ScanMetrics &&) = default ;
      ScanMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScanMetrics() = default ;
      ScanMetrics& operator=(const ScanMetrics &) = default ;
      ScanMetrics& operator=(ScanMetrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileCount_ == nullptr
        && this->linesOfCode_ == nullptr && this->tokenTotal_ == nullptr; };
      // fileCount Field Functions 
      bool hasFileCount() const { return this->fileCount_ != nullptr;};
      void deleteFileCount() { this->fileCount_ = nullptr;};
      inline int64_t getFileCount() const { DARABONBA_PTR_GET_DEFAULT(fileCount_, 0L) };
      inline ScanMetrics& setFileCount(int64_t fileCount) { DARABONBA_PTR_SET_VALUE(fileCount_, fileCount) };


      // linesOfCode Field Functions 
      bool hasLinesOfCode() const { return this->linesOfCode_ != nullptr;};
      void deleteLinesOfCode() { this->linesOfCode_ = nullptr;};
      inline int64_t getLinesOfCode() const { DARABONBA_PTR_GET_DEFAULT(linesOfCode_, 0L) };
      inline ScanMetrics& setLinesOfCode(int64_t linesOfCode) { DARABONBA_PTR_SET_VALUE(linesOfCode_, linesOfCode) };


      // tokenTotal Field Functions 
      bool hasTokenTotal() const { return this->tokenTotal_ != nullptr;};
      void deleteTokenTotal() { this->tokenTotal_ = nullptr;};
      inline int64_t getTokenTotal() const { DARABONBA_PTR_GET_DEFAULT(tokenTotal_, 0L) };
      inline ScanMetrics& setTokenTotal(int64_t tokenTotal) { DARABONBA_PTR_SET_VALUE(tokenTotal_, tokenTotal) };


    protected:
      // The number of files.
      shared_ptr<int64_t> fileCount_ {};
      // The number of lines of code.
      shared_ptr<int64_t> linesOfCode_ {};
      // Deprecated.
      shared_ptr<int64_t> tokenTotal_ {};
    };

    class EngineSnapshot : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EngineSnapshot& obj) { 
        DARABONBA_PTR_TO_JSON(sast, sast_);
        DARABONBA_PTR_TO_JSON(sca, sca_);
      };
      friend void from_json(const Darabonba::Json& j, EngineSnapshot& obj) { 
        DARABONBA_PTR_FROM_JSON(sast, sast_);
        DARABONBA_PTR_FROM_JSON(sca, sca_);
      };
      EngineSnapshot() = default ;
      EngineSnapshot(const EngineSnapshot &) = default ;
      EngineSnapshot(EngineSnapshot &&) = default ;
      EngineSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EngineSnapshot() = default ;
      EngineSnapshot& operator=(const EngineSnapshot &) = default ;
      EngineSnapshot& operator=(EngineSnapshot &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sast_ == nullptr
        && this->sca_ == nullptr; };
      // sast Field Functions 
      bool hasSast() const { return this->sast_ != nullptr;};
      void deleteSast() { this->sast_ = nullptr;};
      inline bool getSast() const { DARABONBA_PTR_GET_DEFAULT(sast_, false) };
      inline EngineSnapshot& setSast(bool sast) { DARABONBA_PTR_SET_VALUE(sast_, sast) };


      // sca Field Functions 
      bool hasSca() const { return this->sca_ != nullptr;};
      void deleteSca() { this->sca_ = nullptr;};
      inline bool getSca() const { DARABONBA_PTR_GET_DEFAULT(sca_, false) };
      inline EngineSnapshot& setSca(bool sca) { DARABONBA_PTR_SET_VALUE(sca_, sca) };


    protected:
      // Indicates whether SAST is supported.
      shared_ptr<bool> sast_ {};
      // Indicates whether SCA is supported.
      shared_ptr<bool> sca_ {};
    };

    virtual bool empty() const override { return this->codeBundleId_ == nullptr
        && this->createdAt_ == nullptr && this->createdBy_ == nullptr && this->engineSnapshot_ == nullptr && this->finishedAt_ == nullptr && this->id_ == nullptr
        && this->kind_ == nullptr && this->projectId_ == nullptr && this->requestId_ == nullptr && this->scanMetrics_ == nullptr && this->scanProgress_ == nullptr
        && this->startedAt_ == nullptr && this->status_ == nullptr && this->taskName_ == nullptr && this->updatedAt_ == nullptr && this->workerId_ == nullptr; };
    // codeBundleId Field Functions 
    bool hasCodeBundleId() const { return this->codeBundleId_ != nullptr;};
    void deleteCodeBundleId() { this->codeBundleId_ = nullptr;};
    inline int64_t getCodeBundleId() const { DARABONBA_PTR_GET_DEFAULT(codeBundleId_, 0L) };
    inline CreateScanResponseBody& setCodeBundleId(int64_t codeBundleId) { DARABONBA_PTR_SET_VALUE(codeBundleId_, codeBundleId) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline CreateScanResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline CreateScanResponseBody& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // engineSnapshot Field Functions 
    bool hasEngineSnapshot() const { return this->engineSnapshot_ != nullptr;};
    void deleteEngineSnapshot() { this->engineSnapshot_ = nullptr;};
    inline const CreateScanResponseBody::EngineSnapshot & getEngineSnapshot() const { DARABONBA_PTR_GET_CONST(engineSnapshot_, CreateScanResponseBody::EngineSnapshot) };
    inline CreateScanResponseBody::EngineSnapshot getEngineSnapshot() { DARABONBA_PTR_GET(engineSnapshot_, CreateScanResponseBody::EngineSnapshot) };
    inline CreateScanResponseBody& setEngineSnapshot(const CreateScanResponseBody::EngineSnapshot & engineSnapshot) { DARABONBA_PTR_SET_VALUE(engineSnapshot_, engineSnapshot) };
    inline CreateScanResponseBody& setEngineSnapshot(CreateScanResponseBody::EngineSnapshot && engineSnapshot) { DARABONBA_PTR_SET_RVALUE(engineSnapshot_, engineSnapshot) };


    // finishedAt Field Functions 
    bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
    void deleteFinishedAt() { this->finishedAt_ = nullptr;};
    inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
    inline CreateScanResponseBody& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateScanResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline CreateScanResponseBody& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateScanResponseBody& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateScanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanMetrics Field Functions 
    bool hasScanMetrics() const { return this->scanMetrics_ != nullptr;};
    void deleteScanMetrics() { this->scanMetrics_ = nullptr;};
    inline const CreateScanResponseBody::ScanMetrics & getScanMetrics() const { DARABONBA_PTR_GET_CONST(scanMetrics_, CreateScanResponseBody::ScanMetrics) };
    inline CreateScanResponseBody::ScanMetrics getScanMetrics() { DARABONBA_PTR_GET(scanMetrics_, CreateScanResponseBody::ScanMetrics) };
    inline CreateScanResponseBody& setScanMetrics(const CreateScanResponseBody::ScanMetrics & scanMetrics) { DARABONBA_PTR_SET_VALUE(scanMetrics_, scanMetrics) };
    inline CreateScanResponseBody& setScanMetrics(CreateScanResponseBody::ScanMetrics && scanMetrics) { DARABONBA_PTR_SET_RVALUE(scanMetrics_, scanMetrics) };


    // scanProgress Field Functions 
    bool hasScanProgress() const { return this->scanProgress_ != nullptr;};
    void deleteScanProgress() { this->scanProgress_ = nullptr;};
    inline int64_t getScanProgress() const { DARABONBA_PTR_GET_DEFAULT(scanProgress_, 0L) };
    inline CreateScanResponseBody& setScanProgress(int64_t scanProgress) { DARABONBA_PTR_SET_VALUE(scanProgress_, scanProgress) };


    // startedAt Field Functions 
    bool hasStartedAt() const { return this->startedAt_ != nullptr;};
    void deleteStartedAt() { this->startedAt_ = nullptr;};
    inline string getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
    inline CreateScanResponseBody& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateScanResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateScanResponseBody& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline CreateScanResponseBody& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // workerId Field Functions 
    bool hasWorkerId() const { return this->workerId_ != nullptr;};
    void deleteWorkerId() { this->workerId_ = nullptr;};
    inline string getWorkerId() const { DARABONBA_PTR_GET_DEFAULT(workerId_, "") };
    inline CreateScanResponseBody& setWorkerId(string workerId) { DARABONBA_PTR_SET_VALUE(workerId_, workerId) };


  protected:
    // The code package ID.
    shared_ptr<int64_t> codeBundleId_ {};
    // The creation time.
    shared_ptr<string> createdAt_ {};
    // The user ID of the task creator.
    shared_ptr<string> createdBy_ {};
    // The supported types.
    shared_ptr<CreateScanResponseBody::EngineSnapshot> engineSnapshot_ {};
    // The scan end time.
    shared_ptr<string> finishedAt_ {};
    // The task ID.
    shared_ptr<int64_t> id_ {};
    // The type. Valid values:
    // * full: full data
    // * incremental: incremental
    shared_ptr<string> kind_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The scan information.
    shared_ptr<CreateScanResponseBody::ScanMetrics> scanMetrics_ {};
    // The task progress.
    shared_ptr<int64_t> scanProgress_ {};
    // The start time.
    shared_ptr<string> startedAt_ {};
    // The status. Valid values:
    // * running: Running.
    // * completed: Completed.
    // * failed: Failed.
    // * canceling: Being canceled.
    // * canceled: Canceled.
    shared_ptr<string> status_ {};
    // The task name.
    shared_ptr<string> taskName_ {};
    // The update time.
    shared_ptr<string> updatedAt_ {};
    // Deprecated.
    shared_ptr<string> workerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif

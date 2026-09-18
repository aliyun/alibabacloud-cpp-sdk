// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
namespace Models
{
  class DescribeScanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(codeBundleId, codeBundleId_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(currentPhase, currentPhase_);
      DARABONBA_PTR_TO_JSON(engineSnapshot, engineSnapshot_);
      DARABONBA_PTR_TO_JSON(finishedAt, finishedAt_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(kind, kind_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scanMetrics, scanMetrics_);
      DARABONBA_PTR_TO_JSON(scanProgress, scanProgress_);
      DARABONBA_PTR_TO_JSON(securityCredits, securityCredits_);
      DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(workerId, workerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(codeBundleId, codeBundleId_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(currentPhase, currentPhase_);
      DARABONBA_PTR_FROM_JSON(engineSnapshot, engineSnapshot_);
      DARABONBA_PTR_FROM_JSON(finishedAt, finishedAt_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(kind, kind_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scanMetrics, scanMetrics_);
      DARABONBA_PTR_FROM_JSON(scanProgress, scanProgress_);
      DARABONBA_PTR_FROM_JSON(securityCredits, securityCredits_);
      DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(workerId, workerId_);
    };
    DescribeScanResponseBody() = default ;
    DescribeScanResponseBody(const DescribeScanResponseBody &) = default ;
    DescribeScanResponseBody(DescribeScanResponseBody &&) = default ;
    DescribeScanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScanResponseBody() = default ;
    DescribeScanResponseBody& operator=(const DescribeScanResponseBody &) = default ;
    DescribeScanResponseBody& operator=(DescribeScanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScanMetrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScanMetrics& obj) { 
        DARABONBA_PTR_TO_JSON(credit, credit_);
        DARABONBA_PTR_TO_JSON(fileCount, fileCount_);
        DARABONBA_PTR_TO_JSON(linesOfCode, linesOfCode_);
        DARABONBA_PTR_TO_JSON(tokenTotal, tokenTotal_);
      };
      friend void from_json(const Darabonba::Json& j, ScanMetrics& obj) { 
        DARABONBA_PTR_FROM_JSON(credit, credit_);
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
      virtual bool empty() const override { return this->credit_ == nullptr
        && this->fileCount_ == nullptr && this->linesOfCode_ == nullptr && this->tokenTotal_ == nullptr; };
      // credit Field Functions 
      bool hasCredit() const { return this->credit_ != nullptr;};
      void deleteCredit() { this->credit_ = nullptr;};
      inline float getCredit() const { DARABONBA_PTR_GET_DEFAULT(credit_, 0.0) };
      inline ScanMetrics& setCredit(float credit) { DARABONBA_PTR_SET_VALUE(credit_, credit) };


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
      // The number of credits consumed by the task.
      shared_ptr<float> credit_ {};
      // The number of files.
      shared_ptr<int64_t> fileCount_ {};
      // The number of lines of code.
      shared_ptr<int64_t> linesOfCode_ {};
      // **[Deprecated]** This parameter is no longer used.
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
      // Indicates whether Static Application Security Testing (SAST) is supported.
      shared_ptr<bool> sast_ {};
      // Indicates whether Software Composition Analysis (SCA) is supported.
      shared_ptr<bool> sca_ {};
    };

    virtual bool empty() const override { return this->codeBundleId_ == nullptr
        && this->createdAt_ == nullptr && this->createdBy_ == nullptr && this->currentPhase_ == nullptr && this->engineSnapshot_ == nullptr && this->finishedAt_ == nullptr
        && this->id_ == nullptr && this->kind_ == nullptr && this->projectId_ == nullptr && this->requestId_ == nullptr && this->scanMetrics_ == nullptr
        && this->scanProgress_ == nullptr && this->securityCredits_ == nullptr && this->startedAt_ == nullptr && this->status_ == nullptr && this->taskName_ == nullptr
        && this->updatedAt_ == nullptr && this->workerId_ == nullptr; };
    // codeBundleId Field Functions 
    bool hasCodeBundleId() const { return this->codeBundleId_ != nullptr;};
    void deleteCodeBundleId() { this->codeBundleId_ = nullptr;};
    inline int64_t getCodeBundleId() const { DARABONBA_PTR_GET_DEFAULT(codeBundleId_, 0L) };
    inline DescribeScanResponseBody& setCodeBundleId(int64_t codeBundleId) { DARABONBA_PTR_SET_VALUE(codeBundleId_, codeBundleId) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline DescribeScanResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline DescribeScanResponseBody& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // currentPhase Field Functions 
    bool hasCurrentPhase() const { return this->currentPhase_ != nullptr;};
    void deleteCurrentPhase() { this->currentPhase_ = nullptr;};
    inline string getCurrentPhase() const { DARABONBA_PTR_GET_DEFAULT(currentPhase_, "") };
    inline DescribeScanResponseBody& setCurrentPhase(string currentPhase) { DARABONBA_PTR_SET_VALUE(currentPhase_, currentPhase) };


    // engineSnapshot Field Functions 
    bool hasEngineSnapshot() const { return this->engineSnapshot_ != nullptr;};
    void deleteEngineSnapshot() { this->engineSnapshot_ = nullptr;};
    inline const DescribeScanResponseBody::EngineSnapshot & getEngineSnapshot() const { DARABONBA_PTR_GET_CONST(engineSnapshot_, DescribeScanResponseBody::EngineSnapshot) };
    inline DescribeScanResponseBody::EngineSnapshot getEngineSnapshot() { DARABONBA_PTR_GET(engineSnapshot_, DescribeScanResponseBody::EngineSnapshot) };
    inline DescribeScanResponseBody& setEngineSnapshot(const DescribeScanResponseBody::EngineSnapshot & engineSnapshot) { DARABONBA_PTR_SET_VALUE(engineSnapshot_, engineSnapshot) };
    inline DescribeScanResponseBody& setEngineSnapshot(DescribeScanResponseBody::EngineSnapshot && engineSnapshot) { DARABONBA_PTR_SET_RVALUE(engineSnapshot_, engineSnapshot) };


    // finishedAt Field Functions 
    bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
    void deleteFinishedAt() { this->finishedAt_ = nullptr;};
    inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
    inline DescribeScanResponseBody& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeScanResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline DescribeScanResponseBody& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DescribeScanResponseBody& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanMetrics Field Functions 
    bool hasScanMetrics() const { return this->scanMetrics_ != nullptr;};
    void deleteScanMetrics() { this->scanMetrics_ = nullptr;};
    inline const DescribeScanResponseBody::ScanMetrics & getScanMetrics() const { DARABONBA_PTR_GET_CONST(scanMetrics_, DescribeScanResponseBody::ScanMetrics) };
    inline DescribeScanResponseBody::ScanMetrics getScanMetrics() { DARABONBA_PTR_GET(scanMetrics_, DescribeScanResponseBody::ScanMetrics) };
    inline DescribeScanResponseBody& setScanMetrics(const DescribeScanResponseBody::ScanMetrics & scanMetrics) { DARABONBA_PTR_SET_VALUE(scanMetrics_, scanMetrics) };
    inline DescribeScanResponseBody& setScanMetrics(DescribeScanResponseBody::ScanMetrics && scanMetrics) { DARABONBA_PTR_SET_RVALUE(scanMetrics_, scanMetrics) };


    // scanProgress Field Functions 
    bool hasScanProgress() const { return this->scanProgress_ != nullptr;};
    void deleteScanProgress() { this->scanProgress_ = nullptr;};
    inline int64_t getScanProgress() const { DARABONBA_PTR_GET_DEFAULT(scanProgress_, 0L) };
    inline DescribeScanResponseBody& setScanProgress(int64_t scanProgress) { DARABONBA_PTR_SET_VALUE(scanProgress_, scanProgress) };


    // securityCredits Field Functions 
    bool hasSecurityCredits() const { return this->securityCredits_ != nullptr;};
    void deleteSecurityCredits() { this->securityCredits_ = nullptr;};
    inline float getSecurityCredits() const { DARABONBA_PTR_GET_DEFAULT(securityCredits_, 0.0) };
    inline DescribeScanResponseBody& setSecurityCredits(float securityCredits) { DARABONBA_PTR_SET_VALUE(securityCredits_, securityCredits) };


    // startedAt Field Functions 
    bool hasStartedAt() const { return this->startedAt_ != nullptr;};
    void deleteStartedAt() { this->startedAt_ = nullptr;};
    inline string getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
    inline DescribeScanResponseBody& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeScanResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeScanResponseBody& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline DescribeScanResponseBody& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // workerId Field Functions 
    bool hasWorkerId() const { return this->workerId_ != nullptr;};
    void deleteWorkerId() { this->workerId_ = nullptr;};
    inline string getWorkerId() const { DARABONBA_PTR_GET_DEFAULT(workerId_, "") };
    inline DescribeScanResponseBody& setWorkerId(string workerId) { DARABONBA_PTR_SET_VALUE(workerId_, workerId) };


  protected:
    // The function code package ID.
    shared_ptr<int64_t> codeBundleId_ {};
    // The time when the task was created.
    shared_ptr<string> createdAt_ {};
    // The user ID of the task creator.
    shared_ptr<string> createdBy_ {};
    // The scan phase. Valid values:
    // * threat_model: threat modeling.
    // * discovery: vulnerability discovery.
    // * panel: vulnerability review.
    // * adversarial: adversarial verification.
    // * finalize: report compilation.
    shared_ptr<string> currentPhase_ {};
    // The supported engine types.
    shared_ptr<DescribeScanResponseBody::EngineSnapshot> engineSnapshot_ {};
    // The time when the scan finished.
    shared_ptr<string> finishedAt_ {};
    // The task ID.
    shared_ptr<int64_t> id_ {};
    // The scan type. Valid values:
    // * full: full
    // * incremental: incremental
    shared_ptr<string> kind_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The unique request ID.
    shared_ptr<string> requestId_ {};
    // The scan results.
    shared_ptr<DescribeScanResponseBody::ScanMetrics> scanMetrics_ {};
    // The task progress.
    shared_ptr<int64_t> scanProgress_ {};
    // **[Deprecated]** This parameter is no longer used.
    shared_ptr<float> securityCredits_ {};
    // The time when the task started.
    shared_ptr<string> startedAt_ {};
    // The task status. Valid values:
    // 
    // * running: Running.
    // * completed: Completed.
    // * failed: Failed.
    // * canceling: Being canceled.
    // * canceled: Canceled.
    shared_ptr<string> status_ {};
    // The task name.
    shared_ptr<string> taskName_ {};
    // The time when the task was last updated.
    shared_ptr<string> updatedAt_ {};
    // **[Deprecated]** This parameter is no longer used.
    shared_ptr<string> workerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif

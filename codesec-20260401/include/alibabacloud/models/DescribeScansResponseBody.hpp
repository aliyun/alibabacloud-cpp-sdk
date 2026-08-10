// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCANSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
namespace Models
{
  class DescribeScansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    DescribeScansResponseBody() = default ;
    DescribeScansResponseBody(const DescribeScansResponseBody &) = default ;
    DescribeScansResponseBody(DescribeScansResponseBody &&) = default ;
    DescribeScansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScansResponseBody() = default ;
    DescribeScansResponseBody& operator=(const DescribeScansResponseBody &) = default ;
    DescribeScansResponseBody& operator=(DescribeScansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(codeBundleId, codeBundleId_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
        DARABONBA_PTR_TO_JSON(engineSnapshot, engineSnapshot_);
        DARABONBA_PTR_TO_JSON(finishedAt, finishedAt_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(kind, kind_);
        DARABONBA_PTR_TO_JSON(projectId, projectId_);
        DARABONBA_PTR_TO_JSON(scanMetrics, scanMetrics_);
        DARABONBA_PTR_TO_JSON(scanProgress, scanProgress_);
        DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskName, taskName_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(workerId, workerId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(codeBundleId, codeBundleId_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
        DARABONBA_PTR_FROM_JSON(engineSnapshot, engineSnapshot_);
        DARABONBA_PTR_FROM_JSON(finishedAt, finishedAt_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(kind, kind_);
        DARABONBA_PTR_FROM_JSON(projectId, projectId_);
        DARABONBA_PTR_FROM_JSON(scanMetrics, scanMetrics_);
        DARABONBA_PTR_FROM_JSON(scanProgress, scanProgress_);
        DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskName, taskName_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(workerId, workerId_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
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
        shared_ptr<float> credit_ {};
        shared_ptr<int64_t> fileCount_ {};
        shared_ptr<int64_t> linesOfCode_ {};
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
        shared_ptr<bool> sast_ {};
        shared_ptr<bool> sca_ {};
      };

      virtual bool empty() const override { return this->codeBundleId_ == nullptr
        && this->createdAt_ == nullptr && this->createdBy_ == nullptr && this->engineSnapshot_ == nullptr && this->finishedAt_ == nullptr && this->id_ == nullptr
        && this->kind_ == nullptr && this->projectId_ == nullptr && this->scanMetrics_ == nullptr && this->scanProgress_ == nullptr && this->startedAt_ == nullptr
        && this->status_ == nullptr && this->taskName_ == nullptr && this->updatedAt_ == nullptr && this->workerId_ == nullptr; };
      // codeBundleId Field Functions 
      bool hasCodeBundleId() const { return this->codeBundleId_ != nullptr;};
      void deleteCodeBundleId() { this->codeBundleId_ = nullptr;};
      inline int64_t getCodeBundleId() const { DARABONBA_PTR_GET_DEFAULT(codeBundleId_, 0L) };
      inline Items& setCodeBundleId(int64_t codeBundleId) { DARABONBA_PTR_SET_VALUE(codeBundleId_, codeBundleId) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // createdBy Field Functions 
      bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
      void deleteCreatedBy() { this->createdBy_ = nullptr;};
      inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
      inline Items& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


      // engineSnapshot Field Functions 
      bool hasEngineSnapshot() const { return this->engineSnapshot_ != nullptr;};
      void deleteEngineSnapshot() { this->engineSnapshot_ = nullptr;};
      inline const Items::EngineSnapshot & getEngineSnapshot() const { DARABONBA_PTR_GET_CONST(engineSnapshot_, Items::EngineSnapshot) };
      inline Items::EngineSnapshot getEngineSnapshot() { DARABONBA_PTR_GET(engineSnapshot_, Items::EngineSnapshot) };
      inline Items& setEngineSnapshot(const Items::EngineSnapshot & engineSnapshot) { DARABONBA_PTR_SET_VALUE(engineSnapshot_, engineSnapshot) };
      inline Items& setEngineSnapshot(Items::EngineSnapshot && engineSnapshot) { DARABONBA_PTR_SET_RVALUE(engineSnapshot_, engineSnapshot) };


      // finishedAt Field Functions 
      bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
      void deleteFinishedAt() { this->finishedAt_ = nullptr;};
      inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
      inline Items& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Items& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // kind Field Functions 
      bool hasKind() const { return this->kind_ != nullptr;};
      void deleteKind() { this->kind_ = nullptr;};
      inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
      inline Items& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Items& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // scanMetrics Field Functions 
      bool hasScanMetrics() const { return this->scanMetrics_ != nullptr;};
      void deleteScanMetrics() { this->scanMetrics_ = nullptr;};
      inline const Items::ScanMetrics & getScanMetrics() const { DARABONBA_PTR_GET_CONST(scanMetrics_, Items::ScanMetrics) };
      inline Items::ScanMetrics getScanMetrics() { DARABONBA_PTR_GET(scanMetrics_, Items::ScanMetrics) };
      inline Items& setScanMetrics(const Items::ScanMetrics & scanMetrics) { DARABONBA_PTR_SET_VALUE(scanMetrics_, scanMetrics) };
      inline Items& setScanMetrics(Items::ScanMetrics && scanMetrics) { DARABONBA_PTR_SET_RVALUE(scanMetrics_, scanMetrics) };


      // scanProgress Field Functions 
      bool hasScanProgress() const { return this->scanProgress_ != nullptr;};
      void deleteScanProgress() { this->scanProgress_ = nullptr;};
      inline int64_t getScanProgress() const { DARABONBA_PTR_GET_DEFAULT(scanProgress_, 0L) };
      inline Items& setScanProgress(int64_t scanProgress) { DARABONBA_PTR_SET_VALUE(scanProgress_, scanProgress) };


      // startedAt Field Functions 
      bool hasStartedAt() const { return this->startedAt_ != nullptr;};
      void deleteStartedAt() { this->startedAt_ = nullptr;};
      inline string getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
      inline Items& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Items& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Items& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // workerId Field Functions 
      bool hasWorkerId() const { return this->workerId_ != nullptr;};
      void deleteWorkerId() { this->workerId_ = nullptr;};
      inline string getWorkerId() const { DARABONBA_PTR_GET_DEFAULT(workerId_, "") };
      inline Items& setWorkerId(string workerId) { DARABONBA_PTR_SET_VALUE(workerId_, workerId) };


    protected:
      shared_ptr<int64_t> codeBundleId_ {};
      // 扫描任务创建时间（RFC3339）
      shared_ptr<string> createdAt_ {};
      shared_ptr<string> createdBy_ {};
      shared_ptr<Items::EngineSnapshot> engineSnapshot_ {};
      // 扫描结束时间（RFC3339）
      shared_ptr<string> finishedAt_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> kind_ {};
      shared_ptr<int64_t> projectId_ {};
      shared_ptr<Items::ScanMetrics> scanMetrics_ {};
      shared_ptr<int64_t> scanProgress_ {};
      // 扫描开始时间（RFC3339）
      shared_ptr<string> startedAt_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskName_ {};
      // 扫描任务更新时间（RFC3339）
      shared_ptr<string> updatedAt_ {};
      shared_ptr<string> workerId_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeScansResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeScansResponseBody::Items>) };
    inline vector<DescribeScansResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeScansResponseBody::Items>) };
    inline DescribeScansResponseBody& setItems(const vector<DescribeScansResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeScansResponseBody& setItems(vector<DescribeScansResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeScansResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeScansResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeScansResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeScansResponseBody::Items>> items_ {};
    shared_ptr<int64_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWPIPELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWPIPELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class PreviewPipelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewPipelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(meta, meta_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewPipelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(meta, meta_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    PreviewPipelineResponseBody() = default ;
    PreviewPipelineResponseBody(const PreviewPipelineResponseBody &) = default ;
    PreviewPipelineResponseBody(PreviewPipelineResponseBody &&) = default ;
    PreviewPipelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewPipelineResponseBody() = default ;
    PreviewPipelineResponseBody& operator=(const PreviewPipelineResponseBody &) = default ;
    PreviewPipelineResponseBody& operator=(PreviewPipelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Meta : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Meta& obj) { 
        DARABONBA_PTR_TO_JSON(aggQuery, aggQuery_);
        DARABONBA_PTR_TO_JSON(columnTypes, columnTypes_);
        DARABONBA_PTR_TO_JSON(count, count_);
        DARABONBA_PTR_TO_JSON(cpuCores, cpuCores_);
        DARABONBA_PTR_TO_JSON(cpuSec, cpuSec_);
        DARABONBA_PTR_TO_JSON(elapsedMillisecond, elapsedMillisecond_);
        DARABONBA_PTR_TO_JSON(hasSQL, hasSQL_);
        DARABONBA_PTR_TO_JSON(isAccurate, isAccurate_);
        DARABONBA_PTR_TO_JSON(keys, keys_);
        DARABONBA_PTR_TO_JSON(limited, limited_);
        DARABONBA_PTR_TO_JSON(mode, mode_);
        DARABONBA_PTR_TO_JSON(processedBytes, processedBytes_);
        DARABONBA_PTR_TO_JSON(processedRows, processedRows_);
        DARABONBA_PTR_TO_JSON(progress, progress_);
        DARABONBA_PTR_TO_JSON(scanBytes, scanBytes_);
        DARABONBA_PTR_TO_JSON(terms, terms_);
        DARABONBA_PTR_TO_JSON(whereQuery, whereQuery_);
      };
      friend void from_json(const Darabonba::Json& j, Meta& obj) { 
        DARABONBA_PTR_FROM_JSON(aggQuery, aggQuery_);
        DARABONBA_PTR_FROM_JSON(columnTypes, columnTypes_);
        DARABONBA_PTR_FROM_JSON(count, count_);
        DARABONBA_PTR_FROM_JSON(cpuCores, cpuCores_);
        DARABONBA_PTR_FROM_JSON(cpuSec, cpuSec_);
        DARABONBA_PTR_FROM_JSON(elapsedMillisecond, elapsedMillisecond_);
        DARABONBA_PTR_FROM_JSON(hasSQL, hasSQL_);
        DARABONBA_PTR_FROM_JSON(isAccurate, isAccurate_);
        DARABONBA_PTR_FROM_JSON(keys, keys_);
        DARABONBA_PTR_FROM_JSON(limited, limited_);
        DARABONBA_PTR_FROM_JSON(mode, mode_);
        DARABONBA_PTR_FROM_JSON(processedBytes, processedBytes_);
        DARABONBA_PTR_FROM_JSON(processedRows, processedRows_);
        DARABONBA_PTR_FROM_JSON(progress, progress_);
        DARABONBA_PTR_FROM_JSON(scanBytes, scanBytes_);
        DARABONBA_PTR_FROM_JSON(terms, terms_);
        DARABONBA_PTR_FROM_JSON(whereQuery, whereQuery_);
      };
      Meta() = default ;
      Meta(const Meta &) = default ;
      Meta(Meta &&) = default ;
      Meta(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Meta() = default ;
      Meta& operator=(const Meta &) = default ;
      Meta& operator=(Meta &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aggQuery_ == nullptr
        && this->columnTypes_ == nullptr && this->count_ == nullptr && this->cpuCores_ == nullptr && this->cpuSec_ == nullptr && this->elapsedMillisecond_ == nullptr
        && this->hasSQL_ == nullptr && this->isAccurate_ == nullptr && this->keys_ == nullptr && this->limited_ == nullptr && this->mode_ == nullptr
        && this->processedBytes_ == nullptr && this->processedRows_ == nullptr && this->progress_ == nullptr && this->scanBytes_ == nullptr && this->terms_ == nullptr
        && this->whereQuery_ == nullptr; };
      // aggQuery Field Functions 
      bool hasAggQuery() const { return this->aggQuery_ != nullptr;};
      void deleteAggQuery() { this->aggQuery_ = nullptr;};
      inline string getAggQuery() const { DARABONBA_PTR_GET_DEFAULT(aggQuery_, "") };
      inline Meta& setAggQuery(string aggQuery) { DARABONBA_PTR_SET_VALUE(aggQuery_, aggQuery) };


      // columnTypes Field Functions 
      bool hasColumnTypes() const { return this->columnTypes_ != nullptr;};
      void deleteColumnTypes() { this->columnTypes_ = nullptr;};
      inline const vector<string> & getColumnTypes() const { DARABONBA_PTR_GET_CONST(columnTypes_, vector<string>) };
      inline vector<string> getColumnTypes() { DARABONBA_PTR_GET(columnTypes_, vector<string>) };
      inline Meta& setColumnTypes(const vector<string> & columnTypes) { DARABONBA_PTR_SET_VALUE(columnTypes_, columnTypes) };
      inline Meta& setColumnTypes(vector<string> && columnTypes) { DARABONBA_PTR_SET_RVALUE(columnTypes_, columnTypes) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Meta& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // cpuCores Field Functions 
      bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
      void deleteCpuCores() { this->cpuCores_ = nullptr;};
      inline int32_t getCpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, 0) };
      inline Meta& setCpuCores(int32_t cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


      // cpuSec Field Functions 
      bool hasCpuSec() const { return this->cpuSec_ != nullptr;};
      void deleteCpuSec() { this->cpuSec_ = nullptr;};
      inline double getCpuSec() const { DARABONBA_PTR_GET_DEFAULT(cpuSec_, 0.0) };
      inline Meta& setCpuSec(double cpuSec) { DARABONBA_PTR_SET_VALUE(cpuSec_, cpuSec) };


      // elapsedMillisecond Field Functions 
      bool hasElapsedMillisecond() const { return this->elapsedMillisecond_ != nullptr;};
      void deleteElapsedMillisecond() { this->elapsedMillisecond_ = nullptr;};
      inline int64_t getElapsedMillisecond() const { DARABONBA_PTR_GET_DEFAULT(elapsedMillisecond_, 0L) };
      inline Meta& setElapsedMillisecond(int64_t elapsedMillisecond) { DARABONBA_PTR_SET_VALUE(elapsedMillisecond_, elapsedMillisecond) };


      // hasSQL Field Functions 
      bool hasHasSQL() const { return this->hasSQL_ != nullptr;};
      void deleteHasSQL() { this->hasSQL_ = nullptr;};
      inline bool getHasSQL() const { DARABONBA_PTR_GET_DEFAULT(hasSQL_, false) };
      inline Meta& setHasSQL(bool hasSQL) { DARABONBA_PTR_SET_VALUE(hasSQL_, hasSQL) };


      // isAccurate Field Functions 
      bool hasIsAccurate() const { return this->isAccurate_ != nullptr;};
      void deleteIsAccurate() { this->isAccurate_ = nullptr;};
      inline bool getIsAccurate() const { DARABONBA_PTR_GET_DEFAULT(isAccurate_, false) };
      inline Meta& setIsAccurate(bool isAccurate) { DARABONBA_PTR_SET_VALUE(isAccurate_, isAccurate) };


      // keys Field Functions 
      bool hasKeys() const { return this->keys_ != nullptr;};
      void deleteKeys() { this->keys_ = nullptr;};
      inline const vector<string> & getKeys() const { DARABONBA_PTR_GET_CONST(keys_, vector<string>) };
      inline vector<string> getKeys() { DARABONBA_PTR_GET(keys_, vector<string>) };
      inline Meta& setKeys(const vector<string> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
      inline Meta& setKeys(vector<string> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


      // limited Field Functions 
      bool hasLimited() const { return this->limited_ != nullptr;};
      void deleteLimited() { this->limited_ = nullptr;};
      inline int32_t getLimited() const { DARABONBA_PTR_GET_DEFAULT(limited_, 0) };
      inline Meta& setLimited(int32_t limited) { DARABONBA_PTR_SET_VALUE(limited_, limited) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline int32_t getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
      inline Meta& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // processedBytes Field Functions 
      bool hasProcessedBytes() const { return this->processedBytes_ != nullptr;};
      void deleteProcessedBytes() { this->processedBytes_ = nullptr;};
      inline int64_t getProcessedBytes() const { DARABONBA_PTR_GET_DEFAULT(processedBytes_, 0L) };
      inline Meta& setProcessedBytes(int64_t processedBytes) { DARABONBA_PTR_SET_VALUE(processedBytes_, processedBytes) };


      // processedRows Field Functions 
      bool hasProcessedRows() const { return this->processedRows_ != nullptr;};
      void deleteProcessedRows() { this->processedRows_ = nullptr;};
      inline int64_t getProcessedRows() const { DARABONBA_PTR_GET_DEFAULT(processedRows_, 0L) };
      inline Meta& setProcessedRows(int64_t processedRows) { DARABONBA_PTR_SET_VALUE(processedRows_, processedRows) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline Meta& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // scanBytes Field Functions 
      bool hasScanBytes() const { return this->scanBytes_ != nullptr;};
      void deleteScanBytes() { this->scanBytes_ = nullptr;};
      inline int64_t getScanBytes() const { DARABONBA_PTR_GET_DEFAULT(scanBytes_, 0L) };
      inline Meta& setScanBytes(int64_t scanBytes) { DARABONBA_PTR_SET_VALUE(scanBytes_, scanBytes) };


      // terms Field Functions 
      bool hasTerms() const { return this->terms_ != nullptr;};
      void deleteTerms() { this->terms_ = nullptr;};
      inline const vector<Darabonba::Json> & getTerms() const { DARABONBA_PTR_GET_CONST(terms_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getTerms() { DARABONBA_PTR_GET(terms_, vector<Darabonba::Json>) };
      inline Meta& setTerms(const vector<Darabonba::Json> & terms) { DARABONBA_PTR_SET_VALUE(terms_, terms) };
      inline Meta& setTerms(vector<Darabonba::Json> && terms) { DARABONBA_PTR_SET_RVALUE(terms_, terms) };


      // whereQuery Field Functions 
      bool hasWhereQuery() const { return this->whereQuery_ != nullptr;};
      void deleteWhereQuery() { this->whereQuery_ = nullptr;};
      inline string getWhereQuery() const { DARABONBA_PTR_GET_DEFAULT(whereQuery_, "") };
      inline Meta& setWhereQuery(string whereQuery) { DARABONBA_PTR_SET_VALUE(whereQuery_, whereQuery) };


    protected:
      // The aggregation analysis SPL statement.
      shared_ptr<string> aggQuery_ {};
      // The `meta.columnTypes` field provides a mapping from column names to data types (string / long / double / json).
      shared_ptr<vector<string>> columnTypes_ {};
      // The number of matched log entries.
      shared_ptr<int32_t> count_ {};
      // The number of CPU cores consumed.
      shared_ptr<int32_t> cpuCores_ {};
      // The CPU time consumed, in seconds.
      shared_ptr<double> cpuSec_ {};
      // The query duration, in milliseconds.
      shared_ptr<int64_t> elapsedMillisecond_ {};
      // Indicates whether the query is an SQL query.
      shared_ptr<bool> hasSQL_ {};
      // Indicates whether nanosecond-level ordering is enabled.
      shared_ptr<bool> isAccurate_ {};
      // The list of result column names.
      shared_ptr<vector<string>> keys_ {};
      // The maximum number of result rows returned.
      shared_ptr<int32_t> limited_ {};
      // The query mode identifier.
      shared_ptr<int32_t> mode_ {};
      // The number of processed data bytes.
      shared_ptr<int64_t> processedBytes_ {};
      // The number of processed log rows.
      shared_ptr<int64_t> processedRows_ {};
      // The SLS query progress. A value of Complete indicates that the query is complete.
      shared_ptr<string> progress_ {};
      // The number of raw data bytes scanned.
      shared_ptr<int64_t> scanBytes_ {};
      // The column type and aggregation information.
      shared_ptr<vector<Darabonba::Json>> terms_ {};
      // The filter condition SPL statement.
      shared_ptr<string> whereQuery_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->meta_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<map<string, string>> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<map<string, string>>) };
    inline vector<map<string, string>> getData() { DARABONBA_PTR_GET(data_, vector<map<string, string>>) };
    inline PreviewPipelineResponseBody& setData(const vector<map<string, string>> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PreviewPipelineResponseBody& setData(vector<map<string, string>> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline const PreviewPipelineResponseBody::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, PreviewPipelineResponseBody::Meta) };
    inline PreviewPipelineResponseBody::Meta getMeta() { DARABONBA_PTR_GET(meta_, PreviewPipelineResponseBody::Meta) };
    inline PreviewPipelineResponseBody& setMeta(const PreviewPipelineResponseBody::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
    inline PreviewPipelineResponseBody& setMeta(PreviewPipelineResponseBody::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreviewPipelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The `data` field is a collection of sample rows (an array of maps) that contains only the first N rows (up to 5 by default) and does not reflect the complete write plan.
    shared_ptr<vector<map<string, string>>> data_ {};
    // The query metadata.
    shared_ptr<PreviewPipelineResponseBody::Meta> meta_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ExecuteQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(columnTypes, columnTypes_);
      DARABONBA_PTR_TO_JSON(columns, columns_);
      DARABONBA_PTR_TO_JSON(meta, meta_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(rows, rows_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(columnTypes, columnTypes_);
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(meta, meta_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(rows, rows_);
    };
    ExecuteQueryResponseBody() = default ;
    ExecuteQueryResponseBody(const ExecuteQueryResponseBody &) = default ;
    ExecuteQueryResponseBody(ExecuteQueryResponseBody &&) = default ;
    ExecuteQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteQueryResponseBody() = default ;
    ExecuteQueryResponseBody& operator=(const ExecuteQueryResponseBody &) = default ;
    ExecuteQueryResponseBody& operator=(ExecuteQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Meta : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Meta& obj) { 
        DARABONBA_PTR_TO_JSON(affectedRows, affectedRows_);
        DARABONBA_PTR_TO_JSON(count, count_);
        DARABONBA_PTR_TO_JSON(elapsedMillisecond, elapsedMillisecond_);
        DARABONBA_PTR_TO_JSON(progress, progress_);
      };
      friend void from_json(const Darabonba::Json& j, Meta& obj) { 
        DARABONBA_PTR_FROM_JSON(affectedRows, affectedRows_);
        DARABONBA_PTR_FROM_JSON(count, count_);
        DARABONBA_PTR_FROM_JSON(elapsedMillisecond, elapsedMillisecond_);
        DARABONBA_PTR_FROM_JSON(progress, progress_);
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
      virtual bool empty() const override { return this->affectedRows_ == nullptr
        && this->count_ == nullptr && this->elapsedMillisecond_ == nullptr && this->progress_ == nullptr; };
      // affectedRows Field Functions 
      bool hasAffectedRows() const { return this->affectedRows_ != nullptr;};
      void deleteAffectedRows() { this->affectedRows_ = nullptr;};
      inline int32_t getAffectedRows() const { DARABONBA_PTR_GET_DEFAULT(affectedRows_, 0) };
      inline Meta& setAffectedRows(int32_t affectedRows) { DARABONBA_PTR_SET_VALUE(affectedRows_, affectedRows) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Meta& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // elapsedMillisecond Field Functions 
      bool hasElapsedMillisecond() const { return this->elapsedMillisecond_ != nullptr;};
      void deleteElapsedMillisecond() { this->elapsedMillisecond_ = nullptr;};
      inline int64_t getElapsedMillisecond() const { DARABONBA_PTR_GET_DEFAULT(elapsedMillisecond_, 0L) };
      inline Meta& setElapsedMillisecond(int64_t elapsedMillisecond) { DARABONBA_PTR_SET_VALUE(elapsedMillisecond_, elapsedMillisecond) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline Meta& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    protected:
      shared_ptr<int32_t> affectedRows_ {};
      shared_ptr<int32_t> count_ {};
      shared_ptr<int64_t> elapsedMillisecond_ {};
      shared_ptr<string> progress_ {};
    };

    virtual bool empty() const override { return this->columnTypes_ == nullptr
        && this->columns_ == nullptr && this->meta_ == nullptr && this->requestId_ == nullptr && this->rows_ == nullptr; };
    // columnTypes Field Functions 
    bool hasColumnTypes() const { return this->columnTypes_ != nullptr;};
    void deleteColumnTypes() { this->columnTypes_ = nullptr;};
    inline const vector<string> & getColumnTypes() const { DARABONBA_PTR_GET_CONST(columnTypes_, vector<string>) };
    inline vector<string> getColumnTypes() { DARABONBA_PTR_GET(columnTypes_, vector<string>) };
    inline ExecuteQueryResponseBody& setColumnTypes(const vector<string> & columnTypes) { DARABONBA_PTR_SET_VALUE(columnTypes_, columnTypes) };
    inline ExecuteQueryResponseBody& setColumnTypes(vector<string> && columnTypes) { DARABONBA_PTR_SET_RVALUE(columnTypes_, columnTypes) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<string> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<string>) };
    inline vector<string> getColumns() { DARABONBA_PTR_GET(columns_, vector<string>) };
    inline ExecuteQueryResponseBody& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline ExecuteQueryResponseBody& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline const ExecuteQueryResponseBody::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, ExecuteQueryResponseBody::Meta) };
    inline ExecuteQueryResponseBody::Meta getMeta() { DARABONBA_PTR_GET(meta_, ExecuteQueryResponseBody::Meta) };
    inline ExecuteQueryResponseBody& setMeta(const ExecuteQueryResponseBody::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
    inline ExecuteQueryResponseBody& setMeta(ExecuteQueryResponseBody::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline const vector<vector<Darabonba::Json>> & getRows() const { DARABONBA_PTR_GET_CONST(rows_, vector<vector<Darabonba::Json>>) };
    inline vector<vector<Darabonba::Json>> getRows() { DARABONBA_PTR_GET(rows_, vector<vector<Darabonba::Json>>) };
    inline ExecuteQueryResponseBody& setRows(const vector<vector<Darabonba::Json>> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
    inline ExecuteQueryResponseBody& setRows(vector<vector<Darabonba::Json>> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


  protected:
    shared_ptr<vector<string>> columnTypes_ {};
    shared_ptr<vector<string>> columns_ {};
    shared_ptr<ExecuteQueryResponseBody::Meta> meta_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<vector<Darabonba::Json>>> rows_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif

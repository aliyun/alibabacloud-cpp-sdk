// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTTASKDTO_HPP_
#define ALIBABACLOUD_MODELS_EXPORTTASKDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ExportTaskDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportTaskDTO& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(error, error_);
      DARABONBA_PTR_TO_JSON(filename, filename_);
      DARABONBA_PTR_TO_JSON(finishedAt, finishedAt_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(maxRows, maxRows_);
      DARABONBA_PTR_TO_JSON(progress, progress_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(total, total_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ExportTaskDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(error, error_);
      DARABONBA_PTR_FROM_JSON(filename, filename_);
      DARABONBA_PTR_FROM_JSON(finishedAt, finishedAt_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(maxRows, maxRows_);
      DARABONBA_PTR_FROM_JSON(progress, progress_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(total, total_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ExportTaskDTO() = default ;
    ExportTaskDTO(const ExportTaskDTO &) = default ;
    ExportTaskDTO(ExportTaskDTO &&) = default ;
    ExportTaskDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportTaskDTO() = default ;
    ExportTaskDTO& operator=(const ExportTaskDTO &) = default ;
    ExportTaskDTO& operator=(ExportTaskDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->error_ == nullptr && this->filename_ == nullptr && this->finishedAt_ == nullptr && this->id_ == nullptr && this->maxRows_ == nullptr
        && this->progress_ == nullptr && this->status_ == nullptr && this->total_ == nullptr && this->type_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline ExportTaskDTO& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline ExportTaskDTO& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline ExportTaskDTO& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // finishedAt Field Functions 
    bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
    void deleteFinishedAt() { this->finishedAt_ = nullptr;};
    inline int64_t getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, 0L) };
    inline ExportTaskDTO& setFinishedAt(int64_t finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ExportTaskDTO& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // maxRows Field Functions 
    bool hasMaxRows() const { return this->maxRows_ != nullptr;};
    void deleteMaxRows() { this->maxRows_ = nullptr;};
    inline int32_t getMaxRows() const { DARABONBA_PTR_GET_DEFAULT(maxRows_, 0) };
    inline ExportTaskDTO& setMaxRows(int32_t maxRows) { DARABONBA_PTR_SET_VALUE(maxRows_, maxRows) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline ExportTaskDTO& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ExportTaskDTO& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ExportTaskDTO& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ExportTaskDTO& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<int64_t> createdAt_ {};
    shared_ptr<string> error_ {};
    shared_ptr<string> filename_ {};
    shared_ptr<int64_t> finishedAt_ {};
    shared_ptr<string> id_ {};
    shared_ptr<int32_t> maxRows_ {};
    shared_ptr<int32_t> progress_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int32_t> total_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif

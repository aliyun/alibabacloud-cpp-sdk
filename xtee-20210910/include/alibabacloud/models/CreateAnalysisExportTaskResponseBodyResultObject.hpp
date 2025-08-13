// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANALYSISEXPORTTASKRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_CREATEANALYSISEXPORTTASKRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateAnalysisExportTaskResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAnalysisExportTaskResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(columns, columns_);
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(eventBeginTime, eventBeginTime_);
      DARABONBA_PTR_TO_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_TO_JSON(eventEndTime, eventEndTime_);
      DARABONBA_PTR_TO_JSON(fileFormat, fileFormat_);
      DARABONBA_PTR_TO_JSON(ossKey, ossKey_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAnalysisExportTaskResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(eventBeginTime, eventBeginTime_);
      DARABONBA_PTR_FROM_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_FROM_JSON(eventEndTime, eventEndTime_);
      DARABONBA_PTR_FROM_JSON(fileFormat, fileFormat_);
      DARABONBA_PTR_FROM_JSON(ossKey, ossKey_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    CreateAnalysisExportTaskResponseBodyResultObject() = default ;
    CreateAnalysisExportTaskResponseBodyResultObject(const CreateAnalysisExportTaskResponseBodyResultObject &) = default ;
    CreateAnalysisExportTaskResponseBodyResultObject(CreateAnalysisExportTaskResponseBodyResultObject &&) = default ;
    CreateAnalysisExportTaskResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAnalysisExportTaskResponseBodyResultObject() = default ;
    CreateAnalysisExportTaskResponseBodyResultObject& operator=(const CreateAnalysisExportTaskResponseBodyResultObject &) = default ;
    CreateAnalysisExportTaskResponseBodyResultObject& operator=(CreateAnalysisExportTaskResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columns_ != nullptr
        && this->conditions_ != nullptr && this->eventBeginTime_ != nullptr && this->eventCodes_ != nullptr && this->eventEndTime_ != nullptr && this->fileFormat_ != nullptr
        && this->ossKey_ != nullptr && this->scope_ != nullptr && this->status_ != nullptr && this->type_ != nullptr && this->userId_ != nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline string columns() const { DARABONBA_PTR_GET_DEFAULT(columns_, "") };
    inline CreateAnalysisExportTaskResponseBodyResultObject& setColumns(string columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };


    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline string conditions() const { DARABONBA_PTR_GET_DEFAULT(conditions_, "") };
    inline CreateAnalysisExportTaskResponseBodyResultObject& setConditions(string conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };


    // eventBeginTime Field Functions 
    bool hasEventBeginTime() const { return this->eventBeginTime_ != nullptr;};
    void deleteEventBeginTime() { this->eventBeginTime_ = nullptr;};
    inline int64_t eventBeginTime() const { DARABONBA_PTR_GET_DEFAULT(eventBeginTime_, 0L) };
    inline CreateAnalysisExportTaskResponseBodyResultObject& setEventBeginTime(int64_t eventBeginTime) { DARABONBA_PTR_SET_VALUE(eventBeginTime_, eventBeginTime) };


    // eventCodes Field Functions 
    bool hasEventCodes() const { return this->eventCodes_ != nullptr;};
    void deleteEventCodes() { this->eventCodes_ = nullptr;};
    inline string eventCodes() const { DARABONBA_PTR_GET_DEFAULT(eventCodes_, "") };
    inline CreateAnalysisExportTaskResponseBodyResultObject& setEventCodes(string eventCodes) { DARABONBA_PTR_SET_VALUE(eventCodes_, eventCodes) };


    // eventEndTime Field Functions 
    bool hasEventEndTime() const { return this->eventEndTime_ != nullptr;};
    void deleteEventEndTime() { this->eventEndTime_ = nullptr;};
    inline int64_t eventEndTime() const { DARABONBA_PTR_GET_DEFAULT(eventEndTime_, 0L) };
    inline CreateAnalysisExportTaskResponseBodyResultObject& setEventEndTime(int64_t eventEndTime) { DARABONBA_PTR_SET_VALUE(eventEndTime_, eventEndTime) };


    // fileFormat Field Functions 
    bool hasFileFormat() const { return this->fileFormat_ != nullptr;};
    void deleteFileFormat() { this->fileFormat_ = nullptr;};
    inline string fileFormat() const { DARABONBA_PTR_GET_DEFAULT(fileFormat_, "") };
    inline CreateAnalysisExportTaskResponseBodyResultObject& setFileFormat(string fileFormat) { DARABONBA_PTR_SET_VALUE(fileFormat_, fileFormat) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string ossKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline CreateAnalysisExportTaskResponseBodyResultObject& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline CreateAnalysisExportTaskResponseBodyResultObject& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateAnalysisExportTaskResponseBodyResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateAnalysisExportTaskResponseBodyResultObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline CreateAnalysisExportTaskResponseBodyResultObject& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Export list.
    std::shared_ptr<string> columns_ = nullptr;
    // Export task conditions.
    std::shared_ptr<string> conditions_ = nullptr;
    // Event start time.
    std::shared_ptr<int64_t> eventBeginTime_ = nullptr;
    // Event code.
    std::shared_ptr<string> eventCodes_ = nullptr;
    // End time.
    std::shared_ptr<int64_t> eventEndTime_ = nullptr;
    // File format.
    std::shared_ptr<string> fileFormat_ = nullptr;
    // OSS-generated key.
    std::shared_ptr<string> ossKey_ = nullptr;
    // Export task scope.
    std::shared_ptr<string> scope_ = nullptr;
    // Task status.
    std::shared_ptr<string> status_ = nullptr;
    // Export task type.
    std::shared_ptr<string> type_ = nullptr;
    // User UID
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif

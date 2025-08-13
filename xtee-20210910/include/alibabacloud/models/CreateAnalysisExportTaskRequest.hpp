// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANALYSISEXPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANALYSISEXPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateAnalysisExportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAnalysisExportTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(columns, columns_);
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(eventBeginTime, eventBeginTime_);
      DARABONBA_PTR_TO_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_TO_JSON(eventEndTime, eventEndTime_);
      DARABONBA_PTR_TO_JSON(fieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(fieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(fileFormat, fileFormat_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAnalysisExportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(eventBeginTime, eventBeginTime_);
      DARABONBA_PTR_FROM_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_FROM_JSON(eventEndTime, eventEndTime_);
      DARABONBA_PTR_FROM_JSON(fieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(fieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(fileFormat, fileFormat_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateAnalysisExportTaskRequest() = default ;
    CreateAnalysisExportTaskRequest(const CreateAnalysisExportTaskRequest &) = default ;
    CreateAnalysisExportTaskRequest(CreateAnalysisExportTaskRequest &&) = default ;
    CreateAnalysisExportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAnalysisExportTaskRequest() = default ;
    CreateAnalysisExportTaskRequest& operator=(const CreateAnalysisExportTaskRequest &) = default ;
    CreateAnalysisExportTaskRequest& operator=(CreateAnalysisExportTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->columns_ != nullptr && this->conditions_ != nullptr && this->eventBeginTime_ != nullptr && this->eventCodes_ != nullptr && this->eventEndTime_ != nullptr
        && this->fieldName_ != nullptr && this->fieldValue_ != nullptr && this->fileFormat_ != nullptr && this->regId_ != nullptr && this->scope_ != nullptr
        && this->type_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateAnalysisExportTaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline string columns() const { DARABONBA_PTR_GET_DEFAULT(columns_, "") };
    inline CreateAnalysisExportTaskRequest& setColumns(string columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };


    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline string conditions() const { DARABONBA_PTR_GET_DEFAULT(conditions_, "") };
    inline CreateAnalysisExportTaskRequest& setConditions(string conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };


    // eventBeginTime Field Functions 
    bool hasEventBeginTime() const { return this->eventBeginTime_ != nullptr;};
    void deleteEventBeginTime() { this->eventBeginTime_ = nullptr;};
    inline int64_t eventBeginTime() const { DARABONBA_PTR_GET_DEFAULT(eventBeginTime_, 0L) };
    inline CreateAnalysisExportTaskRequest& setEventBeginTime(int64_t eventBeginTime) { DARABONBA_PTR_SET_VALUE(eventBeginTime_, eventBeginTime) };


    // eventCodes Field Functions 
    bool hasEventCodes() const { return this->eventCodes_ != nullptr;};
    void deleteEventCodes() { this->eventCodes_ = nullptr;};
    inline string eventCodes() const { DARABONBA_PTR_GET_DEFAULT(eventCodes_, "") };
    inline CreateAnalysisExportTaskRequest& setEventCodes(string eventCodes) { DARABONBA_PTR_SET_VALUE(eventCodes_, eventCodes) };


    // eventEndTime Field Functions 
    bool hasEventEndTime() const { return this->eventEndTime_ != nullptr;};
    void deleteEventEndTime() { this->eventEndTime_ = nullptr;};
    inline int64_t eventEndTime() const { DARABONBA_PTR_GET_DEFAULT(eventEndTime_, 0L) };
    inline CreateAnalysisExportTaskRequest& setEventEndTime(int64_t eventEndTime) { DARABONBA_PTR_SET_VALUE(eventEndTime_, eventEndTime) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline CreateAnalysisExportTaskRequest& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline CreateAnalysisExportTaskRequest& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // fileFormat Field Functions 
    bool hasFileFormat() const { return this->fileFormat_ != nullptr;};
    void deleteFileFormat() { this->fileFormat_ = nullptr;};
    inline string fileFormat() const { DARABONBA_PTR_GET_DEFAULT(fileFormat_, "") };
    inline CreateAnalysisExportTaskRequest& setFileFormat(string fileFormat) { DARABONBA_PTR_SET_VALUE(fileFormat_, fileFormat) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CreateAnalysisExportTaskRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline CreateAnalysisExportTaskRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateAnalysisExportTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Sets the language type for the request and response messages, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Custom columns
    std::shared_ptr<string> columns_ = nullptr;
    // Query expression
    std::shared_ptr<string> conditions_ = nullptr;
    // Start time, accurate to milliseconds (ms).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> eventBeginTime_ = nullptr;
    // Event code.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventCodes_ = nullptr;
    // End time, accurate to milliseconds (ms).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> eventEndTime_ = nullptr;
    // Field name
    std::shared_ptr<string> fieldName_ = nullptr;
    // Field value
    std::shared_ptr<string> fieldValue_ = nullptr;
    // File format, Excel, CSV
    // 
    // This parameter is required.
    std::shared_ptr<string> fileFormat_ = nullptr;
    // Region code
    // 
    // This parameter is required.
    std::shared_ptr<string> regId_ = nullptr;
    // Export scope: ALL: All, SELECT: Selected rows
    // 
    // This parameter is required.
    std::shared_ptr<string> scope_ = nullptr;
    // Type, BASIC: Basic query, ADVANCE: Advanced query, BATCH: Batch query
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif

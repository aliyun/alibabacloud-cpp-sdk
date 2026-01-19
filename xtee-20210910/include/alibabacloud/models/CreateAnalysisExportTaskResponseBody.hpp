// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANALYSISEXPORTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEANALYSISEXPORTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateAnalysisExportTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAnalysisExportTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAnalysisExportTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    CreateAnalysisExportTaskResponseBody() = default ;
    CreateAnalysisExportTaskResponseBody(const CreateAnalysisExportTaskResponseBody &) = default ;
    CreateAnalysisExportTaskResponseBody(CreateAnalysisExportTaskResponseBody &&) = default ;
    CreateAnalysisExportTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAnalysisExportTaskResponseBody() = default ;
    CreateAnalysisExportTaskResponseBody& operator=(const CreateAnalysisExportTaskResponseBody &) = default ;
    CreateAnalysisExportTaskResponseBody& operator=(CreateAnalysisExportTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
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
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->columns_ == nullptr
        && this->conditions_ == nullptr && this->eventBeginTime_ == nullptr && this->eventCodes_ == nullptr && this->eventEndTime_ == nullptr && this->fileFormat_ == nullptr
        && this->ossKey_ == nullptr && this->scope_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->userId_ == nullptr; };
      // columns Field Functions 
      bool hasColumns() const { return this->columns_ != nullptr;};
      void deleteColumns() { this->columns_ = nullptr;};
      inline string getColumns() const { DARABONBA_PTR_GET_DEFAULT(columns_, "") };
      inline ResultObject& setColumns(string columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };


      // conditions Field Functions 
      bool hasConditions() const { return this->conditions_ != nullptr;};
      void deleteConditions() { this->conditions_ = nullptr;};
      inline string getConditions() const { DARABONBA_PTR_GET_DEFAULT(conditions_, "") };
      inline ResultObject& setConditions(string conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };


      // eventBeginTime Field Functions 
      bool hasEventBeginTime() const { return this->eventBeginTime_ != nullptr;};
      void deleteEventBeginTime() { this->eventBeginTime_ = nullptr;};
      inline int64_t getEventBeginTime() const { DARABONBA_PTR_GET_DEFAULT(eventBeginTime_, 0L) };
      inline ResultObject& setEventBeginTime(int64_t eventBeginTime) { DARABONBA_PTR_SET_VALUE(eventBeginTime_, eventBeginTime) };


      // eventCodes Field Functions 
      bool hasEventCodes() const { return this->eventCodes_ != nullptr;};
      void deleteEventCodes() { this->eventCodes_ = nullptr;};
      inline string getEventCodes() const { DARABONBA_PTR_GET_DEFAULT(eventCodes_, "") };
      inline ResultObject& setEventCodes(string eventCodes) { DARABONBA_PTR_SET_VALUE(eventCodes_, eventCodes) };


      // eventEndTime Field Functions 
      bool hasEventEndTime() const { return this->eventEndTime_ != nullptr;};
      void deleteEventEndTime() { this->eventEndTime_ = nullptr;};
      inline int64_t getEventEndTime() const { DARABONBA_PTR_GET_DEFAULT(eventEndTime_, 0L) };
      inline ResultObject& setEventEndTime(int64_t eventEndTime) { DARABONBA_PTR_SET_VALUE(eventEndTime_, eventEndTime) };


      // fileFormat Field Functions 
      bool hasFileFormat() const { return this->fileFormat_ != nullptr;};
      void deleteFileFormat() { this->fileFormat_ = nullptr;};
      inline string getFileFormat() const { DARABONBA_PTR_GET_DEFAULT(fileFormat_, "") };
      inline ResultObject& setFileFormat(string fileFormat) { DARABONBA_PTR_SET_VALUE(fileFormat_, fileFormat) };


      // ossKey Field Functions 
      bool hasOssKey() const { return this->ossKey_ != nullptr;};
      void deleteOssKey() { this->ossKey_ = nullptr;};
      inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
      inline ResultObject& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline ResultObject& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ResultObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline ResultObject& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // Export list.
      shared_ptr<string> columns_ {};
      // Export task conditions.
      shared_ptr<string> conditions_ {};
      // Event start time.
      shared_ptr<int64_t> eventBeginTime_ {};
      // Event code.
      shared_ptr<string> eventCodes_ {};
      // End time.
      shared_ptr<int64_t> eventEndTime_ {};
      // File format.
      shared_ptr<string> fileFormat_ {};
      // OSS-generated key.
      shared_ptr<string> ossKey_ {};
      // Export task scope.
      shared_ptr<string> scope_ {};
      // Task status.
      shared_ptr<string> status_ {};
      // Export task type.
      shared_ptr<string> type_ {};
      // User UID
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAnalysisExportTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const CreateAnalysisExportTaskResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, CreateAnalysisExportTaskResponseBody::ResultObject) };
    inline CreateAnalysisExportTaskResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, CreateAnalysisExportTaskResponseBody::ResultObject) };
    inline CreateAnalysisExportTaskResponseBody& setResultObject(const CreateAnalysisExportTaskResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline CreateAnalysisExportTaskResponseBody& setResultObject(CreateAnalysisExportTaskResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<CreateAnalysisExportTaskResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif

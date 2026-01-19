// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANALYSISCONDITIONFAVORITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANALYSISCONDITIONFAVORITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAnalysisConditionFavoriteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAnalysisConditionFavoriteListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAnalysisConditionFavoriteListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeAnalysisConditionFavoriteListResponseBody() = default ;
    DescribeAnalysisConditionFavoriteListResponseBody(const DescribeAnalysisConditionFavoriteListResponseBody &) = default ;
    DescribeAnalysisConditionFavoriteListResponseBody(DescribeAnalysisConditionFavoriteListResponseBody &&) = default ;
    DescribeAnalysisConditionFavoriteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAnalysisConditionFavoriteListResponseBody() = default ;
    DescribeAnalysisConditionFavoriteListResponseBody& operator=(const DescribeAnalysisConditionFavoriteListResponseBody &) = default ;
    DescribeAnalysisConditionFavoriteListResponseBody& operator=(DescribeAnalysisConditionFavoriteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(condition, condition_);
        DARABONBA_PTR_TO_JSON(eventBeginTime, eventBeginTime_);
        DARABONBA_PTR_TO_JSON(eventCodes, eventCodes_);
        DARABONBA_PTR_TO_JSON(eventEndTime, eventEndTime_);
        DARABONBA_PTR_TO_JSON(fieldName, fieldName_);
        DARABONBA_PTR_TO_JSON(fieldValue, fieldValue_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(condition, condition_);
        DARABONBA_PTR_FROM_JSON(eventBeginTime, eventBeginTime_);
        DARABONBA_PTR_FROM_JSON(eventCodes, eventCodes_);
        DARABONBA_PTR_FROM_JSON(eventEndTime, eventEndTime_);
        DARABONBA_PTR_FROM_JSON(fieldName, fieldName_);
        DARABONBA_PTR_FROM_JSON(fieldValue, fieldValue_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(type, type_);
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
      virtual bool empty() const override { return this->condition_ == nullptr
        && this->eventBeginTime_ == nullptr && this->eventCodes_ == nullptr && this->eventEndTime_ == nullptr && this->fieldName_ == nullptr && this->fieldValue_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
      // condition Field Functions 
      bool hasCondition() const { return this->condition_ != nullptr;};
      void deleteCondition() { this->condition_ = nullptr;};
      inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
      inline ResultObject& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


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


      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline ResultObject& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      // fieldValue Field Functions 
      bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
      void deleteFieldValue() { this->fieldValue_ = nullptr;};
      inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
      inline ResultObject& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ResultObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ResultObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Condition value.
      shared_ptr<string> condition_ {};
      // Event start timestamp.
      shared_ptr<int64_t> eventBeginTime_ {};
      // Event codes.
      shared_ptr<string> eventCodes_ {};
      // Event end time.
      shared_ptr<int64_t> eventEndTime_ {};
      // Field name.
      shared_ptr<string> fieldName_ {};
      // Field value.
      shared_ptr<string> fieldValue_ {};
      // Primary key ID
      shared_ptr<int64_t> id_ {};
      // Condition name
      shared_ptr<string> name_ {};
      // Type, BASIC: Basic query, ADVANCE: Advanced query, BATCH: Batch query
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAnalysisConditionFavoriteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeAnalysisConditionFavoriteListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeAnalysisConditionFavoriteListResponseBody::ResultObject>) };
    inline vector<DescribeAnalysisConditionFavoriteListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeAnalysisConditionFavoriteListResponseBody::ResultObject>) };
    inline DescribeAnalysisConditionFavoriteListResponseBody& setResultObject(const vector<DescribeAnalysisConditionFavoriteListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeAnalysisConditionFavoriteListResponseBody& setResultObject(vector<DescribeAnalysisConditionFavoriteListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<vector<DescribeAnalysisConditionFavoriteListResponseBody::ResultObject>> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif

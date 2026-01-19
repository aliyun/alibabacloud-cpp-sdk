// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTVARIABLEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTVARIABLEDETAILRESPONSEBODY_HPP_
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
  class DescribeCustVariableDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustVariableDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustVariableDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeCustVariableDetailResponseBody() = default ;
    DescribeCustVariableDetailResponseBody(const DescribeCustVariableDetailResponseBody &) = default ;
    DescribeCustVariableDetailResponseBody(DescribeCustVariableDetailResponseBody &&) = default ;
    DescribeCustVariableDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustVariableDetailResponseBody() = default ;
    DescribeCustVariableDetailResponseBody& operator=(const DescribeCustVariableDetailResponseBody &) = default ;
    DescribeCustVariableDetailResponseBody& operator=(DescribeCustVariableDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(condition, condition_);
        DARABONBA_PTR_TO_JSON(dataVersion, dataVersion_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(eventCodes, eventCodes_);
        DARABONBA_PTR_TO_JSON(historyValueType, historyValueType_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(object, object_);
        DARABONBA_PTR_TO_JSON(outputs, outputs_);
        DARABONBA_PTR_TO_JSON(subject, subject_);
        DARABONBA_PTR_TO_JSON(timeType, timeType_);
        DARABONBA_PTR_TO_JSON(title, title_);
        DARABONBA_PTR_TO_JSON(twCount, twCount_);
        DARABONBA_PTR_TO_JSON(velocityFC, velocityFC_);
        DARABONBA_PTR_TO_JSON(velocityTW, velocityTW_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(condition, condition_);
        DARABONBA_PTR_FROM_JSON(dataVersion, dataVersion_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(eventCodes, eventCodes_);
        DARABONBA_PTR_FROM_JSON(historyValueType, historyValueType_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(object, object_);
        DARABONBA_PTR_FROM_JSON(outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(subject, subject_);
        DARABONBA_PTR_FROM_JSON(timeType, timeType_);
        DARABONBA_PTR_FROM_JSON(title, title_);
        DARABONBA_PTR_FROM_JSON(twCount, twCount_);
        DARABONBA_PTR_FROM_JSON(velocityFC, velocityFC_);
        DARABONBA_PTR_FROM_JSON(velocityTW, velocityTW_);
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
        && this->dataVersion_ == nullptr && this->description_ == nullptr && this->eventCodes_ == nullptr && this->historyValueType_ == nullptr && this->id_ == nullptr
        && this->object_ == nullptr && this->outputs_ == nullptr && this->subject_ == nullptr && this->timeType_ == nullptr && this->title_ == nullptr
        && this->twCount_ == nullptr && this->velocityFC_ == nullptr && this->velocityTW_ == nullptr; };
      // condition Field Functions 
      bool hasCondition() const { return this->condition_ != nullptr;};
      void deleteCondition() { this->condition_ = nullptr;};
      inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
      inline ResultObject& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


      // dataVersion Field Functions 
      bool hasDataVersion() const { return this->dataVersion_ != nullptr;};
      void deleteDataVersion() { this->dataVersion_ = nullptr;};
      inline int64_t getDataVersion() const { DARABONBA_PTR_GET_DEFAULT(dataVersion_, 0L) };
      inline ResultObject& setDataVersion(int64_t dataVersion) { DARABONBA_PTR_SET_VALUE(dataVersion_, dataVersion) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // eventCodes Field Functions 
      bool hasEventCodes() const { return this->eventCodes_ != nullptr;};
      void deleteEventCodes() { this->eventCodes_ = nullptr;};
      inline string getEventCodes() const { DARABONBA_PTR_GET_DEFAULT(eventCodes_, "") };
      inline ResultObject& setEventCodes(string eventCodes) { DARABONBA_PTR_SET_VALUE(eventCodes_, eventCodes) };


      // historyValueType Field Functions 
      bool hasHistoryValueType() const { return this->historyValueType_ != nullptr;};
      void deleteHistoryValueType() { this->historyValueType_ = nullptr;};
      inline string getHistoryValueType() const { DARABONBA_PTR_GET_DEFAULT(historyValueType_, "") };
      inline ResultObject& setHistoryValueType(string historyValueType) { DARABONBA_PTR_SET_VALUE(historyValueType_, historyValueType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // object Field Functions 
      bool hasObject() const { return this->object_ != nullptr;};
      void deleteObject() { this->object_ = nullptr;};
      inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
      inline ResultObject& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
      inline ResultObject& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


      // subject Field Functions 
      bool hasSubject() const { return this->subject_ != nullptr;};
      void deleteSubject() { this->subject_ = nullptr;};
      inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
      inline ResultObject& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


      // timeType Field Functions 
      bool hasTimeType() const { return this->timeType_ != nullptr;};
      void deleteTimeType() { this->timeType_ = nullptr;};
      inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
      inline ResultObject& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ResultObject& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // twCount Field Functions 
      bool hasTwCount() const { return this->twCount_ != nullptr;};
      void deleteTwCount() { this->twCount_ = nullptr;};
      inline string getTwCount() const { DARABONBA_PTR_GET_DEFAULT(twCount_, "") };
      inline ResultObject& setTwCount(string twCount) { DARABONBA_PTR_SET_VALUE(twCount_, twCount) };


      // velocityFC Field Functions 
      bool hasVelocityFC() const { return this->velocityFC_ != nullptr;};
      void deleteVelocityFC() { this->velocityFC_ = nullptr;};
      inline string getVelocityFC() const { DARABONBA_PTR_GET_DEFAULT(velocityFC_, "") };
      inline ResultObject& setVelocityFC(string velocityFC) { DARABONBA_PTR_SET_VALUE(velocityFC_, velocityFC) };


      // velocityTW Field Functions 
      bool hasVelocityTW() const { return this->velocityTW_ != nullptr;};
      void deleteVelocityTW() { this->velocityTW_ = nullptr;};
      inline string getVelocityTW() const { DARABONBA_PTR_GET_DEFAULT(velocityTW_, "") };
      inline ResultObject& setVelocityTW(string velocityTW) { DARABONBA_PTR_SET_VALUE(velocityTW_, velocityTW) };


    protected:
      // Condition value.
      shared_ptr<string> condition_ {};
      // Data version.
      shared_ptr<int64_t> dataVersion_ {};
      // Description information.
      shared_ptr<string> description_ {};
      // Event code.
      shared_ptr<string> eventCodes_ {};
      // Value type
      shared_ptr<string> historyValueType_ {};
      // Primary key ID of the cumulative variable
      shared_ptr<int64_t> id_ {};
      // Cumulative object
      shared_ptr<string> object_ {};
      // Variable return type
      shared_ptr<string> outputs_ {};
      // Main object
      shared_ptr<string> subject_ {};
      // Time slice type
      shared_ptr<string> timeType_ {};
      // Title.
      shared_ptr<string> title_ {};
      // Time count
      shared_ptr<string> twCount_ {};
      // Variable type
      shared_ptr<string> velocityFC_ {};
      // Time slice unit
      shared_ptr<string> velocityTW_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustVariableDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeCustVariableDetailResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeCustVariableDetailResponseBody::ResultObject>) };
    inline vector<DescribeCustVariableDetailResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeCustVariableDetailResponseBody::ResultObject>) };
    inline DescribeCustVariableDetailResponseBody& setResultObject(const vector<DescribeCustVariableDetailResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeCustVariableDetailResponseBody& setResultObject(vector<DescribeCustVariableDetailResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<vector<DescribeCustVariableDetailResponseBody::ResultObject>> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif

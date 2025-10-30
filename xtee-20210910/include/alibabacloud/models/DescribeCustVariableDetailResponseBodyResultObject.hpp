// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTVARIABLEDETAILRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTVARIABLEDETAILRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeCustVariableDetailResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustVariableDetailResponseBodyResultObject& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeCustVariableDetailResponseBodyResultObject& obj) { 
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
    DescribeCustVariableDetailResponseBodyResultObject() = default ;
    DescribeCustVariableDetailResponseBodyResultObject(const DescribeCustVariableDetailResponseBodyResultObject &) = default ;
    DescribeCustVariableDetailResponseBodyResultObject(DescribeCustVariableDetailResponseBodyResultObject &&) = default ;
    DescribeCustVariableDetailResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustVariableDetailResponseBodyResultObject() = default ;
    DescribeCustVariableDetailResponseBodyResultObject& operator=(const DescribeCustVariableDetailResponseBodyResultObject &) = default ;
    DescribeCustVariableDetailResponseBodyResultObject& operator=(DescribeCustVariableDetailResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && return this->dataVersion_ == nullptr && return this->description_ == nullptr && return this->eventCodes_ == nullptr && return this->historyValueType_ == nullptr && return this->id_ == nullptr
        && return this->object_ == nullptr && return this->outputs_ == nullptr && return this->subject_ == nullptr && return this->timeType_ == nullptr && return this->title_ == nullptr
        && return this->twCount_ == nullptr && return this->velocityFC_ == nullptr && return this->velocityTW_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline DescribeCustVariableDetailResponseBodyResultObject& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // dataVersion Field Functions 
    bool hasDataVersion() const { return this->dataVersion_ != nullptr;};
    void deleteDataVersion() { this->dataVersion_ = nullptr;};
    inline int64_t dataVersion() const { DARABONBA_PTR_GET_DEFAULT(dataVersion_, 0L) };
    inline DescribeCustVariableDetailResponseBodyResultObject& setDataVersion(int64_t dataVersion) { DARABONBA_PTR_SET_VALUE(dataVersion_, dataVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCustVariableDetailResponseBodyResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventCodes Field Functions 
    bool hasEventCodes() const { return this->eventCodes_ != nullptr;};
    void deleteEventCodes() { this->eventCodes_ = nullptr;};
    inline string eventCodes() const { DARABONBA_PTR_GET_DEFAULT(eventCodes_, "") };
    inline DescribeCustVariableDetailResponseBodyResultObject& setEventCodes(string eventCodes) { DARABONBA_PTR_SET_VALUE(eventCodes_, eventCodes) };


    // historyValueType Field Functions 
    bool hasHistoryValueType() const { return this->historyValueType_ != nullptr;};
    void deleteHistoryValueType() { this->historyValueType_ = nullptr;};
    inline string historyValueType() const { DARABONBA_PTR_GET_DEFAULT(historyValueType_, "") };
    inline DescribeCustVariableDetailResponseBodyResultObject& setHistoryValueType(string historyValueType) { DARABONBA_PTR_SET_VALUE(historyValueType_, historyValueType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeCustVariableDetailResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // object Field Functions 
    bool hasObject() const { return this->object_ != nullptr;};
    void deleteObject() { this->object_ = nullptr;};
    inline string object() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
    inline DescribeCustVariableDetailResponseBodyResultObject& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string outputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline DescribeCustVariableDetailResponseBodyResultObject& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline DescribeCustVariableDetailResponseBodyResultObject& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline string timeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
    inline DescribeCustVariableDetailResponseBodyResultObject& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeCustVariableDetailResponseBodyResultObject& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // twCount Field Functions 
    bool hasTwCount() const { return this->twCount_ != nullptr;};
    void deleteTwCount() { this->twCount_ = nullptr;};
    inline string twCount() const { DARABONBA_PTR_GET_DEFAULT(twCount_, "") };
    inline DescribeCustVariableDetailResponseBodyResultObject& setTwCount(string twCount) { DARABONBA_PTR_SET_VALUE(twCount_, twCount) };


    // velocityFC Field Functions 
    bool hasVelocityFC() const { return this->velocityFC_ != nullptr;};
    void deleteVelocityFC() { this->velocityFC_ = nullptr;};
    inline string velocityFC() const { DARABONBA_PTR_GET_DEFAULT(velocityFC_, "") };
    inline DescribeCustVariableDetailResponseBodyResultObject& setVelocityFC(string velocityFC) { DARABONBA_PTR_SET_VALUE(velocityFC_, velocityFC) };


    // velocityTW Field Functions 
    bool hasVelocityTW() const { return this->velocityTW_ != nullptr;};
    void deleteVelocityTW() { this->velocityTW_ = nullptr;};
    inline string velocityTW() const { DARABONBA_PTR_GET_DEFAULT(velocityTW_, "") };
    inline DescribeCustVariableDetailResponseBodyResultObject& setVelocityTW(string velocityTW) { DARABONBA_PTR_SET_VALUE(velocityTW_, velocityTW) };


  protected:
    // Condition value.
    std::shared_ptr<string> condition_ = nullptr;
    // Data version.
    std::shared_ptr<int64_t> dataVersion_ = nullptr;
    // Description information.
    std::shared_ptr<string> description_ = nullptr;
    // Event code.
    std::shared_ptr<string> eventCodes_ = nullptr;
    // Value type
    std::shared_ptr<string> historyValueType_ = nullptr;
    // Primary key ID of the cumulative variable
    std::shared_ptr<int64_t> id_ = nullptr;
    // Cumulative object
    std::shared_ptr<string> object_ = nullptr;
    // Variable return type
    std::shared_ptr<string> outputs_ = nullptr;
    // Main object
    std::shared_ptr<string> subject_ = nullptr;
    // Time slice type
    std::shared_ptr<string> timeType_ = nullptr;
    // Title.
    std::shared_ptr<string> title_ = nullptr;
    // Time count
    std::shared_ptr<string> twCount_ = nullptr;
    // Variable type
    std::shared_ptr<string> velocityFC_ = nullptr;
    // Time slice unit
    std::shared_ptr<string> velocityTW_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif

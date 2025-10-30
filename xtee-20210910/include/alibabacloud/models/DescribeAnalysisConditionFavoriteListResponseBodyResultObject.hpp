// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANALYSISCONDITIONFAVORITELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANALYSISCONDITIONFAVORITELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAnalysisConditionFavoriteListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAnalysisConditionFavoriteListResponseBodyResultObject& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeAnalysisConditionFavoriteListResponseBodyResultObject& obj) { 
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
    DescribeAnalysisConditionFavoriteListResponseBodyResultObject() = default ;
    DescribeAnalysisConditionFavoriteListResponseBodyResultObject(const DescribeAnalysisConditionFavoriteListResponseBodyResultObject &) = default ;
    DescribeAnalysisConditionFavoriteListResponseBodyResultObject(DescribeAnalysisConditionFavoriteListResponseBodyResultObject &&) = default ;
    DescribeAnalysisConditionFavoriteListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAnalysisConditionFavoriteListResponseBodyResultObject() = default ;
    DescribeAnalysisConditionFavoriteListResponseBodyResultObject& operator=(const DescribeAnalysisConditionFavoriteListResponseBodyResultObject &) = default ;
    DescribeAnalysisConditionFavoriteListResponseBodyResultObject& operator=(DescribeAnalysisConditionFavoriteListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && return this->eventBeginTime_ == nullptr && return this->eventCodes_ == nullptr && return this->eventEndTime_ == nullptr && return this->fieldName_ == nullptr && return this->fieldValue_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline DescribeAnalysisConditionFavoriteListResponseBodyResultObject& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // eventBeginTime Field Functions 
    bool hasEventBeginTime() const { return this->eventBeginTime_ != nullptr;};
    void deleteEventBeginTime() { this->eventBeginTime_ = nullptr;};
    inline int64_t eventBeginTime() const { DARABONBA_PTR_GET_DEFAULT(eventBeginTime_, 0L) };
    inline DescribeAnalysisConditionFavoriteListResponseBodyResultObject& setEventBeginTime(int64_t eventBeginTime) { DARABONBA_PTR_SET_VALUE(eventBeginTime_, eventBeginTime) };


    // eventCodes Field Functions 
    bool hasEventCodes() const { return this->eventCodes_ != nullptr;};
    void deleteEventCodes() { this->eventCodes_ = nullptr;};
    inline string eventCodes() const { DARABONBA_PTR_GET_DEFAULT(eventCodes_, "") };
    inline DescribeAnalysisConditionFavoriteListResponseBodyResultObject& setEventCodes(string eventCodes) { DARABONBA_PTR_SET_VALUE(eventCodes_, eventCodes) };


    // eventEndTime Field Functions 
    bool hasEventEndTime() const { return this->eventEndTime_ != nullptr;};
    void deleteEventEndTime() { this->eventEndTime_ = nullptr;};
    inline int64_t eventEndTime() const { DARABONBA_PTR_GET_DEFAULT(eventEndTime_, 0L) };
    inline DescribeAnalysisConditionFavoriteListResponseBodyResultObject& setEventEndTime(int64_t eventEndTime) { DARABONBA_PTR_SET_VALUE(eventEndTime_, eventEndTime) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DescribeAnalysisConditionFavoriteListResponseBodyResultObject& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline DescribeAnalysisConditionFavoriteListResponseBodyResultObject& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeAnalysisConditionFavoriteListResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAnalysisConditionFavoriteListResponseBodyResultObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAnalysisConditionFavoriteListResponseBodyResultObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Condition value.
    std::shared_ptr<string> condition_ = nullptr;
    // Event start timestamp.
    std::shared_ptr<int64_t> eventBeginTime_ = nullptr;
    // Event codes.
    std::shared_ptr<string> eventCodes_ = nullptr;
    // Event end time.
    std::shared_ptr<int64_t> eventEndTime_ = nullptr;
    // Field name.
    std::shared_ptr<string> fieldName_ = nullptr;
    // Field value.
    std::shared_ptr<string> fieldValue_ = nullptr;
    // Primary key ID
    std::shared_ptr<int64_t> id_ = nullptr;
    // Condition name
    std::shared_ptr<string> name_ = nullptr;
    // Type, BASIC: Basic query, ADVANCE: Advanced query, BATCH: Batch query
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif

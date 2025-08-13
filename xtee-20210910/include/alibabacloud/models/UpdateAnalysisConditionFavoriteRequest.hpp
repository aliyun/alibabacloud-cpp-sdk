// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEANALYSISCONDITIONFAVORITEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEANALYSISCONDITIONFAVORITEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class UpdateAnalysisConditionFavoriteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAnalysisConditionFavoriteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(eventBeginTime, eventBeginTime_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(eventEndTime, eventEndTime_);
      DARABONBA_PTR_TO_JSON(fieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(fieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAnalysisConditionFavoriteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(eventBeginTime, eventBeginTime_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(eventEndTime, eventEndTime_);
      DARABONBA_PTR_FROM_JSON(fieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(fieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    UpdateAnalysisConditionFavoriteRequest() = default ;
    UpdateAnalysisConditionFavoriteRequest(const UpdateAnalysisConditionFavoriteRequest &) = default ;
    UpdateAnalysisConditionFavoriteRequest(UpdateAnalysisConditionFavoriteRequest &&) = default ;
    UpdateAnalysisConditionFavoriteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAnalysisConditionFavoriteRequest() = default ;
    UpdateAnalysisConditionFavoriteRequest& operator=(const UpdateAnalysisConditionFavoriteRequest &) = default ;
    UpdateAnalysisConditionFavoriteRequest& operator=(UpdateAnalysisConditionFavoriteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->condition_ != nullptr && this->eventBeginTime_ != nullptr && this->eventCode_ != nullptr && this->eventEndTime_ != nullptr && this->fieldName_ != nullptr
        && this->fieldValue_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->regId_ != nullptr && this->type_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateAnalysisConditionFavoriteRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline UpdateAnalysisConditionFavoriteRequest& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // eventBeginTime Field Functions 
    bool hasEventBeginTime() const { return this->eventBeginTime_ != nullptr;};
    void deleteEventBeginTime() { this->eventBeginTime_ = nullptr;};
    inline int64_t eventBeginTime() const { DARABONBA_PTR_GET_DEFAULT(eventBeginTime_, 0L) };
    inline UpdateAnalysisConditionFavoriteRequest& setEventBeginTime(int64_t eventBeginTime) { DARABONBA_PTR_SET_VALUE(eventBeginTime_, eventBeginTime) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline UpdateAnalysisConditionFavoriteRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventEndTime Field Functions 
    bool hasEventEndTime() const { return this->eventEndTime_ != nullptr;};
    void deleteEventEndTime() { this->eventEndTime_ = nullptr;};
    inline int64_t eventEndTime() const { DARABONBA_PTR_GET_DEFAULT(eventEndTime_, 0L) };
    inline UpdateAnalysisConditionFavoriteRequest& setEventEndTime(int64_t eventEndTime) { DARABONBA_PTR_SET_VALUE(eventEndTime_, eventEndTime) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline UpdateAnalysisConditionFavoriteRequest& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline UpdateAnalysisConditionFavoriteRequest& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateAnalysisConditionFavoriteRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAnalysisConditionFavoriteRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline UpdateAnalysisConditionFavoriteRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateAnalysisConditionFavoriteRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Condition value.
    std::shared_ptr<string> condition_ = nullptr;
    // Start time, accurate to milliseconds (ms).
    std::shared_ptr<int64_t> eventBeginTime_ = nullptr;
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // End time, accurate to milliseconds (ms).
    std::shared_ptr<int64_t> eventEndTime_ = nullptr;
    // Field name
    std::shared_ptr<string> fieldName_ = nullptr;
    // Field value
    std::shared_ptr<string> fieldValue_ = nullptr;
    // Primary key ID
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Condition name
    std::shared_ptr<string> name_ = nullptr;
    // Region code
    // 
    // This parameter is required.
    std::shared_ptr<string> regId_ = nullptr;
    // Type, BASIC: Basic query, ADVANCE: Advanced query, BATCH: Batch query
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif

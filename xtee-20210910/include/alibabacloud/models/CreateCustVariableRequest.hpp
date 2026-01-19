// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTVARIABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTVARIABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateCustVariableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustVariableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(createType, createType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_TO_JSON(historyValueType, historyValueType_);
      DARABONBA_PTR_TO_JSON(object, object_);
      DARABONBA_PTR_TO_JSON(outputs, outputs_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(timeType, timeType_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(twCount, twCount_);
      DARABONBA_PTR_TO_JSON(velocityFC, velocityFC_);
      DARABONBA_PTR_TO_JSON(velocityTW, velocityTW_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustVariableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(createType, createType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_FROM_JSON(historyValueType, historyValueType_);
      DARABONBA_PTR_FROM_JSON(object, object_);
      DARABONBA_PTR_FROM_JSON(outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(timeType, timeType_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(twCount, twCount_);
      DARABONBA_PTR_FROM_JSON(velocityFC, velocityFC_);
      DARABONBA_PTR_FROM_JSON(velocityTW, velocityTW_);
    };
    CreateCustVariableRequest() = default ;
    CreateCustVariableRequest(const CreateCustVariableRequest &) = default ;
    CreateCustVariableRequest(CreateCustVariableRequest &&) = default ;
    CreateCustVariableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustVariableRequest() = default ;
    CreateCustVariableRequest& operator=(const CreateCustVariableRequest &) = default ;
    CreateCustVariableRequest& operator=(CreateCustVariableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->condition_ == nullptr && this->createType_ == nullptr && this->description_ == nullptr && this->eventCodes_ == nullptr && this->historyValueType_ == nullptr
        && this->object_ == nullptr && this->outputs_ == nullptr && this->regId_ == nullptr && this->subject_ == nullptr && this->timeType_ == nullptr
        && this->title_ == nullptr && this->twCount_ == nullptr && this->velocityFC_ == nullptr && this->velocityTW_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateCustVariableRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline CreateCustVariableRequest& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline CreateCustVariableRequest& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCustVariableRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventCodes Field Functions 
    bool hasEventCodes() const { return this->eventCodes_ != nullptr;};
    void deleteEventCodes() { this->eventCodes_ = nullptr;};
    inline string getEventCodes() const { DARABONBA_PTR_GET_DEFAULT(eventCodes_, "") };
    inline CreateCustVariableRequest& setEventCodes(string eventCodes) { DARABONBA_PTR_SET_VALUE(eventCodes_, eventCodes) };


    // historyValueType Field Functions 
    bool hasHistoryValueType() const { return this->historyValueType_ != nullptr;};
    void deleteHistoryValueType() { this->historyValueType_ = nullptr;};
    inline string getHistoryValueType() const { DARABONBA_PTR_GET_DEFAULT(historyValueType_, "") };
    inline CreateCustVariableRequest& setHistoryValueType(string historyValueType) { DARABONBA_PTR_SET_VALUE(historyValueType_, historyValueType) };


    // object Field Functions 
    bool hasObject() const { return this->object_ != nullptr;};
    void deleteObject() { this->object_ = nullptr;};
    inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
    inline CreateCustVariableRequest& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline CreateCustVariableRequest& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CreateCustVariableRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline CreateCustVariableRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
    inline CreateCustVariableRequest& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateCustVariableRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // twCount Field Functions 
    bool hasTwCount() const { return this->twCount_ != nullptr;};
    void deleteTwCount() { this->twCount_ = nullptr;};
    inline int32_t getTwCount() const { DARABONBA_PTR_GET_DEFAULT(twCount_, 0) };
    inline CreateCustVariableRequest& setTwCount(int32_t twCount) { DARABONBA_PTR_SET_VALUE(twCount_, twCount) };


    // velocityFC Field Functions 
    bool hasVelocityFC() const { return this->velocityFC_ != nullptr;};
    void deleteVelocityFC() { this->velocityFC_ = nullptr;};
    inline string getVelocityFC() const { DARABONBA_PTR_GET_DEFAULT(velocityFC_, "") };
    inline CreateCustVariableRequest& setVelocityFC(string velocityFC) { DARABONBA_PTR_SET_VALUE(velocityFC_, velocityFC) };


    // velocityTW Field Functions 
    bool hasVelocityTW() const { return this->velocityTW_ != nullptr;};
    void deleteVelocityTW() { this->velocityTW_ = nullptr;};
    inline string getVelocityTW() const { DARABONBA_PTR_GET_DEFAULT(velocityTW_, "") };
    inline CreateCustVariableRequest& setVelocityTW(string velocityTW) { DARABONBA_PTR_SET_VALUE(velocityTW_, velocityTW) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Condition value.
    shared_ptr<string> condition_ {};
    // Creation type
    shared_ptr<string> createType_ {};
    // Description information.
    shared_ptr<string> description_ {};
    // Event code
    // 
    // This parameter is required.
    shared_ptr<string> eventCodes_ {};
    // Value type
    shared_ptr<string> historyValueType_ {};
    // Accumulative object
    shared_ptr<string> object_ {};
    // Variable return type
    shared_ptr<string> outputs_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Primary object
    // 
    // This parameter is required.
    shared_ptr<string> subject_ {};
    // Time slice type
    // 
    // This parameter is required.
    shared_ptr<string> timeType_ {};
    // Title.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
    // Number of time units
    shared_ptr<int32_t> twCount_ {};
    // Variable type
    // 
    // This parameter is required.
    shared_ptr<string> velocityFC_ {};
    // Time slice unit
    // 
    // This parameter is required.
    shared_ptr<string> velocityTW_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif

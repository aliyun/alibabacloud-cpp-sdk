// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDVARIABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDVARIABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class BindVariableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindVariableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(apiRegionId, apiRegionId_);
      DARABONBA_PTR_TO_JSON(apiType, apiType_);
      DARABONBA_PTR_TO_JSON(createType, createType_);
      DARABONBA_PTR_TO_JSON(defineId, defineId_);
      DARABONBA_PTR_TO_JSON(defineIds, defineIds_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(exceptionValue, exceptionValue_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(outputField, outputField_);
      DARABONBA_PTR_TO_JSON(outputType, outputType_);
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(paramsList, paramsList_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, BindVariableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(apiRegionId, apiRegionId_);
      DARABONBA_PTR_FROM_JSON(apiType, apiType_);
      DARABONBA_PTR_FROM_JSON(createType, createType_);
      DARABONBA_PTR_FROM_JSON(defineId, defineId_);
      DARABONBA_PTR_FROM_JSON(defineIds, defineIds_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(exceptionValue, exceptionValue_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(outputField, outputField_);
      DARABONBA_PTR_FROM_JSON(outputType, outputType_);
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(paramsList, paramsList_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    BindVariableRequest() = default ;
    BindVariableRequest(const BindVariableRequest &) = default ;
    BindVariableRequest(BindVariableRequest &&) = default ;
    BindVariableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindVariableRequest() = default ;
    BindVariableRequest& operator=(const BindVariableRequest &) = default ;
    BindVariableRequest& operator=(BindVariableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->apiRegionId_ == nullptr && return this->apiType_ == nullptr && return this->createType_ == nullptr && return this->defineId_ == nullptr && return this->defineIds_ == nullptr
        && return this->description_ == nullptr && return this->eventCode_ == nullptr && return this->exceptionValue_ == nullptr && return this->id_ == nullptr && return this->outputField_ == nullptr
        && return this->outputType_ == nullptr && return this->params_ == nullptr && return this->paramsList_ == nullptr && return this->regId_ == nullptr && return this->sourceType_ == nullptr
        && return this->title_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline BindVariableRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // apiRegionId Field Functions 
    bool hasApiRegionId() const { return this->apiRegionId_ != nullptr;};
    void deleteApiRegionId() { this->apiRegionId_ = nullptr;};
    inline string apiRegionId() const { DARABONBA_PTR_GET_DEFAULT(apiRegionId_, "") };
    inline BindVariableRequest& setApiRegionId(string apiRegionId) { DARABONBA_PTR_SET_VALUE(apiRegionId_, apiRegionId) };


    // apiType Field Functions 
    bool hasApiType() const { return this->apiType_ != nullptr;};
    void deleteApiType() { this->apiType_ = nullptr;};
    inline string apiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
    inline BindVariableRequest& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string createType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline BindVariableRequest& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // defineId Field Functions 
    bool hasDefineId() const { return this->defineId_ != nullptr;};
    void deleteDefineId() { this->defineId_ = nullptr;};
    inline string defineId() const { DARABONBA_PTR_GET_DEFAULT(defineId_, "") };
    inline BindVariableRequest& setDefineId(string defineId) { DARABONBA_PTR_SET_VALUE(defineId_, defineId) };


    // defineIds Field Functions 
    bool hasDefineIds() const { return this->defineIds_ != nullptr;};
    void deleteDefineIds() { this->defineIds_ = nullptr;};
    inline string defineIds() const { DARABONBA_PTR_GET_DEFAULT(defineIds_, "") };
    inline BindVariableRequest& setDefineIds(string defineIds) { DARABONBA_PTR_SET_VALUE(defineIds_, defineIds) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline BindVariableRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline BindVariableRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // exceptionValue Field Functions 
    bool hasExceptionValue() const { return this->exceptionValue_ != nullptr;};
    void deleteExceptionValue() { this->exceptionValue_ = nullptr;};
    inline string exceptionValue() const { DARABONBA_PTR_GET_DEFAULT(exceptionValue_, "") };
    inline BindVariableRequest& setExceptionValue(string exceptionValue) { DARABONBA_PTR_SET_VALUE(exceptionValue_, exceptionValue) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline BindVariableRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // outputField Field Functions 
    bool hasOutputField() const { return this->outputField_ != nullptr;};
    void deleteOutputField() { this->outputField_ = nullptr;};
    inline string outputField() const { DARABONBA_PTR_GET_DEFAULT(outputField_, "") };
    inline BindVariableRequest& setOutputField(string outputField) { DARABONBA_PTR_SET_VALUE(outputField_, outputField) };


    // outputType Field Functions 
    bool hasOutputType() const { return this->outputType_ != nullptr;};
    void deleteOutputType() { this->outputType_ = nullptr;};
    inline string outputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
    inline BindVariableRequest& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline BindVariableRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // paramsList Field Functions 
    bool hasParamsList() const { return this->paramsList_ != nullptr;};
    void deleteParamsList() { this->paramsList_ = nullptr;};
    inline string paramsList() const { DARABONBA_PTR_GET_DEFAULT(paramsList_, "") };
    inline BindVariableRequest& setParamsList(string paramsList) { DARABONBA_PTR_SET_VALUE(paramsList_, paramsList) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline BindVariableRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline BindVariableRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline BindVariableRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // API region ID
    std::shared_ptr<string> apiRegionId_ = nullptr;
    // API type
    std::shared_ptr<string> apiType_ = nullptr;
    // Creation type
    std::shared_ptr<string> createType_ = nullptr;
    // Associated variable definition primary key ID
    std::shared_ptr<string> defineId_ = nullptr;
    // Variable definition IDs, can be multiple. If binding multiple IDs, separate them with commas
    std::shared_ptr<string> defineIds_ = nullptr;
    // Description information.
    std::shared_ptr<string> description_ = nullptr;
    // Event code
    // 
    // This parameter is required.
    std::shared_ptr<string> eventCode_ = nullptr;
    // Exception value
    std::shared_ptr<string> exceptionValue_ = nullptr;
    // Variable primary key ID
    std::shared_ptr<int64_t> id_ = nullptr;
    // Output field path
    std::shared_ptr<string> outputField_ = nullptr;
    // Output type
    std::shared_ptr<string> outputType_ = nullptr;
    // Binding input parameter information
    std::shared_ptr<string> params_ = nullptr;
    // Event parameter mapping 2.0, either params or paramsList must not be empty. List, JSON structure
    std::shared_ptr<string> paramsList_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Variable source
    std::shared_ptr<string> sourceType_ = nullptr;
    // Title
    // 
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif

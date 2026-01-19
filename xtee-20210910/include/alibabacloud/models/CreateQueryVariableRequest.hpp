// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUERYVARIABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUERYVARIABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateQueryVariableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQueryVariableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(dataSourceCode, dataSourceCode_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(expression, expression_);
      DARABONBA_PTR_TO_JSON(expressionTitle, expressionTitle_);
      DARABONBA_PTR_TO_JSON(expressionVariable, expressionVariable_);
      DARABONBA_PTR_TO_JSON(outlier, outlier_);
      DARABONBA_PTR_TO_JSON(outputs, outputs_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQueryVariableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(dataSourceCode, dataSourceCode_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(expression, expression_);
      DARABONBA_PTR_FROM_JSON(expressionTitle, expressionTitle_);
      DARABONBA_PTR_FROM_JSON(expressionVariable, expressionVariable_);
      DARABONBA_PTR_FROM_JSON(outlier, outlier_);
      DARABONBA_PTR_FROM_JSON(outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    CreateQueryVariableRequest() = default ;
    CreateQueryVariableRequest(const CreateQueryVariableRequest &) = default ;
    CreateQueryVariableRequest(CreateQueryVariableRequest &&) = default ;
    CreateQueryVariableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQueryVariableRequest() = default ;
    CreateQueryVariableRequest& operator=(const CreateQueryVariableRequest &) = default ;
    CreateQueryVariableRequest& operator=(CreateQueryVariableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->dataSourceCode_ == nullptr && this->description_ == nullptr && this->eventCode_ == nullptr && this->expression_ == nullptr && this->expressionTitle_ == nullptr
        && this->expressionVariable_ == nullptr && this->outlier_ == nullptr && this->outputs_ == nullptr && this->regId_ == nullptr && this->title_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateQueryVariableRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // dataSourceCode Field Functions 
    bool hasDataSourceCode() const { return this->dataSourceCode_ != nullptr;};
    void deleteDataSourceCode() { this->dataSourceCode_ = nullptr;};
    inline string getDataSourceCode() const { DARABONBA_PTR_GET_DEFAULT(dataSourceCode_, "") };
    inline CreateQueryVariableRequest& setDataSourceCode(string dataSourceCode) { DARABONBA_PTR_SET_VALUE(dataSourceCode_, dataSourceCode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateQueryVariableRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline CreateQueryVariableRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline CreateQueryVariableRequest& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // expressionTitle Field Functions 
    bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
    void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
    inline string getExpressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
    inline CreateQueryVariableRequest& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


    // expressionVariable Field Functions 
    bool hasExpressionVariable() const { return this->expressionVariable_ != nullptr;};
    void deleteExpressionVariable() { this->expressionVariable_ = nullptr;};
    inline string getExpressionVariable() const { DARABONBA_PTR_GET_DEFAULT(expressionVariable_, "") };
    inline CreateQueryVariableRequest& setExpressionVariable(string expressionVariable) { DARABONBA_PTR_SET_VALUE(expressionVariable_, expressionVariable) };


    // outlier Field Functions 
    bool hasOutlier() const { return this->outlier_ != nullptr;};
    void deleteOutlier() { this->outlier_ = nullptr;};
    inline string getOutlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
    inline CreateQueryVariableRequest& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline CreateQueryVariableRequest& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CreateQueryVariableRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateQueryVariableRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Data source ID.
    // 
    // This parameter is required.
    shared_ptr<string> dataSourceCode_ {};
    // Description.
    shared_ptr<string> description_ {};
    // Event code
    // 
    // This parameter is required.
    shared_ptr<string> eventCode_ {};
    // Calculation expression
    // 
    // This parameter is required.
    shared_ptr<string> expression_ {};
    // Display value of calculation expression
    // 
    // This parameter is required.
    shared_ptr<string> expressionTitle_ {};
    // Calculation expression variable
    // 
    // This parameter is required.
    shared_ptr<string> expressionVariable_ {};
    // Outlier
    // 
    // This parameter is required.
    shared_ptr<string> outlier_ {};
    // Variable return type
    // 
    // This parameter is required.
    shared_ptr<string> outputs_ {};
    // Region code
    // 
    // This parameter is required.
    shared_ptr<string> regId_ {};
    // Title.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
